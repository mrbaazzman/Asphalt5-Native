#include "functions.h"

/* _ZN8CCarBase21UpdateDirectionVectorEv @ 00174970 (arm) */
void fn_00174970(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174970:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00174974:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00174978:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000014cu, 0, 0);
    }
L_0017497c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x88u);
    }
L_00174980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174984:;
    {
        cpu->r[14] = 0x00174988u; fn_001845ac(cpu);
    }
L_00174988:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017498c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x84u);
    }
L_00174990:;
    {
        cpu->r[14] = 0x00174994u; fn_001846f0(cpu);
    }
L_00174994:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174998:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_0017499c:;
    {
        cpu->r[14] = 0x001749a0u; fn_00184768(cpu);
    }
L_001749a0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x164u);
    }
L_001749a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x168u);
    }
L_001749a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x16cu);
    }
L_001749ac:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_001749b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14cu);
    }
L_001749b4:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_001749b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x150u);
    }
L_001749bc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001749c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x154u);
    }
L_001749c4:;
    {
        { int32_t v = (int32_t)(cpu->r[5] << 12); cpu->r[5] = (uint32_t)(v >> 12); }
    }
L_001749c8:;
    {
        { int32_t v = (int32_t)(cpu->r[12] << 12); cpu->r[12] = (uint32_t)(v >> 12); }
    }
L_001749cc:;
    {
        { int32_t v = (int32_t)(cpu->r[0] << 12); cpu->r[0] = (uint32_t)(v >> 12); }
    }
L_001749d0:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 12); cpu->r[1] = (uint32_t)(v >> 12); }
    }
L_001749d4:;
    {
        { int32_t v = (int32_t)(cpu->r[2] << 12); cpu->r[2] = (uint32_t)(v >> 12); }
    }
L_001749d8:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 12); cpu->r[3] = (uint32_t)(v >> 12); }
    }
L_001749dc:;
    {
        wr32(cpu->r[4] + + 0x17cu, cpu->r[5]);
    }
L_001749e0:;
    {
        wr32(cpu->r[4] + + 0x180u, cpu->r[12]);
    }
L_001749e4:;
    {
        wr32(cpu->r[4] + + 0x184u, cpu->r[0]);
    }
L_001749e8:;
    {
        wr32(cpu->r[4] + + 0x188u, cpu->r[1]);
    }
L_001749ec:;
    {
        wr32(cpu->r[4] + + 0x18cu, cpu->r[2]);
    }
L_001749f0:;
    {
        wr32(cpu->r[4] + + 0x190u, cpu->r[3]);
    }
L_001749f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001749f8u)) return;
    }
}

/* _ZN8CCarBase21ComputeForwardGroundYEPK10RoadStructi @ 001749f8 (arm) */
void fn_001749f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001749f8:;
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
L_001749fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_00174a00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00174a04:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00174a08:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00174a0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00174a10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00174a14:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00174a18:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00174a1c:;
    {
        cpu->r[14] = 0x00174a24u;
    }
L_00174a20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174a24u)) return;
    }
L_00174a24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00174a28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00174a2c:;
    {
        cpu->r[14] = 0x00174a30u; fn_001855bc(cpu);
    }
L_00174a30:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_00174a34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00174a38:;
    {
        cpu->r[3] = 0x00000074u;
    }
L_00174a3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00174a40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00174a44:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[7] = v;
    }
L_00174a48:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x1b0u);
    }
L_00174a4c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_00174a50:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x3dcu);
    }
L_00174a54:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[12] = v;
    }
L_00174a58:;
    {
        cpu->r[14] = rd32(cpu->r[8] + + 0x3d8u);
    }
L_00174a5c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[7] = v;
    }
L_00174a60:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x3d4u);
    }
L_00174a64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00174a68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00174a6c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[9]);
    }
L_00174a70:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[12] = v;
    }
L_00174a74:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_00174a78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00174a7c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 1, 12u, &shc), 0, 0);
    }
L_00174a80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00174a84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_00174a88:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00174a8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00174a90:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00174a94:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_00174a98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00174a9c:;
    {
        cpu->r[14] = 0x00174aa0u; fn_0017bf58(cpu);
    }
L_00174aa0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_00174aa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174aa8:;
    {
        cpu->r[14] = 0x00174aacu; fn_00180c78(cpu);
    }
L_00174aac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_00174ab0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00174ab4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00174ab8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174abc:;
    {
        cpu->r[14] = 0x00174ac0u; fn_00180b68(cpu);
    }
L_00174ac0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00174ac4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00174ac8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_00174acc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00174ad0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_00174ad4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00174ad8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00174adc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174ae0:;
    {
        cpu->r[14] = 0x00174ae4u; fn_0017a860(cpu);
    }
L_00174ae4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00174ae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00174aec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00174af0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00174af4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00174af8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00174afc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00174b00:;
    {
        cpu->r[14] = rd32(cpu->r[7] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00174b04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00174b08:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00174b0c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_00174b10:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_00174b14:;
    {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00174b18:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00174b1c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00174b20:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00174b24:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00174b28:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00174b2c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174b30:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00174b34:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174b38:;
    {
        cpu->r[14] = 0x00174b3cu; fn_0017a764(cpu);
    }
L_00174b3c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00174b40:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00174b44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00174b48:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00174b4c:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_00174b50:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00174b54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00174b58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00174b5c:;
    {
        cpu->r[14] = 0x00174b60u; fn_0017a9d8(cpu);
    }
L_00174b60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00174b64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174b68u)) return;
    }
}

/* _ZN8CCarBase19GetGroundUnderWheelEPK10RoadStructiii @ 00174b68 (arm) */
void fn_00174b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174b68:;
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
L_00174b6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000148u, 0, 0);
    }
L_00174b70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00174b74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_00174b78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00174b7c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00174b80:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00174b84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00174b88:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00174b8c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00174b90:;
    {
        cpu->r[14] = 0x00174b94u; fn_00180c78(cpu);
    }
L_00174b94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00174b98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00174b9c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00174ba0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00174ba4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00174ba8:;
    {
        cpu->r[14] = 0x00174bacu; fn_00180b68(cpu);
    }
L_00174bac:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x524u);
    }
L_00174bb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00174bb4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00174bb8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00174bbc:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x538u);
    }
L_00174bc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00174bc4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00174bc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00174bcc:;
    {
        cpu->r[14] = 0x00174bd0u; fn_0017a9d8(cpu);
    }
L_00174bd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00174bd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174bd8u)) return;
    }
}

/* _ZN8CCarBase19ComputeGroundRotMtxERiS0_S0_ @ 00174bd8 (arm) */
void fn_00174bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174bd8:;
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
L_00174bdc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0xc0u);
    }
L_00174be0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00174be4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0xc8u);
    }
L_00174be8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00174bec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xccu);
    }
L_00174bf0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4fcu);
    }
L_00174bf4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00174bf8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4e4u);
    }
L_00174bfc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00174c00:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00174c04:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00174c08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x508u);
    }
L_00174c0c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00174c10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4e0u);
    }
L_00174c14:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00174c18:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4f8u);
    }
L_00174c1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00174c20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4e8u);
    }
L_00174c24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00174c28:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x500u);
    }
L_00174c2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00174c30:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00174c34:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x504u);
    }
L_00174c38:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x50cu);
    }
L_00174c3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00174c40:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00174c44:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00174c48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00174c4c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_00174c50:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00174c54:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_00174c58:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_00174c5c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6]; cpu->r[6] = v;
    }
L_00174c60:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_00174c64:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00174c68:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00174c6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00174c70:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00174c74:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00174c78:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00174c7c:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_00174c80:;
    {
        cpu->r[14] = 0x00174c84u; fn_0018002c(cpu);
    }
L_00174c84:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00174c88:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00174c8c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5] + cpu->r[6]; cpu->r[0] = v;
    }
L_00174c90:;
    {
        cpu->r[14] = 0x00174c94u; fn_0017fa74(cpu);
    }
L_00174c94:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00174c98:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_00174c9c:;
    {
        cpu->r[14] = 0x00174ca0u; fn_0017fe7c(cpu);
    }
L_00174ca0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 1);
    }
L_00174ca4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 0);
        }
    }
L_00174ca8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00174cac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
        }
    }
L_00174cb0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
        }
    }
L_00174cb4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00174cb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 11u, &shc), 1, 0);
        }
    }
L_00174cbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000800u, 1, 1);
    }
L_00174cc0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000800u, 1, 0);
        }
    }
L_00174cc4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00174cc8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
        }
    }
L_00174ccc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 11u, &shc), 1, 0);
        }
    }
L_00174cd0:;
    {
        add_flags(cpu, cpu->r[7], 0x00000800u, 0, 1);
    }
L_00174cd4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00174cf0;
        }
    }
L_00174cd8:;
    {
        cpu->r[1] = 0x0000f7ffu;
    }
L_00174cdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000800u, 0, 0);
    }
L_00174ce0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00174ce4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_00174ce8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[7] = v;
    }
L_00174cec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[7], 2, 11u, &shc), 0, 0);
    }
L_00174cf0:;
    {
        add_flags(cpu, cpu->r[2], 0x00000800u, 0, 1);
    }
L_00174cf4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00174d10;
        }
    }
L_00174cf8:;
    {
        cpu->r[1] = 0x0000f7ffu;
    }
L_00174cfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_00174d00:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00174d04:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00174d08:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[2] = v;
    }
L_00174d0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
    }
L_00174d10:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000400u, 1, 1);
    }
L_00174d14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174d18:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 0);
        }
    }
L_00174d1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 1);
    }
L_00174d20:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_00174d24:;
    {
        wr32(cpu->r[3], cpu->r[7]);
    }
L_00174d28:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_00174d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174d30:;
    {
        cpu->r[14] = 0x00174d38u;
    }
L_00174d34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174d38u)) return;
    }
L_00174d38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00174d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174d64;
        }
    }
L_00174d40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174d44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174d48:;
    {
        cpu->r[14] = 0x00174d50u;
    }
L_00174d4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174d50u)) return;
    }
L_00174d50:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00174d54:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00174d58:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_00174d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00174d60:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[10], cpu->r[3]);
        }
    }
L_00174d64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00174d68:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00174d6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174d70u)) return;
    }
}

/* _ZN8CCarBase10UpdatePushEv @ 00174d70 (arm) */
void fn_00174d70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174d70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00174d74:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00174d78:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4d8u);
    }
L_00174d7c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00174d80:;
    {
        cpu->r[14] = 0x00174d84u; fn_00171b64(cpu);
    }
L_00174d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_00174d88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x200u);
    }
L_00174d8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00174d90:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_00174d94:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[2]);
    }
L_00174d98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00174d9c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[1]);
        }
    }
L_00174da0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00174ddc;
        }
    }
L_00174da4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00174ddc;
        }
    }
L_00174da8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00174dac:;
    {
        cpu->r[14] = 0x00174db0u; fn_00171b64(cpu);
    }
L_00174db0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_00174db4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00174db8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_00174dbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00174dc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174dc4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00174dc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_00174dcc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00174dd0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_00174dd4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00174dd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174ddcu)) return;
    }
L_00174ddc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00174de0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00174de4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174de8:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[2]);
    }
L_00174dec:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_00174df0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00174df4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_00174df8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174dfcu)) return;
    }
}

/* _ZN8CCarBase9PushBeginEPS_ @ 00174dfc (arm) */
void fn_00174dfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174dfc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1f8u);
    }
L_00174e00:;
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
L_00174e04:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174e08:;
    {
        cpu->r[6] = rd32(0x00174e10u + + 0x238u);
    }
L_00174e0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00174e10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00174e14:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00174e18:;
    {
        cpu->r[6] = add_flags(cpu, 0x00174e20u, cpu->r[6], 0, 0);
    }
L_00174e1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00174e20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174e30;
        }
    }
L_00174e24:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00174e28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00174e2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174e30u)) return;
    }
L_00174e30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000003d4u, 0, 0);
    }
L_00174e34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00174e38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000003e0u, 0, 0);
    }
L_00174e3c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00174e40:;
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
L_00174e44:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[5]);
        }
    }
L_00174e48:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[5]);
        }
    }
L_00174e4c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[5]);
        }
    }
L_00174e50:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[12]);
    }
L_00174e54:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00174e58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000420u, 0, 0);
        }
    }
L_00174e5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
        }
    }
L_00174e60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
        }
    }
L_00174e64:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[12]);
    }
L_00174e68:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_00174e6c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_00174e70:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174e78:;
    {
        cpu->r[14] = 0x00174e80u;
    }
L_00174e7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174e80u)) return;
    }
L_00174e80:;
    {
        cpu->r[2] = rd32(0x00174e88u + + 0x1c4u);
    }
L_00174e84:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_00174e88:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00174e8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00174e90:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00174e94:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00174e98:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00174e9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00174ea0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00174ea4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00174ea8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_00174eac:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00174eb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00174eb4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_00174eb8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00174ebc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00174ec0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_00174ec4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00174ec8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00174ecc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[6] = v;
    }
L_00174ed0:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[6], 1, 0);
    }
L_00174ed4:;
    {
        cpu->r[14] = 0x00174edcu;
    }
L_00174ed8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174edcu)) return;
    }
L_00174edc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000096u, 1, 1);
    }
L_00174ee0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x428u);
    }
L_00174ee4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00174ee8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_00174eec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x430u);
    }
L_00174ef0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00174ef4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00174ef8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00174efc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00175000;
        }
    }
L_00174f00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00174f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175014;
        }
    }
L_00174f08:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_00174f0c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_00174f10:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 0);
    }
L_00174f14:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_00174f18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00174f1c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14]; cpu->r[12] = v;
    }
L_00174f20:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 0);
    }
L_00174f24:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7] + cpu->r[12]; cpu->r[2] = v;
    }
L_00174f28:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00174f2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00174f30:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00174f34:;
    {
        cpu->r[10] = rd32(cpu->r[4]);
    }
L_00174f38:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11] + cpu->r[2]; cpu->r[3] = v;
    }
L_00174f3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00174f40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00174f44:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00174f48:;
    {
        cpu->r[14] = 0x00174f50u;
    }
L_00174f4c:;
    {
        uint32_t t = rd32(cpu->r[10] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174f50u)) return;
    }
L_00174f50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00174f54:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00174f58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00174f5c:;
    {
        cpu->r[14] = 0x00174f64u;
    }
L_00174f60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174f64u)) return;
    }
L_00174f64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00174f68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00174f6c:;
    {
        cpu->r[3] = 0x00004c29u;
    }
L_00174f70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00174f74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xff22u << 16);
    }
L_00174f78:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00174f7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00174f80:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[0]; cpu->r[1] = v;
    }
L_00174f84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00174f88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00174f8c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_00174f90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00174f94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00175024;
        }
    }
L_00174f98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x484u);
    }
L_00174f9c:;
    {
        cpu->r[3] = 0x000023ffu;
    }
L_00174fa0:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00174fa4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00174fa8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x00f4u << 16);
    }
L_00174fac:;
    {
        cpu->r[2] = (cpu->r[1] >> 3) & 0x1u;
    }
L_00174fb0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00174fb4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000003u;
        }
    }
L_00174fb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_00174fbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00174fc0:;
    {
        wr8(cpu->r[4] + + 0x1fcu, cpu->r[2]);
    }
L_00174fc4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[2];
        }
    }
L_00174fc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00174fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174fe8;
        }
    }
L_00174fd0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_00174fd4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00174fd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00174fdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00174fe0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[11];
        }
    }
L_00174fe4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x1fcu, cpu->r[3]);
        }
    }
L_00174fe8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00174fec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00174ff0:;
    {
        cpu->r[14] = 0x00174ff4u; fn_00171b88(cpu);
    }
L_00174ff4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00174ff8:;
    {
        wr32(cpu->r[4] + + 0x4d8u, cpu->r[0]);
    }
L_00174ffc:;
    {
        goto L_00174e24;
    }
L_00175000:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000064u, 1, 1);
    }
L_00175004:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_00175008:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000002u;
        }
    }
L_0017500c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00175010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00174f08;
        }
    }
L_00175014:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00175018:;
    {
        cpu->r[11] = rd8(cpu->r[4] + + 0x1fcu);
    }
L_0017501c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00175020:;
    {
        goto L_00174fe8;
    }
L_00175024:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00175028:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0017502c:;
    {
        wr8(cpu->r[4] + + 0x1fcu, cpu->r[11]);
    }
L_00175030:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[2] = v;
    }
L_00175034:;
    {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
    }
L_00175038:;
    {
        { uint32_t v = cpu->r[2] & cpu->r[3]; set_nz(cpu, v); }
    }
L_0017503c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00175040:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00175044:;
    {
        goto L_00174fe8;
    }
}

/* _ZN8CCarBase21CarPushAdjustPositionEiiR8Vector4s @ 00175050 (arm) */
void fn_00175050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00175050:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00175054:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00175058:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017505c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00175060:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000003e0u, 0, 0);
    }
L_00175064:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00175068:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0017506c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00175070:;
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
L_00175074:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_0017507c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00175080:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_00175084:;
    {
        cpu->r[14] = 0x00175088u; fn_00171b64(cpu);
    }
L_00175088:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00175090u + + 0x90u);
    }
L_0017508c:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_00175090:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00175098u + + 0x8cu);
    }
L_00175094:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 5u, &shc); cpu->r[3] = v;
    }
L_00175098:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_0017509c:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_001750a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001750a4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001750a8:;
    {
        cpu->r[14] = 0x001750acu; imp_sinf(cpu); /* sinf */
    }
L_001750ac:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_001750b0:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_001750b4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001750b8:;
    {
        cpu->r[14] = 0x001750bcu; imp_cosf(cpu); /* cosf */
    }
L_001750bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_001750c0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001750c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_001750c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001750cc:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_001750d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001750d4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_001750d8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001750dc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001750e0:;
    {
        vfp_vmul(cpu, 14, 15, 13);
    }
L_001750e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001750e8:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_001750ec:;
    {
        vfp_vmls(cpu, 14, 17, 12);
    }
L_001750f0:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_001750f4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001750f8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001750fc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00175100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00175104:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[2]);
    }
L_00175108:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0017510c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00175110:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00175114:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00175118:;
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
L_0017511c:;
    {
        return fn_00174970(cpu);
    }
}

/* _ZN8CCarBase10CrashBeginEPS_ @ 00175128 (arm) */
void fn_00175128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00175128:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_0017512c:;
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
L_00175130:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00175134:;
    {
        cpu->r[5] = rd32(0x0017513cu + + 0xaa0u);
    }
L_00175138:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_0017513c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00175140:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00175144:;
    {
        cpu->r[5] = add_flags(cpu, 0x0017514cu, cpu->r[5], 0, 0);
    }
L_00175148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175154;
        }
    }
L_0017514c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_00175150:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00175154u)) return;
    }
L_00175154:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x498u);
    }
L_00175158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017515c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017514c;
        }
    }
L_00175160:;
    {
        cpu->r[8] = rd32(0x00175168u + + 0xa78u);
    }
L_00175164:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175168:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0017516c:;
    {
        cpu->r[14] = 0x00175170u; fn_00096b88(cpu);
    }
L_00175170:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175174:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017514c;
        }
    }
L_00175178:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017517c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175180:;
    {
        cpu->r[14] = 0x00175188u;
    }
L_00175184:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175188u)) return;
    }
L_00175188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017518c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001751b0;
        }
    }
L_00175190:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175198:;
    {
        cpu->r[14] = 0x001751a0u;
    }
L_0017519c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001751a0u)) return;
    }
L_001751a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x674u);
    }
L_001751a4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001751a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001751ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017514c;
        }
    }
L_001751b0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001751b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001751b8:;
    {
        cpu->r[14] = 0x001751c0u;
    }
L_001751bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001751c0u)) return;
    }
L_001751c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001751c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001751f8;
        }
    }
L_001751c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001751cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001751d0:;
    {
        cpu->r[14] = 0x001751d8u;
    }
L_001751d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001751d8u)) return;
    }
L_001751d8:;
    {
        cpu->r[2] = 0x000018e0u;
    }
L_001751dc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001751e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001751e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001751e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001751ec:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[12]);
    }
L_001751f0:;
    {
        cpu->r[14] = 0x001751f8u;
    }
L_001751f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001751f8u)) return;
    }
L_001751f8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001751fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00175200:;
    {
        wr32(cpu->r[4] + + 0x498u, cpu->r[1]);
    }
L_00175204:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00175208:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017520c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00175210:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00175214:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00175218:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0017521c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175224:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00175228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017522c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_00175230:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00175234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175748;
        }
    }
L_00175238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x490u);
    }
L_0017523c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00175240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175748;
        }
    }
L_00175244:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00175248:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017524c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_00175250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175738;
        }
    }
L_00175254:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00175258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001759f0;
        }
    }
L_0017525c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00175260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017514c;
        }
    }
L_00175264:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017526c:;
    {
        cpu->r[14] = 0x00175274u;
    }
L_00175270:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175274u)) return;
    }
L_00175274:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001752a4;
        }
    }
L_0017527c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175280:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175284:;
    {
        cpu->r[14] = 0x0017528cu;
    }
L_00175288:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017528cu)) return;
    }
L_0017528c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00175290:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00175294:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00175298:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001752a4;
        }
    }
L_0017529c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001752a0:;
    {
        cpu->r[14] = 0x001752a4u; fn_000a5c98(cpu);
    }
L_001752a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001752a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001752ac:;
    {
        cpu->r[14] = 0x001752b4u;
    }
L_001752b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001752b4u)) return;
    }
L_001752b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001752b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001752c4;
        }
    }
L_001752bc:;
    {
        cpu->r[0] = 0x00000009u;
    }
L_001752c0:;
    {
        cpu->r[14] = 0x001752c4u; fn_000a5c98(cpu);
    }
L_001752c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001752c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001752cc:;
    {
        cpu->r[14] = 0x001752d4u;
    }
L_001752d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001752d4u)) return;
    }
L_001752d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001752d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175314;
        }
    }
L_001752dc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001752e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001752e4:;
    {
        cpu->r[14] = 0x001752ecu;
    }
L_001752e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001752ecu)) return;
    }
L_001752ec:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_001752f0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001752f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001752f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175314;
        }
    }
L_001752fc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00175300:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00175304:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00175308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175314;
        }
    }
L_0017530c:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_00175310:;
    {
        cpu->r[14] = 0x00175314u; fn_000a5c98(cpu);
    }
L_00175314:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175318:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_0017531c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00175320:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175324:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00175328:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0017532c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00175330:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175334:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175338:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017533c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00175340:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00175344:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00175348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175b00;
        }
    }
L_0017534c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00175350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175354:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1b8u);
    }
L_00175358:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_0017535c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b4u);
    }
L_00175360:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x000003e0u, 0, 0);
    }
L_00175364:;
    {
        wr32(cpu->r[4] + + 0x1e4u, cpu->r[1]);
    }
L_00175368:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[2]);
    }
L_0017536c:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[3]);
    }
L_00175370:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00175374:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[3]);
    }
L_00175378:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017537c:;
    {
        cpu->r[14] = 0x00175384u;
    }
L_00175380:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175384u)) return;
    }
L_00175384:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00175388:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[6]);
        }
    }
L_0017538c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[6]);
        }
    }
L_00175390:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[6]);
        }
    }
L_00175394:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[0]);
    }
L_00175398:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0017539c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001753a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001753fc;
        }
    }
L_001753a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_001753a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001753ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[3]);
        }
    }
L_001753b0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[3]);
        }
    }
L_001753b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[3]);
        }
    }
L_001753b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001753fc;
        }
    }
L_001753bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000420u, 0, 0);
    }
L_001753c0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001753c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001753c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_001753cc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3e4u);
    }
L_001753d0:;
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
L_001753d4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3e8u);
    }
L_001753d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001753dc:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[12]);
    }
L_001753e0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001753e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3f0u);
    }
L_001753e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3f4u);
    }
L_001753ec:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001753f0:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[14]);
    }
L_001753f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001753f8:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[10]);
    }
L_001753fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175404:;
    {
        cpu->r[14] = 0x0017540cu;
    }
L_00175408:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017540cu)) return;
    }
L_0017540c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017545c;
        }
    }
L_00175414:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017541c:;
    {
        cpu->r[14] = 0x00175424u;
    }
L_00175420:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175424u)) return;
    }
L_00175424:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175428:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0017542c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175430:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00175434:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00175438:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0017543c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00175440:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175444:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017544c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00175450:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00175454:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00175458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175b30;
        }
    }
L_0017545c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175464:;
    {
        cpu->r[14] = 0x0017546cu;
    }
L_00175468:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017546cu)) return;
    }
L_0017546c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175470:;
    {
        cpu->r[11] = 0x00006667u;
    }
L_00175474:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00175478:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x6666u << 16);
    }
L_0017547c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00175480:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00175484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00175488:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_0017548c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_00175490:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00175494:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[10], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_00175498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001754d8;
        }
    }
L_0017549c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001754a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001754a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001754a8:;
    {
        cpu->r[14] = 0x001754b0u;
    }
L_001754ac:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001754b0u)) return;
    }
L_001754b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001754b4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001754b8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_001754bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001754c0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_001754c4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_001754c8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001754cc:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_001754d0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001754d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001759bc;
        }
    }
L_001754d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001754dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_001754e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001754e4:;
    {
        cpu->r[14] = 0x001754ecu;
    }
L_001754e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001754ecu)) return;
    }
L_001754ec:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000096u, 1, 1);
    }
L_001754f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001754f4:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[3]);
    }
L_001754f8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001754fc:;
    {
        wr32(cpu->r[4] + + 0x1c0u, cpu->r[3]);
    }
L_00175500:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00175794;
        }
    }
L_00175504:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00175508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017584c;
        }
    }
L_0017550c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00175510:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00175514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017590c;
        }
    }
L_00175518:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x42cu);
    }
L_0017551c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_00175520:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x430u);
    }
L_00175524:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00175528:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x428u);
    }
L_0017552c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_00175530:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00175534:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00175538:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0017553c:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_00175540:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[14] = v;
    }
L_00175544:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[12]);
    }
L_00175548:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[14]);
    }
L_0017554c:;
    {
        cpu->r[14] = 0x00175550u; fn_001720cc(cpu);
    }
L_00175550:;
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
L_00175554:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_00175558:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0017555c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175560:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3e0u);
    }
L_00175564:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00175568:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3e4u);
    }
L_0017556c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3e8u);
    }
L_00175570:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00175574:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_00175578:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_0017557c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00175580:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_00175584:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[2]);
    }
L_00175588:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0017558c:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[0]);
    }
L_00175590:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[3]);
    }
L_00175594:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017559c:;
    {
        cpu->r[14] = 0x001755a4u;
    }
L_001755a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001755a4u)) return;
    }
L_001755a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001755a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001755bc;
        }
    }
L_001755ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001755b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001755b4:;
    {
        cpu->r[14] = 0x001755bcu;
    }
L_001755b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001755bcu)) return;
    }
L_001755bc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001755c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001755c4:;
    {
        cpu->r[14] = 0x001755ccu;
    }
L_001755c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001755ccu)) return;
    }
L_001755cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001755d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001755e4;
        }
    }
L_001755d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001755d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001755dc:;
    {
        cpu->r[14] = 0x001755e4u;
    }
L_001755e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001755e4u)) return;
    }
L_001755e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001755e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001755ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001755f0:;
    {
        cpu->r[14] = 0x001755f8u;
    }
L_001755f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001755f8u)) return;
    }
L_001755f8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001755fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00175600:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00175604:;
    {
        cpu->r[14] = 0x0017560cu;
    }
L_00175608:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017560cu)) return;
    }
L_0017560c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_00175610:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_00175614:;
    {
        cpu->r[3] = 0x00004c29u;
    }
L_00175618:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0017561c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xff22u << 16);
    }
L_00175620:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00175624:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_00175628:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[0]; cpu->r[1] = v;
    }
L_0017562c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_00175630:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00175634:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_00175638:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017563c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00175830;
        }
    }
L_00175640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00175644:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[2] = v;
    }
L_00175648:;
    {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
    }
L_0017564c:;
    {
        { uint32_t v = cpu->r[2] & cpu->r[3]; set_nz(cpu, v); }
    }
L_00175650:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00175654:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00175658:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[11];
        }
    }
L_0017565c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_00175660:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175664:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00175668:;
    {
        cpu->r[14] = 0x0017566cu; fn_00173554(cpu);
    }
L_0017566c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017593c;
        }
    }
L_00175674:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00175678:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017567c:;
    {
        cpu->r[14] = 0x00175684u;
    }
L_00175680:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175684u)) return;
    }
L_00175684:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001756fc;
        }
    }
L_0017568c:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x430u);
    }
L_00175690:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00175694:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x428u);
    }
L_00175698:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0017569c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x42cu);
    }
L_001756a0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001756a4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[2] + cpu->r[14]; cpu->r[6] = v;
    }
L_001756a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001756ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001756b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001756b4:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[12]);
    }
L_001756b8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[7]; cpu->r[7] = v;
    }
L_001756bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001756c0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001756c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001756c8:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[12]);
    }
L_001756cc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001756d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001756d4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_001756d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_001756dc:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[14]);
    }
L_001756e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_001756e4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001756e8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001756ec:;
    {
        cpu->r[14] = 0x001756f0u; fn_001720cc(cpu);
    }
L_001756f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001756f4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001756f8:;
    {
        cpu->r[14] = 0x001756fcu; fn_00173920(cpu);
    }
L_001756fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_00175700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175864;
        }
    }
L_00175704:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 1);
    }
L_00175708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175718;
        }
    }
L_0017570c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_00175710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175714:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000005u;
        }
    }
L_00175718:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017571c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00175720:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00175724:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00175728:;
    {
        wr8(cpu->r[4] + + 0x1e0u, cpu->r[3]);
    }
L_0017572c:;
    {
        cpu->r[14] = 0x00175730u; fn_00171cec(cpu);
    }
L_00175730:;
    {
        wr32(cpu->r[4] + + 0x4d4u, cpu->r[0]);
    }
L_00175734:;
    {
        goto L_0017514c;
    }
L_00175738:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x498u);
    }
L_0017573c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00175740:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_00175744:;
    {
        goto L_00175254;
    }
L_00175748:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017574c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175750:;
    {
        cpu->r[14] = 0x00175758u;
    }
L_00175754:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175758u)) return;
    }
L_00175758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017575c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ac4;
        }
    }
L_00175760:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175764:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00175768:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0017576c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00175770:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00175774:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00175778:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0017577c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175784:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00175788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017578c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_00175790:;
    {
        goto L_00175244;
    }
L_00175794:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000064u, 1, 1);
    }
L_00175798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001758b4;
        }
    }
L_0017579c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001757a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001757a4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
        }
    }
L_001757a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175850;
        }
    }
L_001757ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x42cu);
    }
L_001757b0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_001757b4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x430u);
    }
L_001757b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001757bc:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x428u);
    }
L_001757c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001757c4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001757c8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001757cc:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_001757d0:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_001757d4:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[14] = v;
    }
L_001757d8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_001757dc:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[14]);
    }
L_001757e0:;
    {
        cpu->r[14] = 0x001757e4u; fn_001720cc(cpu);
    }
L_001757e4:;
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
L_001757e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_001757ec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001757f0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001757f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3e0u);
    }
L_001757f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001757fc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3e4u);
    }
L_00175800:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00175804:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3e8u);
    }
L_00175808:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017580c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3f0u);
    }
L_00175810:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00175814:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3f4u);
    }
L_00175818:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0017581c:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[3]);
    }
L_00175820:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00175824:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[12]);
    }
L_00175828:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[14]);
    }
L_0017582c:;
    {
        goto L_00175594;
    }
L_00175830:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[10] = v;
    }
L_00175834:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00175838:;
    {
        cpu->r[11] = (~0x00000000u);
    }
L_0017583c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00800000u, 1, 1);
    }
L_00175840:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = 0x00000006u;
        }
    }
L_00175844:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = 0x00000004u;
        }
    }
L_00175848:;
    {
        goto L_00175660;
    }
L_0017584c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_00175850:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x484u);
    }
L_00175854:;
    {
        uint32_t v = cpu->r[10] & 0x00004000u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_00175858:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = (~0x00000000u);
        }
    }
L_0017585c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00175860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175718;
        }
    }
L_00175864:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_00175868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017586c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000002u;
        }
    }
L_00175870:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175718;
        }
    }
L_00175874:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175878:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0017587c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00175880:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00175884:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00175888:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017588c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00175890:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017589c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001758a0:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_001758a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001758a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_001758ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000003u;
        }
    }
L_001758b0:;
    {
        goto L_00175718;
    }
L_001758b4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001758b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_001758bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
        }
    }
L_001758c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175850;
        }
    }
L_001758c4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001758c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000420u, 0, 0);
    }
L_001758cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001758d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001758d4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001758d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_001758dc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_001758e0:;
    {
        cpu->r[14] = 0x001758e4u; fn_001720cc(cpu);
    }
L_001758e4:;
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
L_001758e8:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_001758ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001758f0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_001758f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3e0u);
    }
L_001758f8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3e4u);
    }
L_001758fc:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175900:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3e8u);
    }
L_00175904:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3ecu);
    }
L_00175908:;
    {
        goto L_0017580c;
    }
L_0017590c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_00175910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000420u, 0, 0);
    }
L_00175914:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00175918:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017591c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00175920:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000003ecu, 0, 0);
    }
L_00175924:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00175928:;
    {
        cpu->r[14] = 0x0017592cu; fn_001720cc(cpu);
    }
L_0017592c:;
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
L_00175930:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00175934:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175938:;
    {
        goto L_00175560;
    }
L_0017593c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x430u);
    }
L_00175940:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00175944:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x428u);
    }
L_00175948:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017594c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x42cu);
    }
L_00175950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00175954:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00175958:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0017595c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_00175960:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00175964:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_00175968:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0017596c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00175970:;
    {
        cpu->r[14] = 0x00175974u; fn_001720cc(cpu);
    }
L_00175974:;
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
L_00175978:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017597c:;
    {
        cpu->r[10] = 0x00000006u;
    }
L_00175980:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175984:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3ecu);
    }
L_00175988:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0017598c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3f0u);
    }
L_00175990:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3f4u);
    }
L_00175994:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00175998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003e0u, 0, 0);
    }
L_0017599c:;
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
L_001759a0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_001759a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001759a8:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[14]);
    }
L_001759ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001759b0:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[3]);
    }
L_001759b4:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[12]);
    }
L_001759b8:;
    {
        goto L_00175674;
    }
L_001759bc:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_001759c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001759c4:;
    {
        cpu->r[14] = 0x001759ccu;
    }
L_001759c8:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001759ccu)) return;
    }
L_001759cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001759d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001759d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_001759d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001759dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_001759e0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[3]; cpu->r[14] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_001759e4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001759e8:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[10], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_001759ec:;
    {
        goto L_001754d8;
    }
L_001759f0:;
    {
        cpu->r[14] = 0x001759f4u; fn_000bb368(cpu);
    }
L_001759f4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001759f8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_001759fc:;
    {
        cpu->r[14] = 0x00008c64u;
    }
L_00175a00:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_00175a04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00175a08:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_00175a0c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00175a10:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00175a14:;
    {
        cpu->r[9] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00175a18:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_00175a1c:;
    {
        cpu->r[12] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_00175a20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00175a24:;
    {
        wr32(cpu->r[9] + cpu->r[14], cpu->r[12]);
    }
L_00175a28:;
    {
        cpu->r[14] = 0x00175a2cu; fn_000fd224(cpu);
    }
L_00175a2c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00175a30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175a44;
        }
    }
L_00175a34:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00175a38:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00175a3c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00175a40:;
    {
        cpu->r[14] = 0x00175a44u; fn_000fd218(cpu);
    }
L_00175a44:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175a48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00175a4c:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00175a50:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00175a54:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00175a58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00175a5c:;
    {
        cpu->r[14] = 0x00175a60u; fn_000fd224(cpu);
    }
L_00175a60:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00175a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175a78;
        }
    }
L_00175a68:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00175a6c:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00175a70:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00175a74:;
    {
        cpu->r[14] = 0x00175a78u; fn_000fd218(cpu);
    }
L_00175a78:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175a7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00175a80:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00175a84:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00175a88:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00175a8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00175a90:;
    {
        cpu->r[14] = 0x00175a94u; fn_000fd224(cpu);
    }
L_00175a94:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00175a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175aac;
        }
    }
L_00175a9c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00175aa0:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00175aa4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00175aa8:;
    {
        cpu->r[14] = 0x00175aacu; fn_000fd218(cpu);
    }
L_00175aac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175ab0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00175ab4:;
    {
        cpu->r[14] = 0x00175abcu;
    }
L_00175ab8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175abcu)) return;
    }
L_00175abc:;
    {
        cpu->r[14] = 0x00175ac0u; fn_00160dac(cpu);
    }
L_00175ac0:;
    {
        goto L_0017525c;
    }
L_00175ac4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175ac8:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_00175acc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00175ad0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00175ad4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00175ad8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00175adc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00175ae0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175b78;
        }
    }
L_00175ae8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x1dcu);
    }
L_00175aec:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00175af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175b64;
        }
    }
L_00175af4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00175af8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00175afc:;
    {
        goto L_00175778;
    }
L_00175b00:;
    {
        cpu->r[14] = 0x00175b04u; fn_000928b8(cpu);
    }
L_00175b04:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175b08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175b0c:;
    {
        cpu->r[14] = 0x00175b14u;
    }
L_00175b10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175b14u)) return;
    }
L_00175b14:;
    {
        cpu->r[14] = 0x00175b18u; fn_0015edb0(cpu);
    }
L_00175b18:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00175b1c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00175b20:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00175b24:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00175b28:;
    {
        cpu->r[14] = 0x00175b2cu; fn_000c2320(cpu);
    }
L_00175b2c:;
    {
        goto L_0017534c;
    }
L_00175b30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175b34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175b38:;
    {
        cpu->r[14] = 0x00175b40u;
    }
L_00175b3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175b40u)) return;
    }
L_00175b40:;
    {
        cpu->r[1] = 0x00000013u;
    }
L_00175b44:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175b48:;
    {
        cpu->r[14] = 0x00175b4cu; fn_00161bec(cpu);
    }
L_00175b4c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175b50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175b54:;
    {
        cpu->r[14] = 0x00175b5cu;
    }
L_00175b58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175b5cu)) return;
    }
L_00175b5c:;
    {
        cpu->r[14] = 0x00175b60u; fn_00160698(cpu);
    }
L_00175b60:;
    {
        goto L_0017545c;
    }
L_00175b64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x498u);
    }
L_00175b68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175b6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00008c50u;
        }
    }
L_00175b70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00175b74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175bc4;
        }
    }
L_00175b78:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00175b7c:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_00175b80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00175b84:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_00175b88:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00175b8c:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00175b90:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00175b94:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_00175b98:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[10]);
    }
L_00175b9c:;
    {
        cpu->r[14] = 0x00175ba0u; fn_000ba68c(cpu);
    }
L_00175ba0:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_00175ba4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00175ba8:;
    {
        cpu->r[2] = 0x00004340u;
    }
L_00175bac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00175bb0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00175bb4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_00175bb8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00175bbc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00175bc0:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[12]);
    }
L_00175bc4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00175bc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00175bcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00175bd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00175bd4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x7cu);
    }
L_00175bd8:;
    {
        goto L_00175244;
    }
}

/* _ZN8CCarBase26SearchSafeSectionToRespawnEPK10RoadStructibPi @ 00175be4 (arm) */
void fn_00175be4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00175be4:;
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
L_00175be8:;
    {
        cpu->r[7] = rd32(0x00175bf0u + + 0x22cu);
    }
L_00175bec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00175bf0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00175bf4:;
    {
        cpu->r[7] = add_flags(cpu, 0x00175bfcu, cpu->r[7], 0, 0);
    }
L_00175bf8:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00175bfc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00175c00:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00175c04:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x30u);
    }
L_00175c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175de4;
        }
    }
L_00175c0c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00175c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175d5c;
        }
    }
L_00175c14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175c18:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00175c1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175c20:;
    {
        cpu->r[14] = 0x00175c24u; fn_00180634(cpu);
    }
L_00175c24:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00175c28:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_00175c2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175d78;
        }
    }
L_00175c30:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00175c34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00175c38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = (~0x00000000u);
        }
    }
L_00175c3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175d14;
        }
    }
L_00175c40:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_00175c44:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00175c48:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00175c4c:;
    {
        cpu->r[14] = 0x00175c50u; fn_00173d94(cpu);
    }
L_00175c50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175c54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00175c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175c6c;
        }
    }
L_00175c5c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000005u, 1, 1);
    }
L_00175c60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00175dcc;
        }
    }
L_00175c64:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_00175c68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[11];
        }
    }
L_00175c6c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00175c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175c74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175c78:;
    {
        cpu->r[14] = 0x00175c7cu; fn_001805dc(cpu);
    }
L_00175c7c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00175c80:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00175c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175c44;
        }
    }
L_00175c88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00175c8c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00175c90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175c94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175c98:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[10]);
    }
L_00175c9c:;
    {
        cpu->r[14] = 0x00175ca0u; fn_00180634(cpu);
    }
L_00175ca0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_00175ca4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175ca8:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_00175cac:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00175cb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175cb4:;
    {
        cpu->r[14] = 0x00175cb8u; fn_001805dc(cpu);
    }
L_00175cb8:;
    {
        cpu->r[3] = rd32(0x00175cc0u + + 0x160u);
    }
L_00175cbc:;
    {
        cpu->r[2] = 0x000081c4u;
    }
L_00175cc0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175cc4:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00175cc8:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00175ccc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[8]);
    }
L_00175cd0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_00175cd4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00175cd8:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00175cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175dd4;
        }
    }
L_00175ce0:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00175ce4:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_00175ce8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00175cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175d80;
        }
    }
L_00175cf0:;
    {
        cpu->r[2] = 0x000081c4u;
    }
L_00175cf4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00175cf8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175cfc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00175d00:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00175d04:;
    {
        cpu->r[14] = 0x00175d08u; fn_00172214(cpu);
    }
L_00175d08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00175d0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00175d10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00175d14u)) return;
    }
L_00175d14:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00175d18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00175d1c:;
    {
        cpu->r[14] = 0x00175d20u; fn_00173d94(cpu);
    }
L_00175d20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175d24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_00175d28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175d3c;
        }
    }
L_00175d2c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000005u, 1, 1);
    }
L_00175d30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00175dcc;
        }
    }
L_00175d34:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_00175d38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[11];
        }
    }
L_00175d3c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00175d40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175d44:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175d48:;
    {
        cpu->r[14] = 0x00175d4cu; fn_00180634(cpu);
    }
L_00175d4c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00175d50:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00175d54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175d14;
        }
    }
L_00175d58:;
    {
        goto L_00175c88;
    }
L_00175d5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175d60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00175d64:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00175d68:;
    {
        cpu->r[14] = 0x00175d6cu; fn_001805dc(cpu);
    }
L_00175d6c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00175d70:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_00175d74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175c30;
        }
    }
L_00175d78:;
    {
        cpu->r[10] = (~0x00000000u);
    }
L_00175d7c:;
    {
        goto L_00175c88;
    }
L_00175d80:;
    {
        cpu->r[2] = 0x000081d0u;
    }
L_00175d84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00175d88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175d8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00175d90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00175d94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00175d98:;
    {
        cpu->r[14] = 0x00175d9cu; fn_000bb394(cpu);
    }
L_00175d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175da0:;
    {
        cpu->r[2] = 0x000081d4u;
    }
L_00175da4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00175da8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00175dac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00175db0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00175db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175cf0;
        }
    }
L_00175db8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00175dbc:;
    {
        cpu->r[14] = 0x00175dc0u; fn_000e0890(cpu);
    }
L_00175dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00175dc8:;
    {
        goto L_00175cf0;
    }
L_00175dcc:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00175dd0:;
    {
        goto L_00175c8c;
    }
L_00175dd4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00175dd8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00175ddc:;
    {
        cpu->r[14] = 0x00175de0u; fn_00175128(cpu);
    }
L_00175de0:;
    {
        goto L_00175d00;
    }
L_00175de4:;
    {
        cpu->r[1] = rd32(0x00175decu + + 0x38u);
    }
L_00175de8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00175dec:;
    {
        cpu->r[12] = rd32(0x00175df4u + + 0x34u);
    }
L_00175df0:;
    {
        cpu->r[14] = 0x00000f27u;
    }
L_00175df4:;
    {
        cpu->r[2] = rd32(0x00175dfcu + + 0x30u);
    }
L_00175df8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00175e00u, cpu->r[1], 0, 0);
    }
L_00175dfc:;
    {
        cpu->r[3] = rd32(0x00175e04u + + 0x2cu);
    }
L_00175e00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00175e08u, cpu->r[12], 0, 0);
    }
L_00175e04:;
    {
        cpu->r[2] = add_flags(cpu, 0x00175e0cu, cpu->r[2], 0, 0);
    }
L_00175e08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_00175e0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00175e14u, cpu->r[3], 0, 0);
    }
L_00175e10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00175e14:;
    {
        cpu->r[14] = 0x00175e18u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00175e18:;
    {
        goto L_00175c0c;
    }
}

/* _ZN8CCarBase28GetImpactForceBetweenVectorsE8Vector2dS0_ @ 00175e34 (arm) */
void fn_00175e34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00175e34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00175e38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00175e3c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00175e40:;
    {
        vfp_vmul(cpu, 16, 15, 15);
    }
L_00175e44:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00175e48:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00175e4c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00175e50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00175e54:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_00175e58:;
    {
        cpu->r[14] = 0x00175e5cu; fn_00156034(cpu);
    }
L_00175e5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00175e60:;
    {
        cpu->r[14] = 0x00175e64u; fn_00156034(cpu);
    }
L_00175e64:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00175e68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00175e6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_00175e70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4]);
    }
L_00175e74:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00175e78:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00175e7c:;
    {
        vfp_vsqrt(cpu, 16, 16);
    }
L_00175e80:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00175e84:;
    {
        cpu->r[14] = 0x00175e88u; imp_acosf(cpu); /* acosf */
    }
L_00175e88:;
    {
        cpu->r[14] = 0x00175e8cu; imp_sinf(cpu); /* sinf */
    }
L_00175e8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00175e90:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_00175e94:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00175e98:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00175e9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00175ea0u)) return;
    }
}

/* _ZN8CCarBase14DoCrashEffectsEPS_ @ 00175ea0 (arm) */
void fn_00175ea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00175ea0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48cu);
    }
L_00175ea4:;
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
L_00175ea8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00175eac:;
    {
        cpu->r[6] = rd32(0x00175eb4u + + 0x810u);
    }
L_00175eb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_00175eb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00175eb8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00175ebc:;
    {
        cpu->r[6] = add_flags(cpu, 0x00175ec4u, cpu->r[6], 0, 0);
    }
L_00175ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176058;
        }
    }
L_00175ec4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48cu);
    }
L_00175ec8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00175ecc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176078;
        }
    }
L_00175ed0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x6au);
    }
L_00175ed4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175ed8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175ee8;
        }
    }
L_00175edc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x6au);
    }
L_00175ee0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ef0;
        }
    }
L_00175ee8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_00175eec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00175ef0u)) return;
    }
L_00175ef0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00175ef4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00175ef8:;
    {
        cpu->r[14] = 0x00175f00u;
    }
L_00175efc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175f00u)) return;
    }
L_00175f00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175f28;
        }
    }
L_00175f08:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00175f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00175f10:;
    {
        cpu->r[14] = 0x00175f18u;
    }
L_00175f14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175f18u)) return;
    }
L_00175f18:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00175f1c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00175f20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175f24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175ee8;
        }
    }
L_00175f28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175f2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175f30:;
    {
        cpu->r[14] = 0x00175f38u;
    }
L_00175f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175f38u)) return;
    }
L_00175f38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00175f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175f60;
        }
    }
L_00175f40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175f44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00175f48:;
    {
        cpu->r[14] = 0x00175f50u;
    }
L_00175f4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175f50u)) return;
    }
L_00175f50:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00175f54:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00175f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00175f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00175ee8;
        }
    }
L_00175f60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00175f64:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_00175f68:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00175f6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00175f70:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00175f74:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00175f78:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00175f7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00175f80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00175f84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_00175f88:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00175f8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00175f90:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00175f94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00175f98:;
    {
        cpu->r[14] = 0x00175f9cu; fn_00185e10(cpu);
    }
L_00175f9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00175fa0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00175fa4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00175fa8:;
    {
        cpu->r[14] = 0x00175fb0u;
    }
L_00175fac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175fb0u)) return;
    }
L_00175fb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00175fb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00175fb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00175fbc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_00175fc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00175fc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00175fc8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00175fcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00175fd0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00175fd4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00175fd8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00175fdc:;
    {
        uint32_t v = cpu->r[7] * cpu->r[12] + cpu->r[2]; cpu->r[7] = v;
    }
L_00175fe0:;
    {
        cpu->r[14] = 0x00175fe8u;
    }
L_00175fe4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00175fe8u)) return;
    }
L_00175fe8:;
    {
        cpu->r[3] = 0x0000b3d7u;
    }
L_00175fec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x00ddu << 16);
    }
L_00175ff0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_00175ff4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00175ff8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00175ffc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00176000:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00176004:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00176008:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017600c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176098;
        }
    }
L_00176010:;
    {
        uint32_t v = cpu->r[8] * cpu->r[14]; cpu->r[14] = v;
    }
L_00176014:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[14]; cpu->r[0] = v;
    }
L_00176018:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_0017601c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00176020:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00176024:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176098;
        }
    }
L_00176028:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017602c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00176030:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_00176034:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00176038:;
    {
        uint32_t v = cpu->r[2] & cpu->r[10]; cpu->r[0] = v;
    }
L_0017603c:;
    {
        uint32_t v = cpu->r[3] & cpu->r[10]; cpu->r[1] = v;
    }
L_00176040:;
    {
        uint32_t v = cpu->r[0] ^ cpu->r[10]; cpu->r[0] = v;
    }
L_00176044:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[10]; cpu->r[1] = v;
    }
L_00176048:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0017604c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00176050:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00176054:;
    {
        goto L_001760e8;
    }
L_00176058:;
    {
        cpu->r[3] = rd32(0x00176060u + + 0x668u);
    }
L_0017605c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_00176060:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00176064:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00176068:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0017606c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00176070:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00175ee8;
        }
    }
L_00176074:;
    {
        goto L_00175ec4;
    }
L_00176078:;
    {
        cpu->r[3] = rd32(0x00176080u + + 0x648u);
    }
L_0017607c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4a0u);
    }
L_00176080:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00176084:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00176088:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0017608c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00176090:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00175ee8;
        }
    }
L_00176094:;
    {
        goto L_00175ed0;
    }
L_00176098:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_0017609c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_001760a0:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[0] = v;
    }
L_001760a4:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_001760a8:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[1] = v;
    }
L_001760ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001760b0:;
    {
        uint32_t v = cpu->r[1] ^ 0x00000001u; cpu->r[1] = v;
    }
L_001760b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001760b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_001760bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_001760c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_001760c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001760c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_001760cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001760d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001760d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001760d8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001760dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001760e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001760e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176048;
        }
    }
L_001760e8:;
    {
        { uint32_t v = cpu->r[2] & 0x0000b000u; set_nz(cpu, v); }
    }
L_001760ec:;
    {
        uint32_t v = cpu->r[3] & 0x0000b000u; cpu->r[3] = v;
    }
L_001760f0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[8] | 0x00000002u; cpu->r[8] = v;
        }
    }
L_001760f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001760f8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[7] | 0x00000002u; cpu->r[7] = v;
        }
    }
L_001760fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00176100:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000100u;
        }
    }
L_00176104:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176108:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017610c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176110:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000200u; cpu->r[10] = v;
        }
    }
L_00176114:;
    {
        cpu->r[14] = 0x0017611cu;
    }
L_00176118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017611cu)) return;
    }
L_0017611c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001762c8;
        }
    }
L_00176124:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017612c:;
    {
        cpu->r[14] = 0x00176134u;
    }
L_00176130:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176134u)) return;
    }
L_00176134:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00176138:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0017613c:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00176140:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_00176144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001762c8;
        }
    }
L_00176148:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017614c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176150:;
    {
        cpu->r[14] = 0x00176158u;
    }
L_00176154:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176158u)) return;
    }
L_00176158:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017615c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001762c0;
        }
    }
L_00176160:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176164:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176168:;
    {
        cpu->r[14] = 0x00176170u;
    }
L_0017616c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176170u)) return;
    }
L_00176170:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00176174:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00176178:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0017617c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00176180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001762c0;
        }
    }
L_00176184:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[8], 2, 4u, &shc); cpu->r[2] = v;
    }
L_00176188:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017618c:;
    {
        uint32_t v = cpu->r[2] | cpu->r[10]; cpu->r[2] = v;
    }
L_00176190:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176194:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176198:;
    {
        cpu->r[14] = 0x001761a0u;
    }
L_0017619c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001761a0u)) return;
    }
L_001761a0:;
    {
        uint32_t v = cpu->r[8] | shifter(cpu->r[7], 2, 4u, &shc); cpu->r[2] = v;
    }
L_001761a4:;
    {
        uint32_t v = cpu->r[2] | cpu->r[10]; cpu->r[2] = v;
    }
L_001761a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001761ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001761b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001761b4:;
    {
        cpu->r[14] = 0x001761bcu;
    }
L_001761b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001761bcu)) return;
    }
L_001761bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x428u);
    }
L_001761c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x428u);
    }
L_001761c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x430u);
    }
L_001761c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x430u);
    }
L_001761cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001761d0:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_001761d4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_001761d8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001761dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001761e0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001761e4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001761e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001761ec:;
    {
        cpu->r[3] = 0x0000afc7u;
    }
L_001761f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001761f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001761f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001761fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_00176200:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001763d0;
        }
    }
L_00176204:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00176208:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017620c:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_00176210:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_00176214:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176348;
        }
    }
L_00176218:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0017621c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00176220:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00176224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001762d0;
        }
    }
L_00176228:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0017622c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017629c;
        }
    }
L_00176230:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00176234:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001762b0;
        }
    }
L_00176238:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017623c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176248;
        }
    }
L_00176240:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00176244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ee8;
        }
    }
L_00176248:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_0017624c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00176250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176408;
        }
    }
L_00176254:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00176258:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017625c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176408;
        }
    }
L_00176260:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000096u, 1, 1);
    }
L_00176264:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00175ee8;
        }
    }
L_00176268:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0017626c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176270:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176274:;
    {
        cpu->r[14] = 0x0017627cu;
    }
L_00176278:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017627cu)) return;
    }
L_0017627c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176280:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00176284:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00176288:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017628c:;
    {
        cpu->r[14] = 0x00176294u;
    }
L_00176290:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176294u)) return;
    }
L_00176294:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00176298:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017654c;
        }
    }
L_0017629c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001762a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001762a4:;
    {
        cpu->r[14] = 0x001762a8u; fn_00175128(cpu);
    }
L_001762a8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001762ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ee8;
        }
    }
L_001762b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001762b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001762b8:;
    {
        cpu->r[14] = 0x001762bcu; fn_00175128(cpu);
    }
L_001762bc:;
    {
        goto L_00175ee8;
    }
L_001762c0:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001762c4:;
    {
        goto L_00176184;
    }
L_001762c8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001762cc:;
    {
        goto L_00176148;
    }
L_001762d0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001762d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001762d8:;
    {
        cpu->r[14] = 0x001762e0u;
    }
L_001762dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001762e0u)) return;
    }
L_001762e0:;
    {
        cpu->r[14] = 0x001762e4u; fn_0015ec54(cpu);
    }
L_001762e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001762e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176228;
        }
    }
L_001762ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001762f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001762f4:;
    {
        cpu->r[14] = 0x001762fcu;
    }
L_001762f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001762fcu)) return;
    }
L_001762fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00176300:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00176304:;
    {
        cpu->r[14] = 0x0017630cu;
    }
L_00176308:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017630cu)) return;
    }
L_0017630c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176310:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_00176314:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176228;
        }
    }
L_00176318:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_0017631c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00176320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176228;
        }
    }
L_00176324:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176328:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017632c:;
    {
        cpu->r[14] = 0x00176334u;
    }
L_00176330:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176334u)) return;
    }
L_00176334:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001765a0;
        }
    }
L_0017633c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00176340:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00176344:;
    {
        goto L_0017629c;
    }
L_00176348:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017634c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176350:;
    {
        cpu->r[14] = 0x00176358u;
    }
L_00176354:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176358u)) return;
    }
L_00176358:;
    {
        cpu->r[14] = 0x0017635cu; fn_0015ec54(cpu);
    }
L_0017635c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00176360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176218;
        }
    }
L_00176364:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176368:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017636c:;
    {
        cpu->r[14] = 0x00176374u;
    }
L_00176370:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176374u)) return;
    }
L_00176374:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00176378:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0017637c:;
    {
        cpu->r[14] = 0x00176384u;
    }
L_00176380:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176384u)) return;
    }
L_00176384:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176388:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_0017638c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176220;
        }
    }
L_00176390:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00176394:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00176398:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001763a8;
        }
    }
L_0017639c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001763a0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001763a4:;
    {
        goto L_00176220;
    }
L_001763a8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001763ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001763b0:;
    {
        cpu->r[14] = 0x001763b8u;
    }
L_001763b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001763b8u)) return;
    }
L_001763b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001763bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176630;
        }
    }
L_001763c0:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001763c4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001763c8:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[7]);
    }
L_001763cc:;
    {
        goto L_00176220;
    }
L_001763d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001763d4:;
    {
        cpu->r[14] = 0x001763d8u; fn_001857e0(cpu);
    }
L_001763d8:;
    {
        cpu->r[2] = rd32(0x001763e0u + + 0x2e8u);
    }
L_001763dc:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_001763e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_001763e4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001763e8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001763ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_001763f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001763f4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_001763f8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001763fc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00176400:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_00176404:;
    {
        goto L_00176204;
    }
L_00176408:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017640c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176410:;
    {
        cpu->r[14] = 0x00176418u;
    }
L_00176414:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176418u)) return;
    }
L_00176418:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017641c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017646c;
        }
    }
L_00176420:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176428:;
    {
        cpu->r[14] = 0x00176430u;
    }
L_0017642c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176430u)) return;
    }
L_00176430:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017646c;
        }
    }
L_00176438:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017643c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176440:;
    {
        cpu->r[14] = 0x00176448u;
    }
L_00176444:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176448u)) return;
    }
L_00176448:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0017644c:;
    {
        cpu->r[14] = 0x00176454u;
    }
L_00176450:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176454u)) return;
    }
L_00176454:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_00176458:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017645c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176594;
        }
    }
L_00176460:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000064u, 1, 1);
    }
L_00176464:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00175ee8;
        }
    }
L_00176468:;
    {
        goto L_00176268;
    }
L_0017646c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176474:;
    {
        cpu->r[14] = 0x0017647cu;
    }
L_00176478:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017647cu)) return;
    }
L_0017647c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ee8;
        }
    }
L_00176484:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176488:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017648c:;
    {
        cpu->r[14] = 0x00176494u;
    }
L_00176490:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176494u)) return;
    }
L_00176494:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176498:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ee8;
        }
    }
L_0017649c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_001764a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001764a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176460;
        }
    }
L_001764a8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001764ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001764b0:;
    {
        cpu->r[14] = 0x001764b8u;
    }
L_001764b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001764b8u)) return;
    }
L_001764b8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001764bc:;
    {
        cpu->r[14] = 0x001764c4u;
    }
L_001764c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001764c4u)) return;
    }
L_001764c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000050u, 1, 1);
    }
L_001764c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00175ee8;
        }
    }
L_001764cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001764d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001764d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001764d8:;
    {
        cpu->r[14] = 0x001764e0u;
    }
L_001764dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001764e0u)) return;
    }
L_001764e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001764e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001764e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001764ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001764f0:;
    {
        cpu->r[14] = 0x001764f8u;
    }
L_001764f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001764f8u)) return;
    }
L_001764f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001764fc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00176500:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017629c;
        }
    }
L_00176504:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00176508:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017650c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176510:;
    {
        cpu->r[14] = 0x00176518u;
    }
L_00176514:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176518u)) return;
    }
L_00176518:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017651c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00176520:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00176524:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176528:;
    {
        cpu->r[14] = 0x00176530u;
    }
L_0017652c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176530u)) return;
    }
L_00176530:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00176534:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001762b0;
        }
    }
L_00176538:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0017653c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001762b0;
        }
    }
L_00176540:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00176544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00175ee8;
        }
    }
L_00176548:;
    {
        goto L_0017629c;
    }
L_0017654c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00176550:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176558:;
    {
        cpu->r[14] = 0x00176560u;
    }
L_0017655c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176560u)) return;
    }
L_00176560:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00176564:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00176568:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017656c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00176570:;
    {
        cpu->r[14] = 0x00176578u;
    }
L_00176574:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176578u)) return;
    }
L_00176578:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0017657c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001762b0;
        }
    }
L_00176580:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00176584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017629c;
        }
    }
L_00176588:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0017658c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001762b0;
        }
    }
L_00176590:;
    {
        goto L_00175ee8;
    }
L_00176594:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017659c:;
    {
        goto L_001764b0;
    }
L_001765a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_001765a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001765a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017633c;
        }
    }
L_001765ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x430u);
    }
L_001765b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x184u);
    }
L_001765b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x428u);
    }
L_001765b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001765bc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_001765c0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_001765c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x17cu);
    }
L_001765c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001765cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001765d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001765d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001765d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001765dc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001765e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001765e4:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001765e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001765ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001765f0:;
    {
        cpu->r[14] = 0x001765f4u; fn_00175e34(cpu);
    }
L_001765f4:;
    {
        cpu->r[2] = rd32(0x001765fcu + + 0xccu);
    }
L_001765f8:;
    {
        cpu->r[3] = 0x00008d7cu;
    }
L_001765fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00176600:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00176604:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00176608:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017660c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00176610:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00176614:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00176618:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0017661c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00176620:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00176624:;
    {
        vfp_sync_flags(cpu);
    }
L_00176628:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017629c;
        }
    }
L_0017662c:;
    {
        goto L_00176228;
    }
L_00176630:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_00176634:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00176638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001763c0;
        }
    }
L_0017663c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_00176640:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x184u);
    }
L_00176644:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00176648:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x428u);
    }
L_0017664c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176650:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00176654:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x17cu);
    }
L_00176658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0017665c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00176660:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176664:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00176668:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017666c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00176670:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176674:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00176678:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0017667c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00176680:;
    {
        cpu->r[14] = 0x00176684u; fn_00175e34(cpu);
    }
L_00176684:;
    {
        cpu->r[2] = rd32(0x0017668cu + + 0x3cu);
    }
L_00176688:;
    {
        cpu->r[3] = 0x00008d7cu;
    }
L_0017668c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00176690:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00176694:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00176698:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0017669c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001766a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001766a4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_001766a8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001766ac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001766b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001766b4:;
    {
        vfp_sync_flags(cpu);
    }
L_001766b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001766bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001766c0:;
    {
        goto L_001763a0;
    }
}

/* _ZN8CCarBase17ComputeRoadFactorEv @ 001766cc (arm) */
void fn_001766cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001766cc:;
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
L_001766d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001766d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001766d8:;
    {
        cpu->r[14] = 0x001766dcu; fn_00173e08(cpu);
    }
L_001766dc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001766e0:;
    {
        cpu->r[5] = rd32(0x001766e8u + + 0x200u);
    }
L_001766e4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001766ecu, cpu->r[5], 0, 0);
    }
L_001766e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001766ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001766f0:;
    {
        cpu->r[14] = 0x001766f4u; fn_00173e3c(cpu);
    }
L_001766f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001766f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001766fc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00176700:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00176704:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x30u);
    }
L_00176708:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x38u);
    }
L_0017670c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_00176710:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00176714:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00176718:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0017671c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_00176720:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_00176724:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_00176728:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0017672c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00176730:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00176734:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x5cu);
    }
L_00176738:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x54u);
    }
L_0017673c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00176740:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00176744:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 0);
    }
L_00176748:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0017674c:;
    {
        cpu->r[14] = 0x00176750u; fn_00184e04(cpu);
    }
L_00176750:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00176754:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00176758:;
    {
        cpu->r[14] = 0x0017675cu; fn_00184e04(cpu);
    }
L_0017675c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00176760:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00176764:;
    {
        cpu->r[14] = 0x00176768u; fn_00184e04(cpu);
    }
L_00176768:;
    {
        cpu->r[3] = rd32(0x00176770u + + 0x17cu);
    }
L_0017676c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00176770:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00176774:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00176778:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0017677c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00176780:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00176784:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00176788:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017678c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00176790:;
    {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
    }
L_00176794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00176798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0017679c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001767a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001767a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001767a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001767ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001767b0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001767b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00176868;
        }
    }
L_001767b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001767bc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001767c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
        }
    }
L_001767c4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_001767c8:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[2]);
    }
L_001767cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001768b4;
        }
    }
L_001767d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001767d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001767d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1c4u);
    }
L_001767dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001767e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001767f4;
        }
    }
L_001767e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001767e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001768cc;
        }
    }
L_001767ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001767f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176898;
        }
    }
L_001767f4:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x38u);
    }
L_001767f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x38u);
    }
L_001767fc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x30u);
    }
L_00176800:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x30u);
    }
L_00176804:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00176808:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017680c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_00176810:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_00176814:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00176818:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[2]; cpu->r[1] = v;
    }
L_0017681c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x000000ffu, 0, 0);
    }
L_00176820:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00176824:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00176828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000000ffu, 0, 0);
    }
L_0017682c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00176830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00176834:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 8u, &shc); cpu->r[0] = v;
    }
L_00176838:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_0017683c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00176840:;
    {
        cpu->r[14] = 0x00176844u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00176844:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176848:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017684c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017685c;
        }
    }
L_00176850:;
    {
        cpu->r[3] = 0x00000fffu;
    }
L_00176854:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00176858:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0017685c:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[0]);
    }
L_00176860:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00176864:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00176868u)) return;
    }
L_00176868:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017686c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00176870:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
        }
    }
L_00176874:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00176878:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[2]);
    }
L_0017687c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001767d0;
        }
    }
L_00176880:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00176884:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00176888:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[3]);
        }
    }
L_0017688c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00176890:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00176894:;
    {
        goto L_001767d8;
    }
L_00176898:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x44u);
    }
L_0017689c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44u);
    }
L_001768a0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3cu);
    }
L_001768a4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3cu);
    }
L_001768a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_001768ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001768b0:;
    {
        goto L_0017680c;
    }
L_001768b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001768b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001768bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[3]);
        }
    }
L_001768c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001768c4:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001768c8:;
    {
        goto L_001767d8;
    }
L_001768cc:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x2cu);
    }
L_001768d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001768d4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x24u);
    }
L_001768d8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x24u);
    }
L_001768dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_001768e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_001768e4:;
    {
        goto L_0017680c;
    }
}

/* _ZN8CCarBase13UpdateGroundYEPK10RoadStruct @ 001768f0 (arm) */
void fn_001768f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001768f0:;
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
L_001768f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001768f8:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_001768fc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x430u);
    }
L_00176900:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00176904:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x3dcu);
    }
L_00176908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000001b0u, 0, 0);
    }
L_0017690c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x42cu);
    }
L_00176910:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00176914:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x428u);
    }
L_00176918:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0017691c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_00176920:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_00176924:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_00176928:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0017692c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00176930:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00176934:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00176938:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0017693c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00176940:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00176944:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00176948:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_0017694c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_00176950:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_00176954:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00176958:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0017695c:;
    {
        cpu->r[14] = 0x00176960u; fn_0017bf58(cpu);
    }
L_00176960:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00176964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176968:;
    {
        cpu->r[14] = 0x0017696cu; fn_001745cc(cpu);
    }
L_0017696c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176970:;
    {
        cpu->r[14] = 0x00176974u; fn_00173e08(cpu);
    }
L_00176974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176978:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0017697c:;
    {
        cpu->r[14] = 0x00176980u; fn_00173e3c(cpu);
    }
L_00176980:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00176984:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00176988:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0017698c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x528u);
    }
L_00176990:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00176994:;
    {
        cpu->r[14] = 0x00176998u; fn_00180c78(cpu);
    }
L_00176998:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x528u);
    }
L_0017699c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001769a0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001769a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001769a8:;
    {
        cpu->r[14] = 0x001769acu; fn_00180b68(cpu);
    }
L_001769ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x49cu);
    }
L_001769b0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001769b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001769b8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001769bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001769cc;
        }
    }
L_001769c0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x38u);
    }
L_001769c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001769c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176ad8;
        }
    }
L_001769cc:;
    {
        cpu->r[12] = rd8(cpu->r[8] + + 0x524u);
    }
L_001769d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4e0u);
    }
L_001769d4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4e8u);
    }
L_001769d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001769dc:;
    {
        cpu->r[12] = rd8(cpu->r[8] + + 0x538u);
    }
L_001769e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001769e4:;
    {
        cpu->r[14] = 0x001769e8u; fn_0017a9d8(cpu);
    }
L_001769e8:;
    {
        wr32(cpu->r[6] + + 0x4e4u, cpu->r[0]);
    }
L_001769ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001769f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001769f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001769f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001769fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00176a00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_00176a04:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00176a08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
    }
L_00176a0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00176a10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176a14:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4e4u);
    }
L_00176a18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e4u);
    }
L_00176a1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00176a20:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_00176a24:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
        }
    }
L_00176a28:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
        }
    }
L_00176a2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00176a30:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[2] = v;
        }
    }
L_00176a34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[5];
        }
    }
L_00176a38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00176a3c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
        }
    }
L_00176a40:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_00176a44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017698c;
        }
    }
L_00176a48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x460u);
    }
L_00176a4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00176a50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00176a54:;
    {
        wr32(cpu->r[4] + + 0x514u, cpu->r[11]);
    }
L_00176a58:;
    {
        wr32(cpu->r[4] + + 0x510u, cpu->r[3]);
    }
L_00176a5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176a6c;
        }
    }
L_00176a60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00176a64:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00176a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176af0;
        }
    }
L_00176a6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00176a70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00176a74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00176a78:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_00176a7c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_00176a80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_00176a84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00176a88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00176a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176a90:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x4e4u);
    }
L_00176a94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e4u);
    }
L_00176a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00176a9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00176aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_00176aa4:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[3]);
    }
L_00176aa8:;
    {
        cpu->r[14] = 0x00176aacu; fn_00171b64(cpu);
    }
L_00176aac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00176ab0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00176ab4:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00176ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176ac4;
        }
    }
L_00176abc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00176ac0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00176acc;
        }
    }
L_00176ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_00176ac8:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[3]);
    }
L_00176acc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00176ad0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00176ad4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00176ad8u)) return;
    }
L_00176ad8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00176adc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4e8u);
    }
L_00176ae0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4e0u);
    }
L_00176ae4:;
    {
        cpu->r[14] = 0x00176ae8u; fn_0017a588(cpu);
    }
L_00176ae8:;
    {
        wr32(cpu->r[6] + + 0x4e4u, cpu->r[0]);
    }
L_00176aec:;
    {
        goto L_001769ec;
    }
L_00176af0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_00176af4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00176af8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176a6c;
        }
    }
L_00176afc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x45cu);
    }
L_00176b00:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00176b04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176b48;
        }
    }
L_00176b08:;
    {
        cpu->r[14] = 0x00176b0cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00176b0c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00176b10:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00176b14:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176b18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176b1c:;
    {
        cpu->r[14] = 0x00176b24u;
    }
L_00176b20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176b24u)) return;
    }
L_00176b24:;
    {
        cpu->r[14] = 0x00176b28u; fn_0015d920(cpu);
    }
L_00176b28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176b30u + + 0x20u);
    }
L_00176b2c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00176b34u + + 0x20u);
    }
L_00176b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176b34:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00176b38:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00176b3c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00176b40:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00176b44:;
    {
        goto L_00176a70;
    }
L_00176b48:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00176b50u + + 0x8u);
    }
L_00176b4c:;
    {
        goto L_00176b14;
    }
}

/* _ZN8CCarBase11UpdateJumpYEPK10RoadStruct @ 00176b5c (arm) */
void fn_00176b5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00176b5c:;
    {
        cpu->r[3] = rd32(0x00176b64u + + 0x3acu);
    }
L_00176b60:;
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
L_00176b64:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00176b68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_00176b6c:;
    {
        cpu->r[2] = rd32(0x00176b74u + + 0x3a0u);
    }
L_00176b70:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00176b74:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00176b78:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00176b7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00176b80:;
    {
        cpu->r[2] = add_flags(cpu, 0x00176b88u, cpu->r[2], 0, 0);
    }
L_00176b84:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00176b88:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00176b8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00176b90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00176b94:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00176b98:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00176b9c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00176ba0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00176ba4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00176ba8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00176bac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00176bb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176bb4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00176bb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00176bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177028;
        }
    }
L_00176bc0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_00176bc4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x44u);
    }
L_00176bc8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4dcu);
    }
L_00176bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176bd4u + + 0x314u);
    }
L_00176bd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_00176bd4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00176bd8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_00176bdc:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00176be0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00176be4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00176be8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176bec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00176bf0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00176bf4:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00176bf8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00176bfc:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_00176c00:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_00176c04:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_00176c08:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_00176c0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176c14u + + 0x2d8u);
    }
L_00176c10:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_00176c14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176c1cu + + 0x2d4u);
    }
L_00176c18:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00176c1c:;
    {
        vfp_sync_flags(cpu);
    }
L_00176c20:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_00176c24:;
    {
        cpu->r[14] = 0x00176c28u; imp_sinf(cpu); /* sinf */
    }
L_00176c28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1a8u);
    }
L_00176c2c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_00176c30:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_00176c34:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00176c38:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00176c3c:;
    {
        vfp_vmul(cpu, 12, 15, 16);
    }
L_00176c40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176c48u + + 0x2acu);
    }
L_00176c44:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00176c48:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00176c4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176c50:;
    {
        vfp_vmul(cpu, 12, 16, 17);
    }
L_00176c54:;
    {
        vfp_vmla(cpu, 15, 12, 11);
    }
L_00176c58:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176c5c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00176c60:;
    {
        vfp_vmla(cpu, 16, 14, 15);
    }
L_00176c64:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,16);
    }
L_00176c68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00176c6c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00176c70:;
    {
        cpu->r[14] = 0x00176c74u; fn_001745cc(cpu);
    }
L_00176c74:;
    {
        cpu->r[3] = 0x0000d8f1u;
    }
L_00176c78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00176c7c:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[3]);
    }
L_00176c80:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x528u);
    }
L_00176c84:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00176c88:;
    {
        cpu->r[14] = 0x00176c8cu; fn_00180c78(cpu);
    }
L_00176c8c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x528u);
    }
L_00176c90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00176c94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00176c98:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00176c9c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00176ca0:;
    {
        cpu->r[14] = 0x00176ca4u; fn_00180b68(cpu);
    }
L_00176ca4:;
    {
        cpu->r[12] = rd8(cpu->r[7] + + 0x524u);
    }
L_00176ca8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4e8u);
    }
L_00176cac:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00176cb0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00176cb4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4e0u);
    }
L_00176cb8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00176cbc:;
    {
        cpu->r[12] = rd8(cpu->r[7] + + 0x538u);
    }
L_00176cc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00176cc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00176cc8:;
    {
        cpu->r[14] = 0x00176cccu; fn_0017a9d8(cpu);
    }
L_00176ccc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00176cd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00176cd4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00176cd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00176cdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[14], 0, 0);
    }
L_00176ce0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00176ce4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176ce8:;
    {
        wr32(cpu->r[6] + + 0x4e4u, cpu->r[0]);
    }
L_00176cec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00176cf0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4e4u);
    }
L_00176cf4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e4u);
    }
L_00176cf8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00176cfc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
        }
    }
L_00176d00:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_00176d04:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
        }
    }
L_00176d08:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00176d0c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
        }
    }
L_00176d10:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[11] = v;
        }
    }
L_00176d14:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00176d18:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_00176d1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176c80;
        }
    }
L_00176d20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00176d24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00176d28:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_00176d2c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00176d30:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x460u);
    }
L_00176d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_00176d38:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_00176d3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00176d40:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x45cu);
    }
L_00176d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176d48:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x4e4u);
    }
L_00176d4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4e4u);
    }
L_00176d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00176d54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00176d58:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00176d5c:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[3]);
    }
L_00176d60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176e9c;
        }
    }
L_00176d64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00176d68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176d6c:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[3]);
    }
L_00176d70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00176d74:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00176d78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00176d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00176d80:;
    {
        cpu->r[14] = 0x00176d88u;
    }
L_00176d84:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176d88u)) return;
    }
L_00176d88:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_00176d8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176d90:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00176d98u + + 0x160u);
    }
L_00176d94:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00176d98:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00176da0u + + 0x15cu);
    }
L_00176d9c:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00176da0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00176da8u + + 0x158u);
    }
L_00176da4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00176da8:;
    {
        vfp_sync_flags(cpu);
    }
L_00176dac:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
        }
    }
L_00176db0:;
    {
        if (cond_test(cpu, 13)) {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
        }
    }
L_00176db4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_00176db8:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00176dbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x480u);
    }
L_00176dc0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00176dc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176dc8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176dcc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00176dd0:;
    {
        vfp_sync_flags(cpu);
    }
L_00176dd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176e20;
        }
    }
L_00176dd8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00176ddc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00176de0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,16));
    }
L_00176de4:;
    {
        vfp_sync_flags(cpu);
    }
L_00176de8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00176f2c;
        }
    }
L_00176dec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4cu);
    }
L_00176df0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00176df4:;
    {
        vfp_sync_flags(cpu);
    }
L_00176df8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176e14;
        }
    }
L_00176dfc:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_00176e00:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_00176e04:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00176e08:;
    {
        vfp_vadd(cpu, 14, 14, 16);
    }
L_00176e0c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00176e10:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00176e14:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00176e18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176e1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176e20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_00176e24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x48u);
    }
L_00176e28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00176e2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176e30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00176e34:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00176e3cu + + 0xc8u);
        }
    }
L_00176e38:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00176e40u + + 0xc8u);
        }
    }
L_00176e3c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00176e40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176e44:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[12]);
    }
L_00176e48:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_00176e4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176e50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176e54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00176e58:;
    {
        cpu->r[14] = 0x00176e60u;
    }
L_00176e5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176e60u)) return;
    }
L_00176e60:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00176e64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00176e68:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00176e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176e90;
        }
    }
L_00176e70:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176e78:;
    {
        cpu->r[14] = 0x00176e80u;
    }
L_00176e7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176e80u)) return;
    }
L_00176e80:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_00176e84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00176e88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00176e8c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00176e90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00176e94:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00176e98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00176e9cu)) return;
    }
L_00176e9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176ea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176ea4:;
    {
        cpu->r[14] = 0x00176eacu;
    }
L_00176ea8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176eacu)) return;
    }
L_00176eac:;
    {
        cpu->r[14] = 0x00176eb0u; fn_0015d920(cpu);
    }
L_00176eb0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_00176eb4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[6];
    }
L_00176eb8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00176ebc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00176ec4u + + 0x48u);
    }
L_00176ec0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_00176ec4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00176ec8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00176ecc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00176ed4u + + 0x14u);
    }
L_00176ed0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00176ed4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_00176ed8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00176edc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00176ee0:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00176ee4:;
    {
        goto L_00176d64;
    }
L_00176f2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176f30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176f34:;
    {
        cpu->r[14] = 0x00176f3cu;
    }
L_00176f38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176f3cu)) return;
    }
L_00176f3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00176f40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00176f44:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00176f48:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00176f4c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00176f50:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00176f54:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_00176f58:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00176f5c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00176f60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00176f64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00176f68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00176f6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00176f70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00176f74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00176f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001770b8;
        }
    }
L_00176f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176f84:;
    {
        cpu->r[14] = 0x00176f8cu;
    }
L_00176f88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176f8cu)) return;
    }
L_00176f8c:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_00176f90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00176f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000013u, 1, 1);
    }
L_00176f98:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177078;
        }
    }
L_00176f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176fa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176fa4:;
    {
        cpu->r[14] = 0x00176facu;
    }
L_00176fa8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176facu)) return;
    }
L_00176fac:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_00176fb0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00176fb4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00176fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00176fbc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00176fc0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000008u; cpu->r[1] = v;
    }
L_00176fc4:;
    {
        wr32(cpu->r[2] + cpu->r[5], cpu->r[1]);
    }
L_00176fc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x480u);
    }
L_00176fcc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00176fd0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00176fd4:;
    {
        wr32(cpu->r[4] + + 0x33cu, cpu->r[2]);
    }
L_00176fd8:;
    {
        cpu->r[14] = 0x00176fe0u;
    }
L_00176fdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00176fe0u)) return;
    }
L_00176fe0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00176fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00176fecu + - 0xc8u);
    }
L_00176fe8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176fec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176ff0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176ff4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176ff8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00176ffc:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00177000:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177004:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00177008:;
    {
        uint32_t v = cpu->r[3] | 0x02000000u; cpu->r[3] = v;
    }
L_0017700c:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_00177010:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_00177014:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00177018:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017701c:;
    {
        wr32(cpu->r[4] + + 0x398u, cpu->r[3]);
    }
L_00177020:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177024:;
    {
        goto L_00176e20;
    }
L_00177028:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00177030u + - 0x108u);
    }
L_0017702c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_00177030:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00177034:;
    {
        vfp_vmul(cpu, 14, 11, 15);
    }
L_00177038:;
    {
        cpu->r[3] = rd32(0x00177040u + - 0x128u);
    }
L_0017703c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x44u);
    }
L_00177040:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00177044:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00177048:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0017704c:;
    {
        cpu->r[3] = rd32(0x00177054u + - 0x138u);
    }
L_00177050:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00177054:;
    {
        cpu->r[3] = rd32(0x0017705cu + - 0x13cu);
    }
L_00177058:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0017705c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00177060:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x30u);
    }
L_00177064:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_00177068:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,17);
    }
L_0017706c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00177070:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177074:;
    {
        goto L_00176bc8;
    }
L_00177078:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017707c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177080:;
    {
        cpu->r[14] = 0x00177088u;
    }
L_00177084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177088u)) return;
    }
L_00177088:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017708c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00177090:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00177094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00176f9c;
        }
    }
L_00177098:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017709c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001770a0:;
    {
        cpu->r[14] = 0x001770a8u;
    }
L_001770a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001770a8u)) return;
    }
L_001770a8:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_001770ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001770b0:;
    {
        cpu->r[14] = 0x001770b4u; fn_00161bec(cpu);
    }
L_001770b4:;
    {
        goto L_00176f9c;
    }
L_001770b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001770bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001770c0:;
    {
        cpu->r[14] = 0x001770c8u;
    }
L_001770c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001770c8u)) return;
    }
L_001770c8:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_001770cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001770d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001770d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00176f7c;
        }
    }
L_001770d8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001770dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001770e0:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_001770e4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001770e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001770ec:;
    {
        cpu->r[14] = 0x001770f0u; fn_000fd224(cpu);
    }
L_001770f0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001770f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00176f7c;
        }
    }
L_001770f8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001770fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00177100:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00177104:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00177108:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_0017710c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00177110:;
    {
        cpu->r[14] = 0x00177114u; fn_000fd248(cpu);
    }
L_00177114:;
    {
        goto L_00176f7c;
    }
}

/* _ZN8CCarBase23UpdateSectionAndGroundYEPK10RoadStructb @ 00177118 (arm) */
void fn_00177118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177118:;
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
L_0017711c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_00177120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000001b0u, 0, 0);
    }
L_00177124:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00177128:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0017712c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000003d4u, 0, 0);
    }
L_00177130:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00177134:;
    {
        cpu->r[14] = 0x00177138u; fn_0017bf58(cpu);
    }
L_00177138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017713c:;
    {
        cpu->r[5] = rd32(0x00177144u + + 0x6a0u);
    }
L_00177140:;
    {
        cpu->r[14] = 0x00177144u; fn_00173e08(cpu);
    }
L_00177144:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00177148:;
    {
        cpu->r[9] = rd32(0x00177150u + + 0x698u);
    }
L_0017714c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00177154u, cpu->r[5], 0, 0);
    }
L_00177150:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00177154:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177158:;
    {
        cpu->r[14] = 0x0017715cu; fn_00173e3c(cpu);
    }
L_0017715c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00177160:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00177164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177168:;
    {
        cpu->r[14] = 0x0017716cu; fn_0017e12c(cpu);
    }
L_0017716c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00177170:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00177174:;
    {
        cpu->r[14] = 0x00177178u; fn_00096b88(cpu);
    }
L_00177178:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017717c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017738c;
        }
    }
L_00177180:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00177184:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00177188:;
    {
        cpu->r[14] = 0x0017718cu; fn_00180c78(cpu);
    }
L_0017718c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00177190:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00177194:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00177198:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017719c:;
    {
        cpu->r[14] = 0x001771a0u; fn_00180b68(cpu);
    }
L_001771a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b4u);
    }
L_001771a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001771a8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001771ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001771b0:;
    {
        cpu->r[14] = 0x001771b4u; fn_00180b68(cpu);
    }
L_001771b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_001771b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001771bc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001771c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001771c4:;
    {
        cpu->r[14] = 0x001771c8u; fn_00180bf0(cpu);
    }
L_001771c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_001771cc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001771d0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001771d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001771d8:;
    {
        cpu->r[14] = 0x001771dcu; fn_00180bf0(cpu);
    }
L_001771dc:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x34u);
    }
L_001771e0:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x34u);
    }
L_001771e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001771e8:;
    {
        cpu->r[10] = rd32(cpu->r[10] + + 0x34u);
    }
L_001771ec:;
    {
        cpu->r[11] = rd32(cpu->r[11] + + 0x34u);
    }
L_001771f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001771f4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001771f8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_001771fc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[10]);
    }
L_00177200:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00177204:;
    {
        cpu->r[14] = 0x0017720cu;
    }
L_00177208:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017720cu)) return;
    }
L_0017720c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177240;
        }
    }
L_00177214:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177218:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017721c:;
    {
        cpu->r[14] = 0x00177224u;
    }
L_00177220:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177224u)) return;
    }
L_00177224:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00177228:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0017722c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_00177230:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
        }
    }
L_00177234:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_00177238:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
        }
    }
L_0017723c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
        }
    }
L_00177240:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00177244:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00177248:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0017724c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00177250:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00177254:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00177258:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0017725c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00177260:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00177264:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00177268:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0017726c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00177270:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00177274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001774e0;
        }
    }
L_00177278:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017727c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177280:;
    {
        cpu->r[14] = 0x00177288u;
    }
L_00177284:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177288u)) return;
    }
L_00177288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017728c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001772b0;
        }
    }
L_00177290:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177294:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177298:;
    {
        cpu->r[14] = 0x001772a0u;
    }
L_0017729c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001772a0u)) return;
    }
L_001772a0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001772a4:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001772a8:;
    {
        uint32_t v = cpu->r[11] & 0x00000008u; cpu->r[11] = v;
        set_nz(cpu, v);
    }
L_001772ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001773e4;
        }
    }
L_001772b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001772b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001772b8:;
    {
        wr8(cpu->r[4] + + 0x68u, cpu->r[2]);
    }
L_001772bc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001772c0:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_001772c4:;
    {
        cpu->r[2] = 0x000081c0u;
    }
L_001772c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001772cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001772d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001772d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001772d8:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001772dc:;
    {
        cpu->r[14] = 0x001772e4u;
    }
L_001772e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001772e4u)) return;
    }
L_001772e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001772e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017730c;
        }
    }
L_001772ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001772f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001772f4:;
    {
        cpu->r[14] = 0x001772fcu;
    }
L_001772f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001772fcu)) return;
    }
L_001772fc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00177300:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00177304:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00177308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001773c0;
        }
    }
L_0017730c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x68u);
    }
L_00177310:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00177314:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00177338;
        }
    }
L_00177318:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0017731c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177330;
        }
    }
L_00177320:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00177324:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4cu);
    }
L_00177328:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017732c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00177338;
        }
    }
L_00177330:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177334:;
    {
        cpu->r[14] = 0x00177338u; fn_0017aa74(cpu);
    }
L_00177338:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017733c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177340:;
    {
        cpu->r[14] = 0x00177348u;
    }
L_00177344:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177348u)) return;
    }
L_00177348:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017734c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177370;
        }
    }
L_00177350:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177358:;
    {
        cpu->r[14] = 0x00177360u;
    }
L_0017735c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177360u)) return;
    }
L_00177360:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00177364:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00177368:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0017736c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001773b0;
        }
    }
L_00177370:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177374:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177378:;
    {
        cpu->r[14] = 0x0017737cu; fn_001768f0(cpu);
    }
L_0017737c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177380:;
    {
        cpu->r[14] = 0x00177384u; fn_001766cc(cpu);
    }
L_00177384:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00177388:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017738cu)) return;
    }
L_0017738c:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_00177390:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00177394:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_00177398:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0017739c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001773a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001773a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001773a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177180;
        }
    }
L_001773ac:;
    {
        goto L_00177384;
    }
L_001773b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001773b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001773b8:;
    {
        cpu->r[14] = 0x001773bcu; fn_00176b5c(cpu);
    }
L_001773bc:;
    {
        goto L_0017737c;
    }
L_001773c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001773c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001773c8:;
    {
        cpu->r[14] = 0x001773d0u;
    }
L_001773cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001773d0u)) return;
    }
L_001773d0:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_001773d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001773d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001773dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177338;
        }
    }
L_001773e0:;
    {
        goto L_0017730c;
    }
L_001773e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001773e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001773ec:;
    {
        cpu->r[14] = 0x001773f4u;
    }
L_001773f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001773f4u)) return;
    }
L_001773f4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001773f8:;
    {
        cpu->r[14] = 0x00177400u;
    }
L_001773fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177400u)) return;
    }
L_00177400:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177404:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00177408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017740c:;
    {
        cpu->r[14] = 0x00177414u;
    }
L_00177410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177414u)) return;
    }
L_00177414:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00177418:;
    {
        cpu->r[14] = 0x00177420u;
    }
L_0017741c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177420u)) return;
    }
L_00177420:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00177424:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00177428:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0017742c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00177430:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_00177434:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00177438:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001772b0;
        }
    }
L_0017743c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00177440:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_00177444:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_00177448:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_0017744c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x528u);
    }
L_00177450:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00177454:;
    {
        cpu->r[14] = 0x00177458u; fn_00180c78(cpu);
    }
L_00177458:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x528u);
    }
L_0017745c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00177460:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00177464:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_00177468:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017746c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00177470:;
    {
        cpu->r[14] = 0x00177474u; fn_00180b68(cpu);
    }
L_00177474:;
    {
        cpu->r[12] = rd8(cpu->r[8] + + 0x524u);
    }
L_00177478:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4e8u);
    }
L_0017747c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00177480:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00177484:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4e0u);
    }
L_00177488:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0017748c:;
    {
        cpu->r[12] = rd8(cpu->r[8] + + 0x538u);
    }
L_00177490:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00177494:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00177498:;
    {
        cpu->r[14] = 0x0017749cu; fn_0017a9d8(cpu);
    }
L_0017749c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 1);
    }
L_001774a0:;
    {
        wr32(cpu->r[7] + + 0x4e4u, cpu->r[0]);
    }
L_001774a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001774a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017744c;
        }
    }
L_001774ac:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001774b0:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001774b4:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_001774b8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001774bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_001774c0:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_001774c4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001774c8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001774cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001774d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00177514;
        }
    }
L_001774d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001774d8:;
    {
        wr8(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001774dc:;
    {
        goto L_001772c0;
    }
L_001774e0:;
    {
        cpu->r[3] = rd32(0x001774e8u + + 0x304u);
    }
L_001774e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001774e8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001774ec:;
    {
        cpu->r[3] = rd32(0x001774f4u + + 0x2fcu);
    }
L_001774f0:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_001774f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001774f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001774fc:;
    {
        cpu->r[3] = rd32(0x00177504u + + 0x2f0u);
    }
L_00177500:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00177504:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00177508:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017750c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00177510:;
    {
        goto L_00177278;
    }
L_00177514:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177518:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017751c:;
    {
        cpu->r[14] = 0x00177524u;
    }
L_00177520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177524u)) return;
    }
L_00177524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177780;
        }
    }
L_0017752c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177530:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177534:;
    {
        cpu->r[14] = 0x0017753cu;
    }
L_00177538:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017753cu)) return;
    }
L_0017753c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00177540:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00177544:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00177548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00177780;
        }
    }
L_0017754c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00177550:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177558:;
    {
        cpu->r[14] = 0x0017755cu; fn_001749f8(cpu);
    }
L_0017755c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177560:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00177564:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00177568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017756c:;
    {
        cpu->r[14] = 0x00177570u; fn_001749f8(cpu);
    }
L_00177570:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177574:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00177578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017757c:;
    {
        cpu->r[14] = 0x00177580u; fn_001749f8(cpu);
    }
L_00177580:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177584:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00177588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017758c:;
    {
        cpu->r[14] = 0x00177590u; fn_001749f8(cpu);
    }
L_00177590:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177594:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00177598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017759c:;
    {
        cpu->r[14] = 0x001775a4u;
    }
L_001775a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001775a4u)) return;
    }
L_001775a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001775a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001775ac:;
    {
        cpu->r[14] = 0x001775b4u;
    }
L_001775b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001775b4u)) return;
    }
L_001775b4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001775b8:;
    {
        cpu->r[14] = 0x001775c0u;
    }
L_001775bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001775c0u)) return;
    }
L_001775c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001775c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001775c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001775cc:;
    {
        cpu->r[14] = 0x001775d4u;
    }
L_001775d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001775d4u)) return;
    }
L_001775d4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001775d8:;
    {
        cpu->r[14] = 0x001775e0u;
    }
L_001775dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001775e0u)) return;
    }
L_001775e0:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_001775e4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_001775e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001775ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001775f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001775f4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001775f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001775fc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[14]; cpu->r[11] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_00177600:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00177604:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00177608:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_0017760c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[7], 1, 1u, &shc), cpu->r[12], 1, 0);
    }
L_00177610:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 1);
    }
L_00177614:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00177618:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0017761c:;
    {
        cpu->r[14] = 0x00177624u;
    }
L_00177620:;
    {
        uint32_t t = rd32(cpu->r[11] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177624u)) return;
    }
L_00177624:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x68u);
    }
L_00177628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017762c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00177698;
        }
    }
L_00177630:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00177634:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_00177638:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0017763c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00177640:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00177644:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00177728;
        }
    }
L_00177648:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017764c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_00177650:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000e0u, 1, 1);
    }
L_00177654:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177728;
        }
    }
L_00177658:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0017765c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177660:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00177664:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00177668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0017766c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_00177670:;
    {
        cpu->r[14] = 0x00177678u;
    }
L_00177674:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177678u)) return;
    }
L_00177678:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000032u, 1, 1);
    }
L_0017767c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_00177680:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177684:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00177698;
        }
    }
L_00177688:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017768c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00177690:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x68u, cpu->r[3]);
        }
    }
L_00177694:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001777c8;
        }
    }
L_00177698:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1b0u);
    }
L_0017769c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001776a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x58u);
    }
L_001776a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001776a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001776ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001776c4;
        }
    }
L_001776b0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001776b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
        }
    }
L_001776b8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x68u, cpu->r[7]);
        }
    }
L_001776bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_001776c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001772c0;
        }
    }
L_001776c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4cu);
    }
L_001776c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001776cc:;
    {
        vfp_sync_flags(cpu);
    }
L_001776d0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001776e4;
        }
    }
L_001776d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_001776d8:;
    {
        cpu->r[3] = 0x00000fd1u;
    }
L_001776dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001776e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017770c;
        }
    }
L_001776e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001776e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001776ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001776fc;
        }
    }
L_001776f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_001776f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001776f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017770c;
        }
    }
L_001776fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00177700:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
        }
    }
L_00177704:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_00177708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001772c0;
        }
    }
L_0017770c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x68u);
    }
L_00177710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00177714:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017779c;
        }
    }
L_00177718:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0017771c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177720:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00177724:;
    {
        goto L_001772c0;
    }
L_00177728:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017772c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00177730:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00177734:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_00177738:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017773c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177788;
        }
    }
L_00177740:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 0);
    }
L_00177744:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000032u, 1, 1);
    }
L_00177748:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00177698;
        }
    }
L_0017774c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00177750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177754:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00177758:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0017775c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00177760:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00177764:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000032u;
        }
    }
L_00177768:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_0017776c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_00177770:;
    {
        cpu->r[14] = 0x00177774u; fn_00172294(cpu);
    }
L_00177774:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00177778:;
    {
        wr8(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_0017777c:;
    {
        goto L_00177698;
    }
L_00177780:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_00177784:;
    {
        goto L_001774d4;
    }
L_00177788:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017778c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_00177790:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000e0u, 1, 1);
    }
L_00177794:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00177740;
        }
    }
L_00177798:;
    {
        goto L_00177658;
    }
L_0017779c:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_001777a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001777a4:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001777a8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001777ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001777b0:;
    {
        cpu->r[14] = 0x001777b4u; fn_00172294(cpu);
    }
L_001777b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1b0u);
    }
L_001777b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001777bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001777c0:;
    {
        wr8(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001777c4:;
    {
        goto L_00177718;
    }
L_001777c8:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_001777cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001777d0:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001777d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001777d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001777dc:;
    {
        cpu->r[14] = 0x001777e0u; fn_00172294(cpu);
    }
L_001777e0:;
    {
        goto L_00177698;
    }
}

/* _ZN8CCarBase13ForcePositionE8Vector4sS0_ @ 001777f8 (arm) */
void fn_001777f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001777f8:;
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
L_001777fc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00177800:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00177804:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00177808:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017780c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00177810:;
    {
        cpu->r[14] = 0x00177818u;
    }
L_00177814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177818u)) return;
    }
L_00177818:;
    {
        cpu->r[6] = rd32(0x00177820u + + 0x16cu);
    }
L_0017781c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00177824u, cpu->r[6], 0, 0);
    }
L_00177820:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017797c;
        }
    }
L_00177828:;
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
L_0017782c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00177834u + + 0x154u);
    }
L_00177830:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00177834:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000003c8u, 0, 0);
    }
L_00177838:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_0017783c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00177840:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_00177844:;
    {
        cpu->r[7] = 0x00008c50u;
    }
L_00177848:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0017784c:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00177850:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_00177854:;
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
L_00177858:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0017785c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00177860:;
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
L_00177864:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00177868:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017786c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177870:;
    {
        cpu->r[14] = 0x00177878u;
    }
L_00177874:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177878u)) return;
    }
L_00177878:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0017787c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00177880:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177884:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000001b0u, 0, 0);
    }
L_00177888:;
    {
        cpu->r[14] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0017788c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00177890:;
    {
        cpu->r[0] = rd32(0x00177898u + + 0xf8u);
    }
L_00177894:;
    {
        uint32_t v = cpu->r[14] & ~ 0x00000008u; cpu->r[14] = v;
    }
L_00177898:;
    {
        wr32(cpu->r[12] + cpu->r[1], cpu->r[14]);
    }
L_0017789c:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[8]);
    }
L_001778a0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_001778a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001778a8:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[5]);
    }
L_001778ac:;
    {
        wr32(cpu->r[4] + + 0x428u, cpu->r[5]);
    }
L_001778b0:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001778b4:;
    {
        wr32(cpu->r[4] + + 0x42cu, cpu->r[5]);
    }
L_001778b8:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[5]);
    }
L_001778bc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_001778c0:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[5]);
    }
L_001778c4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_001778c8:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001778cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_001778d0:;
    {
        cpu->r[14] = 0x001778d4u; fn_0017c2c4(cpu);
    }
L_001778d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001778d8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001778dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001778e0:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001778e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001778e8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001778ec:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001778f0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001778f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_001778f8:;
    {
        cpu->r[14] = 0x001778fcu; fn_00177118(cpu);
    }
L_001778fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00177900:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00177904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00177908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017790c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00177910:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177914:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00177918:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017791c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177920:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_00177924:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_00177928:;
    {
        cpu->r[14] = 0x00177930u;
    }
L_0017792c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177930u)) return;
    }
L_00177930:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00177934:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00177938:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0017793c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177944:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00177948:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017794c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177950:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00177954:;
    {
        cpu->r[14] = 0x0017795cu;
    }
L_00177958:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017795cu)) return;
    }
L_0017795c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00177960:;
    {
        cpu->r[1] = 0x00000c00u;
    }
L_00177964:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00177968:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00018c00u, 0, 0);
    }
L_0017796c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00177970:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000b8u, 0, 0);
    }
L_00177974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00177978:;
    {
        cpu->r[14] = 0x0017797cu; fn_00162ae4(cpu);
    }
L_0017797c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00177980:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00177984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00177988u)) return;
    }
}

/* _ZN8CCarBase22CarCrashAdjustPositionEiiR8Vector4s @ 00177994 (arm) */
void fn_00177994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177994:;
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
L_00177998:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0017799c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001779a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000003e0u, 0, 0);
    }
L_001779a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001779a8:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001779ac:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001779b0:;
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
L_001779b4:;
    {
        cpu->r[7] = rd32(0x001779bcu + + 0x110u);
    }
L_001779b8:;
    {
        cpu->r[7] = add_flags(cpu, 0x001779c0u, cpu->r[7], 0, 0);
    }
L_001779bc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001779c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_001779c4:;
    {
        cpu->r[14] = 0x001779c8u; fn_00171b64(cpu);
    }
L_001779c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[9];
    }
L_001779cc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001779d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001779d8u + + 0xecu);
    }
L_001779d4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 5u, &shc); cpu->r[3] = v;
    }
L_001779d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_001779dc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001779e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001779e8u + + 0xe0u);
    }
L_001779e4:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_001779e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001779ec:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001779f0:;
    {
        cpu->r[14] = 0x001779f4u; imp_sinf(cpu); /* sinf */
    }
L_001779f4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x18u);
    }
L_001779f8:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_001779fc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00177a00:;
    {
        cpu->r[14] = 0x00177a04u; imp_cosf(cpu); /* cosf */
    }
L_00177a04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1cu);
    }
L_00177a08:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00177a0c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_00177a10:;
    {
        cpu->r[12] = rd32(0x00177a18u + + 0xb8u);
    }
L_00177a14:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00177a18:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_00177a1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00177a20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00177a24:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00177a28:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_00177a2c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00177a30:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_00177a34:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_00177a38:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00177a3c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00177a40:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00177a44:;
    {
        vfp_vmul(cpu, 14, 15, 13);
    }
L_00177a48:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_00177a4c:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_00177a50:;
    {
        vfp_vmls(cpu, 14, 17, 12);
    }
L_00177a54:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_00177a58:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00177a5c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00177a60:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00177a64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_00177a68:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[2]);
    }
L_00177a6c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00177a70:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00177a74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00177a78:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_00177a7c:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00177a80:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00177a84:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00177a88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177a8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_00177a90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00177a94:;
    {
        cpu->r[14] = 0x00177a98u; fn_00177118(cpu);
    }
L_00177a98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_00177a9c:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[10]);
    }
L_00177aa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177aa4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00177aa8:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[7]);
    }
L_00177aac:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[8]);
    }
L_00177ab0:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[5]);
    }
L_00177ab4:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[9]);
    }
L_00177ab8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00177abc:;
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
L_00177ac0:;
    {
        return fn_00174970(cpu);
    }
}

/* _ZN8CCarBase11UpdateCrashEv @ 00177ad4 (arm) */
void fn_00177ad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177ad4:;
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
L_00177ad8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00177adc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00177ae0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4d4u);
    }
L_00177ae4:;
    {
        cpu->r[14] = 0x00177ae8u; fn_00171b64(cpu);
    }
L_00177ae8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00177aec:;
    {
        cpu->r[5] = rd32(0x00177af4u + + 0x194u);
    }
L_00177af0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00177af8u, cpu->r[5], 0, 0);
    }
L_00177af4:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_00177af8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00177afc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00177b00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00177b10;
        }
    }
L_00177b04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_00177b08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00177b0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177c54;
        }
    }
L_00177b10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177b14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177b18:;
    {
        cpu->r[14] = 0x00177b20u;
    }
L_00177b1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177b20u)) return;
    }
L_00177b20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177b48;
        }
    }
L_00177b28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177b2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177b30:;
    {
        cpu->r[14] = 0x00177b38u;
    }
L_00177b34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177b38u)) return;
    }
L_00177b38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177b3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177b40:;
    {
        cpu->r[14] = 0x00177b48u;
    }
L_00177b44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177b48u)) return;
    }
L_00177b48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_00177b4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177b50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00177b54:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_00177b58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00177b5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00177b60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00177b64:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[1]);
    }
L_00177b68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[6];
        }
    }
L_00177b6c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00177b70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00177b74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[3]);
        }
    }
L_00177b78:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[3]);
        }
    }
L_00177b7c:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_00177b80:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[3]);
        }
    }
L_00177b84:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00177b88:;
    {
        cpu->r[14] = 0x00177b8cu; fn_00177994(cpu);
    }
L_00177b8c:;
    {
        cpu->r[3] = rd32(0x00177b94u + + 0xf8u);
    }
L_00177b90:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00177b94:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00177b98:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00177b9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00177ba0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3e0u);
    }
L_00177ba4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3e4u);
    }
L_00177ba8:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00177bac:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00177bb0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3ecu);
    }
L_00177bb4:;
    {
        cpu->r[14] = rd32(cpu->r[14] + cpu->r[7]);
    }
L_00177bb8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00177bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3e8u);
    }
L_00177bc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00177bc4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3f0u);
    }
L_00177bc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177bcc:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[8]);
    }
L_00177bd0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3f4u);
    }
L_00177bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00177bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00177bdc:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[12]);
    }
L_00177be0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00177be4:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[6]);
    }
L_00177be8:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[10]);
    }
L_00177bec:;
    {
        cpu->r[14] = 0x00177bf0u; fn_00177118(cpu);
    }
L_00177bf0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00177bf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177bf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00177bfc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00177c00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00177c04:;
    {
        cpu->r[14] = 0x00177c08u; fn_001745cc(cpu);
    }
L_00177c08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_00177c0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00177c10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00177c14:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[3]);
        }
    }
L_00177c18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177c20:;
    {
        cpu->r[14] = 0x00177c28u;
    }
L_00177c24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177c28u)) return;
    }
L_00177c28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177c2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177c40;
        }
    }
L_00177c30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177c34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177c38:;
    {
        cpu->r[14] = 0x00177c40u;
    }
L_00177c3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177c40u)) return;
    }
L_00177c40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f4u);
    }
L_00177c44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00177c48:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[3]);
    }
L_00177c4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00177c50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00177c54u)) return;
    }
L_00177c54:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177c58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177c5c:;
    {
        cpu->r[14] = 0x00177c64u;
    }
L_00177c60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177c64u)) return;
    }
L_00177c64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00177c68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00177c7c;
        }
    }
L_00177c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00177c70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177c74:;
    {
        cpu->r[14] = 0x00177c7cu;
    }
L_00177c78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177c7cu)) return;
    }
L_00177c7c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00177c80:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[3]);
    }
L_00177c84:;
    {
        goto L_00177c18;
    }
}

/* _ZN8CCarBase20ComputeCollisionBodyEv @ 00177c90 (arm) */
void fn_00177c90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177c90:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x250u);
    }
L_00177c94:;
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
L_00177c98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00177c9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_00177ca0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00177ca4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00177d78;
        }
    }
L_00177ca8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00177cac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00177cb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00177cb4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00177cb8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00177cbc:;
    {
        wr8(cpu->r[0] + + 0x250u, cpu->r[3]);
    }
L_00177cc0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00177cc4:;
    {
        cpu->r[14] = 0x00177cccu;
    }
L_00177cc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00177cccu)) return;
    }
L_00177ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177cd0:;
    {
        cpu->r[14] = 0x00177cd4u; fn_001721e4(cpu);
    }
L_00177cd4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00177cd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177cdc:;
    {
        cpu->r[14] = 0x00177ce0u; fn_001721f0(cpu);
    }
L_00177ce0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00177ce4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177ce8:;
    {
        cpu->r[14] = 0x00177cecu; fn_001721e4(cpu);
    }
L_00177cec:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00177cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177cf4:;
    {
        cpu->r[14] = 0x00177cf8u; fn_001721f0(cpu);
    }
L_00177cf8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00177cfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00177d00:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00177d04:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00177d08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00177d0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00177d10:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_00177d14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177d18:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[12] = v;
    }
L_00177d1c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[2] = v;
    }
L_00177d20:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[10] = v;
    }
L_00177d24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[12], 1, 13u, &shc), 0, 0);
    }
L_00177d28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00177d2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 13u, &shc), 0, 0);
    }
L_00177d30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00177d34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 1, 13u, &shc), 0, 0);
    }
L_00177d38:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00177d3c:;
    {
        cpu->r[14] = 0x00177d40u; fn_001721fc(cpu);
    }
L_00177d40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_00177d44:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00177d48:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00177d4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00177d50:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00177d54:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00177d58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00177d5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000214u, 0, 0);
    }
L_00177d60:;
    {
        cpu->r[14] = 0x00177d64u; fn_0017d5dc(cpu);
    }
L_00177d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177d68:;
    {
        cpu->r[14] = 0x00177d6cu; fn_00172208(cpu);
    }
L_00177d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00177d70:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00177d74:;
    {
        wr32(cpu->r[4] + + 0x240u, cpu->r[0]);
    }
L_00177d78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00177d7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00177d80u)) return;
    }
}

/* _ZN8CCarBaseD0Ev @ 00177d80 (arm) */
void fn_00177d80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177d80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00177d84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00177d88:;
    {
        cpu->r[14] = 0x00177d8cu; fn_00172190(cpu);
    }
L_00177d8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177d90:;
    {
        cpu->r[14] = 0x00177d94u; fn_0018ba20(cpu);
    }
L_00177d94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00177d98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00177d9cu)) return;
    }
}

/* _ZN8CCarBaseC1Ev @ 00177d9c (arm) */
void fn_00177d9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00177d9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00177da0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00177da8u + + 0x3e8u);
    }
L_00177da4:;
    {
        cpu->r[7] = rd32(0x00177dacu + + 0x3f0u);
    }
L_00177da8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00177dac:;
    {
        cpu->r[3] = rd32(0x00177db4u + + 0x3ecu);
    }
L_00177db0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00177db4:;
    {
        cpu->r[7] = add_flags(cpu, 0x00177dbcu, cpu->r[7], 0, 0);
    }
L_00177db8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00177dbc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00177dc4u + + 0x3d0u);
    }
L_00177dc0:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_00177dc4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00177dc8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177dcc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177dd0:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[6]);
    }
L_00177dd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00177dd8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[5]);
    }
L_00177ddc:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00177de0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177de4:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[5]);
    }
L_00177de8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177dec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177df0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177df4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177df8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177dfc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e04:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_00177e08:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e0c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[5]);
    }
L_00177e10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e14:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[5]);
    }
L_00177e18:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e1c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_00177e20:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e24:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177e28:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[5]);
    }
L_00177e2c:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[5]);
    }
L_00177e30:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00177e38u + + 0x360u);
    }
L_00177e34:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[5]);
    }
L_00177e38:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00177e3c:;
    {
        wr8(cpu->r[0] + + 0x68u, cpu->r[5]);
    }
L_00177e40:;
    {
        wr8(cpu->r[0] + + 0x69u, cpu->r[5]);
    }
L_00177e44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000214u, 0, 0);
    }
L_00177e48:;
    {
        wr8(cpu->r[4] + + 0x6au, cpu->r[5]);
    }
L_00177e4c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_00177e50:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_00177e54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e60:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e68:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00177e6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00177e70:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[6]);
    }
L_00177e74:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[6]);
    }
L_00177e78:;
    {
        wr32(cpu->r[4] + + 0x1a0u, cpu->r[6]);
    }
L_00177e7c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_00177e80:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_00177e84:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_00177e88:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_00177e8c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_00177e90:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_00177e94:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_00177e98:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_00177e9c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_00177ea0:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_00177ea4:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[5]);
    }
L_00177ea8:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_00177eac:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_00177eb0:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[5]);
    }
L_00177eb4:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[5]);
    }
L_00177eb8:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[5]);
    }
L_00177ebc:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[5]);
    }
L_00177ec0:;
    {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[5]);
    }
L_00177ec4:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[5]);
    }
L_00177ec8:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[5]);
    }
L_00177ecc:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[5]);
    }
L_00177ed0:;
    {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[5]);
    }
L_00177ed4:;
    {
        wr32(cpu->r[4] + + 0x1c0u, cpu->r[5]);
    }
L_00177ed8:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[5]);
    }
L_00177edc:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[6]);
    }
L_00177ee0:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[6]);
    }
L_00177ee4:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[5]);
    }
L_00177ee8:;
    {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[5]);
    }
L_00177eec:;
    {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[5]);
    }
L_00177ef0:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[5]);
    }
L_00177ef4:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[5]);
    }
L_00177ef8:;
    {
        wr8(cpu->r[4] + + 0x1e0u, cpu->r[5]);
    }
L_00177efc:;
    {
        wr32(cpu->r[4] + + 0x1e4u, cpu->r[5]);
    }
L_00177f00:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[5]);
    }
L_00177f04:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[5]);
    }
L_00177f08:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[5]);
    }
L_00177f0c:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[5]);
    }
L_00177f10:;
    {
        wr8(cpu->r[4] + + 0x1fcu, cpu->r[5]);
    }
L_00177f14:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_00177f18:;
    {
        wr8(cpu->r[4] + + 0x204u, cpu->r[5]);
    }
L_00177f1c:;
    {
        cpu->r[14] = 0x00177f20u; fn_0017a4e8(cpu);
    }
L_00177f20:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,16);
    }
L_00177f24:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00177f28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00177f2c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00177f30:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_00177f34:;
    {
        wr32(cpu->r[4] + + 0x398u, cpu->r[6]);
    }
L_00177f38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00177f3c:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[6]);
    }
L_00177f40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177f44:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[6]);
    }
L_00177f48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x358u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177f4c:;
    {
        wr32(cpu->r[4] + + 0x3a8u, cpu->r[6]);
    }
L_00177f50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x35cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177f54:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00177f58:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[5]);
    }
L_00177f5c:;
    {
        wr8(cpu->r[4] + + 0x294u, cpu->r[5]);
    }
L_00177f60:;
    {
        wr32(cpu->r[4] + + 0x338u, cpu->r[5]);
    }
L_00177f64:;
    {
        wr32(cpu->r[4] + + 0x33cu, cpu->r[5]);
    }
L_00177f68:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[5]);
    }
L_00177f6c:;
    {
        wr32(cpu->r[4] + + 0x344u, cpu->r[5]);
    }
L_00177f70:;
    {
        wr32(cpu->r[4] + + 0x348u, cpu->r[5]);
    }
L_00177f74:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[5]);
    }
L_00177f78:;
    {
        wr32(cpu->r[4] + + 0x350u, cpu->r[5]);
    }
L_00177f7c:;
    {
        wr32(cpu->r[4] + + 0x360u, cpu->r[5]);
    }
L_00177f80:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[5]);
    }
L_00177f84:;
    {
        wr32(cpu->r[4] + + 0x368u, cpu->r[5]);
    }
L_00177f88:;
    {
        wr32(cpu->r[4] + + 0x36cu, cpu->r[5]);
    }
L_00177f8c:;
    {
        wr32(cpu->r[4] + + 0x370u, cpu->r[5]);
    }
L_00177f90:;
    {
        wr32(cpu->r[4] + + 0x374u, cpu->r[5]);
    }
L_00177f94:;
    {
        wr32(cpu->r[4] + + 0x378u, cpu->r[5]);
    }
L_00177f98:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[5]);
    }
L_00177f9c:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_00177fa0:;
    {
        wr32(cpu->r[4] + + 0x384u, cpu->r[5]);
    }
L_00177fa4:;
    {
        wr32(cpu->r[4] + + 0x388u, cpu->r[5]);
    }
L_00177fa8:;
    {
        wr32(cpu->r[4] + + 0x38cu, cpu->r[5]);
    }
L_00177fac:;
    {
        wr32(cpu->r[4] + + 0x390u, cpu->r[5]);
    }
L_00177fb0:;
    {
        wr32(cpu->r[4] + + 0x394u, cpu->r[5]);
    }
L_00177fb4:;
    {
        wr32(cpu->r[4] + + 0x3a4u, cpu->r[5]);
    }
L_00177fb8:;
    {
        wr32(cpu->r[4] + + 0x3acu, cpu->r[5]);
    }
L_00177fbc:;
    {
        wr32(cpu->r[4] + + 0x3b0u, cpu->r[5]);
    }
L_00177fc0:;
    {
        wr32(cpu->r[4] + + 0x3b4u, cpu->r[5]);
    }
L_00177fc4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3f8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177fc8:;
    {
        wr32(cpu->r[4] + + 0x3b8u, cpu->r[5]);
    }
L_00177fcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3fcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00177fd0:;
    {
        wr32(cpu->r[4] + + 0x3bcu, cpu->r[5]);
    }
L_00177fd4:;
    {
        wr32(cpu->r[4] + + 0x3c0u, cpu->r[5]);
    }
L_00177fd8:;
    {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[5]);
    }
L_00177fdc:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[5]);
    }
L_00177fe0:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[5]);
    }
L_00177fe4:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[5]);
    }
L_00177fe8:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[5]);
    }
L_00177fec:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[5]);
    }
L_00177ff0:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[5]);
    }
L_00177ff4:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[5]);
    }
L_00177ff8:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[5]);
    }
L_00177ffc:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[5]);
    }
L_00178000:;
    {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[5]);
    }
L_00178004:;
    {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[5]);
    }
L_00178008:;
    {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[5]);
    }
L_0017800c:;
    {
        wr32(cpu->r[4] + + 0x400u, cpu->r[6]);
    }
L_00178010:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[6]);
    }
L_00178014:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[6]);
    }
L_00178018:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[6]);
    }
L_0017801c:;
    {
        wr32(cpu->r[4] + + 0x410u, cpu->r[6]);
    }
L_00178020:;
    {
        wr32(cpu->r[4] + + 0x414u, cpu->r[6]);
    }
L_00178024:;
    {
        wr32(cpu->r[4] + + 0x418u, cpu->r[6]);
    }
L_00178028:;
    {
        wr32(cpu->r[4] + + 0x428u, cpu->r[5]);
    }
L_0017802c:;
    {
        wr32(cpu->r[4] + + 0x42cu, cpu->r[5]);
    }
L_00178030:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[5]);
    }
L_00178034:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[5]);
    }
L_00178038:;
    {
        wr32(cpu->r[4] + + 0x438u, cpu->r[5]);
    }
L_0017803c:;
    {
        wr32(cpu->r[4] + + 0x43cu, cpu->r[5]);
    }
L_00178040:;
    {
        wr32(cpu->r[4] + + 0x440u, cpu->r[6]);
    }
L_00178044:;
    {
        wr32(cpu->r[4] + + 0x444u, cpu->r[6]);
    }
L_00178048:;
    {
        wr32(cpu->r[4] + + 0x448u, cpu->r[6]);
    }
L_0017804c:;
    {
        wr32(cpu->r[4] + + 0x44cu, cpu->r[6]);
    }
L_00178050:;
    {
        wr32(cpu->r[4] + + 0x450u, cpu->r[6]);
    }
L_00178054:;
    {
        wr32(cpu->r[4] + + 0x454u, cpu->r[6]);
    }
L_00178058:;
    {
        wr32(cpu->r[4] + + 0x458u, cpu->r[5]);
    }
L_0017805c:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[5]);
    }
L_00178060:;
    {
        wr32(cpu->r[4] + + 0x460u, cpu->r[5]);
    }
L_00178064:;
    {
        wr32(cpu->r[4] + + 0x464u, cpu->r[5]);
    }
L_00178068:;
    {
        wr32(cpu->r[4] + + 0x468u, cpu->r[5]);
    }
L_0017806c:;
    {
        wr32(cpu->r[4] + + 0x46cu, cpu->r[5]);
    }
L_00178070:;
    {
        wr32(cpu->r[4] + + 0x470u, cpu->r[5]);
    }
L_00178074:;
    {
        wr32(cpu->r[4] + + 0x474u, cpu->r[5]);
    }
L_00178078:;
    {
        wr32(cpu->r[4] + + 0x478u, cpu->r[5]);
    }
L_0017807c:;
    {
        wr32(cpu->r[4] + + 0x47cu, cpu->r[5]);
    }
L_00178080:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[5]);
    }
L_00178084:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_00178088:;
    {
        wr32(cpu->r[4] + + 0x488u, cpu->r[5]);
    }
L_0017808c:;
    {
        wr32(cpu->r[4] + + 0x48cu, cpu->r[5]);
    }
L_00178090:;
    {
        wr32(cpu->r[4] + + 0x490u, cpu->r[5]);
    }
L_00178094:;
    {
        wr32(cpu->r[4] + + 0x494u, cpu->r[5]);
    }
L_00178098:;
    {
        wr32(cpu->r[4] + + 0x498u, cpu->r[5]);
    }
L_0017809c:;
    {
        wr32(cpu->r[4] + + 0x49cu, cpu->r[5]);
    }
L_001780a0:;
    {
        wr32(cpu->r[4] + + 0x4a0u, cpu->r[5]);
    }
L_001780a4:;
    {
        wr32(cpu->r[4] + + 0x4a4u, cpu->r[5]);
    }
L_001780a8:;
    {
        wr32(cpu->r[4] + + 0x4a8u, cpu->r[5]);
    }
L_001780ac:;
    {
        wr32(cpu->r[4] + + 0x4acu, cpu->r[5]);
    }
L_001780b0:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[5]);
    }
L_001780b4:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[5]);
    }
L_001780b8:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[5]);
    }
L_001780bc:;
    {
        wr32(cpu->r[4] + + 0x4c4u, cpu->r[5]);
    }
L_001780c0:;
    {
        wr32(cpu->r[4] + + 0x4c8u, cpu->r[5]);
    }
L_001780c4:;
    {
        wr32(cpu->r[4] + + 0x4ccu, cpu->r[5]);
    }
L_001780c8:;
    {
        wr8(cpu->r[4] + + 0x4d0u, cpu->r[5]);
    }
L_001780cc:;
    {
        wr8(cpu->r[4] + + 0x4d1u, cpu->r[5]);
    }
L_001780d0:;
    {
        wr32(cpu->r[4] + + 0x4d4u, cpu->r[5]);
    }
L_001780d4:;
    {
        wr32(cpu->r[4] + + 0x4d8u, cpu->r[5]);
    }
L_001780d8:;
    {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[5]);
    }
L_001780dc:;
    {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[5]);
    }
L_001780e0:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[5]);
    }
L_001780e4:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[5]);
    }
L_001780e8:;
    {
        wr32(cpu->r[4] + + 0x520u, cpu->r[5]);
    }
L_001780ec:;
    {
        wr32(cpu->r[4] + + 0x540u, cpu->r[5]);
    }
L_001780f0:;
    {
        wr32(cpu->r[4] + + 0x548u, cpu->r[5]);
    }
L_001780f4:;
    {
        wr32(cpu->r[4] + + 0x528u, cpu->r[5]);
    }
L_001780f8:;
    {
        wr32(cpu->r[4] + + 0x52cu, cpu->r[5]);
    }
L_001780fc:;
    {
        wr32(cpu->r[4] + + 0x530u, cpu->r[5]);
    }
L_00178100:;
    {
        wr32(cpu->r[4] + + 0x534u, cpu->r[5]);
    }
L_00178104:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00178108:;
    {
        wr32(cpu->r[3] + + 0x130u, cpu->r[0]);
    }
L_0017810c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 1);
    }
L_00178110:;
    {
        wr32(cpu->r[2] + + 0x100u, cpu->r[0]);
    }
L_00178114:;
    {
        wr32(cpu->r[2] + + 0x104u, cpu->r[0]);
    }
L_00178118:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017811c:;
    {
        wr32(cpu->r[2] + + 0x108u, cpu->r[0]);
    }
L_00178120:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178124:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178128:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017812c:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[12]);
    }
L_00178130:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00178134:;
    {
        wr8(cpu->r[1] + + 0x538u, cpu->r[12]);
    }
L_00178138:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0017813c:;
    {
        wr8(cpu->r[1] + + 0x524u, cpu->r[12]);
    }
L_00178140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00178144:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00178104;
        }
    }
L_00178148:;
    {
        cpu->r[3] = rd32(0x00178150u + + 0x54u);
    }
L_0017814c:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[12]);
    }
L_00178150:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[12]);
    }
L_00178154:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00178158:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[12]);
    }
L_0017815c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00178160:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00178164:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00178168:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017816c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001781c0;
        }
    }
L_00178170:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00178174:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00178178:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0017817c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00178180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001781c0;
        }
    }
L_00178184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00178188:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_0017818c:;
    {
        goto L_001781a8;
    }
L_001781a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001781ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001781b0:;
    {
        wr32(cpu->r[4] + + 0x544u, cpu->r[3]);
    }
L_001781b4:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001781b8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001781bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001781c0u)) return;
    }
L_001781c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001781c4:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_001781c8:;
    {
        goto L_001781a8;
    }
}

/* _ZN8CCarBaseC2Ev @ 001781cc (arm) */
void fn_001781cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001781cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001781d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001781d8u + + 0x3e8u);
    }
L_001781d4:;
    {
        cpu->r[7] = rd32(0x001781dcu + + 0x3f0u);
    }
L_001781d8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001781dc:;
    {
        cpu->r[3] = rd32(0x001781e4u + + 0x3ecu);
    }
L_001781e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001781e4:;
    {
        cpu->r[7] = add_flags(cpu, 0x001781ecu, cpu->r[7], 0, 0);
    }
L_001781e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001781ec:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001781f4u + + 0x3d0u);
    }
L_001781f0:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001781f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001781f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001781fc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178200:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[6]);
    }
L_00178204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00178208:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[5]);
    }
L_0017820c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00178210:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178214:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[5]);
    }
L_00178218:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017821c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178220:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178224:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178228:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017822c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178230:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178234:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_00178238:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017823c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[5]);
    }
L_00178240:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178244:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[5]);
    }
L_00178248:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017824c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_00178250:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178254:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178258:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[5]);
    }
L_0017825c:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[5]);
    }
L_00178260:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00178268u + + 0x360u);
    }
L_00178264:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[5]);
    }
L_00178268:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0017826c:;
    {
        wr8(cpu->r[0] + + 0x68u, cpu->r[5]);
    }
L_00178270:;
    {
        wr8(cpu->r[0] + + 0x69u, cpu->r[5]);
    }
L_00178274:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000214u, 0, 0);
    }
L_00178278:;
    {
        wr8(cpu->r[4] + + 0x6au, cpu->r[5]);
    }
L_0017827c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[5]);
    }
L_00178280:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_00178284:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178288:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017828c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178290:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178294:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178298:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017829c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1a8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001782a0:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[6]);
    }
L_001782a4:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[6]);
    }
L_001782a8:;
    {
        wr32(cpu->r[4] + + 0x1a0u, cpu->r[6]);
    }
L_001782ac:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[5]);
    }
L_001782b0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[5]);
    }
L_001782b4:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[5]);
    }
L_001782b8:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[5]);
    }
L_001782bc:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_001782c0:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[5]);
    }
L_001782c4:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_001782c8:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_001782cc:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_001782d0:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_001782d4:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[5]);
    }
L_001782d8:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_001782dc:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[5]);
    }
L_001782e0:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[5]);
    }
L_001782e4:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[5]);
    }
L_001782e8:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[5]);
    }
L_001782ec:;
    {
        wr32(cpu->r[4] + + 0x194u, cpu->r[5]);
    }
L_001782f0:;
    {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[5]);
    }
L_001782f4:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[5]);
    }
L_001782f8:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[5]);
    }
L_001782fc:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[5]);
    }
L_00178300:;
    {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[5]);
    }
L_00178304:;
    {
        wr32(cpu->r[4] + + 0x1c0u, cpu->r[5]);
    }
L_00178308:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[5]);
    }
L_0017830c:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[6]);
    }
L_00178310:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[6]);
    }
L_00178314:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[5]);
    }
L_00178318:;
    {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[5]);
    }
L_0017831c:;
    {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[5]);
    }
L_00178320:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[5]);
    }
L_00178324:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[5]);
    }
L_00178328:;
    {
        wr8(cpu->r[4] + + 0x1e0u, cpu->r[5]);
    }
L_0017832c:;
    {
        wr32(cpu->r[4] + + 0x1e4u, cpu->r[5]);
    }
L_00178330:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[5]);
    }
L_00178334:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[5]);
    }
L_00178338:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[5]);
    }
L_0017833c:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[5]);
    }
L_00178340:;
    {
        wr8(cpu->r[4] + + 0x1fcu, cpu->r[5]);
    }
L_00178344:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_00178348:;
    {
        wr8(cpu->r[4] + + 0x204u, cpu->r[5]);
    }
L_0017834c:;
    {
        cpu->r[14] = 0x00178350u; fn_0017a4e8(cpu);
    }
L_00178350:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,16);
    }
L_00178354:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00178358:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017835c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00178360:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_00178364:;
    {
        wr32(cpu->r[4] + + 0x398u, cpu->r[6]);
    }
L_00178368:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017836c:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[6]);
    }
L_00178370:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178374:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[6]);
    }
L_00178378:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x358u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0017837c:;
    {
        wr32(cpu->r[4] + + 0x3a8u, cpu->r[6]);
    }
L_00178380:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x35cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178384:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00178388:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[5]);
    }
L_0017838c:;
    {
        wr8(cpu->r[4] + + 0x294u, cpu->r[5]);
    }
L_00178390:;
    {
        wr32(cpu->r[4] + + 0x338u, cpu->r[5]);
    }
L_00178394:;
    {
        wr32(cpu->r[4] + + 0x33cu, cpu->r[5]);
    }
L_00178398:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[5]);
    }
L_0017839c:;
    {
        wr32(cpu->r[4] + + 0x344u, cpu->r[5]);
    }
L_001783a0:;
    {
        wr32(cpu->r[4] + + 0x348u, cpu->r[5]);
    }
L_001783a4:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[5]);
    }
L_001783a8:;
    {
        wr32(cpu->r[4] + + 0x350u, cpu->r[5]);
    }
L_001783ac:;
    {
        wr32(cpu->r[4] + + 0x360u, cpu->r[5]);
    }
L_001783b0:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[5]);
    }
L_001783b4:;
    {
        wr32(cpu->r[4] + + 0x368u, cpu->r[5]);
    }
L_001783b8:;
    {
        wr32(cpu->r[4] + + 0x36cu, cpu->r[5]);
    }
L_001783bc:;
    {
        wr32(cpu->r[4] + + 0x370u, cpu->r[5]);
    }
L_001783c0:;
    {
        wr32(cpu->r[4] + + 0x374u, cpu->r[5]);
    }
L_001783c4:;
    {
        wr32(cpu->r[4] + + 0x378u, cpu->r[5]);
    }
L_001783c8:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[5]);
    }
L_001783cc:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_001783d0:;
    {
        wr32(cpu->r[4] + + 0x384u, cpu->r[5]);
    }
L_001783d4:;
    {
        wr32(cpu->r[4] + + 0x388u, cpu->r[5]);
    }
L_001783d8:;
    {
        wr32(cpu->r[4] + + 0x38cu, cpu->r[5]);
    }
L_001783dc:;
    {
        wr32(cpu->r[4] + + 0x390u, cpu->r[5]);
    }
L_001783e0:;
    {
        wr32(cpu->r[4] + + 0x394u, cpu->r[5]);
    }
L_001783e4:;
    {
        wr32(cpu->r[4] + + 0x3a4u, cpu->r[5]);
    }
L_001783e8:;
    {
        wr32(cpu->r[4] + + 0x3acu, cpu->r[5]);
    }
L_001783ec:;
    {
        wr32(cpu->r[4] + + 0x3b0u, cpu->r[5]);
    }
L_001783f0:;
    {
        wr32(cpu->r[4] + + 0x3b4u, cpu->r[5]);
    }
L_001783f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3f8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001783f8:;
    {
        wr32(cpu->r[4] + + 0x3b8u, cpu->r[5]);
    }
L_001783fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3fcu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00178400:;
    {
        wr32(cpu->r[4] + + 0x3bcu, cpu->r[5]);
    }
L_00178404:;
    {
        wr32(cpu->r[4] + + 0x3c0u, cpu->r[5]);
    }
L_00178408:;
    {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[5]);
    }
L_0017840c:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[5]);
    }
L_00178410:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[5]);
    }
L_00178414:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[5]);
    }
L_00178418:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[5]);
    }
L_0017841c:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[5]);
    }
L_00178420:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[5]);
    }
L_00178424:;
    {
        wr32(cpu->r[4] + + 0x3e0u, cpu->r[5]);
    }
L_00178428:;
    {
        wr32(cpu->r[4] + + 0x3e4u, cpu->r[5]);
    }
L_0017842c:;
    {
        wr32(cpu->r[4] + + 0x3e8u, cpu->r[5]);
    }
L_00178430:;
    {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[5]);
    }
L_00178434:;
    {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[5]);
    }
L_00178438:;
    {
        wr32(cpu->r[4] + + 0x3f4u, cpu->r[5]);
    }
L_0017843c:;
    {
        wr32(cpu->r[4] + + 0x400u, cpu->r[6]);
    }
L_00178440:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[6]);
    }
L_00178444:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[6]);
    }
L_00178448:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[6]);
    }
L_0017844c:;
    {
        wr32(cpu->r[4] + + 0x410u, cpu->r[6]);
    }
L_00178450:;
    {
        wr32(cpu->r[4] + + 0x414u, cpu->r[6]);
    }
L_00178454:;
    {
        wr32(cpu->r[4] + + 0x418u, cpu->r[6]);
    }
L_00178458:;
    {
        wr32(cpu->r[4] + + 0x428u, cpu->r[5]);
    }
L_0017845c:;
    {
        wr32(cpu->r[4] + + 0x42cu, cpu->r[5]);
    }
L_00178460:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[5]);
    }
L_00178464:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[5]);
    }
L_00178468:;
    {
        wr32(cpu->r[4] + + 0x438u, cpu->r[5]);
    }
L_0017846c:;
    {
        wr32(cpu->r[4] + + 0x43cu, cpu->r[5]);
    }
L_00178470:;
    {
        wr32(cpu->r[4] + + 0x440u, cpu->r[6]);
    }
L_00178474:;
    {
        wr32(cpu->r[4] + + 0x444u, cpu->r[6]);
    }
L_00178478:;
    {
        wr32(cpu->r[4] + + 0x448u, cpu->r[6]);
    }
L_0017847c:;
    {
        wr32(cpu->r[4] + + 0x44cu, cpu->r[6]);
    }
L_00178480:;
    {
        wr32(cpu->r[4] + + 0x450u, cpu->r[6]);
    }
L_00178484:;
    {
        wr32(cpu->r[4] + + 0x454u, cpu->r[6]);
    }
L_00178488:;
    {
        wr32(cpu->r[4] + + 0x458u, cpu->r[5]);
    }
L_0017848c:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[5]);
    }
L_00178490:;
    {
        wr32(cpu->r[4] + + 0x460u, cpu->r[5]);
    }
L_00178494:;
    {
        wr32(cpu->r[4] + + 0x464u, cpu->r[5]);
    }
L_00178498:;
    {
        wr32(cpu->r[4] + + 0x468u, cpu->r[5]);
    }
L_0017849c:;
    {
        wr32(cpu->r[4] + + 0x46cu, cpu->r[5]);
    }
L_001784a0:;
    {
        wr32(cpu->r[4] + + 0x470u, cpu->r[5]);
    }
L_001784a4:;
    {
        wr32(cpu->r[4] + + 0x474u, cpu->r[5]);
    }
L_001784a8:;
    {
        wr32(cpu->r[4] + + 0x478u, cpu->r[5]);
    }
L_001784ac:;
    {
        wr32(cpu->r[4] + + 0x47cu, cpu->r[5]);
    }
L_001784b0:;
    {
        wr32(cpu->r[4] + + 0x480u, cpu->r[5]);
    }
L_001784b4:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_001784b8:;
    {
        wr32(cpu->r[4] + + 0x488u, cpu->r[5]);
    }
L_001784bc:;
    {
        wr32(cpu->r[4] + + 0x48cu, cpu->r[5]);
    }
L_001784c0:;
    {
        wr32(cpu->r[4] + + 0x490u, cpu->r[5]);
    }
L_001784c4:;
    {
        wr32(cpu->r[4] + + 0x494u, cpu->r[5]);
    }
L_001784c8:;
    {
        wr32(cpu->r[4] + + 0x498u, cpu->r[5]);
    }
L_001784cc:;
    {
        wr32(cpu->r[4] + + 0x49cu, cpu->r[5]);
    }
L_001784d0:;
    {
        wr32(cpu->r[4] + + 0x4a0u, cpu->r[5]);
    }
L_001784d4:;
    {
        wr32(cpu->r[4] + + 0x4a4u, cpu->r[5]);
    }
L_001784d8:;
    {
        wr32(cpu->r[4] + + 0x4a8u, cpu->r[5]);
    }
L_001784dc:;
    {
        wr32(cpu->r[4] + + 0x4acu, cpu->r[5]);
    }
L_001784e0:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[5]);
    }
L_001784e4:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[5]);
    }
L_001784e8:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[5]);
    }
L_001784ec:;
    {
        wr32(cpu->r[4] + + 0x4c4u, cpu->r[5]);
    }
L_001784f0:;
    {
        wr32(cpu->r[4] + + 0x4c8u, cpu->r[5]);
    }
L_001784f4:;
    {
        wr32(cpu->r[4] + + 0x4ccu, cpu->r[5]);
    }
L_001784f8:;
    {
        wr8(cpu->r[4] + + 0x4d0u, cpu->r[5]);
    }
L_001784fc:;
    {
        wr8(cpu->r[4] + + 0x4d1u, cpu->r[5]);
    }
L_00178500:;
    {
        wr32(cpu->r[4] + + 0x4d4u, cpu->r[5]);
    }
L_00178504:;
    {
        wr32(cpu->r[4] + + 0x4d8u, cpu->r[5]);
    }
L_00178508:;
    {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[5]);
    }
L_0017850c:;
    {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[5]);
    }
L_00178510:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[5]);
    }
L_00178514:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[5]);
    }
L_00178518:;
    {
        wr32(cpu->r[4] + + 0x520u, cpu->r[5]);
    }
L_0017851c:;
    {
        wr32(cpu->r[4] + + 0x540u, cpu->r[5]);
    }
L_00178520:;
    {
        wr32(cpu->r[4] + + 0x548u, cpu->r[5]);
    }
L_00178524:;
    {
        wr32(cpu->r[4] + + 0x528u, cpu->r[5]);
    }
L_00178528:;
    {
        wr32(cpu->r[4] + + 0x52cu, cpu->r[5]);
    }
L_0017852c:;
    {
        wr32(cpu->r[4] + + 0x530u, cpu->r[5]);
    }
L_00178530:;
    {
        wr32(cpu->r[4] + + 0x534u, cpu->r[5]);
    }
L_00178534:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00178538:;
    {
        wr32(cpu->r[3] + + 0x130u, cpu->r[0]);
    }
L_0017853c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 1);
    }
L_00178540:;
    {
        wr32(cpu->r[2] + + 0x100u, cpu->r[0]);
    }
L_00178544:;
    {
        wr32(cpu->r[2] + + 0x104u, cpu->r[0]);
    }
L_00178548:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017854c:;
    {
        wr32(cpu->r[2] + + 0x108u, cpu->r[0]);
    }
L_00178550:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178554:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00178558:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017855c:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[12]);
    }
L_00178560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00178564:;
    {
        wr8(cpu->r[1] + + 0x538u, cpu->r[12]);
    }
L_00178568:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0017856c:;
    {
        wr8(cpu->r[1] + + 0x524u, cpu->r[12]);
    }
L_00178570:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00178574:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00178534;
        }
    }
L_00178578:;
    {
        cpu->r[3] = rd32(0x00178580u + + 0x54u);
    }
L_0017857c:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[12]);
    }
L_00178580:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[12]);
    }
L_00178584:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00178588:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[12]);
    }
L_0017858c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00178590:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00178594:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00178598:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017859c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001785f0;
        }
    }
L_001785a0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001785a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001785a8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001785ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001785b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001785f0;
        }
    }
L_001785b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001785b8:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_001785bc:;
    {
        goto L_001785d8;
    }
L_001785d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001785dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001785e0:;
    {
        wr32(cpu->r[4] + + 0x544u, cpu->r[3]);
    }
L_001785e4:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001785e8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001785ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001785f0u)) return;
    }
L_001785f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001785f4:;
    {
        wr32(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_001785f8:;
    {
        goto L_001785d8;
    }
}

/* _ZN8CCarBase8LoadMeshEP8LZMAFile @ 001785fc (arm) */
void fn_001785fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001785fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_00178600:;
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
L_00178604:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00178608:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0017860c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00178610:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00178614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017864c;
        }
    }
L_00178618:;
    {
        cpu->r[1] = rd32(0x00178620u + + 0x730u);
    }
L_0017861c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178620:;
    {
        cpu->r[12] = rd32(0x00178628u + + 0x72cu);
    }
L_00178624:;
    {
        cpu->r[14] = 0x00000140u;
    }
L_00178628:;
    {
        cpu->r[2] = rd32(0x00178630u + + 0x728u);
    }
L_0017862c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178634u, cpu->r[1], 0, 0);
    }
L_00178630:;
    {
        cpu->r[3] = rd32(0x00178638u + + 0x724u);
    }
L_00178634:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017863cu, cpu->r[12], 0, 0);
    }
L_00178638:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178640u, cpu->r[2], 0, 0);
    }
L_0017863c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005cu, 0, 0);
    }
L_00178640:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178648u, cpu->r[3], 0, 0);
    }
L_00178644:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178648:;
    {
        cpu->r[14] = 0x0017864cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017864c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00178650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178d18;
        }
    }
L_00178654:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00178658:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000046u, 0, 0);
    }
L_0017865c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00178660:;
    {
        cpu->r[14] = 0x00178664u; fn_000fc5f4(cpu);
    }
L_00178664:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0x46u);
    }
L_00178668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 1);
    }
L_0017866c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00178670:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_00178674:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
        }
    }
L_00178678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178690;
        }
    }
L_0017867c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00178680:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[5] = v;
    }
L_00178684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00178688:;
    {
        cpu->r[14] = 0x0017868cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0017868c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00178690:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00178694:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00178698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017869c:;
    {
        cpu->r[14] = 0x001786a0u; fn_000fc5f4(cpu);
    }
L_001786a0:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_001786a4:;
    {
        cpu->r[4] = rd16(cpu->r[13] + + 0x46u);
    }
L_001786a8:;
    {
        cpu->r[14] = 0x001786acu; fn_0018ba6c(cpu);
    }
L_001786ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001786b0:;
    {
        cpu->r[14] = 0x001786b4u; fn_0017951c(cpu);
    }
L_001786b4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[4]);
    }
L_001786b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001786bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001786c0:;
    {
        wr16(cpu->r[13] + + 0x3cu, cpu->r[4]);
    }
L_001786c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001786c8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_001786cc:;
    {
        wr32(cpu->r[2] + + 0x548u, cpu->r[5]);
    }
L_001786d0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001786d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001786fc;
        }
    }
L_001786d8:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_001786dc:;
    {
        cpu->r[0] = (uint32_t)((int32_t)(int16_t)(cpu->r[4] & 0xffff) * (int32_t)(int16_t)(cpu->r[0] & 0xffff));
    }
L_001786e0:;
    {
        cpu->r[14] = 0x001786e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001786e4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_001786e8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001786ec:;
    {
        cpu->r[14] = 0x001786f0u; fn_0018ba6c(cpu);
    }
L_001786f0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001786f4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_001786f8:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_001786fc:;
    {
        cpu->r[8] = rd16(cpu->r[13] + + 0x46u);
    }
L_00178700:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00178704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178d00;
        }
    }
L_00178708:;
    {
        cpu->r[2] = rd32(0x00178710u + + 0x650u);
    }
L_0017870c:;
    {
        cpu->r[1] = 0x0000869fu;
    }
L_00178710:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00178714:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00178718:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178720u, cpu->r[2], 0, 0);
    }
L_0017871c:;
    {
        cpu->r[0] = rd32(0x00178724u + + 0x640u);
    }
L_00178720:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000074u, 0, 0);
    }
L_00178724:;
    {
        cpu->r[1] = rd32(0x0017872cu + + 0x63cu);
    }
L_00178728:;
    {
        cpu->r[3] = rd32(0x00178730u + + 0x63cu);
    }
L_0017872c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00178730:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00178734:;
    {
        cpu->r[12] = 0x00007961u;
    }
L_00178738:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017873c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00178744u, cpu->r[0], 0, 0);
    }
L_00178740:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178748u, cpu->r[1], 0, 0);
    }
L_00178744:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017874cu, cpu->r[3], 0, 0);
    }
L_00178748:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xfffeu << 16);
    }
L_0017874c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000068u, 0, 0);
    }
L_00178750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000074u, 0, 0);
    }
L_00178754:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000074u, 0, 0);
    }
L_00178758:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0017875c:;
    {
        cpu->r[11] = 0x00000004u;
    }
L_00178760:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00178764:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00178768:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_0017876c:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_00178770:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00178774:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00178778:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0017877c:;
    {
        goto L_00178918;
    }
L_00178780:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178784:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001787c4;
        }
    }
L_00178788:;
    {
        cpu->r[1] = rd32(0x00178790u + + 0x5e0u);
    }
L_0017878c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178790:;
    {
        cpu->r[12] = rd32(0x00178798u + + 0x5dcu);
    }
L_00178794:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178798:;
    {
        cpu->r[2] = rd32(0x001787a0u + + 0x5d8u);
    }
L_0017879c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001787a4u, cpu->r[1], 0, 0);
    }
L_001787a0:;
    {
        cpu->r[3] = rd32(0x001787a8u + + 0x5d4u);
    }
L_001787a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001787acu, cpu->r[12], 0, 0);
    }
L_001787a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001787b0u, cpu->r[2], 0, 0);
    }
L_001787ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_001787b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001787b8u, cpu->r[3], 0, 0);
    }
L_001787b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001787b8:;
    {
        cpu->r[14] = 0x001787bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001787bc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_001787c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001787c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001787c8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x8u);
    }
L_001787cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001787d0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001787d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_001787d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178c60;
        }
    }
L_001787dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001787e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00178820;
        }
    }
L_001787e4:;
    {
        cpu->r[1] = rd32(0x001787ecu + + 0x594u);
    }
L_001787e8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001787ec:;
    {
        cpu->r[12] = rd32(0x001787f4u + + 0x590u);
    }
L_001787f0:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_001787f4:;
    {
        cpu->r[2] = rd32(0x001787fcu + + 0x58cu);
    }
L_001787f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178800u, cpu->r[1], 0, 0);
    }
L_001787fc:;
    {
        cpu->r[3] = rd32(0x00178804u + + 0x588u);
    }
L_00178800:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178808u, cpu->r[12], 0, 0);
    }
L_00178804:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017880cu, cpu->r[2], 0, 0);
    }
L_00178808:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_0017880c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178814u, cpu->r[3], 0, 0);
    }
L_00178810:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178814:;
    {
        cpu->r[14] = 0x00178818u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178818:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_0017881c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178820:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00178824:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00178828:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017882c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 1);
    }
L_00178830:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = cpu->r[12];
        }
    }
L_00178834:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00178cb0;
        }
    }
L_00178838:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0017883c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017887c;
        }
    }
L_00178840:;
    {
        cpu->r[1] = rd32(0x00178848u + + 0x548u);
    }
L_00178844:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178848:;
    {
        cpu->r[12] = rd32(0x00178850u + + 0x544u);
    }
L_0017884c:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178850:;
    {
        cpu->r[2] = rd32(0x00178858u + + 0x540u);
    }
L_00178854:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017885cu, cpu->r[1], 0, 0);
    }
L_00178858:;
    {
        cpu->r[3] = rd32(0x00178860u + + 0x53cu);
    }
L_0017885c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178864u, cpu->r[12], 0, 0);
    }
L_00178860:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178868u, cpu->r[2], 0, 0);
    }
L_00178864:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178868:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178870u, cpu->r[3], 0, 0);
    }
L_0017886c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178870:;
    {
        cpu->r[14] = 0x00178874u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178874:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178878:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_0017887c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00178880:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x4u);
    }
L_00178884:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00178888:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0017888c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = cpu->r[1];
        }
    }
L_00178890:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178c10;
        }
    }
L_00178894:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178898:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001788d4;
        }
    }
L_0017889c:;
    {
        cpu->r[1] = rd32(0x001788a4u + + 0x4fcu);
    }
L_001788a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001788a4:;
    {
        cpu->r[12] = rd32(0x001788acu + + 0x4f8u);
    }
L_001788a8:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_001788ac:;
    {
        cpu->r[2] = rd32(0x001788b4u + + 0x4f4u);
    }
L_001788b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001788b8u, cpu->r[1], 0, 0);
    }
L_001788b4:;
    {
        cpu->r[3] = rd32(0x001788bcu + + 0x4f0u);
    }
L_001788b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001788c0u, cpu->r[12], 0, 0);
    }
L_001788bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001788c4u, cpu->r[2], 0, 0);
    }
L_001788c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_001788c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001788ccu, cpu->r[3], 0, 0);
    }
L_001788c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001788cc:;
    {
        cpu->r[14] = 0x001788d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001788d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001788d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001788d8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001788dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001788e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001788e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001788e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00178b10;
        }
    }
L_001788ec:;
    {
        cpu->r[2] = rd16(cpu->r[13] + + 0x46u);
    }
L_001788f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001788f4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000006u, 0, 0);
    }
L_001788f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_001788fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00178900:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00178b74;
        }
    }
L_00178904:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_00178908:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0017890c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00178910:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_00178914:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_00178918:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_0017891c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00178920:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178954;
        }
    }
L_00178924:;
    {
        cpu->r[3] = 0x00000037u;
    }
L_00178928:;
    {
        cpu->r[1] = rd32(0x00178930u + + 0x480u);
    }
L_0017892c:;
    {
        cpu->r[2] = rd32(0x00178934u + + 0x480u);
    }
L_00178930:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178934:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00178938:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178940u, cpu->r[1], 0, 0);
    }
L_0017893c:;
    {
        cpu->r[3] = rd32(0x00178944u + + 0x474u);
    }
L_00178940:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178948u, cpu->r[2], 0, 0);
    }
L_00178944:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00178948:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178950u, cpu->r[3], 0, 0);
    }
L_0017894c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00178950:;
    {
        cpu->r[14] = 0x00178954u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178954:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00178958:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0017895c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178960:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00178964:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_00178968:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017899c;
        }
    }
L_0017896c:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_00178970:;
    {
        cpu->r[1] = rd32(0x00178978u + + 0x444u);
    }
L_00178974:;
    {
        cpu->r[2] = rd32(0x0017897cu + + 0x444u);
    }
L_00178978:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017897c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00178980:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178988u, cpu->r[1], 0, 0);
    }
L_00178984:;
    {
        cpu->r[3] = rd32(0x0017898cu + + 0x438u);
    }
L_00178988:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178990u, cpu->r[2], 0, 0);
    }
L_0017898c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00178990:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178998u, cpu->r[3], 0, 0);
    }
L_00178994:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00178998:;
    {
        cpu->r[14] = 0x0017899cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017899c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001789a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001789a4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001789a8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001789ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001789b0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + cpu->r[3]);
    }
L_001789b4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001789b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001789bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001789f0;
        }
    }
L_001789c0:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_001789c4:;
    {
        cpu->r[1] = rd32(0x001789ccu + + 0x3fcu);
    }
L_001789c8:;
    {
        cpu->r[2] = rd32(0x001789d0u + + 0x3fcu);
    }
L_001789cc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001789d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001789d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001789dcu, cpu->r[1], 0, 0);
    }
L_001789d8:;
    {
        cpu->r[3] = rd32(0x001789e0u + + 0x3f0u);
    }
L_001789dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001789e4u, cpu->r[2], 0, 0);
    }
L_001789e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001789e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001789ecu, cpu->r[3], 0, 0);
    }
L_001789e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001789ec:;
    {
        cpu->r[14] = 0x001789f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001789f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001789f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_001789f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001789fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_00178a00:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00178a04:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[3] + - 0x2u);
    }
L_00178a08:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_00178a0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178a40;
        }
    }
L_00178a10:;
    {
        cpu->r[3] = 0x0000000du;
    }
L_00178a14:;
    {
        cpu->r[1] = rd32(0x00178a1cu + + 0x3b8u);
    }
L_00178a18:;
    {
        cpu->r[2] = rd32(0x00178a20u + + 0x3b8u);
    }
L_00178a1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178a20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00178a24:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178a2cu, cpu->r[1], 0, 0);
    }
L_00178a28:;
    {
        cpu->r[3] = rd32(0x00178a30u + + 0x3acu);
    }
L_00178a2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178a34u, cpu->r[2], 0, 0);
    }
L_00178a30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00178a34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178a3cu, cpu->r[3], 0, 0);
    }
L_00178a38:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00178a3c:;
    {
        cpu->r[14] = 0x00178a40u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178a40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00178a44:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178a48:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00178a4c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + cpu->r[11]);
    }
L_00178a50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00178a54:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[9]);
    }
L_00178a58:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[12]);
    }
L_00178a5c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00178a60:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[2]);
    }
L_00178a64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178aa0;
        }
    }
L_00178a68:;
    {
        cpu->r[1] = rd32(0x00178a70u + + 0x370u);
    }
L_00178a6c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178a70:;
    {
        cpu->r[12] = rd32(0x00178a78u + + 0x36cu);
    }
L_00178a74:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178a78:;
    {
        cpu->r[2] = rd32(0x00178a80u + + 0x368u);
    }
L_00178a7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178a84u, cpu->r[1], 0, 0);
    }
L_00178a80:;
    {
        cpu->r[3] = rd32(0x00178a88u + + 0x364u);
    }
L_00178a84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178a8cu, cpu->r[12], 0, 0);
    }
L_00178a88:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178a90u, cpu->r[2], 0, 0);
    }
L_00178a8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178a90:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178a98u, cpu->r[3], 0, 0);
    }
L_00178a94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178a98:;
    {
        cpu->r[14] = 0x00178a9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178a9c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178aa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178aa4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00178aa8:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[8] = v;
    }
L_00178aac:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00178ab0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_00178ab4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_00178ab8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00178780;
        }
    }
L_00178abc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178ac0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001787c4;
        }
    }
L_00178ac4:;
    {
        cpu->r[1] = rd32(0x00178accu + + 0x324u);
    }
L_00178ac8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178acc:;
    {
        cpu->r[12] = rd32(0x00178ad4u + + 0x320u);
    }
L_00178ad0:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178ad4:;
    {
        cpu->r[2] = rd32(0x00178adcu + + 0x31cu);
    }
L_00178ad8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178ae0u, cpu->r[1], 0, 0);
    }
L_00178adc:;
    {
        cpu->r[3] = rd32(0x00178ae4u + + 0x318u);
    }
L_00178ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178ae8u, cpu->r[12], 0, 0);
    }
L_00178ae4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178aecu, cpu->r[2], 0, 0);
    }
L_00178ae8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178aec:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178af4u, cpu->r[3], 0, 0);
    }
L_00178af0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178af4:;
    {
        cpu->r[14] = 0x00178af8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178af8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178afc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178b00:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00178b04:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[8] = v;
    }
L_00178b08:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00178b0c:;
    {
        goto L_00178780;
    }
L_00178b10:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178b14:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00178b18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001788ec;
        }
    }
L_00178b1c:;
    {
        cpu->r[1] = rd32(0x00178b24u + + 0x2dcu);
    }
L_00178b20:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178b24:;
    {
        cpu->r[12] = rd32(0x00178b2cu + + 0x2d8u);
    }
L_00178b28:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178b2c:;
    {
        cpu->r[2] = rd32(0x00178b34u + + 0x2d4u);
    }
L_00178b30:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178b38u, cpu->r[1], 0, 0);
    }
L_00178b34:;
    {
        cpu->r[3] = rd32(0x00178b3cu + + 0x2d0u);
    }
L_00178b38:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178b40u, cpu->r[12], 0, 0);
    }
L_00178b3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178b44u, cpu->r[2], 0, 0);
    }
L_00178b40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178b44:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178b4cu, cpu->r[3], 0, 0);
    }
L_00178b48:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178b4c:;
    {
        cpu->r[14] = 0x00178b50u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178b50:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178b54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00178b58:;
    {
        cpu->r[2] = rd16(cpu->r[13] + + 0x46u);
    }
L_00178b5c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000006u, 0, 0);
    }
L_00178b60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00178b64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000003u, 0, 0);
    }
L_00178b68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00178b6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00178b70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00178904;
        }
    }
L_00178b74:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00178b78:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_00178b7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_00178b80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00178b84:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x548u);
    }
L_00178b88:;
    {
        cpu->r[14] = 0x00178b8cu; fn_0017a130(cpu);
    }
L_00178b8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00178b90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00178b94:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x548u);
    }
L_00178b98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00178b9c:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[10]);
    }
L_00178ba0:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[9]);
    }
L_00178ba4:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[7]);
    }
L_00178ba8:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[8]);
    }
L_00178bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178bf4;
        }
    }
L_00178bb0:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_00178bb4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00178bb8:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_00178bbc:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00178bc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00178bc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00178bf4;
        }
    }
L_00178bc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178bcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00178bd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178be0;
        }
    }
L_00178bd4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00178bd8:;
    {
        cpu->r[14] = 0x00178bdcu; fn_0018ba60(cpu);
    }
L_00178bdc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00178be0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00178be4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[4]);
    }
L_00178be8:;
    {
        wr16(cpu->r[13] + + 0x3cu, cpu->r[4]);
    }
L_00178bec:;
    {
        cpu->r[14] = 0x00178bf0u; fn_0018ba20(cpu);
    }
L_00178bf0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_00178bf4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00178bf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00178bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178c08;
        }
    }
L_00178c00:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00178c04:;
    {
        cpu->r[14] = 0x00178c08u; fn_0018ba60(cpu);
    }
L_00178c08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00178c0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00178c10u)) return;
    }
L_00178c10:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178c14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001788d4;
        }
    }
L_00178c18:;
    {
        cpu->r[1] = rd32(0x00178c20u + + 0x1f0u);
    }
L_00178c1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178c20:;
    {
        cpu->r[12] = rd32(0x00178c28u + + 0x1ecu);
    }
L_00178c24:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178c28:;
    {
        cpu->r[2] = rd32(0x00178c30u + + 0x1e8u);
    }
L_00178c2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178c34u, cpu->r[1], 0, 0);
    }
L_00178c30:;
    {
        cpu->r[3] = rd32(0x00178c38u + + 0x1e4u);
    }
L_00178c34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178c3cu, cpu->r[12], 0, 0);
    }
L_00178c38:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178c40u, cpu->r[2], 0, 0);
    }
L_00178c3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178c40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178c48u, cpu->r[3], 0, 0);
    }
L_00178c44:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178c48:;
    {
        cpu->r[14] = 0x00178c4cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178c4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178c50:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178c54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00178c58:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x4u);
    }
L_00178c5c:;
    {
        goto L_00178894;
    }
L_00178c60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178c64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00178820;
        }
    }
L_00178c68:;
    {
        cpu->r[1] = rd32(0x00178c70u + + 0x1b0u);
    }
L_00178c6c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178c70:;
    {
        cpu->r[12] = rd32(0x00178c78u + + 0x1acu);
    }
L_00178c74:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178c78:;
    {
        cpu->r[2] = rd32(0x00178c80u + + 0x1a8u);
    }
L_00178c7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178c84u, cpu->r[1], 0, 0);
    }
L_00178c80:;
    {
        cpu->r[3] = rd32(0x00178c88u + + 0x1a4u);
    }
L_00178c84:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178c8cu, cpu->r[12], 0, 0);
    }
L_00178c88:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178c90u, cpu->r[2], 0, 0);
    }
L_00178c8c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178c90:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178c98u, cpu->r[3], 0, 0);
    }
L_00178c94:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178c98:;
    {
        cpu->r[14] = 0x00178c9cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178c9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178ca0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178ca4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00178ca8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x8u);
    }
L_00178cac:;
    {
        goto L_001787dc;
    }
L_00178cb0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00178cb4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017887c;
        }
    }
L_00178cb8:;
    {
        cpu->r[1] = rd32(0x00178cc0u + + 0x170u);
    }
L_00178cbc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178cc0:;
    {
        cpu->r[12] = rd32(0x00178cc8u + + 0x16cu);
    }
L_00178cc4:;
    {
        cpu->r[14] = 0x00000037u;
    }
L_00178cc8:;
    {
        cpu->r[2] = rd32(0x00178cd0u + + 0x168u);
    }
L_00178ccc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178cd4u, cpu->r[1], 0, 0);
    }
L_00178cd0:;
    {
        cpu->r[3] = rd32(0x00178cd8u + + 0x164u);
    }
L_00178cd4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178cdcu, cpu->r[12], 0, 0);
    }
L_00178cd8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178ce0u, cpu->r[2], 0, 0);
    }
L_00178cdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000068u, 0, 0);
    }
L_00178ce0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178ce8u, cpu->r[3], 0, 0);
    }
L_00178ce4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178ce8:;
    {
        cpu->r[14] = 0x00178cecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178cec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_00178cf0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x3cu);
    }
L_00178cf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00178cf8:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x8u);
    }
L_00178cfc:;
    {
        goto L_00178838;
    }
L_00178d00:;
    {
        cpu->r[9] = 0x00007961u;
    }
L_00178d04:;
    {
        cpu->r[10] = 0x0000f2c2u;
    }
L_00178d08:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0xfffeu << 16);
    }
L_00178d0c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0xfffcu << 16);
    }
L_00178d10:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_00178d14:;
    {
        goto L_00178b7c;
    }
L_00178d18:;
    {
        cpu->r[1] = rd32(0x00178d20u + + 0x120u);
    }
L_00178d1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178d20:;
    {
        cpu->r[12] = rd32(0x00178d28u + + 0x11cu);
    }
L_00178d24:;
    {
        cpu->r[14] = 0x00000141u;
    }
L_00178d28:;
    {
        cpu->r[2] = rd32(0x00178d30u + + 0x118u);
    }
L_00178d2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178d34u, cpu->r[1], 0, 0);
    }
L_00178d30:;
    {
        cpu->r[3] = rd32(0x00178d38u + + 0x114u);
    }
L_00178d34:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178d3cu, cpu->r[12], 0, 0);
    }
L_00178d38:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178d40u, cpu->r[2], 0, 0);
    }
L_00178d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005cu, 0, 0);
    }
L_00178d40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178d48u, cpu->r[3], 0, 0);
    }
L_00178d44:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178d48:;
    {
        cpu->r[14] = 0x00178d4cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178d4c:;
    {
        goto L_00178654;
    }
}

/* _ZN8CCarBase13GetSegmentIdxEv @ 00178e50 (arm) */
void fn_00178e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00178e50:;
    {
        cpu->r[3] = rd32(0x00178e58u + + 0x1acu);
    }
L_00178e54:;
    {
        cpu->r[2] = rd32(0x00178e5cu + + 0x1acu);
    }
L_00178e58:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178e60u, cpu->r[3], 0, 0);
    }
L_00178e5c:;
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
L_00178e60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00178e64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00178e68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00178e6c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00178e70:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00178e74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00178e78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00178e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178fbc;
        }
    }
L_00178e80:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00178e84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00178e88:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00178e8c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00178e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00178fbc;
        }
    }
L_00178e94:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00178e98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00178e9c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00178ea0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00178fcc;
        }
    }
L_00178ea4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00178ea8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00178eac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00178eb0:;
    {
        cpu->r[14] = 0x00178eb4u; fn_00180c78(cpu);
    }
L_00178eb4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00178eb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00178ebc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_00178ec0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
        }
    }
L_00178ec4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00178ec8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00178ecc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00178f04;
        }
    }
L_00178ed0:;
    {
        cpu->r[1] = rd32(0x00178ed8u + + 0x134u);
    }
L_00178ed4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178ed8:;
    {
        cpu->r[12] = rd32(0x00178ee0u + + 0x130u);
    }
L_00178edc:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_00178ee0:;
    {
        cpu->r[2] = rd32(0x00178ee8u + + 0x12cu);
    }
L_00178ee4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178eecu, cpu->r[1], 0, 0);
    }
L_00178ee8:;
    {
        cpu->r[3] = rd32(0x00178ef0u + + 0x128u);
    }
L_00178eec:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178ef4u, cpu->r[12], 0, 0);
    }
L_00178ef0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178ef8u, cpu->r[2], 0, 0);
    }
L_00178ef4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000080u, 0, 0);
    }
L_00178ef8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178f00u, cpu->r[3], 0, 0);
    }
L_00178efc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178f00:;
    {
        cpu->r[14] = 0x00178f04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178f04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00178f08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00178f0c:;
    {
        cpu->r[14] = 0x00178f10u; fn_00180c78(cpu);
    }
L_00178f10:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_00178f14:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00178f18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00178f1c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00178f20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00178f24:;
    {
        goto L_00178f2c;
    }
L_00178f28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00178f2c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00178f30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00178f34:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00178f38:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00178f3c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x8u);
    }
L_00178f40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00178f44:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x0000000cu;
        cpu->r[10] = rd32(cpu->r[7]);
        cpu->r[7] = wb_tmp;
    }
L_00178f48:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00178f4c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00178f50:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00178f54:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00178f58:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_00178f5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_00178f60:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00178f64:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00178f68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00178f6c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00178f70:;
    {
        cpu->r[14] = 0x00178f74u; fn_00184e24(cpu);
    }
L_00178f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00178f78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00178f28;
        }
    }
L_00178f7c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000009u, 1, 1);
    }
L_00178f80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00178fc0;
        }
    }
L_00178f84:;
    {
        cpu->r[1] = rd32(0x00178f8cu + + 0x90u);
    }
L_00178f88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178f8c:;
    {
        cpu->r[12] = rd32(0x00178f94u + + 0x8cu);
    }
L_00178f90:;
    {
        cpu->r[14] = 0x00000fc3u;
    }
L_00178f94:;
    {
        cpu->r[2] = rd32(0x00178f9cu + + 0x88u);
    }
L_00178f98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178fa0u, cpu->r[1], 0, 0);
    }
L_00178f9c:;
    {
        cpu->r[3] = rd32(0x00178fa4u + + 0x84u);
    }
L_00178fa0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178fa8u, cpu->r[12], 0, 0);
    }
L_00178fa4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178facu, cpu->r[2], 0, 0);
    }
L_00178fa8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000090u, 0, 0);
    }
L_00178fac:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178fb4u, cpu->r[3], 0, 0);
    }
L_00178fb0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178fb4:;
    {
        cpu->r[14] = 0x00178fb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00178fb8:;
    {
        goto L_00178fc0;
    }
L_00178fbc:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00178fc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00178fc4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00178fc8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00178fccu)) return;
    }
L_00178fcc:;
    {
        cpu->r[1] = rd32(0x00178fd4u + + 0x58u);
    }
L_00178fd0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00178fd4:;
    {
        cpu->r[12] = rd32(0x00178fdcu + + 0x54u);
    }
L_00178fd8:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_00178fdc:;
    {
        cpu->r[2] = rd32(0x00178fe4u + + 0x50u);
    }
L_00178fe0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00178fe8u, cpu->r[1], 0, 0);
    }
L_00178fe4:;
    {
        cpu->r[3] = rd32(0x00178fecu + + 0x4cu);
    }
L_00178fe8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00178ff0u, cpu->r[12], 0, 0);
    }
L_00178fec:;
    {
        cpu->r[2] = add_flags(cpu, 0x00178ff4u, cpu->r[2], 0, 0);
    }
L_00178ff0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000080u, 0, 0);
    }
L_00178ff4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00178ffcu, cpu->r[3], 0, 0);
    }
L_00178ff8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00178ffc:;
    {
        cpu->r[14] = 0x00179000u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00179000:;
    {
        goto L_00178ea4;
    }
}

/* _ZN8CCarBase18UpdatePushVelocityEv @ 0017903c (arm) */
void fn_0017903c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017903c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_00179040:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x000003acu, 0, 0);
    }
L_00179044:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00179048:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0017904c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00179050:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00179054:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00179058:;
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
L_0017905c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00179060:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00179064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179068:;
    {
        cpu->r[14] = 0x00179070u;
    }
L_0017906c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00179070u)) return;
    }
L_00179070:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179184;
        }
    }
L_00179078:;
    {
        cpu->r[5] = 0x0000005au;
    }
L_0017907c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00179084u + + 0x170u);
    }
L_00179080:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x490u);
    }
L_00179084:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179164;
        }
    }
L_0017908c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3c4u);
    }
L_00179090:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179094:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179140;
        }
    }
L_00179098:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0017909c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001790a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3c0u);
    }
L_001790a4:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001790a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3bcu);
    }
L_001790ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001790b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3b8u);
    }
L_001790b4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_001790b8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5]; cpu->r[1] = v;
    }
L_001790bc:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_001790c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001790c8u + + 0x130u);
    }
L_001790c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[5] = v;
    }
L_001790c8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[6] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_001790cc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001790d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[0] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_001790d4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[0] = v;
    }
L_001790d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[6] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_001790dc:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_001790e0:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001790e4:;
    {
        wr32(cpu->r[4] + + 0x3c0u, cpu->r[2]);
    }
L_001790e8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_001790ec:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[14], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_001790f0:;
    {
        wr32(cpu->r[4] + + 0x3b8u, cpu->r[1]);
    }
L_001790f4:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_001790f8:;
    {
        wr32(cpu->r[4] + + 0x3bcu, cpu->r[5]);
    }
L_001790fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00179100:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00179104:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179108:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017910c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017916c;
        }
    }
L_00179110:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00179114:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179118:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0017911c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00179120:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00179124:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00179128:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_0017912c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00179130:;
    {
        cpu->r[14] = 0x00179134u; guest_call(cpu, cpu->r[3]);
    }
L_00179134:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00179138:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0017913c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00179140u)) return;
    }
L_00179140:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179144:;
    {
        cpu->r[14] = 0x00179148u; fn_001734ac(cpu);
    }
L_00179148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017914c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179164;
        }
    }
L_00179150:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x6au);
    }
L_00179154:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179158:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0017915c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[2]);
        }
    }
L_00179160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179098;
        }
    }
L_00179164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3c4u);
    }
L_00179168:;
    {
        goto L_00179098;
    }
L_0017916c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00179170:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179174:;
    {
        cpu->r[14] = 0x0017917cu;
    }
L_00179178:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017917cu)) return;
    }
L_0017917c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3c4u);
    }
L_00179180:;
    {
        goto L_00179110;
    }
L_00179184:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00179188:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017918c:;
    {
        cpu->r[14] = 0x00179194u;
    }
L_00179190:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00179194u)) return;
    }
L_00179194:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179198:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001791e8;
        }
    }
L_0017919c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001791a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001791a4:;
    {
        cpu->r[14] = 0x001791acu;
    }
L_001791a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001791acu)) return;
    }
L_001791ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001791b0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001791b8u + + 0x44u);
    }
L_001791b4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001791b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001791bc:;
    {
        cpu->r[14] = 0x001791c4u;
    }
L_001791c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001791c4u)) return;
    }
L_001791c4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001791c8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001791cc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001791d0:;
    {
        vfp_vdiv(cpu, 14, 16, 15);
    }
L_001791d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001791dcu + + 0x24u);
    }
L_001791d8:;
    {
        vfp_vmla(cpu, 17, 14, 15);
    }
L_001791dc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,17);
    }
L_001791e0:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001791e4:;
    {
        goto L_00179080;
    }
L_001791e8:;
    {
        cpu->r[5] = 0x00000050u;
    }
L_001791ec:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001791f4u + + 0x8u);
    }
L_001791f0:;
    {
        goto L_00179080;
    }
}

/* _ZN8CCarBase14UpdateVelocityEv @ 00179204 (arm) */
void fn_00179204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179204:;
    {
        cpu->r[12] = rd32(0x0017920cu + + 0x174u);
    }
L_00179208:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000003acu, 0, 0);
    }
L_0017920c:;
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
L_00179210:;
    {
        cpu->r[5] = rd32(0x00179218u + + 0x16cu);
    }
L_00179214:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017921cu, cpu->r[12], 0, 0);
    }
L_00179218:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017921c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_00179220:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_00179224:;
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
L_00179228:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_0017922c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00179230:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3c8u);
    }
L_00179234:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00179238:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_0017923c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00179240:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x428u);
    }
L_00179244:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x418u);
    }
L_00179248:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_0017924c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 0);
    }
L_00179250:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00179254:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00179258:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x3d0u);
    }
L_0017925c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3ccu);
    }
L_00179260:;
    {
        uint32_t v = cpu->r[7] * cpu->r[8]; cpu->r[8] = v;
    }
L_00179264:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_00179268:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_0017926c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_00179270:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00179274:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00179278:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x474u);
    }
L_0017927c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2]; cpu->r[2] = v;
    }
L_00179280:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[12], cpu->r[11], 1, 0);
    }
L_00179284:;
    {
        wr32(cpu->r[4] + + 0x468u, cpu->r[8]);
    }
L_00179288:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 3u, &shc), cpu->r[0], 1, 0);
    }
L_0017928c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3b8u);
    }
L_00179290:;
    {
        uint32_t v = cpu->r[7] * cpu->r[11]; cpu->r[11] = v;
    }
L_00179294:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3bcu);
    }
L_00179298:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_0017929c:;
    {
        wr32(cpu->r[4] + + 0x470u, cpu->r[2]);
    }
L_001792a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001792a4:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[7] = v;
    }
L_001792a8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_001792ac:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[8] = v;
    }
L_001792b0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_001792b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x47cu);
    }
L_001792b8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001792bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001792c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[7];
        }
    }
L_001792c4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x468u);
    }
L_001792c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x478u);
    }
L_001792cc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3c0u);
    }
L_001792d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001792d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x470u);
    }
L_001792d8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 3u, &shc), cpu->r[2], 1, 0);
    }
L_001792dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001792e0:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_001792e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_001792e8:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[8] = v;
    }
L_001792ec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_001792f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_001792f4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001792f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001792fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000007u, 0, 0);
    }
L_00179300:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179304:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x00000007u, 0, 0);
    }
L_00179308:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[9];
        }
    }
L_0017930c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179310:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_00179314:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_00179318:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017931c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_00179320:;
    {
        cpu->r[8] = 0x0000afc7u;
    }
L_00179324:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00179328:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
    }
L_0017932c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_00179330:;
    {
        wr32(cpu->r[4] + + 0x474u, cpu->r[0]);
    }
L_00179334:;
    {
        wr32(cpu->r[4] + + 0x478u, cpu->r[1]);
    }
L_00179338:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_0017933c:;
    {
        wr32(cpu->r[4] + + 0x46cu, cpu->r[11]);
    }
L_00179340:;
    {
        wr32(cpu->r[4] + + 0x47cu, cpu->r[2]);
    }
L_00179344:;
    {
        wr32(cpu->r[4] + + 0x430u, cpu->r[6]);
    }
L_00179348:;
    {
        wr32(cpu->r[4] + + 0x42cu, cpu->r[12]);
    }
L_0017934c:;
    {
        wr32(cpu->r[4] + + 0x428u, cpu->r[5]);
    }
L_00179350:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00179370;
        }
    }
L_00179354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179358:;
    {
        cpu->r[14] = 0x0017935cu; fn_0018572c(cpu);
    }
L_0017935c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00179360:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003c8u, 0, 0);
    }
L_00179364:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[0]);
    }
L_00179368:;
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
L_0017936c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00179370:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179374:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00179378:;
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
L_0017937c:;
    {
        return fn_0017903c(cpu);
    }
}

/* _ZN8CCarBase17ComputeCarBalanceERiS0_S0_ @ 00179388 (arm) */
void fn_00179388(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179388:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017938c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00179390:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x9cu);
    }
L_00179394:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x140u);
    }
L_00179398:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_0017939c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_001793a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa0u);
    }
L_001793a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x144u);
    }
L_001793a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001793ac:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x148u);
    }
L_001793b0:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[5]);
    }
L_001793b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001793b8:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_001793bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_001793c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_001793c4:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[12]);
    }
L_001793c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_001793cc:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001793d0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x398u);
    }
L_001793d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001793d8:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[0]);
    }
L_001793dc:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001793e0:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_001793e4:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_001793e8:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001793ec:;
    {
        wr32(cpu->r[4] + + 0x140u, cpu->r[8]);
    }
L_001793f0:;
    {
        wr32(cpu->r[4] + + 0x144u, cpu->r[7]);
    }
L_001793f4:;
    {
        wr32(cpu->r[4] + + 0x148u, cpu->r[6]);
    }
L_001793f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001794a0;
        }
    }
L_001793fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x94u);
    }
L_00179400:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_00179404:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_00179408:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_0017940c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_00179410:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00179414:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[12]; cpu->r[5] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00179418:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017941c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_00179420:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_00179424:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_00179428:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0017942c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa0u);
    }
L_00179430:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_00179434:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_00179438:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0017943c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00179440:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_00179444:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_00179448:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[5]);
    }
L_0017944c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00179450:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[12]);
    }
L_00179454:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[0]);
    }
L_00179458:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3a8u);
    }
L_0017945c:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_00179460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179478;
        }
    }
L_00179464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00179468:;
    {
        cpu->r[14] = 0x0017946cu; fn_00173250(cpu);
    }
L_0017946c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x9cu);
    }
L_00179470:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xa0u);
    }
L_00179474:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_00179478:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_0017947c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_00179480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00179484:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_00179488:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0017948c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00179490:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[5]);
    }
L_00179494:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[12]);
    }
L_00179498:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[0]);
    }
L_0017949c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001794a0u)) return;
    }
L_001794a0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x39cu);
    }
L_001794a4:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001794a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001793fc;
        }
    }
L_001794ac:;
    {
        goto L_00179458;
    }
}

/* _ZN5CMeshC2Ev @ 001794b0 (arm) */
void fn_001794b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001794b0:;
    {
        cpu->r[1] = rd32(0x001794b8u + + 0x5cu);
    }
L_001794b4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001794b8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001794bc:;
    {
        cpu->r[4] = rd32(0x001794c4u + + 0x54u);
    }
L_001794c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001794c8u, cpu->r[1], 0, 0);
    }
L_001794c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001794c8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001794cc:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_001794d0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_001794d4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001794d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001794dc:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[2]);
    }
L_001794e0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_001794e4:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_001794e8:;
    {
        wr16(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001794ec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001794f0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001794f4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001794f8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_001794fc:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00179500:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00179504:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00179508:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_0017950c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00179510:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN5CMeshC1Ev @ 0017951c (arm) */
void fn_0017951c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017951c:;
    {
        cpu->r[1] = rd32(0x00179524u + + 0x5cu);
    }
L_00179520:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00179524:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00179528:;
    {
        cpu->r[4] = rd32(0x00179530u + + 0x54u);
    }
L_0017952c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00179534u, cpu->r[1], 0, 0);
    }
L_00179530:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00179534:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00179538:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_0017953c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_00179540:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00179544:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00179548:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[2]);
    }
L_0017954c:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00179550:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_00179554:;
    {
        wr16(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00179558:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0017955c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00179560:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00179564:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_00179568:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_0017956c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00179570:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00179574:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00179578:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0017957c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_51 @ 00179588 (arm) */
void fn_00179588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179588:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017958c:;
    {
        cpu->r[6] = rd32(0x00179594u + + 0xb8u);
    }
L_00179590:;
    {
        cpu->r[12] = rd32(0x00179598u + + 0xb8u);
    }
L_00179594:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00179598:;
    {
        cpu->r[6] = add_flags(cpu, 0x001795a0u, cpu->r[6], 0, 0);
    }
L_0017959c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001795a0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001795a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000610u, 0, 0);
    }
L_001795a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_001795ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001795b0:;
    {
        wr8(cpu->r[1], cpu->r[0]);
    }
L_001795b4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001795b8:;
    {
        wr32(cpu->r[3] + - 0xcu, cpu->r[4]);
    }
L_001795bc:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001795c0:;
    {
        wr16(cpu->r[3] + - 0x8u, cpu->r[4]);
    }
L_001795c4:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[4]);
    }
L_001795c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001795cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001795d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001795b8;
        }
    }
L_001795d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_001795d8:;
    {
        cpu->r[2] = rd32(0x001795e0u + + 0x74u);
    }
L_001795dc:;
    {
        cpu->r[7] = rd32(0x001795e4u + + 0x74u);
    }
L_001795e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001795e4:;
    {
        wr32(cpu->r[3] + + 0x608u, cpu->r[4]);
    }
L_001795e8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001795ec:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001795f0:;
    {
        cpu->r[14] = 0x001795f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001795f4:;
    {
        cpu->r[12] = rd32(0x001795fcu + + 0x60u);
    }
L_001795f8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001795fc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00179600:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000610u, 0, 0);
    }
L_00179604:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_00179608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0017960c:;
    {
        wr8(cpu->r[0], cpu->r[4]);
    }
L_00179610:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_00179614:;
    {
        wr32(cpu->r[2] + - 0xcu, cpu->r[3]);
    }
L_00179618:;
    {
        wr16(cpu->r[2] + - 0x8u, cpu->r[3]);
    }
L_0017961c:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[3]);
    }
L_00179620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00179624:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00179628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179614;
        }
    }
L_0017962c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_00179630:;
    {
        cpu->r[1] = rd32(0x00179638u + + 0x28u);
    }
L_00179634:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00179638:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0017963c:;
    {
        wr32(cpu->r[12] + + 0x608u, cpu->r[3]);
    }
L_00179640:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00179644:;
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
L_00179648:;
    {
        imp___aeabi_atexit(cpu); /* tail __aeabi_atexit */ return;
    }
}

/* _ZN21Vector4sArrayDatabaseD1Ev @ 00179664 (arm) */
void fn_00179664(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179664:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00179668:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 1);
    }
L_0017966c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00179670:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000600u, 0, 0);
        }
    }
L_00179674:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_00179678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001796d4;
        }
    }
L_0017967c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_00179680:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001796c8;
        }
    }
L_00179688:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_0017968c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179690:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179694:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00179698:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017969c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001796c8;
        }
    }
L_001796a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_001796a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001796a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001796b4;
        }
    }
L_001796ac:;
    {
        cpu->r[14] = 0x001796b0u; fn_0018ba60(cpu);
    }
L_001796b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001796b4:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[5]);
    }
L_001796b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001796bc:;
    {
        wr16(cpu->r[4] + - 0x8u, cpu->r[5]);
    }
L_001796c0:;
    {
        cpu->r[14] = 0x001796c4u; fn_0018ba20(cpu);
    }
L_001796c4:;
    {
        wr32(cpu->r[4] + - 0xcu, cpu->r[5]);
    }
L_001796c8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_001796cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001796d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017967c;
        }
    }
L_001796d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001796d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001796dcu)) return;
    }
}

/* _ZN24AnimVector3ArrayDatabaseD1Ev @ 001796dc (arm) */
void fn_001796dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001796dc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001796e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 1);
    }
L_001796e4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001796e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x00000600u, 0, 0);
        }
    }
L_001796ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001796f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017974c;
        }
    }
L_001796f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_001796f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001796fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179740;
        }
    }
L_00179700:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179704:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179708:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_0017970c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00179710:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179714:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179740;
        }
    }
L_00179718:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_0017971c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017972c;
        }
    }
L_00179724:;
    {
        cpu->r[14] = 0x00179728u; fn_0018ba60(cpu);
    }
L_00179728:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_0017972c:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[5]);
    }
L_00179730:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179734:;
    {
        wr16(cpu->r[4] + - 0x8u, cpu->r[5]);
    }
L_00179738:;
    {
        cpu->r[14] = 0x0017973cu; fn_0018ba20(cpu);
    }
L_0017973c:;
    {
        wr32(cpu->r[4] + - 0xcu, cpu->r[5]);
    }
L_00179740:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_00179744:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_00179748:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001796f4;
        }
    }
L_0017974c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00179750:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00179754u)) return;
    }
}

/* _ZN5CMesh15DestroyVerticesEv @ 00179754 (arm) */
void fn_00179754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179754:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x8u);
    }
L_00179758:;
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
L_0017975c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179760:;
    {
        cpu->r[9] = rd32(0x00179768u + + 0x750u);
    }
L_00179764:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00179768:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0017976c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00179774u, cpu->r[9], 0, 0);
    }
L_00179770:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179c08;
        }
    }
L_00179774:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_00179778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017977c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179c00;
        }
    }
L_00179780:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00179b68;
        }
    }
L_00179784:;
    {
        cpu->r[3] = rd32(0x0017978cu + + 0x730u);
    }
L_00179788:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017978c:;
    {
        cpu->r[12] = rd32(0x00179794u + + 0x72cu);
    }
L_00179790:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00179794:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017979cu, cpu->r[3], 0, 0);
    }
L_00179798:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0017979c:;
    {
        cpu->r[3] = rd32(0x001797a4u + + 0x720u);
    }
L_001797a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001797a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001797acu, cpu->r[3], 0, 0);
    }
L_001797a8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001797ac:;
    {
        cpu->r[3] = rd32(0x001797b4u + + 0x714u);
    }
L_001797b0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001797b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001797bcu, cpu->r[3], 0, 0);
    }
L_001797b8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001797bc:;
    {
        cpu->r[3] = rd32(0x001797c4u + + 0x708u);
    }
L_001797c0:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x14u);
    }
L_001797c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001797c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001797cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001797d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_001797d4:;
    {
        cpu->r[3] = rd32(0x001797dcu + + 0x6f4u);
    }
L_001797d8:;
    {
        cpu->r[4] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_001797dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001797e4u, cpu->r[3], 0, 0);
    }
L_001797e0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001797e4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001797e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001797ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00179ac0;
        }
    }
L_001797f0:;
    {
        cpu->r[7] = rd16(cpu->r[8] + + 0x4u);
    }
L_001797f4:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_001797f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001797fc:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[7] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_00179800:;
    {
        cpu->r[7] = (uint32_t)((int16_t)cpu->r[7]);
    }
L_00179804:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00179808:;
    {
        goto L_0017981c;
    }
L_0017980c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00179810:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00179814:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00179818:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179ac0;
        }
    }
L_0017981c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_00179820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00179824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017980c;
        }
    }
L_00179828:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_0017982c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_00179830:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00179834:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00179838:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0017983c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00179840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179850;
        }
    }
L_00179844:;
    {
        cpu->r[14] = 0x00179848u; imp_memcmp(cpu); /* memcmp */
    }
L_00179848:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017984c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017980c;
        }
    }
L_00179850:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00179854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179938;
        }
    }
L_00179858:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017985c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[4] = v;
    }
L_00179860:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_00179864:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00179868:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0017986c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00179870:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00179874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001798d8;
        }
    }
L_0017987c:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179880:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179884:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179888:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_0017988c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001798d8;
        }
    }
L_00179894:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
    }
L_00179898:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017989c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001798a4;
        }
    }
L_001798a0:;
    {
        cpu->r[14] = 0x001798a4u; fn_0018ba60(cpu);
    }
L_001798a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001798a8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001798ac:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001798b0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001798b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001798b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001798bc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001798c0:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_001798c4:;
    {
        wr16(cpu->r[7] + + 0xcu, cpu->r[12]);
    }
L_001798c8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_001798cc:;
    {
        cpu->r[14] = 0x001798d0u; fn_0018ba20(cpu);
    }
L_001798d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001798d4:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001798d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001798dc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001798e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001798e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001798e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_001798ec:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_001798f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001798f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001798f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001798fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00179900:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00179904:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179908:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_0017990c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[1]);
        }
    }
L_00179910:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00179914:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[1], cpu->r[2]);
        }
    }
L_00179918:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_0017991c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00179920:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00179924:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_00179928:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0017992c:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0xcu);
    }
L_00179930:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_00179934:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00179938:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0017993c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179940:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[4] = v;
    }
L_00179944:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_00179948:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0017994c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00179950:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00179954:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001799b0;
        }
    }
L_0017995c:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179960:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179964:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179968:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_0017996c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001799b0;
        }
    }
L_00179974:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
    }
L_00179978:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017997c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179984;
        }
    }
L_00179980:;
    {
        cpu->r[14] = 0x00179984u; fn_0018ba60(cpu);
    }
L_00179984:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179988:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0017998c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00179990:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00179994:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00179998:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017999c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[7]);
    }
L_001799a0:;
    {
        wr16(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_001799a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001799a8:;
    {
        cpu->r[14] = 0x001799acu; fn_0018ba20(cpu);
    }
L_001799ac:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_001799b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001799b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001799b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001799bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001799c0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_001799c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001799c8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001799cc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_001799d0:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001799d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001799d8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001799dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179a24;
        }
    }
L_001799e0:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_001799e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001799e8:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_001799ec:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001799f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001799f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179a24;
        }
    }
L_001799f8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_001799fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179a10;
        }
    }
L_00179a04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179a08:;
    {
        cpu->r[14] = 0x00179a0cu; fn_0018ba60(cpu);
    }
L_00179a0c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00179a10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00179a14:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[4]);
    }
L_00179a18:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[4]);
    }
L_00179a1c:;
    {
        cpu->r[14] = 0x00179a20u; fn_0018ba20(cpu);
    }
L_00179a20:;
    {
        wr32(cpu->r[8], cpu->r[4]);
    }
L_00179a24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179a28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00179a2c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00179a30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179a34:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[3]);
    }
L_00179a38:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00179a3c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00179a40:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_00179a44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00179a48:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00179a4c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_00179a50:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00179a54:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00179b68;
        }
    }
L_00179a58:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00179a5c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00179a94;
        }
    }
L_00179a60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00179a64:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00179a68:;
    {
        cpu->r[3] = rd32(0x00179a70u + + 0x464u);
    }
L_00179a6c:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_00179a70:;
    {
        cpu->r[1] = add_flags(cpu, 0x00179a78u, cpu->r[2], 0, 0);
    }
L_00179a74:;
    {
        cpu->r[2] = rd32(0x00179a7cu + + 0x45cu);
    }
L_00179a78:;
    {
        cpu->r[12] = rd32(0x00179a80u + + 0x45cu);
    }
L_00179a7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00179a84u, cpu->r[3], 0, 0);
    }
L_00179a80:;
    {
        cpu->r[2] = add_flags(cpu, 0x00179a88u, cpu->r[2], 0, 0);
    }
L_00179a84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00179a88:;
    {
        cpu->r[12] = add_flags(cpu, 0x00179a90u, cpu->r[12], 0, 0);
    }
L_00179a8c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00179a90:;
    {
        cpu->r[14] = 0x00179a94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00179a94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179a98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00179a9c:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x14u);
    }
L_00179aa0:;
    {
        cpu->r[4] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_00179aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00179aa8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00179aac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00179ab0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00179ab4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_00179ab8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00179abc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001797f0;
        }
    }
L_00179ac0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00179ac4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00179ad4;
        }
    }
L_00179ac8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_00179acc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00179ad0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00179b00;
        }
    }
L_00179ad4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00179ad8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00179adc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00179ae0:;
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
L_00179ae4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00179ae8:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_00179aec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00179af0:;
    {
        cpu->r[14] = 0x00179af4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00179af4:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x14u);
    }
L_00179af8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00179afc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_00179b00:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00179b04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179b50;
        }
    }
L_00179b0c:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_00179b10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00179b14:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_00179b18:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00179b1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179b20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179b50;
        }
    }
L_00179b24:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_00179b28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179b3c;
        }
    }
L_00179b30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179b34:;
    {
        cpu->r[14] = 0x00179b38u; fn_0018ba60(cpu);
    }
L_00179b38:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00179b3c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00179b40:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[4]);
    }
L_00179b44:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[4]);
    }
L_00179b48:;
    {
        cpu->r[14] = 0x00179b4cu; fn_0018ba20(cpu);
    }
L_00179b4c:;
    {
        wr32(cpu->r[8], cpu->r[4]);
    }
L_00179b50:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_00179b54:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00179b58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00179b5c:;
    {
        wr16(cpu->r[8] + + 0x4u, cpu->r[2]);
    }
L_00179b60:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00179b64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00179a58;
        }
    }
L_00179b68:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_00179b6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179b70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179bf8;
        }
    }
L_00179b74:;
    {
        cpu->r[4] = rd32(cpu->r[2] + - 0x4u);
    }
L_00179b78:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00179b7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00179b80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00179b84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00179b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179be8;
        }
    }
L_00179b8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_00179b90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179bdc;
        }
    }
L_00179b98:;
    {
        cpu->r[1] = rd16(cpu->r[3]);
    }
L_00179b9c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00179ba0:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_00179ba4:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00179ba8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179bdc;
        }
    }
L_00179bb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_00179bb4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179bc4;
        }
    }
L_00179bbc:;
    {
        cpu->r[14] = 0x00179bc0u; fn_0018ba60(cpu);
    }
L_00179bc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_00179bc4:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[5]);
    }
L_00179bc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179bcc:;
    {
        wr16(cpu->r[4] + - 0x8u, cpu->r[5]);
    }
L_00179bd0:;
    {
        cpu->r[14] = 0x00179bd4u; fn_0018ba20(cpu);
    }
L_00179bd4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x14u);
    }
L_00179bd8:;
    {
        wr32(cpu->r[4] + - 0xcu, cpu->r[5]);
    }
L_00179bdc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_00179be0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00179be4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179b8c;
        }
    }
L_00179be8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 0);
    }
L_00179bec:;
    {
        cpu->r[14] = 0x00179bf0u; fn_0018ba60(cpu);
    }
L_00179bf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179bf4:;
    {
        wr32(cpu->r[10] + + 0x14u, cpu->r[3]);
    }
L_00179bf8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179bfc:;
    {
        wr32(cpu->r[10] + + 0x10u, cpu->r[3]);
    }
L_00179c00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00179c04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00179c08u)) return;
    }
L_00179c08:;
    {
        cpu->r[1] = rd32(0x00179c10u + + 0x2d0u);
    }
L_00179c0c:;
    {
        cpu->r[4] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_00179c10:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00179c14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_00179c18:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00179c1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00179e60;
        }
    }
L_00179c20:;
    {
        cpu->r[8] = rd16(cpu->r[0] + + 0x8u);
    }
L_00179c24:;
    {
        cpu->r[7] = 0x0000000cu;
    }
L_00179c28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00179c2c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00179c30:;
    {
        cpu->r[7] = (uint32_t)((int32_t)(int16_t)(cpu->r[8] & 0xffff) * (int32_t)(int16_t)(cpu->r[7] & 0xffff));
    }
L_00179c34:;
    {
        cpu->r[8] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_00179c38:;
    {
        goto L_00179c58;
    }
L_00179c3c:;
    {
        cpu->r[14] = 0x00179c40u; imp_memcmp(cpu); /* memcmp */
    }
L_00179c40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179c80;
        }
    }
L_00179c48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00179c4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00179c50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00179c54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179e60;
        }
    }
L_00179c58:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_00179c5c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00179c60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00179c64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179c48;
        }
    }
L_00179c68:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_00179c6c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
    }
L_00179c70:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00179c74:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00179c78:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00179c7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179c3c;
        }
    }
L_00179c80:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00179c84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179d4c;
        }
    }
L_00179c88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179c8c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00179c90:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00179c94:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00179c98:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[2] = v;
    }
L_00179c9c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_00179ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179cfc;
        }
    }
L_00179ca8:;
    {
        cpu->r[1] = rd16(cpu->r[3]);
    }
L_00179cac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00179cb0:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_00179cb4:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00179cb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179cfc;
        }
    }
L_00179cc0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x10u);
    }
L_00179cc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179cd0;
        }
    }
L_00179ccc:;
    {
        cpu->r[14] = 0x00179cd0u; fn_0018ba60(cpu);
    }
L_00179cd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179cd4:;
    {
        cpu->r[4] = 0x0000000cu;
    }
L_00179cd8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00179cdc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00179ce0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_00179ce4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[5] + cpu->r[3]; cpu->r[4] = v;
    }
L_00179ce8:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00179cec:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_00179cf0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00179cf4:;
    {
        cpu->r[14] = 0x00179cf8u; fn_0018ba20(cpu);
    }
L_00179cf8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_00179cfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179d00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179d04:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00179d08:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00179d0c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[1] = v;
    }
L_00179d10:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[2] = v;
    }
L_00179d14:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00179d18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179d1c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_00179d20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[3]);
        }
    }
L_00179d24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00179d28:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[3], cpu->r[2]);
        }
    }
L_00179d2c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00179d30:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_00179d34:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_00179d38:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_00179d3c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00179d40:;
    {
        cpu->r[6] = rd16(cpu->r[6] + + 0xcu);
    }
L_00179d44:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00179d48:;
    {
        wr16(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_00179d4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179d50:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_00179d54:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_00179d58:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00179d5c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00179d60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00179d64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00179d68:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_00179d6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179dc8;
        }
    }
L_00179d74:;
    {
        cpu->r[1] = rd16(cpu->r[3]);
    }
L_00179d78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00179d7c:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_00179d80:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00179d84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00179d88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179dc8;
        }
    }
L_00179d8c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x10u);
    }
L_00179d90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179d9c;
        }
    }
L_00179d98:;
    {
        cpu->r[14] = 0x00179d9cu; fn_0018ba60(cpu);
    }
L_00179d9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179da0:;
    {
        cpu->r[5] = 0x0000000cu;
    }
L_00179da4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00179da8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00179dac:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[3]; cpu->r[5] = v;
    }
L_00179db0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179db4:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[7]);
    }
L_00179db8:;
    {
        wr16(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_00179dbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00179dc0:;
    {
        cpu->r[14] = 0x00179dc4u; fn_0018ba20(cpu);
    }
L_00179dc4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00179dc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179dcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00179dd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00179dd4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_00179dd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00179ddc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179de0:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[1]);
    }
L_00179de4:;
    {
        wr16(cpu->r[2] + + 0xcu, cpu->r[3]);
    }
L_00179de8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00179dec:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_00179df0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00179df4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179e38;
        }
    }
L_00179df8:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179dfc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179e00:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179e04:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00179e08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00179e0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179e38;
        }
    }
L_00179e10:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_00179e14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00179e18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179e20;
        }
    }
L_00179e1c:;
    {
        cpu->r[14] = 0x00179e20u; fn_0018ba60(cpu);
    }
L_00179e20:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00179e24:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4u);
    }
L_00179e28:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[4]);
    }
L_00179e2c:;
    {
        wr16(cpu->r[10] + + 0x8u, cpu->r[4]);
    }
L_00179e30:;
    {
        cpu->r[14] = 0x00179e34u; fn_0018ba20(cpu);
    }
L_00179e34:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[4]);
    }
L_00179e38:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00179e3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00179e40:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[3]);
    }
L_00179e44:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[3]);
    }
L_00179e48:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[12]);
    }
L_00179e4c:;
    {
        wr16(cpu->r[10] + + 0x8u, cpu->r[3]);
    }
L_00179e50:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_00179e54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00179e58:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00179e5c:;
    {
        goto L_00179774;
    }
L_00179e60:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_00179e64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179e68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179eac;
        }
    }
L_00179e6c:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179e70:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179e74:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179e78:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00179e7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179eac;
        }
    }
L_00179e84:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_00179e88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179e94;
        }
    }
L_00179e90:;
    {
        cpu->r[14] = 0x00179e94u; fn_0018ba60(cpu);
    }
L_00179e94:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00179e98:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4u);
    }
L_00179e9c:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[4]);
    }
L_00179ea0:;
    {
        wr16(cpu->r[10] + + 0x8u, cpu->r[4]);
    }
L_00179ea4:;
    {
        cpu->r[14] = 0x00179ea8u; fn_0018ba20(cpu);
    }
L_00179ea8:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[4]);
    }
L_00179eac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00179eb0:;
    {
        wr16(cpu->r[10] + + 0x8u, cpu->r[1]);
    }
L_00179eb4:;
    {
        goto L_00179774;
    }
}

/* _ZN5CMeshD1Ev @ 00179ee4 (arm) */
void fn_00179ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179ee4:;
    {
        cpu->r[3] = rd32(0x00179eecu + + 0x108u);
    }
L_00179ee8:;
    {
        cpu->r[2] = rd32(0x00179ef0u + + 0x108u);
    }
L_00179eec:;
    {
        cpu->r[3] = add_flags(cpu, 0x00179ef4u, cpu->r[3], 0, 0);
    }
L_00179ef0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00179ef4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00179ef8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00179efc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00179f00:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00179f04:;
    {
        cpu->r[14] = 0x00179f08u; fn_00179754(cpu);
    }
L_00179f08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00179f0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179f9c;
        }
    }
L_00179f14:;
    {
        cpu->r[4] = rd32(cpu->r[3] + - 0x4u);
    }
L_00179f18:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00179f1c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_00179f20:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00179f24:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00179f28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00179f2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00179f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179f90;
        }
    }
L_00179f34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_00179f38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179f84;
        }
    }
L_00179f40:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_00179f44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00179f48:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_00179f4c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_00179f50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179f54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179f80;
        }
    }
L_00179f58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_00179f5c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00179f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179f6c;
        }
    }
L_00179f64:;
    {
        cpu->r[14] = 0x00179f68u; fn_0018ba60(cpu);
    }
L_00179f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_00179f6c:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[5]);
    }
L_00179f70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179f74:;
    {
        wr16(cpu->r[4] + - 0x8u, cpu->r[5]);
    }
L_00179f78:;
    {
        cpu->r[14] = 0x00179f7cu; fn_0018ba20(cpu);
    }
L_00179f7c:;
    {
        wr32(cpu->r[4] + - 0xcu, cpu->r[5]);
    }
L_00179f80:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_00179f84:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_00179f88:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00179f8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179f34;
        }
    }
L_00179f90:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00179f94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_00179f98:;
    {
        cpu->r[14] = 0x00179f9cu; fn_0018ba60(cpu);
    }
L_00179f9c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_00179fa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00179fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179fec;
        }
    }
L_00179fa8:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_00179fac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00179fb0:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_00179fb4:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00179fb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179fbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00179fec;
        }
    }
L_00179fc0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00179fc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00179fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00179fd8;
        }
    }
L_00179fcc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00179fd0:;
    {
        cpu->r[14] = 0x00179fd4u; fn_0018ba60(cpu);
    }
L_00179fd4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_00179fd8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00179fdc:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[4]);
    }
L_00179fe0:;
    {
        wr16(cpu->r[6] + + 0x8u, cpu->r[4]);
    }
L_00179fe4:;
    {
        cpu->r[14] = 0x00179fe8u; fn_0018ba20(cpu);
    }
L_00179fe8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_00179fec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00179ff0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00179ff4u)) return;
    }
}

/* _ZN5CMeshD0Ev @ 00179ffc (arm) */
void fn_00179ffc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00179ffc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a000:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a004:;
    {
        cpu->r[14] = 0x0017a008u; fn_00179ee4(cpu);
    }
L_0017a008:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a00c:;
    {
        cpu->r[14] = 0x0017a010u; fn_0018ba20(cpu);
    }
L_0017a010:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a014:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a018u)) return;
    }
}

/* _ZN5CMeshD2Ev @ 0017a018 (arm) */
void fn_0017a018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a018:;
    {
        cpu->r[3] = rd32(0x0017a020u + + 0x108u);
    }
L_0017a01c:;
    {
        cpu->r[2] = rd32(0x0017a024u + + 0x108u);
    }
L_0017a020:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017a028u, cpu->r[3], 0, 0);
    }
L_0017a024:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017a028:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0017a02c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0017a030:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0017a034:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0017a038:;
    {
        cpu->r[14] = 0x0017a03cu; fn_00179754(cpu);
    }
L_0017a03c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0017a040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a0d0;
        }
    }
L_0017a048:;
    {
        cpu->r[4] = rd32(cpu->r[3] + - 0x4u);
    }
L_0017a04c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0017a050:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_0017a054:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0017a058:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0017a05c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0017a060:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0017a064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a0c4;
        }
    }
L_0017a068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_0017a06c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a0b8;
        }
    }
L_0017a074:;
    {
        cpu->r[2] = rd16(cpu->r[3]);
    }
L_0017a078:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0017a07c:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_0017a080:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[2]);
    }
L_0017a084:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017a088:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a0b4;
        }
    }
L_0017a08c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + - 0x4u);
    }
L_0017a090:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017a094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a0a0;
        }
    }
L_0017a098:;
    {
        cpu->r[14] = 0x0017a09cu; fn_0018ba60(cpu);
    }
L_0017a09c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + - 0xcu);
    }
L_0017a0a0:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[5]);
    }
L_0017a0a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017a0a8:;
    {
        wr16(cpu->r[4] + - 0x8u, cpu->r[5]);
    }
L_0017a0ac:;
    {
        cpu->r[14] = 0x0017a0b0u; fn_0018ba20(cpu);
    }
L_0017a0b0:;
    {
        wr32(cpu->r[4] + - 0xcu, cpu->r[5]);
    }
L_0017a0b4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_0017a0b8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000000cu, 1, 0);
    }
L_0017a0bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0017a0c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a068;
        }
    }
L_0017a0c4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_0017a0c8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0017a0cc:;
    {
        cpu->r[14] = 0x0017a0d0u; fn_0018ba60(cpu);
    }
L_0017a0d0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0017a0d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a0d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a120;
        }
    }
L_0017a0dc:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_0017a0e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0017a0e4:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_0017a0e8:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_0017a0ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a0f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a120;
        }
    }
L_0017a0f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0017a0f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a0fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a10c;
        }
    }
L_0017a100:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017a104:;
    {
        cpu->r[14] = 0x0017a108u; fn_0018ba60(cpu);
    }
L_0017a108:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0017a10c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0017a110:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[4]);
    }
L_0017a114:;
    {
        wr16(cpu->r[6] + + 0x8u, cpu->r[4]);
    }
L_0017a118:;
    {
        cpu->r[14] = 0x0017a11cu; fn_0018ba20(cpu);
    }
L_0017a11c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_0017a120:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0017a124:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a128u)) return;
    }
}

/* _ZN5CMesh11SetVerticesER13Vector4sArray @ 0017a130 (arm) */
void fn_0017a130(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a130:;
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
L_0017a134:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a138:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0017a13c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0017a140:;
    {
        cpu->r[9] = rd32(0x0017a148u + + 0x378u);
    }
L_0017a144:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0017a148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a14c:;
    {
        cpu->r[9] = add_flags(cpu, 0x0017a154u, cpu->r[9], 0, 0);
    }
L_0017a150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a198;
        }
    }
L_0017a154:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_0017a158:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0017a15c:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_0017a160:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_0017a164:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a168:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a198;
        }
    }
L_0017a16c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017a170:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a184;
        }
    }
L_0017a178:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017a17c:;
    {
        cpu->r[14] = 0x0017a180u; fn_0018ba60(cpu);
    }
L_0017a180:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017a184:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017a188:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[6]);
    }
L_0017a18c:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_0017a190:;
    {
        cpu->r[14] = 0x0017a194u; fn_0018ba20(cpu);
    }
L_0017a194:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_0017a198:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017a19c:;
    {
        cpu->r[11] = rd32(0x0017a1a4u + + 0x320u);
    }
L_0017a1a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a1a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0017a1a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[3]);
        }
    }
L_0017a1ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0017a1b0:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[3], cpu->r[2]);
        }
    }
L_0017a1b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0017a1b8:;
    {
        cpu->r[1] = rd16(cpu->r[5] + + 0x4u);
    }
L_0017a1bc:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a1c0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0017a1c4:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_0017a1c8:;
    {
        cpu->r[3] = rd8(cpu->r[5]);
    }
L_0017a1cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a1d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a3cc;
        }
    }
L_0017a1d4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x4u);
    }
L_0017a1d8:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000007fu, 1, 1);
    }
L_0017a1dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017a484;
        }
    }
L_0017a1e0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017a1e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017a3d4;
        }
    }
L_0017a1e8:;
    {
        cpu->r[10] = rd16(cpu->r[4] + + 0x8u);
    }
L_0017a1ec:;
    {
        cpu->r[8] = 0x0000000cu;
    }
L_0017a1f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0017a1f4:;
    {
        cpu->r[5] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a1f8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0017a1fc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0017a200:;
    {
        cpu->r[8] = (uint32_t)((int32_t)(int16_t)(cpu->r[10] & 0xffff) * (int32_t)(int16_t)(cpu->r[8] & 0xffff));
    }
L_0017a204:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[10]);
    }
L_0017a208:;
    {
        goto L_0017a228;
    }
L_0017a20c:;
    {
        cpu->r[14] = 0x0017a210u; imp_memcmp(cpu); /* memcmp */
    }
L_0017a210:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a214:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a254;
        }
    }
L_0017a218:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0017a21c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_0017a220:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0017a224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a3d4;
        }
    }
L_0017a228:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0xcu);
    }
L_0017a22c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0017a230:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017a234:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a218;
        }
    }
L_0017a238:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017a23c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_0017a240:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017a244:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0017a248:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0017a24c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017a250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a20c;
        }
    }
L_0017a254:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a258:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x8u);
    }
L_0017a25c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017a260:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x608u);
    }
L_0017a264:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0017a268:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a26c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a270:;
    {
        wr32(cpu->r[3] + + 0x608u, cpu->r[2]);
    }
L_0017a274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a2bc;
        }
    }
L_0017a278:;
    {
        cpu->r[3] = rd16(cpu->r[0]);
    }
L_0017a27c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0017a280:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_0017a284:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_0017a288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a28c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a2bc;
        }
    }
L_0017a290:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017a294:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a2a8;
        }
    }
L_0017a29c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017a2a0:;
    {
        cpu->r[14] = 0x0017a2a4u; fn_0018ba60(cpu);
    }
L_0017a2a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017a2a8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0017a2ac:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_0017a2b0:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_0017a2b4:;
    {
        cpu->r[14] = 0x0017a2b8u; fn_0018ba20(cpu);
    }
L_0017a2b8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0017a2bc:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[7] = v;
    }
L_0017a2c0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a2c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0017a2c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a2cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017a2d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a2d4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0017a2d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[3]);
        }
    }
L_0017a2dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0017a2e0:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[3], cpu->r[2]);
        }
    }
L_0017a2e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0017a2e8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a2ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a2f0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017a2f4:;
    {
        cpu->r[1] = rd16(cpu->r[2] + + 0xcu);
    }
L_0017a2f8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0017a2fc:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_0017a300:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_0017a304:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0017a308:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a30c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_0017a310:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0017a314:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0017a318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a36c;
        }
    }
L_0017a31c:;
    {
        cpu->r[1] = rd16(cpu->r[2]);
    }
L_0017a320:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0017a324:;
    {
        wr16(cpu->r[2], cpu->r[1]);
    }
L_0017a328:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_0017a32c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017a330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a36c;
        }
    }
L_0017a334:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0017a338:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a33c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a344;
        }
    }
L_0017a340:;
    {
        cpu->r[14] = 0x0017a344u; fn_0018ba60(cpu);
    }
L_0017a344:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a348:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0017a34c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0017a350:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0017a354:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017a358:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_0017a35c:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0017a360:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0017a364:;
    {
        cpu->r[14] = 0x0017a368u; fn_0018ba20(cpu);
    }
L_0017a368:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[10]);
    }
L_0017a36c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a370:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0017a374:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0017a378:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0017a37c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017a380:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_0017a384:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a388:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_0017a38c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a390:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_0017a394:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[3]);
        }
    }
L_0017a398:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0017a39c:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[3], cpu->r[2]);
        }
    }
L_0017a3a0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a3a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0017a3a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0017a3ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0017a3b0:;
    {
        cpu->r[6] = rd16(cpu->r[6] + + 0xcu);
    }
L_0017a3b4:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0017a3b8:;
    {
        wr16(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_0017a3bc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a3c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0017a3c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017a3c8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0017a3cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0017a3d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a3d4u)) return;
    }
L_0017a3d4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0017a3d8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a3dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017a3e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0017a3e4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017a3e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a3ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a440;
        }
    }
L_0017a3f0:;
    {
        cpu->r[1] = rd16(cpu->r[3]);
    }
L_0017a3f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0017a3f8:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_0017a3fc:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_0017a400:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017a404:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017a440;
        }
    }
L_0017a408:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x10u);
    }
L_0017a40c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017a410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017a418;
        }
    }
L_0017a414:;
    {
        cpu->r[14] = 0x0017a418u; fn_0018ba60(cpu);
    }
L_0017a418:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a41c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017a420:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0017a424:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0017a428:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0017a42c:;
    {
        wr16(cpu->r[6] + + 0xcu, cpu->r[1]);
    }
L_0017a430:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[8]);
    }
L_0017a434:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
    }
L_0017a438:;
    {
        cpu->r[14] = 0x0017a43cu; fn_0018ba20(cpu);
    }
L_0017a43c:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[8]);
    }
L_0017a440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0017a444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017a448:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a44c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0017a450:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017a454:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017a458:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_0017a45c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[3]);
        }
    }
L_0017a460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0017a464:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[3], cpu->r[2]);
        }
    }
L_0017a468:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0017a46c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0017a470:;
    {
        cpu->r[4] = rd16(cpu->r[4] + + 0x8u);
    }
L_0017a474:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0017a478:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0017a47c:;
    {
        wr16(cpu->r[5] + + 0xcu, cpu->r[4]);
    }
L_0017a480:;
    {
        goto L_0017a3bc;
    }
L_0017a484:;
    {
        cpu->r[1] = rd32(0x0017a48cu + + 0x3cu);
    }
L_0017a488:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017a48c:;
    {
        cpu->r[12] = rd32(0x0017a494u + + 0x38u);
    }
L_0017a490:;
    {
        cpu->r[14] = 0x00000062u;
    }
L_0017a494:;
    {
        cpu->r[2] = rd32(0x0017a49cu + + 0x34u);
    }
L_0017a498:;
    {
        cpu->r[1] = add_flags(cpu, 0x0017a4a0u, cpu->r[1], 0, 0);
    }
L_0017a49c:;
    {
        cpu->r[3] = rd32(0x0017a4a4u + + 0x30u);
    }
L_0017a4a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017a4a8u, cpu->r[12], 0, 0);
    }
L_0017a4a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017a4acu, cpu->r[2], 0, 0);
    }
L_0017a4a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0017a4ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x0017a4b4u, cpu->r[3], 0, 0);
    }
L_0017a4b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0017a4b4:;
    {
        cpu->r[14] = 0x0017a4b8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017a4b8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x4u);
    }
L_0017a4bc:;
    {
        goto L_0017a1e0;
    }
}

/* _ZN14CCollisionBodyC2Ev @ 0017a4d8 (arm) */
void fn_0017a4d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a4d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017a4dc:;
    {
        wr16(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_0017a4e0:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0017a4e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CCollisionBodyC1Ev @ 0017a4e8 (arm) */
void fn_0017a4e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a4e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0017a4ec:;
    {
        wr16(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_0017a4f0:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0017a4f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20CStaticCollisionBodyC2Ev @ 0017a4f8 (arm) */
void fn_0017a4f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a4f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a4fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a500:;
    {
        cpu->r[14] = 0x0017a504u; fn_0017a4d8(cpu);
    }
L_0017a504:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017a508:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a50c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_0017a510:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0017a514:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_0017a518:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017a51c:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_0017a520:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a524u)) return;
    }
}

/* _ZN20CStaticCollisionBodyC1Ev @ 0017a524 (arm) */
void fn_0017a524(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a524:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a52c:;
    {
        cpu->r[14] = 0x0017a530u; fn_0017a4d8(cpu);
    }
L_0017a530:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017a534:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a538:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_0017a53c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0017a540:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_0017a544:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017a548:;
    {
        wr8(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_0017a54c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a550u)) return;
    }
}

/* _ZN18CRampCollisionBodyC2Ev @ 0017a550 (arm) */
void fn_0017a550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a550:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a554:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a558:;
    {
        cpu->r[14] = 0x0017a55cu; fn_0017a4f8(cpu);
    }
L_0017a55c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017a560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a564:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_0017a568:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a56cu)) return;
    }
}

/* _ZN18CRampCollisionBodyC1Ev @ 0017a56c (arm) */
void fn_0017a56c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a56c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a570:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017a574:;
    {
        cpu->r[14] = 0x0017a578u; fn_0017a4f8(cpu);
    }
L_0017a578:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017a57c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017a580:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_0017a584:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a588u)) return;
    }
}

/* _ZN18CRampCollisionBody10GetGroundYEii @ 0017a588 (arm) */
void fn_0017a588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a588:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_0017a58c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0017a590:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x48u);
    }
L_0017a594:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x50u);
    }
L_0017a598:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0017a59c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4cu);
    }
L_0017a5a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_0017a5a4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017a5a8:;
    {
        cpu->r[14] = 0x0017a5acu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017a5ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017a5b0u)) return;
    }
}

/* _ZN11CCollideCar11TestSpheresERK8Vector4siS2_i @ 0017a5b0 (arm) */
void fn_0017a5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017a5b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0017a5b4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0017a5b8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0017a5bc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0017a5c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0017a5c4:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017a5c8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0017a5cc:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x8u);
    }
L_0017a5d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0017a5d4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_0017a5d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a5f0;
        }
    }
L_0017a5dc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_0017a5e0:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[4] = v;
    }
L_0017a5e4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0017a5e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0017a5ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0017a5fc;
        }
    }
L_0017a5f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0017a5f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0017a5f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017a5fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_0017a600:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12] + cpu->r[1]; cpu->r[12] = v;
    }
L_0017a604:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[5] = v;
    }
L_0017a608:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0017a60c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a5f0;
        }
    }
L_0017a610:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_0017a614:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0017a618:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_0017a61c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[4] = v;
    }
L_0017a620:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0017a624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0017a628:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017a5f0;
        }
    }
L_0017a62c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[12]; cpu->r[2] = v;
    }
L_0017a630:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0017a634:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017a638:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017a63c:;
    {
        goto L_0017a5f4;
    }
}
