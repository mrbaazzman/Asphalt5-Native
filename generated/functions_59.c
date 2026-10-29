#include "functions.h"

/* _ZN4CCar7InitCarERK12CCarSettingsibb @ 00169ee0 (arm) */
void fn_00169ee0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00169ee0:;
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
L_00169ee4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00169eecu + + 0x308u);
    }
L_00169ee8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00169eec:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00169ef0:;
    {
        cpu->r[0] = rd32(0x00169ef8u + + 0x2ecu);
    }
L_00169ef4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000114u, 1, 0);
    }
L_00169ef8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00169efc:;
    {
        cpu->r[6] = rd32(0x00169f04u + + 0x2e4u);
    }
L_00169f00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00169f04:;
    {
        wr32(cpu->r[5] + + 0x63cu, cpu->r[8]);
    }
L_00169f08:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00169f0c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00169f14u, cpu->r[6], 0, 0);
    }
L_00169f10:;
    {
        wr8(cpu->r[5] + + 0x5u, cpu->r[1]);
    }
L_00169f14:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x35cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00169f18:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_00169f1c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x2cu);
    }
L_00169f20:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00169f24:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00169f28:;
    {
        wr32(cpu->r[5] + + 0x5d8u, cpu->r[12]);
    }
L_00169f2c:;
    {
        cpu->r[12] = (~0x80000000u);
    }
L_00169f30:;
    {
        cpu->r[3] = rd32(0x00169f38u + + 0x2b4u);
    }
L_00169f34:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00169f38:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00169f3c:;
    {
        cpu->r[2] = 0x00001780u;
    }
L_00169f40:;
    {
        wr32(cpu->r[5] + + 0x5acu, cpu->r[1]);
    }
L_00169f44:;
    {
        wr32(cpu->r[5] + + 0x5d4u, cpu->r[0]);
    }
L_00169f48:;
    {
        cpu->r[0] = 0x00001740u;
    }
L_00169f4c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00169f50:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_00169f54:;
    {
        cpu->r[0] = 0x00001784u;
    }
L_00169f58:;
    {
        wr32(cpu->r[5] + + 0x5b0u, cpu->r[1]);
    }
L_00169f5c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_00169f60:;
    {
        cpu->r[0] = 0x00001810u;
    }
L_00169f64:;
    {
        cpu->r[12] = 0x0000191cu;
    }
L_00169f68:;
    {
        wr32(cpu->r[5] + + 0x5b4u, cpu->r[1]);
    }
L_00169f6c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_00169f70:;
    {
        cpu->r[0] = 0x000016b4u;
    }
L_00169f74:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[1]);
    }
L_00169f78:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00169f7c:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_00169f80:;
    {
        cpu->r[0] = 0x0000178cu;
    }
L_00169f84:;
    {
        wr32(cpu->r[5] + + 0x580u, cpu->r[12]);
    }
L_00169f88:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_00169f8c:;
    {
        cpu->r[0] = 0x0000fc19u;
    }
L_00169f90:;
    {
        wr32(cpu->r[5] + + 0x5b8u, cpu->r[1]);
    }
L_00169f94:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_00169f98:;
    {
        wr32(cpu->r[5] + + 0x584u, cpu->r[1]);
    }
L_00169f9c:;
    {
        wr8(cpu->r[5] + + 0x57cu, cpu->r[1]);
    }
L_00169fa0:;
    {
        wr8(cpu->r[5] + + 0x5e4u, cpu->r[1]);
    }
L_00169fa4:;
    {
        wr32(cpu->r[5] + + 0x59cu, cpu->r[1]);
    }
L_00169fa8:;
    {
        wr8(cpu->r[5] + + 0x5a0u, cpu->r[1]);
    }
L_00169fac:;
    {
        wr32(cpu->r[5] + + 0x638u, cpu->r[1]);
    }
L_00169fb0:;
    {
        wr32(cpu->r[5] + + 0x640u, cpu->r[1]);
    }
L_00169fb4:;
    {
        wr32(cpu->r[5] + + 0x360u, cpu->r[1]);
    }
L_00169fb8:;
    {
        wr32(cpu->r[5] + + 0x628u, cpu->r[1]);
    }
L_00169fbc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x358u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00169fc0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00169fc4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00169fc8:;
    {
        wr32(cpu->r[5] + + 0x33cu, cpu->r[1]);
    }
L_00169fcc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00169fd0:;
    {
        wr32(cpu->r[5] + + 0x590u, cpu->r[0]);
    }
L_00169fd4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00169fd8:;
    {
        wr32(cpu->r[5] + + 0x5dcu, cpu->r[8]);
    }
L_00169fdc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00169fe0:;
    {
        cpu->r[3] = 0x000018e0u;
    }
L_00169fe4:;
    {
        wr32(cpu->r[5] + + 0x5e0u, cpu->r[8]);
    }
L_00169fe8:;
    {
        wr32(cpu->r[5] + + 0x634u, cpu->r[8]);
    }
L_00169fec:;
    {
        wr32(cpu->r[5] + + 0x594u, cpu->r[1]);
    }
L_00169ff0:;
    {
        cpu->r[8] = rd8(cpu->r[13] + + 0x138u);
    }
L_00169ff4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x8u);
    }
L_00169ff8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00169ffc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016a000:;
    {
        wr8(cpu->r[5] + + 0x598u, cpu->r[3]);
    }
L_0016a004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016afb4;
        }
    }
L_0016a008:;
    {
        cpu->r[4] = rd32(0x0016a010u + + 0x1e0u);
    }
L_0016a00c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0016a010:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0016a014:;
    {
        cpu->r[14] = 0x0016a018u; fn_00189f5c(cpu);
    }
L_0016a018:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0016a01c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0016a020:;
    {
        cpu->r[14] = 0x0016a024u; fn_001897b4(cpu);
    }
L_0016a024:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016a028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b2dc;
        }
    }
L_0016a02c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a030:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0016a034:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0016a038:;
    {
        cpu->r[14] = 0x0016a03cu; fn_000fc5dc(cpu);
    }
L_0016a03c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0016a040:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0016a044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a048:;
    {
        cpu->r[14] = 0x0016a04cu; fn_000fc650(cpu);
    }
L_0016a04c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0016a050:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016a054:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0016a058:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0016a05c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a060:;
    {
        cpu->r[14] = 0x0016a064u; fn_000fc5ec(cpu);
    }
L_0016a064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a068:;
    {
        cpu->r[14] = 0x0016a06cu; fn_000fc628(cpu);
    }
L_0016a06c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0016a070:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a074:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0016a078:;
    {
        cpu->r[14] = 0x0016a07cu; fn_000fc5dc(cpu);
    }
L_0016a07c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_0016a080:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016a084:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[11] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_0016a088:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0016a08c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0016a090:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_0016a094:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a098:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0016a09c:;
    {
        cpu->r[14] = 0x0016a0a0u; fn_000fc5ec(cpu);
    }
L_0016a0a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a0a4:;
    {
        cpu->r[14] = 0x0016a0a8u; fn_000fc678(cpu);
    }
L_0016a0a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016a0ac:;
    {
        cpu->r[10] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0016a0b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a0b4:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_0016a0b8:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[11] = v;
    }
L_0016a0bc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_0016a0c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0016a0c4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0016a0c8:;
    {
        cpu->r[14] = 0x0016a0ccu; fn_000fc5f4(cpu);
    }
L_0016a0cc:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0x3au);
    }
L_0016a0d0:;
    {
        cpu->r[1] = rd16(cpu->r[13] + + 0x3cu);
    }
L_0016a0d4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_0016a0d8:;
    {
        cpu->r[14] = 0x0016a0dcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016a0dc:;
    {
        cpu->r[3] = 0x0000180cu;
    }
L_0016a0e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_0016a0e4:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_0016a0e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0016a0ec:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016a0f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a0f4:;
    {
        cpu->r[14] = 0x0016a0f8u; fn_000fc5f4(cpu);
    }
L_0016a0f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_0016a0fc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0016a100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a104:;
    {
        cpu->r[14] = 0x0016a108u; fn_000fc5f4(cpu);
    }
L_0016a108:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_0016a10c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0016a110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a114:;
    {
        cpu->r[14] = 0x0016a118u; fn_000fc5f4(cpu);
    }
L_0016a118:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000104u, 0, 0);
    }
L_0016a11c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0016a120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a124:;
    {
        cpu->r[14] = 0x0016a128u; fn_000fc5f4(cpu);
    }
L_0016a128:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_0016a12c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0016a130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a134:;
    {
        cpu->r[14] = 0x0016a138u; fn_000fc5f4(cpu);
    }
L_0016a138:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c0u, 0, 0);
    }
L_0016a13c:;
    {
        cpu->r[2] = 0x0000001au;
    }
L_0016a140:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a144:;
    {
        cpu->r[14] = 0x0016a148u; fn_000fc5f4(cpu);
    }
L_0016a148:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd8u);
    }
L_0016a14c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd2u);
    }
L_0016a150:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_0016a154:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd4u);
    }
L_0016a158:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0016a15c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd6u);
    }
L_0016a160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a164:;
    {
        wr32(cpu->r[5] + + 0x5f4u, cpu->r[3]);
    }
L_0016a168:;
    {
        wr32(cpu->r[5] + + 0x5e8u, cpu->r[12]);
    }
L_0016a16c:;
    {
        wr32(cpu->r[5] + + 0x5ecu, cpu->r[14]);
    }
L_0016a170:;
    {
        wr32(cpu->r[5] + + 0x5f0u, cpu->r[11]);
    }
L_0016a174:;
    {
        cpu->r[14] = 0x0016a178u; fn_000fc5f4(cpu);
    }
L_0016a178:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_0016a17c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0016a180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a184:;
    {
        cpu->r[14] = 0x0016a188u; fn_000fc5f4(cpu);
    }
L_0016a188:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_0016a18c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_0016a190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a194:;
    {
        cpu->r[14] = 0x0016a198u; fn_000fc5f4(cpu);
    }
L_0016a198:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_0016a19c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0016a1a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a1a4:;
    {
        cpu->r[14] = 0x0016a1a8u; fn_000fc5f4(cpu);
    }
L_0016a1a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_0016a1ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a1b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016a1b4:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x1u;
        wr8(cpu->r[1] + - 0x1u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_0016a1b8:;
    {
        cpu->r[14] = 0x0016a1bcu; fn_000fc5f4(cpu);
    }
L_0016a1bc:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x10fu);
    }
L_0016a1c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016a1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016a204;
        }
    }
L_0016a1c8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0016a1fc;
        }
    }
L_0016a1cc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016a1d0:;
    {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[9]);
    }
L_0016a1d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016a1d8:;
    {
        uint32_t v = cpu->r[2] | 0x04000000u; cpu->r[2] = v;
    }
L_0016a1dc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016a1e0:;
    {
        goto L_0016a208;
    }
L_0016a1fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016a200:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0016a204:;
    {
        wr32(cpu->r[5] + + 0x53cu, cpu->r[3]);
    }
L_0016a208:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00001900u, 0, 0);
    }
L_0016a20c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0016a210:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0016a214:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a218:;
    {
        cpu->r[14] = 0x0016a21cu; fn_000fc5f4(cpu);
    }
L_0016a21c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a220:;
    {
        cpu->r[14] = 0x0016a224u; fn_000fc628(cpu);
    }
L_0016a224:;
    {
        cpu->r[9] = 0x00001934u;
    }
L_0016a228:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[0]);
    }
L_0016a22c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a230:;
    {
        cpu->r[14] = 0x0016a234u; fn_000fc628(cpu);
    }
L_0016a234:;
    {
        cpu->r[3] = 0x00001938u;
    }
L_0016a238:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016a23c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a240:;
    {
        cpu->r[14] = 0x0016a244u; fn_000fc628(cpu);
    }
L_0016a244:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0016a248:;
    {
        cpu->r[2] = 0x0000193cu;
    }
L_0016a24c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016a250:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_0016a254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b1d0;
        }
    }
L_0016a258:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016a25c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016a2b8;
        }
    }
L_0016a260:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016a264:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0016a268:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_0016a26c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0016a270:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0016a274:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0016a278:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016a27c:;
    {
        cpu->r[14] = 0x0016a280u; fn_000fc5fc(cpu);
    }
L_0016a280:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_0016a284:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0016a288:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_0016a28c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000030u, 1, 1);
    }
L_0016a290:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0016a294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016a278;
        }
    }
L_0016a298:;
    {
        cpu->r[12] = 0x00001934u;
    }
L_0016a29c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0016a2a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000030u, 0, 0);
    }
L_0016a2a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_0016a2a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0016a2ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016a274;
        }
    }
L_0016a2b0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0016a2b4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016a2b8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0016a2bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b080;
        }
    }
L_0016a2c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016a2c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016a2c8:;
    {
        cpu->r[14] = 0x0016a2ccu; fn_001785fc(cpu);
    }
L_0016a2cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016a2d0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0016a2d4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_0016a2d8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0016a2dc:;
    {
        cpu->r[14] = 0x0016a2e0u; fn_00189870(cpu);
    }
L_0016a2e0:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_0016a2e4:;
    {
        cpu->r[14] = 0x0016a2e8u; fn_00093f34(cpu);
    }
L_0016a2e8:;
    {
        cpu->r[3] = 0x000018f8u;
    }
L_0016a2ec:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0016a2f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,11);
    }
L_0016a2f4:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_0016a2f8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a2fc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_0016a300:;
    {
        cpu->r[14] = 0x0016a304u; fn_00093f34(cpu);
    }
L_0016a304:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58cu);
    }
L_0016a308:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016a30c:;
    {
        add_flags(cpu, cpu->r[3], 0x0000007bu, 0, 1);
    }
L_0016a310:;
    {
        cpu->r[3] = 0x00001914u;
    }
L_0016a314:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000003d4u, 0, 0);
        }
    }
L_0016a318:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0016a31c:;
    {
        cpu->r[3] = 0x000018fcu;
    }
L_0016a320:;
    {
        wr32(cpu->r[5] + + 0x348u, cpu->r[2]);
    }
L_0016a324:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0016a328:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,11);
    }
L_0016a32c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
        }
    }
L_0016a330:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a334:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016a338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016a5c4;
        }
    }
L_0016a33c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016a340:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016a344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b090;
        }
    }
L_0016a348:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016a34c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0016a350:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[8]);
    }
L_0016a354:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0016a358:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[8]);
    }
L_0016a35c:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[8]);
    }
L_0016a360:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0016a364:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[8]);
    }
L_0016a368:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[8]);
    }
L_0016a36c:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[8]);
    }
L_0016a370:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[8]);
    }
L_0016a374:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[8]);
    }
L_0016a378:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[8]);
    }
L_0016a37c:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[8]);
    }
L_0016a380:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[8]);
    }
L_0016a384:;
    {
        cpu->r[14] = 0x0016a388u; fn_000978a8(cpu);
    }
L_0016a388:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0016a38c:;
    {
        cpu->r[14] = 0x0016a390u; fn_00169c9c(cpu);
    }
L_0016a390:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0016a394:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0016a398:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000064u, 0, 0);
    }
L_0016a39c:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0016a3a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016a3e4;
        }
    }
L_0016a3a4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016a3a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016a3b0u + - 0x1b8u);
    }
L_0016a3ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016a3b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0016a3b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0016a3b8:;
    {
        cpu->r[2] = rd16(cpu->r[3] + + 0x2u);
    }
L_0016a3bc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_0016a3c0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0016a3c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016a3c8:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0016a3cc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0016a3d0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a3d4:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_0016a3d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_0016a3dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0016a3e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016a3b8;
        }
    }
L_0016a3e4:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x10cu);
    }
L_0016a3e8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[9];
    }
L_0016a3ec:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x10du);
    }
L_0016a3f0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016a3f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_0016a3f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a400u + - 0x20cu);
    }
L_0016a3fc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x348u);
    }
L_0016a400:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016a404:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_0016a408:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016a40c:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_0016a410:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0016a414:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0016a418:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016a41c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016a420:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0016a424:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x000000ffu;
        }
    }
L_0016a428:;
    {
        wr8(cpu->r[13] + + 0x10du, cpu->r[3]);
    }
L_0016a42c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a430:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0016a434:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x000000ffu;
        }
    }
L_0016a438:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0016a43c:;
    {
        wr8(cpu->r[13] + + 0x10cu, cpu->r[3]);
    }
L_0016a440:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016b244;
        }
    }
L_0016a444:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0016a448:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_0016a44c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0016a450:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0016a454:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[12]; cpu->r[2] = v;
    }
L_0016a458:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[12]; cpu->r[3] = v;
    }
L_0016a45c:;
    {
        cpu->r[2] = rd16(cpu->r[2] + - 0xe0u);
    }
L_0016a460:;
    {
        cpu->r[3] = rd16(cpu->r[3] + - 0xe0u);
    }
L_0016a464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0016a468:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016a46c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016b20c;
        }
    }
L_0016a470:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0016a474:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000110u, 0, 0);
    }
L_0016a478:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_0016a47c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0016a480:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_0016a484:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a48cu + - 0x294u);
    }
L_0016a488:;
    {
        cpu->r[9] = rd16(cpu->r[14] + + 0x4u);
    }
L_0016a48c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000064u, 0, 0);
    }
L_0016a490:;
    {
        cpu->r[8] = rd16(cpu->r[14] + + 0x6u);
    }
L_0016a494:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0016a498:;
    {
        cpu->r[14] = rd16(cpu->r[3] + - 0xe0u);
    }
L_0016a49c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[14];
    }
L_0016a4a0:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0xecu);
    }
L_0016a4a4:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0016a4a8:;
    {
        cpu->r[12] = rd16(cpu->r[13] + + 0xeeu);
    }
L_0016a4ac:;
    {
        cpu->r[4] = 0x000018f8u;
    }
L_0016a4b0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[14]; cpu->r[0] = v;
    }
L_0016a4b4:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_0016a4b8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_0016a4bc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[9] = v;
    }
L_0016a4c0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[9];
    }
L_0016a4c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_0016a4c8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[8] = v;
    }
L_0016a4cc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_0016a4d0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016a4d4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_0016a4d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0016a4dc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016a4e0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[11] = v;
    }
L_0016a4e4:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[11];
    }
L_0016a4e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xacu);
    }
L_0016a4ec:;
    {
        cpu->r[12] = 0x000001f4u;
    }
L_0016a4f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0016a4f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016a4f8:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_0016a4fc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[14]; cpu->r[8] = v;
    }
L_0016a500:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016a504:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[8]);
    }
L_0016a508:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0016a50c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016a510:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_0016a514:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016a518:;
    {
        vfp_vdiv(cpu, 11, 11, 15);
    }
L_0016a51c:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_0016a520:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0016a524:;
    {
        vfp_vdiv(cpu, 15, 9, 15);
    }
L_0016a528:;
    {
        vfp_vadd(cpu, 12, 10, 12);
    }
L_0016a52c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = (uint32_t)*vfp_s(cpu,11);
    }
L_0016a530:;
    {
        *(uint32_t*)vfp_s(cpu,12) = (uint32_t)*vfp_s(cpu,12);
    }
L_0016a534:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0016a538:;
    {
        wr16(cpu->r[9] + + 0x4u, cpu->r[2]);
    }
L_0016a53c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0016a540:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0016a544:;
    {
        wr16(cpu->r[3] + - 0xe0u, cpu->r[12]);
    }
L_0016a548:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0016a54c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0016a550:;
    {
        wr16(cpu->r[9] + + 0x6u, cpu->r[2]);
    }
L_0016a554:;
    {
        *(uint32_t*)vfp_s(cpu,14) = (uint32_t)*vfp_s(cpu,14);
    }
L_0016a558:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a55c:;
    {
        wr16(cpu->r[13] + + 0xecu, cpu->r[12]);
    }
L_0016a560:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016a564:;
    {
        wr16(cpu->r[13] + + 0xeeu, cpu->r[3]);
    }
L_0016a568:;
    {
        cpu->r[14] = 0x0016a56cu; fn_000a2a00(cpu);
    }
L_0016a56c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[8];
    }
L_0016a570:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_0016a574:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0016a578:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0016a580u + + 0x3f0u);
    }
L_0016a57c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a584u + + 0x3f4u);
    }
L_0016a580:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58cu);
    }
L_0016a584:;
    {
        add_flags(cpu, cpu->r[3], 0x0000007bu, 0, 1);
    }
L_0016a588:;
    {
        cpu->r[3] = 0x00001900u;
    }
L_0016a58c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000003d4u, 0, 0);
        }
    }
L_0016a590:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,10);
    }
L_0016a594:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 5) * *vfp_d(cpu, 6);
    }
L_0016a598:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0016a59c:;
    {
        vfp_vadd(cpu, 15, 11, 15);
    }
L_0016a5a0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_0016a5a4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0016a5a8:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,6);
    }
L_0016a5ac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016a5b0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016a5b4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016a5b8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a5bc:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[1]);
    }
L_0016a5c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b090;
        }
    }
L_0016a5c4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0016a5c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016a684;
        }
    }
L_0016a5cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016a5d0:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x30u);
    }
L_0016a5d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_0016a5d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016a5dc:;
    {
        cpu->r[9] = rd32(cpu->r[3]);
    }
L_0016a5e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016af08;
        }
    }
L_0016a5e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016a5e8:;
    {
        cpu->r[11] = 0x0000851fu;
    }
L_0016a5ec:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016a5f0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0016a5f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0016a5f8:;
    {
        cpu->r[10] = 0x000060b7u;
    }
L_0016a5fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_0016a600:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x51ebu << 16);
    }
L_0016a604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016a608:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xb60bu << 16);
    }
L_0016a60c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0016a610:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_0016a614:;
    {
        cpu->r[0] = rd16(cpu->r[4]);
    }
L_0016a618:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x418u);
    }
L_0016a61c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016a620:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016a624:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0016a628:;
    {
        cpu->r[14] = 0x0016a62cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016a62c:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0x2u);
    }
L_0016a630:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x8u);
    }
L_0016a634:;
    {
        cpu->r[14] = rd16(cpu->r[4] + + 0x4u);
    }
L_0016a638:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 12u, &shc); cpu->r[2] = v;
    }
L_0016a63c:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x6u);
    }
L_0016a640:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 11u, &shc); cpu->r[3] = v;
    }
L_0016a644:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000au, 0, 0);
    }
L_0016a648:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[2]; cpu->r[6] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0016a64c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0016a650:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0016a654:;
    {
        wr32(cpu->r[8] + + 0x2a0u, cpu->r[14]);
    }
L_0016a658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0016a65c:;
    {
        wr32(cpu->r[8] + + 0x2a4u, cpu->r[1]);
    }
L_0016a660:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 5u, &shc); cpu->r[2] = v;
    }
L_0016a664:;
    {
        wr32(cpu->r[8] + + 0x29cu, cpu->r[2]);
    }
L_0016a668:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 9u, &shc); cpu->r[3] = v;
    }
L_0016a66c:;
    {
        wr32(cpu->r[8] + + 0x2a8u, cpu->r[3]);
    }
L_0016a670:;
    {
        wr32(cpu->r[8] + + 0x298u, cpu->r[0]);
    }
L_0016a674:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000014u, 0, 0);
    }
L_0016a678:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016a614;
        }
    }
L_0016a67c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016a680:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016a684:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016a688:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x2a0u);
    }
L_0016a68c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016a690:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x2b0u);
    }
L_0016a694:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016a698:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0016a69c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0016a6a0:;
    {
        cpu->r[9] = 0x00000003u;
    }
L_0016a6a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016a6a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x2a4u);
    }
L_0016a6ac:;
    {
        wr32(cpu->r[5] + + 0x338u, cpu->r[3]);
    }
L_0016a6b0:;
    {
        cpu->r[3] = 0x00001e18u;
    }
L_0016a6b4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016a6b8:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a6bc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[10]);
    }
L_0016a6c0:;
    {
        cpu->r[3] = 0x00001e1cu;
    }
L_0016a6c4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_0016a6c8:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a6cc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_0016a6d0:;
    {
        cpu->r[14] = 0x0016a6d4u; fn_0015d9d8(cpu);
    }
L_0016a6d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000100u, 0, 0);
    }
L_0016a6d8:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x10du);
    }
L_0016a6dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a6e4u + + 0x298u);
    }
L_0016a6e0:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x4u);
    }
L_0016a6e4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0016a6e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016a6ec:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016a6f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a6f8u + + 0x288u);
    }
L_0016a6f4:;
    {
        cpu->r[14] = rd16(cpu->r[13] + + 0xfau);
    }
L_0016a6f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[0] = v;
    }
L_0016a6fc:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_0016a700:;
    {
        cpu->r[1] = 0x00005556u;
    }
L_0016a704:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_0016a708:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[14] = v;
    }
L_0016a70c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0016a710:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x5555u << 16);
    }
L_0016a714:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x348u);
    }
L_0016a718:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0016a71c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a724u + + 0x260u);
    }
L_0016a720:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[14]; cpu->r[11] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_0016a724:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0016a728:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[0]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0016a72c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016a730:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016a734:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0016a738:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x2a4u);
    }
L_0016a73c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016a740:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0016a744:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_0016a748:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_0016a74c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x10cu);
    }
L_0016a750:;
    {
        wr32(cpu->r[5] + + 0x370u, cpu->r[12]);
    }
L_0016a754:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016a758:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a760u + + 0x228u);
    }
L_0016a75c:;
    {
        cpu->r[14] = rd16(cpu->r[13] + + 0xf8u);
    }
L_0016a760:;
    {
        wr32(cpu->r[5] + + 0x368u, cpu->r[1]);
    }
L_0016a764:;
    {
        cpu->r[0] = 0x00004b00u;
    }
L_0016a768:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_0016a76c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_0016a770:;
    {
        cpu->r[14] = 0x00001784u;
    }
L_0016a774:;
    {
        wr32(cpu->r[5] + + 0x340u, cpu->r[3]);
    }
L_0016a778:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[11]);
    }
L_0016a77c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0016a780:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016a784:;
    {
        wr32(cpu->r[5] + + 0x610u, cpu->r[3]);
    }
L_0016a788:;
    {
        wr32(cpu->r[5] + + 0x36cu, cpu->r[2]);
    }
L_0016a78c:;
    {
        cpu->r[2] = 0x000017bcu;
    }
L_0016a790:;
    {
        wr32(cpu->r[5] + + 0x61cu, cpu->r[11]);
    }
L_0016a794:;
    {
        wr32(cpu->r[5] + + 0x614u, cpu->r[9]);
    }
L_0016a798:;
    {
        wr32(cpu->r[5] + + 0x364u, cpu->r[4]);
    }
L_0016a79c:;
    {
        wr32(cpu->r[5] + + 0x618u, cpu->r[1]);
    }
L_0016a7a0:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016a7a4:;
    {
        wr32(cpu->r[5] + + 0x5f8u, cpu->r[12]);
    }
L_0016a7a8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0016a7ac:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016a7b0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x384u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016a7b4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x388u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016a7b8:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x418u);
    }
L_0016a7bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016a7c0:;
    {
        cpu->r[14] = 0x0016a7c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016a7c4:;
    {
        wr32(cpu->r[5] + + 0x374u, cpu->r[0]);
    }
L_0016a7c8:;
    {
        cpu->r[0] = 0x00002580u;
    }
L_0016a7cc:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x418u);
    }
L_0016a7d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016a7d4:;
    {
        cpu->r[14] = 0x0016a7d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016a7d8:;
    {
        cpu->r[3] = 0x00001660u;
    }
L_0016a7dc:;
    {
        cpu->r[1] = 0x00001670u;
    }
L_0016a7e0:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_0016a7e4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a7e8:;
    {
        cpu->r[3] = 0x00001664u;
    }
L_0016a7ec:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0016a7f0:;
    {
        cpu->r[1] = 0x00001678u;
    }
L_0016a7f4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a7f8:;
    {
        cpu->r[3] = 0x00001668u;
    }
L_0016a7fc:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0016a800:;
    {
        cpu->r[1] = 0x00001674u;
    }
L_0016a804:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a808:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016a80c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0016a810:;
    {
        cpu->r[1] = 0x0000167cu;
    }
L_0016a814:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016a818:;
    {
        cpu->r[3] = 0x00000200u;
    }
L_0016a81c:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[3]);
    }
L_0016a820:;
    {
        cpu->r[3] = 0x0000166cu;
    }
L_0016a824:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0016a828:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0016a830u + + 0x15cu);
    }
L_0016a82c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a830:;
    {
        cpu->r[1] = 0x00001680u;
    }
L_0016a834:;
    {
        wr32(cpu->r[5] + + 0x380u, cpu->r[4]);
    }
L_0016a838:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016a840u + + 0x150u);
    }
L_0016a83c:;
    {
        wr32(cpu->r[5] + + 0x38cu, cpu->r[4]);
    }
L_0016a840:;
    {
        cpu->r[2] = 0x0000168cu;
    }
L_0016a844:;
    {
        wr32(cpu->r[5] + + 0x390u, cpu->r[4]);
    }
L_0016a848:;
    {
        cpu->r[3] = 0x00001688u;
    }
L_0016a84c:;
    {
        wr32(cpu->r[5] + + 0x394u, cpu->r[4]);
    }
L_0016a850:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016a858u + + 0x13cu);
    }
L_0016a854:;
    {
        wr32(cpu->r[5] + + 0x37cu, cpu->r[4]);
    }
L_0016a858:;
    {
        wr32(cpu->r[5] + + 0x608u, cpu->r[4]);
    }
L_0016a85c:;
    {
        wr32(cpu->r[5] + + 0x620u, cpu->r[4]);
    }
L_0016a860:;
    {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[4]);
    }
L_0016a864:;
    {
        wr32(cpu->r[5] + + 0x60cu, cpu->r[4]);
    }
L_0016a868:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_0016a86c:;
    {
        vfp_vabs(cpu, 9, 9);
    }
L_0016a870:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_0016a874:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[4]);
    }
L_0016a878:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xe8u);
    }
L_0016a87c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0016a880:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_0016a884:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a888:;
    {
        vfp_vmul(cpu, 9, 9, 12);
    }
L_0016a88c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000064u, 1, 1);
    }
L_0016a890:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0016a894:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[9]);
        }
    }
L_0016a898:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_0016a89c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016a8a0:;
    {
        cpu->r[3] = 0x000016a4u;
    }
L_0016a8a4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xc0u);
    }
L_0016a8a8:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xc2u);
    }
L_0016a8ac:;
    {
        wr32(cpu->r[5] + + 0x378u, cpu->r[0]);
    }
L_0016a8b0:;
    {
        cpu->r[0] = 0x00001684u;
    }
L_0016a8b4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[4]);
    }
L_0016a8b8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1b4u);
    }
L_0016a8bc:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x108u);
    }
L_0016a8c0:;
    {
        vfp_vabs(cpu, 10, 10);
    }
L_0016a8c4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_0016a8c8:;
    {
        cpu->r[3] = 0x000016acu;
    }
L_0016a8cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1b8u);
    }
L_0016a8d0:;
    {
        cpu->r[1] = 0x000016a8u;
    }
L_0016a8d4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_0016a8d8:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0016a8dc:;
    {
        vfp_vmul(cpu, 10, 10, 12);
    }
L_0016a8e0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_0016a8e4:;
    {
        cpu->r[0] = 0x000016e8u;
    }
L_0016a8e8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0016a8ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016a8f0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[4]);
    }
L_0016a8f4:;
    {
        cpu->r[0] = 0x000016f8u;
    }
L_0016a8f8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0016a8fc:;
    {
        cpu->r[0] = 0x00001690u;
    }
L_0016a900:;
    {
        cpu->r[12] = 0x00100000u;
    }
L_0016a904:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016a908:;
    {
        cpu->r[0] = 0x00001654u;
    }
L_0016a90c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0016a910:;
    {
        cpu->r[0] = 0x000016b0u;
    }
L_0016a914:;
    {
        cpu->r[12] = 0x0000171cu;
    }
L_0016a918:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a91c:;
    {
        cpu->r[0] = 0x000016f0u;
    }
L_0016a920:;
    {
        vfp_vmul(cpu, 12, 9, 14);
    }
L_0016a924:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a928:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0016a92c:;
    {
        wr32(cpu->r[5] + + 0x1d0u, cpu->r[0]);
    }
L_0016a930:;
    {
        cpu->r[0] = 0x00000fffu;
    }
L_0016a934:;
    {
        wr32(cpu->r[5] + + 0x1d8u, cpu->r[0]);
    }
L_0016a938:;
    {
        cpu->r[0] = 0x00001738u;
    }
L_0016a93c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a940:;
    {
        cpu->r[0] = 0x00001744u;
    }
L_0016a944:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a948:;
    {
        cpu->r[0] = 0x00001748u;
    }
L_0016a94c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a950:;
    {
        cpu->r[0] = 0x00001750u;
    }
L_0016a954:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a958:;
    {
        cpu->r[0] = 0x0000174cu;
    }
L_0016a95c:;
    {
        vfp_vmul(cpu, 13, 10, 14);
    }
L_0016a960:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016a964:;
    {
        cpu->r[0] = 0x00001720u;
    }
L_0016a968:;
    {
        goto L_0016a998;
    }
L_0016a998:;
    {
        wr32(cpu->r[5] + + 0x350u, cpu->r[2]);
    }
L_0016a99c:;
    {
        cpu->r[2] = 0x000016e4u;
    }
L_0016a9a0:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xc4u);
    }
L_0016a9a4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0016a9a8:;
    {
        cpu->r[2] = 0x00001754u;
    }
L_0016a9ac:;
    {
        wr32(cpu->r[5] + + 0x1c4u, cpu->r[3]);
    }
L_0016a9b0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016a9b4:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_0016a9b8:;
    {
        wr32(cpu->r[5] + + 0x34cu, cpu->r[3]);
    }
L_0016a9bc:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_0016a9c0:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_0016a9c4:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016a9c8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[9]);
    }
L_0016a9cc:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xd0u);
    }
L_0016a9d0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0016a9d4:;
    {
        cpu->r[9] = rd16(cpu->r[13] + + 0xecu);
    }
L_0016a9d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0016a9dc:;
    {
        cpu->r[9] = rd16(cpu->r[13] + + 0xeeu);
    }
L_0016a9e0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[9]);
    }
L_0016a9e4:;
    {
        cpu->r[9] = rd16(cpu->r[13] + + 0xf0u);
    }
L_0016a9e8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[9]);
    }
L_0016a9ec:;
    {
        cpu->r[9] = rd16(cpu->r[13] + + 0xf2u);
    }
L_0016a9f0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_0016a9f4:;
    {
        cpu->r[9] = 0x00001700u;
    }
L_0016a9f8:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_0016a9fc:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016aa00:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[10]);
    }
L_0016aa04:;
    {
        cpu->r[10] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xc6u);
    }
L_0016aa08:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,11);
    }
L_0016aa0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016aa10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_0016aa14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x000000ffu, 0, 0);
    }
L_0016aa18:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0016aa1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[4];
        }
    }
L_0016aa20:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xc8u);
    }
L_0016aa24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 8u, &shc), 0, 0);
    }
L_0016aa28:;
    {
        cpu->r[12] = 0x00001734u;
    }
L_0016aa2c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016aa30:;
    {
        cpu->r[0] = 0x000016fcu;
    }
L_0016aa34:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xccu);
    }
L_0016aa38:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_0016aa3c:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[11]);
    }
L_0016aa40:;
    {
        cpu->r[9] = 0x00001704u;
    }
L_0016aa44:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xcau);
    }
L_0016aa48:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[10]);
    }
L_0016aa4c:;
    {
        cpu->r[10] = 0x00001708u;
    }
L_0016aa50:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0xceu);
    }
L_0016aa54:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[4]);
    }
L_0016aa58:;
    {
        cpu->r[4] = 0x0000170cu;
    }
L_0016aa5c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016aa60:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[14]);
    }
L_0016aa64:;
    {
        cpu->r[14] = 0x00001710u;
    }
L_0016aa68:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016aa6c:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[12]);
    }
L_0016aa70:;
    {
        cpu->r[12] = 0x00001714u;
    }
L_0016aa74:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016aa78:;
    {
        cpu->r[0] = 0x00001718u;
    }
L_0016aa7c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[10]);
    }
L_0016aa80:;
    {
        cpu->r[0] = 0x00001724u;
    }
L_0016aa84:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[11]);
    }
L_0016aa88:;
    {
        cpu->r[0] = 0x00001728u;
    }
L_0016aa8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016aa90:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016aa94:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0016aa98:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_0016aa9c:;
    {
        cpu->r[0] = 0x0000172cu;
    }
L_0016aaa0:;
    {
        cpu->r[12] = 0x00001774u;
    }
L_0016aaa4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_0016aaa8:;
    {
        cpu->r[0] = 0x00001730u;
    }
L_0016aaac:;
    {
        cpu->r[14] = 0x00000004u;
    }
L_0016aab0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[4]);
    }
L_0016aab4:;
    {
        cpu->r[0] = 0x000016ecu;
    }
L_0016aab8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016aabc:;
    {
        cpu->r[0] = 0x0000165cu;
    }
L_0016aac0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016aac4:;
    {
        cpu->r[0] = 0x000016f4u;
    }
L_0016aac8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016aacc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0016aad0:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_0016aad4:;
    {
        cpu->r[12] = 0x00001778u;
    }
L_0016aad8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016aadc:;
    {
        cpu->r[12] = 0x00001804u;
    }
L_0016aae0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_0016aae4:;
    {
        cpu->r[0] = 0x0000177cu;
    }
L_0016aae8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016aaec:;
    {
        cpu->r[12] = 0x000016b8u;
    }
L_0016aaf0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016aaf4:;
    {
        cpu->r[0] = 0x00001760u;
    }
L_0016aaf8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016aafc:;
    {
        cpu->r[12] = 0x000016bcu;
    }
L_0016ab00:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016ab04:;
    {
        cpu->r[0] = 0x00001764u;
    }
L_0016ab08:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab0c:;
    {
        cpu->r[12] = 0x0000175cu;
    }
L_0016ab10:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016ab14:;
    {
        cpu->r[0] = 0x00001768u;
    }
L_0016ab18:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab1c:;
    {
        cpu->r[12] = 0x000017f4u;
    }
L_0016ab20:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016ab24:;
    {
        cpu->r[0] = 0x00001758u;
    }
L_0016ab28:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab2c:;
    {
        cpu->r[12] = 0x000017f8u;
    }
L_0016ab30:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016ab34:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab38:;
    {
        cpu->r[12] = 0x000017fcu;
    }
L_0016ab3c:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x30u);
    }
L_0016ab40:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab44:;
    {
        cpu->r[12] = 0x00001800u;
    }
L_0016ab48:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016ab4c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0016ab50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ac50;
        }
    }
L_0016ab54:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_0016ab58:;
    {
        cpu->r[12] = 0x000017b4u;
    }
L_0016ab5c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab60:;
    {
        cpu->r[3] = 0x00001798u;
    }
L_0016ab64:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab68:;
    {
        cpu->r[3] = 0x0000179cu;
    }
L_0016ab6c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab70:;
    {
        cpu->r[3] = 0x000017a0u;
    }
L_0016ab74:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab78:;
    {
        cpu->r[3] = 0x000017a4u;
    }
L_0016ab7c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab80:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_0016ab84:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016ab88:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0016ab8c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[1]);
    }
L_0016ab90:;
    {
        cpu->r[1] = 0x000017c0u;
    }
L_0016ab94:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_0016ab98:;
    {
        cpu->r[1] = 0x00001c70u;
    }
L_0016ab9c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016aba0:;
    {
        cpu->r[2] = 0x000017d8u;
    }
L_0016aba4:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016aba8:;
    {
        cpu->r[1] = 0x0000181cu;
    }
L_0016abac:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_0016abb0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_0016abb4:;
    {
        cpu->r[1] = 0x000017b0u;
    }
L_0016abb8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016abbc:;
    {
        cpu->r[3] = 0x000017e0u;
    }
L_0016abc0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abc4:;
    {
        cpu->r[3] = 0x000017e4u;
    }
L_0016abc8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abcc:;
    {
        cpu->r[3] = 0x000017e8u;
    }
L_0016abd0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abd4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0016abd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0016abdc:;
    {
        cpu->r[3] = 0x000017d9u;
    }
L_0016abe0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abe4:;
    {
        cpu->r[3] = 0x000017dau;
    }
L_0016abe8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abec:;
    {
        cpu->r[3] = 0x000017dbu;
    }
L_0016abf0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abf4:;
    {
        cpu->r[3] = 0x000017dcu;
    }
L_0016abf8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016abfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016b24c;
        }
    }
L_0016ac00:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x34u);
    }
L_0016ac04:;
    {
        cpu->r[2] = 0x000017ccu;
    }
L_0016ac08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0016ac0c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016ac10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016ac14:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_0016ac18:;
    {
        cpu->r[1] = 0x000017d0u;
    }
L_0016ac1c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x38u);
    }
L_0016ac20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0016ac24:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_0016ac28:;
    {
        cpu->r[1] = 0x000017d4u;
    }
L_0016ac2c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x34u);
    }
L_0016ac30:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_0016ac34:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x298u);
    }
L_0016ac38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 6u, &shc), 0, 0);
    }
L_0016ac3c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0016ac40:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[8] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016ac44:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016ac48:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_0016ac4c:;
    {
        wr32(cpu->r[2] + + 0x298u, cpu->r[3]);
    }
L_0016ac50:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x24u);
    }
L_0016ac54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ac58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_0016ac5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000017ecu;
        }
    }
L_0016ac60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1b0u);
        }
    }
L_0016ac64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000017ecu;
        }
    }
L_0016ac68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_0016ac6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016ac70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_0016ac74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] | 0x00100000u; cpu->r[2] = v;
        }
    }
L_0016ac78:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
        }
    }
L_0016ac7c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016ac80:;
    {
        cpu->r[1] = 0x00001c6cu;
    }
L_0016ac84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58cu);
    }
L_0016ac88:;
    {
        cpu->r[2] = 0x000017f0u;
    }
L_0016ac8c:;
    {
        add_flags(cpu, cpu->r[3], 0x0000007bu, 0, 1);
    }
L_0016ac90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ac94:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016ac98:;
    {
        cpu->r[1] = 0x00001c64u;
    }
L_0016ac9c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016aca0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016aca4:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_0016aca8:;
    {
        cpu->r[1] = 0x00001c40u;
    }
L_0016acac:;
    {
        wr32(cpu->r[5] + + 0x344u, cpu->r[2]);
    }
L_0016acb0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acb4:;
    {
        cpu->r[1] = 0x00001c44u;
    }
L_0016acb8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acbc:;
    {
        cpu->r[1] = 0x00001c48u;
    }
L_0016acc0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acc4:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_0016acc8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016accc:;
    {
        cpu->r[1] = 0x00001c50u;
    }
L_0016acd0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acd4:;
    {
        cpu->r[1] = 0x00001c54u;
    }
L_0016acd8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acdc:;
    {
        cpu->r[1] = 0x00001c58u;
    }
L_0016ace0:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016ace4:;
    {
        cpu->r[1] = 0x00001c5cu;
    }
L_0016ace8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acec:;
    {
        cpu->r[1] = 0x00001c60u;
    }
L_0016acf0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acf4:;
    {
        cpu->r[1] = 0x00001c68u;
    }
L_0016acf8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016acfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ad30;
        }
    }
L_0016ad00:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016ad04:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016ad08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016ad0c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_0016ad10:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0016ad14:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016ad18:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016ad1c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016ad20:;
    {
        cpu->r[3] = 0x000010dcu;
    }
L_0016ad24:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016ad28:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_0016ad2c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016ad30:;
    {
        cpu->r[0] = 0x00001c74u;
    }
L_0016ad34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016ad38:;
    {
        cpu->r[14] = 0x000003e7u;
    }
L_0016ad3c:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x30u);
    }
L_0016ad40:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad44:;
    {
        cpu->r[0] = 0x000017a8u;
    }
L_0016ad48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ad4c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0016ad50:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_0016ad54:;
    {
        cpu->r[0] = 0x00001c78u;
    }
L_0016ad58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000017b0u;
        }
    }
L_0016ad5c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad60:;
    {
        cpu->r[0] = 0x00001c80u;
    }
L_0016ad64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_0016ad68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001c70u;
        }
    }
L_0016ad6c:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad70:;
    {
        cpu->r[0] = 0x00001c8cu;
    }
L_0016ad74:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad78:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_0016ad7c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ad80:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0016ad84:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad88:;
    {
        cpu->r[0] = 0x00001c7cu;
    }
L_0016ad8c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0016ad90:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad94:;
    {
        cpu->r[0] = 0x00001c88u;
    }
L_0016ad98:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ad9c:;
    {
        cpu->r[0] = 0x00001ca0u;
    }
L_0016ada0:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016ada4:;
    {
        cpu->r[0] = 0x00001ca4u;
    }
L_0016ada8:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016adac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0016adb0:;
    {
        wr32(cpu->r[3] + + 0x54cu, cpu->r[12]);
    }
L_0016adb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0016adb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0016adbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016adac;
        }
    }
L_0016adc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_0016adc4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00001cc0u, 0, 0);
    }
L_0016adc8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016adcc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0016add0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016add4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00001cc0u, 0, 0);
    }
L_0016add8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000014u, 0, 0);
    }
L_0016addc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0016ade0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00001cc0u, 0, 0);
    }
L_0016ade4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0016ade8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0016adec:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016adf0:;
    {
        cpu->r[8] = 0x00001c94u;
    }
L_0016adf4:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016adf8:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[4]);
    }
L_0016adfc:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016ae00:;
    {
        cpu->r[2] = 0x000018d8u;
    }
L_0016ae04:;
    {
        cpu->r[1] = 0x00000100u;
    }
L_0016ae08:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_0016ae0c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016ae10:;
    {
        cpu->r[14] = 0x00001ce0u;
    }
L_0016ae14:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[4]);
    }
L_0016ae18:;
    {
        cpu->r[14] = 0x00001ce4u;
    }
L_0016ae1c:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[4]);
    }
L_0016ae20:;
    {
        cpu->r[14] = 0x00001ce8u;
    }
L_0016ae24:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016ae28:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[4]);
    }
L_0016ae2c:;
    {
        cpu->r[2] = 0x00001cedu;
    }
L_0016ae30:;
    {
        cpu->r[14] = 0x00001cecu;
    }
L_0016ae34:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[4]);
    }
L_0016ae38:;
    {
        wr8(cpu->r[5] + cpu->r[14], cpu->r[4]);
    }
L_0016ae3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0016ae40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0016ae44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001c80u, 0, 0);
    }
L_0016ae48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0016ae4c:;
    {
        wr32(cpu->r[2] + + 0x28u, cpu->r[12]);
    }
L_0016ae50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ae3c;
        }
    }
L_0016ae54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ae58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016ae5c:;
    {
        wr32(cpu->r[5] + + 0x570u, cpu->r[3]);
    }
L_0016ae60:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0016ae64:;
    {
        wr32(cpu->r[5] + + 0x56cu, cpu->r[3]);
    }
L_0016ae68:;
    {
        wr32(cpu->r[5] + + 0x568u, cpu->r[3]);
    }
L_0016ae6c:;
    {
        wr32(cpu->r[5] + + 0x574u, cpu->r[3]);
    }
L_0016ae70:;
    {
        cpu->r[14] = 0x0016ae74u; fn_0015da0c(cpu);
    }
L_0016ae74:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016ae78:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_0016ae7c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0016ae80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016ae84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ae88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016aec0;
        }
    }
L_0016ae8c:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_0016ae90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016ae94:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_0016ae98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016ae9c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016aea0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0016aea4:;
    {
        cpu->r[14] = 0x0016aea8u; fn_00177118(cpu);
    }
L_0016aea8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0016aeac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016aeb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016aeb4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016aeb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0016aebc:;
    {
        cpu->r[14] = 0x0016aec0u; fn_001745cc(cpu);
    }
L_0016aec0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016aec4:;
    {
        cpu->r[2] = 0x000018ccu;
    }
L_0016aec8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0016aecc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016aed4u + + 0x3b4u);
    }
L_0016aed0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016aed4:;
    {
        cpu->r[2] = 0x000018c8u;
    }
L_0016aed8:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_0016aedc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016aee0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016aee4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016aee8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0016aeec:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016aef0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0016aef4:;
    {
        cpu->r[14] = 0x0016aef8u; fn_000f3430(cpu);
    }
L_0016aef8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016aefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016aff8;
        }
    }
L_0016af00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_0016af04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016af08u)) return;
    }
L_0016af08:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016af0c:;
    {
        cpu->r[11] = 0x0000851fu;
    }
L_0016af10:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016af14:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x51ebu << 16);
    }
L_0016af18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0016af1c:;
    {
        cpu->r[10] = 0x000060b7u;
    }
L_0016af20:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0016af24:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_0016af28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016af2c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xb60bu << 16);
    }
L_0016af30:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0016af34:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_0016af38:;
    {
        cpu->r[0] = rd16(cpu->r[4]);
    }
L_0016af3c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x418u);
    }
L_0016af40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016af44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016af48:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0016af4c:;
    {
        cpu->r[14] = 0x0016af50u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016af50:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x8u);
    }
L_0016af54:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0x2u);
    }
L_0016af58:;
    {
        cpu->r[12] = rd16(cpu->r[4] + + 0x4u);
    }
L_0016af5c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 11u, &shc); cpu->r[3] = v;
    }
L_0016af60:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x6u);
    }
L_0016af64:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 12u, &shc); cpu->r[2] = v;
    }
L_0016af68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000au, 0, 0);
    }
L_0016af6c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[10] * (int64_t)(int32_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_0016af70:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0016af74:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[2]; cpu->r[6] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0016af78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0016af7c:;
    {
        wr32(cpu->r[8] + + 0x2a0u, cpu->r[12]);
    }
L_0016af80:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 9u, &shc); cpu->r[3] = v;
    }
L_0016af84:;
    {
        wr32(cpu->r[8] + + 0x2a4u, cpu->r[1]);
    }
L_0016af88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016af8c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 5u, &shc); cpu->r[2] = v;
    }
L_0016af90:;
    {
        wr32(cpu->r[8] + + 0x29cu, cpu->r[2]);
    }
L_0016af94:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0016af98:;
    {
        wr32(cpu->r[8] + + 0x2a8u, cpu->r[3]);
    }
L_0016af9c:;
    {
        wr32(cpu->r[8] + + 0x298u, cpu->r[0]);
    }
L_0016afa0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000014u, 0, 0);
    }
L_0016afa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016af38;
        }
    }
L_0016afa8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016afac:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016afb0:;
    {
        goto L_0016a684;
    }
L_0016afb4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016afb8:;
    {
        cpu->r[14] = 0x0016afbcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016afbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016afc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016a008;
        }
    }
L_0016afc4:;
    {
        cpu->r[4] = rd32(0x0016afccu + + 0x2c4u);
    }
L_0016afc8:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_0016afcc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016afd0:;
    {
        cpu->r[14] = 0x0016afd4u; fn_00189f48(cpu);
    }
L_0016afd4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016afd8:;
    {
        cpu->r[14] = 0x0016afdcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016afdc:;
    {
        cpu->r[3] = rd32(0x0016afe4u + + 0x2b0u);
    }
L_0016afe0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016afe4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0016afe8:;
    {
        cpu->r[3] = rd32(0x0016aff0u + + 0x2a8u);
    }
L_0016afec:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0016aff0:;
    {
        cpu->r[14] = 0x0016aff4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0016aff4:;
    {
        goto L_0016a00c;
    }
L_0016aff8:;
    {
        cpu->r[0] = 0x00000140u;
    }
L_0016affc:;
    {
        cpu->r[14] = 0x0016b000u; fn_0018ba6c(cpu);
    }
L_0016b000:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016b004:;
    {
        cpu->r[14] = 0x0016b008u; fn_0018ed6c(cpu);
    }
L_0016b008:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_0016b00c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016b010:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[7]);
    }
L_0016b014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016af00;
        }
    }
L_0016b018:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_0016b01c:;
    {
        cpu->r[14] = 0x0016b020u; fn_0018ba6c(cpu);
    }
L_0016b020:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016b024:;
    {
        cpu->r[14] = 0x0016b028u; fn_0018ea10(cpu);
    }
L_0016b028:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016b02c:;
    {
        cpu->r[2] = 0x00001e34u;
    }
L_0016b030:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0016b034:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0016b038:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_0016b03c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x444u);
    }
L_0016b040:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[6]);
    }
L_0016b044:;
    {
        uint32_t v = cpu->r[2] * cpu->r[14] + cpu->r[3]; cpu->r[3] = v;
    }
L_0016b048:;
    {
        cpu->r[2] = 0x00001e44u;
    }
L_0016b04c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_0016b050:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000030u, 1, 0);
    }
L_0016b054:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[7]);
    }
L_0016b058:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0016b05c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0016b060:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0016b32c;
        case 1: goto L_0016b338;
        case 2: goto L_0016b344;
        case 3: goto L_0016b350;
        case 4: goto L_0016b35c;
        case 5: goto L_0016b314;
        default: guest_unimplemented(cpu, 0x0016b060u); return; }
        }
    }
L_0016b064:;
    {
        goto L_0016b320;
    }
L_0016b080:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016b084:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0016b088:;
    {
        cpu->r[14] = 0x0016b08cu; fn_00189870(cpu);
    }
L_0016b08c:;
    {
        goto L_0016af00;
    }
L_0016b090:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0016b094:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016b098:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1acu);
    }
L_0016b09c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000003d4u, 0, 0);
    }
L_0016b0a0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016b0a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_0016b0a8:;
    {
        wr32(cpu->r[5] + + 0x1b0u, cpu->r[3]);
    }
L_0016b0ac:;
    {
        cpu->r[14] = 0x0016b0b0u; fn_00180634(cpu);
    }
L_0016b0b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0016b0b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016b0b8:;
    {
        wr32(cpu->r[5] + + 0x1b4u, cpu->r[0]);
    }
L_0016b0bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1acu);
    }
L_0016b0c0:;
    {
        cpu->r[14] = 0x0016b0c4u; fn_001805dc(cpu);
    }
L_0016b0c4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_0016b0c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b0cc:;
    {
        wr32(cpu->r[5] + + 0x37cu, cpu->r[2]);
    }
L_0016b0d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016b0d8u + + 0x1b4u);
    }
L_0016b0d4:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0016b0d8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016b0dc:;
    {
        wr32(cpu->r[5] + + 0x1b8u, cpu->r[0]);
    }
L_0016b0e0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016b0e4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b0e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_0016b0ec:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_0016b0f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b0f4:;
    {
        wr32(cpu->r[5] + + 0x480u, cpu->r[3]);
    }
L_0016b0f8:;
    {
        cpu->r[14] = 0x0016b100u;
    }
L_0016b0fc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016b100u)) return;
    }
L_0016b100:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b104:;
    {
        cpu->r[14] = 0x0016b108u; fn_00174970(cpu);
    }
L_0016b108:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016b10c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016b110:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0016b114:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_0016b118:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x3d8u);
    }
L_0016b11c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0016b120:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x000003c8u, 0, 0);
    }
L_0016b124:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016b128:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x3dcu);
    }
L_0016b12c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016b130:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x000003f8u, 0, 0);
    }
L_0016b134:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_0016b138:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016b13c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b140:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016b144:;
    {
        cpu->r[14] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0016b148:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000410u, 0, 0);
    }
L_0016b14c:;
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
L_0016b150:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0016b154:;
    {
        cpu->r[4] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0016b158:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016b15c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000400u, 0, 0);
    }
L_0016b160:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0016b164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0016b168:;
    {
        wr32(cpu->r[5] + + 0x404u, cpu->r[11]);
    }
L_0016b16c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b170:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0016b174:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_0016b178:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016b17c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0016b180:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016b184:;
    {
        wr32(cpu->r[5] + + 0x408u, cpu->r[12]);
    }
L_0016b188:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016b18c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0016b190:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0016b194:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016b198:;
    {
        wr32(cpu->r[5] + + 0x40cu, cpu->r[0]);
    }
L_0016b19c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0016b1a0:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b1a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016a5c4;
        }
    }
L_0016b1a8:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_0016b1ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016b1b0:;
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
L_0016b1b4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0016b1b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000010cu, 0, 0);
    }
L_0016b1bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000204u, 0, 0);
    }
L_0016b1c0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b1c4:;
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
L_0016b1c8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0016b1cc:;
    {
        goto L_0016a5c4;
    }
L_0016b1d0:;
    {
        cpu->r[1] = rd32(0x0016b1d8u + + 0xc4u);
    }
L_0016b1d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016b1d8:;
    {
        cpu->r[12] = rd32(0x0016b1e0u + + 0xc0u);
    }
L_0016b1dc:;
    {
        cpu->r[14] = 0x0000030cu;
    }
L_0016b1e0:;
    {
        cpu->r[2] = rd32(0x0016b1e8u + + 0xbcu);
    }
L_0016b1e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016b1ecu, cpu->r[1], 0, 0);
    }
L_0016b1e8:;
    {
        cpu->r[3] = rd32(0x0016b1f0u + + 0xb8u);
    }
L_0016b1ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016b1f4u, cpu->r[12], 0, 0);
    }
L_0016b1f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016b1f8u, cpu->r[2], 0, 0);
    }
L_0016b1f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000168u, 0, 0);
    }
L_0016b1f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016b200u, cpu->r[3], 0, 0);
    }
L_0016b1fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016b200:;
    {
        cpu->r[14] = 0x0016b204u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016b204:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0016b208:;
    {
        goto L_0016a258;
    }
L_0016b20c:;
    {
        cpu->r[1] = rd32(0x0016b214u + + 0x98u);
    }
L_0016b210:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016b214:;
    {
        cpu->r[12] = rd32(0x0016b21cu + + 0x94u);
    }
L_0016b218:;
    {
        cpu->r[14] = 0x0000035eu;
    }
L_0016b21c:;
    {
        cpu->r[2] = rd32(0x0016b224u + + 0x90u);
    }
L_0016b220:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016b228u, cpu->r[1], 0, 0);
    }
L_0016b224:;
    {
        cpu->r[3] = rd32(0x0016b22cu + + 0x8cu);
    }
L_0016b228:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016b230u, cpu->r[12], 0, 0);
    }
L_0016b22c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016b234u, cpu->r[2], 0, 0);
    }
L_0016b230:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000168u, 0, 0);
    }
L_0016b234:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016b23cu, cpu->r[3], 0, 0);
    }
L_0016b238:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016b23c:;
    {
        cpu->r[14] = 0x0016b240u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016b240:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x348u);
    }
L_0016b244:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0016b248:;
    {
        goto L_0016a470;
    }
L_0016b24c:;
    {
        cpu->r[1] = rd32(0x0016b254u + + 0x68u);
    }
L_0016b250:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016b254:;
    {
        cpu->r[12] = rd32(0x0016b25cu + + 0x64u);
    }
L_0016b258:;
    {
        cpu->r[14] = 0x00000487u;
    }
L_0016b25c:;
    {
        cpu->r[2] = rd32(0x0016b264u + + 0x60u);
    }
L_0016b260:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016b268u, cpu->r[1], 0, 0);
    }
L_0016b264:;
    {
        cpu->r[3] = rd32(0x0016b26cu + + 0x5cu);
    }
L_0016b268:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016b270u, cpu->r[12], 0, 0);
    }
L_0016b26c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016b274u, cpu->r[2], 0, 0);
    }
L_0016b270:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000168u, 0, 0);
    }
L_0016b274:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016b27cu, cpu->r[3], 0, 0);
    }
L_0016b278:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016b27c:;
    {
        cpu->r[14] = 0x0016b280u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016b280:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x348u);
    }
L_0016b284:;
    {
        goto L_0016ac00;
    }
L_0016b2dc:;
    {
        cpu->r[1] = rd32(0x0016b2e4u + - 0x18u);
    }
L_0016b2e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_0016b2e4:;
    {
        cpu->r[12] = rd32(0x0016b2ecu + - 0x1cu);
    }
L_0016b2e8:;
    {
        cpu->r[14] = 0x000002b6u;
    }
L_0016b2ec:;
    {
        cpu->r[2] = rd32(0x0016b2f4u + - 0x20u);
    }
L_0016b2f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016b2f8u, cpu->r[1], 0, 0);
    }
L_0016b2f4:;
    {
        cpu->r[3] = rd32(0x0016b2fcu + - 0x24u);
    }
L_0016b2f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016b300u, cpu->r[12], 0, 0);
    }
L_0016b2fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016b304u, cpu->r[2], 0, 0);
    }
L_0016b300:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000168u, 0, 0);
    }
L_0016b304:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016b30cu, cpu->r[3], 0, 0);
    }
L_0016b308:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016b30c:;
    {
        cpu->r[14] = 0x0016b310u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016b310:;
    {
        goto L_0016a02c;
    }
L_0016b314:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b318:;
    {
        cpu->r[14] = 0x0016b31cu; fn_0015ee44(cpu);
    }
L_0016b31c:;
    {
        goto L_0016af00;
    }
L_0016b320:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b324:;
    {
        cpu->r[14] = 0x0016b328u; fn_0015f844(cpu);
    }
L_0016b328:;
    {
        goto L_0016af00;
    }
L_0016b32c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b330:;
    {
        cpu->r[14] = 0x0016b334u; fn_001601f4(cpu);
    }
L_0016b334:;
    {
        goto L_0016af00;
    }
L_0016b338:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b33c:;
    {
        cpu->r[14] = 0x0016b340u; fn_0015febc(cpu);
    }
L_0016b340:;
    {
        goto L_0016af00;
    }
L_0016b344:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b348:;
    {
        cpu->r[14] = 0x0016b34cu; fn_0015fb8c(cpu);
    }
L_0016b34c:;
    {
        goto L_0016af00;
    }
L_0016b350:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b354:;
    {
        cpu->r[14] = 0x0016b358u; fn_0015f518(cpu);
    }
L_0016b358:;
    {
        goto L_0016af00;
    }
L_0016b35c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b360:;
    {
        cpu->r[14] = 0x0016b364u; fn_0015f1ac(cpu);
    }
L_0016b364:;
    {
        goto L_0016af00;
    }
}

/* _ZN4CCar16CheckForGripLostEv @ 0016b368 (arm) */
void fn_0016b368(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016b368:;
    {
        cpu->r[3] = 0x00001924u;
    }
L_0016b36c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b370:;
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
L_0016b374:;
    {
        cpu->r[4] = rd32(0x0016b37cu + + 0x320u);
    }
L_0016b378:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0016b37c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0016b380:;
    {
        cpu->r[3] = rd32(0x0016b388u + + 0x318u);
    }
L_0016b384:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016b38cu, cpu->r[4], 0, 0);
    }
L_0016b388:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0016b38c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016b390:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0016b394:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016b398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3b8;
        }
    }
L_0016b39c:;
    {
        cpu->r[7] = rd32(0x0016b3a4u + + 0x300u);
    }
L_0016b3a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016b3a4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xeu);
    }
L_0016b3a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016b3ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3ec;
        }
    }
L_0016b3b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0016b3b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016b3b8u)) return;
    }
L_0016b3b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016b3bc:;
    {
        cpu->r[14] = 0x0016b3c0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016b3c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b3c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b39c;
        }
    }
L_0016b3c8:;
    {
        cpu->r[7] = rd32(0x0016b3d0u + + 0x2d4u);
    }
L_0016b3cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016b3d0:;
    {
        cpu->r[14] = 0x0016b3d4u; fn_00094228(cpu);
    }
L_0016b3d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016b3d8:;
    {
        cpu->r[14] = 0x0016b3dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016b3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016b3e0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xeu);
    }
L_0016b3e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016b3e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b3ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b3f0:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016b3f4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016b3f8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0016b3fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016b400:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016b404:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016b408:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_0016b40c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0016b410:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016b448;
        }
    }
L_0016b414:;
    {
        cpu->r[1] = rd32(0x0016b41cu + + 0x28cu);
    }
L_0016b418:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016b41c:;
    {
        cpu->r[12] = rd32(0x0016b424u + + 0x288u);
    }
L_0016b420:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_0016b424:;
    {
        cpu->r[2] = rd32(0x0016b42cu + + 0x284u);
    }
L_0016b428:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016b430u, cpu->r[1], 0, 0);
    }
L_0016b42c:;
    {
        cpu->r[3] = rd32(0x0016b434u + + 0x280u);
    }
L_0016b430:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016b438u, cpu->r[12], 0, 0);
    }
L_0016b434:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016b43cu, cpu->r[2], 0, 0);
    }
L_0016b438:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000013cu, 0, 0);
    }
L_0016b43c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016b444u, cpu->r[3], 0, 0);
    }
L_0016b440:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016b444:;
    {
        cpu->r[14] = 0x0016b448u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016b448:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0016b44c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016b450:;
    {
        cpu->r[14] = 0x0016b454u; fn_00180c78(cpu);
    }
L_0016b454:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x525u);
    }
L_0016b458:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 0);
    }
L_0016b45c:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_0016b460:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016b464:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = rd8(cpu->r[5] + + 0x524u);
        }
    }
L_0016b468:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0016b5d4;
        }
    }
L_0016b46c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_0016b470:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
        }
    }
L_0016b474:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0016b478:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0016b47c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b494;
        }
    }
L_0016b480:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016b484:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001928u;
        }
    }
L_0016b488:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016b48c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016b490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3b0;
        }
    }
L_0016b494:;
    {
        cpu->r[10] = 0x00001928u;
    }
L_0016b498:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[10]);
    }
L_0016b49c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016b4a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3b0;
        }
    }
L_0016b4a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x374u);
    }
L_0016b4a8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016b4ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_0016b4b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0016b4b4:;
    {
        vfp_sync_flags(cpu);
    }
L_0016b4b8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0016b3b0;
        }
    }
L_0016b4bc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x620u);
    }
L_0016b4c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016b4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b4c8:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016b4cc:;
    {
        cpu->r[7] = 0x00000400u;
    }
L_0016b4d0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x8000u << 16);
    }
L_0016b4d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0016b4d8:;
    {
        uint32_t v = cpu->r[0] & cpu->r[7]; cpu->r[7] = v;
    }
L_0016b4dc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016b4e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b4e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0016b4e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b5f8;
        }
    }
L_0016b4ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016b4f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3b0;
        }
    }
L_0016b4f4:;
    {
        cpu->r[2] = 0x00001924u;
    }
L_0016b4f8:;
    {
        uint32_t v = cpu->r[0] | 0x80000000u; cpu->r[3] = v;
    }
L_0016b4fc:;
    {
        uint32_t v = cpu->r[3] | 0x00000400u; cpu->r[3] = v;
    }
L_0016b500:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016b504:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016b508:;
    {
        cpu->r[8] = rd32(0x0016b510u + + 0x1a8u);
    }
L_0016b50c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000154u, 0, 0);
    }
L_0016b510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016b514:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016b518:;
    {
        cpu->r[14] = 0x0016b51cu; fn_0009b4d0(cpu);
    }
L_0016b51c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0016b520:;
    {
        wr32(cpu->r[5] + + 0x638u, cpu->r[0]);
    }
L_0016b524:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0016b528:;
    {
        cpu->r[14] = 0x0016b52cu; fn_000960ec(cpu);
    }
L_0016b52c:;
    {
        cpu->r[14] = 0x0016b530u; fn_000929b8(cpu);
    }
L_0016b530:;
    {
        wr32(cpu->r[5] + + 0x63cu, cpu->r[0]);
    }
L_0016b534:;
    {
        cpu->r[14] = 0x0016b538u; fn_0009b4d0(cpu);
    }
L_0016b538:;
    {
        cpu->r[1] = 0x0000002au;
    }
L_0016b53c:;
    {
        wr32(cpu->r[5] + + 0x640u, cpu->r[0]);
    }
L_0016b540:;
    {
        cpu->r[0] = 0x00000015u;
    }
L_0016b544:;
    {
        cpu->r[14] = 0x0016b548u; fn_000965cc(cpu);
    }
L_0016b548:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[7]);
    }
L_0016b54c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0016b550:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0016b554:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_0016b558:;
    {
        wr32(cpu->r[5] + + 0x624u, cpu->r[3]);
    }
L_0016b55c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016b560:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0016b564:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016b568:;
    {
        wr32(cpu->r[5] + + 0x620u, cpu->r[0]);
    }
L_0016b56c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_0016b570:;
    {
        cpu->r[14] = 0x0016b574u; fn_000fd224(cpu);
    }
L_0016b574:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b578:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b57c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b580:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016b584:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_0016b588:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016b58c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b590:;
    {
        cpu->r[14] = 0x0016b594u; fn_000fd224(cpu);
    }
L_0016b594:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b5ac;
        }
    }
L_0016b59c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b5a0:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_0016b5a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016b5a8:;
    {
        cpu->r[14] = 0x0016b5acu; fn_000fd218(cpu);
    }
L_0016b5ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0016b5b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016b5b4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0016b5b8:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_0016b5bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016b5c0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016b5c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b5c8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016b5cc:;
    {
        cpu->r[14] = 0x0016b5d0u; fn_000fd248(cpu);
    }
L_0016b5d0:;
    {
        goto L_0016b3b0;
    }
L_0016b5d4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x524u);
    }
L_0016b5d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 0);
    }
L_0016b5dc:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_0016b5e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0016b5e4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00001928u;
        }
    }
L_0016b5e8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0016b5ec:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016b5f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0016b46c;
        }
    }
L_0016b5f4:;
    {
        goto L_0016b3b0;
    }
L_0016b5f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_0016b5fc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
        }
    }
L_0016b600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b604:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016b608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b3b0;
        }
    }
L_0016b60c:;
    {
        cpu->r[2] = 0x00001924u;
    }
L_0016b610:;
    {
        uint32_t v = cpu->r[0] | 0x80000000u; cpu->r[3] = v;
    }
L_0016b614:;
    {
        uint32_t v = cpu->r[3] | 0x00000400u; cpu->r[3] = v;
    }
L_0016b618:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016b61c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016b620:;
    {
        cpu->r[8] = rd32(0x0016b628u + + 0x90u);
    }
L_0016b624:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000154u, 1, 0);
    }
L_0016b628:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016b62c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016b630:;
    {
        cpu->r[14] = 0x0016b634u; fn_0009b4d0(cpu);
    }
L_0016b634:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0016b638:;
    {
        wr32(cpu->r[5] + + 0x638u, cpu->r[0]);
    }
L_0016b63c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0016b640:;
    {
        cpu->r[14] = 0x0016b644u; fn_000960ec(cpu);
    }
L_0016b644:;
    {
        cpu->r[14] = 0x0016b648u; fn_000929b8(cpu);
    }
L_0016b648:;
    {
        wr32(cpu->r[5] + + 0x63cu, cpu->r[0]);
    }
L_0016b64c:;
    {
        cpu->r[14] = 0x0016b650u; fn_0009b4d0(cpu);
    }
L_0016b650:;
    {
        cpu->r[1] = 0x0000002au;
    }
L_0016b654:;
    {
        wr32(cpu->r[5] + + 0x640u, cpu->r[0]);
    }
L_0016b658:;
    {
        cpu->r[0] = 0x00000015u;
    }
L_0016b65c:;
    {
        cpu->r[14] = 0x0016b660u; fn_000965cc(cpu);
    }
L_0016b660:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[6]);
    }
L_0016b664:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0016b668:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016b66c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_0016b670:;
    {
        wr32(cpu->r[5] + + 0x624u, cpu->r[3]);
    }
L_0016b674:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0016b678:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0016b67c:;
    {
        wr32(cpu->r[5] + + 0x620u, cpu->r[0]);
    }
L_0016b680:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_0016b684:;
    {
        cpu->r[14] = 0x0016b688u; fn_000fd224(cpu);
    }
L_0016b688:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b68c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b3b0;
        }
    }
L_0016b690:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b694:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0016b698:;
    {
        goto L_0016b584;
    }
}

/* _ZN4CCar17playSoundCallbackEibff @ 0016b6bc (arm) */
void fn_0016b6bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016b6bc:;
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
L_0016b6c0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016b6c4:;
    {
        cpu->r[4] = rd32(0x0016b6ccu + + 0x110u);
    }
L_0016b6c8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_0016b6cc:;
    {
        cpu->r[5] = rd32(0x0016b6d4u + + 0x10cu);
    }
L_0016b6d0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0016b6d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016b6dcu, cpu->r[4], 0, 0);
    }
L_0016b6d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0016b6dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016b6e0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016b6e4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016b6e8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0016b6ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016b6f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b78c;
        }
    }
L_0016b6f4:;
    {
        cpu->r[10] = rd32(0x0016b6fcu + + 0xe8u);
    }
L_0016b6f8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016b6fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016b700:;
    {
        cpu->r[14] = 0x0016b704u; fn_00093f98(cpu);
    }
L_0016b704:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016b708:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0016b70c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016b710:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016b714:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016b718:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016b720u + + 0xb8u);
    }
L_0016b71c:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0016b720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b7b4;
        }
    }
L_0016b724:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016b728:;
    {
        cpu->r[14] = 0x0016b72cu; fn_00093f88(cpu);
    }
L_0016b72c:;
    {
        cpu->r[14] = rd32(0x0016b734u + + 0xb4u);
    }
L_0016b730:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016b734:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0016b738:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0016b73c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0016b740:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_0016b744:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0016b748:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x490u);
    }
L_0016b74c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_0016b750:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0016b754:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0016b758:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0016b75c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016b760:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016b764:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016b76cu + + 0x6cu);
    }
L_0016b768:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_0016b76c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0016b770:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_0016b774:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0016b778:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016b77c:;
    {
        cpu->r[14] = 0x0016b780u; fn_0018e570(cpu);
    }
L_0016b780:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0016b784:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016b788:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016b78cu)) return;
    }
L_0016b78c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016b790:;
    {
        cpu->r[14] = 0x0016b794u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016b794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b6f4;
        }
    }
L_0016b79c:;
    {
        cpu->r[10] = rd32(0x0016b7a4u + + 0x40u);
    }
L_0016b7a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016b7a4:;
    {
        cpu->r[14] = 0x0016b7a8u; fn_00094228(cpu);
    }
L_0016b7a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016b7ac:;
    {
        cpu->r[14] = 0x0016b7b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016b7b0:;
    {
        goto L_0016b6f8;
    }
L_0016b7b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b7b8:;
    {
        cpu->r[14] = 0x0016b7bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016b7bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b7c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b724;
        }
    }
L_0016b7c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016b7c8:;
    {
        cpu->r[14] = 0x0016b7ccu; fn_00094228(cpu);
    }
L_0016b7cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b7d0:;
    {
        cpu->r[14] = 0x0016b7d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016b7d4:;
    {
        goto L_0016b724;
    }
}

/* _ZN4CCar23UpdateCarPositionSoundsEv @ 0016b7ec (arm) */
void fn_0016b7ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016b7ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016b7f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0016b7f4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0016b7f8:;
    {
        cpu->r[14] = 0x0016b7fcu; fn_0015d920(cpu);
    }
L_0016b7fc:;
    {
        cpu->r[4] = rd32(0x0016b804u + + 0x224u);
    }
L_0016b800:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016b808u, cpu->r[4], 0, 0);
    }
L_0016b804:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b808:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b8a8;
        }
    }
L_0016b80c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b810:;
    {
        cpu->r[14] = 0x0016b814u; fn_0015d920(cpu);
    }
L_0016b814:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b8a0;
        }
    }
L_0016b81c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_0016b820:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0016b824:;
    {
        vfp_sync_flags(cpu);
    }
L_0016b828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b8a0;
        }
    }
L_0016b82c:;
    {
        cpu->r[5] = rd32(0x0016b834u + + 0x1f8u);
    }
L_0016b830:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b834:;
    {
        cpu->r[1] = 0x00000079u;
    }
L_0016b838:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016b83c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016b840:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0016b844:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b848:;
    {
        cpu->r[14] = 0x0016b84cu; fn_000fd224(cpu);
    }
L_0016b84c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b864;
        }
    }
L_0016b854:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0016b858:;
    {
        cpu->r[1] = 0x00000079u;
    }
L_0016b85c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016b860:;
    {
        cpu->r[14] = 0x0016b864u; fn_000fd218(cpu);
    }
L_0016b864:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016b868:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b86c:;
    {
        cpu->r[1] = 0x0000007au;
    }
L_0016b870:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016b874:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0016b878:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b87c:;
    {
        cpu->r[14] = 0x0016b880u; fn_000fd224(cpu);
    }
L_0016b880:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b8a0;
        }
    }
L_0016b888:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016b88c:;
    {
        cpu->r[1] = 0x0000007au;
    }
L_0016b890:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016b894:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016b898:;
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
L_0016b89c:;
    {
        return fn_000fd218(cpu);
    }
L_0016b8a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016b8a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016b8a8u)) return;
    }
L_0016b8a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_0016b8ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0016b8b0:;
    {
        vfp_sync_flags(cpu);
    }
L_0016b8b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b80c;
        }
    }
L_0016b8b8:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016b8bc:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016b8c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016b8c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016b8c8:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016b8cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016b8d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b80c;
        }
    }
L_0016b8d4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b8d8:;
    {
        cpu->r[1] = 0x00001bd0u;
    }
L_0016b8dc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0016b8e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0016b8e4:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0016b8e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0016b8ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x0000007au;
        }
    }
L_0016b8f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000079u;
        }
    }
L_0016b8f4:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x524u);
    }
L_0016b8f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016b8fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0016b900:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 0);
    }
L_0016b904:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_0016b908:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0016b90c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0016b910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016b914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016b8f4;
        }
    }
L_0016b918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0016b91c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016b9c4;
        }
    }
L_0016b920:;
    {
        cpu->r[0] = rd32(0x0016b928u + + 0x104u);
    }
L_0016b924:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b928:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016b92c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016b930:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0016b934:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0016b938:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b93c:;
    {
        cpu->r[14] = 0x0016b940u; fn_000fd224(cpu);
    }
L_0016b940:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ba04;
        }
    }
L_0016b948:;
    {
        cpu->r[2] = rd32(0x0016b950u + + 0xe0u);
    }
L_0016b94c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016b950:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016b954:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016b958:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016b95c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016b960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b99c;
        }
    }
L_0016b964:;
    {
        cpu->r[8] = rd32(0x0016b96cu + + 0xc8u);
    }
L_0016b968:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0016b96c:;
    {
        cpu->r[14] = 0x0016b970u; fn_00093fc8(cpu);
    }
L_0016b970:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016b974:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b978:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_0016b97c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016b980:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0016b984:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0016b988:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016b98c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016b990:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016b994:;
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
L_0016b998:;
    {
        return fn_000fd1d0(cpu);
    }
L_0016b99c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016b9a0:;
    {
        cpu->r[14] = 0x0016b9a4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016b9a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016b9a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b964;
        }
    }
L_0016b9ac:;
    {
        cpu->r[8] = rd32(0x0016b9b4u + + 0x80u);
    }
L_0016b9b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0016b9b4:;
    {
        cpu->r[14] = 0x0016b9b8u; fn_00094228(cpu);
    }
L_0016b9b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016b9bc:;
    {
        cpu->r[14] = 0x0016b9c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016b9c0:;
    {
        goto L_0016b968;
    }
L_0016b9c4:;
    {
        cpu->r[0] = rd32(0x0016b9ccu + + 0x60u);
    }
L_0016b9c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016b9cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016b9d0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016b9d4:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0016b9d8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0016b9dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016b9e0:;
    {
        cpu->r[14] = 0x0016b9e4u; fn_000fd224(cpu);
    }
L_0016b9e4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016b9e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016b8a0;
        }
    }
L_0016b9ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016b9f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016b9f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016b9f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016b9fc:;
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
L_0016ba00:;
    {
        return fn_000fd218(cpu);
    }
L_0016ba04:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0016ba08:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016ba0c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0016ba10:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016ba14:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016ba18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016ba1c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016ba20:;
    {
        cpu->r[14] = 0x0016ba24u; fn_000fd248(cpu);
    }
L_0016ba24:;
    {
        goto L_0016b948;
    }
}

/* _ZN4CCar21UpdateAfterCollisionsEPK10RoadStructR11CMultiArrayIPS_E @ 0016ba38 (arm) */
void fn_0016ba38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016ba38:;
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
L_0016ba3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0016ba40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016ba44:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016ba48:;
    {
        cpu->r[14] = 0x0016ba4cu; fn_0016b7ec(cpu);
    }
L_0016ba4c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016ba50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016ba54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ba58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ba5c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016ba60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_0016ba64:;
    {
        cpu->r[5] = rd32(0x0016ba6cu + + 0xcacu);
    }
L_0016ba68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001654u;
        }
    }
L_0016ba6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00001000u;
        }
    }
L_0016ba70:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016ba78u, cpu->r[5], 0, 0);
    }
L_0016ba74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ba78:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016ba7c:;
    {
        cpu->r[14] = 0x0016ba80u; fn_00177118(cpu);
    }
L_0016ba80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ba84:;
    {
        cpu->r[14] = 0x0016ba88u; fn_0017363c(cpu);
    }
L_0016ba88:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5a0u);
    }
L_0016ba8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ba90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c2cc;
        }
    }
L_0016ba94:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_0016ba98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ba9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016baa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc58;
        }
    }
L_0016baa4:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_0016baa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016baac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016bab0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016c074;
        }
    }
L_0016bab4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016bab8:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016babc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bb0c;
        }
    }
L_0016bac0:;
    {
        cpu->r[10] = rd32(0x0016bac8u + + 0xc58u);
    }
L_0016bac4:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0016bac8:;
    {
        cpu->r[2] = 0x000081c4u;
    }
L_0016bacc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016bad0:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016bad4:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0016bad8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0016badc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016bae0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0016bae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c35c;
        }
    }
L_0016bae8:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_0016baec:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_0016baf0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016baf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c4e8;
        }
    }
L_0016baf8:;
    {
        cpu->r[2] = 0x000081c4u;
    }
L_0016bafc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0016bb00:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016bb04:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0016bb08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016bb0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00010000u; set_nz(cpu, v); }
    }
L_0016bb10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bb70;
        }
    }
L_0016bb14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016bb18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0016bb1c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0016bb20:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016bb70;
        }
    }
L_0016bb24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016bb28:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00010000u; cpu->r[3] = v;
    }
L_0016bb2c:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_0016bb30:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0016bb34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c620;
        }
    }
L_0016bb38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bb3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x488u);
    }
L_0016bb40:;
    {
        cpu->r[14] = 0x0016bb44u; fn_00175128(cpu);
    }
L_0016bb44:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016bb48:;
    {
        cpu->r[1] = 0x00001654u;
    }
L_0016bb4c:;
    {
        cpu->r[12] = 0x00001000u;
    }
L_0016bb50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bb54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bb58:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_0016bb5c:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_0016bb60:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016bb64:;
    {
        cpu->r[14] = 0x0016bb68u; fn_0015d920(cpu);
    }
L_0016bb68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016bb6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c578;
        }
    }
L_0016bb70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016bb74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bb78:;
    {
        cpu->r[14] = 0x0016bb7cu; fn_00180c78(cpu);
    }
L_0016bb7c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1ccu);
    }
L_0016bb80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016bb84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c318;
        }
    }
L_0016bb88:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016bb8c:;
    {
        uint32_t v = cpu->r[9] & 0x0000b000u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_0016bb90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc44;
        }
    }
L_0016bb94:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x488u);
    }
L_0016bb98:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0016bb9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c410;
        }
    }
L_0016bba0:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0016bba4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016bba8:;
    {
        cpu->r[14] = 0x0016bbb0u;
    }
L_0016bbac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016bbb0u)) return;
    }
L_0016bbb0:;
    {
        cpu->r[10] = rd32(0x0016bbb8u + + 0xb68u);
    }
L_0016bbb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bbb8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x10u);
    }
L_0016bbbc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016bbc0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016bbc4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_0016bbc8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016bbcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c2ec;
        }
    }
L_0016bbd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x488u);
    }
L_0016bbd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016bbd8:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016bbdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0016bbe0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016bbe4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4a0u);
        }
    }
L_0016bbe8:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016bbec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00005556u;
        }
    }
L_0016bbf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x5555u << 16);
        }
    }
L_0016bbf4:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
        }
    }
L_0016bbf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
        }
    }
L_0016bbfc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0016bc00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_0016bc04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016c2ec;
        }
    }
L_0016bc08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4a8u);
    }
L_0016bc0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_0016bc10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016c300;
        }
    }
L_0016bc14:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0016bc18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0016bc1c:;
    {
        wr32(cpu->r[4] + + 0x4a8u, cpu->r[2]);
    }
L_0016bc20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c0d0;
        }
    }
L_0016bc24:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016bc28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016bc2c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016bc30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c0d0;
        }
    }
L_0016bc34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4a4u);
    }
L_0016bc38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0016bc3c:;
    {
        wr32(cpu->r[4] + + 0x4a4u, cpu->r[0]);
    }
L_0016bc40:;
    {
        goto L_0016c0dc;
    }
L_0016bc44:;
    {
        wr32(cpu->r[4] + + 0x4a8u, cpu->r[7]);
    }
L_0016bc48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bc4c:;
    {
        cpu->r[14] = 0x0016bc50u; fn_0015d920(cpu);
    }
L_0016bc50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016bc54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c534;
        }
    }
L_0016bc58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0016bc5c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0016bc60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bc64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016bc68:;
    {
        cpu->r[14] = 0x0016bc6cu; fn_00180c78(cpu);
    }
L_0016bc6c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016bc70:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0016bc74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bc78:;
    {
        cpu->r[14] = 0x0016bc7cu; fn_00173e3c(cpu);
    }
L_0016bc7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016bc80:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0016bc84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0016bc88:;
    {
        cpu->r[14] = 0x0016bc8cu; fn_00161548(cpu);
    }
L_0016bc8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016bc90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_0016bc94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016bc98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x184u);
    }
L_0016bc9c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0016bca0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0016bca4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_0016bca8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016bcac:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016bcb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bcb4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[0] & ~ 0x00000020u; cpu->r[0] = v;
        }
    }
L_0016bcb8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[0] | 0x00000020u; cpu->r[0] = v;
        }
    }
L_0016bcbc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016bcc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x428u);
    }
L_0016bcc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x430u);
    }
L_0016bcc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016bccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c0c0;
        }
    }
L_0016bcd0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_0016bcd4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[1]; cpu->r[2] = v;
    }
L_0016bcd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016bcdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0016bce0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016bce4:;
    {
        vfp_sync_flags(cpu);
    }
L_0016bce8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
        }
    }
L_0016bcec:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x438u, cpu->r[12]);
        }
    }
L_0016bcf0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x43cu, cpu->r[0]);
        }
    }
L_0016bcf4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016bcf8:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016bcfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016bd00:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016bd04:;
    {
        wr32(cpu->r[4] + + 0x458u, cpu->r[1]);
    }
L_0016bd08:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] & ~ 0x00002000u; cpu->r[3] = v;
        }
    }
L_0016bd0c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[3] | 0x00002000u; cpu->r[3] = v;
        }
    }
L_0016bd10:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_0016bd14:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016bd18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bff8;
        }
    }
L_0016bd1c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016bd20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bd24:;
    {
        cpu->r[14] = 0x0016bd28u; fn_00173e58(cpu);
    }
L_0016bd28:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0016bd2c:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_0016bd30:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0016bd34:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016bd38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016bd3c:;
    {
        cpu->r[14] = 0x0016bd40u; fn_00180c78(cpu);
    }
L_0016bd40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016bd44:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016bd48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c01c;
        }
    }
L_0016bd4c:;
    {
        cpu->r[3] = 0x000016b8u;
    }
L_0016bd50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016bd54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bd58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016bd5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016bd60:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016bd64:;
    {
        cpu->r[3] = 0x000016bcu;
    }
L_0016bd68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bd6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016bd70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016bd74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016bd78:;
    {
        cpu->r[14] = 0x0016bd7cu; fn_0018572c(cpu);
    }
L_0016bd7c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016bd80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000004c0u, 0, 0);
    }
L_0016bd84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0016bd88:;
    {
        cpu->r[14] = 0x0016bd8cu; fn_0018572c(cpu);
    }
L_0016bd8c:;
    {
        cpu->r[3] = 0x000016bcu;
    }
L_0016bd90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bd94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0016bd98:;
    {
        cpu->r[7] = 0x00000064u;
    }
L_0016bd9c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[7] = v;
    }
L_0016bda0:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000c000u, 1, 1);
    }
L_0016bda4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x0000c000u;
        }
    }
L_0016bda8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016bdac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bea0;
        }
    }
L_0016bdb0:;
    {
        cpu->r[3] = 0x000016c0u;
    }
L_0016bdb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bdb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0016bdbc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016bea0;
        }
    }
L_0016bdc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016bdc4:;
    {
        { uint32_t v = cpu->r[3] & 0x0000b000u; set_nz(cpu, v); }
    }
L_0016bdc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bee0;
        }
    }
L_0016bdcc:;
    {
        cpu->r[3] = 0x00001924u;
    }
L_0016bdd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bdd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016bdd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c094;
        }
    }
L_0016bddc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bde0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0016bde4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bdfc;
        }
    }
L_0016bde8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bdec:;
    {
        cpu->r[14] = 0x0016bdf0u; fn_00162720(cpu);
    }
L_0016bdf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bdf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bdf8:;
    {
        cpu->r[14] = 0x0016bdfcu; fn_001620fc(cpu);
    }
L_0016bdfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016be00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016be04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016be08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0016be0c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x29cu);
    }
L_0016be10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0016be14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bfcc;
        }
    }
L_0016be18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x348u);
    }
L_0016be1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016be20:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016be24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016be28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_0016be2c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x340u, cpu->r[2]);
        }
    }
L_0016be30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016be34:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[2]);
        }
    }
L_0016be38:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0016be3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0016be40:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x29cu);
        }
    }
L_0016be44:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016be48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0016be4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0016be50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_0016be54:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
        }
    }
L_0016be58:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016be68;
        }
    }
L_0016be5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016be60:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0016be64:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
        }
    }
L_0016be68:;
    {
        cpu->r[3] = 0x000017a8u;
    }
L_0016be6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016be70:;
    {
        cpu->r[3] = 0x000003e7u;
    }
L_0016be74:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016be78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016be98;
        }
    }
L_0016be7c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016be80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016be84:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016be88:;
    {
        cpu->r[3] = 0x000017a8u;
    }
L_0016be8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016be90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d0u);
        }
    }
L_0016be94:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016be98:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0016be9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016bea0u)) return;
    }
L_0016bea0:;
    {
        cpu->r[3] = rd32(0x0016bea8u + + 0x878u);
    }
L_0016bea4:;
    {
        cpu->r[2] = 0x000016c0u;
    }
L_0016bea8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016beac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016beb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016beb4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_0016beb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016bebc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0016bec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016bec4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0016bec8:;
    {
        cpu->r[2] = 0x000016bcu;
    }
L_0016becc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0016bed0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016bed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016bed8:;
    {
        { uint32_t v = cpu->r[3] & 0x0000b000u; set_nz(cpu, v); }
    }
L_0016bedc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bdcc;
        }
    }
L_0016bee0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016bee4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016bee8:;
    {
        cpu->r[14] = 0x0016beecu; fn_00181124(cpu);
    }
L_0016beec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016bef0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0016bef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bef8:;
    {
        cpu->r[14] = 0x0016befcu; fn_00173e3c(cpu);
    }
L_0016befc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x4b0u);
    }
L_0016bf00:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x38u);
    }
L_0016bf04:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x30u);
    }
L_0016bf08:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x38u);
    }
L_0016bf0c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0016bf10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016bf14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_0016bf18:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0016bf1c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4b4u);
    }
L_0016bf20:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0016bf24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016bf28:;
    {
        uint32_t v = cpu->r[14] * cpu->r[2]; cpu->r[2] = v;
    }
L_0016bf2c:;
    {
        cpu->r[14] = 0x00001788u;
    }
L_0016bf30:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[2]; cpu->r[5] = v;
    }
L_0016bf34:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_0016bf38:;
    {
        cpu->r[14] = 0x0016bf40u;
    }
L_0016bf3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016bf40u)) return;
    }
L_0016bf40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016bf44:;
    {
        cpu->r[7] = (cpu->r[6] >> 13) & 0x1u;
    }
L_0016bf48:;
    {
        uint32_t v = shifter(cpu->r[5], 3, 31u, &shc); cpu->r[5] = v;
    }
L_0016bf4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016bf50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bf68;
        }
    }
L_0016bf54:;
    {
        cpu->r[3] = 0x000016f4u;
    }
L_0016bf58:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0016bf5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000007u);
        }
    }
L_0016bf60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000008u;
        }
    }
L_0016bf64:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016bf68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016bf6c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0016bf70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016bf74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0016bf78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000198u, 0, 0);
        }
    }
L_0016bf7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000198u, 1, 0);
        }
    }
L_0016bf80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0016bf84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0016bf88:;
    {
        vfp_sync_flags(cpu);
    }
L_0016bf8c:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
    }
L_0016bf90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bddc;
        }
    }
L_0016bf94:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0016bf98:;
    {
        cpu->r[6] = (cpu->r[6] >> 4) & 0x1u;
    }
L_0016bf9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c5b0;
        }
    }
L_0016bfa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0016bfa4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
        }
    }
L_0016bfa8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
        }
    }
L_0016bfac:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016bfb0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0016bfb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00800000u;
        }
    }
L_0016bfb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x01000000u;
        }
    }
L_0016bfbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016bfc0:;
    {
        uint32_t v = cpu->r[6] | cpu->r[2]; cpu->r[6] = v;
    }
L_0016bfc4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_0016bfc8:;
    {
        goto L_0016bddc;
    }
L_0016bfcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016bfd0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016be48;
        }
    }
L_0016bfd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016bfd8:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016bfdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016bfe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016c63c;
        }
    }
L_0016bfe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016bfe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016bfec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016bff0:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016bff4:;
    {
        goto L_0016be48;
    }
L_0016bff8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0016bffc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c000:;
    {
        cpu->r[14] = 0x0016c004u; fn_00173e14(cpu);
    }
L_0016c004:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016c008:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016c00c:;
    {
        cpu->r[14] = 0x0016c010u; fn_00180c78(cpu);
    }
L_0016c010:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016c014:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016c018:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bd4c;
        }
    }
L_0016c01c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016c020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c024:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bd4c;
        }
    }
L_0016c028:;
    {
        cpu->r[11] = 0x00001788u;
    }
L_0016c02c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x34u);
    }
L_0016c030:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x34u);
    }
L_0016c034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0016c038:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0016c03c:;
    {
        cpu->r[2] = 0x000016ecu;
    }
L_0016c040:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016c044:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0016c048:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c3b4;
        }
    }
L_0016c04c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016c050:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c054:;
    {
        cpu->r[14] = 0x0016c05cu;
    }
L_0016c058:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c05cu)) return;
    }
L_0016c05c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x378u);
    }
L_0016c060:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016c064:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016c5a0;
        }
    }
L_0016c068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016c06c:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[3]);
    }
L_0016c070:;
    {
        goto L_0016bd4c;
    }
L_0016c074:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c07c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_0016c080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc58;
        }
    }
L_0016c084:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c088:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016c08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bb0c;
        }
    }
L_0016c090:;
    {
        goto L_0016bac0;
    }
L_0016c094:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016c098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0016c09c:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
    }
L_0016c0a0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000800u, 0, 1);
    }
L_0016c0a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0016c0a8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
        }
    }
L_0016c0ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bddc;
        }
    }
L_0016c0b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0016c0b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_0016c0b8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
        }
    }
L_0016c0bc:;
    {
        goto L_0016bddc;
    }
L_0016c0c0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0016c0c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c344;
        }
    }
L_0016c0c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016c0cc:;
    {
        goto L_0016bcd4;
    }
L_0016c0d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016c0d4:;
    {
        wr32(cpu->r[4] + + 0x4a4u, cpu->r[2]);
    }
L_0016c0d8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0016c0dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c0e0:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016c0e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016c0e8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016c0ec:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016c0f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x418u);
    }
L_0016c0f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
        }
    }
L_0016c0f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
        }
    }
L_0016c0fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0016c100:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
        }
    }
L_0016c104:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_0016c108:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
        }
    }
L_0016c10c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016c248;
        }
    }
L_0016c110:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0016c114:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016c144;
        }
    }
L_0016c118:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_0016c11c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016c120:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0016c124:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c144;
        }
    }
L_0016c128:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016c12c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000013cu, 1, 1);
    }
L_0016c130:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016c144;
        }
    }
L_0016c134:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000164u, 1, 1);
    }
L_0016c138:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
        }
    }
L_0016c13c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
        }
    }
L_0016c140:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016c248;
        }
    }
L_0016c144:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016c148:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c14c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0016c150:;
    {
        cpu->r[14] = 0x0016c158u;
    }
L_0016c154:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c158u)) return;
    }
L_0016c158:;
    {
        add_flags(cpu, cpu->r[0], 0x80000001u, 0, 1);
    }
L_0016c15c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0016c160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c3f8;
        }
    }
L_0016c164:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0016c168:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0016c16c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0016c170:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016c174:;
    {
        cpu->r[14] = 0x0016c178u; fn_0018572c(cpu);
    }
L_0016c178:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016c17c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c594;
        }
    }
L_0016c184:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0016c188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c678;
        }
    }
L_0016c18c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c190:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_0016c194:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_0016c198:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0016c19c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_0016c1a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016c1a4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_0016c1a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016c1ac:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016c1b0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_0016c1b4:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016c1b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0016c1bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016c1c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016c708;
        }
    }
L_0016c1c4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c1c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c1cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016c1d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c22c;
        }
    }
L_0016c1d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016c1d8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016c1dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0016c1e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0016c1e4:;
    {
        cpu->r[14] = 0x0016c1ecu;
    }
L_0016c1e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c1ecu)) return;
    }
L_0016c1ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0016c1f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4b8u);
    }
L_0016c1f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4bcu);
    }
L_0016c1f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016c1fc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0016c200:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0016c204:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0016c208:;
    {
        cpu->r[2] = 0x00000ddbu;
    }
L_0016c20c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4c0u);
    }
L_0016c210:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_0016c214:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0016c218:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_0016c21c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016c220:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0016c224:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0016c228:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016c708;
        }
    }
L_0016c22c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c230:;
    {
        cpu->r[14] = 0x0016c234u; fn_001610ac(cpu);
    }
L_0016c234:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c708;
        }
    }
L_0016c23c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c240:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0016c244:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0016c248:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016c24c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_0016c250:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0016c254:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016c2d8;
        }
    }
L_0016c258:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0016c25c:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_0016c260:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016c264:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0016c268:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016c26c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c430;
        }
    }
L_0016c274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c278:;
    {
        cpu->r[14] = 0x0016c27cu; fn_0015d920(cpu);
    }
L_0016c27c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc60;
        }
    }
L_0016c284:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c288:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016c28c:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_0016c290:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016c294:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0016c298:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016c29c:;
    {
        cpu->r[14] = 0x0016c2a0u; fn_000fd224(cpu);
    }
L_0016c2a0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016c2a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bc60;
        }
    }
L_0016c2a8:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0016c2ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016c2b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0016c2b4:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_0016c2b8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0016c2bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016c2c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016c2c4:;
    {
        cpu->r[14] = 0x0016c2c8u; fn_000fd248(cpu);
    }
L_0016c2c8:;
    {
        goto L_0016bc60;
    }
L_0016c2cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c2d0:;
    {
        cpu->r[14] = 0x0016c2d4u; fn_00179204(cpu);
    }
L_0016c2d4:;
    {
        goto L_0016ba94;
    }
L_0016c2d8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c2dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c2e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016c2e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0016c2e8:;
    {
        goto L_0016c258;
    }
L_0016c2ec:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c2f0:;
    {
        cpu->r[9] = (cpu->r[9] >> 15) & 0x1u;
    }
L_0016c2f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4a8u);
    }
L_0016c2f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_0016c2fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016bc14;
        }
    }
L_0016c300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c304:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0016c308:;
    {
        cpu->r[14] = 0x0016c30cu; fn_00162488(cpu);
    }
L_0016c30c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4a8u);
    }
L_0016c310:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016c314:;
    {
        goto L_0016bc14;
    }
L_0016c318:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c31c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c320:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016c324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bb88;
        }
    }
L_0016c328:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016c32c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016c330:;
    {
        cpu->r[14] = 0x0016c334u; fn_00180c78(cpu);
    }
L_0016c334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c338:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016c33c:;
    {
        cpu->r[14] = 0x0016c340u; fn_00165578(cpu);
    }
L_0016c340:;
    {
        goto L_0016bb88;
    }
L_0016c344:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c0c8;
        }
    }
L_0016c34c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x434u);
    }
L_0016c350:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x43cu);
    }
L_0016c354:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x438u);
    }
L_0016c358:;
    {
        goto L_0016bcd0;
    }
L_0016c35c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016c360:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016c364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c65c;
        }
    }
L_0016c368:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c36c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x488u);
    }
L_0016c370:;
    {
        cpu->r[14] = 0x0016c374u; fn_00175128(cpu);
    }
L_0016c374:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c378:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c37c:;
    {
        cpu->r[0] = 0x00001654u;
    }
L_0016c380:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c384:;
    {
        cpu->r[12] = 0x00001000u;
    }
L_0016c388:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00004000u; cpu->r[1] = v;
    }
L_0016c38c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_0016c390:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_0016c394:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[1]);
    }
L_0016c398:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016c39c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c3a0:;
    {
        cpu->r[14] = 0x0016c3a4u; fn_0015d920(cpu);
    }
L_0016c3a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c3a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c584;
        }
    }
L_0016c3ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c3b0:;
    {
        goto L_0016bb0c;
    }
L_0016c3b4:;
    {
        cpu->r[3] = 0x000016e0u;
    }
L_0016c3b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x480u);
    }
L_0016c3bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c3c0:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0016c3c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c3c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0016c3cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0016c3d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c3d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016c068;
        }
    }
L_0016c3d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016c3dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c3e0:;
    {
        cpu->r[14] = 0x0016c3e8u;
    }
L_0016c3e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c3e8u)) return;
    }
L_0016c3e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_0016c3ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016c3f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c068;
        }
    }
L_0016c3f4:;
    {
        goto L_0016c04c;
    }
L_0016c3f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c3fc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0016c400:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0016c404:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016c408:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0016c40c:;
    {
        goto L_0016c248;
    }
L_0016c410:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x48cu);
    }
L_0016c414:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0016c418:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bba0;
        }
    }
L_0016c41c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016c420:;
    {
        cpu->r[9] = (cpu->r[9] >> 15) & 0x1u;
    }
L_0016c424:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x10u);
    }
L_0016c428:;
    {
        cpu->r[10] = rd32(0x0016c430u + + 0x2f0u);
    }
L_0016c42c:;
    {
        goto L_0016c2f4;
    }
L_0016c430:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0016c434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c274;
        }
    }
L_0016c438:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016c43c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016c440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bc60;
        }
    }
L_0016c444:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016c448:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c44c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bc60;
        }
    }
L_0016c450:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c454:;
    {
        { uint32_t v = cpu->r[2] & 0x00008000u; set_nz(cpu, v); }
    }
L_0016c458:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4a4u, cpu->r[3]);
        }
    }
L_0016c45c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0016c460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c488;
        }
    }
L_0016c464:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0016c468:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c488;
        }
    }
L_0016c46c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c470:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016c474:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016c478:;
    {
        cpu->r[2] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_0016c47c:;
    {
        uint32_t v = cpu->r[2] | 0x40000000u; cpu->r[2] = v;
    }
L_0016c480:;
    {
        wr32(cpu->r[11] + cpu->r[3], cpu->r[2]);
    }
L_0016c484:;
    {
        cpu->r[14] = 0x0016c488u; fn_00163304(cpu);
    }
L_0016c488:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0016c48c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c490:;
    {
        cpu->r[14] = 0x0016c494u; fn_0015e194(cpu);
    }
L_0016c494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c498:;
    {
        cpu->r[14] = 0x0016c49cu; fn_0015d920(cpu);
    }
L_0016c49c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c4a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c5dc;
        }
    }
L_0016c4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c4a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x488u);
    }
L_0016c4ac:;
    {
        cpu->r[14] = 0x0016c4b0u; fn_00175128(cpu);
    }
L_0016c4b0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c4b4:;
    {
        cpu->r[1] = 0x00001654u;
    }
L_0016c4b8:;
    {
        cpu->r[12] = 0x00001000u;
    }
L_0016c4bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c4c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c4c4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_0016c4c8:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_0016c4cc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016c4d0:;
    {
        cpu->r[14] = 0x0016c4d4u; fn_0015d920(cpu);
    }
L_0016c4d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c4d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc60;
        }
    }
L_0016c4dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c4e0:;
    {
        cpu->r[14] = 0x0016c4e4u; fn_00160698(cpu);
    }
L_0016c4e4:;
    {
        goto L_0016bc60;
    }
L_0016c4e8:;
    {
        cpu->r[2] = 0x000081d0u;
    }
L_0016c4ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0016c4f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016c4f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016c4f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016c4fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0016c500:;
    {
        cpu->r[14] = 0x0016c504u; fn_000bb394(cpu);
    }
L_0016c504:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016c508:;
    {
        cpu->r[2] = 0x000081d4u;
    }
L_0016c50c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016c510:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016c514:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016c518:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0016c51c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016baf8;
        }
    }
L_0016c520:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0016c524:;
    {
        cpu->r[14] = 0x0016c528u; fn_000e0890(cpu);
    }
L_0016c528:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016c52c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016c530:;
    {
        goto L_0016baf8;
    }
L_0016c534:;
    {
        cpu->r[0] = rd32(0x0016c53cu + + 0x1e4u);
    }
L_0016c538:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016c53c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0016c540:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_0016c544:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0016c548:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0016c54c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016c550:;
    {
        cpu->r[14] = 0x0016c554u; fn_000fd224(cpu);
    }
L_0016c554:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016c558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016bc58;
        }
    }
L_0016c55c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016c560:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_0016c564:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000004b0u, 0, 0);
    }
L_0016c568:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0016c56c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016c570:;
    {
        cpu->r[14] = 0x0016c574u; fn_000fd218(cpu);
    }
L_0016c574:;
    {
        goto L_0016bc60;
    }
L_0016c578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c57c:;
    {
        cpu->r[14] = 0x0016c580u; fn_00160698(cpu);
    }
L_0016c580:;
    {
        goto L_0016bb70;
    }
L_0016c584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c588:;
    {
        cpu->r[14] = 0x0016c58cu; fn_00160698(cpu);
    }
L_0016c58c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016c590:;
    {
        goto L_0016bb0c;
    }
L_0016c594:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c598:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0016c59c:;
    {
        goto L_0016c248;
    }
L_0016c5a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016c5a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016c5a8:;
    {
        cpu->r[14] = 0x0016c5acu; fn_00180c78(cpu);
    }
L_0016c5ac:;
    {
        goto L_0016c068;
    }
L_0016c5b0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000800u, 0, 1);
    }
L_0016c5b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 0);
        }
    }
L_0016c5b8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
        }
    }
L_0016c5bc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016c5c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0016c5c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x01000000u;
        }
    }
L_0016c5c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00800000u;
        }
    }
L_0016c5cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c5d0:;
    {
        uint32_t v = cpu->r[6] | cpu->r[2]; cpu->r[6] = v;
    }
L_0016c5d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_0016c5d8:;
    {
        goto L_0016bddc;
    }
L_0016c5dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016c5e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016c5e4:;
    {
        cpu->r[1] = 0x00000086u;
    }
L_0016c5e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016c5ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016c5f0:;
    {
        cpu->r[14] = 0x0016c5f4u; fn_000fd224(cpu);
    }
L_0016c5f4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016c5f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c4a4;
        }
    }
L_0016c5fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016c600:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016c604:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0016c608:;
    {
        cpu->r[1] = 0x00000086u;
    }
L_0016c60c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0016c610:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016c614:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016c618:;
    {
        cpu->r[14] = 0x0016c61cu; fn_000fd248(cpu);
    }
L_0016c61c:;
    {
        goto L_0016c4a4;
    }
L_0016c620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016c624:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016bb38;
        }
    }
L_0016c62c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c630:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0016c634:;
    {
        cpu->r[14] = 0x0016c638u; fn_0015e194(cpu);
    }
L_0016c638:;
    {
        goto L_0016bb38;
    }
L_0016c63c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016c640:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016c648u + + 0xd4u);
    }
L_0016c644:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016c648:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016c64c:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[3]);
    }
L_0016c650:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016c654:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016c658:;
    {
        goto L_0016be48;
    }
L_0016c65c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016c660:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016c664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c368;
        }
    }
L_0016c668:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016c66c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0016c670:;
    {
        cpu->r[14] = 0x0016c674u; fn_0015e194(cpu);
    }
L_0016c674:;
    {
        goto L_0016c368;
    }
L_0016c678:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016c67c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0016c680:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016c684:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0016c688:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0016c68c:;
    {
        cpu->r[14] = 0x0016c694u;
    }
L_0016c690:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c694u)) return;
    }
L_0016c694:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0016c698:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4b8u);
    }
L_0016c69c:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_0016c6a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0016c6a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_0016c6a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016c6ac:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_0016c6b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c6b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016c6b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0016c6bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4bcu);
    }
L_0016c6c0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[14] + cpu->r[0]; cpu->r[0] = v;
    }
L_0016c6c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016c6c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0016c6cc:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_0016c6d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_0016c6d4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x4c0u);
    }
L_0016c6d8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_0016c6dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016c6e0:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x418u);
    }
L_0016c6e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0016c6e8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0016c6ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016c6f0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016c6f4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_0016c6f8:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016c6fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0016c700:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 12u, &shc), 1, 1);
    }
L_0016c704:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016c1d4;
        }
    }
L_0016c708:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016c70c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0016c710:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0016c714:;
    {
        goto L_0016c248;
    }
}

/* _ZN4CCar15UpdateCarSoundsEv @ 0016c724 (arm) */
void fn_0016c724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016c724:;
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
L_0016c728:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016c72c:;
    {
        cpu->r[5] = 0x00001e34u;
    }
L_0016c730:;
    {
        cpu->r[2] = 0x00001e14u;
    }
L_0016c734:;
    {
        cpu->r[6] = rd32(0x0016c73cu + + 0x424u);
    }
L_0016c738:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0016c73c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0016c740:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016c744:;
    {
        cpu->r[6] = add_flags(cpu, 0x0016c74cu, cpu->r[6], 0, 0);
    }
L_0016c748:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016c74c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016c750:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0016c754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c76c;
        }
    }
L_0016c758:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016c75c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016caac;
        }
    }
L_0016c760:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016c764:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016c768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016c76cu)) return;
    }
L_0016c76c:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016c770:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_0016c774:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016c778:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016c77c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0016c780:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016c784:;
    {
        cpu->r[3] = 0x00001e18u;
    }
L_0016c788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0016c78c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_0016c790:;
    {
        cpu->r[3] = 0x00001e1cu;
    }
L_0016c794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0016c798:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_0016c79c:;
    {
        cpu->r[3] = rd32(0x0016c7a4u + + 0x3c0u);
    }
L_0016c7a0:;
    {
        vfp_vsub(cpu, 13, 13, 12);
    }
L_0016c7a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0016c7a8:;
    {
        cpu->r[3] = 0x00001e28u;
    }
L_0016c7ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016c7b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0016c7b4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0016c7b8:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0016c7bc:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_0016c7c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016c7c4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0016c7c8:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_0016c7cc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016c7d0:;
    {
        cpu->r[14] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016c7d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_0016c7d8:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0016c7dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0016c7e0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016c7e4:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0016c7e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016c83c;
        }
    }
L_0016c7ec:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0016c7f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016c7f4:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_0016c7f8:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_0016c7fc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0016c800:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_0016c804:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_0016c808:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0016c80c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0016c810:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
        }
    }
L_0016c814:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
        }
    }
L_0016c818:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
        }
    }
L_0016c81c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0016c820:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0016c824:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0016c828:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0016c82c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_0016c830:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016c834:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_0016c838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c80c;
        }
    }
L_0016c83c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016c840:;
    {
        cpu->r[14] = 0x0016c844u; fn_00096b6c(cpu);
    }
L_0016c844:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ca70;
        }
    }
L_0016c84c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016c850:;
    {
        cpu->r[14] = 0x0016c854u; fn_00096b88(cpu);
    }
L_0016c854:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c858:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x340u);
        }
    }
L_0016c85c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ca38;
        }
    }
L_0016c860:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0016c864:;
    {
        cpu->r[2] = 0x00001e38u;
    }
L_0016c868:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_0016c86c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0016c870:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_0016c874:;
    {
        cpu->r[2] = 0x00001e20u;
    }
L_0016c878:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c87c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016c880:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_0016c884:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[0]);
    }
L_0016c888:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0016c88c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0016c890:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_0016c894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cae8;
        }
    }
L_0016c898:;
    {
        cpu->r[1] = 0x00001e44u;
    }
L_0016c89c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016c8a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016c8a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c99c;
        }
    }
L_0016c8a8:;
    {
        cpu->r[1] = 0x00001e3cu;
    }
L_0016c8ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016c8b0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_0016c8b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016c8b8:;
    {
        cpu->r[3] = 0x00001e44u;
    }
L_0016c8bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016c8c0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016c8c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016cb3c;
        }
    }
L_0016c8c8:;
    {
        cpu->r[7] = rd32(0x0016c8d0u + + 0x298u);
    }
L_0016c8cc:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_0016c8d0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c8d4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0016c8d8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0016c8dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016c8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ca10;
        }
    }
L_0016c8e4:;
    {
        cpu->r[5] = rd32(0x0016c8ecu + + 0x280u);
    }
L_0016c8e8:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0016c8ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016c8f0:;
    {
        cpu->r[14] = 0x0016c8f4u; fn_00093f98(cpu);
    }
L_0016c8f4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0016c8f8:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_0016c8fc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c900:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0016c904:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016c908:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016c90c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016c910:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016c918u + + 0x244u);
    }
L_0016c914:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0016c918:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016c91c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[7] + + 0x14u);
    }
L_0016c920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cac4;
        }
    }
L_0016c924:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0016c928:;
    {
        cpu->r[5] = 0x00001e14u;
    }
L_0016c92c:;
    {
        cpu->r[14] = 0x0016c930u; fn_00093f88(cpu);
    }
L_0016c930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016c934:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016c938:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016c93c:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0016c940:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_0016c944:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_0016c948:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016c94c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016c950:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016c958u + + 0x204u);
    }
L_0016c954:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c958:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0016c95c:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0016c960:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016c964:;
    {
        cpu->r[14] = 0x0016c968u; fn_00190054(cpu);
    }
L_0016c968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016c96c:;
    {
        cpu->r[2] = 0x00001e38u;
    }
L_0016c970:;
    {
        cpu->r[0] = 0x00001e30u;
    }
L_0016c974:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016c978:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_0016c97c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_0016c980:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016c984:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_0016c988:;
    {
        cpu->r[3] = 0x00001e3cu;
    }
L_0016c98c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0016c990:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0016c994:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_0016c998:;
    {
        goto L_0016c760;
    }
L_0016c99c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x344u);
    }
L_0016c9a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0016c9a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016c9bc;
        }
    }
L_0016c9a8:;
    {
        cpu->r[0] = 0x00001e30u;
    }
L_0016c9ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016c9b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0016c9b4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0016c9b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016cb10;
        }
    }
L_0016c9bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016c9c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016c9c4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0016c9c8:;
    {
        cpu->r[14] = 0x0016c9ccu; fn_00096b88(cpu);
    }
L_0016c9cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016c9d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cb4c;
        }
    }
L_0016c9d4:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_0016c9d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016c9dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c9e0:;
    {
        wr32(cpu->r[4] + + 0x344u, cpu->r[2]);
    }
L_0016c9e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_0016c9e8:;
    {
        cpu->r[3] = 0x00001e3cu;
    }
L_0016c9ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016c9f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016c9f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001e40u;
        }
    }
L_0016c9f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001e44u;
        }
    }
L_0016c9fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_0016ca00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001e44u;
        }
    }
L_0016ca04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_0016ca08:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ca0c:;
    {
        goto L_0016c8b4;
    }
L_0016ca10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016ca14:;
    {
        cpu->r[14] = 0x0016ca18u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016ca18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ca1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c8e4;
        }
    }
L_0016ca20:;
    {
        cpu->r[5] = rd32(0x0016ca28u + + 0x144u);
    }
L_0016ca24:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_0016ca28:;
    {
        cpu->r[14] = 0x0016ca2cu; fn_00094228(cpu);
    }
L_0016ca2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016ca30:;
    {
        cpu->r[14] = 0x0016ca34u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016ca34:;
    {
        goto L_0016c8e8;
    }
L_0016ca38:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016ca3c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0016ca40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ca44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ca48:;
    {
        cpu->r[14] = 0x0016ca4cu; fn_000994e0(cpu);
    }
L_0016ca4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016ca50:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0016ca54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ca58:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016ca5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ca60:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016ca64:;
    {
        cpu->r[14] = 0x0016ca68u; fn_000994e0(cpu);
    }
L_0016ca68:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[0]);
    }
L_0016ca6c:;
    {
        goto L_0016c860;
    }
L_0016ca70:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,16);
    }
L_0016ca74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ca78:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016ca7c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0016ca80:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0016ca84:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0016ca88:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016ca8c:;
    {
        cpu->r[14] = 0x0016ca90u; fn_0009962c(cpu);
    }
L_0016ca90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ca94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016ca98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016ca9c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0016caa0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0016caa4:;
    {
        cpu->r[14] = 0x0016caa8u; fn_0009962c(cpu);
    }
L_0016caa8:;
    {
        goto L_0016c84c;
    }
L_0016caac:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_0016cab0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016cab4:;
    {
        cpu->r[14] = 0x0016cab8u; fn_00190054(cpu);
    }
L_0016cab8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016cabc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_0016cac0:;
    {
        goto L_0016c760;
    }
L_0016cac4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016cac8:;
    {
        cpu->r[14] = 0x0016caccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016cacc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016cad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c924;
        }
    }
L_0016cad4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016cad8:;
    {
        cpu->r[14] = 0x0016cadcu; fn_00094228(cpu);
    }
L_0016cadc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016cae0:;
    {
        cpu->r[14] = 0x0016cae4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016cae4:;
    {
        goto L_0016c924;
    }
L_0016cae8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x45cu);
    }
L_0016caec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016caf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cb08;
        }
    }
L_0016caf4:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016caf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016cafc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_0016cb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c898;
        }
    }
L_0016cb04:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0016cb08:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0016cb0c:;
    {
        goto L_0016c898;
    }
L_0016cb10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016cb14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016c9bc;
        }
    }
L_0016cb18:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0016cb1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0016cb20:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_0016cb24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016c9e8;
        }
    }
L_0016cb28:;
    {
        cpu->r[2] = 0x00001e3cu;
    }
L_0016cb2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016cb30:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0016cb34:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0016cb38:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016cb3c:;
    {
        cpu->r[3] = 0x00001e44u;
    }
L_0016cb40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016cb44:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016cb48:;
    {
        goto L_0016c8c8;
    }
L_0016cb4c:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_0016cb50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016cb54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_0016cb58:;
    {
        goto L_0016c9e8;
    }
}

/* _ZN4CCar13GetMaxTurningEv @ 0016cb70 (arm) */
void fn_0016cb70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016cb70:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016cb74:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016cb78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016cb7c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016cb80:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016cb84:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016cb88:;
    {
        cpu->r[4] = rd32(0x0016cb90u + + 0xb0u);
    }
L_0016cb8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016cb90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000800u;
        }
    }
L_0016cb94:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016cb9cu, cpu->r[4], 0, 0);
    }
L_0016cb98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cb9cu)) return;
        }
    }
L_0016cb9c:;
    {
        cpu->r[7] = rd32(0x0016cba4u + + 0xa0u);
    }
L_0016cba0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016cba4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0016cba8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016cbac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cbf4;
        }
    }
L_0016cbb0:;
    {
        cpu->r[5] = rd32(0x0016cbb8u + + 0x90u);
    }
L_0016cbb4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016cbb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016cbbc:;
    {
        cpu->r[14] = 0x0016cbc0u; fn_00093fd8(cpu);
    }
L_0016cbc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0016cbc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cbec;
        }
    }
L_0016cbc8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016cbcc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016cbd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016cbd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cc1c;
        }
    }
L_0016cbd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016cbdc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_0016cbe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016cbe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00001000u;
        }
    }
L_0016cbe8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cbecu)) return;
        }
    }
L_0016cbec:;
    {
        cpu->r[0] = 0x00000c00u;
    }
L_0016cbf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cbf4u)) return;
    }
L_0016cbf4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016cbf8:;
    {
        cpu->r[14] = 0x0016cbfcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016cbfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016cc00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cbb0;
        }
    }
L_0016cc04:;
    {
        cpu->r[5] = rd32(0x0016cc0cu + + 0x3cu);
    }
L_0016cc08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016cc0c:;
    {
        cpu->r[14] = 0x0016cc10u; fn_00094228(cpu);
    }
L_0016cc10:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016cc14:;
    {
        cpu->r[14] = 0x0016cc18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016cc18:;
    {
        goto L_0016cbb4;
    }
L_0016cc1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016cc20:;
    {
        cpu->r[14] = 0x0016cc24u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016cc24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016cc28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cbd8;
        }
    }
L_0016cc2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016cc30:;
    {
        cpu->r[14] = 0x0016cc34u; fn_00094228(cpu);
    }
L_0016cc34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016cc38:;
    {
        cpu->r[14] = 0x0016cc3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016cc3c:;
    {
        goto L_0016cbd8;
    }
}

/* _ZN4CCar20GetMaxBrakeIntensityEv @ 0016cc4c (arm) */
void fn_0016cc4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016cc4c:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_0016cc50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016cc54:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016cc58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016cc5c:;
    {
        cpu->r[5] = rd32(0x0016cc64u + + 0x220u);
    }
L_0016cc60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016cc64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016cc68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0016cc6c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016cc74u, cpu->r[5], 0, 0);
    }
L_0016cc70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0016cc74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cd74;
        }
    }
L_0016cc78:;
    {
        cpu->r[0] = 0x00000041u;
    }
L_0016cc7c:;
    {
        cpu->r[14] = 0x0016cc80u; fn_00093f34(cpu);
    }
L_0016cc80:;
    {
        cpu->r[3] = rd32(0x0016cc88u + + 0x200u);
    }
L_0016cc84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x354u);
    }
L_0016cc88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016cc90u + + 0x1ecu);
    }
L_0016cc8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0016cc90:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x5d4u);
    }
L_0016cc94:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016cc98:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_0016cc9c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0016cca0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_0016cca4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016cca8:;
    {
        vfp_sync_flags(cpu);
    }
L_0016ccac:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0016ccb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0016ccb4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_0016ccb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0016ccbc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0016ccc0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016ccc4:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0016ccc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016ccd0u + + 0x1b0u);
    }
L_0016cccc:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0016ccd0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016ccd4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016ccd8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_0016ccdc:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[2], 1, 31u, &shc), cpu->r[4], 1, 0);
    }
L_0016cce0:;
    {
        cpu->r[14] = 0x0016cce4u; fn_000b9d1c(cpu);
    }
L_0016cce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_0016cce8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ccec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016cd80;
        }
    }
L_0016ccf0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x484u);
    }
L_0016ccf4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000800u; set_nz(cpu, v); }
    }
L_0016ccf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016cdc0;
        }
    }
L_0016ccfc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0016cd00:;
    {
        cpu->r[0] = 0x00000040u;
    }
L_0016cd04:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[4] = v;
    }
L_0016cd08:;
    {
        cpu->r[14] = 0x0016cd0cu; fn_00093f34(cpu);
    }
L_0016cd0c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016cd10:;
    {
        cpu->r[0] = 0x00000041u;
    }
L_0016cd14:;
    {
        cpu->r[14] = 0x0016cd18u; fn_00093f34(cpu);
    }
L_0016cd18:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016cd1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016cd20:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0016cd24:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0016cd28:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0016cd2c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[4]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016cd30:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 31u, &shc); cpu->r[4] = v;
    }
L_0016cd34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016cd38:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[4], 1, 0);
    }
L_0016cd3c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016cd40:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0016cd44:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0016cd48:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016cd4c:;
    {
        cpu->r[14] = 0x0016cd50u; fn_0017fb0c(cpu);
    }
L_0016cd50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016cd54:;
    {
        cpu->r[0] = 0x00000042u;
    }
L_0016cd58:;
    {
        cpu->r[14] = 0x0016cd5cu; fn_00093f34(cpu);
    }
L_0016cd5c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016cd60:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0016cd64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016cd68:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016cd6c:;
    {
        cpu->r[14] = 0x0016cd70u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0016cd70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_0016cd74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016cd78:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016cd7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cd80u)) return;
    }
L_0016cd80:;
    {
        cpu->r[3] = rd32(0x0016cd88u + + 0x104u);
    }
L_0016cd84:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016cd88:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016cd8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016cd90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ce54;
        }
    }
L_0016cd94:;
    {
        cpu->r[8] = rd32(0x0016cd9cu + + 0xf4u);
    }
L_0016cd98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016cd9c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_0016cda0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0016cda4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ccf0;
        }
    }
L_0016cda8:;
    {
        cpu->r[14] = 0x0016cdacu; fn_000979a0(cpu);
    }
L_0016cdac:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_0016cdb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016cdb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000050u;
        }
    }
L_0016cdb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016cd00;
        }
    }
L_0016cdbc:;
    {
        goto L_0016ccf0;
    }
L_0016cdc0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x5d4u);
    }
L_0016cdc4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016cdc8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016cdcc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x1b0u);
    }
L_0016cdd0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016cdd4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016cdd8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016cddc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_0016cde0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0016cde4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016ce1c;
        }
    }
L_0016cde8:;
    {
        cpu->r[1] = rd32(0x0016cdf0u + + 0xa4u);
    }
L_0016cdec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016cdf0:;
    {
        cpu->r[12] = rd32(0x0016cdf8u + + 0xa0u);
    }
L_0016cdf4:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_0016cdf8:;
    {
        cpu->r[2] = rd32(0x0016ce00u + + 0x9cu);
    }
L_0016cdfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016ce04u, cpu->r[1], 0, 0);
    }
L_0016ce00:;
    {
        cpu->r[3] = rd32(0x0016ce08u + + 0x98u);
    }
L_0016ce04:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016ce0cu, cpu->r[12], 0, 0);
    }
L_0016ce08:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016ce10u, cpu->r[2], 0, 0);
    }
L_0016ce0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000013cu, 0, 0);
    }
L_0016ce10:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016ce18u, cpu->r[3], 0, 0);
    }
L_0016ce14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016ce18:;
    {
        cpu->r[14] = 0x0016ce1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016ce1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0016ce20:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016ce24:;
    {
        cpu->r[14] = 0x0016ce28u; fn_00180c78(cpu);
    }
L_0016ce28:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1c0u);
    }
L_0016ce2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016ce30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000003cu;
        }
    }
L_0016ce34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cd00;
        }
    }
L_0016ce38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016ce3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000046u;
        }
    }
L_0016ce40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cd00;
        }
    }
L_0016ce44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016ce48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000028u;
        }
    }
L_0016ce4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ccfc;
        }
    }
L_0016ce50:;
    {
        goto L_0016cd00;
    }
L_0016ce54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016ce58:;
    {
        cpu->r[14] = 0x0016ce5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016ce5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ce60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cd94;
        }
    }
L_0016ce64:;
    {
        cpu->r[8] = rd32(0x0016ce6cu + + 0x24u);
    }
L_0016ce68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016ce6c:;
    {
        cpu->r[14] = 0x0016ce70u; fn_00094228(cpu);
    }
L_0016ce70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016ce74:;
    {
        cpu->r[14] = 0x0016ce78u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016ce78:;
    {
        goto L_0016cd98;
    }
}

/* _ZN4CCar13UpdateBrakingEi @ 0016cea4 (arm) */
void fn_0016cea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016cea4:;
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
L_0016cea8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016ceac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016ceb0:;
    {
        cpu->r[14] = 0x0016ceb4u; fn_0016cc4c(cpu);
    }
L_0016ceb4:;
    {
        cpu->r[5] = rd32(0x0016cebcu + + 0x2b0u);
    }
L_0016ceb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016cec0u, cpu->r[5], 0, 0);
    }
L_0016cebc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016cec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cec4u)) return;
        }
    }
L_0016cec4:;
    {
        cpu->r[10] = rd32(0x0016ceccu + + 0x2a4u);
    }
L_0016cec8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016cecc:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0016ced0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016ced4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d088;
        }
    }
L_0016ced8:;
    {
        cpu->r[8] = rd32(0x0016cee0u + + 0x294u);
    }
L_0016cedc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016cee0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xfu);
    }
L_0016cee4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016cee8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000dcu;
        }
    }
L_0016ceec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000000b4u;
        }
    }
L_0016cef0:;
    {
        wr32(cpu->r[4] + + 0x578u, cpu->r[3]);
    }
L_0016cef4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016cef8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016cefc:;
    {
        { uint32_t v = cpu->r[3] & 0x08000000u; set_nz(cpu, v); }
    }
L_0016cf00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d0d4;
        }
    }
L_0016cf04:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016cf08:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016cf0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016cf10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d0b0;
        }
    }
L_0016cf14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016cf18:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x11u);
    }
L_0016cf1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016cf20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cf48;
        }
    }
L_0016cf24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x578u);
    }
L_0016cf28:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016cf2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_0016cf30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016cf34:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0016cf38:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016cf3c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0016cf40:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0016cf44:;
    {
        wr32(cpu->r[4] + + 0x578u, cpu->r[3]);
    }
L_0016cf48:;
    {
        uint32_t v = cpu->r[6] & 0x00000008u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0016cf4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016cfa8;
        }
    }
L_0016cf50:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0016cf54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016cf58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_0016cf5c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016cf60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
        }
    }
L_0016cf64:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_0016cf68:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_0016cf6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cf70u)) return;
        }
    }
L_0016cf70:;
    {
        cpu->r[3] = rd32(0x0016cf78u + + 0x200u);
    }
L_0016cf74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x368u);
    }
L_0016cf78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016cf7c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0016cf80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016cf84:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016cf88:;
    {
        cpu->r[14] = 0x0016cf8cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016cf8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016cf90:;
    {
        cpu->r[2] = 0x00001660u;
    }
L_0016cf94:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0016cf98:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0016cf9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0016cfa0:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016cfa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016cfa8u)) return;
    }
L_0016cfa8:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_0016cfac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016cfb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0016cfb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cfc8;
        }
    }
L_0016cfb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016cfbc:;
    {
        cpu->r[14] = 0x0016cfc0u; fn_0015d920(cpu);
    }
L_0016cfc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016cfc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d120;
        }
    }
L_0016cfc8:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_0016cfcc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016cfd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016cfd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d100;
        }
    }
L_0016cfd8:;
    {
        cpu->r[10] = 0x0000165cu;
    }
L_0016cfdc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016cfe0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_0016cfe4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016d144;
        }
    }
L_0016cfe8:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_0016cfec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x368u);
    }
L_0016cff0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016cff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016cff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d018;
        }
    }
L_0016cffc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d000:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d004:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016d008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d018;
        }
    }
L_0016d00c:;
    {
        { uint32_t v = cpu->r[3] & 0x08000000u; set_nz(cpu, v); }
    }
L_0016d010:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_0016d014:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0016d018:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x608u);
    }
L_0016d01c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_0016d020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d024:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_0016d028:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[7];
        }
    }
L_0016d02c:;
    {
        cpu->r[14] = 0x0016d030u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016d030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_0016d034:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_0016d038:;
    {
        cpu->r[1] = rd32(0x0016d040u + + 0x138u);
    }
L_0016d03c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_0016d040:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0016d044:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0016d048:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_0016d04c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0016d050:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0016d054:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016d058:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 5u, &shc), cpu->r[3], 1, 0);
    }
L_0016d05c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0016d060:;
    {
        cpu->r[14] = 0x0016d064u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016d064:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016d068:;
    {
        cpu->r[2] = 0x00001660u;
    }
L_0016d06c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000010u; set_nz(cpu, v); }
    }
L_0016d070:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0016d074:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0016d078:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0016d07c:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016d080:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016cf70;
        }
    }
L_0016d084:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016d088u)) return;
    }
L_0016d088:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016d08c:;
    {
        cpu->r[14] = 0x0016d090u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ced8;
        }
    }
L_0016d098:;
    {
        cpu->r[8] = rd32(0x0016d0a0u + + 0xd4u);
    }
L_0016d09c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d0a0:;
    {
        cpu->r[14] = 0x0016d0a4u; fn_00094228(cpu);
    }
L_0016d0a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016d0a8:;
    {
        cpu->r[14] = 0x0016d0acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d0ac:;
    {
        goto L_0016cedc;
    }
L_0016d0b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016d0b4:;
    {
        cpu->r[14] = 0x0016d0b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d0b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d0bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cf14;
        }
    }
L_0016d0c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d0c4:;
    {
        cpu->r[14] = 0x0016d0c8u; fn_00094228(cpu);
    }
L_0016d0c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016d0cc:;
    {
        cpu->r[14] = 0x0016d0d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d0d0:;
    {
        goto L_0016cf14;
    }
L_0016d0d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016d0d8:;
    {
        cpu->r[0] = 0x00000041u;
    }
L_0016d0dc:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016d0e0:;
    {
        uint32_t v = cpu->r[6] | 0x00000008u; cpu->r[6] = v;
    }
L_0016d0e4:;
    {
        cpu->r[14] = 0x0016d0e8u; fn_00093f34(cpu);
    }
L_0016d0e8:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0016d0ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d0f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0016d0f4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016d0f8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0016d0fc:;
    {
        goto L_0016cf04;
    }
L_0016d100:;
    {
        cpu->r[0] = 0x00000041u;
    }
L_0016d104:;
    {
        cpu->r[14] = 0x0016d108u; fn_00093f34(cpu);
    }
L_0016d108:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0016d10c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d110:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0016d114:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016d118:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_0016d11c:;
    {
        goto L_0016cfe8;
    }
L_0016d120:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016d124:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d128:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016d12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016cfc8;
        }
    }
L_0016d130:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016d134:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d138:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016d13c:;
    {
        cpu->r[14] = 0x0016d140u; fn_00160dac(cpu);
    }
L_0016d140:;
    {
        goto L_0016cfc8;
    }
L_0016d144:;
    {
        cpu->r[0] = 0x00000042u;
    }
L_0016d148:;
    {
        cpu->r[14] = 0x0016d14cu; fn_00093f34(cpu);
    }
L_0016d14c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_0016d150:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016d154:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d158:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0016d15c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016d160:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016d164:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[8]);
    }
L_0016d168:;
    {
        goto L_0016cfe8;
    }
}

/* _ZN4CCar18UpdateAccelerationEi @ 0016d17c (arm) */
void fn_0016d17c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016d17c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x198u);
    }
L_0016d180:;
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
L_0016d184:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016d188:;
    {
        cpu->r[5] = rd32(0x0016d190u + + 0x554u);
    }
L_0016d18c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016d190:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0016d194:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016d19cu, cpu->r[5], 0, 0);
    }
L_0016d198:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016d19c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016d1a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d1b0;
        }
    }
L_0016d1a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0016d1a8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016d1ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016d1b0u)) return;
    }
L_0016d1b0:;
    {
        cpu->r[8] = rd32(0x0016d1b8u + + 0x530u);
    }
L_0016d1b4:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_0016d1b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016d1bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d1c0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0016d1c4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016d1c8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016d1cc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016d1d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d1d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d228;
        }
    }
L_0016d1d8:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_0016d1dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016d1e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016d1e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016d1e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d1a4;
        }
    }
L_0016d1ec:;
    {
        cpu->r[3] = rd32(0x0016d1f4u + + 0x4f8u);
    }
L_0016d1f0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016d1f4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016d1f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016d1fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d424;
        }
    }
L_0016d200:;
    {
        cpu->r[10] = rd32(0x0016d208u + + 0x4e8u);
    }
L_0016d204:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016d208:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xcu);
    }
L_0016d20c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d228;
        }
    }
L_0016d214:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016d218:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d21c:;
    {
        cpu->r[3] = 0x00000ce4u;
    }
L_0016d220:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016d224:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016d1a4;
        }
    }
L_0016d228:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34cu);
    }
L_0016d22c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d2b8;
        }
    }
L_0016d234:;
    {
        cpu->r[3] = 0x00001660u;
    }
L_0016d238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d23c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016d240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d60c;
        }
    }
L_0016d244:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d248:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d24c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016d250:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d254:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000200u; cpu->r[1] = v;
    }
L_0016d258:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0016d25c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016d260:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0016d264:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_0016d268:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016d5c0;
        }
    }
L_0016d26c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0016d270:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d274:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x29cu);
    }
L_0016d278:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0016d27c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016d44c;
        }
    }
L_0016d280:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x348u);
    }
L_0016d284:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016d288:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016d28c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016d290:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016d5f0;
        }
    }
L_0016d294:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d298:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[2]);
    }
L_0016d29c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016d2a0:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[2]);
    }
L_0016d2a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d2a8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d2ac:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[7]);
    }
L_0016d2b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d2b4:;
    {
        goto L_0016d454;
    }
L_0016d2b8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000004u; set_nz(cpu, v); }
    }
L_0016d2bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d234;
        }
    }
L_0016d2c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d2c4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0016d2c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016d2cc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0016d2d0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016d2d4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016d2d8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016d2dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016d2e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016d2e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0016d2e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d2ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016d2f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0016d2f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d630;
        }
    }
L_0016d2f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016d300u + + 0x3ccu);
    }
L_0016d2fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d300:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0016d308u + + 0x3c8u);
    }
L_0016d304:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016d30cu + + 0x3c8u);
    }
L_0016d308:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d30c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000006u, cpu->r[3], 1, 0);
    }
L_0016d310:;
    {
        uint32_t v = cpu->r[3] & ~ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016d314:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0016d318:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016d31c:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0016d320:;
    {
        vfp_vmul(cpu, 16, 15, 14);
    }
L_0016d324:;
    {
        cpu->r[14] = 0x0016d328u; fn_0015d920(cpu);
    }
L_0016d328:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d660;
        }
    }
L_0016d330:;
    {
        cpu->r[3] = 0x00001ca0u;
    }
L_0016d334:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016d338:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d33c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d660;
        }
    }
L_0016d340:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d344:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_0016d348:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016d34c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[7];
    }
L_0016d350:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016d354:;
    {
        cpu->r[0] = 0x00069000u;
    }
L_0016d358:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016d35c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016d360:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_0016d364:;
    {
        cpu->r[14] = 0x0016d368u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016d368:;
    {
        { uint32_t v = cpu->r[6] & 0x00000080u; set_nz(cpu, v); }
    }
L_0016d36c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d370:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016d374:;
    {
        vfp_vmla(cpu, 17, 15, 16);
    }
L_0016d378:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_0016d37c:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0016d380:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x364u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0016d384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d3a8;
        }
    }
L_0016d388:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d38c:;
    {
        cpu->r[0] = 0x00001000u;
    }
L_0016d390:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016d394:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016d398:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0016d39c:;
    {
        cpu->r[14] = 0x0016d3a0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016d3a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_0016d3a4:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[7]);
    }
L_0016d3a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d3ac:;
    {
        cpu->r[5] = 0x00001660u;
    }
L_0016d3b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x348u);
    }
L_0016d3b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016d3b8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[1]);
    }
L_0016d3bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016d3c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016d3f4;
        }
    }
L_0016d3c4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d3c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d3cc:;
    {
        uint32_t v = cpu->r[1] & 0x00000010u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016d3d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d3f4;
        }
    }
L_0016d3d4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016d3d8:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_0016d3dc:;
    {
        cpu->r[0] = 0x0000432cu;
    }
L_0016d3e0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_0016d3e4:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0016d3e8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0016d3ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d3f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d714;
        }
    }
L_0016d3f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d3f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d3fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d400:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0016d404:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
        }
    }
L_0016d408:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016d610;
        }
    }
L_0016d40c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d410:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d414:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d418:;
    {
        uint32_t v = cpu->r[1] | 0x00000200u; cpu->r[1] = v;
    }
L_0016d41c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0016d420:;
    {
        goto L_0016d25c;
    }
L_0016d424:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016d428:;
    {
        cpu->r[14] = 0x0016d42cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d42c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d200;
        }
    }
L_0016d434:;
    {
        cpu->r[10] = rd32(0x0016d43cu + + 0x2b4u);
    }
L_0016d438:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016d43c:;
    {
        cpu->r[14] = 0x0016d440u; fn_00094228(cpu);
    }
L_0016d440:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016d444:;
    {
        cpu->r[14] = 0x0016d448u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d448:;
    {
        goto L_0016d204;
    }
L_0016d44c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016d450:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016d680;
        }
    }
L_0016d454:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0016d458:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0016d45c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_0016d460:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0016d464:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016d468:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016d470u + + 0x25cu);
    }
L_0016d46c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016d470:;
    {
        vfp_vdiv(cpu, 16, 13, 14);
    }
L_0016d474:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0016d478:;
    {
        vfp_sync_flags(cpu);
    }
L_0016d47c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_0016d480:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016d508;
        }
    }
L_0016d484:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_0016d488:;
    {
        vfp_sync_flags(cpu);
    }
L_0016d48c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016d4c4;
        }
    }
L_0016d490:;
    {
        cpu->r[1] = rd32(0x0016d498u + + 0x25cu);
    }
L_0016d494:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016d498:;
    {
        cpu->r[12] = rd32(0x0016d4a0u + + 0x258u);
    }
L_0016d49c:;
    {
        cpu->r[14] = 0x00000c56u;
    }
L_0016d4a0:;
    {
        cpu->r[2] = rd32(0x0016d4a8u + + 0x254u);
    }
L_0016d4a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016d4acu, cpu->r[1], 0, 0);
    }
L_0016d4a8:;
    {
        cpu->r[3] = rd32(0x0016d4b0u + + 0x250u);
    }
L_0016d4ac:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016d4b4u, cpu->r[12], 0, 0);
    }
L_0016d4b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016d4b8u, cpu->r[2], 0, 0);
    }
L_0016d4b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000170u, 0, 0);
    }
L_0016d4b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016d4c0u, cpu->r[3], 0, 0);
    }
L_0016d4bc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016d4c0:;
    {
        cpu->r[14] = 0x0016d4c4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016d4c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016d4ccu + + 0x200u);
    }
L_0016d4c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_0016d4cc:;
    {
        vfp_sync_flags(cpu);
    }
L_0016d4d0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0016d508;
        }
    }
L_0016d4d4:;
    {
        cpu->r[1] = rd32(0x0016d4dcu + + 0x228u);
    }
L_0016d4d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016d4dc:;
    {
        cpu->r[12] = rd32(0x0016d4e4u + + 0x224u);
    }
L_0016d4e0:;
    {
        cpu->r[14] = 0x00000c57u;
    }
L_0016d4e4:;
    {
        cpu->r[2] = rd32(0x0016d4ecu + + 0x220u);
    }
L_0016d4e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016d4f0u, cpu->r[1], 0, 0);
    }
L_0016d4ec:;
    {
        cpu->r[3] = rd32(0x0016d4f4u + + 0x21cu);
    }
L_0016d4f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016d4f8u, cpu->r[12], 0, 0);
    }
L_0016d4f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016d4fcu, cpu->r[2], 0, 0);
    }
L_0016d4f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000170u, 0, 0);
    }
L_0016d4fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016d504u, cpu->r[3], 0, 0);
    }
L_0016d500:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016d504:;
    {
        cpu->r[14] = 0x0016d508u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016d508:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016d510u + + 0x1c8u);
    }
L_0016d50c:;
    {
        vfp_vmul(cpu, 12, 16, 15);
    }
L_0016d510:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016d514:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0016d518:;
    {
        cpu->r[14] = 0x0016d51cu; fn_000960b4(cpu);
    }
L_0016d51c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34cu);
    }
L_0016d520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d524:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d574;
        }
    }
L_0016d52c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d530:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d538:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x2a4u);
    }
L_0016d53c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2a0u);
    }
L_0016d540:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0016d544:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016d548:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0016d54c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0016d550:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016d554:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016d558:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_0016d55c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016d564u + + 0x178u);
    }
L_0016d560:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0016d564:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016d568:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016d56c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016d570:;
    {
        goto L_0016d1a4;
    }
L_0016d574:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d57c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016d580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d584:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0016d588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d58c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0016d590:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x2a0u);
    }
L_0016d594:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x2a4u);
    }
L_0016d598:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_0016d59c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_0016d5a0:;
    {
        cpu->r[14] = 0x0016d5a4u; fn_0015eb4c(cpu);
    }
L_0016d5a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016d5a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016d5ac:;
    {
        cpu->r[14] = 0x0016d5b0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016d5b0:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016d5b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0016d5b8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016d5bc:;
    {
        goto L_0016d1a4;
    }
L_0016d5c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0016d5c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d618;
        }
    }
L_0016d5c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016d5cc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016d5d0:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[2]);
    }
L_0016d5d4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0016d5d8:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016d5dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0016d5e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0016d5e4:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x29cu);
    }
L_0016d5e8:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[7]);
    }
L_0016d5ec:;
    {
        goto L_0016d26c;
    }
L_0016d5f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d5f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016d5f8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0016d5fc:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[2]);
    }
L_0016d600:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d604:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d608:;
    {
        goto L_0016d454;
    }
L_0016d60c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016d610:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016d614:;
    {
        goto L_0016d40c;
    }
L_0016d618:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016d61c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016d620:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0016d624:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[2]);
    }
L_0016d628:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0016d62c:;
    {
        goto L_0016d26c;
    }
L_0016d630:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016d634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d638:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016d63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d75c;
        }
    }
L_0016d640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016d644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d74c;
        }
    }
L_0016d648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016d64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d2f8;
        }
    }
L_0016d650:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_0016d654:;
    {
        cpu->r[14] = 0x0016d658u; fn_00093f34(cpu);
    }
L_0016d658:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d65c:;
    {
        goto L_0016d2fc;
    }
L_0016d660:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016d664:;
    {
        cpu->r[0] = 0x00001000u;
    }
L_0016d668:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016d66c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[7];
    }
L_0016d670:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016d674:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016d678:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016d67c:;
    {
        goto L_0016d364;
    }
L_0016d680:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016d684:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016d688:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d68c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d6a8;
        }
    }
L_0016d690:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016d698:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d69c:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[7]);
    }
L_0016d6a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0016d6a4:;
    {
        goto L_0016d454;
    }
L_0016d6a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0016d6ac:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016d6b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016d6b8u + + 0x28u);
    }
L_0016d6b4:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[7]);
    }
L_0016d6b8:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[7]);
    }
L_0016d6bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016d6c0:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016d6c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2b0u);
    }
L_0016d6c8:;
    {
        goto L_0016d454;
    }
L_0016d714:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016d718:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016d71c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x29cu);
    }
L_0016d720:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_0016d724:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016d414;
        }
    }
L_0016d728:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_0016d72c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0016d730:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016d734:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d738:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[2]);
    }
L_0016d73c:;
    {
        cpu->r[14] = 0x0016d740u; fn_0015eb4c(cpu);
    }
L_0016d740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016d744:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[0]);
    }
L_0016d748:;
    {
        goto L_0016d23c;
    }
L_0016d74c:;
    {
        cpu->r[0] = 0x00000015u;
    }
L_0016d750:;
    {
        cpu->r[14] = 0x0016d754u; fn_00093f34(cpu);
    }
L_0016d754:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d758:;
    {
        goto L_0016d2fc;
    }
L_0016d75c:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_0016d760:;
    {
        cpu->r[14] = 0x0016d764u; fn_00093f34(cpu);
    }
L_0016d764:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016d768:;
    {
        goto L_0016d2fc;
    }
}

/* _ZN4CCar13GetMaxSlidingEv @ 0016d76c (arm) */
void fn_0016d76c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016d76c:;
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
L_0016d770:;
    {
        cpu->r[6] = rd32(0x0016d778u + + 0x1dcu);
    }
L_0016d774:;
    {
        cpu->r[8] = rd32(0x0016d77cu + + 0x1dcu);
    }
L_0016d778:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0016d77c:;
    {
        cpu->r[6] = add_flags(cpu, 0x0016d784u, cpu->r[6], 0, 0);
    }
L_0016d780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016d784:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0016d788:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0016d78c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016d790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d808;
        }
    }
L_0016d794:;
    {
        cpu->r[7] = rd32(0x0016d79cu + + 0x1c0u);
    }
L_0016d798:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0016d79c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016d7a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016d7a4:;
    {
        cpu->r[5] = rd8(cpu->r[10] + + 0xeu);
    }
L_0016d7a8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016d7ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0016d7b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000064u;
        }
    }
L_0016d7b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000050u;
        }
    }
L_0016d7b8:;
    {
        cpu->r[14] = 0x0016d7bcu; fn_000b9d1c(cpu);
    }
L_0016d7bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d7c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d88c;
        }
    }
L_0016d7c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016d7c8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000800u; set_nz(cpu, v); }
    }
L_0016d7cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d830;
        }
    }
L_0016d7d0:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_0016d7d4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0016d7d8:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016d7dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016d7e0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x618u);
    }
L_0016d7e4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0016d7e8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0016d7ec:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0016d7f0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[5] = v;
    }
L_0016d7f4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016d7f8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0016d7fc:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[5], 1, 0);
    }
L_0016d800:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016d804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016d808u)) return;
    }
L_0016d808:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016d80c:;
    {
        cpu->r[14] = 0x0016d810u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d794;
        }
    }
L_0016d818:;
    {
        cpu->r[7] = rd32(0x0016d820u + + 0x13cu);
    }
L_0016d81c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0016d820:;
    {
        cpu->r[14] = 0x0016d824u; fn_00094228(cpu);
    }
L_0016d824:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016d828:;
    {
        cpu->r[14] = 0x0016d82cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d82c:;
    {
        goto L_0016d798;
    }
L_0016d830:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016d834:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016d838:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016d83c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016d840:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016d844:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016d848:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016d84c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_0016d850:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0016d854:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016d8f0;
        }
    }
L_0016d858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0016d85c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016d860:;
    {
        cpu->r[14] = 0x0016d864u; fn_00180c78(cpu);
    }
L_0016d864:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1c0u);
    }
L_0016d868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016d86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d884;
        }
    }
L_0016d870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016d874:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000046u;
        }
    }
L_0016d878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d7d4;
        }
    }
L_0016d87c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016d880:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d7d0;
        }
    }
L_0016d884:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0016d888:;
    {
        goto L_0016d7d4;
    }
L_0016d88c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0016d890:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0016d894:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016d898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d8cc;
        }
    }
L_0016d89c:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0016d8a0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
    }
L_0016d8a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0016d8a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d7c4;
        }
    }
L_0016d8ac:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_0016d8b0:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0016d8b4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016d8b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d928;
        }
    }
L_0016d8bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016d8c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000055u;
        }
    }
L_0016d8c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d7d4;
        }
    }
L_0016d8c8:;
    {
        goto L_0016d7c4;
    }
L_0016d8cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016d8d0:;
    {
        cpu->r[14] = 0x0016d8d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d8d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d89c;
        }
    }
L_0016d8dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016d8e0:;
    {
        cpu->r[14] = 0x0016d8e4u; fn_00094228(cpu);
    }
L_0016d8e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016d8e8:;
    {
        cpu->r[14] = 0x0016d8ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d8ec:;
    {
        goto L_0016d89c;
    }
L_0016d8f0:;
    {
        cpu->r[1] = rd32(0x0016d8f8u + + 0x68u);
    }
L_0016d8f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016d8f8:;
    {
        cpu->r[12] = rd32(0x0016d900u + + 0x64u);
    }
L_0016d8fc:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_0016d900:;
    {
        cpu->r[2] = rd32(0x0016d908u + + 0x60u);
    }
L_0016d904:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016d90cu, cpu->r[1], 0, 0);
    }
L_0016d908:;
    {
        cpu->r[3] = rd32(0x0016d910u + + 0x5cu);
    }
L_0016d90c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016d914u, cpu->r[12], 0, 0);
    }
L_0016d910:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016d918u, cpu->r[2], 0, 0);
    }
L_0016d914:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000013cu, 0, 0);
    }
L_0016d918:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016d920u, cpu->r[3], 0, 0);
    }
L_0016d91c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016d920:;
    {
        cpu->r[14] = 0x0016d924u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016d924:;
    {
        goto L_0016d858;
    }
L_0016d928:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016d92c:;
    {
        cpu->r[14] = 0x0016d930u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016d930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d934:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
        }
    }
L_0016d938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d8bc;
        }
    }
L_0016d93c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016d940:;
    {
        cpu->r[14] = 0x0016d944u; fn_00094228(cpu);
    }
L_0016d944:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016d948:;
    {
        cpu->r[14] = 0x0016d94cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016d94c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x12u);
    }
L_0016d950:;
    {
        goto L_0016d8bc;
    }
}

/* _ZN4CCar13UpdateTurningEi @ 0016d970 (arm) */
void fn_0016d970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016d970:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_0016d974:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0016d978:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0016d97c:;
    {
        cpu->r[5] = rd32(0x0016d984u + + 0x43cu);
    }
L_0016d980:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0016d984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d988:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016d98c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016d994u, cpu->r[5], 0, 0);
    }
L_0016d990:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016d994:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d9b0;
        }
    }
L_0016d998:;
    {
        cpu->r[3] = rd32(0x0016d9a0u + + 0x424u);
    }
L_0016d99c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016d9a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016d9a4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_0016d9a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016d9ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d9b8;
        }
    }
L_0016d9b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0016d9b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016d9b8u)) return;
    }
L_0016d9b8:;
    {
        cpu->r[14] = 0x0016d9bcu; fn_0015d920(cpu);
    }
L_0016d9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d9c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dbb0;
        }
    }
L_0016d9c4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016d9c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016d9cc:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016d9d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dbd4;
        }
    }
L_0016d9d4:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016d9d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016db90;
        }
    }
L_0016d9dc:;
    {
        cpu->r[7] = 0x000000a0u;
    }
L_0016d9e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d9e4:;
    {
        cpu->r[14] = 0x0016d9e8u; fn_0015d920(cpu);
    }
L_0016d9e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016d9ec:;
    {
        cpu->r[14] = 0x0016d9f0u; fn_0015d920(cpu);
    }
L_0016d9f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016d9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dc4c;
        }
    }
L_0016d9f8:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016d9fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dde0;
        }
    }
L_0016da00:;
    {
        uint32_t v = cpu->r[6] & 0x00000002u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_0016da04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016de58;
        }
    }
L_0016da08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x620u);
    }
L_0016da0c:;
    {
        cpu->r[2] = 0x00000578u;
    }
L_0016da10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016da14:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016da18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000003e8u;
        }
    }
L_0016da1c:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016da20:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0016da24:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0016da28:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[6]);
        }
    }
L_0016da2c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001664u;
        }
    }
L_0016da30:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
        }
    }
L_0016da34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016da8c;
        }
    }
L_0016da38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016da3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016dfb0;
        }
    }
L_0016da40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016da44:;
    {
        cpu->r[1] = 0x00001664u;
    }
L_0016da48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016da50u + + 0x388u);
    }
L_0016da4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0016da50:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016da54:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_0016da58:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7]; cpu->r[0] = v;
    }
L_0016da5c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0016da60:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016da64:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
    }
L_0016da68:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016da6c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0016da70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016da78u + + 0x340u);
    }
L_0016da74:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0016da78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016da80u + + 0x33cu);
    }
L_0016da7c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0016da80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016da84:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016da88:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016da8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016da90:;
    {
        cpu->r[14] = 0x0016da94u; fn_0015d920(cpu);
    }
L_0016da94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016da98:;
    {
        cpu->r[14] = 0x0016da9cu; fn_0015d920(cpu);
    }
L_0016da9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016daa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dacc;
        }
    }
L_0016daa4:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016daa8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016daac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016dab0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dacc;
        }
    }
L_0016dab4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016dab8:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0016dabc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0016dac0:;
    {
        cpu->r[3] = 0x00000ff6u;
    }
L_0016dac4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016dac8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016df04;
        }
    }
L_0016dacc:;
    {
        cpu->r[3] = 0x00001c88u;
    }
L_0016dad0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016dad4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016dad8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016dadc:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016dae0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016dae4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016dae8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016daec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016daf0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016daf4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0016daf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016dafc:;
    {
        cpu->r[14] = 0x0016db00u; fn_00180c78(cpu);
    }
L_0016db00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016db04:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0016db08:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
        }
    }
L_0016db0c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016db10:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_0016db14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016db18:;
    {
        cpu->r[14] = 0x0016db1cu; fn_00180c78(cpu);
    }
L_0016db1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0016db20:;
    {
        { uint32_t v = cpu->r[3] & 0x00001000u; set_nz(cpu, v); }
    }
L_0016db24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dd58;
        }
    }
L_0016db28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0016db2c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0016db30:;
    {
        wr32(cpu->r[4] + + 0x394u, cpu->r[2]);
    }
L_0016db34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016db38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x38cu);
    }
L_0016db3c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_0016db40:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 4u, &shc), cpu->r[1], 1, 0);
    }
L_0016db44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0016db48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016db4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000000fu, 0, 0);
    }
L_0016db50:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_0016db54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016db58:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_0016db5c:;
    {
        wr32(cpu->r[4] + + 0x38cu, cpu->r[1]);
    }
L_0016db60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016dd9c;
        }
    }
L_0016db64:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_0016db68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0016db6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0016db70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016db74:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0016db78:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_0016db7c:;
    {
        wr32(cpu->r[4] + + 0x390u, cpu->r[2]);
    }
L_0016db80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016db84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0016db88:;
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
L_0016db8c:;
    {
        return fn_0015d920(cpu);
    }
L_0016db90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x608u);
    }
L_0016db94:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016db98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0016db9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_0016dba0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000050u;
        }
    }
L_0016dba4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016d9e0;
        }
    }
L_0016dba8:;
    {
        cpu->r[7] = 0x00000028u;
    }
L_0016dbac:;
    {
        goto L_0016d9e0;
    }
L_0016dbb0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016dbb4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016dbb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016dbbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x388u);
        }
    }
L_0016dbc0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x384u, cpu->r[3]);
        }
    }
L_0016dbc4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016dbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016dbcc:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016dbd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d9d4;
        }
    }
L_0016dbd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016dbd8:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016dbdc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016dbe0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016dbe4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016dbe8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016dbec:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016dbf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0016dbf4:;
    {
        cpu->r[14] = 0x0016dbf8u; fn_00180c78(cpu);
    }
L_0016dbf8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb4u);
    }
L_0016dbfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0016dc00:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0016dc04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, 0x00000800u, cpu->r[3], 1, 0);
        }
    }
L_0016dc08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016dc0c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016dc10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d9dc;
        }
    }
L_0016dc14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_0016dc18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016dba8;
        }
    }
L_0016dc1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0016dc20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000032u;
        }
    }
L_0016dc24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016dc28:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_0016dc2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0016dc30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000010u;
        }
    }
L_0016dc34:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_0016dc38:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_0016dc3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016dc40:;
    {
        cpu->r[14] = 0x0016dc44u; fn_0017fb0c(cpu);
    }
L_0016dc44:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016dc48:;
    {
        goto L_0016d9e0;
    }
L_0016dc4c:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016dc50:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016dc54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016dc58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016d9f8;
        }
    }
L_0016dc5c:;
    {
        cpu->r[14] = 0x0016dc60u; fn_000979a0(cpu);
    }
L_0016dc60:;
    {
        cpu->r[14] = 0x0016dc64u; fn_00093fd8(cpu);
    }
L_0016dc64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0016dc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d9f8;
        }
    }
L_0016dc6c:;
    {
        cpu->r[14] = 0x0016dc70u; fn_000979a0(cpu);
    }
L_0016dc70:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x4u);
    }
L_0016dc74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016dc78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016d9f8;
        }
    }
L_0016dc7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016dc80:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016dc84:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016dc88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016dc8c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016dc90:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016dc94:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_0016dc98:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016dc9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016dca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dfe8;
        }
    }
L_0016dca4:;
    {
        cpu->r[3] = rd32(0x0016dcacu + + 0x11cu);
    }
L_0016dca8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016dcac:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016dcb0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016dcb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016df4c;
        }
    }
L_0016dcb8:;
    {
        cpu->r[6] = rd32(0x0016dcc0u + + 0x10cu);
    }
L_0016dcbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016dcc0:;
    {
        cpu->r[14] = 0x0016dcc4u; fn_00093fd8(cpu);
    }
L_0016dcc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0016dcc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dcdc;
        }
    }
L_0016dccc:;
    {
        cpu->r[14] = 0x0016dcd0u; fn_000979a0(cpu);
    }
L_0016dcd0:;
    {
        cpu->r[14] = 0x0016dcd4u; fn_00093fd8(cpu);
    }
L_0016dcd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016dcd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016da8c;
        }
    }
L_0016dcdc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x588u);
    }
L_0016dce0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dce4:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016dce8:;
    {
        cpu->r[14] = 0x0016dcecu; fn_0016cb70(cpu);
    }
L_0016dcec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016dcf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016df74;
        }
    }
L_0016dcf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dcf8:;
    {
        cpu->r[14] = 0x0016dcfcu; fn_0016cb70(cpu);
    }
L_0016dcfc:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016dd00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016dd04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dd08:;
    {
        cpu->r[14] = 0x0016dd10u;
    }
L_0016dd0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016dd10u)) return;
    }
L_0016dd10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016dd14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016dd18:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016da8c;
        }
    }
L_0016dd1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dd20:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016dd24:;
    {
        cpu->r[14] = 0x0016dd28u; fn_0016cb70(cpu);
    }
L_0016dd28:;
    {
        add_flags(cpu, cpu->r[5], cpu->r[0], 0, 1);
    }
L_0016dd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dee4;
        }
    }
L_0016dd30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dd34:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016dd38:;
    {
        cpu->r[14] = 0x0016dd3cu; fn_0016cb70(cpu);
    }
L_0016dd3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016dd40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016da8c;
        }
    }
L_0016dd44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dd48:;
    {
        cpu->r[14] = 0x0016dd4cu; fn_0016cb70(cpu);
    }
L_0016dd4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0016dd50:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016dd54:;
    {
        goto L_0016da8c;
    }
L_0016dd58:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0016dd5c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0016dd60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dd64:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0016dd68:;
    {
        cpu->r[14] = 0x0016dd6cu; fn_0017c3d0(cpu);
    }
L_0016dd6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016dd70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016def8;
        }
    }
L_0016dd74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x394u);
    }
L_0016dd78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0016dd7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0016dd80:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0016dd84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0016dd88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016dd8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0016dd90:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0016dd94:;
    {
        wr32(cpu->r[4] + + 0x394u, cpu->r[2]);
    }
L_0016dd98:;
    {
        goto L_0016db34;
    }
L_0016dd9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016dda0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0016dda4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0016dda8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016ddac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0016ddb0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0016ddb4:;
    {
        goto L_0016db7c;
    }
L_0016dde0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016dde4:;
    {
        cpu->r[3] = 0x00001664u;
    }
L_0016dde8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016ddf0u + - 0x18u);
    }
L_0016ddec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016ddf0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ddf4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0016ddf8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[2] = v;
    }
L_0016ddfc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0016de00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016de04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016de08:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016de0c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0016de10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016de18u + - 0x44u);
    }
L_0016de14:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0016de18:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016de1c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016de20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0016de24:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016de28:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016de2c:;
    {
        cpu->r[14] = 0x0016de30u; fn_0016cb70(cpu);
    }
L_0016de30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016de34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016dfa0;
        }
    }
L_0016de38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016de3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016de40:;
    {
        cpu->r[14] = 0x0016de48u;
    }
L_0016de44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016de48u)) return;
    }
L_0016de48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016de4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016de50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016da8c;
        }
    }
L_0016de54:;
    {
        goto L_0016dd30;
    }
L_0016de58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016de5c:;
    {
        cpu->r[3] = 0x00001664u;
    }
L_0016de60:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016de68u + - 0x98u);
    }
L_0016de64:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016de68:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016de6c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_0016de70:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[2] = v;
    }
L_0016de74:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0016de78:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016de7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016de80:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016de84:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0016de88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016de90u + - 0xbcu);
    }
L_0016de8c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0016de90:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016de94:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016de98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0016de9c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016dea0:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016dea4:;
    {
        cpu->r[14] = 0x0016dea8u; fn_0016cb70(cpu);
    }
L_0016dea8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016deac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016deb0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016df38;
        }
    }
L_0016deb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016deb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016debc:;
    {
        cpu->r[14] = 0x0016dec4u;
    }
L_0016dec0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016dec4u)) return;
    }
L_0016dec4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016dec8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016decc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016da8c;
        }
    }
L_0016ded0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ded4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016ded8:;
    {
        cpu->r[14] = 0x0016dedcu; fn_0016cb70(cpu);
    }
L_0016dedc:;
    {
        add_flags(cpu, cpu->r[5], cpu->r[0], 0, 1);
    }
L_0016dee0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016da8c;
        }
    }
L_0016dee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dee8:;
    {
        cpu->r[14] = 0x0016deecu; fn_0016cb70(cpu);
    }
L_0016deec:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 0);
    }
L_0016def0:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016def4:;
    {
        goto L_0016da8c;
    }
L_0016def8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0016defc:;
    {
        wr32(cpu->r[4] + + 0x394u, cpu->r[0]);
    }
L_0016df00:;
    {
        goto L_0016db34;
    }
L_0016df04:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016df08:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016df0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016df10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016df14:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016df18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016df1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dacc;
        }
    }
L_0016df20:;
    {
        cpu->r[2] = 0x00001c88u;
    }
L_0016df24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016df28:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001bu, 1, 1);
    }
L_0016df2c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0016df30:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_0016df34:;
    {
        goto L_0016dad8;
    }
L_0016df38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016df3c:;
    {
        cpu->r[14] = 0x0016df40u; fn_0016cb70(cpu);
    }
L_0016df40:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016df44:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016df48:;
    {
        goto L_0016deb4;
    }
L_0016df4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016df50:;
    {
        cpu->r[14] = 0x0016df54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016df54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016df58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016dcb8;
        }
    }
L_0016df5c:;
    {
        cpu->r[6] = rd32(0x0016df64u + - 0x198u);
    }
L_0016df60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016df64:;
    {
        cpu->r[14] = 0x0016df68u; fn_00094228(cpu);
    }
L_0016df68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016df6c:;
    {
        cpu->r[14] = 0x0016df70u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016df70:;
    {
        goto L_0016dcbc;
    }
L_0016df74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016df78:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016df7c:;
    {
        cpu->r[14] = 0x0016df80u; fn_0016cb70(cpu);
    }
L_0016df80:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016df84:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016df88:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016dd00;
        }
    }
L_0016df8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016df90:;
    {
        cpu->r[14] = 0x0016df94u; fn_0016cb70(cpu);
    }
L_0016df94:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016df98:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016df9c:;
    {
        goto L_0016dd00;
    }
L_0016dfa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016dfa4:;
    {
        cpu->r[14] = 0x0016dfa8u; fn_0016cb70(cpu);
    }
L_0016dfa8:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016dfac:;
    {
        goto L_0016de38;
    }
L_0016dfb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016dfb4:;
    {
        cpu->r[1] = 0x00001664u;
    }
L_0016dfb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016dfc0u + - 0x1e8u);
    }
L_0016dfbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0016dfc0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016dfc4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_0016dfc8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7]; cpu->r[0] = v;
    }
L_0016dfcc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0016dfd0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016dfd4:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[3]);
    }
L_0016dfd8:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0016dfdc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016dfe4u + - 0x208u);
    }
L_0016dfe0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016dfe4:;
    {
        goto L_0016da74;
    }
L_0016dfe8:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_0016dfec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016dff0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0016dff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016dff8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016dca4;
        }
    }
L_0016dffc:;
    {
        goto L_0016d9f8;
    }
}

/* _ZN4CCar21UpdateTurningInFlightEi @ 0016e000 (arm) */
void fn_0016e000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016e000:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016e004:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016e008:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016e00c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016e010:;
    {
        cpu->r[5] = rd32(0x0016e018u + + 0x35cu);
    }
L_0016e014:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016e018:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016e01c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016e020:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016e028u, cpu->r[5], 0, 0);
    }
L_0016e024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e040;
        }
    }
L_0016e028:;
    {
        cpu->r[3] = rd32(0x0016e030u + + 0x348u);
    }
L_0016e02c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e030:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016e034:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_0016e038:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e03c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e048;
        }
    }
L_0016e040:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016e044:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016e048u)) return;
    }
L_0016e048:;
    {
        cpu->r[14] = 0x0016e04cu; fn_0015d920(cpu);
    }
L_0016e04c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e068;
        }
    }
L_0016e054:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016e058:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016e05c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e060:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x388u);
        }
    }
L_0016e064:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x384u, cpu->r[3]);
        }
    }
L_0016e068:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0016e06c:;
    {
        cpu->r[14] = 0x0016e070u; fn_00093f34(cpu);
    }
L_0016e070:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016e074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e078:;
    {
        cpu->r[14] = 0x0016e07cu; fn_0015d920(cpu);
    }
L_0016e07c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e094;
        }
    }
L_0016e084:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016e088:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016e08c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e20c;
        }
    }
L_0016e094:;
    {
        { uint32_t v = cpu->r[6] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016e098:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0016e09c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e0e8;
        }
    }
L_0016e0a0:;
    {
        uint32_t v = cpu->r[6] & 0x00000002u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_0016e0a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x380u, cpu->r[6]);
        }
    }
L_0016e0a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001664u;
        }
    }
L_0016e0ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
        }
    }
L_0016e0b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e178;
        }
    }
L_0016e0b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x38cu);
    }
L_0016e0b8:;
    {
        cpu->r[3] = 0x00001c88u;
    }
L_0016e0bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e0c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0016e0c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016e0c8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 4u, &shc), cpu->r[2], 1, 0);
    }
L_0016e0cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0016e0d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0016e0d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0016e0d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0016e0dc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_0016e0e0:;
    {
        wr32(cpu->r[4] + + 0x38cu, cpu->r[3]);
    }
L_0016e0e4:;
    {
        goto L_0016e040;
    }
L_0016e0e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016e0ec:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0016e0f0:;
    {
        cpu->r[2] = 0x00001664u;
    }
L_0016e0f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e0f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e0fc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[14]; cpu->r[3] = v;
    }
L_0016e100:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016e104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e108:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0016e10c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[14];
        }
    }
L_0016e110:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 4u, &shc), 0, 0);
    }
L_0016e114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0016e118:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[5] = v;
    }
L_0016e11c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0016e120:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0016e124:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016e128:;
    {
        cpu->r[14] = 0x0016e12cu; fn_0016cb70(cpu);
    }
L_0016e12c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016e130:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016e34c;
        }
    }
L_0016e134:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016e138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e13c:;
    {
        cpu->r[14] = 0x0016e144u;
    }
L_0016e140:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016e144u)) return;
    }
L_0016e144:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016e148:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016e14c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016e0b4;
        }
    }
L_0016e150:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e154:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e158:;
    {
        cpu->r[14] = 0x0016e15cu; fn_0016cb70(cpu);
    }
L_0016e15c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016e160:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e0b4;
        }
    }
L_0016e164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e168:;
    {
        cpu->r[14] = 0x0016e16cu; fn_0016cb70(cpu);
    }
L_0016e16c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0016e170:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e174:;
    {
        goto L_0016e0b4;
    }
L_0016e178:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x384u);
    }
L_0016e17c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0016e180:;
    {
        cpu->r[2] = 0x00001664u;
    }
L_0016e184:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e188:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e18c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_0016e190:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016e194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e198:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0016e19c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_0016e1a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 4u, &shc), 1, 0);
    }
L_0016e1a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0016e1a8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0016e1ac:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016e1b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0016e1b4:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016e1b8:;
    {
        cpu->r[14] = 0x0016e1bcu; fn_0016cb70(cpu);
    }
L_0016e1bc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016e1c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016e1c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016e2e4;
        }
    }
L_0016e1c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016e1cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e1d0:;
    {
        cpu->r[14] = 0x0016e1d8u;
    }
L_0016e1d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016e1d8u)) return;
    }
L_0016e1d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016e1dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016e1e0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016e0b4;
        }
    }
L_0016e1e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e1e8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e1ec:;
    {
        cpu->r[14] = 0x0016e1f0u; fn_0016cb70(cpu);
    }
L_0016e1f0:;
    {
        add_flags(cpu, cpu->r[5], cpu->r[0], 0, 1);
    }
L_0016e1f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e0b4;
        }
    }
L_0016e1f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e1fc:;
    {
        cpu->r[14] = 0x0016e200u; fn_0016cb70(cpu);
    }
L_0016e200:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 0);
    }
L_0016e204:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e208:;
    {
        goto L_0016e0b4;
    }
L_0016e20c:;
    {
        cpu->r[14] = 0x0016e210u; fn_000979a0(cpu);
    }
L_0016e210:;
    {
        cpu->r[14] = 0x0016e214u; fn_00093fd8(cpu);
    }
L_0016e214:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0016e218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e094;
        }
    }
L_0016e21c:;
    {
        cpu->r[14] = 0x0016e220u; fn_000979a0(cpu);
    }
L_0016e220:;
    {
        cpu->r[14] = 0x0016e224u; fn_00093fd8(cpu);
    }
L_0016e224:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0016e228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e094;
        }
    }
L_0016e22c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016e230:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016e234:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016e238:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016e23c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016e240:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016e244:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_0016e248:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016e24c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016e250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e35c;
        }
    }
L_0016e254:;
    {
        cpu->r[3] = rd32(0x0016e25cu + + 0x120u);
    }
L_0016e258:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e25c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016e260:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016e264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e2f8;
        }
    }
L_0016e268:;
    {
        cpu->r[6] = rd32(0x0016e270u + + 0x110u);
    }
L_0016e26c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016e270:;
    {
        cpu->r[14] = 0x0016e274u; fn_00093fd8(cpu);
    }
L_0016e274:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0016e278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e28c;
        }
    }
L_0016e27c:;
    {
        cpu->r[14] = 0x0016e280u; fn_000979a0(cpu);
    }
L_0016e280:;
    {
        cpu->r[14] = 0x0016e284u; fn_00093fd8(cpu);
    }
L_0016e284:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e0b4;
        }
    }
L_0016e28c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x588u);
    }
L_0016e290:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e294:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016e298:;
    {
        cpu->r[14] = 0x0016e29cu; fn_0016cb70(cpu);
    }
L_0016e29c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016e2a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016e320;
        }
    }
L_0016e2a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e2a8:;
    {
        cpu->r[14] = 0x0016e2acu; fn_0016cb70(cpu);
    }
L_0016e2ac:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e2b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016e2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e2b8:;
    {
        cpu->r[14] = 0x0016e2c0u;
    }
L_0016e2bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016e2c0u)) return;
    }
L_0016e2c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0016e2c4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016e2c8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016e0b4;
        }
    }
L_0016e2cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e2d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e2d4:;
    {
        cpu->r[14] = 0x0016e2d8u; fn_0016cb70(cpu);
    }
L_0016e2d8:;
    {
        add_flags(cpu, cpu->r[5], cpu->r[0], 0, 1);
    }
L_0016e2dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e150;
        }
    }
L_0016e2e0:;
    {
        goto L_0016e1f8;
    }
L_0016e2e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e2e8:;
    {
        cpu->r[14] = 0x0016e2ecu; fn_0016cb70(cpu);
    }
L_0016e2ec:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016e2f0:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e2f4:;
    {
        goto L_0016e1c8;
    }
L_0016e2f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016e2fc:;
    {
        cpu->r[14] = 0x0016e300u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016e300:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e268;
        }
    }
L_0016e308:;
    {
        cpu->r[6] = rd32(0x0016e310u + + 0x70u);
    }
L_0016e30c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016e310:;
    {
        cpu->r[14] = 0x0016e314u; fn_00094228(cpu);
    }
L_0016e314:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016e318:;
    {
        cpu->r[14] = 0x0016e31cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016e31c:;
    {
        goto L_0016e26c;
    }
L_0016e320:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e324:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016e328:;
    {
        cpu->r[14] = 0x0016e32cu; fn_0016cb70(cpu);
    }
L_0016e32c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016e330:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_0016e334:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016e2b0;
        }
    }
L_0016e338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e33c:;
    {
        cpu->r[14] = 0x0016e340u; fn_0016cb70(cpu);
    }
L_0016e340:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016e344:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e348:;
    {
        goto L_0016e2b0;
    }
L_0016e34c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e350:;
    {
        cpu->r[14] = 0x0016e354u; fn_0016cb70(cpu);
    }
L_0016e354:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016e358:;
    {
        goto L_0016e134;
    }
L_0016e35c:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_0016e360:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016e364:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0016e368:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e36c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e254;
        }
    }
L_0016e370:;
    {
        goto L_0016e094;
    }
}

/* _ZN4CCar11UpdateNitroEi @ 0016e384 (arm) */
void fn_0016e384(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* Host nitro tap: feed the player car's nitro input bit so a
     * tap shorter than one 25 Hz physics tick is not lost. */
    if (platform_nitro_held_for_car(cpu->r[0])) cpu->r[1] |= 0x20u;
L_0016e384:;
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
L_0016e388:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016e38c:;
    {
        cpu->r[4] = rd32(0x0016e394u + + 0x6b4u);
    }
L_0016e390:;
    {
        cpu->r[7] = rd32(0x0016e398u + + 0x6b4u);
    }
L_0016e394:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016e398:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016e3a0u, cpu->r[4], 0, 0);
    }
L_0016e39c:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_0016e3a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016e3a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0016e3a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016e3ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0016e3b0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0016e3b4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016e3b8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016e3bc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016e3c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e3c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016e3d8;
        }
    }
L_0016e3c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016e3cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016e3d0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016e3d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016e3d8u)) return;
    }
L_0016e3d8:;
    {
        cpu->r[3] = 0x00001914u;
    }
L_0016e3dc:;
    {
        cpu->r[8] = 0x000018e0u;
    }
L_0016e3e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016e3e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e3e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016e3ec:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016e3f0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[8]);
    }
L_0016e3f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e3f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e63c;
        }
    }
L_0016e3fc:;
    {
        { uint32_t v = cpu->r[6] & 0x00000020u; set_nz(cpu, v); }
    }
L_0016e400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e574;
        }
    }
L_0016e404:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016e408:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e40c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_0016e410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e574;
        }
    }
L_0016e414:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016e418:;
    {
        cpu->r[2] = 0x00001918u;
    }
L_0016e41c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016e420:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016e424:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x420u);
    }
L_0016e428:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0016e42c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_0016e430:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016e434:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0016e438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e43c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016e440:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_0016e444:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016e448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e714;
        }
    }
L_0016e44c:;
    {
        cpu->r[8] = 0x000018ecu;
    }
L_0016e450:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016e454:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016e458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e768;
        }
    }
L_0016e45c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016e460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e6f0;
        }
    }
L_0016e464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e468:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e734;
        }
    }
L_0016e46c:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_0016e470:;
    {
        cpu->r[14] = 0x0016e474u; fn_00093f34(cpu);
    }
L_0016e474:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016e478:;
    {
        cpu->r[0] = 0x00000009u;
    }
L_0016e47c:;
    {
        cpu->r[14] = 0x0016e480u; fn_00093f34(cpu);
    }
L_0016e480:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016e484:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016e488:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0016e48c:;
    {
        cpu->r[2] = 0x000018e4u;
    }
L_0016e490:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0016e494:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_0016e498:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_0016e49c:;
    {
        vfp_sync_flags(cpu);
    }
L_0016e4a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016e728;
        }
    }
L_0016e4a4:;
    {
        cpu->r[1] = 0x000018fcu;
    }
L_0016e4a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0016e4ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0016e4b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016e78c;
        }
    }
L_0016e4b4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0016e4b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e574;
        }
    }
L_0016e4bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016e4c0:;
    {
        cpu->r[14] = 0x0016e4c4u; fn_0015d920(cpu);
    }
L_0016e4c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e574;
        }
    }
L_0016e4cc:;
    {
        cpu->r[3] = 0x00001914u;
    }
L_0016e4d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e4d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e4d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016e574;
        }
    }
L_0016e4dc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e4e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016e4e4:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_0016e4e8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_0016e4ec:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_0016e4f0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016e4f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016e4f8:;
    {
        cpu->r[14] = 0x0016e4fcu; fn_000fd224(cpu);
    }
L_0016e4fc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016e500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e514;
        }
    }
L_0016e504:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e508:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_0016e50c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e510:;
    {
        cpu->r[14] = 0x0016e514u; fn_000fd218(cpu);
    }
L_0016e514:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e518:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0016e51c:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_0016e520:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016e524:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0016e528:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016e52c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0016e530:;
    {
        cpu->r[14] = 0x0016e534u; fn_000fd248(cpu);
    }
L_0016e534:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e538:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e53c:;
    {
        cpu->r[3] = rd32(0x0016e544u + + 0x50cu);
    }
L_0016e540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016e544:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_0016e548:;
    {
        cpu->r[14] = 0x0016e54cu; fn_000979a0(cpu);
    }
L_0016e54c:;
    {
        cpu->r[14] = 0x0016e550u; fn_00093fc8(cpu);
    }
L_0016e550:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016e554:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_0016e558:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0016e55c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016e560:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016e564:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016e568:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_0016e56c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016e570:;
    {
        cpu->r[14] = 0x0016e574u; fn_000fd200(cpu);
    }
L_0016e574:;
    {
        cpu->r[3] = 0x000018e8u;
    }
L_0016e578:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e57c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e5d0;
        }
    }
L_0016e584:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016e588:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e58c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016e590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e594:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016e598:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e5c4;
        }
    }
L_0016e59c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e3c8;
        }
    }
L_0016e5a4:;
    {
        cpu->r[3] = 0x000018e8u;
    }
L_0016e5a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e5ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e5b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000018f4u;
        }
    }
L_0016e5b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_0016e5b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0016e5bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016e5c0:;
    {
        goto L_0016e3c8;
    }
L_0016e5c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e5c8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[6] | 0x00000004u; cpu->r[6] = v;
        }
    }
L_0016e5cc:;
    {
        goto L_0016e3c8;
    }
L_0016e5d0:;
    {
        cpu->r[1] = 0x000018f4u;
    }
L_0016e5d4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016e5d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016e5dc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016e5e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0016e5e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016e5e8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016e5ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016e584;
        }
    }
L_0016e5f0:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016e5f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e5f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016e5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e754;
        }
    }
L_0016e600:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016e604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e740;
        }
    }
L_0016e608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016e60c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e620;
        }
    }
L_0016e610:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e614:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_0016e618:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e61c:;
    {
        cpu->r[14] = 0x0016e620u; fn_000fd218(cpu);
    }
L_0016e620:;
    {
        cpu->r[1] = 0x000018ecu;
    }
L_0016e624:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016e628:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0016e62c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016e630:;
    {
        cpu->r[1] = 0x000018f4u;
    }
L_0016e634:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016e638:;
    {
        goto L_0016e58c;
    }
L_0016e63c:;
    {
        cpu->r[14] = 0x0016e640u; fn_00160624(cpu);
    }
L_0016e640:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e644:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e3fc;
        }
    }
L_0016e648:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e64c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0016e650:;
    {
        wr8(cpu->r[5] + cpu->r[8], cpu->r[12]);
    }
L_0016e654:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0016e658:;
    {
        cpu->r[1] = 0x0000009au;
    }
L_0016e65c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016e660:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0016e664:;
    {
        cpu->r[14] = 0x0016e668u; fn_000fd248(cpu);
    }
L_0016e668:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e66c:;
    {
        cpu->r[2] = rd32(0x0016e674u + + 0x3e0u);
    }
L_0016e670:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e674:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016e678:;
    {
        cpu->r[3] = rd32(0x0016e680u + + 0x3d0u);
    }
L_0016e67c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016e680:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_0016e684:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0016e688:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016e68c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e6c8;
        }
    }
L_0016e690:;
    {
        cpu->r[10] = rd32(0x0016e698u + + 0x3c0u);
    }
L_0016e694:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016e698:;
    {
        cpu->r[14] = 0x0016e69cu; fn_00093fc8(cpu);
    }
L_0016e69c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016e6a0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0016e6a4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0016e6a8:;
    {
        cpu->r[1] = 0x0000009au;
    }
L_0016e6ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016e6b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016e6b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016e6b8:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_0016e6bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016e6c0:;
    {
        cpu->r[14] = 0x0016e6c4u; fn_000fd200(cpu);
    }
L_0016e6c4:;
    {
        goto L_0016e3fc;
    }
L_0016e6c8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016e6cc:;
    {
        cpu->r[14] = 0x0016e6d0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016e6d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e6d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e690;
        }
    }
L_0016e6d8:;
    {
        cpu->r[10] = rd32(0x0016e6e0u + + 0x378u);
    }
L_0016e6dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016e6e0:;
    {
        cpu->r[14] = 0x0016e6e4u; fn_00094228(cpu);
    }
L_0016e6e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016e6e8:;
    {
        cpu->r[14] = 0x0016e6ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016e6ec:;
    {
        goto L_0016e694;
    }
L_0016e6f0:;
    {
        cpu->r[0] = 0x00000012u;
    }
L_0016e6f4:;
    {
        cpu->r[14] = 0x0016e6f8u; fn_00093f34(cpu);
    }
L_0016e6f8:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016e6fc:;
    {
        cpu->r[0] = 0x00000013u;
    }
L_0016e700:;
    {
        cpu->r[14] = 0x0016e704u; fn_00093f34(cpu);
    }
L_0016e704:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016e708:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016e70c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0016e710:;
    {
        goto L_0016e48c;
    }
L_0016e714:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016e718:;
    {
        cpu->r[14] = 0x0016e71cu; fn_0015d920(cpu);
    }
L_0016e71c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016e720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e574;
        }
    }
L_0016e724:;
    {
        goto L_0016e44c;
    }
L_0016e728:;
    {
        cpu->r[2] = 0x000018fcu;
    }
L_0016e72c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016e730:;
    {
        goto L_0016e4b4;
    }
L_0016e734:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016e73cu + + 0x304u);
    }
L_0016e738:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0016e740u + + 0x304u);
    }
L_0016e73c:;
    {
        goto L_0016e48c;
    }
L_0016e740:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e744:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_0016e748:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e74c:;
    {
        cpu->r[14] = 0x0016e750u; fn_000fd218(cpu);
    }
L_0016e750:;
    {
        goto L_0016e620;
    }
L_0016e754:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e758:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_0016e75c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e760:;
    {
        cpu->r[14] = 0x0016e764u; fn_000fd218(cpu);
    }
L_0016e764:;
    {
        goto L_0016e620;
    }
L_0016e768:;
    {
        cpu->r[0] = 0x0000000du;
    }
L_0016e76c:;
    {
        cpu->r[14] = 0x0016e770u; fn_00093f34(cpu);
    }
L_0016e770:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016e774:;
    {
        cpu->r[0] = 0x0000000eu;
    }
L_0016e778:;
    {
        cpu->r[14] = 0x0016e77cu; fn_00093f34(cpu);
    }
L_0016e77c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016e780:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016e784:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0016e788:;
    {
        goto L_0016e48c;
    }
L_0016e78c:;
    {
        vfp_vsub(cpu, 15, 15, 16);
    }
L_0016e790:;
    {
        cpu->r[1] = 0x000018e8u;
    }
L_0016e794:;
    {
        cpu->r[10] = 0x000018ecu;
    }
L_0016e798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016e79c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0016e7a0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016e7a4:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[3]);
    }
L_0016e7a8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0016e7ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0016e7b0:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_0016e7b4:;
    {
        cpu->r[3] = 0x000018f4u;
    }
L_0016e7b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016e7bc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_0016e7c0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016e7c4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_0016e7c8:;
    {
        cpu->r[14] = 0x0016e7ccu; fn_0015d920(cpu);
    }
L_0016e7cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0016e7d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e574;
        }
    }
L_0016e7d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016e7d8:;
    {
        cpu->r[14] = 0x0016e7dcu; fn_00160dac(cpu);
    }
L_0016e7dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016e7e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016e7e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e97c;
        }
    }
L_0016e7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016e7ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e938;
        }
    }
L_0016e7f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016e7f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e8e0;
        }
    }
L_0016e7f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x62cu);
    }
L_0016e7fc:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016e800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e804:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016e808:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_0016e80c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x630u, cpu->r[3]);
        }
    }
L_0016e810:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016e814:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016e818:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016e81c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016e820:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e8d4;
        }
    }
L_0016e824:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016e828:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016e82c:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_0016e830:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0016e834:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016e838:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016e83c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016e840:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[8]);
    }
L_0016e844:;
    {
        uint32_t v = cpu->r[1] & ~ 0x80000000u; cpu->r[1] = v;
    }
L_0016e848:;
    {
        wr32(cpu->r[5] + + 0x608u, cpu->r[8]);
    }
L_0016e84c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000400u; cpu->r[1] = v;
    }
L_0016e850:;
    {
        wr32(cpu->r[5] + + 0x62cu, cpu->r[8]);
    }
L_0016e854:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_0016e858:;
    {
        wr32(cpu->r[5] + + 0x620u, cpu->r[8]);
    }
L_0016e85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ea00;
        }
    }
L_0016e860:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0016e864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016e9c0;
        }
    }
L_0016e868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016e86c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016e574;
        }
    }
L_0016e870:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016e874:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0016e878:;
    {
        cpu->r[4] = 0x00008818u;
    }
L_0016e87c:;
    {
        cpu->r[0] = 0x00000036u;
    }
L_0016e880:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_0016e884:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016e888:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016e88c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016e890:;
    {
        cpu->r[14] = 0x0016e894u; fn_00093f34(cpu);
    }
L_0016e894:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e898:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016e89c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016e8a0:;
    {
        cpu->r[14] = 0x0016e8a4u; fn_00148c2c(cpu);
    }
L_0016e8a4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016e8a8:;
    {
        cpu->r[0] = 0x00000037u;
    }
L_0016e8ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016e8b0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016e8b4:;
    {
        cpu->r[14] = 0x0016e8b8u; fn_00093f34(cpu);
    }
L_0016e8b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016e8bc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016e8c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0016e8c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016e8c8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016e8cc:;
    {
        cpu->r[14] = 0x0016e8d0u; fn_00148c2c(cpu);
    }
L_0016e8d0:;
    {
        goto L_0016e574;
    }
L_0016e8d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016e8d8:;
    {
        cpu->r[14] = 0x0016e8dcu; fn_00162254(cpu);
    }
L_0016e8dc:;
    {
        goto L_0016e824;
    }
L_0016e8e0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e8e4:;
    {
        cpu->r[0] = 0x000018e0u;
    }
L_0016e8e8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e8ec:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0016e8f0:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_0016e8f4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0016e8f8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x490u);
    }
L_0016e8fc:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_0016e900:;
    {
        cpu->r[14] = 0x0016e904u; fn_000fd248(cpu);
    }
L_0016e904:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e908:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e90c:;
    {
        cpu->r[14] = 0x0016e910u; fn_000979a0(cpu);
    }
L_0016e910:;
    {
        cpu->r[14] = 0x0016e914u; fn_00093fc8(cpu);
    }
L_0016e914:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e918:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_0016e91c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016e920:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016e924:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016e928:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0016e92c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016e930:;
    {
        cpu->r[14] = 0x0016e934u; fn_000fd200(cpu);
    }
L_0016e934:;
    {
        goto L_0016e7f8;
    }
L_0016e938:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e93c:;
    {
        cpu->r[12] = 0x000018e0u;
    }
L_0016e940:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_0016e944:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e948:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0016e94c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0016e950:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0016e954:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_0016e958:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016e95c:;
    {
        cpu->r[14] = 0x0016e960u; fn_000fd248(cpu);
    }
L_0016e960:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e964:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e968:;
    {
        cpu->r[14] = 0x0016e96cu; fn_000979a0(cpu);
    }
L_0016e96c:;
    {
        cpu->r[14] = 0x0016e970u; fn_00093fc8(cpu);
    }
L_0016e970:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e974:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_0016e978:;
    {
        goto L_0016e91c;
    }
L_0016e97c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e980:;
    {
        cpu->r[12] = 0x000018e0u;
    }
L_0016e984:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e988:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_0016e98c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0016e990:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0016e994:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0016e998:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_0016e99c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016e9a0:;
    {
        cpu->r[14] = 0x0016e9a4u; fn_000fd248(cpu);
    }
L_0016e9a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016e9a8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016e9ac:;
    {
        cpu->r[14] = 0x0016e9b0u; fn_000979a0(cpu);
    }
L_0016e9b0:;
    {
        cpu->r[14] = 0x0016e9b4u; fn_00093fc8(cpu);
    }
L_0016e9b4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e9b8:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_0016e9bc:;
    {
        goto L_0016e91c;
    }
L_0016e9c0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016e9c4:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0016e9c8:;
    {
        cpu->r[4] = 0x00008818u;
    }
L_0016e9cc:;
    {
        cpu->r[0] = 0x0000003au;
    }
L_0016e9d0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_0016e9d4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016e9d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016e9dc:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016e9e0:;
    {
        cpu->r[14] = 0x0016e9e4u; fn_00093f34(cpu);
    }
L_0016e9e4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016e9e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016e9ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016e9f0:;
    {
        cpu->r[14] = 0x0016e9f4u; fn_00148c2c(cpu);
    }
L_0016e9f4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016e9f8:;
    {
        cpu->r[0] = 0x0000003bu;
    }
L_0016e9fc:;
    {
        goto L_0016e8ac;
    }
L_0016ea00:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016ea04:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0016ea08:;
    {
        cpu->r[4] = 0x00008818u;
    }
L_0016ea0c:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_0016ea10:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_0016ea14:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016ea18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0016ea1c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0016ea20:;
    {
        cpu->r[14] = 0x0016ea24u; fn_00093f34(cpu);
    }
L_0016ea24:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0016ea28:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016ea2c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016ea30:;
    {
        cpu->r[14] = 0x0016ea34u; fn_00148c2c(cpu);
    }
L_0016ea34:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016ea38:;
    {
        cpu->r[0] = 0x00000039u;
    }
L_0016ea3c:;
    {
        goto L_0016e8ac;
    }
}

/* _ZN4CCar25UpdateReplayCarParametersEiPK10RoadStructR11CMultiArrayIPS_E @ 0016ea5c (arm) */
void fn_0016ea5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016ea5c:;
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
L_0016ea60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0016ea64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0016ea68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016ea6c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0016ea70:;
    {
        cpu->r[5] = rd32(0x0016ea78u + + 0x2d4u);
    }
L_0016ea74:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x4u;
        wr32(cpu->r[7] + - 0x4u, cpu->r[1]);
        cpu->r[7] = wb_tmp;
    }
L_0016ea78:;
    {
        cpu->r[14] = 0x0016ea7cu; fn_00160c54(cpu);
    }
L_0016ea7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ea80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0016ea84:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016ea8cu, cpu->r[5], 0, 0);
    }
L_0016ea88:;
    {
        cpu->r[14] = 0x0016ea8cu; fn_0016631c(cpu);
    }
L_0016ea8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ea90:;
    {
        cpu->r[14] = 0x0016ea94u; fn_0015d920(cpu);
    }
L_0016ea94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ea98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eaf8;
        }
    }
L_0016ea9c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016eaa0:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016eaa4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016eaa8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016eaac:;
    {
        uint32_t v = cpu->r[7] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016eab0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016eab4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eac0;
        }
    }
L_0016eab8:;
    {
        uint32_t v = cpu->r[7] & 0x00000008u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_0016eabc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ec8c;
        }
    }
L_0016eac0:;
    {
        cpu->r[0] = rd32(0x0016eac8u + + 0x288u);
    }
L_0016eac4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016eac8:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016eacc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016ead0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0016ead4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0016ead8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016eadc:;
    {
        cpu->r[14] = 0x0016eae0u; fn_000fd224(cpu);
    }
L_0016eae0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016eae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eaf8;
        }
    }
L_0016eae8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016eaec:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016eaf0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016eaf4:;
    {
        cpu->r[14] = 0x0016eaf8u; fn_000fd218(cpu);
    }
L_0016eaf8:;
    {
        cpu->r[3] = 0x0000178cu;
    }
L_0016eafc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016eb00:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016eb04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eb18;
        }
    }
L_0016eb08:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016eb0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016eb10:;
    {
        uint32_t v = cpu->r[2] & 0x00000008u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0016eb14:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016eb18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016eb1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016eb20:;
    {
        cpu->r[14] = 0x0016eb24u; fn_001745cc(cpu);
    }
L_0016eb24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016eb28:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016eb2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eb48;
        }
    }
L_0016eb30:;
    {
        cpu->r[3] = rd32(0x0016eb38u + + 0x218u);
    }
L_0016eb34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016eb38:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016eb3c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_0016eb40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016eb44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ebac;
        }
    }
L_0016eb48:;
    {
        cpu->r[2] = 0x00001920u;
    }
L_0016eb4c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016eb50:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_0016eb54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016eb58:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016eb5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016eb60:;
    {
        uint32_t v = cpu->r[0] & ~ 0x08000001u; cpu->r[0] = v;
    }
L_0016eb64:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016eb68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
        }
    }
L_0016eb6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ebcc;
        }
    }
L_0016eb70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016eb74:;
    {
        cpu->r[14] = 0x0016eb78u; fn_0016e384(cpu);
    }
L_0016eb78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016eb7c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0016eb80:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_0016eb84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016eb88:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0016eb8c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0016eb90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016eb94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0016eb98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016ebd8;
        }
    }
L_0016eb9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016eba0:;
    {
        cpu->r[14] = 0x0016eba4u; fn_0016b7ec(cpu);
    }
L_0016eba4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0016eba8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016ebacu)) return;
    }
L_0016ebac:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016ebb0:;
    {
        cpu->r[12] = 0x00001920u;
    }
L_0016ebb4:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_0016ebb8:;
    {
        cpu->r[14] = 0x0000000au;
    }
L_0016ebbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ebc0:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_0016ebc4:;
    {
        uint32_t v = cpu->r[0] | 0x00000001u; cpu->r[0] = v;
    }
L_0016ebc8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016ebcc:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_0016ebd0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016ebd4:;
    {
        goto L_0016eb70;
    }
L_0016ebd8:;
    {
        cpu->r[12] = rd32(0x0016ebe0u + + 0x170u);
    }
L_0016ebdc:;
    {
        cpu->r[0] = 0x00008cbcu;
    }
L_0016ebe0:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_0016ebe4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0016ebe8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016ebec:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0016ebf0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0016ebf4:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0016ebf8:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[0]);
    }
L_0016ebfc:;
    {
        cpu->r[6] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0016ec00:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_0016ec04:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0016ec08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016ec0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016ec60;
        }
    }
L_0016ec10:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0016ec14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ec18:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_0016ec1c:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_0016ec20:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0016ec24:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_0016ec28:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_0016ec2c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016ec30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0016ec34:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[7]);
        }
    }
L_0016ec38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[8]);
        }
    }
L_0016ec3c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
        }
    }
L_0016ec40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0016ec44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0016ec48:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0016ec4c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_0016ec50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0016ec54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016ec58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0016ec5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ec30;
        }
    }
L_0016ec60:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0016ec64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016ec68:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0016ec6c:;
    {
        cpu->r[14] = 0x0016ec70u; fn_000994e0(cpu);
    }
L_0016ec70:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016ec74:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016ec78:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0016ec7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016ec80:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0016ec84:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[3]);
    }
L_0016ec88:;
    {
        goto L_0016eb9c;
    }
L_0016ec8c:;
    {
        cpu->r[0] = rd32(0x0016ec94u + + 0xbcu);
    }
L_0016ec90:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016ec94:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0016ec98:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0016ec9c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0016eca0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0016eca4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016eca8:;
    {
        cpu->r[14] = 0x0016ecacu; fn_000fd224(cpu);
    }
L_0016ecac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016ecb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ed2c;
        }
    }
L_0016ecb4:;
    {
        cpu->r[2] = rd32(0x0016ecbcu + + 0x98u);
    }
L_0016ecb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ecbc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0016ecc0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016ecc4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0016ecc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016eccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ed04;
        }
    }
L_0016ecd0:;
    {
        cpu->r[10] = rd32(0x0016ecd8u + + 0x80u);
    }
L_0016ecd4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016ecd8:;
    {
        cpu->r[14] = 0x0016ecdcu; fn_00093fc8(cpu);
    }
L_0016ecdc:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016ece0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016ece4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_0016ece8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016ecec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0016ecf0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0016ecf4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016ecf8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016ecfc:;
    {
        cpu->r[14] = 0x0016ed00u; fn_000fd1d0(cpu);
    }
L_0016ed00:;
    {
        goto L_0016eaf8;
    }
L_0016ed04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016ed08:;
    {
        cpu->r[14] = 0x0016ed0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016ed0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ed10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ecd0;
        }
    }
L_0016ed14:;
    {
        cpu->r[10] = rd32(0x0016ed1cu + + 0x3cu);
    }
L_0016ed18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0016ed1c:;
    {
        cpu->r[14] = 0x0016ed20u; fn_00094228(cpu);
    }
L_0016ed20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016ed24:;
    {
        cpu->r[14] = 0x0016ed28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016ed28:;
    {
        goto L_0016ecd4;
    }
L_0016ed2c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0016ed30:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0016ed34:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016ed38:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016ed3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016ed40:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0016ed44:;
    {
        cpu->r[14] = 0x0016ed48u; fn_000fd248(cpu);
    }
L_0016ed48:;
    {
        goto L_0016ecb4;
    }
}
