#include "functions.h"

/* _ZN15ConnectionLobby26sendListSessionsAllPackageEhi @ 001c7fd4 (arm) */
void fn_001c7fd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c7fd4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c7fd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c7fdc:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c7fe0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c7fe4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c7fe8:;
    {
        cpu->r[14] = 0x001c7fecu; fn_0018ba6c(cpu);
    }
L_001c7fec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c7ff0:;
    {
        cpu->r[14] = 0x001c7ff4u; fn_001c9558(cpu);
    }
L_001c7ff4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c7ff8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c7ffc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8000:;
    {
        cpu->r[14] = 0x001c8008u;
    }
L_001c8004:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8008u)) return;
    }
L_001c8008:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c800c:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c8010:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8014:;
    {
        cpu->r[14] = 0x001c801cu;
    }
L_001c8018:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c801cu)) return;
    }
L_001c801c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8020:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001c8024:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8028:;
    {
        cpu->r[14] = 0x001c8030u;
    }
L_001c802c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8030u)) return;
    }
L_001c8030:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8034:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8038:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c803c:;
    {
        cpu->r[14] = 0x001c8044u;
    }
L_001c8040:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8044u)) return;
    }
L_001c8044:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c8048:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c804c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8050:;
    {
        cpu->r[14] = 0x001c8058u;
    }
L_001c8054:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8058u)) return;
    }
L_001c8058:;
    {
        cpu->r[1] = 0x00000061u;
    }
L_001c805c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8060:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8064:;
    {
        cpu->r[14] = 0x001c806cu;
    }
L_001c8068:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c806cu)) return;
    }
L_001c806c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8070:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8074:;
    {
        cpu->r[14] = 0x001c807cu;
    }
L_001c8078:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c807cu)) return;
    }
L_001c807c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8080:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c8084:;
    {
        cpu->r[14] = 0x001c8088u; fn_001c6e04(cpu);
    }
L_001c8088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c808c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c8090:;
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
L_001c8094:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby23sendListSessionsPackageEhi @ 001c8098 (arm) */
void fn_001c8098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8098:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c809c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c80a0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c80a4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001c80a8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c80ac:;
    {
        cpu->r[14] = 0x001c80b0u; fn_0018ba6c(cpu);
    }
L_001c80b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c80b4:;
    {
        cpu->r[14] = 0x001c80b8u; fn_001c9558(cpu);
    }
L_001c80b8:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c80bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c80c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c80c4:;
    {
        cpu->r[14] = 0x001c80ccu;
    }
L_001c80c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c80ccu)) return;
    }
L_001c80cc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c80d0:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c80d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c80d8:;
    {
        cpu->r[14] = 0x001c80e0u;
    }
L_001c80dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c80e0u)) return;
    }
L_001c80e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c80e4:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001c80e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c80ec:;
    {
        cpu->r[14] = 0x001c80f4u;
    }
L_001c80f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c80f4u)) return;
    }
L_001c80f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c80f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c80fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8100:;
    {
        cpu->r[14] = 0x001c8108u;
    }
L_001c8104:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8108u)) return;
    }
L_001c8108:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c810c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8110:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8114:;
    {
        cpu->r[14] = 0x001c811cu;
    }
L_001c8118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c811cu)) return;
    }
L_001c811c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c8120:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8124:;
    {
        cpu->r[14] = 0x001c812cu;
    }
L_001c8128:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c812cu)) return;
    }
L_001c812c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8130:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c8134:;
    {
        cpu->r[14] = 0x001c8138u; fn_001c6e04(cpu);
    }
L_001c8138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c813c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c8140:;
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
L_001c8144:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby23sendLeaveSessionPackageEv @ 001c8148 (arm) */
void fn_001c8148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8148:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c814c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c8150:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c8154:;
    {
        cpu->r[14] = 0x001c8158u; fn_0018ba6c(cpu);
    }
L_001c8158:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c815c:;
    {
        cpu->r[14] = 0x001c8160u; fn_001c9558(cpu);
    }
L_001c8160:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c8164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8168:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c816c:;
    {
        cpu->r[14] = 0x001c8174u;
    }
L_001c8170:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8174u)) return;
    }
L_001c8174:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8178:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c817c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8180:;
    {
        cpu->r[14] = 0x001c8188u;
    }
L_001c8184:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8188u)) return;
    }
L_001c8188:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_001c818c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8194:;
    {
        cpu->r[14] = 0x001c819cu;
    }
L_001c8198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c819cu)) return;
    }
L_001c819c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c81a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c81a4:;
    {
        cpu->r[14] = 0x001c81acu;
    }
L_001c81a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c81acu)) return;
    }
L_001c81ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c81b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c81b4:;
    {
        cpu->r[14] = 0x001c81b8u; fn_001c6e04(cpu);
    }
L_001c81b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c81bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c81c0:;
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
L_001c81c4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby22sendJoinSessionPackageEPc @ 001c81c8 (arm) */
void fn_001c81c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c81c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c81cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c81d0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c81d4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c81d8:;
    {
        cpu->r[14] = 0x001c81dcu; fn_0018ba6c(cpu);
    }
L_001c81dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c81e0:;
    {
        cpu->r[14] = 0x001c81e4u; fn_001c9558(cpu);
    }
L_001c81e4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c81e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c81ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c81f0:;
    {
        cpu->r[14] = 0x001c81f8u;
    }
L_001c81f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c81f8u)) return;
    }
L_001c81f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c81fc:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c8200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8204:;
    {
        cpu->r[14] = 0x001c820cu;
    }
L_001c8208:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c820cu)) return;
    }
L_001c820c:;
    {
        cpu->r[1] = 0x0000006au;
    }
L_001c8210:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8218:;
    {
        cpu->r[14] = 0x001c8220u;
    }
L_001c821c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8220u)) return;
    }
L_001c8220:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8224:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c8228:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c822c:;
    {
        cpu->r[14] = 0x001c8230u; fn_001d0434(cpu);
    }
L_001c8230:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8234:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c8238:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c823c:;
    {
        cpu->r[14] = 0x001c8240u; guest_call(cpu, cpu->r[6]);
    }
L_001c8240:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8248:;
    {
        cpu->r[14] = 0x001c8250u;
    }
L_001c824c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8250u)) return;
    }
L_001c8250:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8254:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c8258:;
    {
        cpu->r[14] = 0x001c825cu; fn_001c6e04(cpu);
    }
L_001c825c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8260:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c8264:;
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
L_001c8268:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby20sendQuickGamePackageEv @ 001c826c (arm) */
void fn_001c826c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c826c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c8274:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c8278:;
    {
        cpu->r[14] = 0x001c827cu; fn_0018ba6c(cpu);
    }
L_001c827c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8280:;
    {
        cpu->r[14] = 0x001c8284u; fn_001c9558(cpu);
    }
L_001c8284:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c8288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c828c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8290:;
    {
        cpu->r[14] = 0x001c8298u;
    }
L_001c8294:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8298u)) return;
    }
L_001c8298:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c829c:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c82a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c82a4:;
    {
        cpu->r[14] = 0x001c82acu;
    }
L_001c82a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c82acu)) return;
    }
L_001c82ac:;
    {
        cpu->r[1] = 0x00000075u;
    }
L_001c82b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c82b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c82b8:;
    {
        cpu->r[14] = 0x001c82c0u;
    }
L_001c82bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c82c0u)) return;
    }
L_001c82c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c82c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c82c8:;
    {
        cpu->r[14] = 0x001c82d0u;
    }
L_001c82cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c82d0u)) return;
    }
L_001c82d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c82d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c82d8:;
    {
        cpu->r[14] = 0x001c82dcu; fn_001c6e04(cpu);
    }
L_001c82dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c82e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c82e4:;
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
L_001c82e8:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby24sendCreateSessionPackageEPcS0_i @ 001c82ec (arm) */
void fn_001c82ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c82ec:;
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
L_001c82f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c82f4:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c82f8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001c82fc:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001c8300:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001c8304:;
    {
        cpu->r[14] = 0x001c8308u; fn_0018ba6c(cpu);
    }
L_001c8308:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c830c:;
    {
        cpu->r[14] = 0x001c8310u; fn_001c9558(cpu);
    }
L_001c8310:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c8314:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8318:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c831c:;
    {
        cpu->r[14] = 0x001c8324u;
    }
L_001c8320:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8324u)) return;
    }
L_001c8324:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c8328:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c832c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8330:;
    {
        cpu->r[14] = 0x001c8338u;
    }
L_001c8334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8338u)) return;
    }
L_001c8338:;
    {
        cpu->r[1] = 0x00000063u;
    }
L_001c833c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8340:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8344:;
    {
        cpu->r[14] = 0x001c834cu;
    }
L_001c8348:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c834cu)) return;
    }
L_001c834c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8350:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001c8354:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c8358:;
    {
        cpu->r[14] = 0x001c835cu; fn_001d0434(cpu);
    }
L_001c835c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001c8360:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c8364:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8368:;
    {
        cpu->r[14] = 0x001c836cu; guest_call(cpu, cpu->r[8]);
    }
L_001c836c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001c8370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c83b8;
        }
    }
L_001c8374:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_001c8378:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c837c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8380:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8384:;
    {
        cpu->r[14] = 0x001c838cu;
    }
L_001c8388:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c838cu)) return;
    }
L_001c838c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8394:;
    {
        cpu->r[14] = 0x001c839cu;
    }
L_001c8398:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c839cu)) return;
    }
L_001c839c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c83a0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c83a4:;
    {
        cpu->r[14] = 0x001c83a8u; fn_001c6e04(cpu);
    }
L_001c83a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c83ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c83b0:;
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
L_001c83b4:;
    {
        return fn_001ca364(cpu);
    }
L_001c83b8:;
    {
        cpu->r[4] = rd32(0x001c83c0u + + 0x4u);
    }
L_001c83bc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c83c4u, cpu->r[4], 0, 0);
    }
L_001c83c0:;
    {
        goto L_001c8374;
    }
}

/* _ZN15ConnectionLobby16sendLoginPackageEPc @ 001c83c8 (arm) */
void fn_001c83c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c83c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c83cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c83d0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c83d4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c83d8:;
    {
        cpu->r[14] = 0x001c83dcu; fn_0018ba6c(cpu);
    }
L_001c83dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c83e0:;
    {
        cpu->r[14] = 0x001c83e4u; fn_001c9558(cpu);
    }
L_001c83e4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001c83e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c83ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c83f0:;
    {
        cpu->r[14] = 0x001c83f8u;
    }
L_001c83f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c83f8u)) return;
    }
L_001c83f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c83fc:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001c8400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8404:;
    {
        cpu->r[14] = 0x001c840cu;
    }
L_001c8408:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c840cu)) return;
    }
L_001c840c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8410:;
    {
        cpu->r[1] = 0x00000069u;
    }
L_001c8414:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8418:;
    {
        cpu->r[14] = 0x001c8420u;
    }
L_001c841c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8420u)) return;
    }
L_001c8420:;
    {
        cpu->r[0] = rd32(0x001c8428u + + 0x54u);
    }
L_001c8424:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8428:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c8430u, cpu->r[0], 0, 0);
    }
L_001c842c:;
    {
        cpu->r[14] = 0x001c8430u; fn_001d0ac4(cpu);
    }
L_001c8430:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8434:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c8438:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001c843c:;
    {
        cpu->r[14] = 0x001c8440u; fn_001d0434(cpu);
    }
L_001c8440:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8444:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c8448:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c844c:;
    {
        cpu->r[14] = 0x001c8450u; guest_call(cpu, cpu->r[6]);
    }
L_001c8450:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8454:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8458:;
    {
        cpu->r[14] = 0x001c8460u;
    }
L_001c845c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8460u)) return;
    }
L_001c8460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8464:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c8468:;
    {
        cpu->r[14] = 0x001c846cu; fn_001c6e04(cpu);
    }
L_001c846c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8470:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c8474:;
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
L_001c8478:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN15ConnectionLobby27sendFinishConnectionPackageEv @ 001c8480 (arm) */
void fn_001c8480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8480:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8484:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c8488:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c848c:;
    {
        cpu->r[14] = 0x001c8490u; fn_001d0438(cpu);
    }
L_001c8490:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c8494:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c8498:;
    {
        cpu->r[14] = 0x001c849cu; fn_0018ba6c(cpu);
    }
L_001c849c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c84a0:;
    {
        cpu->r[14] = 0x001c84a4u; fn_001c9558(cpu);
    }
L_001c84a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c84a8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001c84ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c84b0:;
    {
        cpu->r[14] = 0x001c84b8u;
    }
L_001c84b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c84b8u)) return;
    }
L_001c84b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c84bc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c84c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c84c4:;
    {
        cpu->r[14] = 0x001c84ccu;
    }
L_001c84c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c84ccu)) return;
    }
L_001c84cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c84d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c84d4:;
    {
        cpu->r[14] = 0x001c84dcu;
    }
L_001c84d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c84dcu)) return;
    }
L_001c84dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c84e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c84e4:;
    {
        cpu->r[14] = 0x001c84e8u; fn_001ca364(cpu);
    }
L_001c84e8:;
    {
        cpu->r[14] = 0x001c84ecu; fn_001d05bc(cpu);
    }
L_001c84ec:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001c84f0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001c84f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c84f8u)) return;
    }
}

/* _ZN15ConnectionLobby30sendEstablishConnectionPackageEv @ 001c84f8 (arm) */
void fn_001c84f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c84f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c84fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c8500:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8504:;
    {
        cpu->r[14] = 0x001c8508u; fn_001d0438(cpu);
    }
L_001c8508:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c850c:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c8510:;
    {
        cpu->r[14] = 0x001c8514u; fn_0018ba6c(cpu);
    }
L_001c8514:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8518:;
    {
        cpu->r[14] = 0x001c851cu; fn_001c9558(cpu);
    }
L_001c851c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8520:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c8524:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8528:;
    {
        cpu->r[14] = 0x001c8530u;
    }
L_001c852c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8530u)) return;
    }
L_001c8530:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c8534:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8538:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c853c:;
    {
        cpu->r[14] = 0x001c8544u;
    }
L_001c8540:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8544u)) return;
    }
L_001c8544:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c854c:;
    {
        cpu->r[14] = 0x001c8554u;
    }
L_001c8550:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8554u)) return;
    }
L_001c8554:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8558:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001c855c:;
    {
        cpu->r[14] = 0x001c8560u; fn_001ca364(cpu);
    }
L_001c8560:;
    {
        cpu->r[14] = 0x001c8564u; fn_001d05bc(cpu);
    }
L_001c8564:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001c8568:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001c856c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8570u)) return;
    }
}

/* _ZN15ConnectionLobby11receiveDataEi @ 001c8570 (arm) */
void fn_001c8570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8570:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c8574:;
    {
        cpu->r[6] = 0x00001010u;
    }
L_001c8578:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c857c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c8580:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001c8584:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c8588:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c858c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8590:;
    {
        cpu->r[14] = 0x001c8598u;
    }
L_001c8594:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8598u)) return;
    }
L_001c8598:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c859c:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c85a0u)) return;
        }
    }
L_001c85a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c85a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c85a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c85ac:;
    {
        cpu->r[14] = 0x001c85b4u;
    }
L_001c85b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c85b4u)) return;
    }
L_001c85b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c85b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c85bcu)) return;
        }
    }
L_001c85bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c85c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x0000000bu, 0, 0);
    }
L_001c85c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c85c8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c85cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c85d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c85d4:;
    {
        cpu->r[14] = 0x001c85dcu;
    }
L_001c85d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c85dcu)) return;
    }
L_001c85dc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001c85e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c85e4u)) return;
        }
    }
L_001c85e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001c85e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8634;
        }
    }
L_001c85ec:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c85f0:;
    {
        cpu->r[14] = 0x001c85f4u; fn_0018ba6c(cpu);
    }
L_001c85f4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c85f8:;
    {
        cpu->r[14] = 0x001c85fcu; fn_001c9558(cpu);
    }
L_001c85fc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c8600:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c8604:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001c8608:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c860c:;
    {
        cpu->r[14] = 0x001c8614u;
    }
L_001c8610:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8614u)) return;
    }
L_001c8614:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8618:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c861c:;
    {
        cpu->r[14] = 0x001c8620u; fn_001ca2fc(cpu);
    }
L_001c8620:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8624:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c8628:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c862c:;
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
L_001c8630:;
    {
        return fn_001d0700(cpu);
    }
L_001c8634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8638:;
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
L_001c863c:;
    {
        return fn_001caf38(cpu);
    }
}

/* _ZN15ConnectionLobby14receiveDataLenEv @ 001c8640 (arm) */
void fn_001c8640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8640:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8644:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8648:;
    {
        cpu->r[5] = 0x00001010u;
    }
L_001c864c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x0000000bu, 0, 0);
    }
L_001c8650:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c8654:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8658:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001c865c:;
    {
        cpu->r[14] = 0x001c8660u; fn_001d0700(cpu);
    }
L_001c8660:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c8664:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c8668:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c866c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8670:;
    {
        cpu->r[14] = 0x001c8678u;
    }
L_001c8674:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8678u)) return;
    }
L_001c8678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c867c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8680u)) return;
        }
    }
L_001c8680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c8684:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c8688:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c868c:;
    {
        cpu->r[14] = 0x001c8694u;
    }
L_001c8690:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8694u)) return;
    }
L_001c8694:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8698:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c869cu)) return;
        }
    }
L_001c869c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c86a0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c86a4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001c86a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c86ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c86b0:;
    {
        cpu->r[14] = 0x001c86b8u;
    }
L_001c86b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c86b8u)) return;
    }
L_001c86b8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001c86bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c86c0u)) return;
        }
    }
L_001c86c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001c86c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c86d4;
        }
    }
L_001c86c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c86cc:;
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
L_001c86d0:;
    {
        return fn_001caf38(cpu);
    }
L_001c86d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c86d8:;
    {
        wr8(cpu->r[6] + + 0x2u, cpu->r[3]);
    }
L_001c86dc:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xbu);
    }
L_001c86e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c86e4:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x1u);
    }
L_001c86e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c86ec:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001c86f0:;
    {
        cpu->r[14] = 0x001c86f8u;
    }
L_001c86f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c86f8u)) return;
    }
L_001c86f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c86fcu)) return;
    }
}

/* _ZN15ConnectionLobby8sendDataEv @ 001c86fc (arm) */
void fn_001c86fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c86fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c8700:;
    {
        cpu->r[5] = 0x00001020u;
    }
L_001c8704:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8708:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001c870c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c8710:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8714u)) return;
        }
    }
L_001c8714:;
    {
        cpu->r[14] = 0x001c8718u; fn_001ca108(cpu);
    }
L_001c8718:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c871c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c87f0;
        }
    }
L_001c8720:;
    {
        cpu->r[6] = 0x00001010u;
    }
L_001c8724:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c8728:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c872c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c8730:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8734:;
    {
        cpu->r[14] = 0x001c873cu;
    }
L_001c8738:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c873cu)) return;
    }
L_001c873c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8740:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c8808;
        }
    }
L_001c8744:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001c8748:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c874c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001c8750:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c8754:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8758:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x44u);
    }
L_001c875c:;
    {
        cpu->r[14] = 0x001c8764u;
    }
L_001c8760:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8764u)) return;
    }
L_001c8764:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c8768:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001c876c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001c8770:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8774:;
    {
        cpu->r[14] = 0x001c877cu;
    }
L_001c8778:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c877cu)) return;
    }
L_001c877c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001c8780:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c8784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c8788:;
    {
        cpu->r[14] = 0x001c878cu; guest_call(cpu, cpu->r[6]);
    }
L_001c878c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8790:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c8818;
        }
    }
L_001c8794:;
    {
        cpu->r[14] = 0x001c8798u; fn_001d05bc(cpu);
    }
L_001c8798:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c879c:;
    {
        cpu->r[2] = 0x00001030u;
    }
L_001c87a0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c87a4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001c87a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c87ac:;
    {
        cpu->r[14] = 0x001c87b4u;
    }
L_001c87b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c87b4u)) return;
    }
L_001c87b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c87b8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_001c87bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c87c0:;
    {
        cpu->r[14] = 0x001c87c8u;
    }
L_001c87c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c87c8u)) return;
    }
L_001c87c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001c87cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001c87d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001024u;
        }
    }
L_001c87d4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_001c87d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c87dcu)) return;
        }
    }
L_001c87dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c87e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c87e4:;
    {
        cpu->r[14] = 0x001c87ecu;
    }
L_001c87e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c87ecu)) return;
    }
L_001c87ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c87f0u)) return;
    }
L_001c87f0:;
    {
        cpu->r[0] = rd32(0x001c87f8u + + 0x2cu);
    }
L_001c87f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c87fcu, cpu->r[0], 0, 0);
    }
L_001c87f8:;
    {
        cpu->r[14] = 0x001c87fcu; fn_001d0ac4(cpu);
    }
L_001c87fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8800:;
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
L_001c8804:;
    {
        return fn_001caf38(cpu);
    }
L_001c8808:;
    {
        cpu->r[0] = rd32(0x001c8810u + + 0x18u);
    }
L_001c880c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c8814u, cpu->r[0], 0, 0);
    }
L_001c8810:;
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
L_001c8814:;
    {
        return fn_001d0ac4(cpu);
    }
L_001c8818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c881c:;
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
L_001c8820:;
    {
        return fn_001caf38(cpu);
    }
}

/* _ZN15ConnectionLobbyD1Ev @ 001c882c (arm) */
void fn_001c882c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c882c:;
    {
        cpu->r[3] = rd32(0x001c8834u + + 0x24u);
    }
L_001c8830:;
    {
        cpu->r[2] = rd32(0x001c8838u + + 0x24u);
    }
L_001c8834:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c883cu, cpu->r[3], 0, 0);
    }
L_001c8838:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c883c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8840:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8848:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c884c:;
    {
        cpu->r[14] = 0x001c8850u; fn_001cb430(cpu);
    }
L_001c8850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8854:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8858u)) return;
    }
}

/* _ZN15ConnectionLobbyD0Ev @ 001c8860 (arm) */
void fn_001c8860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c8864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8868:;
    {
        cpu->r[14] = 0x001c886cu; fn_001c882c(cpu);
    }
L_001c886c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8870:;
    {
        cpu->r[14] = 0x001c8874u; fn_0018ba20(cpu);
    }
L_001c8874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8878:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c887cu)) return;
    }
}

/* _ZN15ConnectionLobbyD2Ev @ 001c887c (arm) */
void fn_001c887c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c887c:;
    {
        cpu->r[3] = rd32(0x001c8884u + + 0x24u);
    }
L_001c8880:;
    {
        cpu->r[2] = rd32(0x001c8888u + + 0x24u);
    }
L_001c8884:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c888cu, cpu->r[3], 0, 0);
    }
L_001c8888:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c888c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8890:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8894:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8898:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001c889c:;
    {
        cpu->r[14] = 0x001c88a0u; fn_001cb430(cpu);
    }
L_001c88a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c88a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c88a8u)) return;
    }
}

/* _ZN15ConnectionLobbyC1EPci @ 001c88b0 (arm) */
void fn_001c88b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c88b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c88b4:;
    {
        cpu->r[4] = rd32(0x001c88bcu + + 0x20u);
    }
L_001c88b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c88bc:;
    {
        cpu->r[14] = 0x001c88c0u; fn_001cb5ec(cpu);
    }
L_001c88c0:;
    {
        cpu->r[3] = rd32(0x001c88c8u + + 0x18u);
    }
L_001c88c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c88ccu, cpu->r[4], 0, 0);
    }
L_001c88c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c88cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c88d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c88d4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c88d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c88dcu)) return;
    }
}

/* _ZN15ConnectionLobbyC2EPci @ 001c88e4 (arm) */
void fn_001c88e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c88e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c88e8:;
    {
        cpu->r[4] = rd32(0x001c88f0u + + 0x20u);
    }
L_001c88ec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c88f0:;
    {
        cpu->r[14] = 0x001c88f4u; fn_001cb5ec(cpu);
    }
L_001c88f4:;
    {
        cpu->r[3] = rd32(0x001c88fcu + + 0x18u);
    }
L_001c88f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001c8900u, cpu->r[4], 0, 0);
    }
L_001c88fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001c8904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001c8908:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c890c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8910u)) return;
    }
}

/* _ZN10DataPacketD1Ev @ 001c8918 (arm) */
void fn_001c8918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8918:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket7addBlobEPcs @ 001c891c (arm) */
void fn_001c891c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c891c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8920:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket7getBlobERPcRs @ 001c8924 (arm) */
void fn_001c8924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8924:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8928:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket11InitMessageEi @ 001c892c (arm) */
void fn_001c892c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c892c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket14GetMessageTypeEv @ 001c8930 (arm) */
void fn_001c8930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8930:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001c8934:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket14InitMMOMessageEs @ 001c8938 (arm) */
void fn_001c8938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8938:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10DataPacket17GetMMOMessageTypeEv @ 001c893c (arm) */
void fn_001c893c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c893c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001c8940:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby16addByteLenStringEPKch @ 001c8944 (arm) */
void fn_001c8944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8944:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8948:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby16getByteLenStringERPcRh @ 001c894c (arm) */
void fn_001c894c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c894c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8950:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby20addByteLenWideStringEPKwh @ 001c8954 (arm) */
void fn_001c8954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8954:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8958:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby20getByteLenWideStringERPwRh @ 001c895c (arm) */
void fn_001c895c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c895c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8960:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby21addShortLenWideStringEPKwh @ 001c8964 (arm) */
void fn_001c8964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8964:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8968:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby21getShortLenWideStringERPwRh @ 001c896c (arm) */
void fn_001c896c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c896c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8970:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11InitMessageEi @ 001c8974 (arm) */
void fn_001c8974(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8974:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8978:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c897c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c8980:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c8984:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c8988:;
    {
        cpu->r[14] = 0x001c8990u;
    }
L_001c898c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8990u)) return;
    }
L_001c8990:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c8994:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c8998:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c899c:;
    {
        cpu->r[14] = 0x001c89a4u;
    }
L_001c89a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89a4u)) return;
    }
L_001c89a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c89a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c89ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c89b0:;
    {
        cpu->r[14] = 0x001c89b8u;
    }
L_001c89b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89b8u)) return;
    }
L_001c89b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89bcu)) return;
    }
}

/* _ZN15DataPacketLobby14InitMMOMessageEs @ 001c89bc (arm) */
void fn_001c89bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c89bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c89c0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c89c4:;
    {
        cpu->r[14] = 0x001c89ccu;
    }
L_001c89c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89ccu)) return;
    }
L_001c89cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89d0u)) return;
    }
}

/* _ZN15DataPacketLobby14GetMessageTypeEv @ 001c89d0 (arm) */
void fn_001c89d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c89d0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001c89d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c89d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c89dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c89e0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c89e4:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x4u;
        wr32(cpu->r[1] + - 0x4u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c89e8:;
    {
        cpu->r[14] = 0x001c89f0u;
    }
L_001c89ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89f0u)) return;
    }
L_001c89f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001c89f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c89f8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c89fcu)) return;
    }
}

/* _ZN15DataPacketLobby17GetMMOMessageTypeEv @ 001c89fc (arm) */
void fn_001c89fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c89fc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_001c8a00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c8a04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c8a08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c8a0c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c8a10:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x2u;
        wr16(cpu->r[1] + - 0x2u, cpu->r[2]);
        cpu->r[1] = wb_tmp;
    }
L_001c8a14:;
    {
        cpu->r[14] = 0x001c8a1cu;
    }
L_001c8a18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8a1cu)) return;
    }
L_001c8a1c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x6u);
    }
L_001c8a20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c8a24:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8a28u)) return;
    }
}

/* _ZN15DataPacketLobby10WillBeFullEi @ 001c8a28 (arm) */
void fn_001c8a28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8a28:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001c8a2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001c8a30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001c8a34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c8a38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8a3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c8a40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby7getByteERh @ 001c8a44 (arm) */
void fn_001c8a44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8a44:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001c8a48:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c8a4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c8a50:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001c8a54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001c8a58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c8a5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8a60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_001c8a64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
        }
    }
L_001c8a68:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[1], cpu->r[0]);
        }
    }
L_001c8a6c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
        }
    }
L_001c8a70:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[1], cpu->r[2]);
        }
    }
L_001c8a74:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
        }
    }
L_001c8a78:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001c8a7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby8getShortERs @ 001c8a80 (arm) */
void fn_001c8a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8a80:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c8a84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c8a88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c8a8c:;
    {
        wr16(cpu->r[1], cpu->r[2]);
    }
L_001c8a90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001c8a94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001c8a98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001c8a9c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c8aa0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8aa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c8adc;
        }
    }
L_001c8aa8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8aac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c8ab0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c8ab4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c8ab8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_001c8abc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_001c8ac0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001c8ac4:;
    {
        wr16(cpu->r[1], cpu->r[2]);
    }
L_001c8ac8:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[12]);
    }
L_001c8acc:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_001c8ad0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_001c8ad4:;
    {
        uint32_t v = cpu->r[12] | cpu->r[2]; cpu->r[3] = v;
    }
L_001c8ad8:;
    {
        wr16(cpu->r[1], cpu->r[3]);
    }
L_001c8adc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001c8ae0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby6getIntERi @ 001c8ae4 (arm) */
void fn_001c8ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8ae4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c8ae8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c8aec:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001c8af0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_001c8af4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001c8af8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_001c8afc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001c8b00:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001c8b04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c8b6c;
        }
    }
L_001c8b08:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8b0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c8b10:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001c8b14:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c8b18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001c8b1c:;
    {
        cpu->r[7] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_001c8b20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c8b24:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 24u, &shc); cpu->r[7] = v;
    }
L_001c8b28:;
    {
        wr32(cpu->r[1], cpu->r[7]);
    }
L_001c8b2c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[6]);
    }
L_001c8b30:;
    {
        cpu->r[7] = rd8(cpu->r[12] + cpu->r[6]);
    }
L_001c8b34:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_001c8b38:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[7], 2, 16u, &shc); cpu->r[6] = v;
    }
L_001c8b3c:;
    {
        wr32(cpu->r[1], cpu->r[6]);
    }
L_001c8b40:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_001c8b44:;
    {
        cpu->r[6] = rd8(cpu->r[12] + cpu->r[5]);
    }
L_001c8b48:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_001c8b4c:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, 8u, &shc); cpu->r[5] = v;
    }
L_001c8b50:;
    {
        wr32(cpu->r[1], cpu->r[5]);
    }
L_001c8b54:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_001c8b58:;
    {
        cpu->r[12] = rd8(cpu->r[12] + cpu->r[4]);
    }
L_001c8b5c:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_001c8b60:;
    {
        uint32_t v = cpu->r[4] | cpu->r[12]; cpu->r[12] = v;
    }
L_001c8b64:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_001c8b68:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_001c8b6c:;
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
L_001c8b70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby8getFloatERf @ 001c8b74 (arm) */
void fn_001c8b74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8b74:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c8b78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c8b7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001c8b84u + + 0x74u);
    }
L_001c8b80:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001c8b84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_001c8b88:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001c8b8c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 0);
    }
L_001c8b90:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c8b94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8b98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c8bf0;
        }
    }
L_001c8b9c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8ba0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c8ba4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c8ba8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c8bac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001c8bb0:;
    {
        cpu->r[6] = rd8(cpu->r[6] + cpu->r[2]);
    }
L_001c8bb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c8bb8:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_001c8bbc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8bc0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_001c8bc4:;
    {
        cpu->r[5] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_001c8bc8:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[5]);
    }
L_001c8bcc:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8bd0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_001c8bd4:;
    {
        cpu->r[4] = rd8(cpu->r[5] + cpu->r[4]);
    }
L_001c8bd8:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[4]);
    }
L_001c8bdc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
    }
L_001c8be0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[12]);
    }
L_001c8be4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[12]);
    }
L_001c8be8:;
    {
        wr8(cpu->r[1] + + 0x3u, cpu->r[12]);
    }
L_001c8bec:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_001c8bf0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001c8bf4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby13getMessageLenEv @ 001c8bfc (arm) */
void fn_001c8bfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8bfc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c8c00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby14getMessageBodyEv @ 001c8c04 (arm) */
void fn_001c8c04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c04:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001c8c08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11packMessageEv @ 001c8c0c (arm) */
void fn_001c8c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001c8c10:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001c8c14:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_001c8c18:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001c8c1c:;
    {
        cpu->r[3] = (cpu->r[1] >> 8) & 0xffu;
    }
L_001c8c20:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001c8c24:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001c8c28:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001c8c2c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_001c8c30:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_001c8c34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby13getNextPacketEv @ 001c8c38 (arm) */
void fn_001c8c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001c8c3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby13setNextPacketEP10DataPacket @ 001c8c40 (arm) */
void fn_001c8c40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c40:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001c8c44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11IsSendByTcpEv @ 001c8c48 (arm) */
void fn_001c8c48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_001c8c4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001c8c50:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
        }
    }
L_001c8c54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8c58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c8c5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11IsSendByUdpEv @ 001c8c60 (arm) */
void fn_001c8c60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c60:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_001c8c64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001c8c68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8c6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c8c70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11getDataTypeEv @ 001c8c74 (arm) */
void fn_001c8c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_001c8c78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby11setDataTypeEi @ 001c8c7c (arm) */
void fn_001c8c7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c7c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_001c8c80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby7getPortEv @ 001c8c84 (arm) */
void fn_001c8c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001c8c88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby7setPortEi @ 001c8c8c (arm) */
void fn_001c8c8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c8c:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001c8c90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby5getIPEv @ 001c8c94 (arm) */
void fn_001c8c94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001c8c98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15DataPacketLobby13String2PacketEPci @ 001c8c9c (arm) */
void fn_001c8c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8c9c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8ca0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_001c8ca4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c8ca8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c8cac:;
    {
        cpu->r[4] = rd8(cpu->r[1] + cpu->r[4]);
    }
L_001c8cb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001c8cb4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001c8cb8:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[12]);
    }
L_001c8cbc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_001c8cc0:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_001c8cc4:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_001c8cc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c8ccc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001c8cd0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001c8cd4:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8cd8u)) return;
        }
    }
L_001c8cd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001c8cdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001c8ce0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c8ce4:;
    {
        cpu->r[14] = 0x001c8cecu;
    }
L_001c8ce8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8cecu)) return;
    }
L_001c8cec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001c8cf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8cf4u)) return;
    }
}

/* _ZN15DataPacketLobby13Packet2StringEPcRi @ 001c8cf4 (arm) */
void fn_001c8cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8cf4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8cf8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8cfc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c8d00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001c8d04:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11u);
    }
L_001c8d08:;
    {
        wr8(cpu->r[1], cpu->r[3]);
    }
L_001c8d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c8d10:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[3]);
    }
L_001c8d14:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001c8d18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c8d1c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001c8d20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c8d24:;
    {
        cpu->r[14] = 0x001c8d28u; fn_001d06ec(cpu);
    }
L_001c8d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c8d2c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001c8d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c8d34:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c8d38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8d3cu)) return;
    }
}

/* _ZN15DataPacketLobby14setMessageBodyEPhi @ 001c8d3c (arm) */
void fn_001c8d3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8d3c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8d40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8d44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001c8d48:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c8d4c:;
    {
        cpu->r[14] = 0x001c8d50u; fn_001d06ec(cpu);
    }
L_001c8d50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8d54:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001c8d58:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001c8d5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8d60u)) return;
    }
}

/* _ZN15DataPacketLobbyC1EP10DataPacket @ 001c8d60 (arm) */
void fn_001c8d60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8d60:;
    {
        cpu->r[3] = rd32(0x001c8d68u + + 0x7cu);
    }
L_001c8d64:;
    {
        cpu->r[2] = rd32(0x001c8d6cu + + 0x7cu);
    }
L_001c8d68:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c8d70u, cpu->r[3], 0, 0);
    }
L_001c8d6c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c8d70:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8d74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8d78:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c8d7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8d80:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[5]);
    }
L_001c8d84:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c8d88:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c8d8c:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c8d90:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c8d94:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c8d98:;
    {
        cpu->r[14] = 0x001c8da0u;
    }
L_001c8d9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8da0u)) return;
    }
L_001c8da0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8da4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_001c8da8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8dac:;
    {
        cpu->r[14] = 0x001c8db4u;
    }
L_001c8db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8db4u)) return;
    }
L_001c8db4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8db8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c8dbc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8dc0:;
    {
        cpu->r[14] = 0x001c8dc8u;
    }
L_001c8dc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8dc8u)) return;
    }
L_001c8dc8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8dcc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c8dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8dd4:;
    {
        cpu->r[14] = 0x001c8dd8u; fn_001c8d3c(cpu);
    }
L_001c8dd8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c8ddc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8de0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8de4u)) return;
    }
}

/* _ZN15DataPacketLobbyC2EP10DataPacket @ 001c8dec (arm) */
void fn_001c8dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8dec:;
    {
        cpu->r[3] = rd32(0x001c8df4u + + 0x7cu);
    }
L_001c8df0:;
    {
        cpu->r[2] = rd32(0x001c8df8u + + 0x7cu);
    }
L_001c8df4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c8dfcu, cpu->r[3], 0, 0);
    }
L_001c8df8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c8dfc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8e00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8e04:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c8e08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8e0c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[5]);
    }
L_001c8e10:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c8e14:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c8e18:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c8e1c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c8e20:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c8e24:;
    {
        cpu->r[14] = 0x001c8e2cu;
    }
L_001c8e28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8e2cu)) return;
    }
L_001c8e2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8e30:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_001c8e34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8e38:;
    {
        cpu->r[14] = 0x001c8e40u;
    }
L_001c8e3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8e40u)) return;
    }
L_001c8e40:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c8e44:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c8e48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c8e4c:;
    {
        cpu->r[14] = 0x001c8e54u;
    }
L_001c8e50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8e54u)) return;
    }
L_001c8e54:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c8e58:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c8e5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8e60:;
    {
        cpu->r[14] = 0x001c8e64u; fn_001c8d3c(cpu);
    }
L_001c8e64:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c8e68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8e6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8e70u)) return;
    }
}

/* _ZN15DataPacketLobbyD1Ev @ 001c8e78 (arm) */
void fn_001c8e78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8e78:;
    {
        cpu->r[3] = rd32(0x001c8e80u + + 0x50u);
    }
L_001c8e7c:;
    {
        cpu->r[2] = rd32(0x001c8e84u + + 0x50u);
    }
L_001c8e80:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c8e88u, cpu->r[3], 0, 0);
    }
L_001c8e84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c8e88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8e8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001c8e90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8e94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8e98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8e9c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c8ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8eb0;
        }
    }
L_001c8ea4:;
    {
        cpu->r[14] = 0x001c8ea8u; fn_0018ba20(cpu);
    }
L_001c8ea8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8eac:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001c8eb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c8eb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8eb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8ec8;
        }
    }
L_001c8ebc:;
    {
        cpu->r[14] = 0x001c8ec0u; fn_0018ba20(cpu);
    }
L_001c8ec0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8ec4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001c8ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8ecc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8ed0u)) return;
    }
}

/* _ZN15DataPacketLobbyD0Ev @ 001c8ed8 (arm) */
void fn_001c8ed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8ed8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c8edc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8ee0:;
    {
        cpu->r[14] = 0x001c8ee4u; fn_001c8e78(cpu);
    }
L_001c8ee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8ee8:;
    {
        cpu->r[14] = 0x001c8eecu; fn_0018ba20(cpu);
    }
L_001c8eec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8ef0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8ef4u)) return;
    }
}

/* _ZN10DataPacketD0Ev @ 001c8ef4 (arm) */
void fn_001c8ef4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8ef4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c8ef8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8efc:;
    {
        cpu->r[14] = 0x001c8f00u; fn_0018ba20(cpu);
    }
L_001c8f00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8f04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8f08u)) return;
    }
}

/* _ZN15DataPacketLobbyD2Ev @ 001c8f08 (arm) */
void fn_001c8f08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8f08:;
    {
        cpu->r[3] = rd32(0x001c8f10u + + 0x50u);
    }
L_001c8f0c:;
    {
        cpu->r[2] = rd32(0x001c8f14u + + 0x50u);
    }
L_001c8f10:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c8f18u, cpu->r[3], 0, 0);
    }
L_001c8f14:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c8f18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8f1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001c8f20:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c8f24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8f28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c8f2c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c8f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8f40;
        }
    }
L_001c8f34:;
    {
        cpu->r[14] = 0x001c8f38u; fn_0018ba20(cpu);
    }
L_001c8f38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8f3c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001c8f40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c8f44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8f58;
        }
    }
L_001c8f4c:;
    {
        cpu->r[14] = 0x001c8f50u; fn_0018ba20(cpu);
    }
L_001c8f50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8f54:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001c8f58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c8f5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8f60u)) return;
    }
}

/* _ZN15DataPacketLobby5setIPEPc @ 001c8f68 (arm) */
void fn_001c8f68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8f68:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c8f6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8f70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001c8f74:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c8f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c8f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c8f8c;
        }
    }
L_001c8f80:;
    {
        cpu->r[14] = 0x001c8f84u; fn_0018ba20(cpu);
    }
L_001c8f84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c8f88:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001c8f8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c8f90:;
    {
        cpu->r[14] = 0x001c8f94u; fn_001d0ce8(cpu);
    }
L_001c8f94:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001c8f98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c8f9cu)) return;
    }
}

/* _ZN15DataPacketLobby17getShortLenStringERPcRs @ 001c8f9c (arm) */
void fn_001c8f9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c8f9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c8fa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c8fa4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001c8fa8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001c8fac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c8fb0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001c8fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c8fb8:;
    {
        wr16(cpu->r[2], cpu->r[6]);
    }
L_001c8fbc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c8fc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c8fc4:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_001c8fc8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001c8fcc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_001c8fd0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_001c8fd4:;
    {
        wr16(cpu->r[5], cpu->r[0]);
    }
L_001c8fd8:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001c8fdc:;
    {
        cpu->r[3] = rd16(cpu->r[5]);
    }
L_001c8fe0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001c8fe4:;
    {
        uint32_t v = cpu->r[0] | cpu->r[3]; cpu->r[0] = v;
    }
L_001c8fe8:;
    {
        wr16(cpu->r[5], cpu->r[0]);
    }
L_001c8fec:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001c8ff0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001c8ff4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001c8ff8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c8ffc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9000u)) return;
        }
    }
L_001c9000:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9004:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[0]);
        }
    }
L_001c9008:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c900cu)) return;
        }
    }
L_001c900c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9010:;
    {
        cpu->r[14] = 0x001c9014u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c9014:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c9018:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c901c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001c9020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001c9024:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_001c9028:;
    {
        cpu->r[14] = 0x001c902cu; fn_001d06ec(cpu);
    }
L_001c902c:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001c9030:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001c9034:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9038:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[6]);
    }
L_001c903c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c9040:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5]);
    }
L_001c9044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c9048:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001c904c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9050u)) return;
    }
}

/* _ZN15DataPacketLobby7getBlobERPcRs @ 001c9050 (arm) */
void fn_001c9050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9050:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9054:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001c9058:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c905c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c9060:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c9064:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001c9068:;
    {
        cpu->r[14] = 0x001c9070u;
    }
L_001c906c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9070u)) return;
    }
L_001c9070:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9098;
        }
    }
L_001c9078:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_001c907c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9080:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001c9098;
        }
    }
L_001c9084:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001c9088:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c908c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001c9090:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001c9094:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c90a8;
        }
    }
L_001c9098:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c909c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001c90a0:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_001c90a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c90a8u)) return;
    }
L_001c90a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c90ac:;
    {
        cpu->r[14] = 0x001c90b0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c90b0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_001c90b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c90b8:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001c90bc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_001c90c0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_001c90c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c90c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c90cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c90d0u)) return;
        }
    }
L_001c90d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c90d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c90d8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001c90dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001c90e0:;
    {
        cpu->r[14] = 0x001c90e4u; fn_001d06ec(cpu);
    }
L_001c90e4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c90e8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4]);
    }
L_001c90ec:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c90f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c90f4:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_001c90f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c90fcu)) return;
    }
}

/* _ZN15DataPacketLobby18AllocateMoreMomeryEv @ 001c90fc (arm) */
void fn_001c90fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c90fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9100:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001c9104:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9108:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001c910c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c9110:;
    {
        cpu->r[14] = 0x001c9114u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c9114:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9118:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001c911c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9120u)) return;
        }
    }
L_001c9120:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c9124:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c9128:;
    {
        cpu->r[14] = 0x001c912cu; fn_001d0700(cpu);
    }
L_001c912c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9130:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9134:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c9138:;
    {
        cpu->r[14] = 0x001c913cu; fn_001d06ec(cpu);
    }
L_001c913c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9140:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9154;
        }
    }
L_001c9148:;
    {
        cpu->r[14] = 0x001c914cu; fn_0018ba20(cpu);
    }
L_001c914c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9150:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001c9154:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9158:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_001c915c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9160u)) return;
    }
}

/* _ZN15DataPacketLobby9addPacketEP10DataPacket @ 001c9160 (arm) */
void fn_001c9160(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9160:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9164:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c9168:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c916c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c9170:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9174:;
    {
        cpu->r[14] = 0x001c917cu;
    }
L_001c9178:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c917cu)) return;
    }
L_001c917c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c9180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9184:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c9188:;
    {
        cpu->r[14] = 0x001c918cu; fn_001c8a28(cpu);
    }
L_001c918c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c91a4;
        }
    }
L_001c9194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9198:;
    {
        cpu->r[14] = 0x001c919cu; fn_001c90fc(cpu);
    }
L_001c919c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c91a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9200;
        }
    }
L_001c91a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c91a8:;
    {
        cpu->r[14] = (cpu->r[5] >> 8) & 0xffu;
    }
L_001c91ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c91b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c91b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001c91b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c91bc:;
    {
        wr8(cpu->r[12] + cpu->r[1], cpu->r[14]);
    }
L_001c91c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c91c4:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[5]);
    }
L_001c91c8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c91cc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001c91d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001c91d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c91d8:;
    {
        cpu->r[14] = 0x001c91e0u;
    }
L_001c91dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c91e0u)) return;
    }
L_001c91e0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c91e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001c91e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001c91ec:;
    {
        cpu->r[14] = 0x001c91f0u; fn_001d06ec(cpu);
    }
L_001c91f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c91f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c91f8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001c91fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9200u)) return;
    }
L_001c9200:;
    {
        cpu->r[0] = rd32(0x001c9208u + + 0x8u);
    }
L_001c9204:;
    {
        cpu->r[0] = add_flags(cpu, 0x001c920cu, cpu->r[0], 0, 0);
    }
L_001c9208:;
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
L_001c920c:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN15DataPacketLobby17addShortLenStringEPKcs @ 001c9214 (arm) */
void fn_001c9214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9214:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c9218:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001c921c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9220:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001c9224:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9228:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c922c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9238;
        }
    }
L_001c9230:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c9234:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9238u)) return;
    }
L_001c9238:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c923c:;
    {
        cpu->r[14] = 0x001c9240u; fn_001c8a28(cpu);
    }
L_001c9240:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9258;
        }
    }
L_001c9248:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c924c:;
    {
        cpu->r[14] = 0x001c9250u; fn_001c90fc(cpu);
    }
L_001c9250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9230;
        }
    }
L_001c9258:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c925c:;
    {
        cpu->r[7] = (cpu->r[4] >> 8) & 0xffu;
    }
L_001c9260:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c9264:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c9268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001c926c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c9270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c9274:;
    {
        wr8(cpu->r[14] + cpu->r[12], cpu->r[7]);
    }
L_001c9278:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c927c:;
    {
        wr8(cpu->r[12] + cpu->r[0], cpu->r[4]);
    }
L_001c9280:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c9284:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_001c9288:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c928c:;
    {
        cpu->r[14] = 0x001c9290u; fn_001d06ec(cpu);
    }
L_001c9290:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c9294:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9298:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001c929c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_001c92a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c92a4u)) return;
    }
}

/* _ZN15DataPacketLobby14addQueryStringEPKcs @ 001c92a4 (arm) */
void fn_001c92a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c92a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001c92a8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001c92ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c92b0:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001c92b4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c92b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c92bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c92c8;
        }
    }
L_001c92c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c92c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c92c8u)) return;
    }
L_001c92c8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001c92cc:;
    {
        cpu->r[14] = 0x001c92d0u; fn_001c8a28(cpu);
    }
L_001c92d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c92d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c92e8;
        }
    }
L_001c92d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c92dc:;
    {
        cpu->r[14] = 0x001c92e0u; fn_001c90fc(cpu);
    }
L_001c92e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c92e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c92c0;
        }
    }
L_001c92e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c92ec:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c92f0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001c92f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c92f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c92fc:;
    {
        cpu->r[14] = 0x001c9300u; fn_001d06ec(cpu);
    }
L_001c9300:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001c9304:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9308:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001c930c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_001c9310:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9314u)) return;
    }
}

/* _ZN15DataPacketLobby7addBlobEPcs @ 001c9314 (arm) */
void fn_001c9314(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9314:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[1], 1, 1);
    }
L_001c9318:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001c931c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9320:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001c9324:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9328:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c932c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_001c9330:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_001c9334:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001c9338:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c933c:;
    {
        cpu->r[14] = 0x001c9340u; fn_001c8a28(cpu);
    }
L_001c9340:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9358;
        }
    }
L_001c9348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c934c:;
    {
        cpu->r[14] = 0x001c9350u; fn_001c90fc(cpu);
    }
L_001c9350:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9354:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9358u)) return;
        }
    }
L_001c9358:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001c935c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9360:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c9364:;
    {
        cpu->r[14] = 0x001c936cu;
    }
L_001c9368:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c936cu)) return;
    }
L_001c936c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001c9370:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c9374:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9378u)) return;
        }
    }
L_001c9378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c937c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c9380:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9384:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001c9388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c938c:;
    {
        cpu->r[14] = 0x001c9390u; fn_001d06ec(cpu);
    }
L_001c9390:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c9394:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9398:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c939c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001c93a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c93a4u)) return;
    }
}

/* _ZN15DataPacketLobby8addFloatEf @ 001c93a4 (arm) */
void fn_001c93a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c93a4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c93a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001c93ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c93b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001c93b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001c93b8:;
    {
        cpu->r[14] = 0x001c93bcu; fn_001c8a28(cpu);
    }
L_001c93bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c93c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9420;
        }
    }
L_001c93c4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c93c8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c93cc:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x4u);
    }
L_001c93d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c93d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c93d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001c93dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001c93e0:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[6]);
    }
L_001c93e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c93e8:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x5u);
    }
L_001c93ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c93f0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001c93f4:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[6]);
    }
L_001c93f8:;
    {
        cpu->r[5] = rd8(cpu->r[13] + + 0x6u);
    }
L_001c93fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9400:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001c9404:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[5]);
    }
L_001c9408:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x7u);
    }
L_001c940c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9410:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001c9414:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001c9418:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001c941c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9420u)) return;
    }
L_001c9420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9424:;
    {
        cpu->r[14] = 0x001c9428u; fn_001c90fc(cpu);
    }
L_001c9428:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c942c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c93c4;
        }
    }
L_001c9430:;
    {
        goto L_001c9418;
    }
}

/* _ZN15DataPacketLobby6addIntEi @ 001c9434 (arm) */
void fn_001c9434(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9434:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9438:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c943c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001c9440:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9444:;
    {
        cpu->r[14] = 0x001c9448u; fn_001c8a28(cpu);
    }
L_001c9448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c944c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c949c;
        }
    }
L_001c9450:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c9454:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 24u, &shc); cpu->r[7] = v;
    }
L_001c9458:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c945c:;
    {
        cpu->r[8] = (cpu->r[5] >> 16) & 0xffu;
    }
L_001c9460:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9464:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9468:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001c946c:;
    {
        cpu->r[6] = (cpu->r[5] >> 8) & 0xffu;
    }
L_001c9470:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[7]);
    }
L_001c9474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001c9478:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c947c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c9480:;
    {
        wr8(cpu->r[7] + cpu->r[1], cpu->r[8]);
    }
L_001c9484:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9488:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[6]);
    }
L_001c948c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9490:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_001c9494:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001c9498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c949cu)) return;
    }
L_001c949c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c94a0:;
    {
        cpu->r[14] = 0x001c94a4u; fn_001c90fc(cpu);
    }
L_001c94a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c94a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9450;
        }
    }
L_001c94ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c94b0u)) return;
    }
}

/* _ZN15DataPacketLobby8addShortEs @ 001c94b0 (arm) */
void fn_001c94b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c94b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c94b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c94b8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c94bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c94c0:;
    {
        cpu->r[14] = 0x001c94c4u; fn_001c8a28(cpu);
    }
L_001c94c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c94c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c94f8;
        }
    }
L_001c94cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c94d0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c94d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c94d8:;
    {
        cpu->r[6] = (cpu->r[5] >> 8) & 0xffu;
    }
L_001c94dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001c94e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c94e4:;
    {
        wr8(cpu->r[12] + cpu->r[2], cpu->r[6]);
    }
L_001c94e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c94ec:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_001c94f0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001c94f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c94f8u)) return;
    }
L_001c94f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c94fc:;
    {
        cpu->r[14] = 0x001c9500u; fn_001c90fc(cpu);
    }
L_001c9500:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c94cc;
        }
    }
L_001c9508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c950cu)) return;
    }
}

/* _ZN15DataPacketLobby7addByteEh @ 001c950c (arm) */
void fn_001c950c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c950c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9510:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c9514:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c9518:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c951c:;
    {
        cpu->r[14] = 0x001c9520u; fn_001c8a28(cpu);
    }
L_001c9520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9524:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9544;
        }
    }
L_001c9528:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c952c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9530:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c9534:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c9538:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[5]);
    }
L_001c953c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001c9540:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9544u)) return;
    }
L_001c9544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9548:;
    {
        cpu->r[14] = 0x001c954cu; fn_001c90fc(cpu);
    }
L_001c954c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9528;
        }
    }
L_001c9554:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9558u)) return;
    }
}

/* _ZN15DataPacketLobbyC1Ev @ 001c9558 (arm) */
void fn_001c9558(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9558:;
    {
        cpu->r[3] = rd32(0x001c9560u + + 0x60u);
    }
L_001c955c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c9560:;
    {
        cpu->r[2] = rd32(0x001c9568u + + 0x5cu);
    }
L_001c9564:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c956cu, cpu->r[3], 0, 0);
    }
L_001c9568:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c956c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9570:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9574:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c9578:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c957c:;
    {
        cpu->r[0] = 0x00000800u;
    }
L_001c9580:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001c9584:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c9588:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c958c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001c9590:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001c9594:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001c9598:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c959c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001c95a0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c95a4:;
    {
        cpu->r[14] = 0x001c95a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c95a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c95ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c95b0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001c95b4:;
    {
        cpu->r[14] = 0x001c95b8u; fn_001d0700(cpu);
    }
L_001c95b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c95bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c95c0u)) return;
    }
}

/* _ZN15DataPacketLobby9getPacketERP10DataPacket @ 001c95c8 (arm) */
void fn_001c95c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c95c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c95cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c95d0:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_001c95d4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c95d8:;
    {
        cpu->r[14] = 0x001c95dcu; fn_0018ba6c(cpu);
    }
L_001c95dc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c95e0:;
    {
        cpu->r[14] = 0x001c95e4u; fn_001c9558(cpu);
    }
L_001c95e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c95e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c95ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001c95f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001c95f4:;
    {
        wr32(cpu->r[6], cpu->r[5]);
    }
L_001c95f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001c95fc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c9600:;
    {
        cpu->r[5] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_001c9604:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_001c9608:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001c960c:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_001c9610:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[14]);
    }
L_001c9614:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_001c9618:;
    {
        cpu->r[5] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_001c961c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c9620:;
    {
        cpu->r[14] = 0x001c9628u;
    }
L_001c9624:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9628u)) return;
    }
L_001c9628:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001c962c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9630:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001c9634:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9638u)) return;
    }
}

/* _ZN15DataPacketLobbyC2Ev @ 001c9638 (arm) */
void fn_001c9638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9638:;
    {
        cpu->r[3] = rd32(0x001c9640u + + 0x60u);
    }
L_001c963c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001c9640:;
    {
        cpu->r[2] = rd32(0x001c9648u + + 0x5cu);
    }
L_001c9644:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c964cu, cpu->r[3], 0, 0);
    }
L_001c9648:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c964c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9650:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9654:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c9658:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c965c:;
    {
        cpu->r[0] = 0x00000800u;
    }
L_001c9660:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001c9664:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001c9668:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c966c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001c9670:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001c9674:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001c9678:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001c967c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001c9680:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001c9684:;
    {
        cpu->r[14] = 0x001c9688u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c9688:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001c968c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001c9690:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001c9694:;
    {
        cpu->r[14] = 0x001c9698u; fn_001d0700(cpu);
    }
L_001c9698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c969c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c96a0u)) return;
    }
}

/* _ZN17DefaultDataPacket14addQueryStringEPKcs @ 001c96a8 (arm) */
void fn_001c96a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c96ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket17addShortLenStringEPKcs @ 001c96b0 (arm) */
void fn_001c96b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c96b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket17getShortLenStringERPcRs @ 001c96b8 (arm) */
void fn_001c96b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c96bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket21addShortLenWideStringEPKwh @ 001c96c0 (arm) */
void fn_001c96c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c96c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket21getShortLenWideStringERPwRh @ 001c96c8 (arm) */
void fn_001c96c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96c8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c96cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket7addByteEh @ 001c96d0 (arm) */
void fn_001c96d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c96d4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c96d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 1);
    }
L_001c96dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001c96e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c96e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
        }
    }
L_001c96e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c96ec:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x808u, cpu->r[2]);
        }
    }
L_001c96f0:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[12] + + 0x4u, cpu->r[1]);
        }
    }
L_001c96f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket7getByteERh @ 001c96f8 (arm) */
void fn_001c96f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c96f8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x804u);
    }
L_001c96fc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9700:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001c9708:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001c970c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c9710:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9714:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
        }
    }
L_001c9718:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd8(cpu->r[12] + + 0x4u);
        }
    }
L_001c971c:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[1], cpu->r[0]);
        }
    }
L_001c9720:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[1], cpu->r[12]);
        }
    }
L_001c9724:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x804u, cpu->r[2]);
        }
    }
L_001c9728:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket8addShortEs @ 001c972c (arm) */
void fn_001c972c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c972c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9730:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9734:;
    {
        cpu->r[0] = 0x000007feu;
    }
L_001c9738:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001c973c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001c9740:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001c9744:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001c9748:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
        }
    }
L_001c974c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c9750:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9754:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
        }
    }
L_001c9758:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x808u, cpu->r[12]);
        }
    }
L_001c975c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[1] >> 8) & 0xffu;
        }
    }
L_001c9760:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
        }
    }
L_001c9764:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[4] + + 0x4u, cpu->r[1]);
        }
    }
L_001c9768:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001c976c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket8getShortERs @ 001c9770 (arm) */
void fn_001c9770(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9770:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9774:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9778:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001c977c:;
    {
        wr16(cpu->r[1], cpu->r[2]);
    }
L_001c9780:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x804u);
    }
L_001c9784:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001c9788:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001c978c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c9790:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9794:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c97c0;
        }
    }
L_001c9798:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c979c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c97a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001c97a4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c97a8:;
    {
        cpu->r[4] = rd8(cpu->r[2] + + 0x4u);
    }
L_001c97ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c97b0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x4u);
    }
L_001c97b4:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[12]);
    }
L_001c97b8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001c97bc:;
    {
        wr16(cpu->r[1], cpu->r[3]);
    }
L_001c97c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001c97c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket6addIntEi @ 001c97c8 (arm) */
void fn_001c97c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c97c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c97cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c97d0:;
    {
        cpu->r[0] = 0x000007fcu;
    }
L_001c97d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001c97d8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001c97dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c97e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c9828;
        }
    }
L_001c97e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c97e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c97ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001c97f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001c97f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c97f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001c97fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001c9800:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9804:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c9808:;
    {
        wr32(cpu->r[3] + + 0x808u, cpu->r[12]);
    }
L_001c980c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[3] = v;
    }
L_001c9810:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001c9814:;
    {
        cpu->r[3] = (cpu->r[1] >> 16) & 0xffu;
    }
L_001c9818:;
    {
        wr8(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001c981c:;
    {
        cpu->r[3] = (cpu->r[1] >> 8) & 0xffu;
    }
L_001c9820:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001c9824:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001c9828:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001c982c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket6getIntERi @ 001c9830 (arm) */
void fn_001c9830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9830:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9834:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001c9838:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001c983c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x808u);
    }
L_001c9840:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x804u);
    }
L_001c9844:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_001c9848:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001c984c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001c9850:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c98c4;
        }
    }
L_001c9854:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9858:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c985c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9860:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c9864:;
    {
        cpu->r[10] = rd8(cpu->r[0] + + 0x4u);
    }
L_001c9868:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001c986c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c9870:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9874:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001c9878:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c987c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 24u, &shc); cpu->r[10] = v;
    }
L_001c9880:;
    {
        wr32(cpu->r[1], cpu->r[10]);
    }
L_001c9884:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x4u);
    }
L_001c9888:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[2]);
    }
L_001c988c:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001c9890:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[8], 2, 16u, &shc); cpu->r[2] = v;
    }
L_001c9894:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001c9898:;
    {
        cpu->r[7] = rd8(cpu->r[7] + + 0x4u);
    }
L_001c989c:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[4]);
    }
L_001c98a0:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001c98a4:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001c98a8:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001c98ac:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[12]);
    }
L_001c98b0:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x4u);
    }
L_001c98b4:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001c98b8:;
    {
        uint32_t v = cpu->r[12] | cpu->r[2]; cpu->r[2] = v;
    }
L_001c98bc:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_001c98c0:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[5]);
    }
L_001c98c4:;
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
        cpu->r[10] = v5;
        cpu->r[13] += 24u;
    }
L_001c98c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket8addFloatEf @ 001c98cc (arm) */
void fn_001c98cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c98cc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001c98d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001c98d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c98d8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c98dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001c98e0:;
    {
        cpu->r[1] = 0x000007fcu;
    }
L_001c98e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001c98e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c98ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001c993c;
        }
    }
L_001c98f0:;
    {
        cpu->r[4] = rd8(cpu->r[13] + + 0x4u);
    }
L_001c98f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c98f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c98fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9900:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9904:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001c9908:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[4]);
    }
L_001c990c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001c9910:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x5u);
    }
L_001c9914:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001c9918:;
    {
        wr32(cpu->r[3] + + 0x808u, cpu->r[12]);
    }
L_001c991c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001c9920:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001c9924:;
    {
        wr8(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_001c9928:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x6u);
    }
L_001c992c:;
    {
        wr32(cpu->r[3] + + 0x808u, cpu->r[6]);
    }
L_001c9930:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_001c9934:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x7u);
    }
L_001c9938:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001c993c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001c9940:;
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
L_001c9944:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket8getFloatERf @ 001c9948 (arm) */
void fn_001c9948(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9948:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c994c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9950:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001c9958u + + 0x68u);
    }
L_001c9954:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001c9958:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x804u);
    }
L_001c995c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001c9960:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 0);
    }
L_001c9964:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001c9968:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c996c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001c99b8;
        }
    }
L_001c9970:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c9978:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c997c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c9980:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x4u);
    }
L_001c9984:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9988:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001c998c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9990:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001c9994:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001c9998:;
    {
        wr8(cpu->r[1], cpu->r[6]);
    }
L_001c999c:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x4u);
    }
L_001c99a0:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[5]);
    }
L_001c99a4:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x4u);
    }
L_001c99a8:;
    {
        wr8(cpu->r[1] + + 0x2u, cpu->r[4]);
    }
L_001c99ac:;
    {
        cpu->r[12] = rd8(cpu->r[12] + + 0x4u);
    }
L_001c99b0:;
    {
        wr8(cpu->r[1] + + 0x3u, cpu->r[12]);
    }
L_001c99b4:;
    {
        wr32(cpu->r[3] + + 0x804u, cpu->r[2]);
    }
L_001c99b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001c99bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket13getMessageLenEv @ 001c99c4 (arm) */
void fn_001c99c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c99c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket14getMessageBodyEv @ 001c99cc (arm) */
void fn_001c99cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001c99d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket11packMessageEv @ 001c99d4 (arm) */
void fn_001c99d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket13getNextPacketEv @ 001c99d8 (arm) */
void fn_001c99d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x80cu);
    }
L_001c99dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket13setNextPacketEP10DataPacket @ 001c99e0 (arm) */
void fn_001c99e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99e0:;
    {
        wr32(cpu->r[0] + + 0x80cu, cpu->r[1]);
    }
L_001c99e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket11IsSendByTcpEv @ 001c99e8 (arm) */
void fn_001c99e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c99e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x810u);
    }
L_001c99ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001c99f0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
        }
    }
L_001c99f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c99f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c99fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket11IsSendByUdpEv @ 001c9a00 (arm) */
void fn_001c9a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a00:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x810u);
    }
L_001c9a04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001c9a08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9a0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001c9a10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket11getDataTypeEv @ 001c9a14 (arm) */
void fn_001c9a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x810u);
    }
L_001c9a18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket11setDataTypeEi @ 001c9a1c (arm) */
void fn_001c9a1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a1c:;
    {
        wr32(cpu->r[0] + + 0x810u, cpu->r[1]);
    }
L_001c9a20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket7getPortEv @ 001c9a24 (arm) */
void fn_001c9a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x818u);
    }
L_001c9a28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket7setPortEi @ 001c9a2c (arm) */
void fn_001c9a2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a2c:;
    {
        wr32(cpu->r[0] + + 0x818u, cpu->r[1]);
    }
L_001c9a30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket5getIPEv @ 001c9a34 (arm) */
void fn_001c9a34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x814u);
    }
L_001c9a38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17DefaultDataPacket13String2PacketEPci @ 001c9a3c (arm) */
void fn_001c9a3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c9a40:;
    {
        cpu->r[4] = rd8(cpu->r[1]);
    }
L_001c9a44:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
    }
L_001c9a48:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001c9a4c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_001c9a50:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_001c9a54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001c9a58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c9a5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001c9a60:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9a64u)) return;
        }
    }
L_001c9a64:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001c9a68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001c9a6c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001c9a70:;
    {
        cpu->r[14] = 0x001c9a78u;
    }
L_001c9a74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9a78u)) return;
    }
L_001c9a78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001c9a7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9a80u)) return;
    }
}

/* _ZN17DefaultDataPacket13Packet2StringEPcRi @ 001c9a80 (arm) */
void fn_001c9a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9a80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9a84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9a88:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9a8c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001c9a90:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x809u);
    }
L_001c9a94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001c9a98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001c9a9c:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001c9aa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9aa4:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_001c9aa8:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001c9aac:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c9ab0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9ab4:;
    {
        cpu->r[14] = 0x001c9ab8u; fn_001d06ec(cpu);
    }
L_001c9ab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9abc:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001c9ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c9ac4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_001c9ac8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9accu)) return;
    }
}

/* _ZN17DefaultDataPacket9addPacketEP10DataPacket @ 001c9acc (arm) */
void fn_001c9acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9acc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9ad0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c9ad4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9ad8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c9adc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9ae0:;
    {
        cpu->r[14] = 0x001c9ae8u;
    }
L_001c9ae4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9ae8u)) return;
    }
L_001c9ae8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9aec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9af0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001c9af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001c9af8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001c9afc:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[7]);
    }
L_001c9b00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001c9b04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001c9b08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9b0c:;
    {
        cpu->r[1] = (cpu->r[5] >> 8) & 0xffu;
    }
L_001c9b10:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_001c9b14:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[5]);
    }
L_001c9b18:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9b1c:;
    {
        cpu->r[14] = 0x001c9b24u;
    }
L_001c9b20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9b24u)) return;
    }
L_001c9b24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c9b28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001c9b2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001c9b30:;
    {
        cpu->r[14] = 0x001c9b34u; fn_001d06ec(cpu);
    }
L_001c9b34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9b38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9b3c:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[5]);
    }
L_001c9b40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9b44u)) return;
    }
}

/* _ZN17DefaultDataPacket14setMessageBodyEPhi @ 001c9b44 (arm) */
void fn_001c9b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9b44:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9b48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9b4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001c9b50:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9b54:;
    {
        cpu->r[14] = 0x001c9b58u; fn_001d06ec(cpu);
    }
L_001c9b58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9b5c:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[5]);
    }
L_001c9b60:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001c9b64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9b68u)) return;
    }
}

/* _ZN17DefaultDataPacketC1EP10DataPacket @ 001c9b68 (arm) */
void fn_001c9b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9b68:;
    {
        cpu->r[3] = rd32(0x001c9b70u + + 0x7cu);
    }
L_001c9b6c:;
    {
        cpu->r[2] = rd32(0x001c9b74u + + 0x7cu);
    }
L_001c9b70:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c9b78u, cpu->r[3], 0, 0);
    }
L_001c9b74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9b78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9b7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9b80:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c9b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c9b88:;
    {
        wr32(cpu->r[0] + + 0x814u, cpu->r[5]);
    }
L_001c9b8c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c9b90:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c9b94:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c9b98:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9b9c:;
    {
        wr32(cpu->r[4] + + 0x818u, cpu->r[5]);
    }
L_001c9ba0:;
    {
        cpu->r[14] = 0x001c9ba8u;
    }
L_001c9ba4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9ba8u)) return;
    }
L_001c9ba8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9bac:;
    {
        wr32(cpu->r[4] + + 0x810u, cpu->r[0]);
    }
L_001c9bb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9bb4:;
    {
        cpu->r[14] = 0x001c9bbcu;
    }
L_001c9bb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9bbcu)) return;
    }
L_001c9bbc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9bc0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c9bc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9bc8:;
    {
        cpu->r[14] = 0x001c9bd0u;
    }
L_001c9bcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9bd0u)) return;
    }
L_001c9bd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c9bd4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c9bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9bdc:;
    {
        cpu->r[14] = 0x001c9be0u; fn_001c9b44(cpu);
    }
L_001c9be0:;
    {
        wr32(cpu->r[4] + + 0x80cu, cpu->r[5]);
    }
L_001c9be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9be8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9becu)) return;
    }
}

/* _ZN17DefaultDataPacketC2EP10DataPacket @ 001c9bf4 (arm) */
void fn_001c9bf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9bf4:;
    {
        cpu->r[3] = rd32(0x001c9bfcu + + 0x7cu);
    }
L_001c9bf8:;
    {
        cpu->r[2] = rd32(0x001c9c00u + + 0x7cu);
    }
L_001c9bfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c9c04u, cpu->r[3], 0, 0);
    }
L_001c9c00:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001c9c04:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9c08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9c0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001c9c10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c9c14:;
    {
        wr32(cpu->r[0] + + 0x814u, cpu->r[5]);
    }
L_001c9c18:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c9c1c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c9c20:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001c9c24:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9c28:;
    {
        wr32(cpu->r[4] + + 0x818u, cpu->r[5]);
    }
L_001c9c2c:;
    {
        cpu->r[14] = 0x001c9c34u;
    }
L_001c9c30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9c34u)) return;
    }
L_001c9c34:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9c38:;
    {
        wr32(cpu->r[4] + + 0x810u, cpu->r[0]);
    }
L_001c9c3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9c40:;
    {
        cpu->r[14] = 0x001c9c48u;
    }
L_001c9c44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9c48u)) return;
    }
L_001c9c48:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9c4c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001c9c50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001c9c54:;
    {
        cpu->r[14] = 0x001c9c5cu;
    }
L_001c9c58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9c5cu)) return;
    }
L_001c9c5c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001c9c60:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001c9c64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9c68:;
    {
        cpu->r[14] = 0x001c9c6cu; fn_001c9b44(cpu);
    }
L_001c9c6c:;
    {
        wr32(cpu->r[4] + + 0x80cu, cpu->r[5]);
    }
L_001c9c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9c74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9c78u)) return;
    }
}

/* _ZN17DefaultDataPacket20addByteLenWideStringEPKwh @ 001c9c80 (arm) */
void fn_001c9c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9c80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9c84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9c88:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000200u, cpu->r[2], 1, 0);
    }
L_001c9c8c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001c9c90:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9c94:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 1, 1);
    }
L_001c9c98:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9c9c:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9ca0u)) return;
        }
    }
L_001c9ca0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c9ca4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_001c9ca8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001c9cac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001c9cb0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_001c9cb4:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001c9cb8:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001c9cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9cd0;
        }
    }
L_001c9cc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9cc4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9cc8:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[5]);
    }
L_001c9ccc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9cd0u)) return;
    }
L_001c9cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001c9cd4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001c9cd8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001c9cdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001c9ce0:;
    {
        cpu->r[14] = 0x001c9ce4u; fn_001d06ec(cpu);
    }
L_001c9ce4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9ce8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9cec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9cf0:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[5]);
    }
L_001c9cf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9cf8u)) return;
    }
}

/* _ZN17DefaultDataPacket16addByteLenStringEPKch @ 001c9cf8 (arm) */
void fn_001c9cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9cf8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9cfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9d00:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000800u, cpu->r[2], 1, 0);
    }
L_001c9d04:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9d08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9d0c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001c9d10:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9d14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9d18u)) return;
        }
    }
L_001c9d18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001c9d1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c9d20:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_001c9d24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9d28:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001c9d2c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001c9d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9d44;
        }
    }
L_001c9d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9d38:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9d3c:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001c9d40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9d44u)) return;
    }
L_001c9d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001c9d48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001c9d4c:;
    {
        cpu->r[14] = 0x001c9d50u; fn_001d06ec(cpu);
    }
L_001c9d50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x808u);
    }
L_001c9d54:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9d58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001c9d5c:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001c9d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9d64u)) return;
    }
}

/* _ZN17DefaultDataPacketD1Ev @ 001c9d64 (arm) */
void fn_001c9d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9d64:;
    {
        cpu->r[3] = rd32(0x001c9d6cu + + 0x38u);
    }
L_001c9d68:;
    {
        cpu->r[2] = rd32(0x001c9d70u + + 0x38u);
    }
L_001c9d6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c9d74u, cpu->r[3], 0, 0);
    }
L_001c9d70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c9d74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9d78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x814u);
    }
L_001c9d7c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9d80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9d84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c9d88:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c9d8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9d9c;
        }
    }
L_001c9d90:;
    {
        cpu->r[14] = 0x001c9d94u; fn_0018ba20(cpu);
    }
L_001c9d94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9d98:;
    {
        wr32(cpu->r[4] + + 0x814u, cpu->r[3]);
    }
L_001c9d9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9da0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9da4u)) return;
    }
}

/* _ZN17DefaultDataPacketD0Ev @ 001c9dac (arm) */
void fn_001c9dac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9dac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c9db0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9db4:;
    {
        cpu->r[14] = 0x001c9db8u; fn_001c9d64(cpu);
    }
L_001c9db8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9dbc:;
    {
        cpu->r[14] = 0x001c9dc0u; fn_0018ba20(cpu);
    }
L_001c9dc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9dc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9dc8u)) return;
    }
}

/* _ZN17DefaultDataPacketD2Ev @ 001c9dc8 (arm) */
void fn_001c9dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9dc8:;
    {
        cpu->r[3] = rd32(0x001c9dd0u + + 0x38u);
    }
L_001c9dcc:;
    {
        cpu->r[2] = rd32(0x001c9dd4u + + 0x38u);
    }
L_001c9dd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001c9dd8u, cpu->r[3], 0, 0);
    }
L_001c9dd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c9dd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9ddc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x814u);
    }
L_001c9de0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001c9de4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9de8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c9dec:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c9df0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9e00;
        }
    }
L_001c9df4:;
    {
        cpu->r[14] = 0x001c9df8u; fn_0018ba20(cpu);
    }
L_001c9df8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9dfc:;
    {
        wr32(cpu->r[4] + + 0x814u, cpu->r[3]);
    }
L_001c9e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9e04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9e08u)) return;
    }
}

/* _ZN17DefaultDataPacket5setIPEPc @ 001c9e10 (arm) */
void fn_001c9e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9e10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9e14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9e18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x814u);
    }
L_001c9e1c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c9e20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001c9e24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001c9e34;
        }
    }
L_001c9e28:;
    {
        cpu->r[14] = 0x001c9e2cu; fn_0018ba20(cpu);
    }
L_001c9e2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9e30:;
    {
        wr32(cpu->r[4] + + 0x814u, cpu->r[3]);
    }
L_001c9e34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001c9e38:;
    {
        cpu->r[14] = 0x001c9e3cu; fn_001d0ce8(cpu);
    }
L_001c9e3c:;
    {
        wr32(cpu->r[4] + + 0x814u, cpu->r[0]);
    }
L_001c9e40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9e44u)) return;
    }
}

/* _ZN17DefaultDataPacket20getByteLenWideStringERPwRh @ 001c9e44 (arm) */
void fn_001c9e44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9e44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x804u);
    }
L_001c9e48:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9e4c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9e50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c9e54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9e58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9e5c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9e60:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x4u);
    }
L_001c9e64:;
    {
        wr8(cpu->r[5], cpu->r[2]);
    }
L_001c9e68:;
    {
        wr32(cpu->r[0] + + 0x804u, cpu->r[3]);
    }
L_001c9e6c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9e70:;
    {
        cpu->r[0] = rd8(cpu->r[5]);
    }
L_001c9e74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 1, 0);
    }
L_001c9e78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c9e7c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9e80:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9e84u)) return;
        }
    }
L_001c9e84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c9e88:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001c9e8c:;
    {
        cpu->r[14] = 0x001c9e90u; imp__Znaj(cpu); /* _Znaj */
    }
L_001c9e90:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001c9e94:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9e98:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001c9e9c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c9ea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9ec4;
        }
    }
L_001c9ea4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c9ea8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001c9eac:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001c9eb0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x804u);
    }
L_001c9eb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001c9ebc:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001c9ec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9ec4u)) return;
    }
L_001c9ec4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x804u);
    }
L_001c9ec8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001c9ecc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001c9ed0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001c9ed4:;
    {
        cpu->r[14] = 0x001c9ed8u; fn_001d06ec(cpu);
    }
L_001c9ed8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9edc:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001c9ee0:;
    {
        goto L_001c9ea4;
    }
}

/* _ZN17DefaultDataPacket16getByteLenStringERPcRh @ 001c9ee4 (arm) */
void fn_001c9ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9ee4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x804u);
    }
L_001c9ee8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9eec:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001c9ef0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001c9ef4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9ef8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001c9efc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001c9f00:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x4u);
    }
L_001c9f04:;
    {
        wr8(cpu->r[5], cpu->r[2]);
    }
L_001c9f08:;
    {
        wr32(cpu->r[0] + + 0x804u, cpu->r[3]);
    }
L_001c9f0c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x808u);
    }
L_001c9f10:;
    {
        cpu->r[0] = rd8(cpu->r[5]);
    }
L_001c9f14:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001c9f18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001c9f1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001c9f20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9f24u)) return;
        }
    }
L_001c9f24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001c9f28:;
    {
        cpu->r[14] = 0x001c9f2cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001c9f2c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001c9f30:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001c9f34:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001c9f38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001c9f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001c9f60;
        }
    }
L_001c9f40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001c9f44:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001c9f48:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001c9f4c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9f50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x804u);
    }
L_001c9f54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001c9f58:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001c9f5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9f60u)) return;
    }
L_001c9f60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x804u);
    }
L_001c9f64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001c9f68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001c9f6c:;
    {
        cpu->r[14] = 0x001c9f70u; fn_001d06ec(cpu);
    }
L_001c9f70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001c9f74:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_001c9f78:;
    {
        goto L_001c9f40;
    }
}

/* _ZN17DefaultDataPacketC1Ev @ 001c9f7c (arm) */
void fn_001c9f7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9f7c:;
    {
        cpu->r[12] = rd32(0x001c9f84u + + 0x50u);
    }
L_001c9f80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001c9f84:;
    {
        cpu->r[2] = rd32(0x001c9f8cu + + 0x4cu);
    }
L_001c9f88:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001c9f8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001c9f94u, cpu->r[12], 0, 0);
    }
L_001c9f90:;
    {
        wr32(cpu->r[0] + + 0x814u, cpu->r[3]);
    }
L_001c9f94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001c9f98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9f9c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001c9fa0:;
    {
        wr32(cpu->r[0] + + 0x818u, cpu->r[3]);
    }
L_001c9fa4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001c9fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001c9fac:;
    {
        wr32(cpu->r[4] + + 0x810u, cpu->r[0]);
    }
L_001c9fb0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001c9fb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001c9fb8:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001c9fbc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001c9fc0:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001c9fc4:;
    {
        wr32(cpu->r[4] + + 0x80cu, cpu->r[3]);
    }
L_001c9fc8:;
    {
        cpu->r[14] = 0x001c9fccu; fn_001d0700(cpu);
    }
L_001c9fcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001c9fd0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001c9fd4u)) return;
    }
}

/* _ZN17DefaultDataPacket9getPacketERP10DataPacket @ 001c9fdc (arm) */
void fn_001c9fdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001c9fdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001c9fe0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001c9fe4:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001c9fe8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001c9fec:;
    {
        cpu->r[14] = 0x001c9ff0u; fn_0018ba6c(cpu);
    }
L_001c9ff0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001c9ff4:;
    {
        cpu->r[14] = 0x001c9ff8u; fn_001c9f7c(cpu);
    }
L_001c9ff8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x804u);
    }
L_001c9ffc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ca000:;
    {
        wr32(cpu->r[5], cpu->r[6]);
    }
L_001ca004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001ca008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001ca00c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001ca010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ca014:;
    {
        cpu->r[5] = rd8(cpu->r[2] + + 0x4u);
    }
L_001ca018:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001ca01c:;
    {
        cpu->r[2] = rd8(cpu->r[12] + + 0x4u);
    }
L_001ca020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001ca024:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001ca028:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_001ca02c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ca030:;
    {
        cpu->r[5] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_001ca034:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ca038:;
    {
        cpu->r[14] = 0x001ca040u;
    }
L_001ca03c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca040u)) return;
    }
L_001ca040:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x804u);
    }
L_001ca044:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001ca048:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[5]);
    }
L_001ca04c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca050u)) return;
    }
}

/* _ZN17DefaultDataPacketC2Ev @ 001ca050 (arm) */
void fn_001ca050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca050:;
    {
        cpu->r[12] = rd32(0x001ca058u + + 0x50u);
    }
L_001ca054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ca058:;
    {
        cpu->r[2] = rd32(0x001ca060u + + 0x4cu);
    }
L_001ca05c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ca060:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ca068u, cpu->r[12], 0, 0);
    }
L_001ca064:;
    {
        wr32(cpu->r[0] + + 0x814u, cpu->r[3]);
    }
L_001ca068:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ca06c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca070:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001ca074:;
    {
        wr32(cpu->r[0] + + 0x818u, cpu->r[3]);
    }
L_001ca078:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001ca07c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ca080:;
    {
        wr32(cpu->r[4] + + 0x810u, cpu->r[0]);
    }
L_001ca084:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ca088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001ca08c:;
    {
        wr32(cpu->r[4] + + 0x808u, cpu->r[3]);
    }
L_001ca090:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ca094:;
    {
        wr32(cpu->r[4] + + 0x804u, cpu->r[3]);
    }
L_001ca098:;
    {
        wr32(cpu->r[4] + + 0x80cu, cpu->r[3]);
    }
L_001ca09c:;
    {
        cpu->r[14] = 0x001ca0a0u; fn_001d0700(cpu);
    }
L_001ca0a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca0a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca0a8u)) return;
    }
}

/* _ZN10Connection21getNextIncomingPacketEv @ 001ca0b0 (arm) */
void fn_001ca0b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca0b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca0b4:;
    {
        cpu->r[6] = 0x00001028u;
    }
L_001ca0b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca0bc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001ca0c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ca0c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca100;
        }
    }
L_001ca0c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca0cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca0d0:;
    {
        cpu->r[14] = 0x001ca0d8u;
    }
L_001ca0d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca0d8u)) return;
    }
L_001ca0d8:;
    {
        cpu->r[3] = 0x0000102cu;
    }
L_001ca0dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ca0e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ca0e4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001ca0e8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_001ca0ec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
        }
    }
L_001ca0f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca0f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca0f8:;
    {
        cpu->r[14] = 0x001ca100u;
    }
L_001ca0fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca100u)) return;
    }
L_001ca100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca104:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca108u)) return;
    }
}

/* _ZN10Connection11isConnectedEv @ 001ca108 (arm) */
void fn_001ca108(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca108:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0xau);
    }
L_001ca10c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10Connection13set_connectedEb @ 001ca110 (arm) */
void fn_001ca110(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca110:;
    {
        wr8(cpu->r[0] + + 0xau, cpu->r[1]);
    }
L_001ca114:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10Connection14cleanRetryDataEv @ 001ca118 (arm) */
void fn_001ca118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca118:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca11c:;
    {
        cpu->r[4] = 0x00001038u;
    }
L_001ca120:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca124:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_001ca128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca12c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca130u)) return;
        }
    }
L_001ca130:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca134:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca138:;
    {
        cpu->r[14] = 0x001ca140u;
    }
L_001ca13c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca140u)) return;
    }
L_001ca140:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ca144:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_001ca148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca14cu)) return;
    }
}

/* _ZN10Connection19getTimeOfLastReqestEv @ 001ca14c (arm) */
void fn_001ca14c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca14c:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001ca150:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca154:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10Connection13saveRetryDataEP10DataPacket @ 001ca158 (arm) */
void fn_001ca158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca158:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca15c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ca160:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca164:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca168u)) return;
        }
    }
L_001ca168:;
    {
        cpu->r[14] = 0x001ca16cu; fn_001ca118(cpu);
    }
L_001ca16c:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca170:;
    {
        cpu->r[14] = 0x001ca174u; fn_0018ba6c(cpu);
    }
L_001ca174:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ca178:;
    {
        cpu->r[14] = 0x001ca17cu; fn_001c9f7c(cpu);
    }
L_001ca17c:;
    {
        cpu->r[3] = 0x00001038u;
    }
L_001ca180:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ca184:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001ca188:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_001ca18c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ca190:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x68u);
    }
L_001ca194:;
    {
        cpu->r[14] = 0x001ca19cu;
    }
L_001ca198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca19cu)) return;
    }
L_001ca19c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ca1a0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ca1a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ca1a8:;
    {
        cpu->r[14] = 0x001ca1b0u;
    }
L_001ca1ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca1b0u)) return;
    }
L_001ca1b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ca1b4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ca1b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ca1bc:;
    {
        cpu->r[14] = 0x001ca1c0u; guest_call(cpu, cpu->r[5]);
    }
L_001ca1c0:;
    {
        cpu->r[14] = 0x001ca1c4u; fn_001d05bc(cpu);
    }
L_001ca1c4:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001ca1c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001ca1cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca1d0u)) return;
    }
}

/* _ZN10Connection7connectEv @ 001ca1d0 (arm) */
void fn_001ca1d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca1d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca1d4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ca1d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca1dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ca1e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ca218;
        }
    }
L_001ca1e4:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001ca1e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca1ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca204;
        }
    }
L_001ca1f4:;
    {
        cpu->r[3] = 0x0000101cu;
    }
L_001ca1f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca1fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ca280;
        }
    }
L_001ca204:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ca208:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001ca20c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001ca210:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca218u)) return;
    }
L_001ca218:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001ca21c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca22c;
        }
    }
L_001ca220:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ca224:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca228:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca22cu)) return;
    }
L_001ca22c:;
    {
        cpu->r[6] = 0x00001010u;
    }
L_001ca230:;
    {
        cpu->r[2] = 0x00001018u;
    }
L_001ca234:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001ca238:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001ca23c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca240:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca244:;
    {
        cpu->r[14] = 0x001ca24cu;
    }
L_001ca248:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca24cu)) return;
    }
L_001ca24c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ca250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ca2b4;
        }
    }
L_001ca254:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ca258:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x858u);
    }
L_001ca25c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ca260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca220;
        }
    }
L_001ca264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca220;
        }
    }
L_001ca26c:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001ca270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca274:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001ca278:;
    {
        wr32(cpu->r[2] + + 0x858u, cpu->r[0]);
    }
L_001ca27c:;
    {
        goto L_001ca210;
    }
L_001ca280:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001ca284:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca288:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca28c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca290:;
    {
        cpu->r[14] = 0x001ca298u;
    }
L_001ca294:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca298u)) return;
    }
L_001ca298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ca29c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001ca2a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_001ca2a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ca2a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca2ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001ca2b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca2b4u)) return;
    }
L_001ca2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca2b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca2bc:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001ca2c0:;
    {
        cpu->r[14] = 0x001ca2c8u;
    }
L_001ca2c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca2c8u)) return;
    }
L_001ca2c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca2cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca2d0:;
    {
        cpu->r[14] = 0x001ca2d8u;
    }
L_001ca2d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca2d8u)) return;
    }
L_001ca2d8:;
    {
        cpu->r[14] = 0x001ca2dcu; fn_001d05bc(cpu);
    }
L_001ca2dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ca2e0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001ca2e4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_001ca2e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ca2ec:;
    {
        wr32(cpu->r[3] + + 0x858u, cpu->r[2]);
    }
L_001ca2f0:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001ca2f4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001ca2f8:;
    {
        goto L_001ca210;
    }
}

/* _ZN10Connection17addIncomingPacketEP10DataPacket @ 001ca2fc (arm) */
void fn_001ca2fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca2fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca300:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ca304:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca308:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca30cu)) return;
        }
    }
L_001ca30c:;
    {
        cpu->r[3] = 0x00001028u;
    }
L_001ca310:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca314:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ca318:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[6]);
        }
    }
L_001ca31c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000102cu;
        }
    }
L_001ca320:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[6]);
        }
    }
L_001ca324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca328u)) return;
        }
    }
L_001ca328:;
    {
        cpu->r[5] = 0x0000102cu;
    }
L_001ca32c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001ca330:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca350;
        }
    }
L_001ca338:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca33c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca340:;
    {
        cpu->r[14] = 0x001ca348u;
    }
L_001ca344:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca348u)) return;
    }
L_001ca348:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_001ca34c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca350u)) return;
    }
L_001ca350:;
    {
        cpu->r[0] = rd32(0x001ca358u + + 0x8u);
    }
L_001ca354:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ca35cu, cpu->r[0], 0, 0);
    }
L_001ca358:;
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
L_001ca35c:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN10Connection17addOutgoingPacketEP10DataPacket @ 001ca364 (arm) */
void fn_001ca364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca364:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca368:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ca36c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca370:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca374u)) return;
        }
    }
L_001ca374:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xau);
    }
L_001ca378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca37c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca3b8;
        }
    }
L_001ca380:;
    {
        cpu->r[3] = 0x00001020u;
    }
L_001ca384:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001ca388:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ca38c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca3dc;
        }
    }
L_001ca390:;
    {
        cpu->r[6] = 0x00001024u;
    }
L_001ca394:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001ca398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ca3cc;
        }
    }
L_001ca3a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca3a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca3a8:;
    {
        cpu->r[14] = 0x001ca3b0u;
    }
L_001ca3ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3b0u)) return;
    }
L_001ca3b0:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[5]);
    }
L_001ca3b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3b8u)) return;
    }
L_001ca3b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca3bc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca3c0:;
    {
        cpu->r[14] = 0x001ca3c8u;
    }
L_001ca3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3c8u)) return;
    }
L_001ca3c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3ccu)) return;
    }
L_001ca3cc:;
    {
        cpu->r[0] = rd32(0x001ca3d4u + + 0x24u);
    }
L_001ca3d0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ca3d8u, cpu->r[0], 0, 0);
    }
L_001ca3d4:;
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
L_001ca3d8:;
    {
        return fn_001d0ac4(cpu);
    }
L_001ca3dc:;
    {
        cpu->r[2] = 0x00001024u;
    }
L_001ca3e0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_001ca3e4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ca3e8:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[5]);
    }
L_001ca3ec:;
    {
        cpu->r[14] = 0x001ca3f4u;
    }
L_001ca3f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3f4u)) return;
    }
L_001ca3f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca3f8u)) return;
    }
}

/* _ZN10Connection13sendRetryDataEv @ 001ca3fc (arm) */
void fn_001ca3fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca3fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca400:;
    {
        cpu->r[7] = 0x00001038u;
    }
L_001ca404:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca408:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_001ca40c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ca410:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca414u)) return;
        }
    }
L_001ca414:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca418:;
    {
        cpu->r[14] = 0x001ca41cu; fn_0018ba6c(cpu);
    }
L_001ca41c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca420:;
    {
        cpu->r[14] = 0x001ca424u; fn_001c9f7c(cpu);
    }
L_001ca424:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ca428:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001ca42c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca434:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x68u);
    }
L_001ca438:;
    {
        cpu->r[14] = 0x001ca440u;
    }
L_001ca43c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca440u)) return;
    }
L_001ca440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ca444:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ca448:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ca44c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ca450:;
    {
        cpu->r[14] = 0x001ca458u;
    }
L_001ca454:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca458u)) return;
    }
L_001ca458:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ca45c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ca460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca464:;
    {
        cpu->r[14] = 0x001ca468u; guest_call(cpu, cpu->r[6]);
    }
L_001ca468:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca46c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca470:;
    {
        cpu->r[14] = 0x001ca474u; fn_001ca364(cpu);
    }
L_001ca474:;
    {
        cpu->r[14] = 0x001ca478u; fn_001d05bc(cpu);
    }
L_001ca478:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001ca47c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001ca480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca484u)) return;
    }
}

/* _ZN10Connection19keepConnectionAliveEv @ 001ca484 (arm) */
void fn_001ca484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca484:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca488:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca48c:;
    {
        cpu->r[14] = 0x001ca490u; fn_001d05bc(cpu);
    }
L_001ca490:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001ca494:;
    {
        cpu->r[2] = 0x00002710u;
    }
L_001ca498:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ca49c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001ca4a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ca4a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ca4a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca4acu)) return;
        }
    }
L_001ca4ac:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca4b0:;
    {
        cpu->r[14] = 0x001ca4b4u; fn_0018ba6c(cpu);
    }
L_001ca4b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca4b8:;
    {
        cpu->r[14] = 0x001ca4bcu; fn_001c9f7c(cpu);
    }
L_001ca4bc:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca4c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca4c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca4c8:;
    {
        cpu->r[14] = 0x001ca4d0u;
    }
L_001ca4cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca4d0u)) return;
    }
L_001ca4d0:;
    {
        cpu->r[1] = 0x00000061u;
    }
L_001ca4d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca4d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca4dc:;
    {
        cpu->r[14] = 0x001ca4e4u;
    }
L_001ca4e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca4e4u)) return;
    }
L_001ca4e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca4e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca4ec:;
    {
        cpu->r[14] = 0x001ca4f4u;
    }
L_001ca4f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca4f4u)) return;
    }
L_001ca4f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca4f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca4fc:;
    {
        cpu->r[14] = 0x001ca500u; fn_001ca364(cpu);
    }
L_001ca500:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001ca504:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca508u)) return;
    }
}

/* _ZN10Connection24sendKickOutPlayerPackageEPc @ 001ca508 (arm) */
void fn_001ca508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca508:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca50c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ca510:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca518u)) return;
        }
    }
L_001ca518:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca51c:;
    {
        cpu->r[14] = 0x001ca520u; fn_0018ba6c(cpu);
    }
L_001ca520:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca524:;
    {
        cpu->r[14] = 0x001ca528u; fn_001c9f7c(cpu);
    }
L_001ca528:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca52c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca530:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca534:;
    {
        cpu->r[14] = 0x001ca53cu;
    }
L_001ca538:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca53cu)) return;
    }
L_001ca53c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca540:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca548:;
    {
        cpu->r[14] = 0x001ca550u;
    }
L_001ca54c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca550u)) return;
    }
L_001ca550:;
    {
        cpu->r[1] = 0x0000006bu;
    }
L_001ca554:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca558:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca55c:;
    {
        cpu->r[14] = 0x001ca564u;
    }
L_001ca560:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca564u)) return;
    }
L_001ca564:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca568:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ca56c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x28u);
    }
L_001ca570:;
    {
        cpu->r[14] = 0x001ca574u; fn_001d0434(cpu);
    }
L_001ca574:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ca578:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001ca57c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca580:;
    {
        cpu->r[14] = 0x001ca584u; guest_call(cpu, cpu->r[6]);
    }
L_001ca584:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca58c:;
    {
        cpu->r[14] = 0x001ca594u;
    }
L_001ca590:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca594u)) return;
    }
L_001ca594:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca598:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca59c:;
    {
        cpu->r[14] = 0x001ca5a0u; fn_001ca158(cpu);
    }
L_001ca5a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca5a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca5a8:;
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
L_001ca5ac:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection24sendUpdateSessionPackageEi @ 001ca5b0 (arm) */
void fn_001ca5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca5b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca5b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca5b8:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca5bc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001ca5c0:;
    {
        cpu->r[14] = 0x001ca5c4u; fn_0018ba6c(cpu);
    }
L_001ca5c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca5c8:;
    {
        cpu->r[14] = 0x001ca5ccu; fn_001c9f7c(cpu);
    }
L_001ca5cc:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca5d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca5d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca5d8:;
    {
        cpu->r[14] = 0x001ca5e0u;
    }
L_001ca5dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca5e0u)) return;
    }
L_001ca5e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca5e4:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca5e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca5ec:;
    {
        cpu->r[14] = 0x001ca5f4u;
    }
L_001ca5f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca5f4u)) return;
    }
L_001ca5f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca5f8:;
    {
        cpu->r[1] = 0x00000065u;
    }
L_001ca5fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca600:;
    {
        cpu->r[14] = 0x001ca608u;
    }
L_001ca604:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca608u)) return;
    }
L_001ca608:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[6]);
    }
L_001ca60c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca614:;
    {
        cpu->r[14] = 0x001ca61cu;
    }
L_001ca618:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca61cu)) return;
    }
L_001ca61c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca620:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca624:;
    {
        cpu->r[14] = 0x001ca62cu;
    }
L_001ca628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca62cu)) return;
    }
L_001ca62c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca630:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca634:;
    {
        cpu->r[14] = 0x001ca638u; fn_001ca158(cpu);
    }
L_001ca638:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca63c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca640:;
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
L_001ca644:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection21sendFinishGamePackageEv @ 001ca648 (arm) */
void fn_001ca648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca648:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca64c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca650:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca654:;
    {
        cpu->r[14] = 0x001ca658u; fn_0018ba6c(cpu);
    }
L_001ca658:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca65c:;
    {
        cpu->r[14] = 0x001ca660u; fn_001c9f7c(cpu);
    }
L_001ca660:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca668:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca66c:;
    {
        cpu->r[14] = 0x001ca674u;
    }
L_001ca670:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca674u)) return;
    }
L_001ca674:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca678:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca67c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca680:;
    {
        cpu->r[14] = 0x001ca688u;
    }
L_001ca684:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca688u)) return;
    }
L_001ca688:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_001ca68c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca694:;
    {
        cpu->r[14] = 0x001ca69cu;
    }
L_001ca698:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca69cu)) return;
    }
L_001ca69c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca6a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca6a4:;
    {
        cpu->r[14] = 0x001ca6acu;
    }
L_001ca6a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca6acu)) return;
    }
L_001ca6ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca6b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca6b4:;
    {
        cpu->r[14] = 0x001ca6b8u; fn_001ca158(cpu);
    }
L_001ca6b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca6bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca6c0:;
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
L_001ca6c4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection20sendStartGamePackageEv @ 001ca6c8 (arm) */
void fn_001ca6c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca6c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ca6cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca6d0:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca6d4:;
    {
        cpu->r[14] = 0x001ca6d8u; fn_0018ba6c(cpu);
    }
L_001ca6d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca6dc:;
    {
        cpu->r[14] = 0x001ca6e0u; fn_001c9f7c(cpu);
    }
L_001ca6e0:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca6e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca6e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca6ec:;
    {
        cpu->r[14] = 0x001ca6f4u;
    }
L_001ca6f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca6f4u)) return;
    }
L_001ca6f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca6f8:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca6fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca700:;
    {
        cpu->r[14] = 0x001ca708u;
    }
L_001ca704:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca708u)) return;
    }
L_001ca708:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_001ca70c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca710:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca714:;
    {
        cpu->r[14] = 0x001ca71cu;
    }
L_001ca718:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca71cu)) return;
    }
L_001ca71c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ca720:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca724:;
    {
        cpu->r[14] = 0x001ca72cu;
    }
L_001ca728:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca72cu)) return;
    }
L_001ca72c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca730:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca734:;
    {
        cpu->r[14] = 0x001ca738u; fn_001ca158(cpu);
    }
L_001ca738:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca73c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ca740:;
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
L_001ca744:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection29sendListSessionsByDataPackageEhiPci @ 001ca748 (arm) */
void fn_001ca748(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca748:;
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
L_001ca74c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca750:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca754:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001ca758:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001ca75c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001ca760:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ca764:;
    {
        cpu->r[14] = 0x001ca768u; fn_0018ba6c(cpu);
    }
L_001ca768:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca76c:;
    {
        cpu->r[14] = 0x001ca770u; fn_001c9f7c(cpu);
    }
L_001ca770:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca774:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca778:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca77c:;
    {
        cpu->r[14] = 0x001ca784u;
    }
L_001ca780:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca784u)) return;
    }
L_001ca784:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca788:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca78c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca790:;
    {
        cpu->r[14] = 0x001ca798u;
    }
L_001ca794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca798u)) return;
    }
L_001ca798:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca79c:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001ca7a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca7a4:;
    {
        cpu->r[14] = 0x001ca7acu;
    }
L_001ca7a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca7acu)) return;
    }
L_001ca7ac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ca7b0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca7b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca7b8:;
    {
        cpu->r[14] = 0x001ca7c0u;
    }
L_001ca7bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca7c0u)) return;
    }
L_001ca7c0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ca7c4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca7c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca7cc:;
    {
        cpu->r[14] = 0x001ca7d4u;
    }
L_001ca7d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca7d4u)) return;
    }
L_001ca7d4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca7d8:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_001ca7dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca7e0:;
    {
        cpu->r[14] = 0x001ca7e8u;
    }
L_001ca7e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca7e8u)) return;
    }
L_001ca7e8:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_001ca7ec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ca7f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca7f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca7f8:;
    {
        cpu->r[14] = 0x001ca800u;
    }
L_001ca7fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca800u)) return;
    }
L_001ca800:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca808:;
    {
        cpu->r[14] = 0x001ca810u;
    }
L_001ca80c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca810u)) return;
    }
L_001ca810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca814:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca818:;
    {
        cpu->r[14] = 0x001ca81cu; fn_001ca158(cpu);
    }
L_001ca81c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca820:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca824:;
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
L_001ca828:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection29sendListSessionsByNamePackageEhiPc @ 001ca82c (arm) */
void fn_001ca82c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca82c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca830:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca834:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca838:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001ca83c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001ca840:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ca844:;
    {
        cpu->r[14] = 0x001ca848u; fn_0018ba6c(cpu);
    }
L_001ca848:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca84c:;
    {
        cpu->r[14] = 0x001ca850u; fn_001c9f7c(cpu);
    }
L_001ca850:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca854:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca858:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca85c:;
    {
        cpu->r[14] = 0x001ca864u;
    }
L_001ca860:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca864u)) return;
    }
L_001ca864:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca868:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca86c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca870:;
    {
        cpu->r[14] = 0x001ca878u;
    }
L_001ca874:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca878u)) return;
    }
L_001ca878:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca87c:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001ca880:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca884:;
    {
        cpu->r[14] = 0x001ca88cu;
    }
L_001ca888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca88cu)) return;
    }
L_001ca88c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ca890:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca894:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca898:;
    {
        cpu->r[14] = 0x001ca8a0u;
    }
L_001ca89c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca8a0u)) return;
    }
L_001ca8a0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ca8a4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca8a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca8ac:;
    {
        cpu->r[14] = 0x001ca8b4u;
    }
L_001ca8b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca8b4u)) return;
    }
L_001ca8b4:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_001ca8b8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca8bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca8c0:;
    {
        cpu->r[14] = 0x001ca8c8u;
    }
L_001ca8c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca8c8u)) return;
    }
L_001ca8c8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca8cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ca8d0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x28u);
    }
L_001ca8d4:;
    {
        cpu->r[14] = 0x001ca8d8u; fn_001d0434(cpu);
    }
L_001ca8d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ca8dc:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001ca8e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca8e4:;
    {
        cpu->r[14] = 0x001ca8e8u; guest_call(cpu, cpu->r[7]);
    }
L_001ca8e8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca8ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca8f0:;
    {
        cpu->r[14] = 0x001ca8f8u;
    }
L_001ca8f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca8f8u)) return;
    }
L_001ca8f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca8fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca900:;
    {
        cpu->r[14] = 0x001ca904u; fn_001ca158(cpu);
    }
L_001ca904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca908:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca90c:;
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
L_001ca910:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection26sendListSessionsAllPackageEhi @ 001ca914 (arm) */
void fn_001ca914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca914:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca918:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca91c:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca920:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001ca924:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ca928:;
    {
        cpu->r[14] = 0x001ca92cu; fn_0018ba6c(cpu);
    }
L_001ca92c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca930:;
    {
        cpu->r[14] = 0x001ca934u; fn_001c9f7c(cpu);
    }
L_001ca934:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca938:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca93c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca940:;
    {
        cpu->r[14] = 0x001ca948u;
    }
L_001ca944:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca948u)) return;
    }
L_001ca948:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca94c:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001ca950:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca954:;
    {
        cpu->r[14] = 0x001ca95cu;
    }
L_001ca958:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca95cu)) return;
    }
L_001ca95c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca960:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001ca964:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca968:;
    {
        cpu->r[14] = 0x001ca970u;
    }
L_001ca96c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca970u)) return;
    }
L_001ca970:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ca974:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca978:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca97c:;
    {
        cpu->r[14] = 0x001ca984u;
    }
L_001ca980:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca984u)) return;
    }
L_001ca984:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ca988:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca98c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca990:;
    {
        cpu->r[14] = 0x001ca998u;
    }
L_001ca994:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca998u)) return;
    }
L_001ca998:;
    {
        cpu->r[1] = 0x00000061u;
    }
L_001ca99c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca9a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca9a4:;
    {
        cpu->r[14] = 0x001ca9acu;
    }
L_001ca9a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca9acu)) return;
    }
L_001ca9ac:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ca9b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ca9b4:;
    {
        cpu->r[14] = 0x001ca9bcu;
    }
L_001ca9b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ca9bcu)) return;
    }
L_001ca9bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca9c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca9c4:;
    {
        cpu->r[14] = 0x001ca9c8u; fn_001ca158(cpu);
    }
L_001ca9c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ca9cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ca9d0:;
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
L_001ca9d4:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection23sendListSessionsPackageEhi @ 001ca9d8 (arm) */
void fn_001ca9d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ca9d8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ca9dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ca9e0:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001ca9e4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001ca9e8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ca9ec:;
    {
        cpu->r[14] = 0x001ca9f0u; fn_0018ba6c(cpu);
    }
L_001ca9f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ca9f4:;
    {
        cpu->r[14] = 0x001ca9f8u; fn_001c9f7c(cpu);
    }
L_001ca9f8:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001ca9fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa00:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa04:;
    {
        cpu->r[14] = 0x001caa0cu;
    }
L_001caa08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa0cu)) return;
    }
L_001caa0c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa10:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001caa14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa18:;
    {
        cpu->r[14] = 0x001caa20u;
    }
L_001caa1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa20u)) return;
    }
L_001caa20:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa24:;
    {
        cpu->r[1] = 0x0000006cu;
    }
L_001caa28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa2c:;
    {
        cpu->r[14] = 0x001caa34u;
    }
L_001caa30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa34u)) return;
    }
L_001caa34:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001caa38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa40:;
    {
        cpu->r[14] = 0x001caa48u;
    }
L_001caa44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa48u)) return;
    }
L_001caa48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001caa4c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa54:;
    {
        cpu->r[14] = 0x001caa5cu;
    }
L_001caa58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa5cu)) return;
    }
L_001caa5c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001caa60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caa64:;
    {
        cpu->r[14] = 0x001caa6cu;
    }
L_001caa68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caa6cu)) return;
    }
L_001caa6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caa70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001caa74:;
    {
        cpu->r[14] = 0x001caa78u; fn_001ca158(cpu);
    }
L_001caa78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caa7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001caa80:;
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
L_001caa84:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection23sendLeaveSessionPackageEv @ 001caa88 (arm) */
void fn_001caa88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001caa88:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001caa8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001caa90:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001caa94:;
    {
        cpu->r[14] = 0x001caa98u; fn_0018ba6c(cpu);
    }
L_001caa98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001caa9c:;
    {
        cpu->r[14] = 0x001caaa0u; fn_001c9f7c(cpu);
    }
L_001caaa0:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001caaa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caaa8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caaac:;
    {
        cpu->r[14] = 0x001caab4u;
    }
L_001caab0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caab4u)) return;
    }
L_001caab4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caab8:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001caabc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caac0:;
    {
        cpu->r[14] = 0x001caac8u;
    }
L_001caac4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caac8u)) return;
    }
L_001caac8:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_001caacc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caad0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caad4:;
    {
        cpu->r[14] = 0x001caadcu;
    }
L_001caad8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caadcu)) return;
    }
L_001caadc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caae4:;
    {
        cpu->r[14] = 0x001caaecu;
    }
L_001caae8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caaecu)) return;
    }
L_001caaec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caaf0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001caaf4:;
    {
        cpu->r[14] = 0x001caaf8u; fn_001ca158(cpu);
    }
L_001caaf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caafc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cab00:;
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
L_001cab04:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection22sendJoinSessionPackageEPc @ 001cab08 (arm) */
void fn_001cab08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cab08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cab0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cab10:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cab14:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cab18:;
    {
        cpu->r[14] = 0x001cab1cu; fn_0018ba6c(cpu);
    }
L_001cab1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cab20:;
    {
        cpu->r[14] = 0x001cab24u; fn_001c9f7c(cpu);
    }
L_001cab24:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001cab28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cab2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cab30:;
    {
        cpu->r[14] = 0x001cab38u;
    }
L_001cab34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cab38u)) return;
    }
L_001cab38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cab3c:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001cab40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cab44:;
    {
        cpu->r[14] = 0x001cab4cu;
    }
L_001cab48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cab4cu)) return;
    }
L_001cab4c:;
    {
        cpu->r[1] = 0x0000006au;
    }
L_001cab50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cab54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cab58:;
    {
        cpu->r[14] = 0x001cab60u;
    }
L_001cab5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cab60u)) return;
    }
L_001cab60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cab64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cab68:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x28u);
    }
L_001cab6c:;
    {
        cpu->r[14] = 0x001cab70u; fn_001d0434(cpu);
    }
L_001cab70:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cab74:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001cab78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cab7c:;
    {
        cpu->r[14] = 0x001cab80u; guest_call(cpu, cpu->r[6]);
    }
L_001cab80:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cab84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cab88:;
    {
        cpu->r[14] = 0x001cab90u;
    }
L_001cab8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cab90u)) return;
    }
L_001cab90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cab94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cab98:;
    {
        cpu->r[14] = 0x001cab9cu; fn_001ca158(cpu);
    }
L_001cab9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caba0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001caba4:;
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
L_001caba8:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection20sendQuickGamePackageEv @ 001cabac (arm) */
void fn_001cabac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cabac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cabb0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cabb4:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cabb8:;
    {
        cpu->r[14] = 0x001cabbcu; fn_0018ba6c(cpu);
    }
L_001cabbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cabc0:;
    {
        cpu->r[14] = 0x001cabc4u; fn_001c9f7c(cpu);
    }
L_001cabc4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001cabc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cabcc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cabd0:;
    {
        cpu->r[14] = 0x001cabd8u;
    }
L_001cabd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cabd8u)) return;
    }
L_001cabd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cabdc:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001cabe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cabe4:;
    {
        cpu->r[14] = 0x001cabecu;
    }
L_001cabe8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cabecu)) return;
    }
L_001cabec:;
    {
        cpu->r[1] = 0x00000075u;
    }
L_001cabf0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cabf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cabf8:;
    {
        cpu->r[14] = 0x001cac00u;
    }
L_001cabfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cac00u)) return;
    }
L_001cac00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cac04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cac08:;
    {
        cpu->r[14] = 0x001cac10u;
    }
L_001cac0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cac10u)) return;
    }
L_001cac10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cac14:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cac18:;
    {
        cpu->r[14] = 0x001cac1cu; fn_001ca158(cpu);
    }
L_001cac1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cac20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cac24:;
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
L_001cac28:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection24sendCreateSessionPackageEPcS0_i @ 001cac2c (arm) */
void fn_001cac2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cac2c:;
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
L_001cac30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cac34:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cac38:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cac3c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001cac40:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001cac44:;
    {
        cpu->r[14] = 0x001cac48u; fn_0018ba6c(cpu);
    }
L_001cac48:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cac4c:;
    {
        cpu->r[14] = 0x001cac50u; fn_001c9f7c(cpu);
    }
L_001cac50:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001cac54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cac58:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cac5c:;
    {
        cpu->r[14] = 0x001cac64u;
    }
L_001cac60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cac64u)) return;
    }
L_001cac64:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001cac68:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cac6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cac70:;
    {
        cpu->r[14] = 0x001cac78u;
    }
L_001cac74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cac78u)) return;
    }
L_001cac78:;
    {
        cpu->r[1] = 0x00000063u;
    }
L_001cac7c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cac80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cac84:;
    {
        cpu->r[14] = 0x001cac8cu;
    }
L_001cac88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cac8cu)) return;
    }
L_001cac8c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cac90:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cac94:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x28u);
    }
L_001cac98:;
    {
        cpu->r[14] = 0x001cac9cu; fn_001d0434(cpu);
    }
L_001cac9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001caca0:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001caca4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001caca8:;
    {
        cpu->r[14] = 0x001cacacu; guest_call(cpu, cpu->r[8]);
    }
L_001cacac:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001cacb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cacf8;
        }
    }
L_001cacb4:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_001cacb8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cacbc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cacc0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cacc4:;
    {
        cpu->r[14] = 0x001cacccu;
    }
L_001cacc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cacccu)) return;
    }
L_001caccc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cacd0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cacd4:;
    {
        cpu->r[14] = 0x001cacdcu;
    }
L_001cacd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cacdcu)) return;
    }
L_001cacdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cace0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cace4:;
    {
        cpu->r[14] = 0x001cace8u; fn_001ca158(cpu);
    }
L_001cace8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cacec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cacf0:;
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
L_001cacf4:;
    {
        return fn_001ca364(cpu);
    }
L_001cacf8:;
    {
        cpu->r[4] = rd32(0x001cad00u + + 0x4u);
    }
L_001cacfc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001cad04u, cpu->r[4], 0, 0);
    }
L_001cad00:;
    {
        goto L_001cacb4;
    }
}

/* _ZN10Connection27sendFinishConnectionPackageEv @ 001cad08 (arm) */
void fn_001cad08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cad08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cad0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cad10:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cad14:;
    {
        cpu->r[14] = 0x001cad18u; fn_0018ba6c(cpu);
    }
L_001cad18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cad1c:;
    {
        cpu->r[14] = 0x001cad20u; fn_001c9f7c(cpu);
    }
L_001cad20:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_001cad24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cad28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cad2c:;
    {
        cpu->r[14] = 0x001cad34u;
    }
L_001cad30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cad34u)) return;
    }
L_001cad34:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001cad38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cad3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cad40:;
    {
        cpu->r[14] = 0x001cad48u;
    }
L_001cad44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cad48u)) return;
    }
L_001cad48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cad4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cad50:;
    {
        cpu->r[14] = 0x001cad58u;
    }
L_001cad54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cad58u)) return;
    }
L_001cad58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cad5c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cad60:;
    {
        cpu->r[14] = 0x001cad64u; fn_001ca364(cpu);
    }
L_001cad64:;
    {
        cpu->r[14] = 0x001cad68u; fn_001d05bc(cpu);
    }
L_001cad68:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001cad6c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001cad70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cad74u)) return;
    }
}

/* _ZN10Connection16sendLoginPackageEPc @ 001cad74 (arm) */
void fn_001cad74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cad74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cad78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cad7c:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cad80:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cad84:;
    {
        cpu->r[14] = 0x001cad88u; fn_0018ba6c(cpu);
    }
L_001cad88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cad8c:;
    {
        cpu->r[14] = 0x001cad90u; fn_001c9f7c(cpu);
    }
L_001cad90:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_001cad94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cad98:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cad9c:;
    {
        cpu->r[14] = 0x001cada4u;
    }
L_001cada0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cada4u)) return;
    }
L_001cada4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cada8:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001cadac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cadb0:;
    {
        cpu->r[14] = 0x001cadb8u;
    }
L_001cadb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cadb8u)) return;
    }
L_001cadb8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cadbc:;
    {
        cpu->r[1] = 0x00000069u;
    }
L_001cadc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cadc4:;
    {
        cpu->r[14] = 0x001cadccu;
    }
L_001cadc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cadccu)) return;
    }
L_001cadcc:;
    {
        cpu->r[0] = rd32(0x001cadd4u + + 0x54u);
    }
L_001cadd0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cadd4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001caddcu, cpu->r[0], 0, 0);
    }
L_001cadd8:;
    {
        cpu->r[14] = 0x001caddcu; fn_001d0ac4(cpu);
    }
L_001caddc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cade0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cade4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x28u);
    }
L_001cade8:;
    {
        cpu->r[14] = 0x001cadecu; fn_001d0434(cpu);
    }
L_001cadec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cadf0:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001cadf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cadf8:;
    {
        cpu->r[14] = 0x001cadfcu; guest_call(cpu, cpu->r[6]);
    }
L_001cadfc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cae00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cae04:;
    {
        cpu->r[14] = 0x001cae0cu;
    }
L_001cae08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cae0cu)) return;
    }
L_001cae0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cae10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cae14:;
    {
        cpu->r[14] = 0x001cae18u; fn_001ca158(cpu);
    }
L_001cae18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cae1c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cae20:;
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
L_001cae24:;
    {
        return fn_001ca364(cpu);
    }
}

/* _ZN10Connection30sendEstablishConnectionPackageEv @ 001cae2c (arm) */
void fn_001cae2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cae2c:;
    {
        cpu->r[3] = 0x0000103cu;
    }
L_001cae30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cae34:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cae38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001cae3c:;
    {
        cpu->r[14] = 0x001cae40u; fn_001d0438(cpu);
    }
L_001cae40:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001cae44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cae48:;
    {
        cpu->r[0] = rd32(0x001cae50u + + 0xe4u);
    }
L_001cae4c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cae54u, cpu->r[0], 0, 0);
    }
L_001cae50:;
    {
        cpu->r[14] = 0x001cae54u; fn_001d0ac4(cpu);
    }
L_001cae54:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cae58:;
    {
        cpu->r[14] = 0x001cae5cu; fn_0018ba6c(cpu);
    }
L_001cae5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cae60:;
    {
        cpu->r[14] = 0x001cae64u; fn_001c9f7c(cpu);
    }
L_001cae64:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_001cae68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cae6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cae70:;
    {
        cpu->r[14] = 0x001cae78u;
    }
L_001cae74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cae78u)) return;
    }
L_001cae78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cae7c:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_001cae80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cae84:;
    {
        cpu->r[14] = 0x001cae8cu;
    }
L_001cae88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cae8cu)) return;
    }
L_001cae8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cae90:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cae94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cae98:;
    {
        cpu->r[14] = 0x001caea0u;
    }
L_001cae9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caea0u)) return;
    }
L_001caea0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caea4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caea8:;
    {
        cpu->r[14] = 0x001caeb0u;
    }
L_001caeac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caeb0u)) return;
    }
L_001caeb0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001caeb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caeb8:;
    {
        cpu->r[14] = 0x001caebcu; fn_001ca364(cpu);
    }
L_001caebc:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001caec0:;
    {
        cpu->r[14] = 0x001caec4u; fn_0018ba6c(cpu);
    }
L_001caec4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001caec8:;
    {
        cpu->r[14] = 0x001caeccu; fn_001c9f7c(cpu);
    }
L_001caecc:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_001caed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caed4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caed8:;
    {
        cpu->r[14] = 0x001caee0u;
    }
L_001caedc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caee0u)) return;
    }
L_001caee0:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_001caee4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caeec:;
    {
        cpu->r[14] = 0x001caef4u;
    }
L_001caef0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caef4u)) return;
    }
L_001caef4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001caef8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caefc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caf00:;
    {
        cpu->r[14] = 0x001caf08u;
    }
L_001caf04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caf08u)) return;
    }
L_001caf08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001caf0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caf10:;
    {
        cpu->r[14] = 0x001caf18u;
    }
L_001caf14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caf18u)) return;
    }
L_001caf18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001caf1c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001caf20:;
    {
        cpu->r[14] = 0x001caf24u; fn_001ca364(cpu);
    }
L_001caf24:;
    {
        cpu->r[14] = 0x001caf28u; fn_001d05bc(cpu);
    }
L_001caf28:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001caf2c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_001caf30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001caf34u)) return;
    }
}

/* _ZN10Connection10disconnectEv @ 001caf38 (arm) */
void fn_001caf38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001caf38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001caf3c:;
    {
        cpu->r[5] = 0x00001010u;
    }
L_001caf40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001caf44:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001caf48:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001caf4c:;
    {
        wr8(cpu->r[0] + + 0xau, cpu->r[2]);
    }
L_001caf50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001caf54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001caf90;
        }
    }
L_001caf58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001caf5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001caf60:;
    {
        cpu->r[14] = 0x001caf68u;
    }
L_001caf64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caf68u)) return;
    }
L_001caf68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001caf6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001caf70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001caf84;
        }
    }
L_001caf74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001caf78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001caf7c:;
    {
        cpu->r[14] = 0x001caf84u;
    }
L_001caf80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001caf84u)) return;
    }
L_001caf84:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001caf88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001caf8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001caf90:;
    {
        cpu->r[6] = 0x00001028u;
    }
L_001caf94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001caf98:;
    {
        cpu->r[14] = 0x001caf9cu; fn_001ca118(cpu);
    }
L_001caf9c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cafa0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cafa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cafd8;
        }
    }
L_001cafa8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001cafac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cafb0:;
    {
        cpu->r[14] = 0x001cafb8u;
    }
L_001cafb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cafb8u)) return;
    }
L_001cafb8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001cafbc:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_001cafc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cafc4:;
    {
        cpu->r[14] = 0x001cafccu;
    }
L_001cafc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cafccu)) return;
    }
L_001cafcc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cafd0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cafd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cafa8;
        }
    }
L_001cafd8:;
    {
        cpu->r[6] = 0x00001020u;
    }
L_001cafdc:;
    {
        cpu->r[2] = 0x0000102cu;
    }
L_001cafe0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cafe4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cafe8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001cafec:;
    {
        cpu->r[2] = 0x00001028u;
    }
L_001caff0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001caff4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001caff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb02c;
        }
    }
L_001caffc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001cb000:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cb004:;
    {
        cpu->r[14] = 0x001cb00cu;
    }
L_001cb008:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb00cu)) return;
    }
L_001cb00c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001cb010:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_001cb014:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cb018:;
    {
        cpu->r[14] = 0x001cb020u;
    }
L_001cb01c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb020u)) return;
    }
L_001cb020:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cb024:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cb028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001caffc;
        }
    }
L_001cb02c:;
    {
        cpu->r[3] = 0x00001020u;
    }
L_001cb030:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cb034:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000000bu, 0, 0);
    }
L_001cb038:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb03c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb040:;
    {
        cpu->r[3] = 0x00001024u;
    }
L_001cb044:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb048:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb04c:;
    {
        cpu->r[14] = 0x001cb050u; fn_001d0700(cpu);
    }
L_001cb050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_001cb054:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001cb058:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb05c:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb060:;
    {
        cpu->r[14] = 0x001cb064u; fn_001d0700(cpu);
    }
L_001cb064:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001cb068:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb06c:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001cb070:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb074:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb078u)) return;
    }
}

/* _ZN10Connection11receiveDataEi @ 001cb078 (arm) */
void fn_001cb078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb078:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb07c:;
    {
        cpu->r[6] = 0x00001010u;
    }
L_001cb080:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb084:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001cb088:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001cb08c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb090:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb094:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb098:;
    {
        cpu->r[14] = 0x001cb0a0u;
    }
L_001cb09c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0a0u)) return;
    }
L_001cb0a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb0a4:;
    {
        if (cond_test(cpu, 12)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0a8u)) return;
        }
    }
L_001cb0a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cb0ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb0b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb0b4:;
    {
        cpu->r[14] = 0x001cb0bcu;
    }
L_001cb0b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0bcu)) return;
    }
L_001cb0bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb0c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0c4u)) return;
        }
    }
L_001cb0c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cb0c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x0000000bu, 0, 0);
    }
L_001cb0cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cb0d0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cb0d4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb0d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb0dc:;
    {
        cpu->r[14] = 0x001cb0e4u;
    }
L_001cb0e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0e4u)) return;
    }
L_001cb0e4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001cb0e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb0ecu)) return;
        }
    }
L_001cb0ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001cb0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb13c;
        }
    }
L_001cb0f4:;
    {
        cpu->r[0] = 0x0000081cu;
    }
L_001cb0f8:;
    {
        cpu->r[14] = 0x001cb0fcu; fn_0018ba6c(cpu);
    }
L_001cb0fc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cb100:;
    {
        cpu->r[14] = 0x001cb104u; fn_001c9f7c(cpu);
    }
L_001cb104:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cb108:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cb10c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001cb110:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cb114:;
    {
        cpu->r[14] = 0x001cb11cu;
    }
L_001cb118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x68u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb11cu)) return;
    }
L_001cb11c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb120:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cb124:;
    {
        cpu->r[14] = 0x001cb128u; fn_001ca2fc(cpu);
    }
L_001cb128:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb12c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb130:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001cb134:;
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
L_001cb138:;
    {
        return fn_001d0700(cpu);
    }
L_001cb13c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb140:;
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
L_001cb144:;
    {
        return fn_001caf38(cpu);
    }
}

/* _ZN10Connection14receiveDataLenEv @ 001cb148 (arm) */
void fn_001cb148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb148:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cb14c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb150:;
    {
        cpu->r[5] = 0x00001010u;
    }
L_001cb154:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x0000000bu, 0, 0);
    }
L_001cb158:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb15c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb160:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001cb164:;
    {
        cpu->r[14] = 0x001cb168u; fn_001d0700(cpu);
    }
L_001cb168:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb16c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb170:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb174:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb178:;
    {
        cpu->r[14] = 0x001cb180u;
    }
L_001cb17c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb180u)) return;
    }
L_001cb180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb184:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb188u)) return;
        }
    }
L_001cb188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb18c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb190:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb194:;
    {
        cpu->r[14] = 0x001cb19cu;
    }
L_001cb198:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb19cu)) return;
    }
L_001cb19c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb1a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb1a4u)) return;
        }
    }
L_001cb1a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb1a8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cb1ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001cb1b0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb1b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb1b8:;
    {
        cpu->r[14] = 0x001cb1c0u;
    }
L_001cb1bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb1c0u)) return;
    }
L_001cb1c0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001cb1c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb1c8u)) return;
        }
    }
L_001cb1c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001cb1cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb1dc;
        }
    }
L_001cb1d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb1d4:;
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
L_001cb1d8:;
    {
        return fn_001caf38(cpu);
    }
L_001cb1dc:;
    {
        cpu->r[5] = rd8(cpu->r[4] + + 0xbu);
    }
L_001cb1e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb1e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb1e8:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001cb1ec:;
    {
        cpu->r[14] = 0x001cb1f0u; fn_001d0700(cpu);
    }
L_001cb1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb1f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb1f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cb1fc:;
    {
        cpu->r[14] = 0x001cb204u;
    }
L_001cb200:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb204u)) return;
    }
L_001cb204:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb208u)) return;
    }
}

/* _ZN10Connection8sendDataEv @ 001cb208 (arm) */
void fn_001cb208(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb208:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb20c:;
    {
        cpu->r[5] = 0x00001020u;
    }
L_001cb210:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb214:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001cb218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb21c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb220u)) return;
        }
    }
L_001cb220:;
    {
        cpu->r[14] = 0x001cb224u; fn_001ca108(cpu);
    }
L_001cb224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb33c;
        }
    }
L_001cb22c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb230:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_001cb234:;
    {
        cpu->r[7] = 0x00001010u;
    }
L_001cb238:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb23c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb240:;
    {
        cpu->r[14] = 0x001cb248u;
    }
L_001cb244:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb248u)) return;
    }
L_001cb248:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb24c:;
    {
        wr8(cpu->r[4] + + 0x80cu, cpu->r[0]);
    }
L_001cb250:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb254:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb258:;
    {
        cpu->r[14] = 0x001cb260u;
    }
L_001cb25c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb260u)) return;
    }
L_001cb260:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb264:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001cb268:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb26c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb270:;
    {
        cpu->r[14] = 0x001cb278u;
    }
L_001cb274:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb278u)) return;
    }
L_001cb278:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001cb27c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cb280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x0000000du, 0, 0);
    }
L_001cb284:;
    {
        cpu->r[14] = 0x001cb288u; fn_001d06ec(cpu);
    }
L_001cb288:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001cb28c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001cb290:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb294:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb298:;
    {
        cpu->r[14] = 0x001cb2a0u;
    }
L_001cb29c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb2a0u)) return;
    }
L_001cb2a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb2a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001cb354;
        }
    }
L_001cb2a8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001cb2ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb2b0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001cb2b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb2b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb2bc:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x44u);
    }
L_001cb2c0:;
    {
        cpu->r[14] = 0x001cb2c8u;
    }
L_001cb2c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb2c8u)) return;
    }
L_001cb2c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001cb2cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cb2d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cb2d4:;
    {
        cpu->r[14] = 0x001cb2d8u; guest_call(cpu, cpu->r[7]);
    }
L_001cb2d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb2dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001cb364;
        }
    }
L_001cb2e0:;
    {
        cpu->r[14] = 0x001cb2e4u; fn_001d05bc(cpu);
    }
L_001cb2e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb2e8:;
    {
        cpu->r[2] = 0x00001030u;
    }
L_001cb2ec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cb2f0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001cb2f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb2f8:;
    {
        cpu->r[14] = 0x001cb300u;
    }
L_001cb2fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x6cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb300u)) return;
    }
L_001cb300:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001cb304:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_001cb308:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb30c:;
    {
        cpu->r[14] = 0x001cb314u;
    }
L_001cb310:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb314u)) return;
    }
L_001cb314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb318:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb31c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001024u;
        }
    }
L_001cb320:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_001cb324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb328u)) return;
        }
    }
L_001cb328:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb32c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cb330:;
    {
        cpu->r[14] = 0x001cb338u;
    }
L_001cb334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb338u)) return;
    }
L_001cb338:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb33cu)) return;
    }
L_001cb33c:;
    {
        cpu->r[0] = rd32(0x001cb344u + + 0x2cu);
    }
L_001cb340:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cb348u, cpu->r[0], 0, 0);
    }
L_001cb344:;
    {
        cpu->r[14] = 0x001cb348u; fn_001d0ac4(cpu);
    }
L_001cb348:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb34c:;
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
L_001cb350:;
    {
        return fn_001caf38(cpu);
    }
L_001cb354:;
    {
        cpu->r[0] = rd32(0x001cb35cu + + 0x18u);
    }
L_001cb358:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cb360u, cpu->r[0], 0, 0);
    }
L_001cb35c:;
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
L_001cb360:;
    {
        return fn_001d0ac4(cpu);
    }
L_001cb364:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb368:;
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
L_001cb36c:;
    {
        return fn_001caf38(cpu);
    }
}

/* _ZN10ConnectionD1Ev @ 001cb378 (arm) */
void fn_001cb378(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb378:;
    {
        cpu->r[3] = rd32(0x001cb380u + + 0x8cu);
    }
L_001cb37c:;
    {
        cpu->r[2] = rd32(0x001cb384u + + 0x8cu);
    }
L_001cb380:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb388u, cpu->r[3], 0, 0);
    }
L_001cb384:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cb388:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001cb38c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001cb394:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001cb398:;
    {
        cpu->r[14] = 0x001cb39cu; fn_001caf38(cpu);
    }
L_001cb39c:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb3a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb3a4:;
    {
        cpu->r[14] = 0x001cb3a8u; fn_0018ba20(cpu);
    }
L_001cb3a8:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001cb3ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb3b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb3b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb3c8;
        }
    }
L_001cb3b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb3bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb3c0:;
    {
        cpu->r[14] = 0x001cb3c8u;
    }
L_001cb3c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb3c8u)) return;
    }
L_001cb3c8:;
    {
        cpu->r[5] = 0x00001014u;
    }
L_001cb3cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb3d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb3f0;
        }
    }
L_001cb3d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb3dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb3e0:;
    {
        cpu->r[14] = 0x001cb3e8u;
    }
L_001cb3e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb3e8u)) return;
    }
L_001cb3e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb3ec:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001cb3f0:;
    {
        cpu->r[5] = 0x0000103cu;
    }
L_001cb3f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb3f8:;
    {
        cpu->r[14] = 0x001cb3fcu; fn_0018ba20(cpu);
    }
L_001cb3fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb404:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001cb408:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb40cu)) return;
    }
}

/* _ZN10ConnectionD0Ev @ 001cb414 (arm) */
void fn_001cb414(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb414:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb418:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb41c:;
    {
        cpu->r[14] = 0x001cb420u; fn_001cb378(cpu);
    }
L_001cb420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb424:;
    {
        cpu->r[14] = 0x001cb428u; fn_0018ba20(cpu);
    }
L_001cb428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb42c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb430u)) return;
    }
}

/* _ZN10ConnectionD2Ev @ 001cb430 (arm) */
void fn_001cb430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb430:;
    {
        cpu->r[3] = rd32(0x001cb438u + + 0x8cu);
    }
L_001cb434:;
    {
        cpu->r[2] = rd32(0x001cb43cu + + 0x8cu);
    }
L_001cb438:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb440u, cpu->r[3], 0, 0);
    }
L_001cb43c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cb440:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001cb444:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb448:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001cb44c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001cb450:;
    {
        cpu->r[14] = 0x001cb454u; fn_001caf38(cpu);
    }
L_001cb454:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb45c:;
    {
        cpu->r[14] = 0x001cb460u; fn_0018ba20(cpu);
    }
L_001cb460:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001cb464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb46c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb480;
        }
    }
L_001cb470:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb474:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb478:;
    {
        cpu->r[14] = 0x001cb480u;
    }
L_001cb47c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb480u)) return;
    }
L_001cb480:;
    {
        cpu->r[5] = 0x00001014u;
    }
L_001cb484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb488:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb48c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb4a8;
        }
    }
L_001cb490:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb494:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb498:;
    {
        cpu->r[14] = 0x001cb4a0u;
    }
L_001cb49c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb4a0u)) return;
    }
L_001cb4a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb4a4:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001cb4a8:;
    {
        cpu->r[5] = 0x0000103cu;
    }
L_001cb4ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb4b0:;
    {
        cpu->r[14] = 0x001cb4b4u; fn_0018ba20(cpu);
    }
L_001cb4b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb4b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb4bc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001cb4c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb4c4u)) return;
    }
}

/* _ZN10Connection7setNameEPc @ 001cb4cc (arm) */
void fn_001cb4cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb4cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cb4d0:;
    {
        cpu->r[5] = 0x0000103cu;
    }
L_001cb4d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb4d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001cb4dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001cb4e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb4e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb4f4;
        }
    }
L_001cb4e8:;
    {
        cpu->r[14] = 0x001cb4ecu; fn_0018ba20(cpu);
    }
L_001cb4ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb4f0:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001cb4f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cb4f8:;
    {
        cpu->r[14] = 0x001cb4fcu; fn_001d0ce8(cpu);
    }
L_001cb4fc:;
    {
        cpu->r[3] = 0x0000103cu;
    }
L_001cb500:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001cb504:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb508u)) return;
    }
}

/* _ZN10ConnectionC1EPci @ 001cb508 (arm) */
void fn_001cb508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb508:;
    {
        cpu->r[3] = rd32(0x001cb510u + + 0xd4u);
    }
L_001cb50c:;
    {
        cpu->r[12] = rd32(0x001cb514u + + 0xd4u);
    }
L_001cb510:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb518u, cpu->r[3], 0, 0);
    }
L_001cb514:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb518:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001cb51c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb520:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cb524:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001cb528:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001cb52c:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001cb530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb540;
        }
    }
L_001cb534:;
    {
        cpu->r[14] = 0x001cb538u; fn_001d0ce8(cpu);
    }
L_001cb538:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb53c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001cb540:;
    {
        cpu->r[3] = 0x00001020u;
    }
L_001cb544:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cb548:;
    {
        cpu->r[6] = 0x0000101cu;
    }
L_001cb54c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000000bu, 0, 0);
    }
L_001cb550:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb554:;
    {
        cpu->r[3] = 0x00001024u;
    }
L_001cb558:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb55c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_001cb560:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb564:;
    {
        cpu->r[3] = 0x00001028u;
    }
L_001cb568:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb56c:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001cb570:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb574:;
    {
        cpu->r[3] = 0x0000102cu;
    }
L_001cb578:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb57c:;
    {
        cpu->r[3] = 0x00001038u;
    }
L_001cb580:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb584:;
    {
        cpu->r[14] = 0x001cb588u; fn_001d0700(cpu);
    }
L_001cb588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_001cb58c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb590:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001cb594:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb598:;
    {
        cpu->r[14] = 0x001cb59cu; fn_001d0700(cpu);
    }
L_001cb59c:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001cb5a0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cb5a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cb5a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb5ac:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001cb5b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb5b4:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb5b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb5bc:;
    {
        cpu->r[14] = 0x001cb5c0u; fn_001b6b08(cpu);
    }
L_001cb5c0:;
    {
        cpu->r[3] = 0x00001014u;
    }
L_001cb5c4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001cb5c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb5cc:;
    {
        cpu->r[3] = 0x0000103cu;
    }
L_001cb5d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb5d4:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001cb5d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001cb5dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb5e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb5e4u)) return;
    }
}

/* _ZN10ConnectionC2EPci @ 001cb5ec (arm) */
void fn_001cb5ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb5ec:;
    {
        cpu->r[3] = rd32(0x001cb5f4u + + 0xd4u);
    }
L_001cb5f0:;
    {
        cpu->r[12] = rd32(0x001cb5f8u + + 0xd4u);
    }
L_001cb5f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb5fcu, cpu->r[3], 0, 0);
    }
L_001cb5f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb5fc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001cb600:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb604:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cb608:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001cb60c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001cb610:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001cb614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb624;
        }
    }
L_001cb618:;
    {
        cpu->r[14] = 0x001cb61cu; fn_001d0ce8(cpu);
    }
L_001cb61c:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb620:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001cb624:;
    {
        cpu->r[3] = 0x00001020u;
    }
L_001cb628:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cb62c:;
    {
        cpu->r[6] = 0x0000101cu;
    }
L_001cb630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000000bu, 0, 0);
    }
L_001cb634:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb638:;
    {
        cpu->r[3] = 0x00001024u;
    }
L_001cb63c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb640:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_001cb644:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb648:;
    {
        cpu->r[3] = 0x00001028u;
    }
L_001cb64c:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb650:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001cb654:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb658:;
    {
        cpu->r[3] = 0x0000102cu;
    }
L_001cb65c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb660:;
    {
        cpu->r[3] = 0x00001038u;
    }
L_001cb664:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb668:;
    {
        cpu->r[14] = 0x001cb66cu; fn_001d0700(cpu);
    }
L_001cb66c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_001cb670:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cb674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001cb678:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb67c:;
    {
        cpu->r[14] = 0x001cb680u; fn_001d0700(cpu);
    }
L_001cb680:;
    {
        cpu->r[3] = 0x00001030u;
    }
L_001cb684:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cb688:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cb68c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb690:;
    {
        cpu->r[3] = 0x00001034u;
    }
L_001cb694:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb698:;
    {
        cpu->r[3] = 0x00001018u;
    }
L_001cb69c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001cb6a0:;
    {
        cpu->r[14] = 0x001cb6a4u; fn_001b6b08(cpu);
    }
L_001cb6a4:;
    {
        cpu->r[3] = 0x00001014u;
    }
L_001cb6a8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001cb6ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb6b0:;
    {
        cpu->r[3] = 0x0000103cu;
    }
L_001cb6b4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001cb6b8:;
    {
        cpu->r[3] = 0x00001010u;
    }
L_001cb6bc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001cb6c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb6c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb6c8u)) return;
    }
}

/* _ZN15GLXPlayerMPBaseD2Ev @ 001cb6d0 (arm) */
void fn_001cb6d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb6d0:;
    {
        cpu->r[2] = rd32(0x001cb6d8u + + 0x44u);
    }
L_001cb6d4:;
    {
        cpu->r[1] = rd32(0x001cb6dcu + + 0x44u);
    }
L_001cb6d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001cb6e0u, cpu->r[2], 0, 0);
    }
L_001cb6dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001cb6e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb6e4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001cb6e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb6ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb6f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001cb6f4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001cb6f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb714;
        }
    }
L_001cb6fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb700:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb704:;
    {
        cpu->r[14] = 0x001cb70cu;
    }
L_001cb708:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb70cu)) return;
    }
L_001cb70c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb710:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001cb714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb718:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb71cu)) return;
    }
}

/* _ZN15GLXPlayerMPBaseD1Ev @ 001cb724 (arm) */
void fn_001cb724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb724:;
    {
        cpu->r[2] = rd32(0x001cb72cu + + 0x44u);
    }
L_001cb728:;
    {
        cpu->r[1] = rd32(0x001cb730u + + 0x44u);
    }
L_001cb72c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001cb734u, cpu->r[2], 0, 0);
    }
L_001cb730:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001cb734:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb738:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001cb73c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb740:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb744:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001cb748:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001cb74c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb768;
        }
    }
L_001cb750:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb754:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb758:;
    {
        cpu->r[14] = 0x001cb760u;
    }
L_001cb75c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb760u)) return;
    }
L_001cb760:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb764:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001cb768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb76c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb770u)) return;
    }
}

/* _ZN15GLXPlayerMPBase10LoadConfigEv @ 001cb778 (arm) */
void fn_001cb778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb778:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001cb77c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cb780:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001cb784:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_001cb788:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBase4InitEv @ 001cb78c (arm) */
void fn_001cb78c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb78c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cb790:;
    {
        wr8(cpu->r[0] + + 0x74u, cpu->r[2]);
    }
L_001cb794:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_001cb798:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_001cb79c:;
    {
        return fn_001cb778(cpu);
    }
}

/* _ZN15GLXPlayerMPBaseC1EP23GLXPlayerMPBaseObserver @ 001cb7a0 (arm) */
void fn_001cb7a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb7a0:;
    {
        cpu->r[3] = rd32(0x001cb7a8u + + 0x28u);
    }
L_001cb7a4:;
    {
        cpu->r[2] = rd32(0x001cb7acu + + 0x28u);
    }
L_001cb7a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb7b0u, cpu->r[3], 0, 0);
    }
L_001cb7ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001cb7b0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb7b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001cb7b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb7bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001cb7c0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001cb7c4:;
    {
        cpu->r[14] = 0x001cb7c8u; fn_001cb78c(cpu);
    }
L_001cb7c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb7cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb7d0u)) return;
    }
}

/* _ZN15GLXPlayerMPBaseC2EP23GLXPlayerMPBaseObserver @ 001cb7d8 (arm) */
void fn_001cb7d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb7d8:;
    {
        cpu->r[3] = rd32(0x001cb7e0u + + 0x28u);
    }
L_001cb7dc:;
    {
        cpu->r[2] = rd32(0x001cb7e4u + + 0x28u);
    }
L_001cb7e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cb7e8u, cpu->r[3], 0, 0);
    }
L_001cb7e4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001cb7e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb7ec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001cb7f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb7f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001cb7f8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001cb7fc:;
    {
        cpu->r[14] = 0x001cb800u; fn_001cb78c(cpu);
    }
L_001cb800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb804:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb808u)) return;
    }
}

/* _ZN15GLXPlayerMPBase9getErrMsgEv @ 001cb810 (arm) */
void fn_001cb810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb810:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x50u);
    }
L_001cb814:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GLXPlayerMPBaseD0Ev @ 001cb818 (arm) */
void fn_001cb818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb818:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cb81c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb820:;
    {
        cpu->r[14] = 0x001cb824u; fn_001cb724(cpu);
    }
L_001cb824:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb828:;
    {
        cpu->r[14] = 0x001cb82cu; fn_0018ba20(cpu);
    }
L_001cb82c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cb830:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb834u)) return;
    }
}

/* _ZN15GLXPlayerMPBase9setErrMsgEv @ 001cb834 (arm) */
void fn_001cb834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb834:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb838:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb83c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x50u);
    }
L_001cb840:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cb844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cb854;
        }
    }
L_001cb848:;
    {
        cpu->r[14] = 0x001cb84cu; fn_0018ba20(cpu);
    }
L_001cb84c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cb850:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001cb854:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001cb858:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb85c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb860u)) return;
        }
    }
L_001cb860:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb864:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb868:;
    {
        cpu->r[14] = 0x001cb870u;
    }
L_001cb86c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x60u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb870u)) return;
    }
L_001cb870:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001cb874:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cb878:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cb87c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb880:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb884:;
    {
        cpu->r[14] = 0x001cb88cu;
    }
L_001cb888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb88cu)) return;
    }
L_001cb88c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cb890:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cb894:;
    {
        cpu->r[14] = 0x001cb898u; imp__Znaj(cpu); /* _Znaj */
    }
L_001cb898:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001cb89c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb8a0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001cb8a4:;
    {
        cpu->r[14] = 0x001cb8a8u; fn_001d0700(cpu);
    }
L_001cb8a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001cb8ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cb8b0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cb8b4:;
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
L_001cb8b8:;
    {
        return fn_001d06ec(cpu);
    }
}

/* _ZN15GLXPlayerMPBase11mpSendLoginEPc @ 001cb8bc (arm) */
void fn_001cb8bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb8bc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cb8c0:;
    {
        cpu->r[4] = rd32(0x001cb8c8u + + 0xe4u);
    }
L_001cb8c4:;
    {
        cpu->r[5] = rd32(0x001cb8ccu + + 0xe4u);
    }
L_001cb8c8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cb8cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001cb8d4u, cpu->r[4], 0, 0);
    }
L_001cb8d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001cb8d4:;
    {
        cpu->r[0] = rd32(0x001cb8dcu + + 0xd8u);
    }
L_001cb8d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001cb8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb8e0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001cb8e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cb8ecu, cpu->r[0], 0, 0);
    }
L_001cb8e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb8ec:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001cb8f0:;
    {
        cpu->r[14] = 0x001cb8f4u; fn_001d0ac4(cpu);
    }
L_001cb8f4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x64u);
    }
L_001cb8f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb8fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cb93c;
        }
    }
L_001cb900:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001cb904:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cb908:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[2]);
    }
L_001cb90c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cb910:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb914:;
    {
        cpu->r[14] = 0x001cb91cu;
    }
L_001cb918:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb91cu)) return;
    }
L_001cb91c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001cb920:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001cb924:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cb928:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cb92c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cb9a8;
        }
    }
L_001cb930:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001cb934:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001cb938:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb93cu)) return;
    }
L_001cb93c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001cb940:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cb900;
        }
    }
L_001cb944:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001cb948:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cb94c:;
    {
        cpu->r[2] = 0x00000801u;
    }
L_001cb950:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001cb954:;
    {
        cpu->r[14] = 0x001cb958u; fn_001d0700(cpu);
    }
L_001cb958:;
    {
        cpu->r[1] = rd32(0x001cb960u + + 0x58u);
    }
L_001cb95c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001cb960:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cb964:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cb96cu, cpu->r[1], 0, 0);
    }
L_001cb968:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001cb96c:;
    {
        cpu->r[14] = 0x001cb970u; imp_sprintf(cpu); /* sprintf */
    }
L_001cb970:;
    {
        cpu->r[0] = rd32(0x001cb978u + + 0x44u);
    }
L_001cb974:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001cb978:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001cb97c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cb984u, cpu->r[0], 0, 0);
    }
L_001cb980:;
    {
        cpu->r[14] = 0x001cb984u; fn_001d0ac4(cpu);
    }
L_001cb984:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x58u);
    }
L_001cb988:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001cb98c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001cb990:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_001cb994:;
    {
        cpu->r[14] = 0x001cb998u; fn_001cad74(cpu);
    }
L_001cb998:;
    {
        cpu->r[0] = rd32(0x001cb9a0u + + 0x20u);
    }
L_001cb99c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cb9a4u, cpu->r[0], 0, 0);
    }
L_001cb9a0:;
    {
        cpu->r[14] = 0x001cb9a4u; fn_001d0ac4(cpu);
    }
L_001cb9a4:;
    {
        goto L_001cb91c;
    }
L_001cb9a8:;
    {
        cpu->r[14] = 0x001cb9acu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cb9ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 22u, &shc); cpu->r[14] = v;
        }
    }
L_001cb9b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001cb9b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001cb9b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 4, 31u, &shc); cpu->r[5] = v;
        }
    }
L_001cb9bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[5] = (uint32_t)v;
        cpu->r[6] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
L_001cb9c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[0], 3, 6u, &shc); cpu->r[2] = v;
        }
    }
}

/* _ZN15GLXPlayerMPBase25mpSendEstablishConnectionEv @ 001cb9c4 (arm) */
void fn_001cb9c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cb9c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cb9c8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x64u);
    }
L_001cb9cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cb9d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cba54;
        }
    }
L_001cb9d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x58u);
    }
L_001cb9dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cba14;
        }
    }
L_001cb9e4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001cb9e8:;
    {
        cpu->r[14] = 0x001cb9f0u;
    }
L_001cb9ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cb9f0u)) return;
    }
L_001cb9f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001cb9f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cb9f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cba0c;
        }
    }
L_001cb9fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cba00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cba04:;
    {
        cpu->r[14] = 0x001cba0cu;
    }
L_001cba08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cba0cu)) return;
    }
L_001cba0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cba10:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001cba14:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001cba18:;
    {
        cpu->r[0] = 0x00001040u;
    }
L_001cba1c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001cba20:;
    {
        cpu->r[14] = 0x001cba24u; fn_0018ba6c(cpu);
    }
L_001cba24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001cba28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_001cba2c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cba30:;
    {
        cpu->r[14] = 0x001cba34u; fn_001cb508(cpu);
    }
L_001cba34:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_001cba38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cba3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001cba40:;
    {
        cpu->r[14] = 0x001cba44u; fn_001cb4cc(cpu);
    }
L_001cba44:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001cba48:;
    {
        wr8(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001cba4c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001cba50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cba54u)) return;
    }
L_001cba54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001cba58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cba5c:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_001cba60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cba64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cba68:;
    {
        cpu->r[14] = 0x001cba70u;
    }
L_001cba6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cba70u)) return;
    }
L_001cba70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cba74u)) return;
    }
}

/* _ZN15GLXPlayerMPBase16mpSendDisconnectEv @ 001cba74 (arm) */
void fn_001cba74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cba74:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cba78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cba7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_001cba80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cba84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cba88u)) return;
        }
    }
L_001cba88:;
    {
        cpu->r[14] = 0x001cba8cu; fn_001ca108(cpu);
    }
L_001cba8c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cba90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbab4;
        }
    }
L_001cba94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001cba98:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001cba9c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_001cbaa0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cbaa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cbaa8:;
    {
        cpu->r[14] = 0x001cbab0u;
    }
L_001cbaac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbab0u)) return;
    }
L_001cbab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbab4u)) return;
    }
L_001cbab4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cbab8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001cbabc:;
    {
        cpu->r[14] = 0x001cbac4u;
    }
L_001cbac0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbac4u)) return;
    }
L_001cbac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001cbac8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_001cbacc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cbad0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cbad4:;
    {
        cpu->r[14] = 0x001cbadcu;
    }
L_001cbad8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbadcu)) return;
    }
L_001cbadc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbae0u)) return;
    }
}

/* _ZN4slim11XmlDocument12loadFromFileEPKc @ 001cbae0 (arm) */
void fn_001cbae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbae0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cbae4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4slim11XmlDocument14loadFromStreamERSi @ 001cbae8 (arm) */
void fn_001cbae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbae8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cbaec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4slim11utf8toutf16EPKcjPwj @ 001cbaf0 (arm) */
void fn_001cbaf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbaf0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbaf4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001cbaf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[1];
        }
    }
L_001cbafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbb90;
        }
    }
L_001cbb00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001cbb04:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001cbb08:;
    {
        goto L_001cbb28;
    }
L_001cbb0c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001cbb10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbb90;
        }
    }
L_001cbb14:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbb18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001cbb1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001cbb20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbb90;
        }
    }
L_001cbb24:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001cbb28:;
    {
        cpu->r[12] = rd8(cpu->r[0]);
    }
L_001cbb2c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000080u; set_nz(cpu, v); }
    }
L_001cbb30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001cbb34:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + - 0x4u, cpu->r[12]);
        }
    }
L_001cbb38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_001cbb3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbb0c;
        }
    }
L_001cbb40:;
    {
        uint32_t v = cpu->r[12] & 0x000000e0u; cpu->r[5] = v;
    }
L_001cbb44:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000c0u, 1, 1);
    }
L_001cbb48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbb9c;
        }
    }
L_001cbb4c:;
    {
        uint32_t v = cpu->r[12] & 0x000000f0u; cpu->r[5] = v;
    }
L_001cbb50:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000e0u, 1, 1);
    }
L_001cbb54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbbc4;
        }
    }
L_001cbb58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_001cbb5c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbbc4;
        }
    }
L_001cbb60:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0x2u);
    }
L_001cbb64:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 28u, &shc); cpu->r[12] = v;
    }
L_001cbb68:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbb6c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001cbb70:;
    {
        uint32_t v = cpu->r[6] & 0x0000003fu; cpu->r[6] = v;
    }
L_001cbb74:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 0);
    }
L_001cbb78:;
    {
        uint32_t v = cpu->r[5] & 0x0000003fu; cpu->r[5] = v;
    }
L_001cbb7c:;
    {
        uint32_t v = cpu->r[6] | shifter(cpu->r[12], 3, 16u, &shc); cpu->r[12] = v;
    }
L_001cbb80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001cbb84:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 6u, &shc); cpu->r[12] = v;
    }
L_001cbb88:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[12]);
    }
L_001cbb8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbb14;
        }
    }
L_001cbb90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cbb94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001cbb98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001cbb9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001cbba0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbbc4;
        }
    }
L_001cbba4:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbba8:;
    {
        uint32_t v = cpu->r[12] & 0x0000001fu; cpu->r[12] = v;
    }
L_001cbbac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001cbbb0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_001cbbb4:;
    {
        uint32_t v = cpu->r[5] & 0x0000003fu; cpu->r[5] = v;
    }
L_001cbbb8:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[5], 2, 5u, &shc); cpu->r[12] = v;
    }
L_001cbbbc:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[12]);
    }
L_001cbbc0:;
    {
        goto L_001cbb0c;
    }
L_001cbbc4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_001cbbc8:;
    {
        goto L_001cbb90;
    }
}

/* _ZN4slim11utf16toutf8EPKwjPcj @ 001cbbcc (arm) */
void fn_001cbbcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbbcc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbbd0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001cbbd4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_001cbbd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbc7c;
        }
    }
L_001cbbdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001cbbe0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001cbbe4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cbbe8:;
    {
        cpu->r[8] = 0x000007ffu;
    }
L_001cbbec:;
    {
        goto L_001cbc10;
    }
L_001cbbf0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cbbf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbc7c;
        }
    }
L_001cbbf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cbbfc:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        wr8(cpu->r[2], cpu->r[12]);
        cpu->r[2] = wb_tmp;
    }
L_001cbc00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbc04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001cbc08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001cbc0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbc7c;
        }
    }
L_001cbc10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + - 0x4u);
    }
L_001cbc14:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000007fu, 1, 1);
    }
L_001cbc18:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbbf0;
        }
    }
L_001cbc1c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 12u, &shc); cpu->r[5] = v;
    }
L_001cbc20:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 6u, &shc); cpu->r[6] = v;
    }
L_001cbc24:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001cbc28:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001cbc2c:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 2, 27u, &shc));
    }
L_001cbc30:;
    {
        cpu->r[6] = (~shifter(cpu->r[6], 2, 26u, &shc));
    }
L_001cbc34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001cbc38:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 3, 27u, &shc));
    }
L_001cbc3c:;
    {
        cpu->r[6] = (~shifter(cpu->r[6], 3, 26u, &shc));
    }
L_001cbc40:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cbc84;
        }
    }
L_001cbc44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001cbc48:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cbc7c;
        }
    }
L_001cbc4c:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_001cbc50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbc54:;
    {
        cpu->r[12] = rd32(cpu->r[4] + - 0x4u);
    }
L_001cbc58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cbc5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001cbc60:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001cbc64:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_001cbc68:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 2, 25u, &shc));
    }
L_001cbc6c:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 3, 25u, &shc));
    }
L_001cbc70:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[12]);
    }
L_001cbc74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001cbc78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbc10;
        }
    }
L_001cbc7c:;
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
        cpu->r[10] = v5;
        cpu->r[13] += 24u;
    }
L_001cbc80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001cbc84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001cbc88:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cbc7c;
        }
    }
L_001cbc8c:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cbc90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cbc94:;
    {
        cpu->r[12] = rd32(cpu->r[4] + - 0x4u);
    }
L_001cbc98:;
    {
        cpu->r[12] = (cpu->r[12] >> 6) & 0x3fu;
    }
L_001cbc9c:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 2, 25u, &shc));
    }
L_001cbca0:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 3, 25u, &shc));
    }
L_001cbca4:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[12]);
    }
L_001cbca8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + - 0x4u);
    }
L_001cbcac:;
    {
        uint32_t v = cpu->r[12] & 0x0000003fu; cpu->r[12] = v;
    }
L_001cbcb0:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 2, 25u, &shc));
    }
L_001cbcb4:;
    {
        cpu->r[12] = (~shifter(cpu->r[12], 3, 25u, &shc));
    }
L_001cbcb8:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[12]);
    }
L_001cbcbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001cbcc0:;
    {
        goto L_001cbc00;
    }
}

/* _ZN4slim10detectUtf8EPKcj @ 001cbcc4 (arm) */
void fn_001cbcc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbcc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbcc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbcd8;
        }
    }
L_001cbccc:;
    {
        goto L_001cbd58;
    }
L_001cbcd0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbcd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbd58;
        }
    }
L_001cbcd8:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_001cbcdc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_001cbce0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001cbce4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_001cbce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbcd0;
        }
    }
L_001cbcec:;
    {
        uint32_t v = cpu->r[3] & 0x000000f0u; cpu->r[2] = v;
    }
L_001cbcf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000e0u, 1, 1);
    }
L_001cbcf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbd60;
        }
    }
L_001cbcf8:;
    {
        uint32_t v = cpu->r[3] & 0x000000e0u; cpu->r[2] = v;
    }
L_001cbcfc:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000c0u, 1, 1);
    }
L_001cbd00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbd94;
        }
    }
L_001cbd04:;
    {
        uint32_t v = cpu->r[3] & 0x000000f8u; cpu->r[3] = v;
    }
L_001cbd08:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000f0u, 1, 1);
    }
L_001cbd0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001cbd14:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbdb4;
        }
    }
L_001cbd18:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbd1c:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbd20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbd24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd28:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2u);
    }
L_001cbd2c:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbd30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbd34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd38:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x3u);
    }
L_001cbd3c:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbd40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbd44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd48:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_001cbd4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001cbd50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cbd54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbcd8;
        }
    }
L_001cbd58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001cbd5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001cbd60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_001cbd64:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbdb4;
        }
    }
L_001cbd68:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbd6c:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbd70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbd74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd78:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2u);
    }
L_001cbd7c:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbd80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbd84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbdb4;
        }
    }
L_001cbd88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001cbd8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 0);
    }
L_001cbd90:;
    {
        goto L_001cbcd0;
    }
L_001cbd94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001cbd98:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cbdb4;
        }
    }
L_001cbd9c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbda0:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[3] = v;
    }
L_001cbda4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cbda8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
        }
    }
L_001cbdac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
        }
    }
L_001cbdb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbcd0;
        }
    }
L_001cbdb4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cbdb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4slim11XmlDocument9findLabelERPKcjS3_Rj @ 001cbdbc (arm) */
void fn_001cbdbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbdbc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cbdc0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cbdc4:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_001cbdc8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001cbdcc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001cbdd0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001cbdd4:;
    {
        cpu->r[14] = 0x001cbdd8u; imp_memchr(cpu); /* memchr */
    }
L_001cbdd8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cbddc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbde0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbeb8;
        }
    }
L_001cbde4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cbde8:;
    {
        wr32(cpu->r[7], cpu->r[5]);
    }
L_001cbdec:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001cbdf0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001cbdf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001cbdf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001cbdfc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cbe30;
        }
    }
L_001cbe00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cbe04:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_001cbe08:;
    {
        cpu->r[14] = 0x001cbe0cu; imp_memchr(cpu); /* memchr */
    }
L_001cbe0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbe10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbeb8;
        }
    }
L_001cbe14:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001cbe18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cbe1c:;
    {
        wr32(cpu->r[8], cpu->r[5]);
    }
L_001cbe20:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cbe24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001cbe28:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001cbe2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbe30u)) return;
    }
L_001cbe30:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbe34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000021u, 1, 1);
    }
L_001cbe38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbe00;
        }
    }
L_001cbe3c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_001cbe40:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002du, 1, 1);
    }
L_001cbe44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbe00;
        }
    }
L_001cbe48:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_001cbe4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002du, 1, 1);
    }
L_001cbe50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbe00;
        }
    }
L_001cbe54:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001cbe58:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 0);
    }
L_001cbe5c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001cbe60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cbe64:;
    {
        cpu->r[1] = 0x0000002du;
    }
L_001cbe68:;
    {
        cpu->r[14] = 0x001cbe6cu; imp_memchr(cpu); /* memchr */
    }
L_001cbe6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbe70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_001cbe74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cbe78:;
    {
        cpu->r[3] = (~cpu->r[3]);
    }
L_001cbe7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001cbe80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbeb8;
        }
    }
L_001cbe84:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cbe88:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002du, 1, 1);
    }
L_001cbe8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbe5c;
        }
    }
L_001cbe90:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2u);
    }
L_001cbe94:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003eu, 1, 1);
    }
L_001cbe98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbe5c;
        }
    }
L_001cbe9c:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000002u, cpu->r[5], 1, 0);
    }
L_001cbea0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001cbea4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001cbea8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001cbeac:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001cbeb0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001cbeb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbeb8u)) return;
    }
L_001cbeb8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cbebc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbec0u)) return;
    }
}

/* _ZNK4slim7XmlNode13findAttributeEPKc @ 001cbec0 (arm) */
void fn_001cbec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbec0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cbec4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cbec8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cbecc:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x34u;
        cpu->r[4] = rd32(cpu->r[6] + + 0x34u);
        cpu->r[6] = wb_tmp;
    }
L_001cbed0:;
    {
        goto L_001cbeec;
    }
L_001cbed4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cbed8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cbedc:;
    {
        cpu->r[14] = 0x001cbee0u; imp_strcmp(cpu); /* strcmp */
    }
L_001cbee0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbefc;
        }
    }
L_001cbee8:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cbeec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001cbef0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cbef4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbed4;
        }
    }
L_001cbef8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cbefc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cbf00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbf04u)) return;
    }
}

/* _ZNK4slim7XmlNode13findNextChildEPKcRNSt4priv14_List_iteratorIPS0_St13_Const_traitsIS5_EEE @ 001cbf04 (arm) */
void fn_001cbf04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbf04:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cbf08:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_001cbf0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001cbf10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001cbf14:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001cbf18:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001cbf1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbf3c;
        }
    }
L_001cbf20:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cbf24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cbf28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbf2cu)) return;
    }
L_001cbf2c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001cbf30:;
    {
        cpu->r[14] = 0x001cbf34u; imp_memcmp(cpu); /* memcmp */
    }
L_001cbf34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbf38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbf24;
        }
    }
L_001cbf3c:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cbf40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cbf44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001cbf48:;
    {
        wr32(cpu->r[7], cpu->r[4]);
    }
L_001cbf4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbf20;
        }
    }
L_001cbf50:;
    {
        cpu->r[14] = 0x001cbf54u; imp_strlen(cpu); /* strlen */
    }
L_001cbf54:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cbf58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001cbf5c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cbf60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cbf64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001cbf68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cbf6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbf3c;
        }
    }
L_001cbf70:;
    {
        goto L_001cbf2c;
    }
}

/* _ZNK4slim7XmlNode9findChildEPKc @ 001cbf74 (arm) */
void fn_001cbf74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbf74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cbf78:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cbf7c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001cbf80:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x40u;
        cpu->r[4] = rd32(cpu->r[7] + + 0x40u);
        cpu->r[7] = wb_tmp;
    }
L_001cbf84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cbf88:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001cbf8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbfc0;
        }
    }
L_001cbf90:;
    {
        cpu->r[14] = 0x001cbf94u; imp_strlen(cpu); /* strlen */
    }
L_001cbf94:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cbf98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001cbf9c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cbfa0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cbfa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001cbfa8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cbfac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbfcc;
        }
    }
L_001cbfb0:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cbfb4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001cbfb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cbfbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cbf90;
        }
    }
L_001cbfc0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cbfc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cbfc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cbfccu)) return;
    }
L_001cbfcc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cbfd0:;
    {
        cpu->r[14] = 0x001cbfd4u; imp_memcmp(cpu); /* memcmp */
    }
L_001cbfd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cbfd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cbfc4;
        }
    }
L_001cbfdc:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cbfe0:;
    {
        goto L_001cbfb4;
    }
}

/* _ZNK4slim7XmlNode14findFirstChildEPKcRNSt4priv14_List_iteratorIPS0_St13_Const_traitsIS5_EEE @ 001cbfe4 (arm) */
void fn_001cbfe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cbfe4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cbfe8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cbfec:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001cbff0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001cbff4:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x40u;
        cpu->r[4] = rd32(cpu->r[7] + + 0x40u);
        cpu->r[7] = wb_tmp;
    }
L_001cbff8:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001cbffc:;
    {
        goto L_001cc008;
    }
L_001cc000:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cc004:;
    {
        wr32(cpu->r[8], cpu->r[4]);
    }
L_001cc008:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001cc00c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc04c;
        }
    }
L_001cc014:;
    {
        cpu->r[14] = 0x001cc018u; imp_strlen(cpu); /* strlen */
    }
L_001cc018:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cc01c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001cc020:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cc024:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cc028:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001cc02c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cc030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc000;
        }
    }
L_001cc034:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cc038:;
    {
        cpu->r[14] = 0x001cc03cu; imp_memcmp(cpu); /* memcmp */
    }
L_001cc03c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc000;
        }
    }
L_001cc044:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc04cu)) return;
    }
L_001cc04c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cc050:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc054:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc058u)) return;
    }
}

/* _ZN4slim7XmlNodeC1ENS_8NodeTypeEPS0_ @ 001cc058 (arm) */
void fn_001cc058(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc058:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001cc05c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001cc060:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001cc064:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_001cc068:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001cc06c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001cc070:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001cc074:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000018u;
        wr8(cpu->r[12], cpu->r[6]);
        cpu->r[12] = wb_tmp;
    }
L_001cc078:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001cc07c:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[4]);
    }
L_001cc080:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[5]);
    }
L_001cc084:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_001cc088:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_001cc08c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001cc090:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[0]);
    }
L_001cc094:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_001cc098:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_001cc09c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[4]);
    }
L_001cc0a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001cc0a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4slim7XmlNodeC2ENS_8NodeTypeEPS0_ @ 001cc0a8 (arm) */
void fn_001cc0a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc0a8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001cc0ac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001cc0b0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001cc0b4:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_001cc0b8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001cc0bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001cc0c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_001cc0c4:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000018u;
        wr8(cpu->r[12], cpu->r[6]);
        cpu->r[12] = wb_tmp;
    }
L_001cc0c8:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[6]);
    }
L_001cc0cc:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[4]);
    }
L_001cc0d0:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[5]);
    }
L_001cc0d4:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_001cc0d8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_001cc0dc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_001cc0e0:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[0]);
    }
L_001cc0e4:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_001cc0e8:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_001cc0ec:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[4]);
    }
L_001cc0f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001cc0f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4slim11XmlDocumentC1Ev @ 001cc0f8 (arm) */
void fn_001cc0f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc0f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cc0fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cc100:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001cc104:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cc108:;
    {
        cpu->r[14] = 0x001cc10cu; fn_001cc0a8(cpu);
    }
L_001cc10c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc110:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc114u)) return;
    }
}

/* _ZN4slim11XmlDocumentC2Ev @ 001cc114 (arm) */
void fn_001cc114(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc114:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cc118:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cc11c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001cc120:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cc124:;
    {
        cpu->r[14] = 0x001cc128u; fn_001cc0a8(cpu);
    }
L_001cc128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc12c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc130u)) return;
    }
}

/* _ZN4slim7XmlNode14clearAttributeEv @ 001cc130 (arm) */
void fn_001cc130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc130:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cc134:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cc138:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cc13c:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x34u;
        cpu->r[5] = rd32(cpu->r[6] + + 0x34u);
        cpu->r[6] = wb_tmp;
    }
L_001cc140:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001cc144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc1bc;
        }
    }
L_001cc148:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001cc14c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001cc150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc1b0;
        }
    }
L_001cc154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cc158:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cc15c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cc160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc180;
        }
    }
L_001cc164:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc180;
        }
    }
L_001cc16c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001cc170:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc174:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc178:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc1f4;
        }
    }
L_001cc17c:;
    {
        cpu->r[14] = 0x001cc180u; fn_002082a8(cpu);
    }
L_001cc180:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cc184:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001cc188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc1a8;
        }
    }
L_001cc18c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc1a8;
        }
    }
L_001cc194:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cc198:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc19c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc1a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc1ec;
        }
    }
L_001cc1a4:;
    {
        cpu->r[14] = 0x001cc1a8u; fn_002082a8(cpu);
    }
L_001cc1a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc1ac:;
    {
        cpu->r[14] = 0x001cc1b0u; fn_0018ba20(cpu);
    }
L_001cc1b0:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_001cc1b4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001cc1b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc148;
        }
    }
L_001cc1bc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x34u);
    }
L_001cc1c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001cc1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc1e0;
        }
    }
L_001cc1c8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001cc1cc:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc1d0:;
    {
        cpu->r[14] = 0x001cc1d4u; fn_002082a8(cpu);
    }
L_001cc1d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001cc1d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc1dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc1c8;
        }
    }
L_001cc1e0:;
    {
        wr32(cpu->r[7] + + 0x38u, cpu->r[5]);
    }
L_001cc1e4:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[5]);
    }
L_001cc1e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc1ecu)) return;
    }
L_001cc1ec:;
    {
        cpu->r[14] = 0x001cc1f0u; fn_0018ba20(cpu);
    }
L_001cc1f0:;
    {
        goto L_001cc1a8;
    }
L_001cc1f4:;
    {
        cpu->r[14] = 0x001cc1f8u; fn_0018ba20(cpu);
    }
L_001cc1f8:;
    {
        goto L_001cc180;
    }
}

/* _ZN4slim7XmlNodeD1Ev @ 001cc1fc (arm) */
void fn_001cc1fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc1fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cc200:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cc204:;
    {
        cpu->r[14] = 0x001cc208u; fn_001cc130(cpu);
    }
L_001cc208:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc20c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_001cc210:;
    {
        cpu->r[14] = 0x001cc214u; fn_001cc2e8(cpu);
    }
L_001cc214:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_001cc218:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001cc21c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc240;
        }
    }
L_001cc220:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cc224:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001cc228:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc22c:;
    {
        cpu->r[14] = 0x001cc230u; fn_002082a8(cpu);
    }
L_001cc230:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001cc234:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc224;
        }
    }
L_001cc23c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001cc240:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x34u);
    }
L_001cc244:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000034u, 0, 0);
    }
L_001cc248:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001cc24c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001cc250:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_001cc254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc270;
        }
    }
L_001cc258:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001cc25c:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc260:;
    {
        cpu->r[14] = 0x001cc264u; fn_002082a8(cpu);
    }
L_001cc264:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001cc268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc26c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc258;
        }
    }
L_001cc270:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001cc274:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[5]);
    }
L_001cc278:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[5]);
    }
L_001cc27c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cc280:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cc284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc2a4;
        }
    }
L_001cc288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc28c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc2a4;
        }
    }
L_001cc290:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001cc294:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc298:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc29c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc2e0;
        }
    }
L_001cc2a0:;
    {
        cpu->r[14] = 0x001cc2a4u; fn_002082a8(cpu);
    }
L_001cc2a4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_001cc2a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001cc2ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc2cc;
        }
    }
L_001cc2b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc2b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc2cc;
        }
    }
L_001cc2b8:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001cc2bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc2c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc2c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc2d4;
        }
    }
L_001cc2c8:;
    {
        cpu->r[14] = 0x001cc2ccu; fn_002082a8(cpu);
    }
L_001cc2cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc2d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc2d4u)) return;
    }
L_001cc2d4:;
    {
        cpu->r[14] = 0x001cc2d8u; fn_0018ba20(cpu);
    }
L_001cc2d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc2dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc2e0u)) return;
    }
L_001cc2e0:;
    {
        cpu->r[14] = 0x001cc2e4u; fn_0018ba20(cpu);
    }
L_001cc2e4:;
    {
        goto L_001cc2a4;
    }
}

/* _ZN4slim7XmlNode10clearChildEv @ 001cc2e8 (arm) */
void fn_001cc2e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc2e8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cc2ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cc2f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cc2f4:;
    {
        uint32_t wb_tmp = cpu->r[7] + + 0x40u;
        cpu->r[4] = rd32(cpu->r[7] + + 0x40u);
        cpu->r[7] = wb_tmp;
    }
L_001cc2f8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001cc2fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc324;
        }
    }
L_001cc300:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cc304:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cc308:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc318;
        }
    }
L_001cc30c:;
    {
        cpu->r[14] = 0x001cc310u; fn_001cc1fc(cpu);
    }
L_001cc310:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc314:;
    {
        cpu->r[14] = 0x001cc318u; fn_0018ba20(cpu);
    }
L_001cc318:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cc31c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001cc320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc300;
        }
    }
L_001cc324:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x40u);
    }
L_001cc328:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001cc32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc348;
        }
    }
L_001cc330:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001cc334:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc338:;
    {
        cpu->r[14] = 0x001cc33cu; fn_002082a8(cpu);
    }
L_001cc33c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001cc340:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc344:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc330;
        }
    }
L_001cc348:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[4]);
    }
L_001cc34c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[4]);
    }
L_001cc350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc354u)) return;
    }
}

/* _ZN4slim7XmlNodeD2Ev @ 001cc354 (arm) */
void fn_001cc354(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc354:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cc358:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cc35c:;
    {
        cpu->r[14] = 0x001cc360u; fn_001cc130(cpu);
    }
L_001cc360:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc364:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_001cc368:;
    {
        cpu->r[14] = 0x001cc36cu; fn_001cc2e8(cpu);
    }
L_001cc36c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_001cc370:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001cc374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc398;
        }
    }
L_001cc378:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cc37c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001cc380:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc384:;
    {
        cpu->r[14] = 0x001cc388u; fn_002082a8(cpu);
    }
L_001cc388:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001cc38c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc37c;
        }
    }
L_001cc394:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001cc398:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x34u);
    }
L_001cc39c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000034u, 0, 0);
    }
L_001cc3a0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001cc3a4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001cc3a8:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[3]);
    }
L_001cc3ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc3c8;
        }
    }
L_001cc3b0:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001cc3b4:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001cc3b8:;
    {
        cpu->r[14] = 0x001cc3bcu; fn_002082a8(cpu);
    }
L_001cc3bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001cc3c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc3c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc3b0;
        }
    }
L_001cc3c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001cc3cc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[5]);
    }
L_001cc3d0:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[5]);
    }
L_001cc3d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cc3d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cc3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc3fc;
        }
    }
L_001cc3e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc3fc;
        }
    }
L_001cc3e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001cc3ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc3f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc3f4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc438;
        }
    }
L_001cc3f8:;
    {
        cpu->r[14] = 0x001cc3fcu; fn_002082a8(cpu);
    }
L_001cc3fc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_001cc400:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001cc404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc424;
        }
    }
L_001cc408:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc40c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc424;
        }
    }
L_001cc410:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001cc414:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc418:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc41c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc42c;
        }
    }
L_001cc420:;
    {
        cpu->r[14] = 0x001cc424u; fn_002082a8(cpu);
    }
L_001cc424:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc428:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc42cu)) return;
    }
L_001cc42c:;
    {
        cpu->r[14] = 0x001cc430u; fn_0018ba20(cpu);
    }
L_001cc430:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc438u)) return;
    }
L_001cc438:;
    {
        cpu->r[14] = 0x001cc43cu; fn_0018ba20(cpu);
    }
L_001cc43c:;
    {
        goto L_001cc3fc;
    }
}

/* _ZN4slim7XmlNode8addChildEPKcNS_8NodeTypeE @ 001cc440 (arm) */
void fn_001cc440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc440:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001cc444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001cc448:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cc44c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cc450:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001cc454:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001cc458:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001cc45c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cc46c;
        }
    }
L_001cc460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc464:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001cc468:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc46cu)) return;
    }
L_001cc46c:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_001cc470:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001cc474:;
    {
        cpu->r[14] = 0x001cc478u; fn_0018ba6c(cpu);
    }
L_001cc478:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cc47c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001cc480:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cc484:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cc488:;
    {
        cpu->r[14] = 0x001cc48cu; fn_001cc058(cpu);
    }
L_001cc48c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001cc490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc4ac;
        }
    }
L_001cc494:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc498:;
    {
        cpu->r[14] = 0x001cc49cu; imp_strlen(cpu); /* strlen */
    }
L_001cc49c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cc4a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cc4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc4a8:;
    {
        cpu->r[14] = 0x001cc4acu; fn_00189c04(cpu);
    }
L_001cc4ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001cc4b0:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001cc4b4:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001cc4b8:;
    {
        cpu->r[14] = 0x001cc4bcu; fn_00208278(cpu);
    }
L_001cc4bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001cc4c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_001cc4c4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[4]);
    }
L_001cc4c8:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001cc4cc:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_001cc4d0:;
    {
        goto L_001cc460;
    }
}

/* _ZN4slim7XmlNode12addAttributeEPKcS2_ @ 001cc4d4 (arm) */
void fn_001cc4d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc4d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cc4d8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001cc4dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001cc4e0:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_001cc4e4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cc4e8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001cc4ec:;
    {
        cpu->r[14] = 0x001cc4f0u; fn_0018ba6c(cpu);
    }
L_001cc4f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001cc4f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cc4f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cc4fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cc500:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_001cc504:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x00000018u;
        wr8(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_001cc508:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001cc50c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001cc510:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[5]);
    }
L_001cc514:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[5]);
    }
L_001cc518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc534;
        }
    }
L_001cc51c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc520:;
    {
        cpu->r[14] = 0x001cc524u; imp_strlen(cpu); /* strlen */
    }
L_001cc524:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cc528:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_001cc52c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc530:;
    {
        cpu->r[14] = 0x001cc534u; fn_00189c04(cpu);
    }
L_001cc534:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001cc538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc554;
        }
    }
L_001cc53c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc540:;
    {
        cpu->r[14] = 0x001cc544u; imp_strlen(cpu); /* strlen */
    }
L_001cc544:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cc548:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cc54c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc550:;
    {
        cpu->r[14] = 0x001cc554u; fn_00189c04(cpu);
    }
L_001cc554:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001cc558:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_001cc55c:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001cc560:;
    {
        cpu->r[14] = 0x001cc564u; fn_00208278(cpu);
    }
L_001cc564:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x38u);
    }
L_001cc568:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000034u, 0, 0);
    }
L_001cc56c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001cc570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc574:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[4]);
    }
L_001cc578:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001cc57c:;
    {
        wr32(cpu->r[8] + + 0x38u, cpu->r[3]);
    }
L_001cc580:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001cc584:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc588u)) return;
    }
}

/* _ZN4slim11XmlDocument10parseLabelEPNS_7XmlNodeEPKcj @ 001cc588 (arm) */
void fn_001cc588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc588:;
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
L_001cc58c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001cc590:;
    {
        cpu->r[3] = rd8(cpu->r[2]);
    }
L_001cc594:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001cc598:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001cc59c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc5a0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
        }
    }
L_001cc5a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc6a0;
        }
    }
L_001cc5a8:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001cc5ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cc5b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001cc5b4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001cc5b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cc5bc:;
    {
        cpu->r[14] = 0x001cc5c0u; fn_00189c04(cpu);
    }
L_001cc5c0:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_001cc5c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001cc5c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc5ccu)) return;
        }
    }
L_001cc5cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001cc5d0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_001cc5d4:;
    {
        if (cond_test(cpu, 10)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc5d8u)) return;
        }
    }
L_001cc5d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_001cc5dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[4] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
        cpu->r[4] = wb_tmp;
        }
    }
L_001cc5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc5d8;
        }
    }
L_001cc5e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], 0x0000003du, 1, 1);
    }
L_001cc5e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001cc5ec:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_001cc5f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001cc5f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001cc5f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc628;
        }
    }
L_001cc5fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc6e0;
        }
    }
L_001cc604:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003eu, 1, 1);
    }
L_001cc608:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001cc60c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc6e0;
        }
    }
L_001cc610:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[2] + + 0x1u);
        cpu->r[2] = wb_tmp;
    }
L_001cc614:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003du, 1, 1);
    }
L_001cc618:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
        }
    }
L_001cc61c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc6cc;
        }
    }
L_001cc620:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_001cc624:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cc628:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc62c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_001cc630:;
    {
        cpu->r[1] = 0x00000022u;
    }
L_001cc634:;
    {
        cpu->r[14] = 0x001cc638u; imp_memchr(cpu); /* memchr */
    }
L_001cc638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc63c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc640u)) return;
        }
    }
L_001cc640:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cc644:;
    {
        cpu->r[1] = 0x00000022u;
    }
L_001cc648:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc64c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_001cc650:;
    {
        cpu->r[14] = 0x001cc654u; imp_memchr(cpu); /* memchr */
    }
L_001cc654:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc658:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc65cu)) return;
        }
    }
L_001cc65c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cc660:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001cc664:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001cc668:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001cc66c:;
    {
        cpu->r[14] = 0x001cc670u; fn_001cc4d4(cpu);
    }
L_001cc670:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001cc674:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[5], 0, 0);
    }
L_001cc678:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001cc67c:;
    {
        cpu->r[14] = 0x001cc680u; fn_00189c04(cpu);
    }
L_001cc680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000018u, 0, 0);
    }
L_001cc684:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cc688:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001cc68c:;
    {
        cpu->r[14] = 0x001cc690u; fn_00189c04(cpu);
    }
L_001cc690:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[4], 1, 1);
    }
L_001cc694:;
    {
        if (cond_test(cpu, 10)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc698u)) return;
        }
    }
L_001cc698:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x1u);
    }
L_001cc69c:;
    {
        goto L_001cc5d8;
    }
L_001cc6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003eu, 1, 1);
    }
L_001cc6a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_001cc6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc5a8;
        }
    }
L_001cc6ac:;
    {
        uint32_t wb_tmp = cpu->r[4] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[4] + + 0x1u);
        cpu->r[4] = wb_tmp;
    }
L_001cc6b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc6b4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
        }
    }
L_001cc6b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc6c4;
        }
    }
L_001cc6bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003eu, 1, 1);
    }
L_001cc6c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc6ac;
        }
    }
L_001cc6c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 0);
    }
L_001cc6c8:;
    {
        goto L_001cc5b0;
    }
L_001cc6cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc620;
        }
    }
L_001cc6d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003eu, 1, 1);
    }
L_001cc6d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc610;
        }
    }
L_001cc6dc:;
    {
        goto L_001cc620;
    }
L_001cc6e0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001cc6e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cc6e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_001cc6ec:;
    {
        cpu->r[1] = 0x00000022u;
    }
L_001cc6f0:;
    {
        cpu->r[14] = 0x001cc6f4u; imp_memchr(cpu); /* memchr */
    }
L_001cc6f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cc6f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc6fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc640;
        }
    }
L_001cc700:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc704u)) return;
    }
}

/* _ZN4slim11XmlDocument5parseEPKcj @ 001cc704 (arm) */
void fn_001cc704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc704:;
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
L_001cc708:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cc70c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001cc710:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001cc714:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001cc718:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001cc71c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cc720:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001cc724:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_001cc728:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cc72c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001cc730:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001cc734:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001cc738:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001cc73c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cc7d0;
        }
    }
L_001cc740:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc744:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001cc748:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_001cc74c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001cc750:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001cc754:;
    {
        cpu->r[14] = 0x001cc758u; fn_001cbdbc(cpu);
    }
L_001cc758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc75c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc7d0;
        }
    }
L_001cc760:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cc764:;
    {
        cpu->r[3] = rd8(cpu->r[2]);
    }
L_001cc768:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc76c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc7e0;
        }
    }
L_001cc770:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003fu, 1, 1);
    }
L_001cc774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc7c4;
        }
    }
L_001cc778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000021u, 1, 1);
    }
L_001cc77c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc804;
        }
    }
L_001cc780:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001cc784:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc788:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cc78c:;
    {
        cpu->r[14] = 0x001cc790u; fn_001cc440(cpu);
    }
L_001cc790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cc794:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cc798:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cc79c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc7a0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cc7a4:;
    {
        cpu->r[14] = 0x001cc7a8u; fn_001cc588(cpu);
    }
L_001cc7a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cc7ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cc7b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001cc7b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + - 0x1u);
    }
L_001cc7b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
    }
L_001cc7bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001cc7c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[4];
        }
    }
L_001cc7c4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cc7c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001cc7cc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cc740;
        }
    }
L_001cc7d0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[8], 1, 1);
    }
L_001cc7d4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001cc7d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001cc7dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc7e0u)) return;
    }
L_001cc7e0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cc7e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc864;
        }
    }
L_001cc7e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_001cc7ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001cc7f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc840;
        }
    }
L_001cc7f4:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x3cu);
    }
L_001cc7f8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_001cc7fc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cc800:;
    {
        goto L_001cc7c8;
    }
L_001cc804:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cc808:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001cc80c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cc864;
        }
    }
L_001cc810:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cc814:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001cc818:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc81c:;
    {
        cpu->r[14] = 0x001cc820u; fn_001cc440(cpu);
    }
L_001cc820:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cc824:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cc828:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001cc82c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 0);
    }
L_001cc830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001cc834:;
    {
        cpu->r[14] = 0x001cc838u; fn_00189c04(cpu);
    }
L_001cc838:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cc83c:;
    {
        goto L_001cc7c8;
    }
L_001cc840:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x40u);
    }
L_001cc844:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000040u, 0, 0);
    }
L_001cc848:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001cc84c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc7f4;
        }
    }
L_001cc850:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cc854:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001cc858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cc85c:;
    {
        cpu->r[14] = 0x001cc860u; fn_00189c04(cpu);
    }
L_001cc860:;
    {
        goto L_001cc7f4;
    }
L_001cc864:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cc868:;
    {
        goto L_001cc7d8;
    }
}

/* _ZN4slim11XmlDocument14loadFromMemoryEPKcj @ 001cc86c (arm) */
void fn_001cc86c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc86c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cc870:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cc874:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001cc878:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cc87c:;
    {
        cpu->r[14] = 0x001cc880u; fn_001cc2e8(cpu);
    }
L_001cc880:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_001cc884:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cc8d0;
        }
    }
L_001cc888:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_001cc88c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000feu, 1, 1);
    }
L_001cc890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc8c4;
        }
    }
L_001cc894:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001cc898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc8d8;
        }
    }
L_001cc89c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000efu, 1, 1);
    }
L_001cc8a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc8b0;
        }
    }
L_001cc8a4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_001cc8a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000bbu, 1, 1);
    }
L_001cc8ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc8e8;
        }
    }
L_001cc8b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cc8b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cc8b8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001cc8bc:;
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
L_001cc8c0:;
    {
        return fn_001cc704(cpu);
    }
L_001cc8c4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_001cc8c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_001cc8cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc8b0;
        }
    }
L_001cc8d0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001cc8d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc8d8u)) return;
    }
L_001cc8d8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x1u);
    }
L_001cc8dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000feu, 1, 1);
    }
L_001cc8e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc8b0;
        }
    }
L_001cc8e4:;
    {
        goto L_001cc8d0;
    }
L_001cc8e8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x2u);
    }
L_001cc8ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000bfu, 1, 1);
    }
L_001cc8f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc8b0;
        }
    }
L_001cc8f4:;
    {
        goto L_001cc8d0;
    }
}

/* _ZNK4slim11XmlDocument4saveEPKcNS_6EncodeE @ 001cc8f8 (arm) */
void fn_001cc8f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc8f8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001cc8fc:;
    {
        cpu->r[4] = rd32(0x001cc904u + + 0xa0u);
    }
L_001cc900:;
    {
        cpu->r[6] = rd32(0x001cc908u + + 0xa0u);
    }
L_001cc904:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001cc908:;
    {
        cpu->r[4] = add_flags(cpu, 0x001cc910u, cpu->r[4], 0, 0);
    }
L_001cc90c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cc910:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001cc914:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001cc918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cc91c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_001cc920:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001cc924:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cc928:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001cc92c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001cc930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc97c;
        }
    }
L_001cc934:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cc938:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001cc93c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc95c;
        }
    }
L_001cc940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cc944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cc95c;
        }
    }
L_001cc948:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cc94c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cc950:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cc954:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cc998;
        }
    }
L_001cc958:;
    {
        cpu->r[14] = 0x001cc95cu; fn_002082a8(cpu);
    }
L_001cc95c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001cc960:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cc964:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cc968:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cc96c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cc970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc9a0;
        }
    }
L_001cc974:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001cc978:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cc97cu)) return;
    }
L_001cc97c:;
    {
        cpu->r[1] = rd32(0x001cc984u + + 0x28u);
    }
L_001cc980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cc984:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001cc988:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cc990u, cpu->r[1], 0, 0);
    }
L_001cc98c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000017u, 0, 0);
    }
L_001cc990:;
    {
        cpu->r[14] = 0x001cc994u; fn_00189c04(cpu);
    }
L_001cc994:;
    {
        goto L_001cc934;
    }
L_001cc998:;
    {
        cpu->r[14] = 0x001cc99cu; fn_0018ba20(cpu);
    }
L_001cc99c:;
    {
        goto L_001cc95c;
    }
L_001cc9a0:;
    {
        cpu->r[14] = 0x001cc9a4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cc9a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, 22u, &shc); cpu->r[13] = v;
        }
    }
L_001cc9a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001cc9ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 31u, &shc); cpu->r[4] = v;
        }
    }
}
