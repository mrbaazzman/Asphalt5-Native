#include "functions.h"

/* _ZN3vox12SegmentGroupC1EPNS_10GroupInfosEi @ 001ebfb4 (arm) */
void fn_001ebfb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ebfb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001ebfb8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ebfbc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ebfc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ebfc4:;
    {
        cpu->r[12] = rd32(0x001ebfccu + + 0x54u);
    }
L_001ebfc8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001ebfcc:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_001ebfd0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ebfd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ebfdcu, cpu->r[12], 0, 0);
    }
L_001ebfd8:;
    {
        cpu->r[0] = rd32(0x001ebfe0u + + 0x44u);
    }
L_001ebfdc:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001ebfe0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001ebfe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001ebfe8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
        }
    }
L_001ebfec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_001ebff0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001ebff4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_001ebff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001ebffc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
        }
    }
L_001ec000:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001ec004:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec008:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[2]);
    }
L_001ec00c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_001ec010:;
    {
        wr32(cpu->r[3] + + 0x20u, cpu->r[1]);
    }
L_001ec014:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[1]);
    }
L_001ec018:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001ec01c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroupC2ERS0_ @ 001ec028 (arm) */
void fn_001ec028(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec028:;
    {
        cpu->r[3] = rd32(0x001ec030u + + 0x5cu);
    }
L_001ec02c:;
    {
        cpu->r[12] = rd32(0x001ec034u + + 0x5cu);
    }
L_001ec030:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ec038u, cpu->r[3], 0, 0);
    }
L_001ec034:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001ec038:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ec03c:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ec040:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ec044:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ec048:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x18u);
    }
L_001ec04c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001ec050:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_001ec054:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001ec058:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ec05c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_001ec060:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001ec064:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001ec068:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[8]);
    }
L_001ec06c:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001ec070:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_001ec074:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_001ec078:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001ec07c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_001ec080:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001ec084:;
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
L_001ec088:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroupC1ERS0_ @ 001ec094 (arm) */
void fn_001ec094(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec094:;
    {
        cpu->r[3] = rd32(0x001ec09cu + + 0x5cu);
    }
L_001ec098:;
    {
        cpu->r[12] = rd32(0x001ec0a0u + + 0x5cu);
    }
L_001ec09c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ec0a4u, cpu->r[3], 0, 0);
    }
L_001ec0a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001ec0a4:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ec0a8:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ec0ac:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ec0b0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ec0b4:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x18u);
    }
L_001ec0b8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001ec0bc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_001ec0c0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001ec0c4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ec0c8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[10]);
    }
L_001ec0cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001ec0d0:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001ec0d4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[8]);
    }
L_001ec0d8:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001ec0dc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_001ec0e0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[6]);
    }
L_001ec0e4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[5]);
    }
L_001ec0e8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_001ec0ec:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001ec0f0:;
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
L_001ec0f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroupD2Ev @ 001ec100 (arm) */
void fn_001ec100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec100:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroupD1Ev @ 001ec104 (arm) */
void fn_001ec104(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec104:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroup13GetSelectModeEv @ 001ec108 (arm) */
void fn_001ec108(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec108:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ec10c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroup7IsValidEv @ 001ec110 (arm) */
void fn_001ec110(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec110:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x4u);
    }
L_001ec114:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox12SegmentGroup8SetStateERS0_ @ 001ec118 (arm) */
void fn_001ec118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec118:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001ec11c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x18u);
    }
L_001ec120:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ec124:;
    {
        cpu->r[7] = rd8(cpu->r[1] + + 0x4u);
    }
L_001ec128:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ec12c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ec130:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ec134:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001ec138:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_001ec13c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[8]);
    }
L_001ec140:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001ec144:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[6]);
    }
L_001ec148:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[5]);
    }
L_001ec14c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_001ec150:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_001ec154:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001ec158:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ec15c:;
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
L_001ec160:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11RandomGroupC2EPNS_10GroupInfosEi @ 001ec164 (arm) */
void fn_001ec164(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec164:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec168:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec16c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001ec170:;
    {
        cpu->r[14] = 0x001ec174u; fn_001ebf40(cpu);
    }
L_001ec174:;
    {
        cpu->r[5] = rd32(0x001ec17cu + + 0x54u);
    }
L_001ec178:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ec17c:;
    {
        cpu->r[1] = rd32(0x001ec184u + + 0x50u);
    }
L_001ec180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ec184:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ec18cu, cpu->r[5], 0, 0);
    }
L_001ec188:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ec18c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ec190:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001ec194:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001ec198:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_001ec19c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001ec1a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001ec1a4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ec1a8:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001ec1ac:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ec1b0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ec1b4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001ec1b8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ec1bc:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[12]);
    }
L_001ec1c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ec1c4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[12]);
    }
L_001ec1c8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001ec1cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec1d0u)) return;
    }
}

/* _ZN3vox11RandomGroupC1EPNS_10GroupInfosEi @ 001ec1d8 (arm) */
void fn_001ec1d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec1d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec1dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec1e0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001ec1e4:;
    {
        cpu->r[14] = 0x001ec1e8u; fn_001ebf40(cpu);
    }
L_001ec1e8:;
    {
        cpu->r[5] = rd32(0x001ec1f0u + + 0x54u);
    }
L_001ec1ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ec1f0:;
    {
        cpu->r[1] = rd32(0x001ec1f8u + + 0x50u);
    }
L_001ec1f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ec1f8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ec200u, cpu->r[5], 0, 0);
    }
L_001ec1fc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ec200:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ec204:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001ec208:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001ec20c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[2];
        }
    }
L_001ec210:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001ec214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001ec218:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ec21c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001ec220:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ec224:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ec228:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_001ec22c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ec230:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[12]);
    }
L_001ec234:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ec238:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[12]);
    }
L_001ec23c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001ec240:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec244u)) return;
    }
}

/* _ZN3vox11RandomGroup8GetStateEPNS_16RandomGroupStateE @ 001ec24c (arm) */
void fn_001ec24c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec24c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec250:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_001ec254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_001ec258:;
    {
        wr32(cpu->r[1] + + 0x24u, cpu->r[12]);
    }
L_001ec25c:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[2]);
    }
L_001ec260:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001ec264:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ec268:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001ec26c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001ec270:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_001ec274:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001ec278:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_001ec27c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001ec280:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[3]);
    }
L_001ec284:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001ec288:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[3]);
    }
L_001ec28c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_001ec290:;
    {
        wr32(cpu->r[1] + + 0x18u, cpu->r[3]);
    }
L_001ec294:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001ec298:;
    {
        wr32(cpu->r[1] + + 0x1cu, cpu->r[3]);
    }
L_001ec29c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001ec2a0:;
    {
        wr32(cpu->r[1] + + 0x20u, cpu->r[3]);
    }
L_001ec2a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11RandomGroup22PeekAtNextGroupElementENS_13GroupPeekModeE @ 001ec2a8 (arm) */
void fn_001ec2a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec2a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001ec2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec2b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ec2b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
        }
    }
L_001ec2b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_001ec2bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[3]);
        }
    }
L_001ec2c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15SequentialGroupC2EPNS_10GroupInfosEi @ 001ec2c4 (arm) */
void fn_001ec2c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec2c4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec2c8:;
    {
        cpu->r[5] = rd32(0x001ec2d0u + + 0x38u);
    }
L_001ec2cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec2d0:;
    {
        cpu->r[14] = 0x001ec2d4u; fn_001ebf40(cpu);
    }
L_001ec2d4:;
    {
        cpu->r[2] = rd32(0x001ec2dcu + + 0x30u);
    }
L_001ec2d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ec2e0u, cpu->r[5], 0, 0);
    }
L_001ec2dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ec2e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ec2e4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ec2e8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001ec2ec:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ec2f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ec2f4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ec2f8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ec2fc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ec300:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001ec304:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec308u)) return;
    }
}

/* _ZN3vox15SequentialGroupC1EPNS_10GroupInfosEi @ 001ec310 (arm) */
void fn_001ec310(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec310:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec314:;
    {
        cpu->r[5] = rd32(0x001ec31cu + + 0x38u);
    }
L_001ec318:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec31c:;
    {
        cpu->r[14] = 0x001ec320u; fn_001ebf40(cpu);
    }
L_001ec320:;
    {
        cpu->r[2] = rd32(0x001ec328u + + 0x30u);
    }
L_001ec324:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ec32cu, cpu->r[5], 0, 0);
    }
L_001ec328:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ec32c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ec330:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ec334:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001ec338:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ec33c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ec340:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ec344:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ec348:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ec34c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001ec350:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec354u)) return;
    }
}

/* _ZN3vox15SequentialGroup23GetGroupElementPositionEv @ 001ec35c (arm) */
void fn_001ec35c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec35c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ec360:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001ec364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec378;
        }
    }
L_001ec36c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ec370:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001ec374:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ec378:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec37c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ec380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec36c;
        }
    }
L_001ec384:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ec388:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ec38c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec390:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_001ec394:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ec398:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ec39c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001ec3a0:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[5], 1, 2u, &shc), 1, 1);
    }
L_001ec3a4:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[4]);
    }
L_001ec3a8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
        }
    }
L_001ec3ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001ec3b0:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_001ec3b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ec3b8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
        }
    }
L_001ec3bc:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
        }
    }
L_001ec3c0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_001ec3c4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ec3c8:;
    {
        goto L_001ec370;
    }
}

/* _ZN3vox15SequentialGroup8GetStateEPNS_20SequentialGroupStateE @ 001ec3cc (arm) */
void fn_001ec3cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec3cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec3d0:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001ec3d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ec3d8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001ec3dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec3e0:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_001ec3e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001ec3e8:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_001ec3ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_001ec3f0:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[3]);
    }
L_001ec3f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_001ec3f8:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[3]);
    }
L_001ec3fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15SequentialGroup22PeekAtNextGroupElementENS_13GroupPeekModeE @ 001ec400 (arm) */
void fn_001ec400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec400:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ec404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec418;
        }
    }
L_001ec408:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ec40c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec410:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ec414:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ec418:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ec41c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec420:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec42c;
        }
    }
L_001ec424:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ec428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ec42c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec424;
        }
    }
L_001ec438:;
    {
        goto L_001ec408;
    }
}

/* _ZN3vox15SequentialGroup5ResetEi @ 001ec43c (arm) */
void fn_001ec43c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec43c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec440:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ec444:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ec448:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec44c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001ec450:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_001ec454:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
        }
    }
L_001ec458:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_001ec45c:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_001ec460:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ec464:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
        }
    }
L_001ec468:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_001ec46c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
        }
    }
L_001ec470:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15SequentialGroup8SetStateERS0_ @ 001ec474 (arm) */
void fn_001ec474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec474:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec478:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ec47c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec480:;
    {
        cpu->r[14] = 0x001ec484u; fn_001ec118(cpu);
    }
L_001ec484:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x34u);
    }
L_001ec488:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ec48c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001ec490:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001ec494:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec498u)) return;
    }
}

/* _ZN3vox15SequentialGroup8SetStateEPNS_20SequentialGroupStateE @ 001ec498 (arm) */
void fn_001ec498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec498:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ec49c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_001ec4a0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ec4a4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_001ec4a8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ec4ac:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_001ec4b0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ec4b4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001ec4b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ec4bc:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ec4c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ec4c4:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[3]);
    }
L_001ec4c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15SequentialGroup18SetToPreviousStateEv @ 001ec4cc (arm) */
void fn_001ec4cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec4cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001ec4d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_001ec4d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x34u);
    }
L_001ec4d8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001ec4dc:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001ec4e0:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_001ec4e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylistC2EPNS_13PlaylistInfosE @ 001ec4e8 (arm) */
void fn_001ec4e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec4e8:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001ec4ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ec4f0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001ec4f4:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_001ec4f8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001ec4fc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001ec500:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ec504:;
    {
        wr8(cpu->r[0], cpu->r[4]);
    }
L_001ec508:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_001ec50c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ec510:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001ec514:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001ec518:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001ec51c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001ec520:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001ec524:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_001ec528:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_001ec52c:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_001ec530:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_001ec534:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001ec538:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001ec53c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylistC1EPNS_13PlaylistInfosE @ 001ec540 (arm) */
void fn_001ec540(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec540:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001ec544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ec548:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001ec54c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_001ec550:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001ec554:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_001ec558:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ec55c:;
    {
        wr8(cpu->r[0], cpu->r[4]);
    }
L_001ec560:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_001ec564:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ec568:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001ec56c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001ec570:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001ec574:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001ec578:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001ec57c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_001ec580:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_001ec584:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_001ec588:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_001ec58c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_001ec590:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001ec594:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylist17GetCurrentElementEv @ 001ec598 (arm) */
void fn_001ec598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec598:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec59c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ec5a0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ec5a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylist18GetCurrentPositionEv @ 001ec5a8 (arm) */
void fn_001ec5a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec5a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ec5ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylist8GetStateEPNS_13PlaylistStateE @ 001ec5b0 (arm) */
void fn_001ec5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec5b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ec5b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_001ec5b8:;
    {
        wr32(cpu->r[1] + + 0x18u, cpu->r[2]);
    }
L_001ec5bc:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_001ec5c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ec5c4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001ec5c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec5cc:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_001ec5d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ec5d4:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_001ec5d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001ec5dc:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[3]);
    }
L_001ec5e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_001ec5e4:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[3]);
    }
L_001ec5e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylist18GetPlaylistElementEi @ 001ec5ec (arm) */
void fn_001ec5ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec5ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec5f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec5f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec600;
        }
    }
L_001ec5f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ec5fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ec600:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ec604:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ec5f8;
        }
    }
L_001ec608:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x34u);
    }
L_001ec60c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ec610:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ec614:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_001ec618:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ec61c:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ec620:;
    {
        goto L_001ec5f8;
    }
}

/* _ZN3vox14NativePlaylist18GetPlaylistElementEv @ 001ec624 (arm) */
void fn_001ec624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec624:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ec628:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ec62c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ec630:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec634:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec638:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ec63c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ec640:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001ec644:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec650;
        }
    }
L_001ec648:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ec64c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec650u)) return;
    }
L_001ec650:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ec654:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ec658:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001ec65c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ec660:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_001ec664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec768;
        }
    }
L_001ec668:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ec66c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ec670:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ec674:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ec678:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ec67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ec680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec828;
        }
    }
L_001ec684:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec688:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ec68c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec690:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ec694:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec698:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec69c:;
    {
        cpu->r[14] = 0x001ec6a4u;
    }
L_001ec6a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec6a4u)) return;
    }
L_001ec6a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ec6a8:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
        }
    }
L_001ec6ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec75c;
        }
    }
L_001ec6b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec6b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ec6b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ec6bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ec6c0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 2u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ec6c4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001ec6c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ec6cc:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001ec6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec70c;
        }
    }
L_001ec6d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ec6d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ec6dc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ec6e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001ec6e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec6e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec6ec:;
    {
        cpu->r[14] = 0x001ec6f4u;
    }
L_001ec6f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec6f4u)) return;
    }
L_001ec6f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec6f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ec6fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ec700:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_001ec704:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ec6d8;
        }
    }
L_001ec708:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ec70c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec710:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ec714:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_001ec718:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001ec71c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ec720:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001ec724:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ec728:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec748;
        }
    }
L_001ec72c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001ec730:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001ec734:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ec738:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001ec73c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_001ec740:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001ec744:;
    {
        goto L_001ec668;
    }
L_001ec748:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec74c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec750:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec754:;
    {
        cpu->r[14] = 0x001ec75cu;
    }
L_001ec758:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec75cu)) return;
    }
L_001ec75c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec760:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001ec764:;
    {
        goto L_001ec72c;
    }
L_001ec768:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec76c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ec770:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec774:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec778:;
    {
        cpu->r[14] = 0x001ec780u;
    }
L_001ec77c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec780u)) return;
    }
L_001ec780:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ec784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec828;
        }
    }
L_001ec788:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ec78c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec790:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec794:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001ec798:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ec79c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001ec7a0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[0] = v;
    }
L_001ec7a4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001ec7a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001ec7ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ec804;
        }
    }
L_001ec7b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ec7b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ec7b8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001ec7bc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ec7c0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_001ec7c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ec7c8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001ec7cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec808;
        }
    }
L_001ec7d0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ec7d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ec7d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001ec7dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec7e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec7e4:;
    {
        cpu->r[14] = 0x001ec7ecu;
    }
L_001ec7e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec7ecu)) return;
    }
L_001ec7ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec7f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ec7f4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ec7f8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001ec7fc:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_001ec800:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ec7d0;
        }
    }
L_001ec804:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ec808:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ec80c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec648;
        }
    }
L_001ec810:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ec814:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ec818:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec81c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec820:;
    {
        cpu->r[14] = 0x001ec828u;
    }
L_001ec824:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec828u)) return;
    }
L_001ec828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ec82c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ec648;
        }
    }
L_001ec830:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ec834:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ec838:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001ec83c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001ec840:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001ec844:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec848u)) return;
    }
}

/* _ZN3vox14NativePlaylist7IsValidEv @ 001ec848 (arm) */
void fn_001ec848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec848:;
    {
        cpu->r[0] = rd8(cpu->r[0]);
    }
L_001ec84c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox14NativePlaylist17PeekAtNextElementEv @ 001ec850 (arm) */
void fn_001ec850(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec850:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ec854:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ec858:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ec85c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ec860:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ec864:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ec868:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ec86c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ec870:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001ec874:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec880;
        }
    }
L_001ec878:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ec87c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec880u)) return;
    }
L_001ec880:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ec884:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ec888:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001ec88c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ec890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec8a0;
        }
    }
L_001ec894:;
    {
        goto L_001ec91c;
    }
L_001ec898:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001ec89c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001ec8a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ec8a4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ec8a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ec8ac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ec8b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ec8b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ec8b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ec8bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ec8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec96c;
        }
    }
L_001ec8c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec8c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ec8cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ec8d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec8d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec8d8:;
    {
        cpu->r[14] = 0x001ec8e0u;
    }
L_001ec8dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec8e0u)) return;
    }
L_001ec8e0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ec8e4:;
    {
        if (cond_test(cpu, 1)) {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
        }
    }
L_001ec8e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec898;
        }
    }
L_001ec8ec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001ec8f0:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001ec8f4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ec8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec898;
        }
    }
L_001ec8fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec900:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ec904:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec908:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec90c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec910:;
    {
        cpu->r[14] = 0x001ec918u;
    }
L_001ec914:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec918u)) return;
    }
L_001ec918:;
    {
        goto L_001ec898;
    }
L_001ec91c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ec920:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ec924:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec928:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec92c:;
    {
        cpu->r[14] = 0x001ec934u;
    }
L_001ec930:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec934u)) return;
    }
L_001ec934:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ec938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ec96c;
        }
    }
L_001ec93c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ec940:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ec944:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ec948:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ec94c:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_001ec950:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ec980;
        }
    }
L_001ec954:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ec958:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ec95c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec960:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec964:;
    {
        cpu->r[14] = 0x001ec96cu;
    }
L_001ec968:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec96cu)) return;
    }
L_001ec96c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ec970:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ec878;
        }
    }
L_001ec974:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ec978:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001ec97c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec980u)) return;
    }
L_001ec980:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001ec984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ec878;
        }
    }
L_001ec988:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001ec98c:;
    {
        goto L_001ec954;
    }
}

/* _ZN3vox14NativePlaylist5ResetEv @ 001ec990 (arm) */
void fn_001ec990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ec990:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ec994:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ec998:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ec99c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ec9a0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ec9a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ec9a8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ec9ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_001ec9b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ec9b4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001ec9b8:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_001ec9bc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_001ec9c0:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[1]);
    }
L_001ec9c4:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[2]);
    }
L_001ec9c8:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_001ec9cc:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[4]);
    }
L_001ec9d0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[2]);
    }
L_001ec9d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec9d8u)) return;
        }
    }
L_001ec9d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ec9dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ec9e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ec9e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ec9e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ec9ec:;
    {
        cpu->r[14] = 0x001ec9f4u;
    }
L_001ec9f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec9f4u)) return;
    }
L_001ec9f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001ec9f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ec9fcu)) return;
        }
    }
L_001ec9fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001eca00:;
    {
        goto L_001ec9d8;
    }
}

/* _ZN3vox14NativePlaylist8SetStateERS0_ @ 001eca04 (arm) */
void fn_001eca04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eca04:;
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
L_001eca08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001eca0c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x28u);
    }
L_001eca10:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eca14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eca18:;
    {
        cpu->r[9] = rd8(cpu->r[1]);
    }
L_001eca1c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001eca20:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x4u);
    }
L_001eca24:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x8u);
    }
L_001eca28:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eca2c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_001eca30:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_001eca34:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_001eca38:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001eca3c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x18u);
    }
L_001eca40:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x20u);
    }
L_001eca44:;
    {
        wr8(cpu->r[4], cpu->r[9]);
    }
L_001eca48:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_001eca4c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[8]);
    }
L_001eca50:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[7]);
    }
L_001eca54:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[12]);
    }
L_001eca58:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001eca5c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001eca60:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_001eca64:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[11]);
    }
L_001eca68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eca6cu)) return;
        }
    }
L_001eca6c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001eca70:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001eca74:;
    {
        cpu->r[14] = 0x001eca78u; fn_001ec108(cpu);
    }
L_001eca78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eca7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x24u);
    }
L_001eca80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001eca84:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001eca88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001eca8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001eca90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001eca94:;
    {
        cpu->r[14] = 0x001eca9cu;
    }
L_001eca98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eca9cu)) return;
    }
L_001eca9c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ecaa0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecaa4u)) return;
        }
    }
L_001ecaa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ecaa8:;
    {
        goto L_001eca70;
    }
}

/* _ZN3vox14NativePlaylist18SetToPreviousStateEv @ 001ecaac (arm) */
void fn_001ecaac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecaac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ecab0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ecab4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ecab8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ecabc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ecac0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ecac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ecac8:;
    {
        cpu->r[14] = 0x001ecad0u;
    }
L_001ecacc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecad0u)) return;
    }
L_001ecad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001ecad4:;
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
L_001ecad8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001ecadc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001ecae0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001ecae4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecae8u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManagerC2Ev @ 001ecae8 (arm) */
void fn_001ecae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecae8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ecaec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ecaf0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ecaf4:;
    {
        wr8(cpu->r[0], cpu->r[1]);
    }
L_001ecaf8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001ecafc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ecb00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22NativePlaylistsManagerC1Ev @ 001ecb04 (arm) */
void fn_001ecb04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ecb08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ecb0c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ecb10:;
    {
        wr8(cpu->r[0], cpu->r[1]);
    }
L_001ecb14:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001ecb18:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ecb1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22NativePlaylistsManager14GetNbPlaylistsEv @ 001ecb20 (arm) */
void fn_001ecb20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ecb24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22NativePlaylistsManager18GetPlaylistElementEiii @ 001ecb28 (arm) */
void fn_001ecb28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecb2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ecb30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ecb34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecb54;
        }
    }
L_001ecb38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001ecb3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ecb44;
        }
    }
L_001ecb40:;
    {
        return fn_001ec598(cpu);
    }
L_001ecb44:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001ecb48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecb58;
        }
    }
L_001ecb4c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ecb50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ecb54:;
    {
        return fn_001ec624(cpu);
    }
L_001ecb58:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ecb5c:;
    {
        return fn_001ec5ec(cpu);
    }
}

/* _ZN3vox22NativePlaylistsManager7IsValidEv @ 001ecb60 (arm) */
void fn_001ecb60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb60:;
    {
        cpu->r[0] = rd8(cpu->r[0]);
    }
L_001ecb64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox22NativePlaylistsManager25PeekAtNextPlaylistElementEi @ 001ecb68 (arm) */
void fn_001ecb68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecb6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ecb70:;
    {
        return fn_001ec850(cpu);
    }
}

/* _ZN3vox22NativePlaylistsManager13ResetPlaylistEi @ 001ecb74 (arm) */
void fn_001ecb74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ecb78:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ecb7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecb80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ecb84:;
    {
        return fn_001ec990(cpu);
    }
}

/* _ZN3vox22NativePlaylistsManager26SetPlaylistToPreviousStateEi @ 001ecb88 (arm) */
void fn_001ecb88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecb8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ecb90:;
    {
        return fn_001ecaac(cpu);
    }
}

/* _ZN3vox22NativePlaylistsManager8SetStateERS0_ @ 001ecb94 (arm) */
void fn_001ecb94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecb94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ecb98:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001ecb9c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ecba0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ecba4:;
    {
        cpu->r[2] = rd8(cpu->r[6]);
    }
L_001ecba8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001ecbac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ecbb0:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_001ecbb4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001ecbb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecbbcu)) return;
        }
    }
L_001ecbbc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ecbc0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ecbc4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ecbc8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecbcc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecbd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ecbd4:;
    {
        cpu->r[14] = 0x001ecbd8u; fn_001eca04(cpu);
    }
L_001ecbd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ecbdc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ecbe0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ecbc0;
        }
    }
L_001ecbe4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecbe8u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManager4InitEi @ 001ecbe8 (arm) */
void fn_001ecbe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecbe8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ecbec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ecbf0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001ecbf4:;
    {
        cpu->r[14] = 0x001ecbf8u; fn_00097dd4(cpu);
    }
L_001ecbf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecbfc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001ecc00:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[0]);
        }
    }
L_001ecc04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecc08u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManager11AddPlaylistEiPNS_13PlaylistInfosE @ 001ecc08 (arm) */
void fn_001ecc08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecc08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ecc0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ecc10:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ecc14:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001ecc18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ecc1c:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_001ecc20:;
    {
        cpu->r[14] = 0x001ecc24u; fn_00097dd0(cpu);
    }
L_001ecc24:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ecc28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ecc2c:;
    {
        cpu->r[14] = 0x001ecc30u; fn_001ec540(cpu);
    }
L_001ecc30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ecc34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ecc38:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[6]);
        }
    }
L_001ecc3c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001ecc40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_001ecc44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ecc48:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
        }
    }
L_001ecc4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecc50u)) return;
    }
}

/* _ZN3vox14NativePlaylistD1Ev @ 001ecc50 (arm) */
void fn_001ecc50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecc50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ecc54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ecc58:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ecc5c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ecc60:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001ecc64:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001ecc68:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ecc6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eccbc;
        }
    }
L_001ecc70:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ecc74:;
    {
        goto L_001ecc7c;
    }
L_001ecc78:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ecc7c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecc80:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001ecc84:;
    {
        cpu->r[14] = 0x001ecc88u; fn_001ec108(cpu);
    }
L_001ecc88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ecc8c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecc90:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ecc94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eccb0;
        }
    }
L_001ecc98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ecc9c:;
    {
        cpu->r[14] = 0x001ecca4u;
    }
L_001ecca0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecca4u)) return;
    }
L_001ecca4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ecca8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001eccac:;
    {
        cpu->r[14] = 0x001eccb0u; fn_00097dc8(cpu);
    }
L_001eccb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001eccb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001eccb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ecc78;
        }
    }
L_001eccbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001eccc0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x34u);
    }
L_001eccc4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001eccc8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001ecccc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eccd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eccfc;
        }
    }
L_001eccd4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001eccd8:;
    {
        goto L_001ecce0;
    }
L_001eccdc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ecce0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ecce8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eccec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eccf4;
        }
    }
L_001eccf0:;
    {
        cpu->r[14] = 0x001eccf4u; fn_00097dc8(cpu);
    }
L_001eccf4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001eccf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eccdc;
        }
    }
L_001eccfc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ecd00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecd04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecd0c;
        }
    }
L_001ecd08:;
    {
        cpu->r[14] = 0x001ecd0cu; fn_00097dc8(cpu);
    }
L_001ecd0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ecd10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecd14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecd1c;
        }
    }
L_001ecd18:;
    {
        cpu->r[14] = 0x001ecd1cu; fn_00097dc8(cpu);
    }
L_001ecd1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ecd20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecd24u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManagerD1Ev @ 001ecd24 (arm) */
void fn_001ecd24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecd24:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecd28:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ecd2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ecd30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ecd34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecd88;
        }
    }
L_001ecd38:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ecd3c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ecd40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ecd78;
        }
    }
L_001ecd44:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ecd48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecd4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ecd50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecd6c;
        }
    }
L_001ecd54:;
    {
        cpu->r[14] = 0x001ecd58u; fn_001ecc50(cpu);
    }
L_001ecd58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ecd5c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecd60:;
    {
        cpu->r[14] = 0x001ecd64u; fn_00097dc8(cpu);
    }
L_001ecd64:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ecd68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ecd6c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ecd70:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ecd74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ecd48;
        }
    }
L_001ecd78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ecd7c:;
    {
        cpu->r[14] = 0x001ecd80u; fn_00097dc8(cpu);
    }
L_001ecd80:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ecd84:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_001ecd88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ecd8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecd90u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManagerD2Ev @ 001ecd90 (arm) */
void fn_001ecd90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecd90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ecd94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ecd98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ecd9c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ecda0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecdf4;
        }
    }
L_001ecda4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ecda8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ecdac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ecde4;
        }
    }
L_001ecdb0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ecdb4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecdb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ecdbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecdd8;
        }
    }
L_001ecdc0:;
    {
        cpu->r[14] = 0x001ecdc4u; fn_001ecc50(cpu);
    }
L_001ecdc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ecdc8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecdcc:;
    {
        cpu->r[14] = 0x001ecdd0u; fn_00097dc8(cpu);
    }
L_001ecdd0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ecdd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ecdd8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ecddc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ecde0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ecdb4;
        }
    }
L_001ecde4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ecde8:;
    {
        cpu->r[14] = 0x001ecdecu; fn_00097dc8(cpu);
    }
L_001ecdec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ecdf0:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_001ecdf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ecdf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecdfcu)) return;
    }
}

/* _ZN3vox14NativePlaylistD2Ev @ 001ecdfc (arm) */
void fn_001ecdfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecdfc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ece00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ece04:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ece08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ece0c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001ece10:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001ece14:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ece18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ece68;
        }
    }
L_001ece1c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ece20:;
    {
        goto L_001ece28;
    }
L_001ece24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ece28:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ece2c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001ece30:;
    {
        cpu->r[14] = 0x001ece34u; fn_001ec108(cpu);
    }
L_001ece34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ece38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ece3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ece40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ece5c;
        }
    }
L_001ece44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ece48:;
    {
        cpu->r[14] = 0x001ece50u;
    }
L_001ece4c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ece50u)) return;
    }
L_001ece50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ece54:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001ece58:;
    {
        cpu->r[14] = 0x001ece5cu; fn_00097dc8(cpu);
    }
L_001ece5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ece60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001ece64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ece24;
        }
    }
L_001ece68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ece6c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x34u);
    }
L_001ece70:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ece74:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_001ece78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ece7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ecea8;
        }
    }
L_001ece80:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ece84:;
    {
        goto L_001ece8c;
    }
L_001ece88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ece8c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ece90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ece94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ece98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecea0;
        }
    }
L_001ece9c:;
    {
        cpu->r[14] = 0x001ecea0u; fn_00097dc8(cpu);
    }
L_001ecea0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001ecea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ece88;
        }
    }
L_001ecea8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_001eceac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eceb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eceb8;
        }
    }
L_001eceb4:;
    {
        cpu->r[14] = 0x001eceb8u; fn_00097dc8(cpu);
    }
L_001eceb8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ecebc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecec8;
        }
    }
L_001ecec4:;
    {
        cpu->r[14] = 0x001ecec8u; fn_00097dc8(cpu);
    }
L_001ecec8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ececc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eced0u)) return;
    }
}

/* _ZN3vox15SequentialGroupD1Ev @ 001eced0 (arm) */
void fn_001eced0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eced0:;
    {
        cpu->r[3] = rd32(0x001eced8u + + 0x38u);
    }
L_001eced4:;
    {
        cpu->r[2] = rd32(0x001ecedcu + + 0x38u);
    }
L_001eced8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ecee0u, cpu->r[3], 0, 0);
    }
L_001ecedc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ecee0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ecee4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ecee8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001eceec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecef0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ecef4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ecef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecf00;
        }
    }
L_001ecefc:;
    {
        cpu->r[14] = 0x001ecf00u; fn_00097dc8(cpu);
    }
L_001ecf00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ecf04:;
    {
        cpu->r[14] = 0x001ecf08u; fn_001ec100(cpu);
    }
L_001ecf08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ecf0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecf10u)) return;
    }
}

/* _ZN3vox15SequentialGroupD2Ev @ 001ecf18 (arm) */
void fn_001ecf18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecf18:;
    {
        cpu->r[3] = rd32(0x001ecf20u + + 0x38u);
    }
L_001ecf1c:;
    {
        cpu->r[2] = rd32(0x001ecf24u + + 0x38u);
    }
L_001ecf20:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ecf28u, cpu->r[3], 0, 0);
    }
L_001ecf24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ecf28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ecf2c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ecf30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ecf34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ecf38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ecf3c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ecf40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecf48;
        }
    }
L_001ecf44:;
    {
        cpu->r[14] = 0x001ecf48u; fn_00097dc8(cpu);
    }
L_001ecf48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ecf4c:;
    {
        cpu->r[14] = 0x001ecf50u; fn_001ec100(cpu);
    }
L_001ecf50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ecf54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ecf58u)) return;
    }
}

/* _ZN3vox11RandomGroupD1Ev @ 001ecf60 (arm) */
void fn_001ecf60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ecf60:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ecf64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ecf68:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ecf6c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ecf70:;
    {
        cpu->r[2] = rd32(0x001ecf78u + + 0xbcu);
    }
L_001ecf74:;
    {
        cpu->r[1] = rd32(0x001ecf7cu + + 0xbcu);
    }
L_001ecf78:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001ecf7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ecf84u, cpu->r[2], 0, 0);
    }
L_001ecf80:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[5] = v;
    }
L_001ecf84:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ecf88:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ecf8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001ecf90:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001ecf94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ecfc0;
        }
    }
L_001ecf98:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ecf9c:;
    {
        goto L_001ecfa4;
    }
L_001ecfa0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ecfa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ecfa8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ecfac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ecfb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecfb8;
        }
    }
L_001ecfb4:;
    {
        cpu->r[14] = 0x001ecfb8u; fn_00097dc8(cpu);
    }
L_001ecfb8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001ecfbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ecfa0;
        }
    }
L_001ecfc0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001ecfc4:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x30u;
        cpu->r[4] = rd32(cpu->r[5] + + 0x30u);
        cpu->r[5] = wb_tmp;
    }
L_001ecfc8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ecfcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecfec;
        }
    }
L_001ecfd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ecfd4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ecfd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ecfe0;
        }
    }
L_001ecfdc:;
    {
        cpu->r[14] = 0x001ecfe0u; fn_00097dc8(cpu);
    }
L_001ecfe0:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001ecfe4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ecfe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ecfd0;
        }
    }
L_001ecfec:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x30u);
    }
L_001ecff0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001ecff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed00c;
        }
    }
L_001ecff8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001ecffc:;
    {
        cpu->r[14] = 0x001ed000u; fn_00097dc8(cpu);
    }
L_001ed000:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ed004:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ecff8;
        }
    }
L_001ed00c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ed010:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[5]);
    }
L_001ed014:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ed018:;
    {
        wr32(cpu->r[6] + + 0x30u, cpu->r[5]);
    }
L_001ed01c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed024;
        }
    }
L_001ed020:;
    {
        cpu->r[14] = 0x001ed024u; fn_00097dc8(cpu);
    }
L_001ed024:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ed028:;
    {
        cpu->r[14] = 0x001ed02cu; fn_001ec100(cpu);
    }
L_001ed02c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ed030:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed034u)) return;
    }
}

/* _ZN3vox11RandomGroupD2Ev @ 001ed03c (arm) */
void fn_001ed03c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed03c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ed040:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ed044:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ed048:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ed04c:;
    {
        cpu->r[2] = rd32(0x001ed054u + + 0xbcu);
    }
L_001ed050:;
    {
        cpu->r[1] = rd32(0x001ed058u + + 0xbcu);
    }
L_001ed054:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001ed058:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ed060u, cpu->r[2], 0, 0);
    }
L_001ed05c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 2u, &shc); cpu->r[5] = v;
    }
L_001ed060:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001ed064:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ed068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001ed06c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001ed070:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ed09c;
        }
    }
L_001ed074:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ed078:;
    {
        goto L_001ed080;
    }
L_001ed07c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ed080:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ed084:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ed088:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ed08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed094;
        }
    }
L_001ed090:;
    {
        cpu->r[14] = 0x001ed094u; fn_00097dc8(cpu);
    }
L_001ed094:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001ed098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed07c;
        }
    }
L_001ed09c:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_001ed0a0:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x30u;
        cpu->r[4] = rd32(cpu->r[5] + + 0x30u);
        cpu->r[5] = wb_tmp;
    }
L_001ed0a4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ed0a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed0c8;
        }
    }
L_001ed0ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ed0b0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ed0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed0bc;
        }
    }
L_001ed0b8:;
    {
        cpu->r[14] = 0x001ed0bcu; fn_00097dc8(cpu);
    }
L_001ed0bc:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001ed0c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ed0c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed0ac;
        }
    }
L_001ed0c8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x30u);
    }
L_001ed0cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001ed0d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed0e8;
        }
    }
L_001ed0d4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001ed0d8:;
    {
        cpu->r[14] = 0x001ed0dcu; fn_00097dc8(cpu);
    }
L_001ed0dc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ed0e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed0e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed0d4;
        }
    }
L_001ed0e8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ed0ec:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[5]);
    }
L_001ed0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ed0f4:;
    {
        wr32(cpu->r[6] + + 0x30u, cpu->r[5]);
    }
L_001ed0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed100;
        }
    }
L_001ed0fc:;
    {
        cpu->r[14] = 0x001ed100u; fn_00097dc8(cpu);
    }
L_001ed100:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ed104:;
    {
        cpu->r[14] = 0x001ed108u; fn_001ec100(cpu);
    }
L_001ed108:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ed10c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed110u)) return;
    }
}

/* _ZN3vox14NativePlaylist8SetStateEPNS_13PlaylistStateE @ 001ed118 (arm) */
void fn_001ed118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed118:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ed11c:;
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
L_001ed120:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ed124:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001ed128:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_001ed12c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ed130:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ed134:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ed138:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ed13c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001ed140:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001ed144:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ed148:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001ed14c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ed150:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_001ed154:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ed158:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_001ed15c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ed160:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001ed164:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ed168:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_001ed16c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ed228;
        }
    }
L_001ed170:;
    {
        cpu->r[11] = rd32(0x001ed178u + + 0xc8u);
    }
L_001ed174:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ed178:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001ed17c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001ed180:;
    {
        cpu->r[11] = add_flags(cpu, 0x001ed188u, cpu->r[11], 0, 0);
    }
L_001ed184:;
    {
        goto L_001ed1c0;
    }
L_001ed188:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001ed18c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed190:;
    {
        cpu->r[14] = 0x001ed198u;
    }
L_001ed194:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed198u)) return;
    }
L_001ed198:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ed19c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001ed1a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ed1a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ed1a8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ed1ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ed1b0:;
    {
        cpu->r[14] = 0x001ed1b8u;
    }
L_001ed1b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed1b8u)) return;
    }
L_001ed1b8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001ed1bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed228;
        }
    }
L_001ed1c0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x18u);
    }
L_001ed1c4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed1c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ed1cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ed1d0:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_001ed1d4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ed230;
        }
    }
L_001ed1d8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ed1dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ed1e0:;
    {
        cpu->r[14] = 0x001ed1e4u; fn_001ec108(cpu);
    }
L_001ed1e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ed1e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ed1ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ed1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed188;
        }
    }
L_001ed1f4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed1f8:;
    {
        cpu->r[14] = 0x001ed200u;
    }
L_001ed1fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed200u)) return;
    }
L_001ed200:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x24u);
    }
L_001ed204:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ed208:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ed20c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ed210:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ed214:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ed218:;
    {
        cpu->r[14] = 0x001ed220u;
    }
L_001ed21c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed220u)) return;
    }
L_001ed220:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001ed224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed1c0;
        }
    }
L_001ed228:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001ed22c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed230u)) return;
    }
L_001ed230:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001ed234:;
    {
        cpu->r[14] = 0x001ed238u; fn_00208288(cpu);
    }
L_001ed238:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed23c:;
    {
        goto L_001ed1d8;
    }
}

/* _ZN3vox22NativePlaylistsManager27TransposePlaylistParametersEii @ 001ed244 (arm) */
void fn_001ed244(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed244:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ed248:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001ed24c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001ed250:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001ed254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed27c;
        }
    }
L_001ed258:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ed25c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001ed260:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ed264:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ed268:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001ed26c:;
    {
        cpu->r[14] = 0x001ed270u; fn_001ec5b0(cpu);
    }
L_001ed270:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ed274:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ed278:;
    {
        cpu->r[14] = 0x001ed27cu; fn_001ed118(cpu);
    }
L_001ed27c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001ed280:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed284u)) return;
    }
}

/* _ZN3vox12SegmentGroupD0Ev @ 001ed284 (arm) */
void fn_001ed284(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed284:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ed288:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed28c:;
    {
        cpu->r[14] = 0x001ed290u; fn_001ec104(cpu);
    }
L_001ed290:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed294:;
    {
        cpu->r[14] = 0x001ed298u; fn_0018ba20(cpu);
    }
L_001ed298:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed29c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed2a0u)) return;
    }
}

/* _ZN3vox15SequentialGroupD0Ev @ 001ed2a0 (arm) */
void fn_001ed2a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed2a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ed2a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed2a8:;
    {
        cpu->r[14] = 0x001ed2acu; fn_001eced0(cpu);
    }
L_001ed2ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed2b0:;
    {
        cpu->r[14] = 0x001ed2b4u; fn_0018ba20(cpu);
    }
L_001ed2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed2b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed2bcu)) return;
    }
}

/* _ZN3vox11RandomGroupD0Ev @ 001ed2bc (arm) */
void fn_001ed2bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed2bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ed2c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed2c4:;
    {
        cpu->r[14] = 0x001ed2c8u; fn_001ecf60(cpu);
    }
L_001ed2c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed2cc:;
    {
        cpu->r[14] = 0x001ed2d0u; fn_0018ba20(cpu);
    }
L_001ed2d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed2d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed2d8u)) return;
    }
}

/* _ZN3vox11RandomGroup21GetActiveElementIndexEv @ 001ed2d8 (arm) */
void fn_001ed2d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed2d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ed2dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ed2e0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ed2e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ed2e8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_001ed2ec:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 2u, &shc); cpu->r[4] = v;
    }
L_001ed2f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ed2f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ed2f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed2fcu)) return;
        }
    }
L_001ed2fc:;
    {
        cpu->r[14] = 0x001ed300u; imp_lrand48(cpu); /* lrand48 */
    }
L_001ed300:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_001ed304:;
    {
        cpu->r[14] = 0x001ed308u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001ed308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ed30c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ed310:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ed314:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001ed318:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001ed31c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001ed320:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001ed324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed328u)) return;
        }
    }
L_001ed328:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001ed32c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001ed330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed314;
        }
    }
L_001ed334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed338u)) return;
    }
}

/* _ZN3vox11RandomGroup23GetGroupElementPositionEv @ 001ed338 (arm) */
void fn_001ed338(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed338:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_001ed33c:;
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
L_001ed340:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ed344:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed358;
        }
    }
L_001ed34c:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_001ed350:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ed354:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed358u)) return;
    }
L_001ed358:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ed35c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ed360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed34c;
        }
    }
L_001ed364:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x44u);
    }
L_001ed368:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ed36c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ed34c;
        }
    }
L_001ed370:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ed374:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001ed378:;
    {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001ed37c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ed380:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_001ed384:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ed430;
        }
    }
L_001ed388:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed38c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001ed390:;
    {
        cpu->r[14] = 0x001ed394u; fn_00097dd0(cpu);
    }
L_001ed394:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed398:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed39c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ed3a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001ed3a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_001ed3a8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x44u);
    }
L_001ed3ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ed3b0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001ed3b4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_001ed3b8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ed3bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ed3c0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001ed3c4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001ed3c8:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001ed3cc:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_001ed3d0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ed3d4:;
    {
        cpu->r[9] = rd32(cpu->r[14] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ed3d8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 1);
    }
L_001ed3dc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ed3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001ed3e4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001ed3e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001ed3ec:;
    {
        wr32(cpu->r[14] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[9]);
    }
L_001ed3f0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001ed3f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001ed3f8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ed3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed418;
        }
    }
L_001ed400:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ed404:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed408:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ed40c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ed410:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001ed414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed408;
        }
    }
L_001ed418:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001ed41c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001ed420:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ed424:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
        }
    }
L_001ed428:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_001ed42c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ed474;
        }
    }
L_001ed430:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001ed434:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001ed438:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001ed43c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed440:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ed444:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001ed448:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ed44c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_001ed450:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[1]);
    }
L_001ed454:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
        }
    }
L_001ed458:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[7]);
    }
L_001ed45c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001ed460:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
        }
    }
L_001ed464:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_001ed468:;
    {
        cpu->r[14] = 0x001ed46cu; fn_001ed2d8(cpu);
    }
L_001ed46c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001ed470:;
    {
        goto L_001ed350;
    }
L_001ed474:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ed478:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001ed47c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[8]);
        }
    }
L_001ed480:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_001ed484:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8] + - 0x4u, cpu->r[2]);
        }
    }
L_001ed488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed4c4;
        }
    }
L_001ed48c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ed490:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ed494:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001ed498:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_001ed49c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_001ed4a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_001ed4a4:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001ed4a8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ed4ac:;
    {
        cpu->r[14] = 0x001ed4b0u; fn_00097dc8(cpu);
    }
L_001ed4b0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ed4b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x44u);
    }
L_001ed4b8:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ed4bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ed4c0:;
    {
        goto L_001ed430;
    }
L_001ed4c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_001ed4c8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ed4cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ed4d0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ed4d4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ed4d8:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001ed4dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed4e8;
        }
    }
L_001ed4e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ed4e4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ed4ec;
        }
    }
L_001ed4e8:;
    {
        cpu->r[8] = (~0xc0000000u);
    }
L_001ed4ec:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
    }
L_001ed4f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed4f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ed4f8:;
    {
        cpu->r[14] = 0x001ed4fcu; fn_00097dd0(cpu);
    }
L_001ed4fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed500:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ed504:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ed508:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ed50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed51c;
        }
    }
L_001ed510:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ed514:;
    {
        cpu->r[14] = 0x001ed518u; imp_memmove(cpu); /* memmove */
    }
L_001ed518:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ed51c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ed520:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ed524:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed528:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[3]);
        cpu->r[10] = wb_tmp;
    }
L_001ed52c:;
    {
        cpu->r[14] = 0x001ed530u; fn_00097dc8(cpu);
    }
L_001ed530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001ed534:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ed538:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ed53c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001ed540:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001ed544:;
    {
        goto L_001ed48c;
    }
}

/* _ZN3vox14NativePlaylist8AddGroupEPNS_10GroupInfosE @ 001ed548 (arm) */
void fn_001ed548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed548:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ed54c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001ed550:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ed554:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed558:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ed55c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed5a8;
        }
    }
L_001ed560:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_001ed564:;
    {
        cpu->r[14] = 0x001ed568u; fn_00097dd0(cpu);
    }
L_001ed568:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ed56c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ed570:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ed574:;
    {
        cpu->r[14] = 0x001ed578u; fn_001ec310(cpu);
    }
L_001ed578:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ed57c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[5]);
        }
    }
L_001ed580:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed584u)) return;
        }
    }
L_001ed584:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ed58c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001ed590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed5d4;
        }
    }
L_001ed594:;
    {
        wr32(cpu->r[8], cpu->r[5]);
    }
L_001ed598:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed59c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ed5a0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ed5a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed5a8u)) return;
    }
L_001ed5a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed5ac:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_001ed5b0:;
    {
        cpu->r[14] = 0x001ed5b4u; fn_00097dd0(cpu);
    }
L_001ed5b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ed5b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ed5bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ed5c0:;
    {
        cpu->r[14] = 0x001ed5c4u; fn_001ec1d8(cpu);
    }
L_001ed5c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ed5c8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[5]);
        }
    }
L_001ed5cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed584;
        }
    }
L_001ed5d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed5d4u)) return;
    }
L_001ed5d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed5d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001ed5dc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ed5e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ed5e4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ed5e8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ed5ec:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_001ed5f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed64c;
        }
    }
L_001ed5f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ed5f8:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
        }
    }
L_001ed5fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed64c;
        }
    }
L_001ed600:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed604:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ed608:;
    {
        cpu->r[14] = 0x001ed60cu; fn_00097dd0(cpu);
    }
L_001ed60c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed610:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001ed614:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ed618:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001ed61c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed62c;
        }
    }
L_001ed620:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001ed624:;
    {
        cpu->r[14] = 0x001ed628u; imp_memmove(cpu); /* memmove */
    }
L_001ed628:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001ed62c:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[5]);
        cpu->r[8] = wb_tmp;
    }
L_001ed630:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001ed634:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed638:;
    {
        cpu->r[14] = 0x001ed63cu; fn_00097dc8(cpu);
    }
L_001ed63c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_001ed640:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[8]);
    }
L_001ed644:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_001ed648:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed64cu)) return;
    }
L_001ed64c:;
    {
        cpu->r[7] = (~0x00000003u);
    }
L_001ed650:;
    {
        goto L_001ed600;
    }
}

/* _ZN3vox22NativePlaylistsManager8AddGroupEPNS_10GroupInfosE @ 001ed654 (arm) */
void fn_001ed654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed654:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001ed658:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001ed65c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ed660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed664:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ed668:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ed66c:;
    {
        cpu->r[14] = 0x001ed670u; fn_001ed548(cpu);
    }
L_001ed670:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ed674:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001ed678:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ed67c:;
    {
        cpu->r[14] = 0x001ed680u; fn_001ec848(cpu);
    }
L_001ed680:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_001ed684:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed688u)) return;
    }
}

/* _ZN3vox15SequentialGroup10AddElementEi @ 001ed688 (arm) */
void fn_001ed688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed688:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ed68c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001ed690:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ed694:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed698:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ed69c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001ed6a0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[1]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001ed6a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x28u, cpu->r[8]);
        }
    }
L_001ed6a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed6acu)) return;
        }
    }
L_001ed6ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ed6b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001ed6b4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ed6b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ed6bc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ed6c0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ed6c4:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_001ed6c8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ed720;
        }
    }
L_001ed6cc:;
    {
        cpu->r[7] = (~0x00000003u);
    }
L_001ed6d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed6d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ed6d8:;
    {
        cpu->r[14] = 0x001ed6dcu; fn_00097dd0(cpu);
    }
L_001ed6dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed6e0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001ed6e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ed6e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001ed6ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed700;
        }
    }
L_001ed6f0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001ed6f4:;
    {
        cpu->r[14] = 0x001ed6f8u; imp_memmove(cpu); /* memmove */
    }
L_001ed6f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed6fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001ed700:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[5]);
        cpu->r[8] = wb_tmp;
    }
L_001ed704:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ed708:;
    {
        cpu->r[14] = 0x001ed70cu; fn_00097dc8(cpu);
    }
L_001ed70c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001ed710:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[8]);
    }
L_001ed714:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_001ed718:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_001ed71c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed720u)) return;
    }
L_001ed720:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ed724:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
        }
    }
L_001ed728:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ed6d0;
        }
    }
L_001ed72c:;
    {
        goto L_001ed6cc;
    }
}

/* _ZN3vox15SequentialGroupC1ERS0_ @ 001ed730 (arm) */
void fn_001ed730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed730:;
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
L_001ed734:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed738:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ed73c:;
    {
        cpu->r[7] = rd32(0x001ed744u + + 0x114u);
    }
L_001ed740:;
    {
        cpu->r[14] = 0x001ed744u; fn_001ec028(cpu);
    }
L_001ed744:;
    {
        cpu->r[2] = rd32(0x001ed74cu + + 0x110u);
    }
L_001ed748:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ed74c:;
    {
        cpu->r[7] = add_flags(cpu, 0x001ed754u, cpu->r[7], 0, 0);
    }
L_001ed750:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ed754:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ed758:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x24u);
    }
L_001ed75c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x28u);
    }
L_001ed760:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x30u);
    }
L_001ed764:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x34u);
    }
L_001ed768:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed76c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001ed770:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_001ed774:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ed778:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[1]);
    }
L_001ed77c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ed780:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ed784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed848;
        }
    }
L_001ed788:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001ed78c:;
    {
        goto L_001ed7b8;
    }
L_001ed790:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001ed794:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ed798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed79c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed7a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ed7a4:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_001ed7a8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ed7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed848;
        }
    }
L_001ed7b0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed7b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ed7b8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001ed7bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed790;
        }
    }
L_001ed7c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed7c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ed7c8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ed7cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ed7d0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ed7d4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ed7d8:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001ed7dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed850;
        }
    }
L_001ed7e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ed7e4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_001ed7e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed850;
        }
    }
L_001ed7ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed7f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ed7f4:;
    {
        cpu->r[14] = 0x001ed7f8u; fn_00097dd0(cpu);
    }
L_001ed7f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed7fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ed800:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ed804:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ed808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed81c;
        }
    }
L_001ed80c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ed810:;
    {
        cpu->r[14] = 0x001ed814u; imp_memmove(cpu); /* memmove */
    }
L_001ed814:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed818:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ed81c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed820:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ed824:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ed828:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ed82c:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[3]);
        cpu->r[10] = wb_tmp;
    }
L_001ed830:;
    {
        cpu->r[14] = 0x001ed834u; fn_00097dc8(cpu);
    }
L_001ed834:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed838:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ed83c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001ed840:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001ed844:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed7b0;
        }
    }
L_001ed848:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed84c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed850u)) return;
    }
L_001ed850:;
    {
        cpu->r[8] = (~0x00000003u);
    }
L_001ed854:;
    {
        goto L_001ed7ec;
    }
}

/* _ZN3vox15SequentialGroupC2ERS0_ @ 001ed860 (arm) */
void fn_001ed860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed860:;
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
L_001ed864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed868:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ed86c:;
    {
        cpu->r[7] = rd32(0x001ed874u + + 0x114u);
    }
L_001ed870:;
    {
        cpu->r[14] = 0x001ed874u; fn_001ec028(cpu);
    }
L_001ed874:;
    {
        cpu->r[2] = rd32(0x001ed87cu + + 0x110u);
    }
L_001ed878:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ed87c:;
    {
        cpu->r[7] = add_flags(cpu, 0x001ed884u, cpu->r[7], 0, 0);
    }
L_001ed880:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001ed884:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ed888:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x24u);
    }
L_001ed88c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x28u);
    }
L_001ed890:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x30u);
    }
L_001ed894:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x34u);
    }
L_001ed898:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed89c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001ed8a0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_001ed8a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ed8a8:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[1]);
    }
L_001ed8ac:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001ed8b0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ed8b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed978;
        }
    }
L_001ed8b8:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001ed8bc:;
    {
        goto L_001ed8e8;
    }
L_001ed8c0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001ed8c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ed8c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed8cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed8d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ed8d4:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_001ed8d8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ed8dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed978;
        }
    }
L_001ed8e0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed8e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ed8e8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001ed8ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed8c0;
        }
    }
L_001ed8f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed8f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ed8f8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ed8fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ed900:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ed904:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ed908:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001ed90c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed980;
        }
    }
L_001ed910:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ed914:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_001ed918:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ed980;
        }
    }
L_001ed91c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ed920:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ed924:;
    {
        cpu->r[14] = 0x001ed928u; fn_00097dd0(cpu);
    }
L_001ed928:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed92c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ed930:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ed934:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ed938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ed94c;
        }
    }
L_001ed93c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ed940:;
    {
        cpu->r[14] = 0x001ed944u; imp_memmove(cpu); /* memmove */
    }
L_001ed944:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ed948:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ed94c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ed950:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ed954:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ed958:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ed95c:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[3]);
        cpu->r[10] = wb_tmp;
    }
L_001ed960:;
    {
        cpu->r[14] = 0x001ed964u; fn_00097dc8(cpu);
    }
L_001ed964:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ed968:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ed96c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001ed970:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001ed974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed8e0;
        }
    }
L_001ed978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ed97c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ed980u)) return;
    }
L_001ed980:;
    {
        cpu->r[8] = (~0x00000003u);
    }
L_001ed984:;
    {
        goto L_001ed91c;
    }
}

/* _ZN3vox11RandomGroupC2ERS0_ @ 001ed990 (arm) */
void fn_001ed990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ed990:;
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
L_001ed994:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ed998:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001ed99c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001ed9a0:;
    {
        cpu->r[5] = rd32(0x001ed9a8u + + 0x188u);
    }
L_001ed9a4:;
    {
        cpu->r[14] = 0x001ed9a8u; fn_001ec028(cpu);
    }
L_001ed9a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001ed9ac:;
    {
        cpu->r[3] = rd32(0x001ed9b4u + + 0x180u);
    }
L_001ed9b0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001ed9b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ed9bcu, cpu->r[5], 0, 0);
    }
L_001ed9b8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_001ed9bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ed9c0:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0x24u);
    }
L_001ed9c4:;
    {
        cpu->r[8] = rd32(cpu->r[11] + + 0x28u);
    }
L_001ed9c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ed9cc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001ed9d0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001ed9d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001ed9d8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_001ed9dc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ed9e0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001ed9e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eda14;
        }
    }
L_001ed9e8:;
    {
        goto L_001edae4;
    }
L_001ed9ec:;
    {
        wr32(cpu->r[10], cpu->r[5]);
    }
L_001ed9f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001ed9f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ed9f8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001ed9fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001eda00:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001eda04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001eda08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001eda0c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001eda10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edae4;
        }
    }
L_001eda14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eda18:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001eda1c:;
    {
        cpu->r[14] = 0x001eda20u; fn_00097dd0(cpu);
    }
L_001eda20:;
    {
        wr32(cpu->r[0], cpu->r[7]);
    }
L_001eda24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eda28:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001eda2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001eda30:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001eda34:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001eda38:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001eda3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001eda40:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001eda44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ed9ec;
        }
    }
L_001eda48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eda4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001eda50:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001eda54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eda58:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001eda5c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001eda60:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001eda64:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eda78;
        }
    }
L_001eda68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001eda6c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001eda70:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001eda74:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001eda80;
        }
    }
L_001eda78:;
    {
        cpu->r[2] = (~0x00000003u);
    }
L_001eda7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001eda80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eda84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001eda88:;
    {
        cpu->r[14] = 0x001eda8cu; fn_00097dd0(cpu);
    }
L_001eda8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eda90:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001eda94:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001eda98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001eda9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edaac;
        }
    }
L_001edaa0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001edaa4:;
    {
        cpu->r[14] = 0x001edaa8u; imp_memmove(cpu); /* memmove */
    }
L_001edaa8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001edaac:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[5]);
        cpu->r[10] = wb_tmp;
    }
L_001edab0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001edab4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001edab8:;
    {
        cpu->r[14] = 0x001edabcu; fn_00097dc8(cpu);
    }
L_001edabc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001edac0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001edac4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001edac8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_001edacc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001edad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001edad4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[9]);
    }
L_001edad8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001edadc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001edae0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eda14;
        }
    }
L_001edae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001edae8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001edaec:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x48u);
    }
L_001edaf0:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x40u);
    }
L_001edaf4:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x3cu);
    }
L_001edaf8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001edafc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001edb00:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001edb04:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[12]);
    }
L_001edb08:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_001edb0c:;
    {
        cpu->r[14] = 0x001edb10u; fn_001ed2d8(cpu);
    }
L_001edb10:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x58u);
    }
L_001edb14:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001edb18:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_001edb1c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001edb20:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001edb24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001edb28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001edb2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001edb30u)) return;
    }
}

/* _ZN3vox11RandomGroupC1ERS0_ @ 001edb38 (arm) */
void fn_001edb38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001edb38:;
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
L_001edb3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001edb40:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001edb44:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001edb48:;
    {
        cpu->r[5] = rd32(0x001edb50u + + 0x188u);
    }
L_001edb4c:;
    {
        cpu->r[14] = 0x001edb50u; fn_001ec028(cpu);
    }
L_001edb50:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001edb54:;
    {
        cpu->r[3] = rd32(0x001edb5cu + + 0x180u);
    }
L_001edb58:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001edb5c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001edb64u, cpu->r[5], 0, 0);
    }
L_001edb60:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_001edb64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001edb68:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0x24u);
    }
L_001edb6c:;
    {
        cpu->r[8] = rd32(cpu->r[11] + + 0x28u);
    }
L_001edb70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001edb74:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001edb78:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001edb7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001edb80:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_001edb84:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001edb88:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001edb8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001edbbc;
        }
    }
L_001edb90:;
    {
        goto L_001edc8c;
    }
L_001edb94:;
    {
        wr32(cpu->r[10], cpu->r[5]);
    }
L_001edb98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001edb9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001edba0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001edba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001edba8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001edbac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001edbb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001edbb4:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001edbb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edc8c;
        }
    }
L_001edbbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001edbc0:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001edbc4:;
    {
        cpu->r[14] = 0x001edbc8u; fn_00097dd0(cpu);
    }
L_001edbc8:;
    {
        wr32(cpu->r[0], cpu->r[7]);
    }
L_001edbcc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001edbd0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001edbd4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001edbd8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001edbdc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001edbe0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001edbe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001edbe8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001edbec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001edb94;
        }
    }
L_001edbf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001edbf4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001edbf8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001edbfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001edc00:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001edc04:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001edc08:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001edc0c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001edc20;
        }
    }
L_001edc10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001edc14:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001edc18:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001edc1c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001edc28;
        }
    }
L_001edc20:;
    {
        cpu->r[2] = (~0x00000003u);
    }
L_001edc24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001edc28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001edc2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001edc30:;
    {
        cpu->r[14] = 0x001edc34u; fn_00097dd0(cpu);
    }
L_001edc34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001edc38:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001edc3c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001edc40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001edc44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edc54;
        }
    }
L_001edc48:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001edc4c:;
    {
        cpu->r[14] = 0x001edc50u; imp_memmove(cpu); /* memmove */
    }
L_001edc50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001edc54:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[5]);
        cpu->r[10] = wb_tmp;
    }
L_001edc58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001edc5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001edc60:;
    {
        cpu->r[14] = 0x001edc64u; fn_00097dc8(cpu);
    }
L_001edc64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001edc68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001edc6c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001edc70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_001edc74:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001edc78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001edc7c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[9]);
    }
L_001edc80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001edc84:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001edc88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001edbbc;
        }
    }
L_001edc8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001edc90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001edc94:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x48u);
    }
L_001edc98:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x40u);
    }
L_001edc9c:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x3cu);
    }
L_001edca0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001edca4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001edca8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001edcac:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[12]);
    }
L_001edcb0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_001edcb4:;
    {
        cpu->r[14] = 0x001edcb8u; fn_001ed2d8(cpu);
    }
L_001edcb8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x58u);
    }
L_001edcbc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001edcc0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_001edcc4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001edcc8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001edccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001edcd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001edcd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001edcd8u)) return;
    }
}

/* _ZN3vox14NativePlaylistC1ERS0_ @ 001edce0 (arm) */
void fn_001edce0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001edce0:;
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
L_001edce4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001edce8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001edcec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001edcf0:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x18u);
    }
L_001edcf4:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001edcf8:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001edcfc:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_001edd00:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x24u);
    }
L_001edd04:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x28u);
    }
L_001edd08:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x4u);
    }
L_001edd0c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_001edd10:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001edd14:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001edd18:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
    }
L_001edd1c:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001edd20:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_001edd24:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001edd28:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x20u);
    }
L_001edd2c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001edd30:;
    {
        wr8(cpu->r[4], cpu->r[9]);
    }
L_001edd34:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_001edd38:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001edd3c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001edd40:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001edd44:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001edd48:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[11]);
    }
L_001edd4c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001edd50:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001edd54:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001edd58:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001edd5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ede80;
        }
    }
L_001edd60:;
    {
        cpu->r[11] = cpu->r[8];
    }
L_001edd64:;
    {
        goto L_001eddc0;
    }
L_001edd68:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_001edd6c:;
    {
        cpu->r[14] = 0x001edd70u; fn_00097dd0(cpu);
    }
L_001edd70:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001edd74:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001edd78:;
    {
        cpu->r[14] = 0x001edd7cu; fn_001ed730(cpu);
    }
L_001edd7c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001edd80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eddf0;
        }
    }
L_001edd84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001edd88:;
    {
        cpu->r[14] = 0x001edd8cu; fn_001ec110(cpu);
    }
L_001edd8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001edd90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edf68;
        }
    }
L_001edd94:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001edd98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001edd9c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001edda0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eddfc;
        }
    }
L_001edda4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001edda8:;
    {
        wr32(cpu->r[10], cpu->r[6]);
    }
L_001eddac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001eddb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001eddb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001eddb8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001eddbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ede7c;
        }
    }
L_001eddc0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001eddc4:;
    {
        cpu->r[14] = 0x001eddc8u; fn_001ec108(cpu);
    }
L_001eddc8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eddcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edd68;
        }
    }
L_001eddd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eddd4:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_001eddd8:;
    {
        cpu->r[14] = 0x001edddcu; fn_00097dd0(cpu);
    }
L_001edddc:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001edde0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001edde4:;
    {
        cpu->r[14] = 0x001edde8u; fn_001edb38(cpu);
    }
L_001edde8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eddec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001edd84;
        }
    }
L_001eddf0:;
    {
        wr8(cpu->r[4], cpu->r[6]);
    }
L_001eddf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eddf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eddfcu)) return;
    }
L_001eddfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ede00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ede04:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ede08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ede0c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ede10:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ede14:;
    {
        add_flags(cpu, cpu->r[9], 0xc0000001u, 0, 1);
    }
L_001ede18:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001edf58;
        }
    }
L_001ede1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001ede20:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
        }
    }
L_001ede24:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001edf58;
        }
    }
L_001ede28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ede2c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ede30:;
    {
        cpu->r[14] = 0x001ede34u; fn_00097dd0(cpu);
    }
L_001ede34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ede38:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ede3c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ede40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ede44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ede54;
        }
    }
L_001ede48:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ede4c:;
    {
        cpu->r[14] = 0x001ede50u; imp_memmove(cpu); /* memmove */
    }
L_001ede50:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ede54:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001ede58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ede5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ede60:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001ede64:;
    {
        cpu->r[14] = 0x001ede68u; fn_00097dc8(cpu);
    }
L_001ede68:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ede6c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ede70:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[9]);
    }
L_001ede74:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[8]);
    }
L_001ede78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eddc0;
        }
    }
L_001ede7c:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_001ede80:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x34u);
    }
L_001ede84:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x30u);
    }
L_001ede88:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ede8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001edeb0;
        }
    }
L_001ede90:;
    {
        goto L_001eddf4;
    }
L_001ede94:;
    {
        wr32(cpu->r[10], cpu->r[6]);
    }
L_001ede98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ede9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001edea0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001edea4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001edea8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001edeac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eddf4;
        }
    }
L_001edeb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001edeb4:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001edeb8:;
    {
        cpu->r[14] = 0x001edebcu; fn_00097dd0(cpu);
    }
L_001edebc:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001edec0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001edec4:;
    {
        cpu->r[14] = 0x001edec8u; fn_001ebef0(cpu);
    }
L_001edec8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001edecc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eddf0;
        }
    }
L_001eded0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x34u);
    }
L_001eded4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001eded8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001ededc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ede94;
        }
    }
L_001edee0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001edee4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001edee8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001edeec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001edef0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001edef4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001edef8:;
    {
        add_flags(cpu, cpu->r[9], 0xc0000001u, 0, 1);
    }
L_001edefc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001edf60;
        }
    }
L_001edf00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001edf04:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
        }
    }
L_001edf08:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001edf60;
        }
    }
L_001edf0c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001edf10:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001edf14:;
    {
        cpu->r[14] = 0x001edf18u; fn_00097dd0(cpu);
    }
L_001edf18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001edf1c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001edf20:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001edf24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001edf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001edf38;
        }
    }
L_001edf2c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001edf30:;
    {
        cpu->r[14] = 0x001edf34u; imp_memmove(cpu); /* memmove */
    }
L_001edf34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001edf38:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001edf3c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001edf40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001edf44:;
    {
        cpu->r[14] = 0x001edf48u; fn_00097dc8(cpu);
    }
L_001edf48:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001edf4c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[9]);
    }
L_001edf50:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[8]);
    }
L_001edf54:;
    {
        goto L_001edea4;
    }
L_001edf58:;
    {
        cpu->r[9] = (~0x00000003u);
    }
L_001edf5c:;
    {
        goto L_001ede28;
    }
L_001edf60:;
    {
        cpu->r[9] = (~0x00000003u);
    }
L_001edf64:;
    {
        goto L_001edf0c;
    }
L_001edf68:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_001edf6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001edf70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001edf74u)) return;
    }
}

/* _ZN3vox22NativePlaylistsManagerC1ERS0_ @ 001edf74 (arm) */
void fn_001edf74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001edf74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001edf78:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001edf7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001edf80:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001edf84:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_001edf88:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001edf8c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_001edf90:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001edf94:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_001edf98:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001edf9c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001edfa0:;
    {
        cpu->r[14] = 0x001edfa4u; fn_00097dd4(cpu);
    }
L_001edfa4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001edfa8:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_001edfac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee000;
        }
    }
L_001edfb0:;
    {
        goto L_001ee014;
    }
L_001edfb4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001edfb8:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_001edfbc:;
    {
        cpu->r[14] = 0x001edfc0u; fn_00097dd0(cpu);
    }
L_001edfc0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001edfc4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001edfc8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001edfcc:;
    {
        cpu->r[14] = 0x001edfd0u; fn_001edce0(cpu);
    }
L_001edfd0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001edfd4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001edfd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001edfdc:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[5]);
    }
L_001edfe0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001edfe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee020;
        }
    }
L_001edfe8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001edfec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001edff0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_001edff4:;
    {
        cpu->r[14] = 0x001edff8u; fn_001ec848(cpu);
    }
L_001edff8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001edffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee014;
        }
    }
L_001ee000:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001ee004:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ee008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001edfb4;
        }
    }
L_001ee00c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee010:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee014u)) return;
    }
L_001ee014:;
    {
        wr8(cpu->r[6], cpu->r[0]);
    }
L_001ee018:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee01c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee020u)) return;
    }
L_001ee020:;
    {
        wr8(cpu->r[6], cpu->r[5]);
    }
L_001ee024:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee028:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee02cu)) return;
    }
}

/* _ZN3vox22NativePlaylistsManagerC2ERS0_ @ 001ee02c (arm) */
void fn_001ee02c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee02c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ee030:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ee034:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ee038:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ee03c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_001ee040:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ee044:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ee048:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ee04c:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_001ee050:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001ee054:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001ee058:;
    {
        cpu->r[14] = 0x001ee05cu; fn_00097dd4(cpu);
    }
L_001ee05c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001ee060:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_001ee064:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee0b8;
        }
    }
L_001ee068:;
    {
        goto L_001ee0cc;
    }
L_001ee06c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee070:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_001ee074:;
    {
        cpu->r[14] = 0x001ee078u; fn_00097dd0(cpu);
    }
L_001ee078:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ee07c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001ee080:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ee084:;
    {
        cpu->r[14] = 0x001ee088u; fn_001edce0(cpu);
    }
L_001ee088:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ee08c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ee090:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ee094:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[5]);
    }
L_001ee098:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ee09c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee0d8;
        }
    }
L_001ee0a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ee0a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ee0a8:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_001ee0ac:;
    {
        cpu->r[14] = 0x001ee0b0u; fn_001ec848(cpu);
    }
L_001ee0b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ee0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee0cc;
        }
    }
L_001ee0b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001ee0bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ee0c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ee06c;
        }
    }
L_001ee0c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee0c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee0ccu)) return;
    }
L_001ee0cc:;
    {
        wr8(cpu->r[6], cpu->r[0]);
    }
L_001ee0d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee0d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee0d8u)) return;
    }
L_001ee0d8:;
    {
        wr8(cpu->r[6], cpu->r[5]);
    }
L_001ee0dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee0e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee0e4u)) return;
    }
}

/* _ZN3vox14NativePlaylistC2ERS0_ @ 001ee0e4 (arm) */
void fn_001ee0e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee0e4:;
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
L_001ee0e8:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ee0ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ee0f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ee0f4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x18u);
    }
L_001ee0f8:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001ee0fc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_001ee100:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_001ee104:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x24u);
    }
L_001ee108:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x28u);
    }
L_001ee10c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ee110:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_001ee114:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ee118:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001ee11c:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
    }
L_001ee120:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001ee124:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ee128:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001ee12c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x20u);
    }
L_001ee130:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001ee134:;
    {
        wr8(cpu->r[4], cpu->r[9]);
    }
L_001ee138:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_001ee13c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_001ee140:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[12]);
    }
L_001ee144:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001ee148:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_001ee14c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[11]);
    }
L_001ee150:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001ee154:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ee158:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001ee15c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ee160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee284;
        }
    }
L_001ee164:;
    {
        cpu->r[11] = cpu->r[8];
    }
L_001ee168:;
    {
        goto L_001ee1c4;
    }
L_001ee16c:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_001ee170:;
    {
        cpu->r[14] = 0x001ee174u; fn_00097dd0(cpu);
    }
L_001ee174:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001ee178:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ee17c:;
    {
        cpu->r[14] = 0x001ee180u; fn_001ed730(cpu);
    }
L_001ee180:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ee184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee1f4;
        }
    }
L_001ee188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee18c:;
    {
        cpu->r[14] = 0x001ee190u; fn_001ec110(cpu);
    }
L_001ee190:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ee194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee36c;
        }
    }
L_001ee198:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee19c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ee1a0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001ee1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee200;
        }
    }
L_001ee1a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ee1ac:;
    {
        wr32(cpu->r[10], cpu->r[6]);
    }
L_001ee1b0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ee1b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee1b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ee1bc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ee1c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee280;
        }
    }
L_001ee1c4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001ee1c8:;
    {
        cpu->r[14] = 0x001ee1ccu; fn_001ec108(cpu);
    }
L_001ee1cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ee1d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee16c;
        }
    }
L_001ee1d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee1d8:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_001ee1dc:;
    {
        cpu->r[14] = 0x001ee1e0u; fn_00097dd0(cpu);
    }
L_001ee1e0:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001ee1e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ee1e8:;
    {
        cpu->r[14] = 0x001ee1ecu; fn_001edb38(cpu);
    }
L_001ee1ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ee1f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee188;
        }
    }
L_001ee1f4:;
    {
        wr8(cpu->r[4], cpu->r[6]);
    }
L_001ee1f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ee1fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee200u)) return;
    }
L_001ee200:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee204:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ee208:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee20c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee210:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee214:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee218:;
    {
        add_flags(cpu, cpu->r[9], 0xc0000001u, 0, 1);
    }
L_001ee21c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee35c;
        }
    }
L_001ee220:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001ee224:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
        }
    }
L_001ee228:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee35c;
        }
    }
L_001ee22c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee230:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ee234:;
    {
        cpu->r[14] = 0x001ee238u; fn_00097dd0(cpu);
    }
L_001ee238:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee23c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ee240:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ee244:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ee248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee258;
        }
    }
L_001ee24c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ee250:;
    {
        cpu->r[14] = 0x001ee254u; imp_memmove(cpu); /* memmove */
    }
L_001ee254:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ee258:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001ee25c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ee260:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee264:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001ee268:;
    {
        cpu->r[14] = 0x001ee26cu; fn_00097dc8(cpu);
    }
L_001ee26c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ee270:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ee274:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[9]);
    }
L_001ee278:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[8]);
    }
L_001ee27c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee1c4;
        }
    }
L_001ee280:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_001ee284:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x34u);
    }
L_001ee288:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x30u);
    }
L_001ee28c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ee290:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee2b4;
        }
    }
L_001ee294:;
    {
        goto L_001ee1f8;
    }
L_001ee298:;
    {
        wr32(cpu->r[10], cpu->r[6]);
    }
L_001ee29c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee2a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ee2a4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ee2a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ee2ac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001ee2b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee1f8;
        }
    }
L_001ee2b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee2b8:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001ee2bc:;
    {
        cpu->r[14] = 0x001ee2c0u; fn_00097dd0(cpu);
    }
L_001ee2c0:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001ee2c4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ee2c8:;
    {
        cpu->r[14] = 0x001ee2ccu; fn_001ebef0(cpu);
    }
L_001ee2cc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ee2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee1f4;
        }
    }
L_001ee2d4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee2d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001ee2dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001ee2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee298;
        }
    }
L_001ee2e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ee2e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ee2ec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee2f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee2f4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee2f8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee2fc:;
    {
        add_flags(cpu, cpu->r[9], 0xc0000001u, 0, 1);
    }
L_001ee300:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee364;
        }
    }
L_001ee304:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001ee308:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
        }
    }
L_001ee30c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee364;
        }
    }
L_001ee310:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee314:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ee318:;
    {
        cpu->r[14] = 0x001ee31cu; fn_00097dd0(cpu);
    }
L_001ee31c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ee320:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ee324:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ee328:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ee32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee33c;
        }
    }
L_001ee330:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ee334:;
    {
        cpu->r[14] = 0x001ee338u; imp_memmove(cpu); /* memmove */
    }
L_001ee338:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ee33c:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001ee340:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001ee344:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ee348:;
    {
        cpu->r[14] = 0x001ee34cu; fn_00097dc8(cpu);
    }
L_001ee34c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001ee350:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[9]);
    }
L_001ee354:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[8]);
    }
L_001ee358:;
    {
        goto L_001ee2a8;
    }
L_001ee35c:;
    {
        cpu->r[9] = (~0x00000003u);
    }
L_001ee360:;
    {
        goto L_001ee22c;
    }
L_001ee364:;
    {
        cpu->r[9] = (~0x00000003u);
    }
L_001ee368:;
    {
        goto L_001ee310;
    }
L_001ee36c:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_001ee370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ee374:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee378u)) return;
    }
}

/* _ZN3vox11RandomGroup8SetStateEPNS_16RandomGroupStateE @ 001ee378 (arm) */
void fn_001ee378(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee378:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001ee37c:;
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
L_001ee380:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ee384:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001ee388:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ee38c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001ee390:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ee394:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x28u);
    }
L_001ee398:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001ee39c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_001ee3a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ee3a4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
        }
    }
L_001ee3a8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x24u);
    }
L_001ee3ac:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_001ee3b0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_001ee3b4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[6] = v1;
    }
L_001ee3b8:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_001ee3bc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001ee3c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ee3c4:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_001ee3c8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x14u);
    }
L_001ee3cc:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001ee3d0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001ee3d4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_001ee3d8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1cu);
    }
L_001ee3dc:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_001ee3e0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x20u);
    }
L_001ee3e4:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_001ee3e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee408;
        }
    }
L_001ee3ec:;
    {
        goto L_001ee4a0;
    }
L_001ee3f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ee3f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ee3f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ee3fc:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[3]);
        cpu->r[9] = wb_tmp;
    }
L_001ee400:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[9]);
    }
L_001ee404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee4a0;
        }
    }
L_001ee408:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee40c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ee410:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001ee414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee3f0;
        }
    }
L_001ee418:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee41c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001ee420:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee428:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee42c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee430:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_001ee434:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee518;
        }
    }
L_001ee438:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ee43c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
        }
    }
L_001ee440:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee518;
        }
    }
L_001ee444:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee448:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ee44c:;
    {
        cpu->r[14] = 0x001ee450u; fn_00097dd0(cpu);
    }
L_001ee450:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee454:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001ee458:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ee45c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[0];
        }
    }
L_001ee460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee474;
        }
    }
L_001ee464:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001ee468:;
    {
        cpu->r[14] = 0x001ee46cu; imp_memmove(cpu); /* memmove */
    }
L_001ee46c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee470:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001ee474:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001ee478:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ee47c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001ee480:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001ee484:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[3]);
        cpu->r[9] = wb_tmp;
    }
L_001ee488:;
    {
        cpu->r[14] = 0x001ee48cu; fn_00097dc8(cpu);
    }
L_001ee48c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ee490:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[9]);
    }
L_001ee494:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[10]);
    }
L_001ee498:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[8]);
    }
L_001ee49c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee408;
        }
    }
L_001ee4a0:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_001ee4a4:;
    {
        uint32_t wb_tmp = cpu->r[8] + + 0x30u;
        cpu->r[6] = rd32(cpu->r[8] + + 0x30u);
        cpu->r[8] = wb_tmp;
    }
L_001ee4a8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001ee4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee4cc;
        }
    }
L_001ee4b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ee4b4:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001ee4b8:;
    {
        cpu->r[14] = 0x001ee4bcu; fn_00097dc8(cpu);
    }
L_001ee4bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001ee4c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ee4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee4b4;
        }
    }
L_001ee4c8:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_001ee4cc:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x28u);
    }
L_001ee4d0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[6]);
    }
L_001ee4d4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001ee4d8:;
    {
        cpu->r[5] = rd32(cpu->r[7]);
    }
L_001ee4dc:;
    {
        goto L_001ee504;
    }
L_001ee4e0:;
    {
        cpu->r[14] = 0x001ee4e4u; fn_00097dd0(cpu);
    }
L_001ee4e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee4e8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ee4ec:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_001ee4f0:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001ee4f4:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_001ee4f8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001ee4fc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001ee500:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001ee504:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001ee508:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001ee50c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee4e0;
        }
    }
L_001ee514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee518u)) return;
    }
L_001ee518:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_001ee51c:;
    {
        goto L_001ee444;
    }
}

/* _ZN3vox11RandomGroup5ResetEi @ 001ee520 (arm) */
void fn_001ee520(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee520:;
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
L_001ee524:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ee528:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_001ee52c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001ee530:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ee534:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ee538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee59c;
        }
    }
L_001ee53c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ee540:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ee544:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001ee548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee540;
        }
    }
L_001ee54c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001ee550:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x28u);
    }
L_001ee554:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001ee558:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_001ee55c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001ee560:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001ee564:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
        }
    }
L_001ee568:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001ee56c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x28u, cpu->r[10]);
        }
    }
L_001ee570:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_001ee574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee5e8;
        }
    }
L_001ee578:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ee57c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ee580:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001ee584:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001ee588:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001ee58c:;
    {
        cpu->r[14] = 0x001ee590u; fn_00097dc8(cpu);
    }
L_001ee590:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ee594:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ee598:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee53c;
        }
    }
L_001ee59c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x38u);
    }
L_001ee5a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ee5a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001ee5a8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x14u);
    }
L_001ee5ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001ee5b0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ee5b4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[2]);
    }
L_001ee5b8:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_001ee5bc:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[14]);
    }
L_001ee5c0:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[12]);
    }
L_001ee5c4:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[1]);
    }
L_001ee5c8:;
    {
        cpu->r[14] = 0x001ee5ccu; fn_001ed2d8(cpu);
    }
L_001ee5cc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001ee5d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
        }
    }
L_001ee5d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
        }
    }
L_001ee5d8:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[0]);
    }
L_001ee5dc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x20u, cpu->r[2]);
        }
    }
L_001ee5e0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
        }
    }
L_001ee5e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee5e8u)) return;
    }
L_001ee5e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ee5ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ee5f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee5f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee5f8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee5fc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee600:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001ee604:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee668;
        }
    }
L_001ee608:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ee60c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_001ee610:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee668;
        }
    }
L_001ee614:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee618:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ee61c:;
    {
        cpu->r[14] = 0x001ee620u; fn_00097dd0(cpu);
    }
L_001ee620:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ee624:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ee628:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ee62c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ee630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee644;
        }
    }
L_001ee634:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ee638:;
    {
        cpu->r[14] = 0x001ee63cu; imp_memmove(cpu); /* memmove */
    }
L_001ee63c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ee640:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ee644:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001ee648:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ee64c:;
    {
        cpu->r[14] = 0x001ee650u; fn_00097dc8(cpu);
    }
L_001ee650:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ee654:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ee658:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[10]);
    }
L_001ee65c:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[8]);
    }
L_001ee660:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[7]);
    }
L_001ee664:;
    {
        goto L_001ee578;
    }
L_001ee668:;
    {
        cpu->r[8] = (~0x00000003u);
    }
L_001ee66c:;
    {
        goto L_001ee614;
    }
}

/* _ZN3vox11RandomGroup18SetToPreviousStateEv @ 001ee670 (arm) */
void fn_001ee670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee670:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001ee674:;
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
L_001ee678:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ee67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ee680:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001ee684:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_001ee688:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001ee68c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001ee690:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001ee694:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_001ee698:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001ee69c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001ee6a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee6a4u)) return;
        }
    }
L_001ee6a4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x58u);
    }
L_001ee6a8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee6ac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ee6b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
        }
    }
L_001ee6b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
        }
    }
L_001ee6b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
        }
    }
L_001ee6bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[4] + + 0x28u);
        }
    }
L_001ee6c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[3] + - 0x4u);
        }
    }
L_001ee6c4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
        }
    }
L_001ee6c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_001ee6cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001ee6d0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
        }
    }
L_001ee6d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ee6d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ee6dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee740;
        }
    }
L_001ee6e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ee6e4:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[3]);
        cpu->r[10] = wb_tmp;
    }
L_001ee6e8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ee6ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ee6f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ee6f4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001ee6f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ee6fc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x48u);
    }
L_001ee700:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001ee704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_001ee708:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001ee70c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[1]);
    }
L_001ee710:;
    {
        cpu->r[14] = 0x001ee714u; fn_00097dc8(cpu);
    }
L_001ee714:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ee718:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee71cu)) return;
        }
    }
L_001ee71c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001ee720:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee724:;
    {
        cpu->r[14] = 0x001ee728u; fn_00097dd0(cpu);
    }
L_001ee728:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee72c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ee730:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[6]);
    }
L_001ee734:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001ee738:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_001ee73c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee740u)) return;
    }
L_001ee740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee744:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ee748:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee74c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee750:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee754:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee758:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001ee75c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee7c4;
        }
    }
L_001ee760:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ee764:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_001ee768:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee7c4;
        }
    }
L_001ee76c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee770:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ee774:;
    {
        cpu->r[14] = 0x001ee778u; fn_00097dd0(cpu);
    }
L_001ee778:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee77c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001ee780:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ee784:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001ee788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee79c;
        }
    }
L_001ee78c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ee790:;
    {
        cpu->r[14] = 0x001ee794u; imp_memmove(cpu); /* memmove */
    }
L_001ee794:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee798:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001ee79c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ee7a0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ee7a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ee7a8:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[3]);
        cpu->r[10] = wb_tmp;
    }
L_001ee7ac:;
    {
        cpu->r[14] = 0x001ee7b0u; fn_00097dc8(cpu);
    }
L_001ee7b0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ee7b4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[10]);
    }
L_001ee7b8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[8]);
    }
L_001ee7bc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[7]);
    }
L_001ee7c0:;
    {
        goto L_001ee6ec;
    }
L_001ee7c4:;
    {
        cpu->r[8] = (~0x00000003u);
    }
L_001ee7c8:;
    {
        goto L_001ee76c;
    }
}

/* _ZN3vox11RandomGroup8SetStateERS0_ @ 001ee7cc (arm) */
void fn_001ee7cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ee7cc:;
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
L_001ee7d0:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ee7d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001ee7d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ee7dc:;
    {
        cpu->r[14] = 0x001ee7e0u; fn_001ec118(cpu);
    }
L_001ee7e0:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x28u);
    }
L_001ee7e4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x24u);
    }
L_001ee7e8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee7ec:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001ee7f0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee7f4:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001ee7f8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_001ee7fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[10], 1, 2u, &shc), 1, 0);
    }
L_001ee800:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ee804:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ee99c;
        }
    }
L_001ee808:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ee80c:;
    {
        goto L_001ee82c;
    }
L_001ee810:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ee814:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ee818:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001ee81c:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[3]);
        cpu->r[11] = wb_tmp;
    }
L_001ee820:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[11]);
    }
L_001ee824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee8cc;
        }
    }
L_001ee828:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee82c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ee830:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ee834:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001ee838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee810;
        }
    }
L_001ee83c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee840:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001ee844:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee848:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee84c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee850:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee854:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001ee858:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee990;
        }
    }
L_001ee85c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ee860:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001ee864:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001ee868:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ee990;
        }
    }
L_001ee86c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ee870:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ee874:;
    {
        cpu->r[14] = 0x001ee878u; fn_00097dd0(cpu);
    }
L_001ee878:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee87c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001ee880:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001ee884:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001ee888:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee89c;
        }
    }
L_001ee88c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001ee890:;
    {
        cpu->r[14] = 0x001ee894u; imp_memmove(cpu); /* memmove */
    }
L_001ee894:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee898:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001ee89c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ee8a0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ee8a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ee8a8:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[3]);
        cpu->r[11] = wb_tmp;
    }
L_001ee8ac:;
    {
        cpu->r[14] = 0x001ee8b0u; fn_00097dc8(cpu);
    }
L_001ee8b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ee8b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001ee8b8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[11]);
    }
L_001ee8bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_001ee8c0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[9]);
    }
L_001ee8c4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ee8c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee828;
        }
    }
L_001ee8cc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ee8d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ee8f4;
        }
    }
L_001ee8d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee8d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ee8dc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x24u);
    }
L_001ee8e0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001ee8e4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_001ee8e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ee8ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ee8f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee8e0;
        }
    }
L_001ee8f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ee8f8:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x30u;
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
        cpu->r[1] = wb_tmp;
    }
L_001ee8fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ee900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee948;
        }
    }
L_001ee904:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ee908:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ee90c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ee910:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ee914:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ee918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee90c;
        }
    }
L_001ee91c:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001ee920:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ee924:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001ee928:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001ee92c:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x8u);
    }
L_001ee930:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001ee934:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ee938:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001ee93c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001ee940:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001ee944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee924;
        }
    }
L_001ee948:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x58u);
    }
L_001ee94c:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x40u);
    }
L_001ee950:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x3cu);
    }
L_001ee954:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x48u);
    }
L_001ee958:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4cu);
    }
L_001ee95c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x54u);
    }
L_001ee960:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x44u);
    }
L_001ee964:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x50u);
    }
L_001ee968:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[7]);
    }
L_001ee96c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[6]);
    }
L_001ee970:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001ee974:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[12]);
    }
L_001ee978:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001ee97c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[1]);
    }
L_001ee980:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_001ee984:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001ee988:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ee98c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ee990u)) return;
    }
L_001ee990:;
    {
        cpu->r[2] = (~0x00000003u);
    }
L_001ee994:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001ee998:;
    {
        goto L_001ee86c;
    }
L_001ee99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ee8cc;
        }
    }
L_001ee9a0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ee9a4:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_001ee9a8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ee9ac:;
    {
        goto L_001ee9cc;
    }
L_001ee9b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ee9b4:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[3]);
        cpu->r[11] = wb_tmp;
    }
L_001ee9b8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[11]);
    }
L_001ee9bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001ee9c0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001ee9c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eea70;
        }
    }
L_001ee9c8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ee9cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ee9d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_001ee9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ee9b0;
        }
    }
L_001ee9d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ee9dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001ee9e0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001ee9e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ee9e8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001ee9ec:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ee9f0:;
    {
        add_flags(cpu, cpu->r[2], 0xc0000001u, 0, 1);
    }
L_001ee9f4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eea64;
        }
    }
L_001ee9f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ee9fc:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
        }
    }
L_001eea00:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001eea04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eea64;
        }
    }
L_001eea08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eea0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001eea10:;
    {
        cpu->r[14] = 0x001eea14u; fn_00097dd0(cpu);
    }
L_001eea14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eea18:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001eea1c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001eea20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_001eea24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eea38;
        }
    }
L_001eea28:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001eea2c:;
    {
        cpu->r[14] = 0x001eea30u; imp_memmove(cpu); /* memmove */
    }
L_001eea30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eea34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001eea38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eea3c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001eea40:;
    {
        uint32_t wb_tmp = cpu->r[11] + 0x00000004u;
        wr32(cpu->r[11], cpu->r[3]);
        cpu->r[11] = wb_tmp;
    }
L_001eea44:;
    {
        cpu->r[14] = 0x001eea48u; fn_00097dc8(cpu);
    }
L_001eea48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001eea4c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001eea50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_001eea54:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[9]);
    }
L_001eea58:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001eea5c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[11]);
    }
L_001eea60:;
    {
        goto L_001ee9bc;
    }
L_001eea64:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_001eea68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001eea6c:;
    {
        goto L_001eea08;
    }
L_001eea70:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001eea74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eea78:;
    {
        cpu->r[14] = 0x001eea7cu; fn_00097dd0(cpu);
    }
L_001eea7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eea80:;
    {
        cpu->r[2] = rd32(cpu->r[11] + - 0x4u);
    }
L_001eea84:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_001eea88:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001eea8c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001eea90:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001eea94:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001eea98:;
    {
        goto L_001ee8cc;
    }
}

/* _ZN3vox11RandomGroup10AddElementEPNS_18RandomGroupElementE @ 001eea9c (arm) */
void fn_001eea9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eea9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001eeaa0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eeaa4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001eeaa8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eeaac:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001eeab0:;
    {
        cpu->r[14] = 0x001eeab4u; fn_00097dd0(cpu);
    }
L_001eeab4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001eeab8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eeabc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001eeac0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001eeac4:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001eeac8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001eeacc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x28u);
    }
L_001eead0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001eead4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001eead8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eeb20;
        }
    }
L_001eeadc:;
    {
        wr32(cpu->r[8], cpu->r[5]);
    }
L_001eeae0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001eeae4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001eeae8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001eeaec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001eeaf0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eeaf4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001eeaf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001eeafc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001eeb00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001eeb04:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001eeb08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
        }
    }
L_001eeb0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001eeb10:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_001eeb14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001eeb18:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
        }
    }
L_001eeb1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eeb20u)) return;
    }
L_001eeb20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eeb24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001eeb28:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001eeb2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eeb30:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001eeb34:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001eeb38:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_001eeb3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eeb98;
        }
    }
L_001eeb40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001eeb44:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
        }
    }
L_001eeb48:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eeb98;
        }
    }
L_001eeb4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eeb50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001eeb54:;
    {
        cpu->r[14] = 0x001eeb58u; fn_00097dd0(cpu);
    }
L_001eeb58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eeb5c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001eeb60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eeb64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001eeb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eeb78;
        }
    }
L_001eeb6c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001eeb70:;
    {
        cpu->r[14] = 0x001eeb74u; imp_memmove(cpu); /* memmove */
    }
L_001eeb74:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001eeb78:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[5]);
        cpu->r[8] = wb_tmp;
    }
L_001eeb7c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001eeb80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eeb84:;
    {
        cpu->r[14] = 0x001eeb88u; fn_00097dc8(cpu);
    }
L_001eeb88:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[8]);
    }
L_001eeb8c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_001eeb90:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_001eeb94:;
    {
        goto L_001eeaec;
    }
L_001eeb98:;
    {
        cpu->r[7] = (~0x00000003u);
    }
L_001eeb9c:;
    {
        goto L_001eeb4c;
    }
}

/* _ZN3vox14NativePlaylist18AddPlaylistElementEPNS_20PlaylistElementInfosE @ 001eeba0 (arm) */
void fn_001eeba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eeba0:;
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
L_001eeba4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eeba8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001eebac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eebb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eebb4:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_001eebb8:;
    {
        cpu->r[14] = 0x001eebbcu; fn_00097dd0(cpu);
    }
L_001eebbc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eebc0:;
    {
        cpu->r[14] = 0x001eebc4u; fn_001ebea0(cpu);
    }
L_001eebc4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001eebc8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[6]);
        }
    }
L_001eebcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eec60;
        }
    }
L_001eebd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001eebd4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001eebd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001eebdc:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_001eebe0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001eebe4:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_001eebe8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_001eebec:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_001eebf0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x34u);
    }
L_001eebf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_001eebf8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001eebfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eec80;
        }
    }
L_001eec00:;
    {
        wr32(cpu->r[10], cpu->r[6]);
    }
L_001eec04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001eec08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001eec0c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001eec10:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eec14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eec18:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001eec1c:;
    {
        cpu->r[14] = 0x001eec20u; fn_001ec108(cpu);
    }
L_001eec20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eec24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eec68;
        }
    }
L_001eec28:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eec2c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_001eec30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eec34:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eec38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001eec3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001eec40:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001eec44:;
    {
        cpu->r[14] = 0x001eec48u; fn_001eea9c(cpu);
    }
L_001eec48:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eec4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eec50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001eec54:;
    {
        cpu->r[14] = 0x001eec58u; fn_001ec110(cpu);
    }
L_001eec58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001eec5c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4], cpu->r[0]);
        }
    }
L_001eec60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001eec64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eec68u)) return;
    }
L_001eec68:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001eec6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001eec70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_001eec74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001eec78:;
    {
        cpu->r[14] = 0x001eec7cu; fn_001ed688(cpu);
    }
L_001eec7c:;
    {
        goto L_001eec48;
    }
L_001eec80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001eec84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001eec88:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001eec8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eec90:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[3], 0, 0);
        }
    }
L_001eec94:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001eec98:;
    {
        add_flags(cpu, cpu->r[8], 0xc0000001u, 0, 1);
    }
L_001eec9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eecf8;
        }
    }
L_001eeca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001eeca4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[8] = v;
        }
    }
L_001eeca8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001eecf8;
        }
    }
L_001eecac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001eecb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001eecb4:;
    {
        cpu->r[14] = 0x001eecb8u; fn_00097dd0(cpu);
    }
L_001eecb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001eecbc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_001eecc0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001eecc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001eecc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eecd8;
        }
    }
L_001eeccc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001eecd0:;
    {
        cpu->r[14] = 0x001eecd4u; imp_memmove(cpu); /* memmove */
    }
L_001eecd4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001eecd8:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr32(cpu->r[10], cpu->r[6]);
        cpu->r[10] = wb_tmp;
    }
L_001eecdc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001eece0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001eece4:;
    {
        cpu->r[14] = 0x001eece8u; fn_00097dc8(cpu);
    }
L_001eece8:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[10]);
    }
L_001eecec:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[8]);
    }
L_001eecf0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[7]);
    }
L_001eecf4:;
    {
        goto L_001eec10;
    }
L_001eecf8:;
    {
        cpu->r[8] = (~0x00000003u);
    }
L_001eecfc:;
    {
        goto L_001eecac;
    }
}

/* _ZN3vox22NativePlaylistsManager18AddPlaylistElementEPNS_20PlaylistElementInfosE @ 001eed00 (arm) */
void fn_001eed00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eed00:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001eed04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_001eed08:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001eed0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eed10:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eed14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001eed18:;
    {
        cpu->r[14] = 0x001eed1cu; fn_001eeba0(cpu);
    }
L_001eed1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001eed20:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001eed24:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001eed28:;
    {
        cpu->r[14] = 0x001eed2cu; fn_001ec848(cpu);
    }
L_001eed2c:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_001eed30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eed34u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoderD1Ev @ 001eed34 (arm) */
void fn_001eed34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eed34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder25EmulateMixSegmentInBufferEiPNS_12SegmentStateE @ 001eed38 (arm) */
void fn_001eed38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eed38:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001eed3c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001eed40:;
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
L_001eed44:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001eed48:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x12u);
    }
L_001eed4c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xau);
    }
L_001eed50:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x28u);
    }
L_001eed54:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001eed58:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x34u);
    }
L_001eed5c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x38u);
    }
L_001eed60:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001eed64:;
    {
        cpu->r[14] = 0x001eed68u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001eed68:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_001eed6c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_001eed70:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001eed74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eed78:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eed7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001eed80:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_001eed84:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001eed88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eed9c;
        }
    }
L_001eed8c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001eed90:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[0];
        }
    }
L_001eed94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[7];
        }
    }
L_001eed98:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_001eed9c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001eeda0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_001eeda4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eedd4;
        }
    }
L_001eeda8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001eedac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001eee0c;
        }
    }
L_001eedb0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_001eedb4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001eedb8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_001eedbc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001eedc0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8] + cpu->r[10]; cpu->r[6] = v;
    }
L_001eedc4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001eedc8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001eedcc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
        }
    }
L_001eedd0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
    }
L_001eedd4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001eedd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eedfc;
        }
    }
L_001eeddc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001eede0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_001eede4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001eede8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001eedec:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001eedf0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_001eedf4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_001eedf8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001eedfc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_001eee00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001eee04:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001eee08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eee0cu)) return;
    }
L_001eee0c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_001eee10:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_001eee14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eedb8;
        }
    }
L_001eee18:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_001eee1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001eee20:;
    {
        cpu->r[14] = 0x001eee24u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001eee24:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001eee28:;
    {
        goto L_001eedb8;
    }
}

/* _ZN3vox19VoxNativeSubDecoder26EmulateMixMultipleSegmentsEi @ 001eee2c (arm) */
void fn_001eee2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eee2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xbcu);
    }
L_001eee30:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001eee34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001eee38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001eee3c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001eee40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001eee44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001eee8c;
        }
    }
L_001eee48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001eee4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001eee50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001eeec0;
        }
    }
L_001eee54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eee58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001eee5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eee60:;
    {
        cpu->r[14] = 0x001eee68u;
    }
L_001eee64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eee68u)) return;
    }
L_001eee68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001eee6c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001eee70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eee74:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eee78:;
    {
        cpu->r[14] = 0x001eee7cu; fn_001eed38(cpu);
    }
L_001eee7c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001eee80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_001eee84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001eee88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001eee8cu)) return;
    }
L_001eee8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000098u, 0, 0);
    }
L_001eee90:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001eee94:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001eee98:;
    {
        cpu->r[14] = 0x001eeea0u;
    }
L_001eee9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eeea0u)) return;
    }
L_001eeea0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001eeea4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001eeea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eeeac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001eeeb0:;
    {
        cpu->r[14] = 0x001eeeb4u; fn_001eed38(cpu);
    }
L_001eeeb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001eeeb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001eeebc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eee54;
        }
    }
L_001eeec0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000000dcu, 0, 0);
    }
L_001eeec4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001eeec8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001eeecc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001eeed0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eeed4:;
    {
        cpu->r[14] = 0x001eeedcu;
    }
L_001eeed8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001eeedcu)) return;
    }
L_001eeedc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001eeee0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001eeee4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001eeee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001eeeec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001eeef0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_001eeef4:;
    {
        cpu->r[14] = 0x001eeef8u; fn_001eed38(cpu);
    }
L_001eeef8:;
    {
        goto L_001eee54;
    }
}

/* _ZN3vox19VoxNativeSubDecoder28GetNextDyingSegmentLifeStateEv @ 001eeefc (arm) */
void fn_001eeefc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eeefc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001eef00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eef04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eef20;
        }
    }
L_001eef08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x68u);
    }
L_001eef0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eef10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eef54;
        }
    }
L_001eef14:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001eef18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eef1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eef28;
        }
    }
L_001eef20:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001eef24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001eef28:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001eef2c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x120u);
    }
L_001eef30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x12cu);
    }
L_001eef34:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001eef38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001eef3c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001eef40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001eef44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eef48:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001eef20;
        }
    }
L_001eef4c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001eef50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001eef54:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001eef58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_001eef5c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eef20;
        }
    }
L_001eef64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x114u);
    }
L_001eef68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x158u);
    }
L_001eef6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001eef70:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001eef4c;
        }
    }
L_001eef74:;
    {
        goto L_001eef20;
    }
}

/* _ZN3vox19VoxNativeSubDecoder14GetTrackParamsEv @ 001eef78 (arm) */
void fn_001eef78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eef78:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0xau);
    }
L_001eef7c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001eef80:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001eef84:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x12u);
    }
L_001eef88:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001eef8c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_001eef90:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001eef94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder7HasDataEv @ 001eef98 (arm) */
void fn_001eef98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eef98:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x16cu);
    }
L_001eef9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder20IsExtraSegmentNeededEPNS_14TransitionRuleE @ 001eefa0 (arm) */
void fn_001eefa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001eefa0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_001eefa4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eefa8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001eefe0;
        }
    }
L_001eefac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001eefb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eefec;
        }
    }
L_001eefb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001eefb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001eefbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001eefd8;
        }
    }
L_001eefc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_001eefc4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001eefc8:;
    {
        vfp_sync_flags(cpu);
    }
L_001eefcc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001eefd0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001eefd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001eefd8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001eefdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001eefe0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001eefe4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001eefe8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001eefec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_001eeff0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001eeff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001eefd8;
        }
    }
L_001eeff8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x80u);
    }
L_001eeffc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001ef000:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ef004:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001ef008:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder18MixSegmentInBufferEPsiPNS_12SegmentStateE @ 001ef00c (arm) */
void fn_001ef00c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef00c:;
    {
        cpu->r[12] = rd32(0x001ef014u + + 0x234u);
    }
L_001ef010:;
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
L_001ef014:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001ef018:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_001ef01c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ef024u, cpu->r[12], 0, 0);
    }
L_001ef020:;
    {
        cpu->r[3] = rd32(0x001ef028u + + 0x224u);
    }
L_001ef024:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001ef028:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xau);
    }
L_001ef02c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001ef030:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001ef034:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001ef038:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001ef03c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[1] = v;
    }
L_001ef040:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_001ef044:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001ef048:;
    {
        cpu->r[14] = 0x001ef04cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ef04c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x38u);
    }
L_001ef050:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ef054:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_001ef058:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[1]);
    }
L_001ef05c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ef060:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_001ef064:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ef068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001ef06c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001ef070:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[1]);
        }
    }
L_001ef074:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ef078:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef0a8;
        }
    }
L_001ef07c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001ef080:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001ef084:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ef088:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001ef08c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6]; cpu->r[8] = v;
    }
L_001ef090:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ef094:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
        }
    }
L_001ef098:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
        }
    }
L_001ef09c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ef1ec;
        }
    }
L_001ef0a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ef0a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001ef0a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ef0ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef0b0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[11] = v;
    }
L_001ef0b4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
        }
    }
L_001ef0b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001ef0bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef154;
        }
    }
L_001ef0c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ef0c4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
        }
    }
L_001ef0c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ef1d4;
        }
    }
L_001ef0cc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001ef0d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef134;
        }
    }
L_001ef0d4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ef0d8:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_001ef0dc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001ef0e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001ef0e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ef0e8:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 15u, &shc); cpu->r[12] = v;
    }
L_001ef0ec:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_001ef0f0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[1]);
    }
L_001ef0f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ef0f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ef0fc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_001ef100:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 15u, &shc), 0, 0);
    }
L_001ef104:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[12]);
    }
L_001ef108:;
    {
        cpu->r[14] = 0x001ef10cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001ef10c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001ef110:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001ef114:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ef118:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_001ef11c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
        }
    }
L_001ef120:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_001ef124:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef0e0;
        }
    }
L_001ef128:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001ef12c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001ef130:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001ef134:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_001ef138:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ef13c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[10]);
    }
L_001ef140:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ef144:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001ef148:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef14c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ef150:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
        }
    }
L_001ef154:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef1bc;
        }
    }
L_001ef15c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ef160:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[2]);
    }
L_001ef164:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ef168:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_001ef16c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ef170:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[2]);
    }
L_001ef174:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_001ef178:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_001ef17c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001ef180:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ef1bc;
        }
    }
L_001ef184:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ef188:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_001ef18c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ef1bc;
        }
    }
L_001ef190:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ef194:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001ef198:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ef19c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001ef1a0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[2]);
    }
L_001ef1a4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_001ef1a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001ef1ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001ef1b0:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[1]);
    }
L_001ef1b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ef1b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef198;
        }
    }
L_001ef1bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ef1c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001ef1c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ef1c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
        }
    }
L_001ef1cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001ef1d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef1d4u)) return;
    }
L_001ef1d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ef1d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001ef1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef22c;
        }
    }
L_001ef1e0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001ef1e4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ef1e8:;
    {
        goto L_001ef0cc;
    }
L_001ef1ec:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ef1f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef0a0;
        }
    }
L_001ef1f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ef1f8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[11] = v;
    }
L_001ef1fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ef200:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[1]);
    }
L_001ef204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001ef208:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_001ef20c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_001ef210:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_001ef214:;
    {
        wr32(cpu->r[7] + cpu->r[0], cpu->r[12]);
    }
L_001ef218:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001ef21c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef200;
        }
    }
L_001ef220:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001ef224:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_001ef228:;
    {
        goto L_001ef0a0;
    }
L_001ef22c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_001ef230:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ef234:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001ef238:;
    {
        cpu->r[14] = 0x001ef23cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ef23c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ef240:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001ef244:;
    {
        goto L_001ef0cc;
    }
}

/* _ZN3vox19VoxNativeSubDecoder11StopSegmentEPNS_12SegmentStateE @ 001ef250 (arm) */
void fn_001ef250(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef250:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x8u);
    }
L_001ef254:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ef258:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001ef25c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ef260:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ef264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef2dc;
        }
    }
L_001ef268:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_001ef26c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ef270:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001ef274:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef278:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
        }
    }
L_001ef27c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001ef280:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
        }
    }
L_001ef284:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ef288:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001ef28c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001ef290:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef294:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_001ef298:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ef29c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[1]);
    }
L_001ef2a0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x16cu, cpu->r[3]);
        }
    }
L_001ef2a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ef2a8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_001ef2ac:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001ef2b0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001ef2b4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001ef2b8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001ef2bc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001ef2c0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001ef2c4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001ef2c8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001ef2cc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001ef2d0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001ef2d4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ef2d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef2dcu)) return;
    }
L_001ef2dc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ef2e0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x3cu);
    }
L_001ef2e4:;
    {
        cpu->r[14] = 0x001ef2ecu;
    }
L_001ef2e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef2ecu)) return;
    }
L_001ef2ec:;
    {
        goto L_001ef268;
    }
}

/* _ZN3vox19VoxNativeSubDecoderD0Ev @ 001ef2f0 (arm) */
void fn_001ef2f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef2f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ef2f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ef2f8:;
    {
        cpu->r[14] = 0x001ef2fcu; fn_0018ba20(cpu);
    }
L_001ef2fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ef300:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef304u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder25UpdateCurrentSegmentStateEPNS_14TransitionRuleEb @ 001ef304 (arm) */
void fn_001ef304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef304:;
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
L_001ef308:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x78u);
    }
L_001ef30c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ef310:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ef314:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_001ef318:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001ef31c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef474;
        }
    }
L_001ef320:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001ef324:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef618;
        }
    }
L_001ef32c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001ef330:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001ef334:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x80u);
    }
L_001ef338:;
    {
        wr32(cpu->r[0] + + 0x120u, cpu->r[7]);
    }
L_001ef33c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001ef340:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001ef344:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001ef348:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x168u);
    }
L_001ef34c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001ef350:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001ef354:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ef358:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x84u);
    }
L_001ef35c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001ef360:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[1]);
    }
L_001ef364:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_001ef368:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001ef36c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ef370:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001ef374:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[3]);
    }
L_001ef378:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[12]);
    }
L_001ef37c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ef380:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[2]);
    }
L_001ef384:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[1]);
    }
L_001ef388:;
    {
        cpu->r[14] = 0x001ef390u;
    }
L_001ef38c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef390u)) return;
    }
L_001ef390:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001ef394:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001ef398:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[0]);
    }
L_001ef39c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x8u);
    }
L_001ef3a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000011u, 1, 1);
    }
L_001ef3a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef5f0;
        }
    }
L_001ef3a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ef3ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef494;
        }
    }
L_001ef3b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001ef3b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001ef3b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x10u);
    }
L_001ef3bc:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_001ef3c0:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_001ef3c4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001ef3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ef3cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001ef3d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef4ac;
        }
    }
L_001ef3d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ef3d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef428;
        }
    }
L_001ef3e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001ef3e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef4c8;
        }
    }
L_001ef3e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x148u);
    }
L_001ef3ec:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ef3f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ef3f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ef528;
        }
    }
L_001ef3f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001ef3fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef550;
        }
    }
L_001ef404:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14cu);
    }
L_001ef408:;
    {
        cpu->r[0] = 0x40000000u;
    }
L_001ef40c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ef410:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[3]);
    }
L_001ef414:;
    {
        cpu->r[14] = 0x001ef418u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ef418:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ef41c:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[3]);
    }
L_001ef420:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[0]);
    }
L_001ef424:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef428u)) return;
    }
L_001ef428:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_001ef42c:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_001ef430:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001ef434:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ef438:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0x12cu);
        }
    }
L_001ef43c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001ef440:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001ef444:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ef448:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x148u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001ef44c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef3f0;
        }
    }
L_001ef450:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
    }
L_001ef454:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef3f0;
        }
    }
L_001ef45c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ef460:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001ef464:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ef468:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001ef46c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_001ef470:;
    {
        goto L_001ef3f0;
    }
L_001ef474:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ef478:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ef47c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001ef480:;
    {
        wr32(cpu->r[0] + + 0x164u, cpu->r[7]);
    }
L_001ef484:;
    {
        wr32(cpu->r[0] + + 0x13cu, cpu->r[3]);
    }
L_001ef488:;
    {
        wr32(cpu->r[0] + + 0x144u, cpu->r[2]);
    }
L_001ef48c:;
    {
        wr32(cpu->r[0] + + 0x138u, cpu->r[3]);
    }
L_001ef490:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef3b0;
        }
    }
L_001ef494:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[5]);
    }
L_001ef498:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[5]);
    }
L_001ef49c:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[5]);
    }
L_001ef4a0:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[5]);
    }
L_001ef4a4:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[5]);
    }
L_001ef4a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef4acu)) return;
    }
L_001ef4ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ef4b0:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[3]);
    }
L_001ef4b4:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[3]);
    }
L_001ef4b8:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[3]);
    }
L_001ef4bc:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[3]);
    }
L_001ef4c0:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[3]);
    }
L_001ef4c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef4c8u)) return;
    }
L_001ef4c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001ef4cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ef4d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef3e8;
        }
    }
L_001ef4d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_001ef4d8:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001ef4dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ef4e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_001ef4e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x80u);
    }
L_001ef4e8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001ef4ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001ef4f0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001ef4f4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ef4f8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001ef4fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_001ef500:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_001ef504:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001ef508:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
        }
    }
L_001ef50c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_001ef510:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x168u);
    }
L_001ef514:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_001ef518:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001ef51c:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[3]);
    }
L_001ef520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ef524:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ef3f8;
        }
    }
L_001ef528:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14cu);
    }
L_001ef52c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ef530:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[2]);
    }
L_001ef534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001ef538:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[3]);
    }
L_001ef53c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ef540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001ef544:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[2]);
        }
    }
L_001ef548:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef54c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef404;
        }
    }
L_001ef550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ef554:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ef558:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x120u);
    }
L_001ef55c:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_001ef560:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_001ef564:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001ef568:;
    {
        cpu->r[3] = rd32(cpu->r[8] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001ef56c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x4u);
    }
L_001ef570:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001ef574:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000003u; cpu->r[0] = v;
    }
L_001ef578:;
    {
        cpu->r[14] = 0x001ef57cu; fn_00097dd0(cpu);
    }
L_001ef57c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001ef580:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x4u);
    }
L_001ef584:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_001ef588:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ef58c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[0];
        }
    }
L_001ef590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef5a4;
        }
    }
L_001ef594:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001ef598:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001ef59c:;
    {
        cpu->r[14] = 0x001ef5a0u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef5a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001ef5a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ef5a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ef5ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef634;
        }
    }
L_001ef5b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ef5b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_001ef5b8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001ef5bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ef5c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001ef5c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_001ef5c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14cu);
    }
L_001ef5cc:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 0);
    }
L_001ef5d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001ef5d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ef5d8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[6]);
        }
    }
L_001ef5dc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ef5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef404;
        }
    }
L_001ef5e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ef5e8:;
    {
        cpu->r[14] = 0x001ef5ecu; fn_00097dc8(cpu);
    }
L_001ef5ec:;
    {
        goto L_001ef404;
    }
L_001ef5f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ef5f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ef3a8;
        }
    }
L_001ef5f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ef5fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ef600:;
    {
        cpu->r[14] = 0x001ef608u;
    }
L_001ef604:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef608u)) return;
    }
L_001ef608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ef60c:;
    {
        wr8(cpu->r[4] + + 0x160u, cpu->r[3]);
    }
L_001ef610:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[0]);
    }
L_001ef614:;
    {
        goto L_001ef3a8;
    }
L_001ef618:;
    {
        wr32(cpu->r[0] + + 0x120u, cpu->r[7]);
    }
L_001ef61c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001ef620:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x12cu);
    }
L_001ef624:;
    {
        cpu->r[14] = 0x001ef62cu;
    }
L_001ef628:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef62cu)) return;
    }
L_001ef62c:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[0]);
    }
L_001ef630:;
    {
        goto L_001ef39c;
    }
L_001ef634:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001ef638:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_001ef63c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_001ef640:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001ef644:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001ef648:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001ef64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ef650:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001ef654:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001ef658:;
    {
        goto L_001ef5c8;
    }
}

/* _ZN3vox19VoxNativeSubDecoder5CleanEv @ 001ef65c (arm) */
void fn_001ef65c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef65c:;
    {
        cpu->r[3] = rd32(0x001ef664u + + 0x28u);
    }
L_001ef660:;
    {
        cpu->r[2] = rd32(0x001ef668u + + 0x28u);
    }
L_001ef664:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ef66cu, cpu->r[3], 0, 0);
    }
L_001ef668:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ef66c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ef670:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001ef674:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ef678:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef67cu)) return;
        }
    }
L_001ef67c:;
    {
        cpu->r[14] = 0x001ef680u; fn_00097dc8(cpu);
    }
L_001ef680:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ef684:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ef688:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef68cu)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder8SetStateEPNS_21NativeSubDecoderStateE @ 001ef694 (arm) */
void fn_001ef694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef694:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ef698:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ef69c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ef6a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ef6a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ef6a8:;
    {
        cpu->r[6] = 0x00000041u;
    }
L_001ef6ac:;
    {
        cpu->r[14] = 0x001ef6b0u; fn_001ecb94(cpu);
    }
L_001ef6b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ef6b4:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x20u);
    }
L_001ef6b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000006cu, 0, 0);
    }
L_001ef6bc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef6c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_001ef6c4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ef6c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001ef6cc:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[12]);
    }
L_001ef6d0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001ef6d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001ef6d8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001ef6dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001ef6e0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001ef6e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_001ef6e8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001ef6ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001ef6f0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ef6f4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x24u);
    }
L_001ef6f8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x28u);
    }
L_001ef6fc:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001ef700:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ef704:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x34u);
    }
L_001ef708:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_001ef70c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[7]);
    }
L_001ef710:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x38u);
    }
L_001ef714:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001ef718:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[14]);
    }
L_001ef71c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[12]);
    }
L_001ef720:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x40u);
    }
L_001ef724:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x44u);
    }
L_001ef728:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001ef72c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001ef730:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[8]);
    }
L_001ef734:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[7]);
    }
L_001ef738:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[14]);
    }
L_001ef73c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[12]);
    }
L_001ef740:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001ef744:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x54u);
    }
L_001ef748:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x58u);
    }
L_001ef74c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5cu);
    }
L_001ef750:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4cu);
    }
L_001ef754:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x50u);
    }
L_001ef758:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[14]);
    }
L_001ef75c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[12]);
    }
L_001ef760:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[8]);
    }
L_001ef764:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[7]);
    }
L_001ef768:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_001ef76c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001ef770:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001ef774:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001ef778:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001ef77c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_001ef780:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001ef784:;
    {
        cpu->r[14] = 0x001ef788u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef788:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000b0u, 0, 0);
    }
L_001ef78c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef790:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000dcu, 0, 0);
    }
L_001ef794:;
    {
        cpu->r[14] = 0x001ef798u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef798:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef79c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001ef7a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000f4u, 0, 0);
    }
L_001ef7a4:;
    {
        cpu->r[14] = 0x001ef7a8u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef7a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x138u);
    }
L_001ef7ac:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x140u);
    }
L_001ef7b0:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001ef7b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x13cu);
    }
L_001ef7b8:;
    {
        wr8(cpu->r[4] + + 0x16cu, cpu->r[2]);
    }
L_001ef7bc:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
    }
L_001ef7c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef7c4u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder8GetStateEPNS_21NativeSubDecoderStateE @ 001ef7c4 (arm) */
void fn_001ef7c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef7c4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ef7c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ef7cc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ef7d0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ef7d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ef7d8:;
    {
        cpu->r[6] = 0x00000041u;
    }
L_001ef7dc:;
    {
        cpu->r[14] = 0x001ef7e0u; fn_001ecb94(cpu);
    }
L_001ef7e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x34u);
    }
L_001ef7e4:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x4cu);
    }
L_001ef7e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000098u, 0, 0);
    }
L_001ef7ec:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef7f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000006cu, 0, 0);
    }
L_001ef7f4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001ef7f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x38u);
    }
L_001ef7fc:;
    {
        wr8(cpu->r[4] + + 0x20u, cpu->r[12]);
    }
L_001ef800:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001ef804:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001ef808:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001ef80c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_001ef810:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001ef814:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x44u);
    }
L_001ef818:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001ef81c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001ef820:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001ef824:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x50u);
    }
L_001ef828:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x54u);
    }
L_001ef82c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x58u);
    }
L_001ef830:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5cu);
    }
L_001ef834:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_001ef838:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[8]);
    }
L_001ef83c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_001ef840:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x64u);
    }
L_001ef844:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x68u);
    }
L_001ef848:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[14]);
    }
L_001ef84c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[12]);
    }
L_001ef850:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x6cu);
    }
L_001ef854:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x70u);
    }
L_001ef858:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001ef85c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x74u);
    }
L_001ef860:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[8]);
    }
L_001ef864:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[7]);
    }
L_001ef868:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[14]);
    }
L_001ef86c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[12]);
    }
L_001ef870:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ef874:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x80u);
    }
L_001ef878:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x84u);
    }
L_001ef87c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_001ef880:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x78u);
    }
L_001ef884:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x7cu);
    }
L_001ef888:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[14]);
    }
L_001ef88c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[12]);
    }
L_001ef890:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_001ef894:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[7]);
    }
L_001ef898:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001ef89c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8cu);
    }
L_001ef8a0:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001ef8a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_001ef8a8:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001ef8ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_001ef8b0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001ef8b4:;
    {
        cpu->r[14] = 0x001ef8b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef8b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000dcu, 0, 0);
    }
L_001ef8bc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef8c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000b0u, 0, 0);
    }
L_001ef8c4:;
    {
        cpu->r[14] = 0x001ef8c8u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef8c8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ef8cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f4u, 0, 0);
    }
L_001ef8d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000120u, 0, 0);
    }
L_001ef8d4:;
    {
        cpu->r[14] = 0x001ef8d8u; imp_memcpy(cpu); /* memcpy */
    }
L_001ef8d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x164u);
    }
L_001ef8dc:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x16cu);
    }
L_001ef8e0:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[3]);
    }
L_001ef8e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x168u);
    }
L_001ef8e8:;
    {
        wr8(cpu->r[4] + + 0x140u, cpu->r[2]);
    }
L_001ef8ec:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_001ef8f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ef8f4u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder5ResetEv @ 001ef8f4 (arm) */
void fn_001ef8f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef8f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ef8f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ef8fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_001ef900:;
    {
        cpu->r[14] = 0x001ef904u; fn_001ecb20(cpu);
    }
L_001ef904:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ef908:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ef928;
        }
    }
L_001ef90c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ef910:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ef914:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x30u);
    }
L_001ef918:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ef91c:;
    {
        cpu->r[14] = 0x001ef920u; fn_001ecb74(cpu);
    }
L_001ef920:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001ef924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ef910;
        }
    }
L_001ef928:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ef92c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ef930:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ef934:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[3]);
    }
L_001ef938:;
    {
        wr32(cpu->r[5] + + 0x164u, cpu->r[3]);
    }
L_001ef93c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000050u, 0, 0);
    }
L_001ef940:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[2]);
    }
L_001ef944:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001ef948:;
    {
        wr32(cpu->r[5] + + 0x124u, cpu->r[1]);
    }
L_001ef94c:;
    {
        wr8(cpu->r[5] + + 0x16cu, cpu->r[1]);
    }
L_001ef950:;
    {
        wr32(cpu->r[5] + + 0xe0u, cpu->r[12]);
    }
L_001ef954:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_001ef958:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[2]);
    }
L_001ef95c:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[12]);
    }
L_001ef960:;
    {
        wr32(cpu->r[5] + + 0x168u, cpu->r[2]);
    }
L_001ef964:;
    {
        wr32(cpu->r[5] + + 0x8cu, cpu->r[3]);
    }
L_001ef968:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[3]);
    }
L_001ef96c:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_001ef970:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_001ef974:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_001ef978:;
    {
        wr8(cpu->r[5] + + 0x4cu, cpu->r[1]);
    }
L_001ef97c:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_001ef980:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_001ef984:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[3]);
    }
L_001ef988:;
    {
        wr32(cpu->r[5] + + 0x120u, cpu->r[3]);
    }
L_001ef98c:;
    {
        wr32(cpu->r[5] + + 0x128u, cpu->r[2]);
    }
L_001ef990:;
    {
        wr32(cpu->r[5] + + 0xdcu, cpu->r[3]);
    }
L_001ef994:;
    {
        wr32(cpu->r[5] + + 0xe4u, cpu->r[2]);
    }
L_001ef998:;
    {
        cpu->r[14] = 0x001ef99cu; fn_001ebf20(cpu);
    }
L_001ef99c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000064u, 0, 0);
    }
L_001ef9a0:;
    {
        cpu->r[14] = 0x001ef9a4u; fn_001ebf20(cpu);
    }
L_001ef9a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001ef9a8:;
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
L_001ef9ac:;
    {
        return fn_001ebf20(cpu);
    }
}

/* _ZN3vox19VoxNativeSubDecoder19MixMultipleSegmentsEPsi @ 001ef9b0 (arm) */
void fn_001ef9b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ef9b0:;
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
L_001ef9b4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001ef9b8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_001ef9bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ef9c0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xau);
    }
L_001ef9c4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ef9c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ef9cc:;
    {
        cpu->r[6] = rd32(0x001ef9d4u + + 0x1f4u);
    }
L_001ef9d0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001ef9d4:;
    {
        cpu->r[10] = rd32(0x001ef9dcu + + 0x1f0u);
    }
L_001ef9d8:;
    {
        cpu->r[6] = add_flags(cpu, 0x001ef9e0u, cpu->r[6], 0, 0);
    }
L_001ef9dc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_001ef9e0:;
    {
        cpu->r[14] = 0x001ef9e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ef9e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001ef9e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ef9ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001ef9f0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001ef9f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001efaf4;
        }
    }
L_001ef9f8:;
    {
        cpu->r[8] = rd32(0x001efa00u + + 0x1d0u);
    }
L_001ef9fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001efa00:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001efa04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001efa08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efa10;
        }
    }
L_001efa0c:;
    {
        cpu->r[14] = 0x001efa10u; fn_00097dc8(cpu);
    }
L_001efa10:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[11] = v;
    }
L_001efa14:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001efa18:;
    {
        cpu->r[14] = 0x001efa1cu; fn_00097dd4(cpu);
    }
L_001efa1c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001efa20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001efa24:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001efa28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efba8;
        }
    }
L_001efa2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001efa30:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001efa34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001efa38:;
    {
        wr32(cpu->r[3], cpu->r[9]);
    }
L_001efa3c:;
    {
        cpu->r[14] = 0x001efa40u; imp_memset(cpu); /* memset */
    }
L_001efa40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xbcu);
    }
L_001efa44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efa48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001efa4c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001efb20;
        }
    }
L_001efa50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x100u);
    }
L_001efa54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efa58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001efb64;
        }
    }
L_001efa5c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001efa60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efa64:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001efa68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efa6c:;
    {
        cpu->r[14] = 0x001efa74u;
    }
L_001efa70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001efa74u)) return;
    }
L_001efa74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000120u, 0, 0);
    }
L_001efa78:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efa7c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001efa80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001efa84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efa88:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_001efa8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[10];
        }
    }
L_001efa90:;
    {
        cpu->r[14] = 0x001efa94u; fn_001ef00c(cpu);
    }
L_001efa94:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xau);
    }
L_001efa98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001efa9c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[9] = v;
    }
L_001efaa0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001efaa4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001efaa8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001efaec;
        }
    }
L_001efaac:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001efab0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001efab4:;
    {
        cpu->r[12] = 0x0000ffffu;
    }
L_001efab8:;
    {
        cpu->r[5] = 0x00007fffu;
    }
L_001efabc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 1u, &shc));
    }
L_001efac0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00008000u, 0, 0);
    }
L_001efac4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_001efac8:;
    {
        if (cond_test(cpu, 10)) {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001efacc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001efae0;
        }
    }
L_001efad0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001efad4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_001efad8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008000u;
        }
    }
L_001efadc:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001efae0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001efae4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001efae8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001efabc;
        }
    }
L_001efaec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001efaf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001efaf4u)) return;
    }
L_001efaf4:;
    {
        cpu->r[8] = rd32(0x001efafcu + + 0xd4u);
    }
L_001efaf8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[11] = v;
    }
L_001efafc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001efb00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001efb04:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001efb08:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001efb0c:;
    {
        cpu->r[14] = 0x001efb10u; imp_memset(cpu); /* memset */
    }
L_001efb10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xbcu);
    }
L_001efb14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efb18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001efb1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001efa50;
        }
    }
L_001efb20:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000098u, 0, 0);
    }
L_001efb24:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001efb28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efb2c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001efb30:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001efb34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efb38:;
    {
        cpu->r[14] = 0x001efb40u;
    }
L_001efb3c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001efb40u)) return;
    }
L_001efb40:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001efb44:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efb48:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001efb4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efb50:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001efb54:;
    {
        cpu->r[14] = 0x001efb58u; fn_001ef00c(cpu);
    }
L_001efb58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x100u);
    }
L_001efb5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efb60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001efa5c;
        }
    }
L_001efb64:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x000000dcu, 0, 0);
    }
L_001efb68:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efb6c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001efb70:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001efb74:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_001efb78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efb7c:;
    {
        cpu->r[14] = 0x001efb84u;
    }
L_001efb80:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001efb84u)) return;
    }
L_001efb84:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001efb88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001efb8c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001efb90:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001efb94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001efb98:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_001efb9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[12];
        }
    }
L_001efba0:;
    {
        cpu->r[14] = 0x001efba4u; fn_001ef00c(cpu);
    }
L_001efba4:;
    {
        goto L_001efa5c;
    }
L_001efba8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001efbac:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001efbb0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001efbb4:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_001efbb8:;
    {
        wr32(cpu->r[5] + + 0x144u, cpu->r[3]);
    }
L_001efbbc:;
    {
        wr32(cpu->r[5] + + 0xbcu, cpu->r[3]);
    }
L_001efbc0:;
    {
        wr32(cpu->r[5] + + 0x100u, cpu->r[3]);
    }
L_001efbc4:;
    {
        goto L_001efaec;
    }
}

/* _ZN3vox21NativeSubDecoderStateD1Ev @ 001efbd4 (arm) */
void fn_001efbd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efbd4:;
    {
        cpu->r[3] = rd32(0x001efbdcu + + 0x40u);
    }
L_001efbd8:;
    {
        cpu->r[2] = rd32(0x001efbe0u + + 0x40u);
    }
L_001efbdc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001efbe4u, cpu->r[3], 0, 0);
    }
L_001efbe0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001efbe4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efbe8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001efbec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001efbf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001efbf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001efbf8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001efbfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efc14;
        }
    }
L_001efc00:;
    {
        cpu->r[14] = 0x001efc04u; fn_001ecd24(cpu);
    }
L_001efc04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001efc08:;
    {
        cpu->r[14] = 0x001efc0cu; fn_00097dc8(cpu);
    }
L_001efc0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001efc10:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001efc14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001efc18:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001efc1cu)) return;
    }
}

/* _ZN3vox21NativeSubDecoderStateD0Ev @ 001efc24 (arm) */
void fn_001efc24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efc24:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001efc28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efc2c:;
    {
        cpu->r[14] = 0x001efc30u; fn_001efbd4(cpu);
    }
L_001efc30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001efc34:;
    {
        cpu->r[14] = 0x001efc38u; fn_0018ba20(cpu);
    }
L_001efc38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001efc3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001efc40u)) return;
    }
}

/* _ZN3vox21NativeSubDecoderStateD2Ev @ 001efc40 (arm) */
void fn_001efc40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efc40:;
    {
        cpu->r[3] = rd32(0x001efc48u + + 0x40u);
    }
L_001efc44:;
    {
        cpu->r[2] = rd32(0x001efc4cu + + 0x40u);
    }
L_001efc48:;
    {
        cpu->r[3] = add_flags(cpu, 0x001efc50u, cpu->r[3], 0, 0);
    }
L_001efc4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001efc50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efc54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001efc58:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001efc5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001efc60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001efc64:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001efc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efc80;
        }
    }
L_001efc6c:;
    {
        cpu->r[14] = 0x001efc70u; fn_001ecd24(cpu);
    }
L_001efc70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001efc74:;
    {
        cpu->r[14] = 0x001efc78u; fn_00097dc8(cpu);
    }
L_001efc78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001efc7c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001efc80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001efc84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001efc88u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder25SwapOldAndCurrentSegmentsEv @ 001efc90 (arm) */
void fn_001efc90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efc90:;
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
L_001efc94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_001efc98:;
    {
        cpu->r[5] = 0x00000041u;
    }
L_001efc9c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000120u, 0, 0);
    }
L_001efca0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001efca4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efca8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x000000dcu, 0, 0);
    }
L_001efcac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001efcb0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001efcb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001efcb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001efcbc:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001efcc0:;
    {
        wr8(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001efcc4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001efcc8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001efccc:;
    {
        cpu->r[9] = 0x00000002u;
    }
L_001efcd0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001efcd4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_001efcd8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001efcdc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001efce0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001efce4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001efce8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001efcec:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001efcf0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001efcf4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001efcf8:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001efcfc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001efd00:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_001efd04:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_001efd08:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_001efd0c:;
    {
        cpu->r[14] = 0x001efd10u; imp_memcpy(cpu); /* memcpy */
    }
L_001efd10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001efd14:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001efd18:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001efd1c:;
    {
        cpu->r[14] = 0x001efd20u; imp_memcpy(cpu); /* memcpy */
    }
L_001efd20:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[6]);
    }
L_001efd24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001efd28:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001efd2c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001efd30:;
    {
        cpu->r[14] = 0x001efd34u; imp_memcpy(cpu); /* memcpy */
    }
L_001efd34:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[9]);
    }
L_001efd38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001efd3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001efd40u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder19ApplyTransitionRuleEPNS_14TransitionRuleE @ 001efd40 (arm) */
void fn_001efd40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efd40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001efd44:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001efd48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efd4c:;
    {
        cpu->r[14] = 0x001efd50u; fn_001eeefc(cpu);
    }
L_001efd50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001efd54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001efd58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efdb8;
        }
    }
L_001efd5c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4cu);
    }
L_001efd60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001efd64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001efe58;
        }
    }
L_001efd68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efd6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001efd70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001efd74:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001efd78:;
    {
        cpu->r[14] = 0x001efd7cu; fn_001ecb28(cpu);
    }
L_001efd7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001efd80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001efd84:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
        }
    }
L_001efd88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001efd8cu)) return;
        }
    }
L_001efd8c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001efd90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001efd94:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[6] = base + 16u;
    }
L_001efd98:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001efd9c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001efda0:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_001efda4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001efda8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001efdac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001efdb0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001efdb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001efdb8u)) return;
    }
L_001efdb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001efdbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efe70;
        }
    }
L_001efdc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001efdc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001efdc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001efdcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001efe84;
        }
    }
L_001efdd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efdd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_001efdd8:;
    {
        cpu->r[14] = 0x001efddcu; fn_001ed244(cpu);
    }
L_001efddc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001efde0:;
    {
        cpu->r[14] = 0x001efde4u; fn_001efc90(cpu);
    }
L_001efde4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001efde8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efdec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001efdf0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001efdf4:;
    {
        cpu->r[14] = 0x001efdf8u; fn_001ecb28(cpu);
    }
L_001efdf8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001efdfc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001efe00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x18u);
    }
L_001efe04:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001efe08:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001efe0c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001efe10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001efe14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001efd7c;
        }
    }
L_001efe18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001efe1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efe20:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001efe24:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x100u, cpu->r[2]);
        }
    }
L_001efe28:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
        }
    }
L_001efe2c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_001efe30:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_001efe34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001efe38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001efe3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001efd7c;
        }
    }
L_001efe40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001efe44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001efe48:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[2]);
    }
L_001efe4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001efe50:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001efe54:;
    {
        goto L_001efd7c;
    }
L_001efe58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efe5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001efe60:;
    {
        cpu->r[14] = 0x001efe64u; fn_001ecb74(cpu);
    }
L_001efe64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001efe68:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001efe6c:;
    {
        goto L_001efd68;
    }
L_001efe70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efe74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001efe78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_001efe7c:;
    {
        cpu->r[14] = 0x001efe80u; fn_001ed244(cpu);
    }
L_001efe80:;
    {
        goto L_001efde4;
    }
L_001efe84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001efe88:;
    {
        cpu->r[14] = 0x001efe8cu; fn_001ecb88(cpu);
    }
L_001efe8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001efe90:;
    {
        goto L_001efdd0;
    }
}

/* _ZN3vox19VoxNativeSubDecoderC1EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001efe94 (arm) */
void fn_001efe94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001efe94:;
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
L_001efe98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001efe9c:;
    {
        cpu->r[12] = rd32(0x001efea4u + + 0x1b0u);
    }
L_001efea0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001efea4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001efea8:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001efeac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001efeb0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001efeb8u, cpu->r[12], 0, 0);
    }
L_001efeb4:;
    {
        cpu->r[14] = rd32(0x001efebcu + + 0x19cu);
    }
L_001efeb8:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001efebc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001efec0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_001efec4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001efec8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001efecc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001efed0:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001efed4:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001efed8:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001efedc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001efee0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001efee4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001efee8:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_001efeec:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001efef0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001efef4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001efef8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001efefc:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001eff00:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001eff04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001eff08:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[5]);
    }
L_001eff0c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001eff10:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001eff14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001eff18:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
    }
L_001eff1c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_001eff20:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001eff24:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[6]);
    }
L_001eff28:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[6]);
    }
L_001eff2c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[6]);
    }
L_001eff30:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[7]);
    }
L_001eff34:;
    {
        cpu->r[14] = 0x001eff38u; fn_001ebea0(cpu);
    }
L_001eff38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_001eff3c:;
    {
        cpu->r[14] = 0x001eff40u; fn_001ebea0(cpu);
    }
L_001eff40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001eff44:;
    {
        cpu->r[14] = 0x001eff48u; fn_001ebea0(cpu);
    }
L_001eff48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000020u, 0, 0);
    }
L_001eff4c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001eff50:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[6]);
    }
L_001eff54:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[2]);
    }
L_001eff58:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001eff5c:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[2]);
    }
L_001eff60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001eff64:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[6]);
    }
L_001eff68:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001eff6c:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[6]);
    }
L_001eff70:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001eff74:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001eff78:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[5]);
    }
L_001eff7c:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_001eff80:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[7]);
    }
L_001eff84:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[7]);
    }
L_001eff88:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[5]);
    }
L_001eff8c:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001eff90:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001eff94:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001eff98:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_001eff9c:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001effa0:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[6]);
    }
L_001effa4:;
    {
        wr8(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_001effa8:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[6]);
    }
L_001effac:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_001effb0:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_001effb4:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001effb8:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001effbc:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[7]);
    }
L_001effc0:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[7]);
    }
L_001effc4:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001effc8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[5]);
    }
L_001effcc:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[5]);
    }
L_001effd0:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001effd4:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[5]);
    }
L_001effd8:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[5]);
    }
L_001effdc:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[6]);
    }
L_001effe0:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[6]);
    }
L_001effe4:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_001effe8:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[7]);
    }
L_001effec:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[2]);
    }
L_001efff0:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[0]);
    }
L_001efff4:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[6]);
    }
L_001efff8:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[5]);
    }
L_001efffc:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[5]);
    }
L_001f0000:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[5]);
    }
L_001f0004:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[5]);
    }
L_001f0008:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[7]);
    }
L_001f000c:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[7]);
    }
L_001f0010:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[5]);
    }
L_001f0014:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[2]);
    }
L_001f0018:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[5]);
    }
L_001f001c:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[5]);
    }
L_001f0020:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[5]);
    }
L_001f0024:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[5]);
    }
L_001f0028:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[5]);
    }
L_001f002c:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[6]);
    }
L_001f0030:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001f0034:;
    {
        wr8(cpu->r[4] + + 0x160u, cpu->r[5]);
    }
L_001f0038:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001f003c:;
    {
        wr8(cpu->r[4] + + 0x16cu, cpu->r[7]);
    }
L_001f0040:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001f0044:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x14u);
    }
L_001f0048:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f004c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001f0050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0054u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoderC2EPNS_21StreamCursorInterfaceEPNS_12NativeChunksEPNS_6StatesEPNS_13AudioSegmentsEPSt6vectorIS9_IiNS_10SAllocatorIiLNS_10VoxMemHintE0EEEENSA_ISD_LSB_0EEEEPNS_15TransitionRulesEPS9_IS9_INS_16TransitionParamsENSA_ISJ_LSB_0EEEENSA_ISL_LSB_0EEEEPSt3mapISbIcSt11char_traitsIcENSA_IcLSB_0EEEEiNS_13StringCompareENSA_ISt4pairIKST_iELSB_0EEEEPNS_22NativePlaylistsManagerE @ 001f005c (arm) */
void fn_001f005c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f005c:;
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
L_001f0060:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0064:;
    {
        cpu->r[12] = rd32(0x001f006cu + + 0x1b0u);
    }
L_001f0068:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f006c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001f0070:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001f0074:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001f0078:;
    {
        cpu->r[12] = add_flags(cpu, 0x001f0080u, cpu->r[12], 0, 0);
    }
L_001f007c:;
    {
        cpu->r[14] = rd32(0x001f0084u + + 0x19cu);
    }
L_001f0080:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001f0084:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001f0088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_001f008c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001f0090:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001f0094:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001f0098:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001f009c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001f00a0:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_001f00a4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001f00a8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001f00ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001f00b0:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_001f00b4:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[5]);
    }
L_001f00b8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_001f00bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001f00c0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_001f00c4:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001f00c8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001f00cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001f00d0:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[5]);
    }
L_001f00d4:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[6]);
    }
L_001f00d8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001f00dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001f00e0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[6]);
    }
L_001f00e4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_001f00e8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001f00ec:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[6]);
    }
L_001f00f0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[6]);
    }
L_001f00f4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[6]);
    }
L_001f00f8:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[7]);
    }
L_001f00fc:;
    {
        cpu->r[14] = 0x001f0100u; fn_001ebea0(cpu);
    }
L_001f0100:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_001f0104:;
    {
        cpu->r[14] = 0x001f0108u; fn_001ebea0(cpu);
    }
L_001f0108:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001f010c:;
    {
        cpu->r[14] = 0x001f0110u; fn_001ebea0(cpu);
    }
L_001f0110:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000020u, 0, 0);
    }
L_001f0114:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001f0118:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[6]);
    }
L_001f011c:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[2]);
    }
L_001f0120:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001f0124:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[2]);
    }
L_001f0128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001f012c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[6]);
    }
L_001f0130:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001f0134:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[6]);
    }
L_001f0138:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001f013c:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001f0140:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[5]);
    }
L_001f0144:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[5]);
    }
L_001f0148:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[7]);
    }
L_001f014c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[7]);
    }
L_001f0150:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[5]);
    }
L_001f0154:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[5]);
    }
L_001f0158:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[5]);
    }
L_001f015c:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_001f0160:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_001f0164:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_001f0168:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[6]);
    }
L_001f016c:;
    {
        wr8(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_001f0170:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[6]);
    }
L_001f0174:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_001f0178:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_001f017c:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_001f0180:;
    {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[5]);
    }
L_001f0184:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[7]);
    }
L_001f0188:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[7]);
    }
L_001f018c:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[5]);
    }
L_001f0190:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[5]);
    }
L_001f0194:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[5]);
    }
L_001f0198:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001f019c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[5]);
    }
L_001f01a0:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[5]);
    }
L_001f01a4:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[6]);
    }
L_001f01a8:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[6]);
    }
L_001f01ac:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_001f01b0:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[7]);
    }
L_001f01b4:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[2]);
    }
L_001f01b8:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[0]);
    }
L_001f01bc:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[6]);
    }
L_001f01c0:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[5]);
    }
L_001f01c4:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[5]);
    }
L_001f01c8:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[5]);
    }
L_001f01cc:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[5]);
    }
L_001f01d0:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[7]);
    }
L_001f01d4:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[7]);
    }
L_001f01d8:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[5]);
    }
L_001f01dc:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[2]);
    }
L_001f01e0:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[5]);
    }
L_001f01e4:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[5]);
    }
L_001f01e8:;
    {
        wr32(cpu->r[4] + + 0x150u, cpu->r[5]);
    }
L_001f01ec:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[5]);
    }
L_001f01f0:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[5]);
    }
L_001f01f4:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[6]);
    }
L_001f01f8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001f01fc:;
    {
        wr8(cpu->r[4] + + 0x160u, cpu->r[5]);
    }
L_001f0200:;
    {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[5]);
    }
L_001f0204:;
    {
        wr8(cpu->r[4] + + 0x16cu, cpu->r[7]);
    }
L_001f0208:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001f020c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x14u);
    }
L_001f0210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0214:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001f0218:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f021cu)) return;
    }
}

/* _ZN3vox21NativeSubDecoderStateC1EPNS_22NativePlaylistsManagerE @ 001f0224 (arm) */
void fn_001f0224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0224:;
    {
        cpu->r[3] = rd32(0x001f022cu + + 0x12cu);
    }
L_001f0228:;
    {
        cpu->r[2] = rd32(0x001f0230u + + 0x12cu);
    }
L_001f022c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f0234u, cpu->r[3], 0, 0);
    }
L_001f0230:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f0234:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f0238:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f023c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f0240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f0244:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000024u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001f0248:;
    {
        cpu->r[14] = 0x001f024cu; fn_001ebea0(cpu);
    }
L_001f024c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_001f0250:;
    {
        cpu->r[14] = 0x001f0254u; fn_001ebea0(cpu);
    }
L_001f0254:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001f0258:;
    {
        cpu->r[14] = 0x001f025cu; fn_001ebea0(cpu);
    }
L_001f025c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f0260:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001f0264:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f0268:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001f026c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[1]);
    }
L_001f0270:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[1]);
    }
L_001f0274:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[2]);
    }
L_001f0278:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001f027c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_001f0280:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[1]);
    }
L_001f0284:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001f0288:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_001f028c:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[1]);
    }
L_001f0290:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001f0294:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_001f0298:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[1]);
    }
L_001f029c:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[1]);
    }
L_001f02a0:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[1]);
    }
L_001f02a4:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[1]);
    }
L_001f02a8:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[2]);
    }
L_001f02ac:;
    {
        wr8(cpu->r[4] + + 0xacu, cpu->r[1]);
    }
L_001f02b0:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[2]);
    }
L_001f02b4:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[1]);
    }
L_001f02b8:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[1]);
    }
L_001f02bc:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[1]);
    }
L_001f02c0:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001f02c4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[1]);
    }
L_001f02c8:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001f02cc:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[3]);
    }
L_001f02d0:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[1]);
    }
L_001f02d4:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[0]);
    }
L_001f02d8:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_001f02dc:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_001f02e0:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[1]);
    }
L_001f02e4:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[1]);
    }
L_001f02e8:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[1]);
    }
L_001f02ec:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[2]);
    }
L_001f02f0:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[1]);
    }
L_001f02f4:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_001f02f8:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[0]);
    }
L_001f02fc:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[2]);
    }
L_001f0300:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_001f0304:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[1]);
    }
L_001f0308:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[1]);
    }
L_001f030c:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001f0310:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001f0314:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[1]);
    }
L_001f0318:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001f031c:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[1]);
    }
L_001f0320:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[1]);
    }
L_001f0324:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[1]);
    }
L_001f0328:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[1]);
    }
L_001f032c:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[1]);
    }
L_001f0330:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[1]);
    }
L_001f0334:;
    {
        wr8(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001f0338:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001f033c:;
    {
        cpu->r[14] = 0x001f0340u; fn_00097dd0(cpu);
    }
L_001f0340:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f0344:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0348:;
    {
        cpu->r[14] = 0x001f034cu; fn_001edf74(cpu);
    }
L_001f034c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001f0350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0354:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0358u)) return;
    }
}

/* _ZN3vox21NativeSubDecoderStateC2EPNS_22NativePlaylistsManagerE @ 001f0360 (arm) */
void fn_001f0360(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0360:;
    {
        cpu->r[3] = rd32(0x001f0368u + + 0x12cu);
    }
L_001f0364:;
    {
        cpu->r[2] = rd32(0x001f036cu + + 0x12cu);
    }
L_001f0368:;
    {
        cpu->r[3] = add_flags(cpu, 0x001f0370u, cpu->r[3], 0, 0);
    }
L_001f036c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f0370:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001f0374:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0378:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f037c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001f0380:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000024u;
        wr32(cpu->r[0], cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001f0384:;
    {
        cpu->r[14] = 0x001f0388u; fn_001ebea0(cpu);
    }
L_001f0388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_001f038c:;
    {
        cpu->r[14] = 0x001f0390u; fn_001ebea0(cpu);
    }
L_001f0390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_001f0394:;
    {
        cpu->r[14] = 0x001f0398u; fn_001ebea0(cpu);
    }
L_001f0398:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f039c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001f03a0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f03a4:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001f03a8:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[1]);
    }
L_001f03ac:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[1]);
    }
L_001f03b0:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[2]);
    }
L_001f03b4:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_001f03b8:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[1]);
    }
L_001f03bc:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[1]);
    }
L_001f03c0:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001f03c4:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_001f03c8:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[1]);
    }
L_001f03cc:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_001f03d0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[1]);
    }
L_001f03d4:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[1]);
    }
L_001f03d8:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[1]);
    }
L_001f03dc:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[1]);
    }
L_001f03e0:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[1]);
    }
L_001f03e4:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[2]);
    }
L_001f03e8:;
    {
        wr8(cpu->r[4] + + 0xacu, cpu->r[1]);
    }
L_001f03ec:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[2]);
    }
L_001f03f0:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[1]);
    }
L_001f03f4:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[1]);
    }
L_001f03f8:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[1]);
    }
L_001f03fc:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[1]);
    }
L_001f0400:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[1]);
    }
L_001f0404:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001f0408:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[3]);
    }
L_001f040c:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[1]);
    }
L_001f0410:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[0]);
    }
L_001f0414:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[1]);
    }
L_001f0418:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[1]);
    }
L_001f041c:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[1]);
    }
L_001f0420:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[1]);
    }
L_001f0424:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[1]);
    }
L_001f0428:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[2]);
    }
L_001f042c:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[1]);
    }
L_001f0430:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_001f0434:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[0]);
    }
L_001f0438:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[2]);
    }
L_001f043c:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_001f0440:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[1]);
    }
L_001f0444:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[1]);
    }
L_001f0448:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[1]);
    }
L_001f044c:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[1]);
    }
L_001f0450:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[1]);
    }
L_001f0454:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001f0458:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[1]);
    }
L_001f045c:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[1]);
    }
L_001f0460:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[1]);
    }
L_001f0464:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[1]);
    }
L_001f0468:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[1]);
    }
L_001f046c:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[1]);
    }
L_001f0470:;
    {
        wr8(cpu->r[4] + + 0x134u, cpu->r[1]);
    }
L_001f0474:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001f0478:;
    {
        cpu->r[14] = 0x001f047cu; fn_00097dd0(cpu);
    }
L_001f047c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f0480:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0484:;
    {
        cpu->r[14] = 0x001f0488u; fn_001edf74(cpu);
    }
L_001f0488:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_001f048c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0490:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0494u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder23UpdateDyingSegmentStateEPNS_14TransitionRuleE @ 001f049c (arm) */
void fn_001f049c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f049c:;
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
L_001f04a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f04a4:;
    {
        cpu->r[2] = 0x00000041u;
    }
L_001f04a8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f04ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000000dcu, 0, 0);
    }
L_001f04b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000098u, 0, 0);
    }
L_001f04b4:;
    {
        cpu->r[14] = 0x001f04b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001f04b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f04bc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x98u);
    }
L_001f04c0:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001f04c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f04c8:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[2]);
    }
L_001f04cc:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001f04d0:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001f04d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_001f04d8:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_001f04dc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3] + cpu->r[7]; cpu->r[10] = v;
    }
L_001f04e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001f04e4:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4u);
    }
L_001f04e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001f04ec:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000003u; cpu->r[0] = v;
    }
L_001f04f0:;
    {
        cpu->r[14] = 0x001f04f4u; fn_00097dd0(cpu);
    }
L_001f04f4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001f04f8:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x4u);
    }
L_001f04fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 1);
    }
L_001f0500:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0504:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[0];
        }
    }
L_001f0508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f051c;
        }
    }
L_001f050c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
    }
L_001f0510:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001f0514:;
    {
        cpu->r[14] = 0x001f0518u; imp_memcpy(cpu); /* memcpy */
    }
L_001f0518:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001f051c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x108u);
    }
L_001f0520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0524:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x40000000u;
        }
    }
L_001f0528:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000100u;
        }
    }
L_001f052c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[3]);
        }
    }
L_001f0530:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc8u);
        }
    }
L_001f0534:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f0538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0554;
        }
    }
L_001f053c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001f0540:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001f0544:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x18u);
    }
L_001f0548:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001f054c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f0550:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f0554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb8u);
    }
L_001f0558:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f055c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f05c8;
        }
    }
L_001f0560:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0564:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f0568:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f056c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f0570:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f0574:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f0578:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_001f057c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_001f0580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001f0584:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001f0588:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
        }
    }
L_001f058c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[2]);
        }
    }
L_001f0590:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001f0594:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001f0598:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001f059c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f05a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f05b4;
        }
    }
L_001f05a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd0u);
    }
L_001f05a8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001f05ac:;
    {
        cpu->r[14] = 0x001f05b0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f05b0:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[0]);
    }
L_001f05b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f05b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f05bcu)) return;
        }
    }
L_001f05bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f05c0:;
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
L_001f05c4:;
    {
        return fn_00097dc8(cpu);
    }
L_001f05c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f05cc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_001f05d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f05d4:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001f05d8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f05dc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_001f05e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f05e4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f05e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001f05ec:;
    {
        goto L_001f0578;
    }
}

/* _ZN3vox19VoxNativeSubDecoder21UpdateOldSegmentStateEPNS_14TransitionRuleE @ 001f05f0 (arm) */
void fn_001f05f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f05f0:;
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
L_001f05f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f05f8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f05fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000dcu, 0, 0);
    }
L_001f0600:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f0604:;
    {
        cpu->r[2] = 0x00000041u;
    }
L_001f0608:;
    {
        cpu->r[14] = 0x001f060cu; imp_memcpy(cpu); /* memcpy */
    }
L_001f060c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001f0610:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001f0614:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[3]);
    }
L_001f0618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f085c;
        }
    }
L_001f061c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001f0620:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001f0624:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x18u);
    }
L_001f0628:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f062c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x108u);
    }
L_001f0630:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[3]);
    }
L_001f0634:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001f0638:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001f063c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001f0640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0644:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001f0648:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f076c;
        }
    }
L_001f064c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_001f0650:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001f0654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0658:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001f065c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f0660:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_001f0664:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_001f0668:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001f066c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001f0670:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x4u);
    }
L_001f0674:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001f0678:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001f067c:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000003u; cpu->r[0] = v;
    }
L_001f0680:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001f0684:;
    {
        cpu->r[14] = 0x001f0688u; fn_00097dd0(cpu);
    }
L_001f0688:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_001f068c:;
    {
        cpu->r[10] = rd32(cpu->r[11] + + 0x4u);
    }
L_001f0690:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_001f0694:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001f0698:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_001f069c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f06b0;
        }
    }
L_001f06a0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_001f06a4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001f06a8:;
    {
        cpu->r[14] = 0x001f06acu; imp_memcpy(cpu); /* memcpy */
    }
L_001f06ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_001f06b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_001f06b4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001f06b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f06bc:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001f06c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f079c;
        }
    }
L_001f06c4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xf8u);
    }
L_001f06c8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[7]);
    }
L_001f06cc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001f06d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe8u);
    }
L_001f06d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001f06d8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f06dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x108u);
        }
    }
L_001f06e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f07d8;
        }
    }
L_001f06e4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f06e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0724;
        }
    }
L_001f06ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001f06f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001f06f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f083c;
        }
    }
L_001f06f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f06fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f0700:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f0704:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f0708:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f070c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f0710:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_001f0714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001f0718:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001f071c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x108u, cpu->r[3]);
        }
    }
L_001f0720:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f0728;
        }
    }
L_001f0724:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001f0728:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001f072c:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001f0730:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0xc0000000u;
        }
    }
L_001f0734:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x40000000u;
        }
    }
L_001f0738:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x158u);
        }
    }
L_001f073c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x108u);
    }
L_001f0740:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_001f0744:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_001f0748:;
    {
        cpu->r[14] = 0x001f074cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f074c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001f0750:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[0]);
    }
L_001f0754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0760;
        }
    }
L_001f0758:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f075c:;
    {
        cpu->r[14] = 0x001f0760u; fn_00097dc8(cpu);
    }
L_001f0760:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001f0764:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0768u)) return;
        }
    }
L_001f0768:;
    {
        goto L_001f0784;
    }
L_001f076c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f0770:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_001f0774:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_001f0778:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[3]);
    }
L_001f077c:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_001f0780:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_001f0784:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f0788:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[3]);
    }
L_001f078c:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_001f0790:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001f0794:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[3]);
    }
L_001f0798:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f079cu)) return;
    }
L_001f079c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001f07a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f07fc;
        }
    }
L_001f07a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001f07a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f08c8;
        }
    }
L_001f07ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001f07b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0888;
        }
    }
L_001f07b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe8u);
    }
L_001f07b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f07bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001f07c0:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_001f07c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001f07c8:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[7]);
    }
L_001f07cc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f07d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x108u);
        }
    }
L_001f07d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f06e4;
        }
    }
L_001f07d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x108u);
    }
L_001f07dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f07e0:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[2]);
    }
L_001f07e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_001f07e8:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[7]);
    }
L_001f07ec:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001f07f0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x108u, cpu->r[2]);
        }
    }
L_001f07f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_001f07f8:;
    {
        goto L_001f06e4;
    }
L_001f07fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 1);
    }
L_001f0800:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe8u);
    }
L_001f0804:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0834;
        }
    }
L_001f0808:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001f080c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001f0810:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_001f0814:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f0828;
        }
    }
L_001f0818:;
    {
        goto L_001f07bc;
    }
L_001f081c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f0820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f0824:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f07bc;
        }
    }
L_001f0828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f082c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001f0830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f081c;
        }
    }
L_001f0834:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f0838:;
    {
        goto L_001f07bc;
    }
L_001f083c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0840:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_001f0844:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f0848:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001f084c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f0850:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f0854:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001f0858:;
    {
        goto L_001f0710;
    }
L_001f085c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001f0860:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[5]);
    }
L_001f0864:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[3]);
    }
L_001f0868:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_001f086c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001f0870:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[5]);
    }
L_001f0874:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[5]);
    }
L_001f0878:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_001f087c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[5]);
    }
L_001f0880:;
    {
        wr32(cpu->r[4] + + 0x100u, cpu->r[3]);
    }
L_001f0884:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0888u)) return;
    }
L_001f0888:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001f088c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe8u);
    }
L_001f0890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0834;
        }
    }
L_001f0894:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001f0898:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f089c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001f08a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f08b4;
        }
    }
L_001f08a4:;
    {
        goto L_001f07bc;
    }
L_001f08a8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f08ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001f08b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f07bc;
        }
    }
L_001f08b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001f08b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001f08bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f08a8;
        }
    }
L_001f08c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f08c4:;
    {
        goto L_001f07bc;
    }
L_001f08c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f08cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xdcu);
    }
L_001f08d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe8u);
    }
L_001f08d4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001f08d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f08dc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f08e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f08e4:;
    {
        goto L_001f07bc;
    }
}

/* _ZN3vox19VoxNativeSubDecoder20UpdateSegmentsStatesEv @ 001f08e8 (arm) */
void fn_001f08e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f08e8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f08ec:;
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
L_001f08f0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x38u);
    }
L_001f08f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001f08f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f08fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f0900:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001f0904:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f0908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f094c;
        }
    }
L_001f090c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f0910:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f094c;
        }
    }
L_001f0914:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001f0918:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000078u, 0, 0);
    }
L_001f091c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x90u);
    }
L_001f0920:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f0924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001f0928:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001f092c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f0930:;
    {
        cpu->r[14] = 0x001f0934u; fn_001efd40(cpu);
    }
L_001f0934:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001f0938:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f093c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f0990;
        }
    }
L_001f0940:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001f0944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f0a08;
        }
    }
L_001f0948:;
    {
        goto L_001f0a8c;
    }
L_001f094c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001f0950:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f0954:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f0958:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f095c:;
    {
        cpu->r[14] = 0x001f0960u; fn_001ecb28(cpu);
    }
L_001f0960:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f0964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0a7c;
        }
    }
L_001f0968:;
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
        cpu->r[12] = base + 16u;
    }
L_001f096c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001f0970:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_001f0974:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001f0978:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[8] = base + 16u;
    }
L_001f097c:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_001f0980:;
    {
        wr32(cpu->r[8], cpu->r[2]);
    }
L_001f0984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_001f0988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f098c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f0940;
        }
    }
L_001f0990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0994:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f0998:;
    {
        cpu->r[14] = 0x001f099cu; fn_001eefa0(cpu);
    }
L_001f099c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f09a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
        }
    }
L_001f09a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f09bc;
        }
    }
L_001f09a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001f09ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001f09b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0a60;
        }
    }
L_001f09b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001f09b8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001f09bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001f09c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0a60;
        }
    }
L_001f09c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f09d4;
        }
    }
L_001f09c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f09cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f09d0:;
    {
        cpu->r[14] = 0x001f09d4u; fn_001f05f0(cpu);
    }
L_001f09d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f09d8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001f09dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f09e0:;
    {
        cpu->r[14] = 0x001f09e4u; fn_001ef304(cpu);
    }
L_001f09e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f09e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f09ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f09f0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x160u, cpu->r[3]);
        }
    }
L_001f09f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x13cu);
    }
L_001f09f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f09fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0aa0;
        }
    }
L_001f0a00:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f0a04:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001f0a08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_001f0a0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000050u, 0, 0);
    }
L_001f0a10:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_001f0a14:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x90u);
    }
L_001f0a18:;
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
        cpu->r[12] = base + 16u;
    }
L_001f0a1c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x38u);
    }
L_001f0a20:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001f0a24:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[8]);
    }
L_001f0a28:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x48u);
    }
L_001f0a2c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[5] = base + 16u;
    }
L_001f0a30:;
    {
        cpu->r[10] = rd32(cpu->r[12]);
    }
L_001f0a34:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[6] = base + 16u;
    }
L_001f0a38:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[9]);
    }
L_001f0a3c:;
    {
        wr32(cpu->r[5], cpu->r[10]);
    }
L_001f0a40:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[11]);
    }
L_001f0a44:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[7] = base + 16u;
    }
L_001f0a48:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_001f0a4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001f0a50:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[8]);
    }
L_001f0a54:;
    {
        wr32(cpu->r[12], cpu->r[5]);
    }
L_001f0a58:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001f0a5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0a60u)) return;
    }
L_001f0a60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0a64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f0a68:;
    {
        cpu->r[14] = 0x001f0a6cu; fn_001f049c(cpu);
    }
L_001f0a6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0a70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f0a74:;
    {
        cpu->r[14] = 0x001f0a78u; fn_001f05f0(cpu);
    }
L_001f0a78:;
    {
        goto L_001f09d4;
    }
L_001f0a7c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001f0a80:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_001f0a84:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001f0a88:;
    {
        uint32_t wb_tmp = cpu->r[6] + + 0x78u;
        wr32(cpu->r[6] + + 0x78u, cpu->r[3]);
        cpu->r[6] = wb_tmp;
    }
L_001f0a8c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001f0a90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0a94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f0a98:;
    {
        cpu->r[14] = 0x001f0a9cu; fn_001ef304(cpu);
    }
L_001f0a9c:;
    {
        goto L_001f0a08;
    }
L_001f0aa0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001f0aa4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001f0aa8:;
    {
        cpu->r[14] = 0x001f0aacu; fn_001ecb68(cpu);
    }
L_001f0aac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f0ab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0a00;
        }
    }
L_001f0ab4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f0ab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0aec;
        }
    }
L_001f0ac0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_001f0ac4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0ac8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f0a08;
        }
    }
L_001f0acc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0ad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f0ad4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001f0ad8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f0adc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f0ae0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f0ae4:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001f0ae8:;
    {
        goto L_001f0a08;
    }
L_001f0aec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0af0:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001f0af4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f0af8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f0afc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f0b00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f0b04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f0b08:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f0b0c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f0b10:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f0b14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f0b18:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001f0b1c:;
    {
        goto L_001f0a08;
    }
}

/* _ZN3vox19VoxNativeSubDecoder23InterpretTransitionRuleEi @ 001f0b20 (arm) */
void fn_001f0b20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0b20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001f0b24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f0b28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f0b2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0b30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f0b34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001f0b38:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f0b3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0b40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0b94;
        }
    }
L_001f0b44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f0b48:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001f0b4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_001f0b50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001f0b54:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f0b58:;
    {
        cpu->r[14] = 0x001f0b5cu; fn_001ecb68(cpu);
    }
L_001f0b5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f0b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0b90;
        }
    }
L_001f0b64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001f0b68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0b6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0b9c;
        }
    }
L_001f0b70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0b74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f0b78:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001f0b7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001f0b80:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001f0b84:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001f0b88:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001f0b8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0b90u)) return;
    }
L_001f0b90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0b94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001f0b98:;
    {
        return fn_001f08e8(cpu);
    }
L_001f0b9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001f0ba0:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001f0ba4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x120u);
    }
L_001f0ba8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f0bac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001f0bb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f0bb4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f0bb8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001f0bbc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001f0bc0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_001f0bc4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f0bc8:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[3]);
    }
L_001f0bcc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0bd0u)) return;
    }
}

/* _ZN3vox19VoxNativeSubDecoder8SetStateEi @ 001f0bd0 (arm) */
void fn_001f0bd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0bd0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x38u);
    }
L_001f0bd4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001f0bd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f0bdc:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_001f0be0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f0c08;
        }
    }
L_001f0be4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_001f0be8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001f0bec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001f0bf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001f0bf4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001f0bf8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_001f0bfc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_001f0c00:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[12]);
    }
L_001f0c04:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[3]);
    }
L_001f0c08:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x20u);
    }
L_001f0c0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x90u);
    }
L_001f0c10:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_001f0c14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0c18:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001f0c1c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[1]);
    }
L_001f0c20:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001f0c34;
        }
    }
L_001f0c24:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001f0c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0c40;
        }
    }
L_001f0c2c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f0c30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001f0c34:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001f0c38:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f0c3c:;
    {
        return fn_001f0b20(cpu);
    }
L_001f0c40:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001f0c44:;
    {
        return fn_001f08e8(cpu);
    }
}

/* _ZN3vox19VoxNativeSubDecoder13EmulateDecodeEi @ 001f0c48 (arm) */
void fn_001f0c48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0c48:;
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
L_001f0c4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0c50:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001f0c54:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f0c58:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f0c5c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f0c60:;
    {
        cpu->r[5] = rd16(cpu->r[4] + + 0x8u);
    }
L_001f0c64:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 3u, &shc); cpu->r[8] = v;
    }
L_001f0c68:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_001f0c6c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f0c70:;
    {
        cpu->r[14] = 0x001f0c74u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001f0c74:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x164u);
    }
L_001f0c78:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f0c7c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001f0c80:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f0ca0;
        }
    }
L_001f0c84:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f0c88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f0c8c:;
    {
        cpu->r[14] = 0x001f0c90u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f0c90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f0c94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001f0c98:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001f0c9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0d50;
        }
    }
L_001f0ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001f0ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001f0d24;
        }
    }
L_001f0cac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0cc0;
        }
    }
L_001f0cb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f0cb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0cb8:;
    {
        cpu->r[14] = 0x001f0cbcu; fn_001eee2c(cpu);
    }
L_001f0cbc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f0cc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001f0cc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0cc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0d64;
        }
    }
L_001f0ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f0cd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0cd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0d7c;
        }
    }
L_001f0cd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f0cdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0ce0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0d94;
        }
    }
L_001f0ce4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000011u, 1, 1);
    }
L_001f0ce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f0d1c;
        }
    }
L_001f0cec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001f0cf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f0cf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f0cf8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0xd8u, cpu->r[3]);
        }
    }
L_001f0cfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f0d00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f0d04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f0d08:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_001f0d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f0d10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f0d14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f0d18:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x160u, cpu->r[3]);
        }
    }
L_001f0d1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001f0d20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0d24u)) return;
    }
L_001f0d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x150u);
    }
L_001f0d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0d2c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0cb0;
        }
    }
L_001f0d30:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001f0d34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001f0d38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0d3c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000120u;
        cpu->r[3] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_001f0d40:;
    {
        cpu->r[14] = 0x001f0d48u;
    }
L_001f0d44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0d48u)) return;
    }
L_001f0d48:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001f0d4c:;
    {
        goto L_001f0cc0;
    }
L_001f0d50:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001f0d54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0d58:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[7]);
    }
L_001f0d5c:;
    {
        cpu->r[14] = 0x001f0d60u; fn_001f08e8(cpu);
    }
L_001f0d60:;
    {
        goto L_001f0ca0;
    }
L_001f0d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0d68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_001f0d6c:;
    {
        cpu->r[14] = 0x001f0d70u; fn_001ef250(cpu);
    }
L_001f0d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f0d74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0d78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0cd8;
        }
    }
L_001f0d7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0d80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000dcu, 0, 0);
    }
L_001f0d84:;
    {
        cpu->r[14] = 0x001f0d88u; fn_001ef250(cpu);
    }
L_001f0d88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f0d8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0d90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0ce4;
        }
    }
L_001f0d94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0d98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f0d9c:;
    {
        cpu->r[14] = 0x001f0da0u; fn_001ef250(cpu);
    }
L_001f0da0:;
    {
        goto L_001f0ce4;
    }
}

/* _ZN3vox19VoxNativeSubDecoder6DecodeEPvi @ 001f0da4 (arm) */
void fn_001f0da4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0da4:;
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
L_001f0da8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0dac:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001f0db0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001f0db4:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x12u);
    }
L_001f0db8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001f0dbc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_001f0dc0:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 3u, &shc); cpu->r[8] = v;
    }
L_001f0dc4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_001f0dc8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f0dcc:;
    {
        cpu->r[14] = 0x001f0dd0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001f0dd0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x164u);
    }
L_001f0dd4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001f0dd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001f0ddc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001f0dfc;
        }
    }
L_001f0de0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f0de4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f0de8:;
    {
        cpu->r[14] = 0x001f0decu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f0dec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001f0df0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001f0df4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001f0df8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0e7c;
        }
    }
L_001f0dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_001f0e00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0e04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0e48;
        }
    }
L_001f0e08:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f0e0c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f0e10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0e14:;
    {
        cpu->r[14] = 0x001f0e18u; fn_001ef9b0(cpu);
    }
L_001f0e18:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0e1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001f0e20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0e24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0ea4;
        }
    }
L_001f0e28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f0e2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0e30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0ebc;
        }
    }
L_001f0e34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f0e38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0e3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001f0e90;
        }
    }
L_001f0e40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f0e44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0e48u)) return;
    }
L_001f0e48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001f0e1c;
        }
    }
L_001f0e4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x150u);
    }
L_001f0e50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001f0e54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0e08;
        }
    }
L_001f0e58:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001f0e5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001f0e60:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001f0e64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0e68:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000120u;
        cpu->r[12] = rd32(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_001f0e6c:;
    {
        cpu->r[14] = 0x001f0e74u;
    }
L_001f0e70:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0e74u)) return;
    }
L_001f0e74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0e78:;
    {
        goto L_001f0e1c;
    }
L_001f0e7c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_001f0e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0e84:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[7]);
    }
L_001f0e88:;
    {
        cpu->r[14] = 0x001f0e8cu; fn_001f08e8(cpu);
    }
L_001f0e8c:;
    {
        goto L_001f0dfc;
    }
L_001f0e90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0e94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000120u, 0, 0);
    }
L_001f0e98:;
    {
        cpu->r[14] = 0x001f0e9cu; fn_001ef250(cpu);
    }
L_001f0e9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f0ea0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0ea4u)) return;
    }
L_001f0ea4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0ea8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_001f0eac:;
    {
        cpu->r[14] = 0x001f0eb0u; fn_001ef250(cpu);
    }
L_001f0eb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f0eb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001f0eb8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001f0e34;
        }
    }
L_001f0ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001f0ec0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000dcu, 0, 0);
    }
L_001f0ec4:;
    {
        cpu->r[14] = 0x001f0ec8u; fn_001ef250(cpu);
    }
L_001f0ec8:;
    {
        goto L_001f0e34;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM4SeekEj @ 001f0ecc (arm) */
void fn_001f0ecc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0ecc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001f0ed0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM18EmulateDecodeBlockEPNS_12SegmentStateE @ 001f0ed4 (arm) */
void fn_001f0ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0ed4:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001f0ed8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001f0edc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f0ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001f0ee4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001f0ee8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_001f0eec:;
    {
        cpu->r[1] = rd16(cpu->r[0] + + 0xau);
    }
L_001f0ef0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_001f0ef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001f0ef8:;
    {
        cpu->r[14] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x10u);
    }
L_001f0efc:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_001f0f00:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[5] = v1;
    }
L_001f0f04:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001f0f08:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001f0f0c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001f0f10:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_001f0f14:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = cpu->r[14];
        }
    }
L_001f0f18:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001f0f1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001f0f20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001f0f24:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001f0f28:;
    {
        cpu->r[14] = 0x001f0f2cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001f0f2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f0f30:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_001f0f34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001f0f38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001f0f3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001f0f40:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_001f0f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0f48u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM41EmulateSetDecodingBufferToSegmentPositionEPNS_12SegmentStateE @ 001f0f48 (arm) */
void fn_001f0f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0f48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001f0f4c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0xcu);
    }
L_001f0f50:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x170u);
    }
L_001f0f54:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001f0f58:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f0f5c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x3cu);
    }
L_001f0f60:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001f0f64:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001f0f68:;
    {
        cpu->r[14] = 0x001f0f6cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f0f6c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001f0f70:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[8] = v;
    }
L_001f0f74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001f0f78:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_001f0f7c:;
    {
        cpu->r[14] = 0x001f0f80u; fn_001f0ed4(cpu);
    }
L_001f0f80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000005eu, 0, 0);
    }
L_001f0f84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001f0f88:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_001f0f8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001f0f90:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001f0f94:;
    {
        wr32(cpu->r[7] + + 0x184u, cpu->r[3]);
    }
L_001f0f98:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[6]);
    }
L_001f0f9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0fa0u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM31GetBytePositionFromSampleOffsetEj @ 001f0fa0 (arm) */
void fn_001f0fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0fa0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001f0fa4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f0fa8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001f0fac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x170u);
    }
L_001f0fb0:;
    {
        cpu->r[14] = 0x001f0fb4u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001f0fb4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x10u);
    }
L_001f0fb8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_001f0fbc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001f0fc0u)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM17GetDecodingBufferEv @ 001f0fc0 (arm) */
void fn_001f0fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f0fc0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001f0fc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x190u);
    }
L_001f0fc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001f0fcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f0fd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x190u, cpu->r[2]);
        }
    }
L_001f0fd4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f0fd8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x194u);
    }
L_001f0fdc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f0fe0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001f0fe4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x194u, cpu->r[0]);
        }
    }
L_001f0fe8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f0fec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x198u);
    }
L_001f0ff0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001f0ff4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001f0ff8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001f0ffc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_001f1000:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x198u, cpu->r[2]);
        }
    }
L_001f1004:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM21ReleaseDecodingBufferEi @ 001f1008 (arm) */
void fn_001f1008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1008:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001f100c:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001f1010:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000060u, 0, 0);
    }
L_001f1014:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000064u, 0, 0);
    }
L_001f1018:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000005eu, 0, 0);
    }
L_001f101c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001f1020:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001f1024:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_001f1028:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
    }
L_001f102c:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001f1030:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM5ResetEv @ 001f1034 (arm) */
void fn_001f1034(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1034:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001f1038:;
    {
        wr32(cpu->r[0] + + 0x198u, cpu->r[2]);
    }
L_001f103c:;
    {
        wr32(cpu->r[0] + + 0x178u, cpu->r[2]);
    }
L_001f1040:;
    {
        wr32(cpu->r[0] + + 0x17cu, cpu->r[2]);
    }
L_001f1044:;
    {
        wr32(cpu->r[0] + + 0x180u, cpu->r[2]);
    }
L_001f1048:;
    {
        wr32(cpu->r[0] + + 0x184u, cpu->r[2]);
    }
L_001f104c:;
    {
        wr32(cpu->r[0] + + 0x188u, cpu->r[2]);
    }
L_001f1050:;
    {
        wr32(cpu->r[0] + + 0x18cu, cpu->r[2]);
    }
L_001f1054:;
    {
        wr32(cpu->r[0] + + 0x190u, cpu->r[2]);
    }
L_001f1058:;
    {
        wr32(cpu->r[0] + + 0x194u, cpu->r[2]);
    }
L_001f105c:;
    {
        return fn_001ef8f4(cpu);
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM8SetStateEPNS_29NativeSubDecoderIMAADPCMStateE @ 001f1060 (arm) */
void fn_001f1060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f1060:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f1064:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001f1068:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001f106c:;
    {
        cpu->r[14] = 0x001f1070u; fn_001ef694(cpu);
    }
L_001f1070:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x144u);
    }
L_001f1074:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001f1078:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[2]);
    }
L_001f107c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f1080:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x148u);
    }
L_001f1084:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[3]);
    }
L_001f1088:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14cu);
    }
L_001f108c:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[3]);
    }
L_001f1090:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f1094:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0xd8u, cpu->r[3]);
        }
    }
L_001f1098:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_001f109c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f10a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f10a4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_001f10a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x144u);
    }
L_001f10ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001f10b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001f10b4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x160u, cpu->r[3]);
        }
    }
L_001f10b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f10bcu)) return;
    }
}

/* _ZN3vox27VoxNativeSubDecoderIMAADPCM8GetStateEPNS_29NativeSubDecoderIMAADPCMStateE @ 001f10bc (arm) */
void fn_001f10bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001f10bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001f10c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001f10c4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001f10c8:;
    {
        cpu->r[14] = 0x001f10ccu; fn_001ef7c4(cpu);
    }
L_001f10cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x190u);
    }
L_001f10d0:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[3]);
    }
L_001f10d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x194u);
    }
L_001f10d8:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[3]);
    }
L_001f10dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x198u);
    }
L_001f10e0:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[3]);
    }
L_001f10e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001f10e8u)) return;
    }
}
