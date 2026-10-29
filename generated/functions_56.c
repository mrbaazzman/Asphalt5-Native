#include "functions.h"

/* _ZN17ParticleOptimized13SetVertexDataEP10VertexDataiihf @ 0015991c (arm) */
void fn_0015991c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015991c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00159920:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00159924:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x4u);
    }
L_00159928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0015992c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00159988;
        case 1: goto L_001599b4;
        case 2: goto L_001599e0;
        case 3: goto L_00159a0c;
        case 4: goto L_00159a1c;
        case 5: goto L_00159a2c;
        case 6: goto L_00159a3c;
        case 7: goto L_00159a4c;
        case 8: goto L_00159958;
        default: guest_unimplemented(cpu, 0x0015992cu); return; }
        }
    }
L_00159930:;
    {
        goto L_00159980;
    }
L_00159958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0015995c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159960:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00159964:;
    {
        cpu->r[0] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00159968:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0015996c:;
    {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00159970:;
    {
        wr8(cpu->r[1] + + 0x7u, cpu->r[12]);
    }
L_00159974:;
    {
        wr8(cpu->r[1] + + 0x5u, cpu->r[0]);
    }
L_00159978:;
    {
        wr8(cpu->r[1] + + 0x6u, cpu->r[2]);
    }
L_0015997c:;
    {
        wr8(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00159980:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00159984:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00159988:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0015998c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159990:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00159994:;
    {
        cpu->r[0] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00159998:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0015999c:;
    {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
    }
L_001599a0:;
    {
        wr8(cpu->r[1] + + 0xfu, cpu->r[12]);
    }
L_001599a4:;
    {
        wr8(cpu->r[1] + + 0xdu, cpu->r[0]);
    }
L_001599a8:;
    {
        wr8(cpu->r[1] + + 0xeu, cpu->r[2]);
    }
L_001599ac:;
    {
        wr8(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_001599b0:;
    {
        goto L_00159980;
    }
L_001599b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001599b8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001599bc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[12] = v;
    }
L_001599c0:;
    {
        cpu->r[0] = (cpu->r[3] >> 8) & 0xffu;
    }
L_001599c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001599c8:;
    {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
    }
L_001599cc:;
    {
        wr8(cpu->r[1] + + 0x13u, cpu->r[12]);
    }
L_001599d0:;
    {
        wr8(cpu->r[1] + + 0x11u, cpu->r[0]);
    }
L_001599d4:;
    {
        wr8(cpu->r[1] + + 0x12u, cpu->r[2]);
    }
L_001599d8:;
    {
        wr8(cpu->r[1] + + 0x10u, cpu->r[3]);
    }
L_001599dc:;
    {
        goto L_00159980;
    }
L_001599e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001599e4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001599e8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[12] = v;
    }
L_001599ec:;
    {
        cpu->r[0] = (cpu->r[3] >> 8) & 0xffu;
    }
L_001599f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001599f4:;
    {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
    }
L_001599f8:;
    {
        wr8(cpu->r[1] + + 0x17u, cpu->r[12]);
    }
L_001599fc:;
    {
        wr8(cpu->r[1] + + 0x15u, cpu->r[0]);
    }
L_00159a00:;
    {
        wr8(cpu->r[1] + + 0x16u, cpu->r[2]);
    }
L_00159a04:;
    {
        wr8(cpu->r[1] + + 0x14u, cpu->r[3]);
    }
L_00159a08:;
    {
        goto L_00159980;
    }
L_00159a0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00159a10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00159a14:;
    {
        wr8(cpu->r[1] + + 0x8u, cpu->r[0]);
    }
L_00159a18:;
    {
        goto L_00159980;
    }
L_00159a1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00159a20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00159a24:;
    {
        wr8(cpu->r[1] + + 0x9u, cpu->r[0]);
    }
L_00159a28:;
    {
        goto L_00159980;
    }
L_00159a2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00159a30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00159a34:;
    {
        wr8(cpu->r[1] + + 0xau, cpu->r[0]);
    }
L_00159a38:;
    {
        goto L_00159980;
    }
L_00159a3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00159a40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00159a44:;
    {
        wr8(cpu->r[1] + + 0xbu, cpu->r[0]);
    }
L_00159a48:;
    {
        goto L_00159980;
    }
L_00159a4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00159a50:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159a54:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[4] = v;
    }
L_00159a58:;
    {
        cpu->r[12] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00159a5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_00159a60:;
    {
        wr8(cpu->r[1] + shifter(cpu->r[2], 2, 3u, &shc), cpu->r[3]);
    }
L_00159a64:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00159a68:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[4]);
    }
L_00159a6c:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
    }
L_00159a70:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[3]);
    }
L_00159a74:;
    {
        goto L_00159980;
    }
}

/* _ZN17ParticleOptimized17SetVertexData_PosEP10VertexDataiR8Vector3d @ 00159a78 (arm) */
void fn_00159a78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159a78:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00159a7c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00159a80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00159a84:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00159a88:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00159a8c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00159a90:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00159a94:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00159a98:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00159a9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_00159aa0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159aa4:;
    {
        cpu->r[14] = 0x00159aa8u; fn_0015991c(cpu);
    }
L_00159aa8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159aac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159ab0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00159ab4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00159ab8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00159abc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00159ac0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159ac4:;
    {
        cpu->r[14] = 0x00159ac8u; fn_0015991c(cpu);
    }
L_00159ac8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159acc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159ad0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00159ad4:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00159ad8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00159adc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00159ae0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159ae4:;
    {
        cpu->r[14] = 0x00159ae8u; fn_0015991c(cpu);
    }
L_00159ae8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00159aec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159af0u)) return;
    }
}

/* _ZN17ParticleOptimized19SetVertexData_ColorEP10VertexDataiPf @ 00159af0 (arm) */
void fn_00159af0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159af0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00159af4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00159af8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00159afc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00159b00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00159b04:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00159b0cu + + 0xb4u);
    }
L_00159b08:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00159b0c:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00159b10:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00159b14:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00159b18:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00159b1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159b20:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159b24:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00159b28:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00159b2c:;
    {
        cpu->r[14] = 0x00159b30u; fn_0015991c(cpu);
    }
L_00159b30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00159b34:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00159b38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159b3c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159b40:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00159b44:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00159b48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159b4c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159b50:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00159b54:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00159b58:;
    {
        cpu->r[14] = 0x00159b5cu; fn_0015991c(cpu);
    }
L_00159b5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00159b60:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00159b64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159b68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159b6c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00159b70:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00159b74:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159b78:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159b7c:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00159b80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00159b84:;
    {
        cpu->r[14] = 0x00159b88u; fn_0015991c(cpu);
    }
L_00159b88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_00159b8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_00159b90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159b94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159b98:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00159b9c:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00159ba0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159ba4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00159ba8:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_00159bac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00159bb0:;
    {
        cpu->r[14] = 0x00159bb4u; fn_0015991c(cpu);
    }
L_00159bb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00159bb8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00159bbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159bc0u)) return;
    }
}

/* _ZN17ParticleOptimized17SetVertexData_TexEP10VertexDataiPf @ 00159bc4 (arm) */
void fn_00159bc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159bc4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00159bc8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00159bcc:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00159bd0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00159bd4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00159bd8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00159bdc:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_00159be0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00159be4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00159be8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_00159bec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159bf0:;
    {
        cpu->r[14] = 0x00159bf4u; fn_0015991c(cpu);
    }
L_00159bf4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159bf8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159bfc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00159c00:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_00159c04:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00159c08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00159c0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159c10:;
    {
        cpu->r[14] = 0x00159c14u; fn_0015991c(cpu);
    }
L_00159c14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00159c18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159c1cu)) return;
    }
}

/* _ZN17ParticleOptimized7isAliveEv @ 00159c1c (arm) */
void fn_00159c1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159c1c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_00159c20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17ParticleOptimized14updatePositionEP8Vector3dS1_ @ 00159c24 (arm) */
void fn_00159c24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159c24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00159c28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00159c2c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00159c30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159d34;
        }
    }
L_00159c38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x90u);
    }
L_00159c3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00159c40:;
    {
        vfp_sync_flags(cpu);
    }
L_00159c44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159c80;
        }
    }
L_00159c48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00159c4c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00159c50:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00159c54:;
    {
        vfp_vadd(cpu, 12, 12, 15);
    }
L_00159c58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00159c5c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00159c60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00159c64:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_00159c68:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00159c6c:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00159c70:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00159c74:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159c78:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00159c7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00159c80u)) return;
    }
L_00159c80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00159c84:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_00159c88:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_00159c8c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00159c90:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00159c94:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1]);
    }
L_00159c98:;
    {
        vfp_vmla(cpu, 13, 14, 15);
    }
L_00159c9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00159ca0:;
    {
        cpu->r[0] = (~0x000000c7u);
    }
L_00159ca4:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_00159ca8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00159cb0u + + 0xb8u);
    }
L_00159cac:;
    {
        vfp_vmla(cpu, 16, 14, 11);
    }
L_00159cb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00159cb4:;
    {
        vfp_vmla(cpu, 15, 14, 12);
    }
L_00159cb8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159cbc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159cc0:;
    {
        cpu->r[14] = 0x00159cc4u; fn_000964c8(cpu);
    }
L_00159cc4:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_00159cc8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00159ccc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00159cd0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00159cd4:;
    {
        cpu->r[0] = (~0x000000c7u);
    }
L_00159cd8:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_00159cdc:;
    {
        vfp_vadd(cpu, 16, 15, 16);
    }
L_00159ce0:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159ce4:;
    {
        cpu->r[14] = 0x00159ce8u; fn_000964c8(cpu);
    }
L_00159ce8:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_00159cec:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00159cf0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00159cf4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00159cf8:;
    {
        cpu->r[0] = (~0x000000c7u);
    }
L_00159cfc:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_00159d00:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_00159d04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00159d08:;
    {
        cpu->r[14] = 0x00159d0cu; fn_000964c8(cpu);
    }
L_00159d0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x94u);
    }
L_00159d10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x90u);
    }
L_00159d14:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00159d18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d1c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00159d20:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00159d24:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_00159d28:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_00159d2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159d30:;
    {
        goto L_00159c78;
    }
L_00159d34:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00159d38:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_00159d3c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00159d40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00159d44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00159d48:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00159d4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00159d50:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00159d54:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00159d58:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00159d5c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00159d60:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d64:;
    {
        goto L_00159c78;
    }
}

/* _ZN17ParticleOptimizedC1EP15ParticleEmitter @ 00159d6c (arm) */
void fn_00159d6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159d6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00159d70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00159d78u + + 0x58u);
    }
L_00159d74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000098u, 0, 0);
    }
L_00159d78:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d7c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d80:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d84:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d88:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d8c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d90:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d94:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d98:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159d9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159da0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159da4:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[3]);
    }
L_00159da8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00159dac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159db0:;
    {
        cpu->r[14] = 0x00159db4u; fn_001535e0(cpu);
    }
L_00159db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159db8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159dbc:;
    {
        cpu->r[14] = 0x00159dc0u; fn_001598dc(cpu);
    }
L_00159dc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159dc4:;
    {
        cpu->r[14] = 0x00159dc8u; fn_00153efc(cpu);
    }
L_00159dc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159dcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159dd0u)) return;
    }
}

/* _ZN17ParticleOptimizedC2EP15ParticleEmitter @ 00159dd4 (arm) */
void fn_00159dd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159dd4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00159dd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00159de0u + + 0x58u);
    }
L_00159ddc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000098u, 0, 0);
    }
L_00159de0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159de4:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159de8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159dec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159df0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159df4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159df8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159dfc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159e00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159e04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159e08:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159e0c:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[3]);
    }
L_00159e10:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00159e14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159e18:;
    {
        cpu->r[14] = 0x00159e1cu; fn_001535e0(cpu);
    }
L_00159e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159e20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00159e24:;
    {
        cpu->r[14] = 0x00159e28u; fn_001598dc(cpu);
    }
L_00159e28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159e2c:;
    {
        cpu->r[14] = 0x00159e30u; fn_00153efc(cpu);
    }
L_00159e30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159e34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159e38u)) return;
    }
}

/* _ZN17ParticleOptimized14createParticleEP8Vector3d @ 00159e40 (arm) */
void fn_00159e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159e40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00159e44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00159e4cu + + 0x3f4u);
    }
L_00159e48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00159e4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159e50:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_00159e54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00159e58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00159e5c:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_00159e60:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_00159e64:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00159e68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159e6c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00159e70:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[1]);
    }
L_00159e74:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00159e78:;
    {
        cpu->r[14] = 0x00159e7cu; imp_lrand48(cpu); /* lrand48 */
    }
L_00159e7c:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x00159e84u + + 0x39cu);
    }
L_00159e80:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00159e88u + + 0x3a0u);
    }
L_00159e84:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,17);
    }
L_00159e88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00159e8c:;
    {
        cpu->r[5] = rd32(0x00159e94u + + 0x3b4u);
    }
L_00159e90:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00159e94:;
    {
        cpu->r[5] = add_flags(cpu, 0x00159e9cu, cpu->r[5], 0, 0);
    }
L_00159e98:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_00159e9c:;
    {
        *(uint32_t*)vfp_s(cpu,22) = cpu->r[2];
    }
L_00159ea0:;
    {
        *vfp_d(cpu,11) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_00159ea4:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00159ea8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00159eac:;
    {
        *vfp_d(cpu,4) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_00159eb0:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x00159eb8u + + 0x378u);
    }
L_00159eb4:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 4) * *vfp_d(cpu, 5);
    }
L_00159eb8:;
    {
        *vfp_d(cpu, 7) = -(*vfp_d(cpu, 7) - *vfp_d(cpu, 5) * *vfp_d(cpu, 10));
    }
L_00159ebc:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_00159ec0:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,7);
    }
L_00159ec4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00159ec8:;
    {
        cpu->r[14] = 0x00159eccu; imp_lrand48(cpu); /* lrand48 */
    }
L_00159ecc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[6];
    }
L_00159ed0:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_00159ed4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_00159ed8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159edc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x9cu);
    }
L_00159ee0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159ee4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) - *vfp_d(cpu, 11);
    }
L_00159ee8:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[0];
    }
L_00159eec:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_00159ef0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00159ef4:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) + *vfp_d(cpu, 7) * *vfp_d(cpu, 10);
    }
L_00159ef8:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 9) + *vfp_d(cpu, 11);
    }
L_00159efc:;
    {
        *vfp_s(cpu,22) = (float)*vfp_d(cpu,11);
    }
L_00159f00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_00159f04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015a3c4;
        }
    }
L_00159f08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_00159f0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00159f10:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159f14:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_00159f18:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_00159f1c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00159f20:;
    {
        cpu->r[14] = 0x00159f24u; imp_lrand48(cpu); /* lrand48 */
    }
L_00159f24:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_00159f28:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x00159f30u + + 0x2f0u);
    }
L_00159f2c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00159f30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00159f34:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_00159f38:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) - *vfp_d(cpu, 9);
    }
L_00159f3c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00159f40:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_00159f44:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 10) * *vfp_d(cpu, 7);
    }
L_00159f48:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_00159f4c:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_00159f50:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00159f54:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00159f58:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00159f5c:;
    {
        cpu->r[14] = 0x00159f60u; imp_lrand48(cpu); /* lrand48 */
    }
L_00159f60:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_00159f64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00159f68:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_00159f6c:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) - *vfp_d(cpu, 9);
    }
L_00159f70:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00159f74:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_00159f78:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 10) * *vfp_d(cpu, 7);
    }
L_00159f7c:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_00159f80:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_00159f84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00159f88:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x2cu);
    }
L_00159f8c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x28u);
    }
L_00159f90:;
    {
        cpu->r[14] = 0x00159f94u; imp_lrand48(cpu); /* lrand48 */
    }
L_00159f94:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_00159f98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00159f9c:;
    {
        cpu->r[1] = rd32(0x00159fa4u + + 0x2a8u);
    }
L_00159fa0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00159fa4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[6]);
    }
L_00159fa8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00159fac:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_00159fb0:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) - *vfp_d(cpu, 9);
    }
L_00159fb4:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[0];
    }
L_00159fb8:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_00159fbc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00159fc0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 10) * *vfp_d(cpu, 7);
    }
L_00159fc4:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_00159fc8:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_00159fcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00159fd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x6cu);
    }
L_00159fd4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00159fd8:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_00159fdc:;
    {
        cpu->r[14] = 0x00159fe0u; fn_00135c90(cpu);
    }
L_00159fe0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00159fe4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00159fe8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00159fec:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00159ff0:;
    {
        cpu->r[14] = 0x00159ff4u; fn_00135bb0(cpu);
    }
L_00159ff4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00159ff8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015a390;
        }
    }
L_00159ffc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a000:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0015a008u + + 0x23cu);
    }
L_0015a004:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0015a00cu + + 0x214u);
    }
L_0015a008:;
    {
        cpu->r[7] = 0x000060b7u;
    }
L_0015a00c:;
    {
        *vfp_d(cpu, 12) = *(double*)G(0x0015a014u + + 0x224u);
    }
L_0015a010:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0xb60bu << 16);
    }
L_0015a014:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x38u);
    }
L_0015a018:;
    {
        cpu->r[8] = 0x00000168u;
    }
L_0015a01c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[2]);
    }
L_0015a020:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0015a024:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[2]);
    }
L_0015a028:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x40u);
    }
L_0015a02c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_0015a030:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[3] + + 0x5cu);
    }
L_0015a034:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x50u);
    }
L_0015a038:;
    {
        cpu->r[14] = 0x0015a03cu; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a03c:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a040:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a044:;
    {
        *vfp_d(cpu,11) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_0015a048:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) - *vfp_d(cpu, 10);
    }
L_0015a04c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0015a050:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0015a054:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 11) * *vfp_d(cpu, 7);
    }
L_0015a058:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a05c:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_d(cpu,10);
    }
L_0015a060:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0015a064:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[3] + + 0x60u);
    }
L_0015a068:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x54u);
    }
L_0015a06c:;
    {
        cpu->r[14] = 0x0015a070u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a070:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a074:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a078:;
    {
        *vfp_d(cpu,11) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_0015a07c:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) - *vfp_d(cpu, 10);
    }
L_0015a080:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0015a084:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_0015a088:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 11) * *vfp_d(cpu, 7);
    }
L_0015a08c:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a090:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_d(cpu,10);
    }
L_0015a094:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0015a098:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[3] + + 0x64u);
    }
L_0015a09c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x58u);
    }
L_0015a0a0:;
    {
        cpu->r[14] = 0x0015a0a4u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a0a4:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a0a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a0ac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x74u);
    }
L_0015a0b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x78u);
    }
L_0015a0b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x7cu);
    }
L_0015a0b8:;
    {
        *vfp_d(cpu,11) = (double)*(int32_t*)vfp_s(cpu,22);
    }
L_0015a0bc:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_0015a0c0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015a0c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015a0c8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015a0cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a0d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0015a0d4:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) - *vfp_d(cpu, 10);
    }
L_0015a0d8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a0dc:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_0015a0e0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 11) * *vfp_d(cpu, 7);
    }
L_0015a0e4:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a0e8:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_d(cpu,10);
    }
L_0015a0ec:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0015a0f0:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_0015a0f4:;
    {
        cpu->r[14] = 0x0015a0f8u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a0f8:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a0fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a100:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_0015a104:;
    {
        cpu->r[2] = rd32(0x0015a10cu + + 0x144u);
    }
L_0015a108:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0015a10c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0015a110:;
    {
        *vfp_d(cpu,4) = *vfp_d(cpu,12);
    }
L_0015a114:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015a118:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015a11c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0015a120:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,15);
    }
L_0015a124:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 10) * *vfp_d(cpu, 5);
    }
L_0015a128:;
    {
        *vfp_d(cpu, 4) = *vfp_d(cpu, 4) + *vfp_d(cpu, 5) * *vfp_d(cpu, 8);
    }
L_0015a12c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,4);
    }
L_0015a130:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015a134:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_0015a138:;
    {
        vfp_vadd(cpu, 15, 15, 18);
    }
L_0015a13c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0015a140:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015a144:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015a148:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0015a14c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015a150:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015a154:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 8u, &shc), cpu->r[0], 1, 0);
    }
L_0015a158:;
    {
        uint32_t v = cpu->r[2] - cpu->r[8] * cpu->r[1]; cpu->r[2] = v;
    }
L_0015a15c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[2]);
    }
L_0015a160:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x20u);
    }
L_0015a164:;
    {
        cpu->r[14] = 0x0015a168u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a168:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a16c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_0015a174:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[0];
    }
L_0015a178:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_0015a17c:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 10) * *vfp_d(cpu, 6);
    }
L_0015a180:;
    {
        *vfp_d(cpu, 12) = *vfp_d(cpu, 12) + *vfp_d(cpu, 6) * *vfp_d(cpu, 8);
    }
L_0015a184:;
    {
        *(int32_t*)vfp_s(cpu,24) = (int32_t)*vfp_d(cpu,12);
    }
L_0015a188:;
    {
        *vfp_s(cpu,24) = (float)*(int32_t*)vfp_s(cpu,24);
    }
L_0015a18c:;
    {
        vfp_vadd(cpu, 24, 24, 15);
    }
L_0015a190:;
    {
        vfp_vadd(cpu, 18, 24, 18);
    }
L_0015a194:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0015a198:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_0015a19c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0015a1a0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015a1a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015a1a8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 8u, &shc), cpu->r[0], 1, 0);
    }
L_0015a1ac:;
    {
        uint32_t v = cpu->r[2] - cpu->r[8] * cpu->r[1]; cpu->r[2] = v;
    }
L_0015a1b0:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[2]);
    }
L_0015a1b4:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_0015a1b8:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x80u);
    }
L_0015a1bc:;
    {
        cpu->r[14] = 0x0015a1c0u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a1c0:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a1c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a1c8:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a1cc:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) - *vfp_d(cpu, 9);
    }
L_0015a1d0:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[0];
    }
L_0015a1d4:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_0015a1d8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 10) * *vfp_d(cpu, 7);
    }
L_0015a1dc:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a1e0:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_0015a1e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0015a1e8:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x8cu);
    }
L_0015a1ec:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x88u);
    }
L_0015a1f0:;
    {
        cpu->r[14] = 0x0015a1f4u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a1f4:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a1f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a1fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x78u);
    }
L_0015a200:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[2]);
    }
L_0015a204:;
    {
        *vfp_d(cpu,10) = (double)*(int32_t*)vfp_s(cpu,20);
    }
L_0015a208:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) - *vfp_d(cpu, 9);
    }
L_0015a20c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0015a210:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0015a214:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 10) * *vfp_d(cpu, 7);
    }
L_0015a218:;
    {
        goto L_0015a254;
    }
L_0015a254:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a258:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_0015a25c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0015a260:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x24u);
    }
L_0015a264:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[2]);
    }
L_0015a268:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x94u);
    }
L_0015a26c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_0015a270:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0015a274:;
    {
        cpu->r[14] = 0x0015a278u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a278:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a27c:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[5];
    }
L_0015a280:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a284:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015a288:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_0015a28c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_0015a290:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_0015a294:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_0015a298:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) - *vfp_d(cpu, 9);
    }
L_0015a29c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0015a2a0:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0015a2a4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_0015a2a8:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a2ac:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_0015a2b0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0015a2b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xa4u);
    }
L_0015a2b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015a2bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015a378;
        }
    }
L_0015a2c0:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0xacu);
    }
L_0015a2c4:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x0015a2ccu + + 0x144u);
    }
L_0015a2c8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0015a2cc:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0015a2d0:;
    {
        cpu->r[14] = 0x0015a2d4u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a2d4:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a2d8:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[5];
    }
L_0015a2dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a2e0:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_0015a2e4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) - *vfp_d(cpu, 9);
    }
L_0015a2e8:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0015a2ec:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0015a2f0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_0015a2f4:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a2f8:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_d(cpu,9);
    }
L_0015a2fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0015a300:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0xa8u);
    }
L_0015a304:;
    {
        cpu->r[14] = 0x0015a308u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a308:;
    {
        *vfp_d(cpu,9) = (double)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a30c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a310:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_0015a314:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_0015a318:;
    {
        *vfp_d(cpu, 9) = *vfp_d(cpu, 9) - *vfp_d(cpu, 10);
    }
L_0015a31c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0015a320:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_0015a324:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 9) * *vfp_d(cpu, 7);
    }
L_0015a328:;
    {
        *vfp_d(cpu, 10) = *vfp_d(cpu, 10) + *vfp_d(cpu, 7) * *vfp_d(cpu, 8);
    }
L_0015a32c:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_d(cpu,10);
    }
L_0015a330:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0015a334:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xa4u);
    }
L_0015a338:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000001c0u, 0, 0);
    }
L_0015a33c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0015a340:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015a344:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0015a348:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015a34c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0015a350:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 8u, &shc), cpu->r[2], 1, 0);
    }
L_0015a354:;
    {
        uint32_t v = cpu->r[3] - cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_0015a358:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000b4u, 1, 1);
    }
L_0015a35c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000168u, 1, 0);
        }
    }
L_0015a360:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015a364:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0015a368:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
        }
    }
L_0015a36c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015a378;
        }
    }
L_0015a370:;
    {
        cpu->r[14] = 0x0015a374u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015a374:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[0]);
    }
L_0015a378:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0xb4u);
    }
L_0015a37c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015a380:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a384:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015a388:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_0015a38c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015a390u)) return;
    }
L_0015a390:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0015a394:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0015a398:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x5cu);
    }
L_0015a39c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015a3a0:;
    {
        cpu->r[14] = 0x0015a3a4u; fn_00135d9c(cpu);
    }
L_0015a3a4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0015a3a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015a3ac:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0015a3b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0015a3b4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0015a3b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015a3bc:;
    {
        cpu->r[14] = 0x0015a3c0u; fn_00136660(cpu);
    }
L_0015a3c0:;
    {
        goto L_00159ffc;
    }
L_0015a3c4:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_0015a3c8:;
    {
        *vfp_d(cpu,8) = (double)*vfp_s(cpu,16);
    }
L_0015a3cc:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_0015a3d0:;
    {
        *(uint32_t*)vfp_s(cpu,24) = cpu->r[0];
    }
L_0015a3d4:;
    {
        cpu->r[14] = 0x0015a3d8u; imp_lrand48(cpu); /* lrand48 */
    }
L_0015a3d8:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[7];
    }
L_0015a3dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a3e0:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0015a3e4:;
    {
        *vfp_d(cpu,12) = (double)*(int32_t*)vfp_s(cpu,24);
    }
L_0015a3e8:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,8);
    }
L_0015a3ec:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) - *vfp_d(cpu, 12);
    }
L_0015a3f0:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0015a3f4:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0015a3f8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_0015a3fc:;
    {
        *vfp_d(cpu, 12) = *vfp_d(cpu, 12) + *vfp_d(cpu, 7) * *vfp_d(cpu, 10);
    }
L_0015a400:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) + *vfp_d(cpu, 12);
    }
L_0015a404:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,8);
    }
L_0015a408:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a40c:;
    {
        goto L_00159f08;
    }
}

/* _ZN17ParticleOptimized12initParticleEP18ParticleParametersP8Vector3d @ 0015a418 (arm) */
void fn_0015a418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015a418:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0x64u);
    }
L_0015a41c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0015a420:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015a424:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_0015a428:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0015a42c:;
    {
        return fn_00159e40(cpu);
    }
}

/* _ZN17ParticleOptimizedD2Ev @ 0015a430 (arm) */
void fn_0015a430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015a430:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015a434:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xd8u);
    }
L_0015a438:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015a43c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015a440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015a45c;
        }
    }
L_0015a444:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015a448:;
    {
        cpu->r[14] = 0x0015a44cu; fn_000b2bc8(cpu);
    }
L_0015a44c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015a450:;
    {
        cpu->r[14] = 0x0015a454u; fn_0018ba20(cpu);
    }
L_0015a454:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015a458:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[3]);
    }
L_0015a45c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a460:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015a464u)) return;
    }
}

/* _ZN17ParticleOptimized16updateRenderDataEv @ 0015a464 (arm) */
void fn_0015a464(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015a464:;
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
L_0015a468:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0015a46c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x24u);
    }
L_0015a470:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015a474:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ccu, 1, 0);
    }
L_0015a478:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015a47c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0015a480:;
    {
        cpu->r[14] = 0x0015a484u; fn_001577f0(cpu);
    }
L_0015a484:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x68u);
    }
L_0015a488:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[4] + + 0x6cu);
    }
L_0015a48c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[4] + + 0x70u);
    }
L_0015a490:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_0015a494:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4]);
    }
L_0015a498:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015a49c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0015a4a0:;
    {
        cpu->r[9] = rd32(0x0015a4a8u + + 0x53cu);
    }
L_0015a4a4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0015a4a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0015a4ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0015a4b0:;
    {
        cpu->r[1] = rd32(0x0015a4b8u + + 0x530u);
    }
L_0015a4b4:;
    {
        cpu->r[9] = add_flags(cpu, 0x0015a4bcu, cpu->r[9], 0, 0);
    }
L_0015a4b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0015a4bc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0015a4c0:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0015a4c4:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0015a4c8:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_0015a4cc:;
    {
        vfp_vadd(cpu, 17, 17, 10);
    }
L_0015a4d0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0015a4d4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0015a4d8:;
    {
        vfp_vadd(cpu, 18, 18, 11);
    }
L_0015a4dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0015a4e0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0015a4e4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0015a4e8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0015a4ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_0015a4f0:;
    {
        vfp_vadd(cpu, 19, 19, 12);
    }
L_0015a4f4:;
    {
        vfp_vadd(cpu, 17, 17, 13);
    }
L_0015a4f8:;
    {
        vfp_vadd(cpu, 18, 18, 14);
    }
L_0015a4fc:;
    {
        vfp_vadd(cpu, 19, 19, 15);
    }
L_0015a500:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0015a504:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a508:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0015a50c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a510:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0015a514:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0015a518:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015a51c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a520:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0015a524:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a528:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0015a52c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015a500;
        }
    }
L_0015a530:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015a534:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_0015a538:;
    {
        cpu->r[3] = rd32(0x0015a540u + + 0x4acu);
    }
L_0015a53c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0015a540:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a544:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0015a548:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0015a54c:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0015a550:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0015a554:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000128u, 0, 0);
    }
L_0015a558:;
    {
        cpu->r[14] = 0x0015a55cu; fn_00153624(cpu);
    }
L_0015a55c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_0015a560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_0015a564:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a568:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_0015a56c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a570:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_0015a574:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a578:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_0015a57c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_0015a580:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0015a584:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a588:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_0015a58c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015a560;
        }
    }
L_0015a590:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x64u);
    }
L_0015a594:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015a598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015a5b4;
        }
    }
L_0015a59c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015a5a0:;
    {
        cpu->r[14] = 0x0015a5a4u; fn_000b2bc8(cpu);
    }
L_0015a5a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015a5a8:;
    {
        cpu->r[14] = 0x0015a5acu; fn_0018ba20(cpu);
    }
L_0015a5ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015a5b0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_0015a5b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000098u, 0, 0);
    }
L_0015a5b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015a5bc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0015a5c0:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0015a5c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a5c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_0015a5cc:;
    {
        cpu->r[14] = 0x0015a5d0u; fn_0015364c(cpu);
    }
L_0015a5d0:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0015a5d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a5d8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3fc9u << 16);
    }
L_0015a5dc:;
    {
        cpu->r[14] = 0x0015a5e0u; fn_00154734(cpu);
    }
L_0015a5e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015a5e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_0015a5e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015a5f0u + + 0x3e8u);
    }
L_0015a5ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0015a5f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0015a5f4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xa0u);
    }
L_0015a5f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015a5fc:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x80u);
        }
    }
L_0015a600:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_0015a604:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_0015a608:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
        }
    }
L_0015a60c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000005au, 0, 0);
        }
    }
L_0015a610:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_0015a614:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
        }
    }
L_0015a618:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015a61c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0015a620:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0015a624:;
    {
        cpu->r[14] = 0x0015a628u; fn_00154514(cpu);
    }
L_0015a628:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x74u);
    }
L_0015a62c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0015a630:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015a634:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0015a638:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0015a63c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a640:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0015a644:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0015a648:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015a650u + + 0x38cu);
    }
L_0015a64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_0015a650:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a654:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a658:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a65c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a660:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a664:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015a668:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015a66c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015a670:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015a674:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015a678:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a67c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a680:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a684:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a688:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a68c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a690:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a694:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a698:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a69c:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
    }
L_0015a6a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a6a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a6a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a6ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a6b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a6b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a6b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0015a6bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_0015a6c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0015a6c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0015a6c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0015a6cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_0015a6d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0015a6d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000003u, 0, 0);
    }
L_0015a6d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0015a6dc:;
    {
        cpu->r[14] = 0x0015a6e0u; fn_001533e4(cpu);
    }
L_0015a6e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a6e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0015a6e8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0015a6ec:;
    {
        cpu->r[14] = 0x0015a6f0u; fn_001533e4(cpu);
    }
L_0015a6f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a6f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0015a6f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015a6fc:;
    {
        cpu->r[14] = 0x0015a700u; fn_001533e4(cpu);
    }
L_0015a700:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015a704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_0015a708:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015a70c:;
    {
        cpu->r[14] = 0x0015a710u; fn_001533e4(cpu);
    }
L_0015a710:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_0015a714:;
    {
        vfp_vadd(cpu, 15, 17, 15);
    }
L_0015a718:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_0015a71c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0015a720:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a724:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a728:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0015a72c:;
    {
        vfp_vadd(cpu, 14, 17, 14);
    }
L_0015a730:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a734:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_0015a738:;
    {
        vfp_vadd(cpu, 15, 18, 15);
    }
L_0015a73c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a740:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0015a744:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a748:;
    {
        vfp_vadd(cpu, 14, 19, 14);
    }
L_0015a74c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_0015a750:;
    {
        vfp_vadd(cpu, 15, 18, 15);
    }
L_0015a754:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a758:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_0015a75c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a760:;
    {
        vfp_vadd(cpu, 14, 19, 14);
    }
L_0015a764:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_0015a768:;
    {
        vfp_vadd(cpu, 15, 17, 15);
    }
L_0015a76c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a770:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_0015a774:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a778:;
    {
        vfp_vadd(cpu, 14, 18, 14);
    }
L_0015a77c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_0015a780:;
    {
        vfp_vadd(cpu, 15, 19, 15);
    }
L_0015a784:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015a788:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_0015a78c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015a790:;
    {
        vfp_vadd(cpu, 17, 17, 14);
    }
L_0015a794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_0015a798:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_0015a79c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_0015a7a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015a7a4:;
    {
        vfp_vadd(cpu, 19, 19, 15);
    }
L_0015a7a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0015a7ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0015a7b0:;
    {
        cpu->r[14] = 0x0015a7b4u; fn_00159a78(cpu);
    }
L_0015a7b4:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_0015a7b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a7bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a7c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015a7c4:;
    {
        cpu->r[14] = 0x0015a7c8u; fn_00159a78(cpu);
    }
L_0015a7c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015a7cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a7d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a7d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015a7d8:;
    {
        cpu->r[14] = 0x0015a7dcu; fn_00159a78(cpu);
    }
L_0015a7dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015a7e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a7e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a7e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015a7ec:;
    {
        cpu->r[14] = 0x0015a7f0u; fn_00159a78(cpu);
    }
L_0015a7f0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x44u);
    }
L_0015a7f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_0015a7f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a7fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a800:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015a804:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0015a808:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015a80c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a810:;
    {
        cpu->r[14] = 0x0015a814u; fn_0015991c(cpu);
    }
L_0015a814:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x48u);
    }
L_0015a818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a81c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a820:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015a824:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0015a828:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015a82c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a830:;
    {
        cpu->r[14] = 0x0015a834u; fn_0015991c(cpu);
    }
L_0015a834:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x4cu);
    }
L_0015a838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a83c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a840:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015a844:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_0015a848:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015a84c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a850:;
    {
        cpu->r[14] = 0x0015a854u; fn_0015991c(cpu);
    }
L_0015a854:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x3cu);
    }
L_0015a858:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015a85c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0015a860:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a864:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a868:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0015a86c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015a870:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a874:;
    {
        cpu->r[14] = 0x0015a878u; fn_0015991c(cpu);
    }
L_0015a878:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_0015a87c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015a7f0;
        }
    }
L_0015a880:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015a884:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_0015a888:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0015a890u + + 0x150u);
    }
L_0015a88c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000003a8u, 0, 0);
    }
L_0015a890:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x000003a4u, 0, 0);
    }
L_0015a894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015a898:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000003u, 0, 0);
    }
L_0015a89c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0015a8a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_0015a8a4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0015a8a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0015a8ac:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_0015a8b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0015a8b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0015a8b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0015a8bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0015a8c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015a8c4:;
    {
        wr16(cpu->r[7] + cpu->r[6], cpu->r[2]);
    }
L_0015a8c8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0015a8cc:;
    {
        wr16(cpu->r[14] + cpu->r[6], cpu->r[1]);
    }
L_0015a8d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0015a8d4:;
    {
        wr16(cpu->r[12] + cpu->r[6], cpu->r[3]);
    }
L_0015a8d8:;
    {
        wr16(cpu->r[0] + cpu->r[6], cpu->r[1]);
    }
L_0015a8dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a8e0:;
    {
        wr16(cpu->r[10] + cpu->r[6], cpu->r[2]);
    }
L_0015a8e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a8e8:;
    {
        wr16(cpu->r[9] + cpu->r[6], cpu->r[3]);
    }
L_0015a8ec:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0015a8f0:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015a8f4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0015a8f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015a8fc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a900:;
    {
        cpu->r[14] = 0x0015a904u; fn_0015991c(cpu);
    }
L_0015a904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a908:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a90c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0015a910:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0015a914:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a918:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a91c:;
    {
        cpu->r[14] = 0x0015a920u; fn_0015991c(cpu);
    }
L_0015a920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a924:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015a92c:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015a930:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a934:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015a938:;
    {
        cpu->r[14] = 0x0015a93cu; fn_0015991c(cpu);
    }
L_0015a93c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015a940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a944:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a948:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0015a94c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a950:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015a954:;
    {
        cpu->r[14] = 0x0015a958u; fn_0015991c(cpu);
    }
L_0015a958:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a95c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a960:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015a964:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015a968:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a96c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a970:;
    {
        cpu->r[14] = 0x0015a974u; fn_0015991c(cpu);
    }
L_0015a974:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015a978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a97c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a980:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0015a984:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015a988:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a98c:;
    {
        cpu->r[14] = 0x0015a990u; fn_0015991c(cpu);
    }
L_0015a990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a994:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a998:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015a99c:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015a9a0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a9a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a9a8:;
    {
        cpu->r[14] = 0x0015a9acu; fn_0015991c(cpu);
    }
L_0015a9ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015a9b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015a9b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015a9b8:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0015a9bc:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0015a9c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015a9c4:;
    {
        cpu->r[14] = 0x0015a9c8u; fn_0015991c(cpu);
    }
L_0015a9c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_0015a9cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0015a9d0:;
    {
        cpu->r[14] = 0x0015a9d4u; fn_001577f8(cpu);
    }
L_0015a9d4:;
    {
        goto L_0015a9f0;
    }
L_0015a9f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ccu, 0, 0);
    }
L_0015a9f4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0015a9f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015a9fcu)) return;
    }
}

/* _ZN17ParticleOptimized14updateParticleEv @ 0015a9fc (arm) */
void fn_0015a9fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015a9fc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015aa00:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0015aa04:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x30u);
    }
L_0015aa08:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x60u);
    }
L_0015aa0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015aa10:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015aa14:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[5]);
    }
L_0015aa18:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0015aa1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0015aa20:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
        }
    }
L_0015aa24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015aa30;
        }
    }
L_0015aa28:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0015aa2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015aa30u)) return;
    }
L_0015aa30:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x64u);
    }
L_0015aa34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015aa38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015aa28;
        }
    }
L_0015aa3c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8cu);
    }
L_0015aa40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0015aa44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015abdc;
        }
    }
L_0015aa48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x38u);
    }
L_0015aa4c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0015aa50:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0015aa54:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015aa58:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0015aa60u + + 0x380u);
    }
L_0015aa5c:;
    {
        vfp_vmul(cpu, 12, 15, 17);
    }
L_0015aa60:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0015aa64:;
    {
        cpu->r[14] = 0x0015aa68u; imp_cosf(cpu); /* cosf */
    }
L_0015aa68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0015aa6c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015aa70:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_0015aa74:;
    {
        vfp_vmul(cpu, 16, 15, 17);
    }
L_0015aa78:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_0015aa7c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0015aa80:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0015aa84:;
    {
        vfp_vmul(cpu, 18, 19, 13);
    }
L_0015aa88:;
    {
        cpu->r[14] = 0x0015aa8cu; imp_cosf(cpu); /* cosf */
    }
L_0015aa8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_0015aa90:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0015aa94:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0015aa98:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0015aa9c:;
    {
        vfp_vmla(cpu, 15, 18, 14);
    }
L_0015aaa0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0015aaa4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aaa8:;
    {
        cpu->r[14] = 0x0015aaacu; imp_sinf(cpu); /* sinf */
    }
L_0015aaac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015aab0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[6];
    }
L_0015aab4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015aab8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_0015aabc:;
    {
        vfp_vmla(cpu, 15, 18, 12);
    }
L_0015aac0:;
    {
        vfp_vmul(cpu, 12, 14, 17);
    }
L_0015aac4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aac8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0015aacc:;
    {
        cpu->r[14] = 0x0015aad0u; imp_sinf(cpu); /* sinf */
    }
L_0015aad0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0015aad4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x28u);
    }
L_0015aad8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x24u);
    }
L_0015aadc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_0015aae0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0015aae4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[6] + + 0x34u);
        }
    }
L_0015aae8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0015aaec:;
    {
        vfp_vmla(cpu, 15, 19, 13);
    }
L_0015aaf0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aaf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015adb4;
        }
    }
L_0015aaf8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015aafc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015adc4;
        }
    }
L_0015ab00:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0015ab04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
        }
    }
L_0015ab08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 0);
        }
    }
L_0015ab0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
        }
    }
L_0015ab10:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = rd32(cpu->r[4] + + 0x40u);
        }
    }
L_0015ab14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
        }
    }
L_0015ab18:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
        }
    }
L_0015ab1c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0015ab20:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
        }
    }
L_0015ab24:;
    {
        cpu->r[14] = 0x0015ab28u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015ab28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0015ab2c:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_0015ab30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x68u);
    }
L_0015ab34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ab38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ac04;
        }
    }
L_0015ab3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0015ab40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015ad04;
        }
    }
L_0015ab44:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0015ab48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015ab4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015ab54u + + 0x290u);
    }
L_0015ab50:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x38u);
    }
L_0015ab54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_0015ab58:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0015ab5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_0015ab60:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015ab64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_0015ab68:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_0015ab6c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0015ab70:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0015ab74:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ab78:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015ab7c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015ab80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015ab84:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ab88:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3cu);
    }
L_0015ab8c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0015ab90:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0015ab94:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0015ab98:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[1] = v;
    }
L_0015ab9c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0015aba0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015aba4:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015aba8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015abac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015abb0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0015abb4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0015abb8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015abbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015abc0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015abc4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015abc8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015abcc:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015abd0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015abd4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015abd8:;
    {
        goto L_0015acb0;
    }
L_0015abdc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_0015abe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0015abe4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0015abe8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015aa48;
        }
    }
L_0015abec:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x38u);
    }
L_0015abf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x84u);
    }
L_0015abf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0015abf8:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_0015abfc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0015ac00:;
    {
        goto L_0015aa50;
    }
L_0015ac04:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[7];
    }
L_0015ac08:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0015ac0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x38u);
    }
L_0015ac10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015ac18u + + 0x1ccu);
    }
L_0015ac14:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x44u);
    }
L_0015ac18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015ac1c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0015ac20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ac48;
        }
    }
L_0015ac24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015ac28:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0015ac2c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ac30:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015ac34:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015ac38:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ac3c:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_0015ac40:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015ac44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015ac48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3cu);
    }
L_0015ac4c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_0015ac50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015ac54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ac7c;
        }
    }
L_0015ac58:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015ac5c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0015ac60:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015ac64:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015ac68:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015ac6c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ac70:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_0015ac74:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015ac78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015ac7c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4cu);
    }
L_0015ac80:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0015ac84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015ac88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015acb0;
        }
    }
L_0015ac8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015ac90:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0015ac94:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0015ac98:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015ac9c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015aca0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015aca4:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_0015aca8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015acac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015acb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_0015acb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0015acb8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015acbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015acf4;
        }
    }
L_0015acc0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_0015acc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015acc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015acd0u + + 0x114u);
    }
L_0015accc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015acd0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_0015acd4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015acd8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015acdc:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0015ace0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ace4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015ace8:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015acec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015acf0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015acf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015acf8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0015acfc:;
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
L_0015ad00:;
    {
        return fn_0015a464(cpu);
    }
L_0015ad04:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_0015ad08:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0015ad0c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015ad10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015ad18u + + 0xccu);
    }
L_0015ad14:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x44u);
    }
L_0015ad18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0015ad1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_0015ad20:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0015ad24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x54u);
    }
L_0015ad28:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0015ad2c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0015ad30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_0015ad34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_0015ad38:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0015ad3c:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0015ad40:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ad44:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015ad48:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_0015ad4c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015ad50:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015ad54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ad58:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x48u);
    }
L_0015ad5c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x68u);
    }
L_0015ad60:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0015ad64:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0015ad68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0015ad6c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0015ad70:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0015ad74:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0015ad78:;
    {
        vfp_vmla(cpu, 13, 12, 14);
    }
L_0015ad7c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_0015ad80:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015ad84:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x68u);
    }
L_0015ad88:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4cu);
    }
L_0015ad8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0015ad90:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0015ad94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0015ad98:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0015ad9c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0015ada0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015ada4:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0015ada8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015adac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015adb0:;
    {
        goto L_0015acb0;
    }
L_0015adb4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x34u);
    }
L_0015adb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015adbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ab30;
        }
    }
L_0015adc0:;
    {
        goto L_0015aaf8;
    }
L_0015adc4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_0015adc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_0015adcc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[0] = v;
    }
L_0015add0:;
    {
        cpu->r[14] = 0x0015add4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015add4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0015add8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_0015addc:;
    {
        goto L_0015ab30;
    }
}

/* _ZN17ParticleOptimizedD1Ev @ 0015ade8 (arm) */
void fn_0015ade8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ade8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015adec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xd8u);
    }
L_0015adf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015adf4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015adf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ae14;
        }
    }
L_0015adfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015ae00:;
    {
        cpu->r[14] = 0x0015ae04u; fn_000b2bc8(cpu);
    }
L_0015ae04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015ae08:;
    {
        cpu->r[14] = 0x0015ae0cu; fn_0018ba20(cpu);
    }
L_0015ae0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015ae10:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[3]);
    }
L_0015ae14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015ae18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ae1cu)) return;
    }
}

/* _ZN18ParticleParametersC2Ev @ 0015ae1c (arm) */
void fn_0015ae1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ae1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18ParticleParametersC1Ev @ 0015ae20 (arm) */
void fn_0015ae20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ae20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18ParticleParametersaSERS_ @ 0015ae24 (arm) */
void fn_0015ae24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ae24:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0015ae28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_0015ae2c:;
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
L_0015ae30:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ae34:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x70u);
    }
L_0015ae38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_0015ae3c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015ae40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ae44:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0015ae48:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_0015ae4c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x30u);
    }
L_0015ae50:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015ae54:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_0015ae58:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x24u);
    }
L_0015ae5c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x28u);
    }
L_0015ae60:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015ae64:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x6cu);
    }
L_0015ae68:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x2cu);
    }
L_0015ae6c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x34u);
    }
L_0015ae70:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0015ae74:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0015ae78:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0xcu);
    }
L_0015ae7c:;
    {
        cpu->r[11] = rd32(cpu->r[1] + + 0x20u);
    }
L_0015ae80:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0015ae84:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_0015ae88:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[10]);
    }
L_0015ae8c:;
    {
        wr32(cpu->r[0], cpu->r[8]);
    }
L_0015ae90:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[7]);
    }
L_0015ae94:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[6]);
    }
L_0015ae98:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[5]);
    }
L_0015ae9c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[4]);
    }
L_0015aea0:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[12]);
    }
L_0015aea4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[9]);
    }
L_0015aea8:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[11]);
    }
L_0015aeac:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_0015aeb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x74u);
    }
L_0015aeb4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0015aeb8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aebc:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x3cu);
    }
L_0015aec0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x78u);
    }
L_0015aec4:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x40u);
    }
L_0015aec8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aecc:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[2]);
    }
L_0015aed0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x7cu);
    }
L_0015aed4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x64u);
    }
L_0015aed8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015aedc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x44u);
    }
L_0015aee0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x48u);
    }
L_0015aee4:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_0015aee8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x68u);
    }
L_0015aeec:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4cu);
    }
L_0015aef0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x50u);
    }
L_0015aef4:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_0015aef8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x80u);
    }
L_0015aefc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x54u);
    }
L_0015af00:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x5cu);
    }
L_0015af04:;
    {
        cpu->r[11] = rd32(cpu->r[1] + + 0x60u);
    }
L_0015af08:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_0015af0c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x84u);
    }
L_0015af10:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[10]);
    }
L_0015af14:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[8]);
    }
L_0015af18:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[7]);
    }
L_0015af1c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[6]);
    }
L_0015af20:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[5]);
    }
L_0015af24:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[4]);
    }
L_0015af28:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[12]);
    }
L_0015af2c:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[9]);
    }
L_0015af30:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[11]);
    }
L_0015af34:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[2]);
    }
L_0015af38:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xa0u);
    }
L_0015af3c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0xc0u);
    }
L_0015af40:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x88u);
    }
L_0015af44:;
    {
        wr32(cpu->r[0] + + 0xa0u, cpu->r[2]);
    }
L_0015af48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xacu);
    }
L_0015af4c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x8cu);
    }
L_0015af50:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x90u);
    }
L_0015af54:;
    {
        wr32(cpu->r[0] + + 0xacu, cpu->r[2]);
    }
L_0015af58:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb0u);
    }
L_0015af5c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x94u);
    }
L_0015af60:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x98u);
    }
L_0015af64:;
    {
        wr32(cpu->r[0] + + 0xb0u, cpu->r[2]);
    }
L_0015af68:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb4u);
    }
L_0015af6c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x9cu);
    }
L_0015af70:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0xa4u);
    }
L_0015af74:;
    {
        cpu->r[11] = rd32(cpu->r[1] + + 0xa8u);
    }
L_0015af78:;
    {
        wr32(cpu->r[0] + + 0xb4u, cpu->r[2]);
    }
L_0015af7c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb8u);
    }
L_0015af80:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xbcu);
    }
L_0015af84:;
    {
        wr32(cpu->r[0] + + 0xc0u, cpu->r[10]);
    }
L_0015af88:;
    {
        wr32(cpu->r[0] + + 0xb8u, cpu->r[2]);
    }
L_0015af8c:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[8]);
    }
L_0015af90:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[7]);
    }
L_0015af94:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[6]);
    }
L_0015af98:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[5]);
    }
L_0015af9c:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[4]);
    }
L_0015afa0:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[12]);
    }
L_0015afa4:;
    {
        wr32(cpu->r[0] + + 0xa4u, cpu->r[9]);
    }
L_0015afa8:;
    {
        wr32(cpu->r[0] + + 0xa8u, cpu->r[11]);
    }
L_0015afac:;
    {
        wr32(cpu->r[0] + + 0xbcu, cpu->r[1]);
    }
L_0015afb0:;
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
L_0015afb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18ParticleParametersC1ERS_ @ 0015afb8 (arm) */
void fn_0015afb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015afb8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015afbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015afc0:;
    {
        cpu->r[14] = 0x0015afc4u; fn_0015ae24(cpu);
    }
L_0015afc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015afc8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015afccu)) return;
    }
}

/* _ZN18ParticleParametersC2ERS_ @ 0015afcc (arm) */
void fn_0015afcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015afcc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015afd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015afd4:;
    {
        cpu->r[14] = 0x0015afd8u; fn_0015ae24(cpu);
    }
L_0015afd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015afdc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015afe0u)) return;
    }
}

/* _ZN18ParticleParametersaSEPi @ 0015afe0 (arm) */
void fn_0015afe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015afe0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x70u);
    }
L_0015afe4:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_0015afe8:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0015afec:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015aff0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x34u);
    }
L_0015aff4:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_0015aff8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x24u);
    }
L_0015affc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_0015b000:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x28u);
    }
L_0015b004:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_0015b008:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2cu);
    }
L_0015b00c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_0015b010:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x30u);
    }
L_0015b014:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0015b018:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0015b01c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015b020:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0015b024:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015b028:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x18u);
    }
L_0015b02c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x20u);
    }
L_0015b030:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015b034:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_0015b038:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0015b03c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015b040:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b044:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_0015b048:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015b04c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_0015b050:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0015b054:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x14u);
    }
L_0015b058:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015b05c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0015b060:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0015b064:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3cu);
    }
L_0015b068:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b06c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_0015b070:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x40u);
    }
L_0015b074:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_0015b078:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x44u);
    }
L_0015b07c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_0015b080:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x48u);
    }
L_0015b084:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_0015b088:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4cu);
    }
L_0015b08c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_0015b090:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x50u);
    }
L_0015b094:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_0015b098:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x54u);
    }
L_0015b09c:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_0015b0a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0015b0a4:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[2]);
    }
L_0015b0a8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x5cu);
    }
L_0015b0ac:;
    {
        wr32(cpu->r[0] + + 0x58u, cpu->r[2]);
    }
L_0015b0b0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x60u);
    }
L_0015b0b4:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[2]);
    }
L_0015b0b8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x64u);
    }
L_0015b0bc:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0015b0c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x68u);
    }
L_0015b0c4:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_0015b0c8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x6cu);
    }
L_0015b0cc:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_0015b0d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x74u);
    }
L_0015b0d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x78u);
    }
L_0015b0d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x7cu);
    }
L_0015b0dc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015b0e0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x80u);
    }
L_0015b0e4:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_0015b0e8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x84u);
    }
L_0015b0ec:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015b0f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015b0f4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015b0f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015b0fc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b100:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[2]);
    }
L_0015b104:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x88u);
    }
L_0015b108:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[2]);
    }
L_0015b10c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8cu);
    }
L_0015b110:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_0015b114:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x90u);
    }
L_0015b118:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_0015b11c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x94u);
    }
L_0015b120:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0015b124:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x98u);
    }
L_0015b128:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[2]);
    }
L_0015b12c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x9cu);
    }
L_0015b130:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[2]);
    }
L_0015b134:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xa0u);
    }
L_0015b138:;
    {
        wr32(cpu->r[0] + + 0xa0u, cpu->r[2]);
    }
L_0015b13c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xa4u);
    }
L_0015b140:;
    {
        wr32(cpu->r[0] + + 0xa4u, cpu->r[2]);
    }
L_0015b144:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xa8u);
    }
L_0015b148:;
    {
        wr32(cpu->r[0] + + 0xa8u, cpu->r[2]);
    }
L_0015b14c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xacu);
    }
L_0015b150:;
    {
        wr32(cpu->r[0] + + 0xacu, cpu->r[2]);
    }
L_0015b154:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb0u);
    }
L_0015b158:;
    {
        wr32(cpu->r[0] + + 0xb0u, cpu->r[2]);
    }
L_0015b15c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb4u);
    }
L_0015b160:;
    {
        wr32(cpu->r[0] + + 0xb4u, cpu->r[2]);
    }
L_0015b164:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb8u);
    }
L_0015b168:;
    {
        wr32(cpu->r[0] + + 0xb8u, cpu->r[2]);
    }
L_0015b16c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xbcu);
    }
L_0015b170:;
    {
        wr32(cpu->r[0] + + 0xbcu, cpu->r[2]);
    }
L_0015b174:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xc0u);
    }
L_0015b178:;
    {
        wr32(cpu->r[0] + + 0xc0u, cpu->r[2]);
    }
L_0015b17c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem11GetFrmCountEi @ 0015b180 (arm) */
void fn_0015b180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b180:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0015b184:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem7GetTypeEv @ 0015b188 (arm) */
void fn_0015b188(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b188:;
    {
        cpu->r[0] = 0x0000005fu;
    }
L_0015b18c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem17GetMeshGroupCountEi @ 0015b190 (arm) */
void fn_0015b190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b190:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0015b194:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem18GetMeshGroupShaderEii @ 0015b198 (arm) */
void fn_0015b198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b198:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b19c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem17GetMeshGroupVertsEii @ 0015b1a0 (arm) */
void fn_0015b1a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b1a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem17GetMeshGroupFacesEii @ 0015b1a8 (arm) */
void fn_0015b1a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b1ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem17GetBoundingCenterEv @ 0015b1b0 (arm) */
void fn_0015b1b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b1b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystem17GetBoundingRadiusEv @ 0015b1b8 (arm) */
void fn_0015b1b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b1bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14ParticleSystemD1Ev @ 0015b1c0 (arm) */
void fn_0015b1c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1c0:;
    {
        cpu->r[3] = rd32(0x0015b1c8u + + 0x24u);
    }
L_0015b1c4:;
    {
        cpu->r[2] = rd32(0x0015b1ccu + + 0x24u);
    }
L_0015b1c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015b1d0u, cpu->r[3], 0, 0);
    }
L_0015b1cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015b1d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015b1d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015b1d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015b1dc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015b1e0:;
    {
        cpu->r[14] = 0x0015b1e4u; fn_00140fb4(cpu);
    }
L_0015b1e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015b1e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b1ecu)) return;
    }
}

/* _ZN14ParticleSystem4LoadEP8LZMAFilePttPssS3_sbit @ 0015b1f4 (arm) */
void fn_0015b1f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b1f4:;
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
L_0015b1f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015b1fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000003dcu, 1, 0);
    }
L_0015b200:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0015b204:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0015b208:;
    {
        cpu->r[14] = 0x0015b20cu; fn_000fc678(cpu);
    }
L_0015b20c:;
    {
        cpu->r[7] = rd32(0x0015b214u + + 0xacu);
    }
L_0015b210:;
    {
        cpu->r[7] = add_flags(cpu, 0x0015b218u, cpu->r[7], 0, 0);
    }
L_0015b214:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0015b218:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0015b21c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015b220:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015b2b4;
        }
    }
L_0015b224:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0015b228:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0015b22c:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0015b230:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_0015b234:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0015b238:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0015b23c:;
    {
        cpu->r[14] = 0x0015b240u; fn_000fc628(cpu);
    }
L_0015b240:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[0]);
    }
L_0015b244:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0015b248:;
    {
        sub_flags(cpu, cpu->r[9], 0x000000c4u, 1, 1);
    }
L_0015b24c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b238;
        }
    }
L_0015b250:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0015b254:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0015b258:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000c4u, 0, 0);
    }
L_0015b25c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_0015b260:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015b234;
        }
    }
L_0015b264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015b268:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015b2b4;
        }
    }
L_0015b26c:;
    {
        cpu->r[10] = rd32(0x0015b274u + + 0x50u);
    }
L_0015b270:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015b274:;
    {
        uint32_t v = cpu->r[9] * cpu->r[4]; cpu->r[1] = v;
    }
L_0015b278:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015b27c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0015b280:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_0015b284:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
    }
L_0015b288:;
    {
        cpu->r[14] = 0x0015b28cu; fn_0015afe0(cpu);
    }
L_0015b28c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_0015b290:;
    {
        cpu->r[1] = rd16(cpu->r[6] + + 0x38u);
    }
L_0015b294:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015b298:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015b29c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000c4u, 0, 0);
    }
L_0015b2a0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0015b2a4:;
    {
        cpu->r[14] = 0x0015b2a8u; fn_00135d9c(cpu);
    }
L_0015b2a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_0015b2ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0015b2b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015b274;
        }
    }
L_0015b2b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015b2b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000003dcu, 0, 0);
    }
L_0015b2bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b2c0u)) return;
    }
}

/* _ZN14ParticleSystemC1Ev @ 0015b2c8 (arm) */
void fn_0015b2c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b2c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015b2cc:;
    {
        cpu->r[6] = rd32(0x0015b2d4u + + 0x44u);
    }
L_0015b2d0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015b2d4:;
    {
        cpu->r[14] = 0x0015b2d8u; fn_00140f34(cpu);
    }
L_0015b2d8:;
    {
        cpu->r[3] = rd32(0x0015b2e0u + + 0x3cu);
    }
L_0015b2dc:;
    {
        cpu->r[6] = add_flags(cpu, 0x0015b2e4u, cpu->r[6], 0, 0);
    }
L_0015b2e0:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_0015b2e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015b2e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0015b2ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0015b2f0:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x0000001cu;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_0015b2f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_0015b2f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000c4u, 0, 0);
    }
L_0015b2fc:;
    {
        cpu->r[14] = 0x0015b300u; fn_0015ae20(cpu);
    }
L_0015b300:;
    {
        sub_flags(cpu, cpu->r[4], 0x000003d4u, 1, 1);
    }
L_0015b304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b2f4;
        }
    }
L_0015b308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015b30c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015b310:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[3]);
    }
L_0015b314:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b318u)) return;
    }
}

/* _ZN14ParticleSystemC2Ev @ 0015b320 (arm) */
void fn_0015b320(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b320:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015b324:;
    {
        cpu->r[6] = rd32(0x0015b32cu + + 0x44u);
    }
L_0015b328:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015b32c:;
    {
        cpu->r[14] = 0x0015b330u; fn_00140f34(cpu);
    }
L_0015b330:;
    {
        cpu->r[3] = rd32(0x0015b338u + + 0x3cu);
    }
L_0015b334:;
    {
        cpu->r[6] = add_flags(cpu, 0x0015b33cu, cpu->r[6], 0, 0);
    }
L_0015b338:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_0015b33c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015b340:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0015b344:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0015b348:;
    {
        uint32_t wb_tmp = cpu->r[5] + 0x0000001cu;
        wr32(cpu->r[5], cpu->r[3]);
        cpu->r[5] = wb_tmp;
    }
L_0015b34c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_0015b350:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000c4u, 0, 0);
    }
L_0015b354:;
    {
        cpu->r[14] = 0x0015b358u; fn_0015ae20(cpu);
    }
L_0015b358:;
    {
        sub_flags(cpu, cpu->r[4], 0x000003d4u, 1, 1);
    }
L_0015b35c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b34c;
        }
    }
L_0015b360:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015b364:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015b368:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[3]);
    }
L_0015b36c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b370u)) return;
    }
}

/* _ZN14ParticleSystemD0Ev @ 0015b378 (arm) */
void fn_0015b378(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b378:;
    {
        cpu->r[3] = rd32(0x0015b380u + + 0x2cu);
    }
L_0015b37c:;
    {
        cpu->r[2] = rd32(0x0015b384u + + 0x2cu);
    }
L_0015b380:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015b388u, cpu->r[3], 0, 0);
    }
L_0015b384:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015b388:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015b38c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015b390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015b394:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015b398:;
    {
        cpu->r[14] = 0x0015b39cu; fn_00140fb4(cpu);
    }
L_0015b39c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015b3a0:;
    {
        cpu->r[14] = 0x0015b3a4u; fn_0018ba20(cpu);
    }
L_0015b3a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015b3a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b3acu)) return;
    }
}

/* _ZN11CParticle3DC2Ev @ 0015b3b4 (arm) */
void fn_0015b3b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b3b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b3bcu + + 0x60u);
    }
L_0015b3b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015b3bc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3c0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3c4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3cc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3d0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3dc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3e0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3e8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3f4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b3fc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b400:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b404:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0015b408:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b410u + + 0x10u);
    }
L_0015b40c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b410:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b414:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b418:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3DC1Ev @ 0015b424 (arm) */
void fn_0015b424(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b424:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b42cu + + 0x60u);
    }
L_0015b428:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015b42c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b430:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b434:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b438:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b43c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b440:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b444:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b448:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b44c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b450:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b454:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b458:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b45c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b460:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b464:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b468:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b46c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b470:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b474:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0015b478:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b480u + + 0x10u);
    }
L_0015b47c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b480:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b484:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b488:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3DD2Ev @ 0015b494 (arm) */
void fn_0015b494(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b494:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3DD1Ev @ 0015b498 (arm) */
void fn_0015b498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b498:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3D4InitEiP17StaticSceneObjecti @ 0015b49c (arm) */
void fn_0015b49c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b49c:;
    {
        cpu->r[12] = rd32(0x0015b4a4u + + 0x80u);
    }
L_0015b4a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b4a8u + + 0x70u);
    }
L_0015b4a4:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_0015b4a8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4ac:;
    {
        cpu->r[2] = rd32(0x0015b4b4u + + 0x74u);
    }
L_0015b4b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0015b4b8u, cpu->r[12], 0, 0);
    }
L_0015b4b4:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[1]);
    }
L_0015b4b8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4bc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4c0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4c4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0015b4c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4cc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4d0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4dc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0015b4e0:;
    {
        cpu->r[2] = 0x000014fcu;
    }
L_0015b4e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4e8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b4f8u + + 0x24u);
    }
L_0015b4f4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0015b4f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b4fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b504u + + 0x1cu);
    }
L_0015b500:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b504:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015b508:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015b50c:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[3]);
    }
L_0015b510:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0015b514:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3D6SetPosEP8Vector3d @ 0015b52c (arm) */
void fn_0015b52c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b52c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0015b530:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0015b534:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0015b538:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015b53c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_0015b540:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0015b544:;
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
L_0015b548:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015b54c:;
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
L_0015b550:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015b554:;
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
L_0015b558:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015b55c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0015b560:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3D6UpdateEi @ 0015b564 (arm) */
void fn_0015b564(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b564:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015b568:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0015b56c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0015b570:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x60u);
    }
L_0015b574:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0015b578:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0015b57c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0015b580:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[3], cpu->r[2]);
        }
    }
L_0015b584:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015b64c;
        }
    }
L_0015b588:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0015b58c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015b590:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015b598u + + 0xbcu);
    }
L_0015b594:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x28u);
    }
L_0015b598:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0x2cu);
    }
L_0015b59c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x30u);
    }
L_0015b5a0:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[3] + + 0x44u);
    }
L_0015b5a4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_0015b5a8:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[3] + + 0x40u);
    }
L_0015b5ac:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0015b5b0:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0015b5b4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x50u);
    }
L_0015b5b8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x54u);
    }
L_0015b5bc:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0015b5c0:;
    {
        vfp_vdiv(cpu, 15, 12, 15);
    }
L_0015b5c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0015b5ccu + + 0x8cu);
    }
L_0015b5c8:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[3] + + 0x4cu);
    }
L_0015b5cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_0015b5d0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[3] + + 0x68u);
    }
L_0015b5d4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x6cu);
    }
L_0015b5d8:;
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
L_0015b5dc:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + + 0x70u);
    }
L_0015b5e0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x74u);
    }
L_0015b5e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_0015b5e8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015b5ec:;
    {
        vfp_vmul(cpu, 18, 15, 15);
    }
L_0015b5f0:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_0015b5f4:;
    {
        vfp_vmul(cpu, 12, 18, 12);
    }
L_0015b5f8:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0015b5fc:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0015b600:;
    {
        vfp_vmla(cpu, 13, 12, 16);
    }
L_0015b604:;
    {
        vfp_vmla(cpu, 15, 12, 1);
    }
L_0015b608:;
    {
        vfp_vmla(cpu, 14, 12, 0);
    }
L_0015b60c:;
    {
        vfp_vadd(cpu, 11, 4, 11);
    }
L_0015b610:;
    {
        vfp_vadd(cpu, 10, 5, 10);
    }
L_0015b614:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0015b618:;
    {
        vfp_vadd(cpu, 12, 2, 3);
    }
L_0015b61c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_0015b620:;
    {
        vfp_vadd(cpu, 13, 13, 10);
    }
L_0015b624:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0015b628:;
    {
        vfp_vadd(cpu, 15, 15, 11);
    }
L_0015b62c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015b630:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_0015b634:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b638:;
    {
        vfp_vadd(cpu, 13, 6, 7);
    }
L_0015b63c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015b640:;
    {
        vfp_vadd(cpu, 15, 8, 9);
    }
L_0015b644:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015b648:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b64c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0015b650:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CParticle3D6RenderEv @ 0015b65c (arm) */
void fn_0015b65c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b65c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015b660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015b664:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x64u);
    }
L_0015b668:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0015b66c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015b670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b7b0;
        }
    }
L_0015b674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015b678:;
    {
        cpu->r[14] = 0x0015b67cu; fn_00153600(cpu);
    }
L_0015b67c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0015b680:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0015b684:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0015b688:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0015b68c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0015b690:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0015b694:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0015b698:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0015b69c:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0015b6a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0015b6a4:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_0015b6a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b6ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015b6b0:;
    {
        cpu->r[14] = 0x0015b6b4u; fn_00155f80(cpu);
    }
L_0015b6b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0015b6b8:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0015b6bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0015b6c0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b6c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0015b6c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b6cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0015b6d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b6d4:;
    {
        cpu->r[14] = 0x0015b6d8u; fn_000b5fc4(cpu);
    }
L_0015b6d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015b6dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015b6e0:;
    {
        cpu->r[14] = 0x0015b6e4u; imp_atan2f(cpu); /* atan2f */
    }
L_0015b6e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0015b6e8:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0015b6ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0015b6f0:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0015b6f4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015b6f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015b6fc:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0015b700:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015b704:;
    {
        cpu->r[14] = 0x0015b708u; imp_atan2f(cpu); /* atan2f */
    }
L_0015b708:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x64u);
    }
L_0015b70c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0015b710:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b714:;
    {
        cpu->r[14] = 0x0015b718u; fn_00153600(cpu);
    }
L_0015b718:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0015b71c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0015b720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b724:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0015b728:;
    {
        cpu->r[14] = 0x0015b72cu; fn_00153e90(cpu);
    }
L_0015b72c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b730:;
    {
        uint32_t v = cpu->r[6] ^ 0x80000000u; cpu->r[1] = v;
    }
L_0015b734:;
    {
        cpu->r[14] = 0x0015b738u; fn_00154350(cpu);
    }
L_0015b738:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b73c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_0015b740:;
    {
        cpu->r[14] = 0x0015b744u; fn_00154734(cpu);
    }
L_0015b744:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b748:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0015b74c:;
    {
        cpu->r[14] = 0x0015b750u; fn_00154514(cpu);
    }
L_0015b750:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0015b754:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_0015b758:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x38u);
    }
L_0015b75c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015b760:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0015b764:;
    {
        cpu->r[14] = 0x0015b768u; fn_00153d28(cpu);
    }
L_0015b768:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0015b76c:;
    {
        cpu->r[14] = 0x0015b770u; fn_000ea4dc(cpu);
    }
L_0015b770:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_0015b774:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015b778:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0015b77c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015b780:;
    {
        cpu->r[14] = 0x0015b788u;
    }
L_0015b784:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b788u)) return;
    }
L_0015b788:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x58u);
    }
L_0015b78c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0015b790:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_0015b794:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_0015b798:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x3cu);
    }
L_0015b79c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0015b7a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0015b7a4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0015b7a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015b7ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015b7b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0015b7b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b7b8u)) return;
    }
}

/* _ZN11CParticle3D4InitEiii @ 0015b7b8 (arm) */
void fn_0015b7b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b7b8:;
    {
        cpu->r[12] = rd32(0x0015b7c0u + + 0x50u);
    }
L_0015b7bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015b7c0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0015b7c4:;
    {
        cpu->r[1] = rd32(0x0015b7ccu + + 0x48u);
    }
L_0015b7c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0015b7d0u, cpu->r[12], 0, 0);
    }
L_0015b7cc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015b7d0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0015b7d4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0015b7d8:;
    {
        cpu->r[14] = 0x00001c54u;
    }
L_0015b7dc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0015b7e0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0015b7e4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0015b7e8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0015b7ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0015b7f0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_0015b7f4:;
    {
        cpu->r[14] = 0x0015b7f8u; fn_0015b818(cpu);
    }
L_0015b7f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015b7fc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0015b800:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015b804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015b808:;
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
L_0015b80c:;
    {
        return fn_0015b49c(cpu);
    }
}

/* _ZN13CParticlePool6GetObjEi @ 0015b818 (arm) */
void fn_0015b818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b818:;
    {
        cpu->r[3] = 0x00008ca4u;
    }
L_0015b81c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015b820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015b824:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0015b828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b86c;
        }
    }
L_0015b82c:;
    {
        cpu->r[3] = 0x00008ca8u;
    }
L_0015b830:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015b834:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015b838:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0015b83c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b86c;
        }
    }
L_0015b840:;
    {
        cpu->r[3] = 0x00008cacu;
    }
L_0015b844:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015b848:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015b84c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0015b850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b86c;
        }
    }
L_0015b854:;
    {
        cpu->r[3] = 0x00008cb0u;
    }
L_0015b858:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015b85c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015b860:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015b864:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015b868:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0015b86c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002300u, 0, 0);
    }
L_0015b870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002cu, 0, 0);
    }
L_0015b874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0015b878:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0015b87c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CParticlePool15GetFreeParticleEv @ 0015b880 (arm) */
void fn_0015b880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b880:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0015b884:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015b888:;
    {
        cpu->r[5] = 0x0000012bu;
    }
L_0015b88c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0015b890:;
    {
        goto L_0015b89c;
    }
L_0015b894:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000012cu, 1, 1);
    }
L_0015b898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b8e0;
        }
    }
L_0015b89c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0015b8a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015b8a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0015b8a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015b8ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0015b8b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0015b8b4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[12] = v;
    }
L_0015b8b8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 3u, &shc), 1, 0);
    }
L_0015b8bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0015b8c0:;
    {
        cpu->r[4] = rd8(cpu->r[12] + + 0x4u);
    }
L_0015b8c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015b8c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b894;
        }
    }
L_0015b8cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0015b8d0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015b8d4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0015b8d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0015b8dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015b8e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0015b8e4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015b8e8:;
    {
        goto L_0015b8d4;
    }
}

/* _ZN13CParticlePool7CleanupEv @ 0015b8ec (arm) */
void fn_0015b8ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b8ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015b8f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0015b8f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00008c00u, 0, 0);
    }
L_0015b8f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015b8fc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0015b900:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000b4u, 0, 0);
    }
L_0015b904:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015b908:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0015b90c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015b910:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0015b914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b928;
        }
    }
L_0015b918:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015b91c:;
    {
        cpu->r[14] = 0x0015b924u;
    }
L_0015b920:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b924u)) return;
    }
L_0015b924:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_0015b928:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_0015b92c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0015b930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b904;
        }
    }
L_0015b934:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015b938:;
    {
        cpu->r[0] = 0x00008ca0u;
    }
L_0015b93c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0015b940:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015b944:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0015b948:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0015b94c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000078u, 0, 0);
    }
L_0015b950:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0015b954:;
    {
        wr8(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_0015b958:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b948;
        }
    }
L_0015b95c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b960u)) return;
    }
}

/* _ZN13CParticlePool6RenderEv @ 0015b960 (arm) */
void fn_0015b960(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b960:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015b964:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015b968:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015b96c:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0015b970:;
    {
        goto L_0015b980;
    }
L_0015b974:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015b978:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000012cu, 1, 1);
    }
L_0015b97c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b9b4;
        }
    }
L_0015b980:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0015b984:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_0015b988:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_0015b98c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015b990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b974;
        }
    }
L_0015b994:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 7u, &shc); cpu->r[0] = v;
    }
L_0015b998:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 1, 0);
    }
L_0015b99c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015b9a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0015b9a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015b9a8:;
    {
        cpu->r[14] = 0x0015b9acu; fn_0015b65c(cpu);
    }
L_0015b9ac:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000012cu, 1, 1);
    }
L_0015b9b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b980;
        }
    }
L_0015b9b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015b9b8u)) return;
    }
}

/* _ZN13CParticlePool6UpdateEv @ 0015b9b8 (arm) */
void fn_0015b9b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015b9b8:;
    {
        cpu->r[3] = rd32(0x0015b9c0u + + 0x70u);
    }
L_0015b9bc:;
    {
        cpu->r[2] = rd32(0x0015b9c4u + + 0x70u);
    }
L_0015b9c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015b9c8u, cpu->r[3], 0, 0);
    }
L_0015b9c4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015b9c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015b9cc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015b9d0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015b9d4:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0015b9d8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0015b9dc:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_0015b9e0:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0015b9e4:;
    {
        goto L_0015b9f4;
    }
L_0015b9e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015b9ec:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000012cu, 1, 1);
    }
L_0015b9f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ba2c;
        }
    }
L_0015b9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0015b9f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_0015b9fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_0015ba00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ba04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015b9e8;
        }
    }
L_0015ba08:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 7u, &shc); cpu->r[0] = v;
    }
L_0015ba0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0015ba10:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 1, 0);
    }
L_0015ba14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015ba18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0015ba1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015ba20:;
    {
        cpu->r[14] = 0x0015ba24u; fn_0015b564(cpu);
    }
L_0015ba24:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000012cu, 1, 1);
    }
L_0015ba28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015b9f4;
        }
    }
L_0015ba2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ba30u)) return;
    }
}

/* _ZN13CParticlePool4InitEv @ 0015ba38 (arm) */
void fn_0015ba38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ba38:;
    {
        cpu->r[3] = 0x00008ca4u;
    }
L_0015ba3c:;
    {
        cpu->r[2] = 0x000001feu;
    }
L_0015ba40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015ba44:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015ba48:;
    {
        cpu->r[3] = 0x00008ca8u;
    }
L_0015ba4c:;
    {
        cpu->r[2] = 0x000001ffu;
    }
L_0015ba50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00008c00u, 0, 0);
    }
L_0015ba54:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015ba58:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015ba5c:;
    {
        cpu->r[3] = 0x00008cacu;
    }
L_0015ba60:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_0015ba64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000a4u, 0, 0);
    }
L_0015ba68:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015ba6c:;
    {
        cpu->r[3] = 0x00008cb0u;
    }
L_0015ba70:;
    {
        cpu->r[2] = 0x00000201u;
    }
L_0015ba74:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015ba78:;
    {
        cpu->r[14] = 0x0015ba7cu; fn_0015b8ec(cpu);
    }
L_0015ba7c:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_0015ba80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015ba84:;
    {
        cpu->r[14] = 0x0015ba88u; fn_0018ba6c(cpu);
    }
L_0015ba88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015ba8c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0015ba90:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015ba94:;
    {
        cpu->r[14] = 0x0015ba98u; fn_000ea704(cpu);
    }
L_0015ba98:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_0015ba9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0015baa0:;
    {
        cpu->r[14] = 0x0015baa4u; fn_00153efc(cpu);
    }
L_0015baa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0015baa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015baac:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000004u;
        cpu->r[1] = rd32(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_0015bab0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0015bab4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015bab8:;
    {
        cpu->r[14] = 0x0015bac0u;
    }
L_0015babc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015bac0u)) return;
    }
L_0015bac0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_0015bac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ba7c;
        }
    }
L_0015bac8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015baccu)) return;
    }
}

/* _ZN13CParticlePoolD1Ev @ 0015bacc (arm) */
void fn_0015bacc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bacc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015bad0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015bad4:;
    {
        cpu->r[14] = 0x0015bad8u; fn_0015b8ec(cpu);
    }
L_0015bad8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 1);
    }
L_0015badc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015bafc;
        }
    }
L_0015bae0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00008c00u, 0, 0);
    }
L_0015bae4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000a0u, 0, 0);
    }
L_0015bae8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000078u, 1, 0);
    }
L_0015baec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015baf0:;
    {
        cpu->r[14] = 0x0015baf4u; fn_0015b498(cpu);
    }
L_0015baf4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0015baf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bae8;
        }
    }
L_0015bafc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015bb00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015bb04u)) return;
    }
}

/* _ZN13CParticlePoolD2Ev @ 0015bb04 (arm) */
void fn_0015bb04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bb04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015bb08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015bb0c:;
    {
        cpu->r[14] = 0x0015bb10u; fn_0015b8ec(cpu);
    }
L_0015bb10:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 1);
    }
L_0015bb14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015bb34;
        }
    }
L_0015bb18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00008c00u, 0, 0);
    }
L_0015bb1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000a0u, 0, 0);
    }
L_0015bb20:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000078u, 1, 0);
    }
L_0015bb24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015bb28:;
    {
        cpu->r[14] = 0x0015bb2cu; fn_0015b498(cpu);
    }
L_0015bb2c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0015bb30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bb20;
        }
    }
L_0015bb34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015bb38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015bb3cu)) return;
    }
}

/* _ZN13CParticlePoolC1Ev @ 0015bb3c (arm) */
void fn_0015bb3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bb3c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015bb40:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015bb44:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015bb48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015bb4c:;
    {
        cpu->r[5] = 0x00008ca0u;
    }
L_0015bb50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0015bb54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_0015bb58:;
    {
        cpu->r[14] = 0x0015bb5cu; fn_0015b424(cpu);
    }
L_0015bb5c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0015bb60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bb50;
        }
    }
L_0015bb64:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_0015bb68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015bb6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015bb70:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bb74:;
    {
        cpu->r[2] = 0x00008cb4u;
    }
L_0015bb78:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bb7c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015bb80:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_0015bb84:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_0015bb88:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bb8c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_0015bb90:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bb94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015bb98u)) return;
    }
}

/* _ZN13CParticlePoolC2Ev @ 0015bb98 (arm) */
void fn_0015bb98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bb98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015bb9c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015bba0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015bba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015bba8:;
    {
        cpu->r[5] = 0x00008ca0u;
    }
L_0015bbac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0015bbb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_0015bbb4:;
    {
        cpu->r[14] = 0x0015bbb8u; fn_0015b424(cpu);
    }
L_0015bbb8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0015bbbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bbac;
        }
    }
L_0015bbc0:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_0015bbc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015bbc8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015bbcc:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bbd0:;
    {
        cpu->r[2] = 0x00008cb4u;
    }
L_0015bbd4:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bbd8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015bbdc:;
    {
        wr32(cpu->r[7], cpu->r[2]);
    }
L_0015bbe0:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_0015bbe4:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bbe8:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_0015bbec:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[3]);
    }
L_0015bbf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015bbf4u)) return;
    }
}

/* _Z22util_number_is_power_2j @ 0015bbf4 (arm) */
void fn_0015bbf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bbf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015bbf8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015bbfc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0015bc00:;
    {
        uint32_t v = cpu->r[3] ^ cpu->r[0]; cpu->r[2] = v;
    }
L_0015bc04:;
    {
        uint32_t v = cpu->r[3] | cpu->r[0]; cpu->r[0] = v;
    }
L_0015bc08:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0015bc0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015bc10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015bc14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* sub_0015bc18 @ 0015bc18 (arm) */
void fn_0015bc18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bc18:;
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
L_0015bc1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_0015bc20:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0015bc24:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0015bc28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0015bc2c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0015bc30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0015bc34:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0015bc38:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015bc3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0015bc40:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0015bc44:;
    {
        cpu->r[10] = rd32(cpu->r[11] + cpu->r[12]);
    }
L_0015bc48:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0015bc4c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0015bc50:;
    {
        wr32(cpu->r[7] + cpu->r[12], cpu->r[9]);
    }
L_0015bc54:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[10]);
    }
L_0015bc58:;
    {
        wr32(cpu->r[6] + cpu->r[12], cpu->r[8]);
    }
L_0015bc5c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_0015bc60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0015bc64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000010u, 1, 1);
    }
L_0015bc68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bc40;
        }
    }
L_0015bc6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_0015bc70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_0015bc74:;
    {
        cpu->r[11] = (~cpu->r[2]);
    }
L_0015bc78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015bc7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015bc80:;
    {
        uint32_t v = cpu->r[11] & 0x00000002u; cpu->r[11] = v;
    }
L_0015bc84:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[3] = v;
    }
L_0015bc88:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_0015bc8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015bd94;
        }
    }
L_0015bc90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015bc94:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 0);
    }
L_0015bc98:;
    {
        cpu->r[8] = (~cpu->r[12]);
    }
L_0015bc9c:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[3] = v;
    }
L_0015bca0:;
    {
        uint32_t v = cpu->r[8] & 0x00000004u; cpu->r[8] = v;
    }
L_0015bca4:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_0015bca8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0015bcac:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_0015bcb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015bcb4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0015bcb8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0015bcbc:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015bcc0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015bcc4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0015bcc8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_0015bccc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[0] = v;
    }
L_0015bcd0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[2] = v;
    }
L_0015bcd4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[8] + cpu->r[0]; cpu->r[0] = v;
    }
L_0015bcd8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8] + cpu->r[2]; cpu->r[2] = v;
    }
L_0015bcdc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0015bce0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015bce4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0015bce8:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[0]);
    }
L_0015bcec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015bcf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0015bcf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bcb4;
        }
    }
L_0015bcf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_0015bcfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015bd00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bd5c;
        }
    }
L_0015bd04:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0015bd08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0015bd0c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0015bd10:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0015bd14:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_0015bd18:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0015bd1c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_0015bd20:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0015bd24:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_0015bd28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015bd2c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0015bd30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 1, 5u, &shc), 0, 0);
    }
L_0015bd34:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_0015bd38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015bd3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0015bd40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015bd2c;
        }
    }
L_0015bd44:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0015bd48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 1, 4u, &shc), 0, 0);
    }
L_0015bd4c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0015bd50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0015bd54:;
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
L_0015bd58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015bd5c:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_0015bd60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0015bd64:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0015bd68:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0015bd6c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_0015bd70:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 2u, &shc); cpu->r[4] = v;
    }
L_0015bd74:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_0015bd78:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_0015bd7c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0015bd80:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_0015bd84:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0015bd88:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[2]);
    }
L_0015bd8c:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_0015bd90:;
    {
        goto L_0015bd28;
    }
L_0015bd94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015bd98:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 0);
    }
L_0015bd9c:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_0015bda0:;
    {
        cpu->r[8] = (~cpu->r[2]);
    }
L_0015bda4:;
    {
        uint32_t v = cpu->r[2] & 0x00000003u; cpu->r[3] = v;
    }
L_0015bda8:;
    {
        uint32_t v = cpu->r[8] & 0x00000002u; cpu->r[8] = v;
    }
L_0015bdac:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0015bdb0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 0);
    }
L_0015bdb4:;
    {
        goto L_0015bcb0;
    }
}

/* sub_0015bdb8 @ 0015bdb8 (arm) */
void fn_0015bdb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015bdb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0015bdbc:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0015bdc0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_0015bdc4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_0015bdc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0015bdcc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0015bdd0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0015bdd4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_0015bdd8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_0015bddc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0015be18;
        }
    }
L_0015bde0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015bde4:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_0015bde8:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0015bdec:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_0015bdf0:;
    {
        { uint32_t v = cpu->r[12] & cpu->r[2]; set_nz(cpu, v); }
    }
L_0015bdf4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0015bdf8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] | cpu->r[4]; cpu->r[5] = v;
        }
    }
L_0015bdfc:;
    {
        { uint32_t v = cpu->r[12] & cpu->r[3]; set_nz(cpu, v); }
    }
L_0015be00:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0015be04:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] | shifter(cpu->r[4], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_0015be08:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0015be0c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[4] = v;
    }
L_0015be10:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0015bdf0;
        }
    }
L_0015be14:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0015be18:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0015be1c:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0015be20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0015be24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z15PVRTCDecompressPKviiiPh @ 0015be28 (arm) */
void fn_0015be28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015be28:;
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
L_0015be2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000005a0u, 1, 0);
    }
L_0015be30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0015be34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015be38:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_0015be3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000008u;
        }
    }
L_0015be40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0015be44:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0015be48:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0015be4c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0015be50:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[3]);
    }
L_0015be54:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_0015be58:;
    {
        cpu->r[14] = 0x0015be5cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015be5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0015be60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0015be64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_0015be68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0015be6c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[3] = v;
        }
    }
L_0015be70:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0015be74:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
        }
    }
L_0015be78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015be90;
        }
    }
L_0015be7c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0015be80:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015be84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015c4a0;
        }
    }
L_0015be88:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_0015be8c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0015be90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0015be94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015be98:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_0015be9c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0015bea0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0015bea4:;
    {
        wr32(cpu->r[13] + + 0x580u, cpu->r[3]);
    }
L_0015bea8:;
    {
        wr32(cpu->r[13] + + 0x584u, cpu->r[3]);
    }
L_0015beac:;
    {
        wr32(cpu->r[13] + + 0x588u, cpu->r[3]);
    }
L_0015beb0:;
    {
        wr32(cpu->r[13] + + 0x58cu, cpu->r[3]);
    }
L_0015beb4:;
    {
        cpu->r[3] = rd32(0x0015bebcu + + 0x7fcu);
    }
L_0015beb8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_0015bebc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015bec4u, cpu->r[3], 0, 0);
    }
L_0015bec0:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[3]);
    }
L_0015bec4:;
    {
        cpu->r[3] = rd32(0x0015beccu + + 0x7f0u);
    }
L_0015bec8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 1u, &shc); cpu->r[2] = v;
    }
L_0015becc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0015bed0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015bed8u, cpu->r[3], 0, 0);
    }
L_0015bed4:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[3]);
    }
L_0015bed8:;
    {
        cpu->r[3] = rd32(0x0015bee0u + + 0x7e0u);
    }
L_0015bedc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0015bee0:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[2]);
    }
L_0015bee4:;
    {
        cpu->r[2] = rd32(0x0015beecu + + 0x7d8u);
    }
L_0015bee8:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[3]);
    }
L_0015beec:;
    {
        cpu->r[2] = add_flags(cpu, 0x0015bef4u, cpu->r[2], 0, 0);
    }
L_0015bef0:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[2]);
    }
L_0015bef4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015bef8:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_0015befc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_0015bf00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015bf04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015c478;
        }
    }
L_0015bf08:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x54u);
    }
L_0015bf0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0015bf10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_0015bf14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0015bf18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0015bf1c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0015bf20:;
    {
        cpu->r[2] = (~cpu->r[4]);
    }
L_0015bf24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0015bf28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015bf2c:;
    {
        uint32_t v = cpu->r[2] & 0x00000002u; cpu->r[2] = v;
    }
L_0015bf30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_0015bf34:;
    {
        uint32_t v = cpu->r[4] & 0x00000003u; cpu->r[1] = v;
    }
L_0015bf38:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0015bf3c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0015bf40:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[1]);
    }
L_0015bf44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000004d0u, 0, 0);
    }
L_0015bf48:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_0015bf4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_0015bf50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0015bf54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0015bf58:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x58u);
    }
L_0015bf5c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0015bf60:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0015bf64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0015bf68:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0015bf6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015bf70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002d0u, 0, 0);
    }
L_0015bf74:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_0015bf78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_0015bf7c:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 6u, &shc); cpu->r[14] = v;
    }
L_0015bf80:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0015bf84:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[14]);
    }
L_0015bf88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015bf8c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0015bf90:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x34u);
    }
L_0015bf94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 6u, &shc), 0, 0);
    }
L_0015bf98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_0015bf9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 6u, &shc), 0, 0);
    }
L_0015bfa0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfa4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0015bfa8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0015bfb0:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[1]);
    }
L_0015bfb4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_0015bfb8:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[0]);
    }
L_0015bfbc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000040u, 0, 0);
    }
L_0015bfc0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_0015bfc4:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[4]);
    }
L_0015bfc8:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[12]);
    }
L_0015bfcc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[14]);
    }
L_0015bfd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000060u, 0, 0);
    }
L_0015bfe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfe4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_0015bfe8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015bfec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0015bff0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015bff4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000050u, 0, 0);
    }
L_0015bff8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015bffc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_0015c000:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[0]);
    }
L_0015c004:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015c008:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[1]);
    }
L_0015c00c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_0015c010:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[2]);
    }
L_0015c014:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000580u, 0, 0);
    }
L_0015c018:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[3]);
    }
L_0015c01c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000590u, 0, 0);
    }
L_0015c020:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[4]);
    }
L_0015c024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000570u, 0, 0);
    }
L_0015c028:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[12]);
    }
L_0015c02c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000560u, 0, 0);
    }
L_0015c030:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000550u, 0, 0);
    }
L_0015c034:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0015c038:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_0015c03c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0015c040:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_0015c044:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[4]);
    }
L_0015c048:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[12]);
    }
L_0015c04c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0015c050:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c054:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_0015c058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_0015c05c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_0015c060:;
    {
        uint32_t v = cpu->r[14] & cpu->r[0]; cpu->r[0] = v;
    }
L_0015c064:;
    {
        cpu->r[14] = 0x0015c068u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015c068:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0015c06c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0015c070:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015c074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0015c078:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0015c07c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015c080:;
    {
        cpu->r[14] = 0x0015c084u; fn_0015bdb8(cpu);
    }
L_0015c084:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0015c088:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015c08c:;
    {
        uint32_t v = cpu->r[5] & cpu->r[1]; cpu->r[5] = v;
    }
L_0015c090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0015c094:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0015c098:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0015c09c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0015c0a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0015c0a4:;
    {
        wr32(cpu->r[13] + + 0x590u, cpu->r[12]);
    }
L_0015c0a8:;
    {
        cpu->r[14] = 0x0015c0acu; fn_0015bdb8(cpu);
    }
L_0015c0ac:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0015c0b0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015c0b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0015c0b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_0015c0bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0015c0c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0015c0c4:;
    {
        wr32(cpu->r[13] + + 0x594u, cpu->r[12]);
    }
L_0015c0c8:;
    {
        cpu->r[14] = 0x0015c0ccu; fn_0015bdb8(cpu);
    }
L_0015c0cc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0015c0d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0015c0d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_0015c0d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0015c0dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0015c0e0:;
    {
        wr32(cpu->r[13] + + 0x598u, cpu->r[12]);
    }
L_0015c0e4:;
    {
        cpu->r[14] = 0x0015c0e8u; fn_0015bdb8(cpu);
    }
L_0015c0e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015c0ec:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_0015c0f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0015c0f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0015c0f8:;
    {
        wr32(cpu->r[13] + + 0x59cu, cpu->r[3]);
    }
L_0015c0fc:;
    {
        cpu->r[14] = 0x0015c100u; imp_memcmp(cpu); /* memcmp */
    }
L_0015c100:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015c104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c330;
        }
    }
L_0015c108:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015c10c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0015c110:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c114:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0015c118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_0015c11c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000005a0u, 0, 0);
    }
L_0015c120:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0015c124:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_0015c128:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015c12c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_0015c130:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0015c134:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_0015c138:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0015c13c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0015c140:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015c144:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_0015c148:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 6u, &shc), 0, 0);
    }
L_0015c14c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0015c150:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0015c154:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015c158:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015c15c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_0015c160:;
    {
        cpu->r[7] = 0x0000000fu;
    }
L_0015c164:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015c168:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_0015c16c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0015c170:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_0015c174:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_0015c178:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_0015c17c:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x4u);
    }
L_0015c180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0015c184:;
    {
        uint32_t v = cpu->r[14] & cpu->r[3]; cpu->r[3] = v;
    }
L_0015c188:;
    {
        wr32(cpu->r[13] + + 0x5a0u, cpu->r[3]);
    }
L_0015c18c:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_0015c190:;
    {
        uint32_t v = shifter(cpu->r[14], 3, 16u, &shc); cpu->r[0] = v;
    }
L_0015c194:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 7u, &shc); cpu->r[12] = v;
    }
L_0015c198:;
    {
        wr32(cpu->r[13] + + 0x5a4u, cpu->r[0]);
    }
L_0015c19c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[0] = v;
    }
L_0015c1a0:;
    {
        uint32_t v = cpu->r[12] & 0x0000001eu; cpu->r[12] = v;
    }
L_0015c1a4:;
    {
        uint32_t v = cpu->r[0] & 0x0000001eu; cpu->r[0] = v;
    }
L_0015c1a8:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[4] = v;
    }
L_0015c1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c210;
        }
    }
L_0015c1b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015c1b4:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[0] = v;
    }
L_0015c1b8:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[0]);
    }
L_0015c1bc:;
    {
        cpu->r[0] = (cpu->r[3] >> 10) & 0x1fu;
    }
L_0015c1c0:;
    {
        cpu->r[3] = (cpu->r[3] >> 5) & 0x1fu;
    }
L_0015c1c4:;
    {
        wr32(cpu->r[2] + - 0xcu, cpu->r[0]);
    }
L_0015c1c8:;
    {
        wr32(cpu->r[2] + - 0x8u, cpu->r[3]);
    }
L_0015c1cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
        }
    }
L_0015c1d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
        }
    }
L_0015c1d4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[11] + + 0x8u, cpu->r[3]);
        }
    }
L_0015c1d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0015c1dc:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_0015c1e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015c1e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0015c1e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c258;
        }
    }
L_0015c1ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_0015c1f0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_0015c1f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_0015c1f8:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[4] = v;
    }
L_0015c1fc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 7u, &shc); cpu->r[12] = v;
    }
L_0015c200:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 3u, &shc); cpu->r[0] = v;
    }
L_0015c204:;
    {
        uint32_t v = cpu->r[12] & 0x0000001eu; cpu->r[12] = v;
    }
L_0015c208:;
    {
        uint32_t v = cpu->r[0] & 0x0000001eu; cpu->r[0] = v;
    }
L_0015c20c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c1b0;
        }
    }
L_0015c210:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[0], 3, 4u, &shc); cpu->r[0] = v;
    }
L_0015c214:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[12], 3, 4u, &shc); cpu->r[12] = v;
    }
L_0015c218:;
    {
        wr32(cpu->r[2] + - 0x8u, cpu->r[0]);
    }
L_0015c21c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_0015c220:;
    {
        wr32(cpu->r[2] + - 0xcu, cpu->r[12]);
    }
L_0015c224:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015c228:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[4]);
    }
L_0015c22c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 11u, &shc); cpu->r[3] = v;
    }
L_0015c230:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x8u);
    }
L_0015c234:;
    {
        uint32_t v = cpu->r[3] & 0x0000000eu; cpu->r[3] = v;
    }
L_0015c238:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[0], 1, 3u, &shc); cpu->r[0] = v;
        }
    }
L_0015c23c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] | shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
        }
    }
L_0015c240:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0015c244:;
    {
        wr32(cpu->r[11] + + 0x8u, cpu->r[0]);
    }
L_0015c248:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015c24c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0015c250:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0015c254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c1ec;
        }
    }
L_0015c258:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015c25c:;
    {
        uint32_t v = cpu->r[14] & 0x00000001u; cpu->r[14] = v;
    }
L_0015c260:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015c264:;
    {
        uint32_t v = cpu->r[0] & cpu->r[14]; cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_0015c268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c4ac;
        }
    }
L_0015c26c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0015c270:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0015c274:;
    {
        cpu->r[14] = cpu->r[7];
    }
L_0015c278:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
    }
L_0015c27c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0015c280:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015c284:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_0015c288:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015c28c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015c290:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_0015c294:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0015c298:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_0015c29c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_0015c2a0:;
    {
        uint32_t v = cpu->r[1] ^ cpu->r[14]; cpu->r[0] = v;
    }
L_0015c2a4:;
    {
        uint32_t v = cpu->r[3] & 0x00000003u; cpu->r[12] = v;
    }
L_0015c2a8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0015c2ac:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0015c2b0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[12]);
        }
    }
L_0015c2b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0015c2b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
        }
    }
L_0015c2bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0015c2c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015c2c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c2a0;
        }
    }
L_0015c2c8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_0015c2cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000040u, 0, 0);
    }
L_0015c2d0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000004u, 1, 1);
    }
L_0015c2d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c280;
        }
    }
L_0015c2d8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0015c2dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0015c2e0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_0015c2e4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000020u, 0, 0);
    }
L_0015c2e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0015c2ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c154;
        }
    }
L_0015c2f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000100u, 0, 0);
    }
L_0015c2f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0015c2f8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015c2fc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000200u, 1, 1);
    }
L_0015c300:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0015c304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0015c308:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0015c30c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0015c310:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000100u, 0, 0);
    }
L_0015c314:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_0015c318:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_0015c31c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c138;
        }
    }
L_0015c320:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015c324:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0015c328:;
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
L_0015c32c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0015c330:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0015c334:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c338:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0015c33c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0015c340:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0015c344:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015c348:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0015c34c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_0015c350:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
    }
L_0015c354:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
        wr32(ea + 8u, cpu->r[14]);
    }
L_0015c358:;
    {
        cpu->r[14] = 0x0015c35cu; fn_0015bc18(cpu);
    }
L_0015c35c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0015c360:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c364:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_0015c368:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0015c36c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x64u);
    }
L_0015c370:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0015c374:;
    {
        uint32_t base = cpu->r[0];
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
L_0015c378:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0015c37c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_0015c380:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0015c384:;
    {
        cpu->r[14] = 0x0015c388u; fn_0015bc18(cpu);
    }
L_0015c388:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015c38c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0015c390:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0015c394:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_0015c398:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~cpu->r[0]);
        }
    }
L_0015c39c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~cpu->r[1]);
        }
    }
L_0015c3a0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & 0x00000004u; cpu->r[2] = v;
        }
    }
L_0015c3a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & 0x00000002u; cpu->r[2] = v;
        }
    }
L_0015c3a8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] & 0x00000007u; cpu->r[3] = v;
        }
    }
L_0015c3ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & 0x00000003u; cpu->r[3] = v;
        }
    }
L_0015c3b0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0015c3b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0015c3b8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c3bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015c3c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c558;
        }
    }
L_0015c3c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015c3c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c3cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015c3d0:;
    {
        cpu->r[3] = rd32(0x0015c3d8u + + 0x2f0u);
    }
L_0015c3d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0015c3d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c3e0u, cpu->r[3], 0, 0);
    }
L_0015c3dc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c3e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0015c3e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015c3e8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x64u);
    }
L_0015c3ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x68u);
    }
L_0015c3f0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0015c3f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0015c3f8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0015c3fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0015c400:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[1]; cpu->r[2] = v;
    }
L_0015c404:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_0015c408:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0015c40c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015c410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0015c414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c3f0;
        }
    }
L_0015c418:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c41c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015c420:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_0015c424:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0015c428:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c42c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x5d0u);
    }
L_0015c430:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0015c434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0015c438:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0015c43c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015c440:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015c444:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x74u);
    }
L_0015c448:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd8(cpu->r[13] + + 0x55cu);
        }
    }
L_0015c44c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x55cu, cpu->r[12]);
        }
    }
L_0015c450:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0015c454:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x554u);
    }
L_0015c458:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x550u);
    }
L_0015c45c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x5d0u);
    }
L_0015c460:;
    {
        wr8(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_0015c464:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_0015c468:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x558u);
    }
L_0015c46c:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[12]);
    }
L_0015c470:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_0015c474:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c04c;
        }
    }
L_0015c478:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0015c47c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0015c480:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0015c484:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_0015c488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0015c48c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0015c490:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0015c494:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0015c498:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[0]);
    }
L_0015c49c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015befc;
        }
    }
L_0015c4a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001acu, 0, 0);
    }
L_0015c4a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0015c4a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015c4acu)) return;
    }
L_0015c4ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015c4b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015c4b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c508;
        }
    }
L_0015c4b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015c4bc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0015c4c0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c4c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0015c4c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015c4cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_0015c4d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0015c4d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_0015c4d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0015c4dc:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[14]);
    }
L_0015c4e0:;
    {
        uint32_t v = cpu->r[3] & 0x00000003u; cpu->r[1] = v;
    }
L_0015c4e4:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0015c4e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0015c4ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 1);
    }
L_0015c4f0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_0015c4f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c4dc;
        }
    }
L_0015c4f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_0015c4fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000100u, 1, 1);
    }
L_0015c500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c4c4;
        }
    }
L_0015c504:;
    {
        goto L_0015c2d8;
    }
L_0015c508:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0015c50c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015c510:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0015c514:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_0015c518:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015c51c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_0015c520:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_0015c524:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0015c528:;
    {
        wr32(cpu->r[12] + cpu->r[2], cpu->r[14]);
    }
L_0015c52c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000003u;
        }
    }
L_0015c530:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0015c534:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0015c538:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 1u, &shc); cpu->r[3] = v;
    }
L_0015c53c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0015c540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c524;
        }
    }
L_0015c544:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_0015c548:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_0015c54c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000100u, 1, 1);
    }
L_0015c550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c514;
        }
    }
L_0015c554:;
    {
        goto L_0015c2d8;
    }
L_0015c558:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015c55c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015c560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c598;
        }
    }
L_0015c564:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb0u);
    }
L_0015c568:;
    {
        uint32_t v = cpu->r[2] ^ cpu->r[12]; cpu->r[3] = v;
    }
L_0015c56c:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0015c570:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c5c4;
        }
    }
L_0015c574:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015c578:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c57c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0015c580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015c584:;
    {
        cpu->r[1] = add_flags(cpu, 0x0015c58cu, cpu->r[4], 0, 0);
    }
L_0015c588:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0015c58c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0015c590:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0015c594:;
    {
        goto L_0015c3e0;
    }
L_0015c598:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015c59c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c5a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015c5a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb8u);
    }
L_0015c5a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015c5ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015c5b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0015c5b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_0015c5b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0015c5bc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_0015c5c0:;
    {
        goto L_0015c3e0;
    }
L_0015c5c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0015c5c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c608;
        }
    }
L_0015c5cc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_0015c5d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c674;
        }
    }
L_0015c5d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0015c5d8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015c5dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0015c5e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xccu);
    }
L_0015c5e4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c5e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c5ec:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0015c5f0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c5f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0015c5f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0015c5fc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0015c600:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0015c604:;
    {
        goto L_0015c3e0;
    }
L_0015c608:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c60c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015c610:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0015c614:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0015c618:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0015c61c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c620:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015c624:;
    {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c628:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0015c62c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015c630:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0015c634:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c638:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0015c63c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0015c640:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0015c644:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0015c648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0015c64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0015c650:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0015c654:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0015c658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0015c65c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0015c660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0015c664:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0015c668:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_0015c66c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 2u, &shc); cpu->r[12] = v;
    }
L_0015c670:;
    {
        goto L_0015c3e0;
    }
L_0015c674:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0015c678:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015c67c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xacu);
    }
L_0015c680:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0015c684:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0015c688:;
    {
        cpu->r[3] = rd32(0x0015c690u + + 0x3cu);
    }
L_0015c68c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015c690:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c694:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c69cu, cpu->r[3], 0, 0);
    }
L_0015c698:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0015c69c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015c6a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0015c6a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0015c6a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0015c6ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0015c6b0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0015c6b4:;
    {
        goto L_0015c3e0;
    }
}

/* _ZN9CKeyQueue19ResetKeyPressedMaskEv @ 0015c6d0 (arm) */
void fn_0015c6d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c6d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015c6d4:;
    {
        wr32(cpu->r[0] + + 0x1b8u, cpu->r[3]);
    }
L_0015c6d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CKeyQueue19ApplyKeyPressedMaskEv @ 0015c6dc (arm) */
void fn_0015c6dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c6dc:;
    {
        cpu->r[3] = rd32(0x0015c6e4u + + 0x3cu);
    }
L_0015c6e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015c6e4:;
    {
        cpu->r[2] = rd32(0x0015c6ecu + + 0x38u);
    }
L_0015c6e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c6f0u, cpu->r[3], 0, 0);
    }
L_0015c6ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015c6f0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015c6f4:;
    {
        cpu->r[4] = 0x00001bc0u;
    }
L_0015c6f8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015c6fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015c700:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0015c704:;
    {
        cpu->r[14] = 0x0015c708u; fn_0018b5d8(cpu);
    }
L_0015c708:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x1b8u);
    }
L_0015c70c:;
    {
        cpu->r[14] = 0x0015c710u; fn_0018b8fc(cpu);
    }
L_0015c710:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015c714:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0015c718:;
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
L_0015c71c:;
    {
        return fn_0018b65c(cpu);
    }
}

/* _ZN9CKeyQueue13AddKeyToQueueEi @ 0015c728 (arm) */
void fn_0015c728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c728:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xd4u);
    }
L_0015c72c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015c730:;
    {
        cpu->r[3] = rd32(0x0015c738u + + 0x90u);
    }
L_0015c734:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000032u, 1, 1);
    }
L_0015c738:;
    {
        wr8(cpu->r[0] + + 0xd0u, cpu->r[2]);
    }
L_0015c73c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015c740:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c748u, cpu->r[3], 0, 0);
    }
L_0015c744:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0015c748:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0015c74c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + + 0xd0u, cpu->r[2]);
        }
    }
L_0015c750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c788;
        }
    }
L_0015c754:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xccu);
    }
L_0015c758:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_0015c75c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_0015c760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0015c764:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015c768:;
    {
        wr32(cpu->r[0] + + 0xd4u, cpu->r[12]);
    }
L_0015c76c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0015c770:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0015c774:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[12], 1, 0);
    }
L_0015c778:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_0015c77c:;
    {
        uint32_t v = cpu->r[1] - cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015c780:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[4]);
    }
L_0015c784:;
    {
        wr32(cpu->r[0] + + 0xccu, cpu->r[2]);
    }
L_0015c788:;
    {
        cpu->r[12] = rd32(0x0015c790u + + 0x3cu);
    }
L_0015c78c:;
    {
        cpu->r[5] = 0x00001bc0u;
    }
L_0015c790:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1b8u);
    }
L_0015c794:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015c798:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0015c79c:;
    {
        uint32_t v = cpu->r[2] | cpu->r[4]; cpu->r[3] = v;
    }
L_0015c7a0:;
    {
        wr32(cpu->r[0] + + 0x1b8u, cpu->r[3]);
    }
L_0015c7a4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015c7a8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0015c7ac:;
    {
        cpu->r[14] = 0x0015c7b0u; fn_0018b5d8(cpu);
    }
L_0015c7b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015c7b4:;
    {
        cpu->r[14] = 0x0015c7b8u; fn_0018b8fc(cpu);
    }
L_0015c7b8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015c7bc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0015c7c0:;
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
L_0015c7c4:;
    {
        return fn_0018b65c(cpu);
    }
}

/* _ZN9CKeyQueue10UpdateKeysEv @ 0015c7d0 (arm) */
void fn_0015c7d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c7d0:;
    {
        cpu->r[1] = rd32(0x0015c7d8u + + 0x150u);
    }
L_0015c7d4:;
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
L_0015c7d8:;
    {
        cpu->r[9] = rd32(0x0015c7e0u + + 0x14cu);
    }
L_0015c7dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0015c7e0:;
    {
        cpu->r[6] = 0x0000851fu;
    }
L_0015c7e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015c7e8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x51ebu << 16);
    }
L_0015c7ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0015c7f0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015c7f4:;
    {
        cpu->r[10] = 0x00000032u;
    }
L_0015c7f8:;
    {
        cpu->r[8] = 0x00001bc0u;
    }
L_0015c7fc:;
    {
        cpu->r[9] = add_flags(cpu, 0x0015c804u, cpu->r[9], 0, 0);
    }
L_0015c800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0015c804:;
    {
        wr8(cpu->r[4] + + 0x1acu, cpu->r[5]);
    }
L_0015c808:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015c80c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0015c810:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c854;
        }
    }
L_0015c814:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0015c818:;
    {
        wr8(cpu->r[4] + + 0x1acu, cpu->r[3]);
    }
L_0015c81c:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_0015c820:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xd4u);
    }
L_0015c824:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_0015c828:;
    {
        cpu->r[5] = 0x00000032u;
    }
L_0015c82c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0015c830:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0015c834:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015c838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c8bc;
        }
    }
L_0015c83c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015c840:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[3]);
    }
L_0015c844:;
    {
        wr8(cpu->r[4] + + 0xd0u, cpu->r[2]);
    }
L_0015c848:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[3]);
    }
L_0015c84c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0015c850:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015c854u)) return;
    }
L_0015c854:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1a4u);
    }
L_0015c858:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015c85c:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[2]);
    }
L_0015c860:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0015c864:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1acu);
    }
L_0015c868:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1a8u, cpu->r[7]);
        }
    }
L_0015c86c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_0015c870:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0015c874:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015c878:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015c87c:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0xdcu);
    }
L_0015c880:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[12], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_0015c884:;
    {
        uint32_t v = cpu->r[3] - cpu->r[10] * cpu->r[0]; cpu->r[3] = v;
    }
L_0015c888:;
    {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[3]);
    }
L_0015c88c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c81c;
        }
    }
L_0015c890:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015c894:;
    {
        cpu->r[11] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0015c898:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0015c89c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0015c8a0:;
    {
        cpu->r[14] = 0x0015c8a4u; fn_0018b5d8(cpu);
    }
L_0015c8a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0015c8a8:;
    {
        cpu->r[14] = 0x0015c8acu; fn_0018b950(cpu);
    }
L_0015c8ac:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0015c8b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0015c8b4:;
    {
        cpu->r[14] = 0x0015c8b8u; fn_0018b65c(cpu);
    }
L_0015c8b8:;
    {
        goto L_0015c800;
    }
L_0015c8bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc8u);
    }
L_0015c8c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015c8c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0015c8c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015c8cc:;
    {
        wr8(cpu->r[4] + + 0x1acu, cpu->r[7]);
    }
L_0015c8d0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0xccu, cpu->r[1]);
        }
    }
L_0015c8d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000032u, 1, 1);
    }
L_0015c8d8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[2]; cpu->r[6] = (uint32_t)v; cpu->r[10] = (uint32_t)(v >> 32); }
    }
L_0015c8dc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0015c8e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0015c8e4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0015c8e8:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x1acu, cpu->r[8]);
        }
    }
L_0015c8ec:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[10], 1, 4u, &shc), cpu->r[6], 1, 0);
    }
L_0015c8f0:;
    {
        uint32_t v = cpu->r[2] - cpu->r[5] * cpu->r[6]; cpu->r[2] = v;
    }
L_0015c8f4:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[2]);
    }
L_0015c8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c834;
        }
    }
L_0015c8fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1a8u);
    }
L_0015c900:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[0]);
    }
L_0015c904:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015c908:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0015c90c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015c910:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_0015c914:;
    {
        uint32_t v = cpu->r[1] - cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015c918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015c91c:;
    {
        wr32(cpu->r[4] + + 0x1a8u, cpu->r[2]);
    }
L_0015c920:;
    {
        wr32(cpu->r[1] + + 0xdcu, cpu->r[9]);
    }
L_0015c924:;
    {
        goto L_0015c834;
    }
}

/* _ZN12CTouchScreen25DisableTouchesTillUntouchEv @ 0015c930 (arm) */
void fn_0015c930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c930:;
    {
        cpu->r[3] = rd32(0x0015c938u + + 0x14u);
    }
L_0015c934:;
    {
        cpu->r[2] = rd32(0x0015c93cu + + 0x14u);
    }
L_0015c938:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c940u, cpu->r[3], 0, 0);
    }
L_0015c93c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015c940:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015c944:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_0015c948:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CTouchScreen13GetTouchIndexEPv @ 0015c954 (arm) */
void fn_0015c954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c954:;
    {
        cpu->r[3] = rd32(0x0015c95cu + + 0x78u);
    }
L_0015c958:;
    {
        cpu->r[2] = rd32(0x0015c960u + + 0x78u);
    }
L_0015c95c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015c964u, cpu->r[3], 0, 0);
    }
L_0015c960:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0015c964:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015c968:;
    {
        cpu->r[1] = rd16(cpu->r[2]);
    }
L_0015c96c:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_0015c970:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015c974:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015c9c4;
        }
    }
L_0015c978:;
    {
        cpu->r[2] = rd32(0x0015c980u + + 0x5cu);
    }
L_0015c97c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015c980:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_0015c984:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0015c988:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0015c98c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c9c8;
        }
    }
L_0015c990:;
    {
        cpu->r[4] = 0x0000000cu;
    }
L_0015c994:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 0);
    }
L_0015c998:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015c99c:;
    {
        cpu->r[1] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[4] & 0xffff));
    }
L_0015c9a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0015c9a4:;
    {
        goto L_0015c9b4;
    }
L_0015c9a8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0015c9ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0015c9b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015c9c8;
        }
    }
L_0015c9b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0015c9b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015c9bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0015c9c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015c9a8;
        }
    }
L_0015c9c4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015c9c8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0015c9cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015c9d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CTouchScreen11RemoveTouchEPv @ 0015c9e0 (arm) */
void fn_0015c9e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015c9e0:;
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
L_0015c9e4:;
    {
        cpu->r[14] = 0x0015c9e8u; fn_0015c954(cpu);
    }
L_0015c9e8:;
    {
        cpu->r[5] = rd32(0x0015c9f0u + + 0x9cu);
    }
L_0015c9ec:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015c9f4u, cpu->r[5], 0, 0);
    }
L_0015c9f0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0015c9f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015c9f8u)) return;
        }
    }
L_0015c9f8:;
    {
        cpu->r[10] = rd32(0x0015ca00u + + 0x90u);
    }
L_0015c9fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0015ca00:;
    {
        cpu->r[7] = rd32(0x0015ca08u + + 0x8cu);
    }
L_0015ca04:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015ca08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0015ca0c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0015ca10:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0015ca14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0015ca18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0015ca1c:;
    {
        cpu->r[8] = rd16(cpu->r[12]);
    }
L_0015ca20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0015ca24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0015ca28:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[8]);
    }
L_0015ca2c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0015ca30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0015ca34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015ca38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015ca7c;
        }
    }
L_0015ca3c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0015ca40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0015ca44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0015ca48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0015ca4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0015ca50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ca68;
        }
    }
L_0015ca54:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base - 8;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[12] = v1;
    }
L_0015ca58:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0015ca5c:;
    {
        wr32(cpu->r[3] + - 0x14u, cpu->r[4]);
    }
L_0015ca60:;
    {
        wr32(cpu->r[3] + - 0x10u, cpu->r[12]);
    }
L_0015ca64:;
    {
        wr32(cpu->r[3] + - 0xcu, cpu->r[1]);
    }
L_0015ca68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0015ca6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0015ca70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0015ca74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015ca78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015ca3c;
        }
    }
L_0015ca7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0015ca80:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 0);
    }
L_0015ca84:;
    {
        wr16(cpu->r[3], cpu->r[8]);
    }
L_0015ca88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ca8cu)) return;
    }
}

/* _ZN12CTouchScreen11ClearEventsEv @ 0015ca98 (arm) */
void fn_0015ca98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ca98:;
    {
        cpu->r[3] = rd32(0x0015caa0u + + 0x14u);
    }
L_0015ca9c:;
    {
        cpu->r[2] = rd32(0x0015caa4u + + 0x14u);
    }
L_0015caa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015caa8u, cpu->r[3], 0, 0);
    }
L_0015caa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015caa8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015caac:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_0015cab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_49 @ 0015cabc (arm) */
void fn_0015cabc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015cabc:;
    {
        cpu->r[1] = rd32(0x0015cac4u + + 0x30u);
    }
L_0015cac0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015cac4:;
    {
        cpu->r[3] = rd32(0x0015caccu + + 0x2cu);
    }
L_0015cac8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0015cad0u, cpu->r[1], 0, 0);
    }
L_0015cacc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0015cad0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x000002dcu, 0, 0);
    }
L_0015cad4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0015cad8:;
    {
        wr32(cpu->r[3] + - 0xcu, cpu->r[2]);
    }
L_0015cadc:;
    {
        wr32(cpu->r[3] + - 0x8u, cpu->r[2]);
    }
L_0015cae0:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[2]);
    }
L_0015cae4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0015cae8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015caec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015cad8;
        }
    }
L_0015caf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CTouchScreen20AddMouseEventToQueueEiiiPv @ 0015cafc (arm) */
void fn_0015cafc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015cafc:;
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
L_0015cb00:;
    {
        cpu->r[4] = rd32(0x0015cb08u + + 0x94u);
    }
L_0015cb04:;
    {
        cpu->r[12] = rd32(0x0015cb0cu + + 0x94u);
    }
L_0015cb08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0015cb0c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015cb14u, cpu->r[4], 0, 0);
    }
L_0015cb10:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0015cb14:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0015cb18:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000031u, 1, 1);
    }
L_0015cb1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015cb58;
        }
    }
L_0015cb20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0015cb24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015cb60;
        }
    }
L_0015cb28:;
    {
        cpu->r[8] = rd32(0x0015cb30u + + 0x74u);
    }
L_0015cb2c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[6] = v;
    }
L_0015cb30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0015cb34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0015cb38:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_0015cb3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_0015cb40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_0015cb44:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 4u, &shc), cpu->r[0]);
    }
L_0015cb48:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[1]);
    }
L_0015cb4c:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_0015cb50:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_0015cb54:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 3u, &shc), cpu->r[2]);
    }
L_0015cb58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0015cb5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cb60u)) return;
    }
L_0015cb60:;
    {
        cpu->r[3] = rd32(0x0015cb68u + + 0x40u);
    }
L_0015cb64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0015cb68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015cb6c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0015cb70:;
    {
        cpu->r[14] = 0x0015cb74u; fn_000f34a0(cpu);
    }
L_0015cb74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015cb78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015cb7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015cb58;
        }
    }
L_0015cb80:;
    {
        cpu->r[2] = rd32(0x0015cb88u + + 0x24u);
    }
L_0015cb84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015cb88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015cb8c:;
    {
        wr16(cpu->r[2], cpu->r[1]);
    }
L_0015cb90:;
    {
        cpu->r[14] = 0x0015cb98u;
    }
L_0015cb94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cb98u)) return;
    }
L_0015cb98:;
    {
        goto L_0015cb58;
    }
}

/* _ZN12CTouchScreen8AddTouchEiiPv @ 0015cbb0 (arm) */
void fn_0015cbb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015cbb0:;
    {
        cpu->r[3] = rd32(0x0015cbb8u + + 0xbcu);
    }
L_0015cbb4:;
    {
        cpu->r[12] = rd32(0x0015cbbcu + + 0xbcu);
    }
L_0015cbb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015cbc0u, cpu->r[3], 0, 0);
    }
L_0015cbbc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_0015cbc0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0015cbc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0015cbc8:;
    {
        cpu->r[5] = rd16(cpu->r[4]);
    }
L_0015cbcc:;
    {
        cpu->r[4] = (uint32_t)((int16_t)cpu->r[5]);
    }
L_0015cbd0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003bu, 1, 1);
    }
L_0015cbd4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0015cbd8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015cc20;
        }
    }
L_0015cbdc:;
    {
        cpu->r[8] = rd32(0x0015cbe4u + + 0x98u);
    }
L_0015cbe0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0015cbe4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0015cbe8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0015cbec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0015cbf0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0015cbf4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
        }
    }
L_0015cbf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015cbfc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[2]);
        }
    }
L_0015cc00:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0015cc04:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0015cc08:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
        }
    }
L_0015cc0c:;
    {
        wr16(cpu->r[2], cpu->r[0]);
    }
L_0015cc10:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0015cc14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0015cc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015cc2c;
        }
    }
L_0015cc1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0015cc20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0015cc24:;
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
L_0015cc28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015cc2c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0015cc30:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x10u);
    }
L_0015cc34:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_0015cc38:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0015cc3c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_0015cc40:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0015cc44:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015cc48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0015cc4c:;
    {
        cpu->r[1] = rd32(0x0015cc54u + + 0x2cu);
    }
L_0015cc50:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0015cc54:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0015cc58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0015cc5c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0015cc60:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015cc64:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0015cc68:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0015cc6c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015cc70:;
    {
        goto L_0015cc1c;
    }
}

/* _ZN12CTouchScreen12PadMoveEventEiiPv @ 0015cc84 (arm) */
void fn_0015cc84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015cc84:;
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
L_0015cc88:;
    {
        cpu->r[4] = rd32(0x0015cc90u + + 0x214u);
    }
L_0015cc8c:;
    {
        cpu->r[7] = rd32(0x0015cc94u + + 0x214u);
    }
L_0015cc90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0015cc94:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015cc9cu, cpu->r[4], 0, 0);
    }
L_0015cc98:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015cc9c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0015cca0:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0015cca4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0015cca8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0015ccac:;
    {
        cpu->r[14] = 0x0015ccb0u; fn_000960ec(cpu);
    }
L_0015ccb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0015ccb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ce6c;
        }
    }
L_0015ccb8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0015ccbc:;
    {
        cpu->r[14] = 0x0015ccc0u; fn_000960ec(cpu);
    }
L_0015ccc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0015ccc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ce6c;
        }
    }
L_0015ccc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0015cccc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0015ccd0:;
    {
        cpu->r[14] = 0x0015ccd4u; fn_000f34a0(cpu);
    }
L_0015ccd4:;
    {
        cpu->r[3] = rd32(0x0015ccdcu + + 0x1d0u);
    }
L_0015ccd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ccdc:;
    {
        cpu->r[3] = rd8(cpu->r[3]);
    }
L_0015cce0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015cce4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015cce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ccf4;
        }
    }
L_0015ccec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0015ccf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ccf4u)) return;
    }
L_0015ccf4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0015ccf8:;
    {
        cpu->r[14] = 0x0015ccfcu; fn_0015c954(cpu);
    }
L_0015ccfc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0015cd00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ccec;
        }
    }
L_0015cd04:;
    {
        cpu->r[9] = rd32(0x0015cd0cu + + 0x1a4u);
    }
L_0015cd08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0015cd0c:;
    {
        cpu->r[12] = rd32(0x0015cd14u + + 0x1a0u);
    }
L_0015cd10:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0015cd14:;
    {
        cpu->r[3] = rd32(0x0015cd1cu + + 0x19cu);
    }
L_0015cd18:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0015cd1c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0015cd20:;
    {
        cpu->r[12] = rd32(0x0015cd28u + + 0x194u);
    }
L_0015cd24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0015cd28:;
    {
        cpu->r[9] = rd32(0x0015cd30u + + 0x190u);
    }
L_0015cd2c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0015cd30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015cd34:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0015cd38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015cd3c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0015cd40:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_0015cd44:;
    {
        cpu->r[9] = rd32(0x0015cd4cu + + 0x178u);
    }
L_0015cd48:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_0015cd4c:;
    {
        cpu->r[11] = rd32(cpu->r[1] + + 0x4u);
    }
L_0015cd50:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[12]);
    }
L_0015cd54:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0015cd58:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 0);
    }
L_0015cd5c:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_0015cd60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0015cd64:;
    {
        cpu->r[9] = rd32(0x0015cd6cu + + 0x15cu);
    }
L_0015cd68:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0015cd6c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_0015cd70:;
    {
        cpu->r[9] = rd32(0x0015cd78u + + 0x154u);
    }
L_0015cd74:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0015cd78:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_0015cd7c:;
    {
        cpu->r[9] = rd16(cpu->r[10]);
    }
L_0015cd80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0015cd84:;
    {
        cpu->r[9] = rd16(cpu->r[8]);
    }
L_0015cd88:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0015cd8c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015cd90:;
    {
        wr16(cpu->r[9], cpu->r[5]);
    }
L_0015cd94:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015cd98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_0015cd9c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_0015cda0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015cda4:;
    {
        wr16(cpu->r[9], cpu->r[6]);
    }
L_0015cda8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015cdac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_0015cdb0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0015cdb4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015cdb8:;
    {
        wr16(cpu->r[10], cpu->r[9]);
    }
L_0015cdbc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015cdc0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015cdc4:;
    {
        wr16(cpu->r[8], cpu->r[10]);
    }
L_0015cdc8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015cdcc:;
    {
        wr16(cpu->r[8], cpu->r[0]);
    }
L_0015cdd0:;
    {
        wr16(cpu->r[9], cpu->r[12]);
    }
L_0015cdd4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015cdd8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[5]);
    }
L_0015cddc:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[6]);
    }
L_0015cde0:;
    {
        wr16(cpu->r[10], cpu->r[11]);
    }
L_0015cde4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ccec;
        }
    }
L_0015cde8:;
    {
        cpu->r[2] = rd32(0x0015cdf0u + + 0xe0u);
    }
L_0015cdec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015cdf0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_0015cdf4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0015cdf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ce90;
        }
    }
L_0015cdfc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_0015ce00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015ce04:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_0015ce08:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0015ce0c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0015ce10:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0015ce14:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015ce18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_0015ce1c:;
    {
        cpu->r[1] = rd32(0x0015ce24u + + 0xb0u);
    }
L_0015ce20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015ce24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0015ce28:;
    {
        cpu->r[3] = rd32(0x0015ce30u + + 0xa8u);
    }
L_0015ce2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015ce30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ce34:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_0015ce38:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_0015ce3c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0015ce40:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015ce44:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0015ce48:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0015ce4c:;
    {
        vfp_vsub(cpu, 14, 15, 13);
    }
L_0015ce50:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ce54:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0015ce58:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0015ce5c:;
    {
        wr16(cpu->r[1], cpu->r[2]);
    }
L_0015ce60:;
    {
        cpu->r[14] = 0x0015ce68u;
    }
L_0015ce64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ce68u)) return;
    }
L_0015ce68:;
    {
        goto L_0015ccec;
    }
L_0015ce6c:;
    {
        cpu->r[3] = rd32(0x0015ce74u + + 0x68u);
    }
L_0015ce70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ce74:;
    {
        cpu->r[3] = rd32(0x0015ce7cu + + 0x64u);
    }
L_0015ce78:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0015ce7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ce80:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_0015ce84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015ce88:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_0015ce8c:;
    {
        goto L_0015ccc8;
    }
L_0015ce90:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015ce94:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0015ce98:;
    {
        cpu->r[14] = 0x0015cea0u;
    }
L_0015ce9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cea0u)) return;
    }
L_0015cea0:;
    {
        goto L_0015ccec;
    }
}

/* _ZN12CTouchScreen15PadUntouchEventEiiPv @ 0015cee4 (arm) */
void fn_0015cee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015cee4:;
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
L_0015cee8:;
    {
        cpu->r[4] = rd32(0x0015cef0u + + 0x138u);
    }
L_0015ceec:;
    {
        cpu->r[5] = rd32(0x0015cef4u + + 0x138u);
    }
L_0015cef0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015cef4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015cefcu, cpu->r[4], 0, 0);
    }
L_0015cef8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0015cefc:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0015cf00:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015cf04:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0015cf08:;
    {
        cpu->r[14] = 0x0015cf0cu; fn_000960ec(cpu);
    }
L_0015cf0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0015cf10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015cff0;
        }
    }
L_0015cf14:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0015cf18:;
    {
        cpu->r[14] = 0x0015cf1cu; fn_000960ec(cpu);
    }
L_0015cf1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0015cf20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015cff0;
        }
    }
L_0015cf24:;
    {
        cpu->r[3] = rd32(0x0015cf2cu + + 0x104u);
    }
L_0015cf28:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015cf2c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[8]);
    }
L_0015cf30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015cf34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cf38u)) return;
        }
    }
L_0015cf38:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015cf3c:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0015cf40:;
    {
        cpu->r[14] = 0x0015cf44u; fn_000f34a0(cpu);
    }
L_0015cf44:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015cf48:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0015cf4c:;
    {
        cpu->r[14] = 0x0015cf50u; fn_0015c9e0(cpu);
    }
L_0015cf50:;
    {
        cpu->r[3] = rd32(0x0015cf58u + + 0xdcu);
    }
L_0015cf54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015cf58:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0015cf5c:;
    {
        wr16(cpu->r[3], cpu->r[0]);
    }
L_0015cf60:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0015cf64:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0015cf68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cf6cu)) return;
        }
    }
L_0015cf6c:;
    {
        cpu->r[0] = rd32(0x0015cf74u + + 0xc4u);
    }
L_0015cf70:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015cf74:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0015cf78:;
    {
        cpu->r[2] = rd32(0x0015cf80u + + 0xbcu);
    }
L_0015cf7c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015cf80:;
    {
        cpu->r[0] = rd32(0x0015cf88u + + 0xb8u);
    }
L_0015cf84:;
    {
        cpu->r[8] = rd16(cpu->r[8]);
    }
L_0015cf88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015cf8c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015cf90:;
    {
        cpu->r[0] = rd32(0x0015cf98u + + 0xacu);
    }
L_0015cf94:;
    {
        cpu->r[2] = rd32(0x0015cf9cu + + 0xacu);
    }
L_0015cf98:;
    {
        wr16(cpu->r[12], cpu->r[8]);
    }
L_0015cf9c:;
    {
        cpu->r[12] = 0x000084a0u;
    }
L_0015cfa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015cfa4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015cfa8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015cfac:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[6]);
    }
L_0015cfb0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0015cfb4:;
    {
        wr16(cpu->r[10], cpu->r[4]);
    }
L_0015cfb8:;
    {
        cpu->r[4] = 0x000084a8u;
    }
L_0015cfbc:;
    {
        wr16(cpu->r[0], cpu->r[12]);
    }
L_0015cfc0:;
    {
        cpu->r[0] = 0x000084a4u;
    }
L_0015cfc4:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_0015cfc8:;
    {
        wr16(cpu->r[1], cpu->r[6]);
    }
L_0015cfcc:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[10]);
    }
L_0015cfd0:;
    {
        wr32(cpu->r[3] + cpu->r[0], cpu->r[7]);
    }
L_0015cfd4:;
    {
        wr16(cpu->r[2], cpu->r[7]);
    }
L_0015cfd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cfdcu)) return;
        }
    }
L_0015cfdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015cfe0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015cfe4:;
    {
        cpu->r[14] = 0x0015cfecu;
    }
L_0015cfe8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cfecu)) return;
    }
L_0015cfec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015cff0u)) return;
    }
L_0015cff0:;
    {
        cpu->r[3] = rd32(0x0015cff8u + + 0x54u);
    }
L_0015cff4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015cff8:;
    {
        cpu->r[3] = rd32(0x0015d000u + + 0x50u);
    }
L_0015cffc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0015d000:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d004:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0015d008:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d00c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_0015d010:;
    {
        cpu->r[3] = rd32(0x0015d018u + + 0x18u);
    }
L_0015d014:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d018:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[8]);
    }
L_0015d01c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d020:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015cf38;
        }
    }
L_0015d024:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d028u)) return;
    }
}

/* _ZN12CTouchScreen13PadTouchEventEiiPv @ 0015d054 (arm) */
void fn_0015d054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d054:;
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
L_0015d058:;
    {
        cpu->r[4] = rd32(0x0015d060u + + 0x110u);
    }
L_0015d05c:;
    {
        cpu->r[7] = rd32(0x0015d064u + + 0x110u);
    }
L_0015d060:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0015d064:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015d06cu, cpu->r[4], 0, 0);
    }
L_0015d068:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015d06c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0015d070:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0015d074:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0015d078:;
    {
        cpu->r[14] = 0x0015d07cu; fn_000960ec(cpu);
    }
L_0015d07c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0015d080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d14c;
        }
    }
L_0015d084:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0015d088:;
    {
        cpu->r[14] = 0x0015d08cu; fn_000960ec(cpu);
    }
L_0015d08c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0015d090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d14c;
        }
    }
L_0015d094:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0015d098:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0015d09c:;
    {
        cpu->r[14] = 0x0015d0a0u; fn_000f34a0(cpu);
    }
L_0015d0a0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0015d0a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015d0a8:;
    {
        cpu->r[14] = 0x0015d0acu; fn_0015c954(cpu);
    }
L_0015d0ac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0015d0b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d0c8;
        }
    }
L_0015d0b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015d0b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015d0bc:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0015d0c0:;
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
L_0015d0c4:;
    {
        return fn_0015cc84(cpu);
    }
L_0015d0c8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0015d0cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015d0d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015d0d4:;
    {
        cpu->r[10] = rd32(0x0015d0dcu + + 0x9cu);
    }
L_0015d0d8:;
    {
        cpu->r[14] = 0x0015d0dcu; fn_0015cbb0(cpu);
    }
L_0015d0dc:;
    {
        cpu->r[3] = rd32(0x0015d0e4u + + 0x98u);
    }
L_0015d0e0:;
    {
        cpu->r[1] = rd32(0x0015d0e8u + + 0x98u);
    }
L_0015d0e4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0015d0e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d0ec:;
    {
        cpu->r[3] = rd32(0x0015d0f4u + + 0x90u);
    }
L_0015d0f0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015d0f4:;
    {
        cpu->r[1] = rd32(0x0015d0fcu + + 0x8cu);
    }
L_0015d0f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d0fc:;
    {
        cpu->r[3] = rd32(0x0015d104u + + 0x88u);
    }
L_0015d100:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015d104:;
    {
        wr16(cpu->r[12], cpu->r[6]);
    }
L_0015d108:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d10c:;
    {
        cpu->r[3] = rd32(0x0015d114u + + 0x7cu);
    }
L_0015d110:;
    {
        wr16(cpu->r[2], cpu->r[5]);
    }
L_0015d114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d118:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0015d11c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0015d120:;
    {
        wr16(cpu->r[8], cpu->r[10]);
    }
L_0015d124:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0015d128:;
    {
        wr16(cpu->r[1], cpu->r[10]);
    }
L_0015d12c:;
    {
        wr16(cpu->r[4], cpu->r[3]);
    }
L_0015d130:;
    {
        wr16(cpu->r[9], cpu->r[0]);
    }
L_0015d134:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d138u)) return;
        }
    }
L_0015d138:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0015d13c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0015d140:;
    {
        cpu->r[14] = 0x0015d148u;
    }
L_0015d144:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d148u)) return;
    }
L_0015d148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d14cu)) return;
    }
L_0015d14c:;
    {
        cpu->r[3] = rd32(0x0015d154u + + 0x40u);
    }
L_0015d150:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d154:;
    {
        cpu->r[3] = rd32(0x0015d15cu + + 0x3cu);
    }
L_0015d158:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0015d15c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015d160:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0015d164:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d168:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0015d16c:;
    {
        goto L_0015d094;
    }
}

/* _ZN12CTouchScreen22ProcessMouseEventQueueEv @ 0015d19c (arm) */
void fn_0015d19c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d19c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015d1a0:;
    {
        cpu->r[6] = rd32(0x0015d1a8u + + 0xc0u);
    }
L_0015d1a4:;
    {
        cpu->r[7] = rd32(0x0015d1acu + + 0xc0u);
    }
L_0015d1a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015d1ac:;
    {
        cpu->r[6] = add_flags(cpu, 0x0015d1b4u, cpu->r[6], 0, 0);
    }
L_0015d1b0:;
    {
        cpu->r[2] = rd32(0x0015d1b8u + + 0xb8u);
    }
L_0015d1b4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0015d1b8:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0015d1bc:;
    {
        cpu->r[2] = rd32(0x0015d1c4u + + 0xb0u);
    }
L_0015d1c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d1c4:;
    {
        wr16(cpu->r[1], cpu->r[0]);
    }
L_0015d1c8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0015d1cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d1d0:;
    {
        wr16(cpu->r[2], cpu->r[0]);
    }
L_0015d1d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015d24c;
        }
    }
L_0015d1d8:;
    {
        cpu->r[3] = rd32(0x0015d1e0u + + 0x98u);
    }
L_0015d1dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015d1e0:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0015d1e4:;
    {
        goto L_0015d218;
    }
L_0015d1e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015d1ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d25c;
        }
    }
L_0015d1f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d1f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d200;
        }
    }
L_0015d1f8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0015d1fc:;
    {
        cpu->r[14] = 0x0015d200u; fn_0015d054(cpu);
    }
L_0015d200:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0015d204:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015d208:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_0015d20c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d210:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0015d214:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015d24c;
        }
    }
L_0015d218:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015d21c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015d220:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d1e8;
        }
    }
L_0015d224:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0015d228:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015d22c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015d230:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0015d234:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_0015d238:;
    {
        cpu->r[14] = 0x0015d23cu; fn_0015cee4(cpu);
    }
L_0015d23c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0015d240:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d244:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0015d248:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015d218;
        }
    }
L_0015d24c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0015d250:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015d254:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0015d258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d25cu)) return;
    }
L_0015d25c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0015d260:;
    {
        cpu->r[14] = 0x0015d264u; fn_0015cc84(cpu);
    }
L_0015d264:;
    {
        goto L_0015d200;
    }
}

/* _ZN12CVideoPlayer16SetContentWindowEiiii @ 0015d27c (arm) */
void fn_0015d27c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d27c:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0015d280:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_0015d284:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_0015d288:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[3]);
    }
L_0015d28c:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[1]);
    }
L_0015d290:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CVideoPlayer15SetSourceWindowEffff @ 0015d294 (arm) */
void fn_0015d294(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d294:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_0015d298:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[1]);
    }
L_0015d29c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d2a0:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_0015d2a4:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_0015d2a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CVideoPlayer4StopEv @ 0015d2ac (arm) */
void fn_0015d2ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d2ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0015d2b0:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[3]);
    }
L_0015d2b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015d2b8:;
    {
        wr8(cpu->r[0] + + 0xa0u, cpu->r[3]);
    }
L_0015d2bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CVideoPlayer6RewindEv @ 0015d2c0 (arm) */
void fn_0015d2c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d2c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0015d2c4:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[3]);
    }
L_0015d2c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015d2cc:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[3]);
    }
L_0015d2d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CVideoPlayer4PlayEb @ 0015d2d4 (arm) */
void fn_0015d2d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d2d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_0015d2d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015d2dc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0015d2e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d2e4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015d2e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d2f8;
        }
    }
L_0015d2ec:;
    {
        cpu->r[14] = 0x0015d2f0u; fn_0015d2ac(cpu);
    }
L_0015d2f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d2f4:;
    {
        cpu->r[14] = 0x0015d2f8u; fn_0015d2c0(cpu);
    }
L_0015d2f8:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_0015d2fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d300u)) return;
    }
}

/* _ZN12CVideoPlayer6IsDoneEv @ 0015d300 (arm) */
void fn_0015d300(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d300:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_0015d304:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0015d308:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015d30c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015d310:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CVideoPlayer6RenderEv @ 0015d314 (arm) */
void fn_0015d314(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d314:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x9cu);
    }
L_0015d318:;
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
L_0015d31c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0015d320:;
    {
        cpu->r[5] = rd32(0x0015d328u + + 0x1ecu);
    }
L_0015d324:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0015d328:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015d330u, cpu->r[5], 0, 0);
    }
L_0015d32c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d508;
        }
    }
L_0015d330:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x90u);
    }
L_0015d334:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015d33cu + + 0x1d4u);
    }
L_0015d338:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_0015d33c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0015d340:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x80u);
    }
L_0015d344:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0015d348:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x84u);
    }
L_0015d34c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015d350:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x88u);
    }
L_0015d354:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015d358:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0015d35c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_0015d360:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_0015d364:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_0015d368:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d36c:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0015d370:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[4]);
        cpu->r[12] = wb_tmp;
    }
L_0015d374:;
    {
        cpu->r[14] = (uint32_t)((uint16_t)cpu->r[14]);
    }
L_0015d378:;
    {
        wr32(cpu->r[12], cpu->r[4]);
    }
L_0015d37c:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_0015d380:;
    {
        wr16(cpu->r[13] + + 0x46u, cpu->r[14]);
    }
L_0015d384:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_0015d388:;
    {
        wr16(cpu->r[13] + + 0x3au, cpu->r[14]);
    }
L_0015d38c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0015d390:;
    {
        wr16(cpu->r[13] + + 0x3eu, cpu->r[14]);
    }
L_0015d394:;
    {
        cpu->r[6] = 0x00001288u;
    }
L_0015d398:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d39c:;
    {
        wr16(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_0015d3a0:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3a4:;
    {
        wr16(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_0015d3a8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8cu);
    }
L_0015d3b0:;
    {
        wr16(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_0015d3b4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015d3b8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3bc:;
    {
        wr16(cpu->r[13] + + 0x42u, cpu->r[10]);
    }
L_0015d3c0:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3c4:;
    {
        wr16(cpu->r[13] + + 0x44u, cpu->r[8]);
    }
L_0015d3c8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3cc:;
    {
        wr16(cpu->r[13] + + 0x32u, cpu->r[10]);
    }
L_0015d3d0:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3d4:;
    {
        wr16(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_0015d3d8:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[4]);
        cpu->r[1] = wb_tmp;
    }
L_0015d3dc:;
    {
        wr16(cpu->r[13] + + 0x36u, cpu->r[10]);
    }
L_0015d3e0:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_0015d3e4:;
    {
        wr16(cpu->r[13] + + 0x38u, cpu->r[8]);
    }
L_0015d3e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d3ec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x98u);
    }
L_0015d3f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x94u);
    }
L_0015d3f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d3f8:;
    {
        vfp_vadd(cpu, 13, 14, 13);
    }
L_0015d3fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d400:;
    {
        cpu->r[1] = rd16(cpu->r[0] + + 0x78u);
    }
L_0015d404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015d408:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015d40c:;
    {
        vfp_vsub(cpu, 15, 15, 12);
    }
L_0015d410:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015d414:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015d418:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015d41c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d420:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d424:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015d428:;
    {
        cpu->r[14] = 0x0015d42cu; fn_00135cf4(cpu);
    }
L_0015d42c:;
    {
        cpu->r[3] = rd32(0x0015d434u + + 0xe4u);
    }
L_0015d430:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015d434:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_0015d438:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d43c:;
    {
        cpu->r[14] = 0x0015d440u; fn_0012f66c(cpu);
    }
L_0015d440:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d444:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015d448:;
    {
        cpu->r[14] = 0x0015d44cu; fn_0012e1c8(cpu);
    }
L_0015d44c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0015d450:;
    {
        cpu->r[1] = 0x00001402u;
    }
L_0015d454:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0015d458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0015d45c:;
    {
        cpu->r[14] = 0x0015d460u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0015d460:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0015d464:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0015d468:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d46c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015d470:;
    {
        cpu->r[14] = 0x0015d474u; fn_0012f12c(cpu);
    }
L_0015d474:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d478:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015d47c:;
    {
        cpu->r[14] = 0x0015d480u; fn_0012e150(cpu);
    }
L_0015d480:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0015d484:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0015d488:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0015d48c:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0015d490:;
    {
        cpu->r[14] = 0x0015d494u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0015d494:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015d498:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_0015d49c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015d4a0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0015d4a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0015d4a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000cu;
        }
    }
L_0015d4ac:;
    {
        cpu->r[14] = 0x0015d4b0u; fn_0014814c(cpu);
    }
L_0015d4b0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0015d4b4:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0015d4b8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0015d4bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0015d4c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d4c4:;
    {
        cpu->r[14] = 0x0015d4ccu;
    }
L_0015d4c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d4ccu)) return;
    }
L_0015d4cc:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_0015d4d0:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0015d4d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015d4d8:;
    {
        cpu->r[14] = 0x0015d4dcu; imp_glDrawArrays(cpu); /* glDrawArrays */
    }
L_0015d4dc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d4e0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015d4e4:;
    {
        cpu->r[14] = 0x0015d4e8u; fn_0012e150(cpu);
    }
L_0015d4e8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015d4ec:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d4f0:;
    {
        cpu->r[14] = 0x0015d4f4u; fn_0012e1c8(cpu);
    }
L_0015d4f4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015d4f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0015d4fc:;
    {
        cpu->r[14] = 0x0015d500u; fn_00147ccc(cpu);
    }
L_0015d500:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0015d504:;
    {
        cpu->r[14] = 0x0015d508u; fn_0012ea40(cpu);
    }
L_0015d508:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0015d50c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d510u)) return;
    }
}

/* _ZN12CVideoPlayer6UpdateEv @ 0015d51c (arm) */
void fn_0015d51c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d51c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9cu);
    }
L_0015d520:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015d524:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0015d528:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d52c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d530u)) return;
        }
    }
L_0015d530:;
    {
        cpu->r[14] = 0x0015d534u; fn_0009b4d0(cpu);
    }
L_0015d534:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0015d538:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015d53c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000042u, 1, 1);
    }
L_0015d540:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d544u)) return;
        }
    }
L_0015d544:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x78u);
    }
L_0015d548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000042u, 0, 0);
    }
L_0015d54c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x70u);
    }
L_0015d550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015d554:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[3]);
    }
L_0015d558:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0015d55c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[2]);
    }
L_0015d560:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d564u)) return;
        }
    }
L_0015d564:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_0015d568:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d56c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_0015d570:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0015d574:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[2]);
        }
    }
L_0015d578:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[3]);
        }
    }
L_0015d57c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d580u)) return;
    }
}

/* _ZN12CVideoPlayerC1EPci @ 0015d580 (arm) */
void fn_0015d580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d580:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015d584:;
    {
        cpu->r[5] = rd32(0x0015d58cu + + 0x70u);
    }
L_0015d588:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0015d58c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d590:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0015d594:;
    {
        cpu->r[14] = 0x0015d598u; fn_00136068(cpu);
    }
L_0015d598:;
    {
        cpu->r[2] = rd32(0x0015d5a0u + + 0x60u);
    }
L_0015d59c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015d5a4u, cpu->r[5], 0, 0);
    }
L_0015d5a0:;
    {
        cpu->r[14] = 0x3f800000u;
    }
L_0015d5a4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0015d5a8:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[1]);
    }
L_0015d5ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015d5b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0015d5b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0015d5b8:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[6]);
    }
L_0015d5bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d5c0:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[12]);
    }
L_0015d5c4:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0015d5c8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[12]);
    }
L_0015d5cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015d5d0:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[12]);
    }
L_0015d5d4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0015d5d8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0015d5dc:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[12]);
    }
L_0015d5e0:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[12]);
    }
L_0015d5e4:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[12]);
    }
L_0015d5e8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0015d5ec:;
    {
        cpu->r[14] = 0x0015d5f0u; fn_0015d294(cpu);
    }
L_0015d5f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d5f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015d5f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d5fcu)) return;
    }
}

/* _ZN12CVideoPlayerC2EPci @ 0015d604 (arm) */
void fn_0015d604(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d604:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015d608:;
    {
        cpu->r[5] = rd32(0x0015d610u + + 0x70u);
    }
L_0015d60c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0015d610:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d614:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0015d618:;
    {
        cpu->r[14] = 0x0015d61cu; fn_00136068(cpu);
    }
L_0015d61c:;
    {
        cpu->r[2] = rd32(0x0015d624u + + 0x60u);
    }
L_0015d620:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015d628u, cpu->r[5], 0, 0);
    }
L_0015d624:;
    {
        cpu->r[14] = 0x3f800000u;
    }
L_0015d628:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0015d62c:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[1]);
    }
L_0015d630:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015d634:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0015d638:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0015d63c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[6]);
    }
L_0015d640:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d644:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[12]);
    }
L_0015d648:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0015d64c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[12]);
    }
L_0015d650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015d654:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[12]);
    }
L_0015d658:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0015d65c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0015d660:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[12]);
    }
L_0015d664:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[12]);
    }
L_0015d668:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[12]);
    }
L_0015d66c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0015d670:;
    {
        cpu->r[14] = 0x0015d674u; fn_0015d294(cpu);
    }
L_0015d674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d678:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015d67c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d680u)) return;
    }
}

/* _ZN12CVideoPlayerD1Ev @ 0015d688 (arm) */
void fn_0015d688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d688:;
    {
        cpu->r[3] = rd32(0x0015d690u + + 0x24u);
    }
L_0015d68c:;
    {
        cpu->r[2] = rd32(0x0015d694u + + 0x24u);
    }
L_0015d690:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015d698u, cpu->r[3], 0, 0);
    }
L_0015d694:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015d698:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015d69c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d6a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015d6a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015d6a8:;
    {
        cpu->r[14] = 0x0015d6acu; fn_00136b40(cpu);
    }
L_0015d6ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d6b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d6b4u)) return;
    }
}

/* _ZN12CVideoPlayerD0Ev @ 0015d6bc (arm) */
void fn_0015d6bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d6bc:;
    {
        cpu->r[3] = rd32(0x0015d6c4u + + 0x2cu);
    }
L_0015d6c0:;
    {
        cpu->r[2] = rd32(0x0015d6c8u + + 0x2cu);
    }
L_0015d6c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015d6ccu, cpu->r[3], 0, 0);
    }
L_0015d6c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015d6cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015d6d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015d6d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0015d6d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015d6dc:;
    {
        cpu->r[14] = 0x0015d6e0u; fn_00136b40(cpu);
    }
L_0015d6e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d6e4:;
    {
        cpu->r[14] = 0x0015d6e8u; fn_0018ba20(cpu);
    }
L_0015d6e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015d6ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d6f0u)) return;
    }
}

/* _ZN8CCarBase17CastToCTrafficCarEv @ 0015d6f8 (arm) */
void fn_0015d6f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d6f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015d6fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase17CastToCTrafficCarEv @ 0015d700 (arm) */
void fn_0015d700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d700:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015d704:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBase8GetSpeedEv @ 0015d708 (arm) */
void fn_0015d708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d708:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x45cu);
    }
L_0015d70c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar10CastToCCarEv @ 0015d710 (arm) */
void fn_0015d710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d710:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar10CastToCCarEv @ 0015d714 (arm) */
void fn_0015d714(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d714:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK10CCarTiming21GetTimeInMilliSecondsEv @ 0015d718 (arm) */
void fn_0015d718(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d718:;
    {
        cpu->r[3] = rd32(0x0015d720u + + 0x28u);
    }
L_0015d71c:;
    {
        cpu->r[1] = rd32(0x0015d724u + + 0x28u);
    }
L_0015d720:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015d728u, cpu->r[3], 0, 0);
    }
L_0015d724:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_0015d728:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_0015d72c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0015d730:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015d734:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d738:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_0015d73c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0015d740:;
    {
        cpu->r[14] = 0x0015d744u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015d744:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015d748u)) return;
    }
}

/* _ZN10CCarTiming25SetFramesFromMilliSecondsEi @ 0015d750 (arm) */
void fn_0015d750(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d750:;
    {
        cpu->r[3] = rd32(0x0015d758u + + 0x30u);
    }
L_0015d754:;
    {
        cpu->r[2] = 0x00004dd3u;
    }
L_0015d758:;
    {
        cpu->r[12] = rd32(0x0015d760u + + 0x2cu);
    }
L_0015d75c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1062u << 16);
    }
L_0015d760:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015d768u, cpu->r[3], 0, 0);
    }
L_0015d764:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0015d768:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015d76c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0015d770:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0015d774:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0015d778:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0015d77c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_0015d780:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0015d784:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar18GetCarBounceFactorEv @ 0015d790 (arm) */
void fn_0015d790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d790:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015d794:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d798:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0015d79c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000200u;
        }
    }
L_0015d7a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000400u;
        }
    }
L_0015d7a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar22GetCarForwardShifted12Ev @ 0015d7a8 (arm) */
void fn_0015d7a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d7a8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0015d7ac:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x17cu);
    }
L_0015d7b0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x184u);
    }
L_0015d7b4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x180u);
    }
L_0015d7b8:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_0015d7bc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0015d7c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015d7c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar20GetCarRightShifted12Ev @ 0015d7c8 (arm) */
void fn_0015d7c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d7c8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0015d7cc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x188u);
    }
L_0015d7d0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x190u);
    }
L_0015d7d4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x18cu);
    }
L_0015d7d8:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_0015d7dc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0015d7e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015d7e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar32GetCarForwardAndRight3dShifted12ER8Vector4sS1_ @ 0015d7e8 (arm) */
void fn_0015d7e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d7e8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0015d7ec:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0015d7f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000017cu, 0, 0);
    }
L_0015d7f4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0015d7f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000188u, 0, 0);
    }
L_0015d7fc:;
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
L_0015d800:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015d804:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0015d808:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0015d80c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015d810:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar16GetCarRotation3dEv @ 0015d814 (arm) */
void fn_0015d814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d814:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0015d818:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x84u);
    }
L_0015d81c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8cu);
    }
L_0015d820:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x88u);
    }
L_0015d824:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_0015d828:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0015d82c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0015d830:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar16GetCarRotation2dEv @ 0015d834 (arm) */
void fn_0015d834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d834:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x88u);
    }
L_0015d838:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar23GetBorderCrashThresholdEb @ 0015d83c (arm) */
void fn_0015d83c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d83c:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_0015d840:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0015d844:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d848:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d888;
        }
    }
L_0015d84c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015d850:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d854:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0015d858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d8ac;
        }
    }
L_0015d85c:;
    {
        cpu->r[3] = 0x000018c0u;
    }
L_0015d860:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d864:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0015d868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d8bc;
        }
    }
L_0015d86c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015d870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d8cc;
        }
    }
L_0015d874:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015d878:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000096u;
        }
    }
L_0015d87c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015d880:;
    {
        cpu->r[0] = (~0x80000000u);
    }
L_0015d884:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015d888:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015d88c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d890:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0015d894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d8ac;
        }
    }
L_0015d898:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015d89c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000014u;
        }
    }
L_0015d8a0:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015d8a4:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_0015d8a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015d8ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015d8b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x000000a0u;
        }
    }
L_0015d8b4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015d8b8:;
    {
        goto L_0015d8a4;
    }
L_0015d8bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015d8c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x000000fau;
        }
    }
L_0015d8c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d880;
        }
    }
L_0015d8c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015d8cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015d8d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x000000c8u;
        }
    }
L_0015d8d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d880;
        }
    }
L_0015d8d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar15IsCarCollidableEv @ 0015d8dc (arm) */
void fn_0015d8dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d8dc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015d8e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d8e4:;
    {
        { uint32_t v = cpu->r[3] & 0x00100000u; set_nz(cpu, v); }
    }
L_0015d8e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d918;
        }
    }
L_0015d8ec:;
    {
        cpu->r[3] = 0x00001758u;
    }
L_0015d8f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015d8f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015d8f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d918;
        }
    }
L_0015d8fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x480u);
    }
L_0015d900:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_0015d904:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015d908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000045u, 1, 1);
    }
L_0015d90c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015d910:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015d914:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015d918:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015d91c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar11IsPlayerCarEv @ 0015d920 (arm) */
void fn_0015d920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d920:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_0015d924:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0015d928:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0015d92c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0015d930:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0015d934:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0015d938:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0015d93c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0015d940:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0015d944:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0015d948:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0015d94c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015d950:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015d954:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015d958:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar21ShouldUpdateAndRenderEv @ 0015d95c (arm) */
void fn_0015d95c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d95c:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_0015d960:;
    {
        cpu->r[3] = rd32(0x0015d968u + + 0x68u);
    }
L_0015d964:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_0015d968:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015d970u, cpu->r[3], 0, 0);
    }
L_0015d96c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015d970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015d9c8;
        }
    }
L_0015d974:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0015d978:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0015d97c:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0015d980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015d9c8;
        }
    }
L_0015d984:;
    {
        cpu->r[1] = rd32(0x0015d98cu + + 0x48u);
    }
L_0015d988:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0015d98c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0015d990:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0015d994:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0015d998:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0015d99c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0015d9a0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0015d9a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0015d9a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0015d9ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0015d9b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0015d9b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0015d9b8:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0015d9bc:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0015d9c0:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_0015d9c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015d9c8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0015d9cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar15computeMaxSpeedEv @ 0015d9d8 (arm) */
void fn_0015d9d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015d9d8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x348u);
    }
L_0015d9dc:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0015d9e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0015d9e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015d9e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015d9ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x298u);
    }
L_0015d9f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 6u, &shc), 0, 0);
    }
L_0015d9f4:;
    {
        wr32(cpu->r[0] + + 0x460u, cpu->r[2]);
    }
L_0015d9f8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0015d9fc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015da00:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_0015da04:;
    {
        wr32(cpu->r[0] + + 0x464u, cpu->r[3]);
    }
L_0015da08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar10ResetNitroEv @ 0015da0c (arm) */
void fn_0015da0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015da0c:;
    {
        cpu->r[3] = 0x000018f8u;
    }
L_0015da10:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_0015da14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015da18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015da1c:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_0015da20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0015da24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0015da28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0015da2c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0015da30:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0015da34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015da38:;
    {
        cpu->r[3] = 0x000018e4u;
    }
L_0015da3c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015da40:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015da44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar26UpdateRotationByCollisionsEv @ 0015da48 (arm) */
void fn_0015da48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015da48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015da4c:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_0015da50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000058u, 1, 0);
    }
L_0015da54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015da58:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0015da5c:;
    {
        { uint32_t v = cpu->r[6] & 0x00000008u; set_nz(cpu, v); }
    }
L_0015da60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015dc2c;
        }
    }
L_0015da64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_0015da68:;
    {
        cpu->r[6] = (cpu->r[6] >> 4) & 0x1u;
    }
L_0015da6c:;
    {
        { uint32_t v = cpu->r[3] & 0x00001000u; set_nz(cpu, v); }
    }
L_0015da70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015daf4;
        }
    }
L_0015da74:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0015da78:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015da7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0015da80:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1c4u);
    }
L_0015da84:;
    {
        cpu->r[14] = 0x0015da8cu;
    }
L_0015da88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015da8cu)) return;
    }
L_0015da8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4b8u);
    }
L_0015da90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0015da94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4bcu);
    }
L_0015da98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4c0u);
    }
L_0015da9c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0015daa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0015daa4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_0015daa8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0015daac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015dab0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[2]; cpu->r[1] = v;
    }
L_0015dab4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0015dab8:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015dabc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0015dac0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_0015dac4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x0000000au;
        }
    }
L_0015dac8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000005u;
        }
    }
L_0015dacc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_0015dad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc34;
        }
    }
L_0015dad4:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_0015dad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc44;
        }
    }
L_0015dadc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0015dae0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015dae4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_0015dae8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_0015daec:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_0015daf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0015daf4:;
    {
        { uint32_t v = cpu->r[3] & 0x0000000cu; set_nz(cpu, v); }
    }
L_0015daf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc2c;
        }
    }
L_0015dafc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x488u);
    }
L_0015db00:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015db04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc88;
        }
    }
L_0015db08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015db0c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015db10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0015db14:;
    {
        cpu->r[14] = 0x0015db1cu;
    }
L_0015db18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015db1cu)) return;
    }
L_0015db1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015db20:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015db24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0015db28:;
    {
        cpu->r[14] = 0x0015db30u;
    }
L_0015db2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015db30u)) return;
    }
L_0015db30:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015db34:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015db38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0015db3c:;
    {
        cpu->r[14] = 0x0015db44u;
    }
L_0015db40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015db44u)) return;
    }
L_0015db44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015db48:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0015db4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0015db50:;
    {
        cpu->r[14] = 0x0015db58u;
    }
L_0015db54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015db58u)) return;
    }
L_0015db58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015db5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015db60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0015db64:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0015db68:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015db6c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0015db70:;
    {
        cpu->r[14] = 0x0015db78u;
    }
L_0015db74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015db78u)) return;
    }
L_0015db78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0015db7c:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0015db80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0015db84:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_0015db88:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_0015db8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015db94u + + 0x104u);
    }
L_0015db90:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0015db94:;
    {
        cpu->r[2] = 0x00000167u;
    }
L_0015db98:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0015db9c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_0015dba0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0015dba4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[8]; cpu->r[7] = v;
    }
L_0015dba8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0015dbac:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3] + cpu->r[7]; cpu->r[3] = v;
    }
L_0015dbb0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0015dbb4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015dbb8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0015dbbc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015dbc0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015dbc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015dbc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015dbd8;
        }
    }
L_0015dbcc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000168u, 1, 0);
    }
L_0015dbd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015dbd4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015dbcc;
        }
    }
L_0015dbd8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015dbdc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0015dbe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0015dbe4:;
    {
        cpu->r[14] = 0x0015dbecu;
    }
L_0015dbe8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dbecu)) return;
    }
L_0015dbec:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0015dbf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0015dbf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015dbf8:;
    {
        cpu->r[1] = (cpu->r[3] >> 1) & 0x1u;
    }
L_0015dbfc:;
    {
        cpu->r[3] = (cpu->r[3] >> 3) & 0x1u;
    }
L_0015dc00:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_0015dc04:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[3] = v;
        }
    }
L_0015dc08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dc0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc68;
        }
    }
L_0015dc10:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015dc14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015dc70;
        }
    }
L_0015dc18:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015dc1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015dc78;
        }
    }
L_0015dc20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0015dc24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0015dc28:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_0015dc2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0015dc30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dc34u)) return;
    }
L_0015dc34:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_0015dc38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dadc;
        }
    }
L_0015dc3c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0015dc40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015daf0;
        }
    }
L_0015dc44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015dc48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
        }
    }
L_0015dc4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
        }
    }
L_0015dc50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
        }
    }
L_0015dc54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
        }
    }
L_0015dc58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_0015dc5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
        }
    }
L_0015dc60:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_0015dc64:;
    {
        goto L_0015daf4;
    }
L_0015dc68:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015dc6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015dc18;
        }
    }
L_0015dc70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015dc74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015dc20;
        }
    }
L_0015dc78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0015dc7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 0);
    }
L_0015dc80:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_0015dc84:;
    {
        goto L_0015dc2c;
    }
L_0015dc88:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x48cu);
    }
L_0015dc8c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015dc90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dc2c;
        }
    }
L_0015dc94:;
    {
        goto L_0015db08;
    }
}

/* _ZN4CCar19UpdateEngineBrakingEi @ 0015dc9c (arm) */
void fn_0015dc9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015dc9c:;
    {
        cpu->r[3] = rd32(0x0015dca4u + + 0x188u);
    }
L_0015dca0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015dca4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x480u);
    }
L_0015dca8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015dcac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0015dcb0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_0015dcb4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015dcbcu, cpu->r[3], 0, 0);
    }
L_0015dcb8:;
    {
        cpu->r[0] = rd32(0x0015dcc0u + + 0x170u);
    }
L_0015dcbc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0015dcc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_0015dcc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0015dcc8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015dccc:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x418u);
    }
L_0015dcd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015dd38;
        }
    }
L_0015dcd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015dcd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015dcdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015dddc;
        }
    }
L_0015dce0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_0015dce4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0015dce8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x428u);
    }
L_0015dcec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x180u);
    }
L_0015dcf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0015dcf4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0015dcf8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x184u);
    }
L_0015dcfc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[0]; cpu->r[2] = v;
    }
L_0015dd00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_0015dd04:;
    {
        cpu->r[0] = 0x00001788u;
    }
L_0015dd08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015dd0c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_0015dd10:;
    {
        { uint32_t v = cpu->r[0] & 0x00000010u; set_nz(cpu, v); }
    }
L_0015dd14:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0015dd18:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0015dd1c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015dd20:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_0015dd24:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015dd28:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015dd2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_0015dd30:;
    {
        add_flags(cpu, cpu->r[3], 0x0000000au, 0, 1);
    }
L_0015dd34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015ddf8;
        }
    }
L_0015dd38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34cu);
    }
L_0015dd3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dd40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0015dd44:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[3]);
        }
    }
L_0015dd48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dd4cu)) return;
        }
    }
L_0015dd4c:;
    {
        { uint32_t v = cpu->r[6] & 0x0000004cu; set_nz(cpu, v); }
    }
L_0015dd50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ddb0;
        }
    }
L_0015dd54:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015dd58:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0015dd5c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015dda0;
        }
    }
L_0015dd60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015dd64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dd68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015dda0;
        }
    }
L_0015dd6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x370u);
    }
L_0015dd70:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015dd74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x620u);
    }
L_0015dd78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015dd7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
        }
    }
L_0015dd80:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
        }
    }
L_0015dd84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015dd88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
        }
    }
L_0015dd8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
        }
    }
L_0015dd90:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0015dd94:;
    {
        cpu->r[14] = 0x0015dd98u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015dd98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0015dd9c:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[0]);
    }
L_0015dda0:;
    {
        cpu->r[3] = 0x00001660u;
    }
L_0015dda4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015dda8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0015ddac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ddb0u)) return;
    }
L_0015ddb0:;
    {
        cpu->r[3] = 0x000016ecu;
    }
L_0015ddb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ddb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015ddbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ddc0u)) return;
        }
    }
L_0015ddc0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015ddc4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015ddc8:;
    {
        cpu->r[14] = 0x0015ddccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015ddcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015ddd0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0015ddd4:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0015ddd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dddcu)) return;
    }
L_0015dddc:;
    {
        cpu->r[0] = 0x00006400u;
    }
L_0015dde0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015dde4:;
    {
        cpu->r[14] = 0x0015dde8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015dde8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015ddec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015ddf0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015dd38;
        }
    }
L_0015ddf4:;
    {
        goto L_0015dce0;
    }
L_0015ddf8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x368u);
    }
L_0015ddfc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015de00:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 9u, &shc); cpu->r[0] = v;
    }
L_0015de04:;
    {
        cpu->r[14] = 0x0015de08u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015de08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015de0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0015de10:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0015de14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34cu);
    }
L_0015de18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015de1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0015de20:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[3]);
        }
    }
L_0015de24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015de28u)) return;
        }
    }
L_0015de28:;
    {
        goto L_0015dd4c;
    }
}

/* _ZN4CCar13UpdateAIPerksEv @ 0015de34 (arm) */
void fn_0015de34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015de34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015de38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015de3c:;
    {
        cpu->r[14] = 0x0015de40u; fn_0015d920(cpu);
    }
L_0015de40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015de44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015de48u)) return;
        }
    }
L_0015de48:;
    {
        cpu->r[3] = 0x000017d0u;
    }
L_0015de4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015de50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0015de54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dec4;
        }
    }
L_0015de58:;
    {
        cpu->r[3] = 0x000017d8u;
    }
L_0015de5c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0015de60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015de64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ded4;
        }
    }
L_0015de68:;
    {
        cpu->r[3] = 0x000017d0u;
    }
L_0015de6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015de70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015de74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015df14;
        }
    }
L_0015de78:;
    {
        cpu->r[3] = 0x000017d9u;
    }
L_0015de7c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0015de80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015de84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015df24;
        }
    }
L_0015de88:;
    {
        cpu->r[3] = 0x000017d0u;
    }
L_0015de8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015de90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015de94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015df74;
        }
    }
L_0015de98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0015de9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015dfc4;
        }
    }
L_0015dea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dea8u)) return;
        }
    }
L_0015dea8:;
    {
        cpu->r[3] = 0x000017acu;
    }
L_0015deac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015deb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015deb4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x000017dcu;
        }
    }
L_0015deb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0015debc:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015dec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dec4u)) return;
    }
L_0015dec4:;
    {
        cpu->r[6] = 0x000017d8u;
    }
L_0015dec8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_0015decc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ded0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e0d0;
        }
    }
L_0015ded4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0015ded8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_0015dedc:;
    {
        cpu->r[14] = 0x0015dee0u; fn_0015d718(cpu);
    }
L_0015dee0:;
    {
        cpu->r[3] = 0x000017e0u;
    }
L_0015dee4:;
    {
        cpu->r[2] = 0x00007530u;
    }
L_0015dee8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015deec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015def0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015def4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015de68;
        }
    }
L_0015def8:;
    {
        cpu->r[2] = 0x000017d4u;
    }
L_0015defc:;
    {
        cpu->r[3] = 0x000017ccu;
    }
L_0015df00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015df04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015df08:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0015df0c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015df10:;
    {
        goto L_0015de68;
    }
L_0015df14:;
    {
        cpu->r[6] = 0x000017d9u;
    }
L_0015df18:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_0015df1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015df20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e054;
        }
    }
L_0015df24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0015df28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_0015df2c:;
    {
        cpu->r[14] = 0x0015df30u; fn_0015d718(cpu);
    }
L_0015df30:;
    {
        cpu->r[3] = 0x000017e4u;
    }
L_0015df34:;
    {
        cpu->r[2] = 0x00007530u;
    }
L_0015df38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015df3c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015df40:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015df44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015de88;
        }
    }
L_0015df48:;
    {
        cpu->r[3] = 0x000017ccu;
    }
L_0015df4c:;
    {
        cpu->r[2] = 0x000017d4u;
    }
L_0015df50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015df54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015df58:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0015df5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015de88;
        }
    }
L_0015df60:;
    {
        cpu->r[1] = 0x000017dbu;
    }
L_0015df64:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_0015df68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015df6c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015df70:;
    {
        goto L_0015de88;
    }
L_0015df74:;
    {
        cpu->r[2] = 0x000017dau;
    }
L_0015df78:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_0015df7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015df80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015df84u)) return;
        }
    }
L_0015df84:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0015df88:;
    {
        cpu->r[3] = 0x000017ccu;
    }
L_0015df8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0015df90:;
    {
        cpu->r[1] = 0x00001f38u;
    }
L_0015df94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015df98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0015df9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0015dfa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00001f00u, 0, 0);
    }
L_0015dfa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000038u, 0, 0);
    }
L_0015dfa8:;
    {
        cpu->r[12] = rd16(cpu->r[2] + cpu->r[1]);
    }
L_0015dfac:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x4u);
    }
L_0015dfb0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000au, 1, 0);
    }
L_0015dfb4:;
    {
        wr16(cpu->r[2] + cpu->r[1], cpu->r[12]);
    }
L_0015dfb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_0015dfbc:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0015dfc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dfc4u)) return;
    }
L_0015dfc4:;
    {
        cpu->r[3] = 0x000017dbu;
    }
L_0015dfc8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0015dfcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dfd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015dfd4u)) return;
        }
    }
L_0015dfd4:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0015dfd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015dfdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015dfe0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e038;
        }
    }
L_0015dfe4:;
    {
        cpu->r[3] = 0x000017e8u;
    }
L_0015dfe8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015dfec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015dff0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
        }
    }
L_0015dff4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
        }
    }
L_0015dff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e038;
        }
    }
L_0015dffc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e000:;
    {
        cpu->r[14] = 0x0015e004u; fn_0015d718(cpu);
    }
L_0015e004:;
    {
        cpu->r[3] = 0x000017e8u;
    }
L_0015e008:;
    {
        cpu->r[2] = 0x00004e20u;
    }
L_0015e00c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e010:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0015e014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0015e018:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e0b4;
        }
    }
L_0015e01c:;
    {
        cpu->r[3] = 0x00001c74u;
    }
L_0015e020:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e024:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0015e028:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e0b4;
        }
    }
L_0015e02c:;
    {
        cpu->r[3] = 0x000017d0u;
    }
L_0015e030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e034:;
    {
        goto L_0015dea0;
    }
L_0015e038:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0015e03c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_0015e040:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e044:;
    {
        cpu->r[14] = 0x0015e048u; fn_0015d718(cpu);
    }
L_0015e048:;
    {
        cpu->r[3] = 0x000017e8u;
    }
L_0015e04c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0015e050:;
    {
        goto L_0015dffc;
    }
L_0015e054:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0015e058:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_0015e05c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e060:;
    {
        cpu->r[14] = 0x0015e064u; fn_0015d718(cpu);
    }
L_0015e064:;
    {
        cpu->r[3] = 0x00007530u;
    }
L_0015e068:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e06c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
        }
    }
L_0015e070:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015de80;
        }
    }
L_0015e074:;
    {
        cpu->r[2] = 0x000017ccu;
    }
L_0015e078:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015e07c:;
    {
        wr8(cpu->r[4] + cpu->r[6], cpu->r[1]);
    }
L_0015e080:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e084:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015e088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0015e08c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0015e090:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_0015e094:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0015e098:;
    {
        cpu->r[2] = 0x000017d4u;
    }
L_0015e09c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0015e0a0:;
    {
        cpu->r[14] = 0x0015e0a4u; fn_0015d718(cpu);
    }
L_0015e0a4:;
    {
        cpu->r[2] = 0x000017e4u;
    }
L_0015e0a8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_0015e0ac:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_0015e0b0:;
    {
        goto L_0015de80;
    }
L_0015e0b4:;
    {
        cpu->r[3] = 0x000017dbu;
    }
L_0015e0b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015e0bc:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0015e0c0:;
    {
        cpu->r[3] = 0x000017d0u;
    }
L_0015e0c4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0015e0c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0015e0cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e0d0u)) return;
    }
L_0015e0d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0015e0d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_0015e0d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e0dc:;
    {
        cpu->r[14] = 0x0015e0e0u; fn_0015d718(cpu);
    }
L_0015e0e0:;
    {
        cpu->r[3] = 0x00007530u;
    }
L_0015e0e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e0e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
        }
    }
L_0015e0ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015de60;
        }
    }
L_0015e0f0:;
    {
        cpu->r[2] = 0x000017ccu;
    }
L_0015e0f4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015e0f8:;
    {
        wr8(cpu->r[4] + cpu->r[6], cpu->r[1]);
    }
L_0015e0fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015e100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015e104:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015e108:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0015e10c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0015e110:;
    {
        cpu->r[2] = 0x000017d4u;
    }
L_0015e114:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0015e118:;
    {
        cpu->r[14] = 0x0015e11cu; fn_0015d718(cpu);
    }
L_0015e11c:;
    {
        cpu->r[2] = 0x000017e0u;
    }
L_0015e120:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_0015e124:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_0015e128:;
    {
        goto L_0015de60;
    }
}

/* _ZN4CCar5LimitEiii @ 0015e12c (arm) */
void fn_0015e12c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e12c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0015e130:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0015e134:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0015e138:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_0015e13c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0015e140:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar5BlendEiii @ 0015e144 (arm) */
void fn_0015e144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e144:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015e148:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0015e14c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0015e150:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0015e154:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015e158:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0015e15c:;
    {
        cpu->r[14] = 0x0015e160u; fn_0015e12c(cpu);
    }
L_0015e160:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_0015e164:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0015e168:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0015e16c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
    }
L_0015e170:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0015e174:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_0015e178:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[5], 1, 0);
    }
L_0015e17c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0015e180:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e184u)) return;
    }
}

/* _ZN4CCar23SetCarBrakeDistancePercEf @ 0015e184 (arm) */
void fn_0015e184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e184:;
    {
        wr32(cpu->r[0] + + 0x5f8u, cpu->r[1]);
    }
L_0015e188:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar20CheckForTunnelAroundEPK10RoadStructii @ 0015e18c (arm) */
void fn_0015e18c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e18c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015e190:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar13PenalizeErrorEi @ 0015e194 (arm) */
void fn_0015e194(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e194:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_0015e198:;
    {
        cpu->r[3] = 0x00001738u;
    }
L_0015e19c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015e1a0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015e1a4:;
    {
        cpu->r[1] = 0x00001f34u;
    }
L_0015e1a8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015e1ac:;
    {
        cpu->r[4] = rd32(0x0015e1b4u + + 0x64u);
    }
L_0015e1b0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0015e1b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015e1bcu, cpu->r[4], 0, 0);
    }
L_0015e1b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0015e1bc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x1au);
    }
L_0015e1c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015e1c4:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015e1c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00001000u, 1, 1);
    }
L_0015e1cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00001000u;
        }
    }
L_0015e1d0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015e1d4:;
    {
        cpu->r[14] = 0x0015e1d8u; fn_0015d920(cpu);
    }
L_0015e1d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015e1dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e1e0u)) return;
        }
    }
L_0015e1e0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 0);
    }
L_0015e1e4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_0015e1e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e1ecu)) return;
        }
    }
L_0015e1ec:;
    {
        cpu->r[2] = rd32(0x0015e1f4u + + 0x28u);
    }
L_0015e1f0:;
    {
        cpu->r[3] = 0x00004250u;
    }
L_0015e1f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0015e1f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015e1fc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0015e200:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0015e204:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0015e208:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0015e20c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0015e210:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0015e214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e218u)) return;
    }
}

/* _ZN4CCar18DoCollisionEffectsEv @ 0015e220 (arm) */
void fn_0015e220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e220:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x488u);
    }
L_0015e224:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48cu);
    }
L_0015e228:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015e22c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0015e230:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015e234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e2a8;
        }
    }
L_0015e238:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e23c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0015e240:;
    {
        cpu->r[14] = 0x0015e244u; fn_0015e194(cpu);
    }
L_0015e244:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015e248:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e24c:;
    {
        cpu->r[14] = 0x0015e254u;
    }
L_0015e250:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e254u)) return;
    }
L_0015e254:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0015e258:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e25c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
        }
    }
L_0015e260:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e27c;
        }
    }
L_0015e264:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_0015e268:;
    {
        cpu->r[2] = 0x000016f4u;
    }
L_0015e26c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0015e270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000008u;
        }
    }
L_0015e274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = (~0x00000007u);
        }
    }
L_0015e278:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0015e27c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0015e280:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00001788u;
        }
    }
L_0015e284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_0015e288:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x01040000u; cpu->r[1] = v;
        }
    }
L_0015e28c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
        }
    }
L_0015e290:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0015e294:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_0015e298:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_0015e29c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00820000u; cpu->r[2] = v;
        }
    }
L_0015e2a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015e2a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e2a8u)) return;
    }
L_0015e2a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4a0u);
    }
L_0015e2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_0015e2b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e244;
        }
    }
L_0015e2b4:;
    {
        goto L_0015e238;
    }
}

/* _ZN4CCar18UpdateRoadSlowdownEPK10RoadStruct @ 0015e2b8 (arm) */
void fn_0015e2b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e2b8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015e2bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x34cu);
    }
L_0015e2c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015e2c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015e2c8:;
    {
        cpu->r[5] = rd32(0x0015e2d0u + + 0x168u);
    }
L_0015e2cc:;
    {
        cpu->r[6] = 0x000016f0u;
    }
L_0015e2d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0015e2d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015e2d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0015e2dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000002u;
        }
    }
L_0015e2e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e2e4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015e2ecu, cpu->r[5], 0, 0);
    }
L_0015e2e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015e2ec:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0015e2f0:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0015e2f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e2f8u)) return;
        }
    }
L_0015e2f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_0015e2fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0015e300:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e31c;
        }
    }
L_0015e304:;
    {
        uint32_t v = cpu->r[3] & 0x00000800u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0015e308:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e388;
        }
    }
L_0015e30c:;
    {
        { uint32_t v = cpu->r[3] & 0x00009000u; set_nz(cpu, v); }
    }
L_0015e310:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e3e4;
        }
    }
L_0015e314:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_0015e318:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e40c;
        }
    }
L_0015e31c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x608u);
    }
L_0015e320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e328u)) return;
        }
    }
L_0015e328:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015e32c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e330:;
    {
        cpu->r[14] = 0x0015e338u;
    }
L_0015e334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e338u)) return;
    }
L_0015e338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0015e33c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_0015e340:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e344:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e348u)) return;
        }
    }
L_0015e348:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x620u);
    }
L_0015e34c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x36cu);
    }
L_0015e350:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e354:;
    {
        cpu->r[3] = rd32(0x0015e35cu + + 0xe0u);
    }
L_0015e358:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
        }
    }
L_0015e35c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[0], 2, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0015e360:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015e364:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015e368:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0015e36c:;
    {
        cpu->r[14] = 0x0015e370u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e370:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0015e374:;
    {
        cpu->r[14] = 0x0015e378u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015e37c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0015e380:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0015e384:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e388u)) return;
    }
L_0015e388:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0015e38c:;
    {
        cpu->r[14] = 0x0015e390u; fn_0015e194(cpu);
    }
L_0015e390:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015e394:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e398:;
    {
        cpu->r[14] = 0x0015e3a0u;
    }
L_0015e39c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e3a0u)) return;
    }
L_0015e3a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0015e3a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e3a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd8(cpu->r[8] + + 0x4u);
        }
    }
L_0015e3ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e31c;
        }
    }
L_0015e3b0:;
    {
        cpu->r[3] = rd32(0x0015e3b8u + + 0x84u);
    }
L_0015e3b4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_0015e3b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_0015e3bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015e3c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0015e3c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0015e3c8:;
    {
        cpu->r[14] = 0x0015e3ccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e3cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0015e3d0:;
    {
        cpu->r[14] = 0x0015e3d4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e3d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0015e3d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0015e3dc:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0015e3e0:;
    {
        goto L_0015e31c;
    }
L_0015e3e4:;
    {
        cpu->r[14] = 0x0015e3e8u; fn_0015e194(cpu);
    }
L_0015e3e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015e3ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e3f0:;
    {
        cpu->r[14] = 0x0015e3f8u;
    }
L_0015e3f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e3f8u)) return;
    }
L_0015e3f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0015e3fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e400:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd8(cpu->r[8] + + 0x3u);
        }
    }
L_0015e404:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e3b0;
        }
    }
L_0015e408:;
    {
        goto L_0015e31c;
    }
L_0015e40c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0015e410:;
    {
        cpu->r[14] = 0x0015e414u; fn_0015e194(cpu);
    }
L_0015e414:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015e418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015e41c:;
    {
        cpu->r[14] = 0x0015e424u;
    }
L_0015e420:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e424u)) return;
    }
L_0015e424:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_0015e428:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0015e42c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e31c;
        }
    }
L_0015e430:;
    {
        cpu->r[0] = rd8(cpu->r[8] + + 0x5u);
    }
L_0015e434:;
    {
        goto L_0015e3b0;
    }
}

/* _ZNK4CCar24GetCurrentAcceleration12Ev @ 0015e440 (arm) */
void fn_0015e440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e440:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x340u);
    }
L_0015e444:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015e448:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015e44c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e450:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0015e454:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0015e458:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015e45c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015e460:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_0015e464:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0015e468:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_0015e46c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0015e470:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x298u);
    }
L_0015e474:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[12] + + 0x298u);
        }
    }
L_0015e478:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x29cu);
    }
L_0015e47c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
        }
    }
L_0015e480:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_0015e484:;
    {
        cpu->r[14] = 0x0015e488u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e488:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e48cu)) return;
    }
}

/* _ZNK4CCar26GetTopSpeedIncludingNitrosEv @ 0015e48c (arm) */
void fn_0015e48c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e48c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0015e490:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015e494:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0015e498:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x464u);
    }
L_0015e49c:;
    {
        { uint32_t v = cpu->r[2] & 0x00001000u; set_nz(cpu, v); }
    }
L_0015e4a0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015e4a4:;
    {
        cpu->r[2] = 0x000018dcu;
    }
L_0015e4a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015e4ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015e4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e4d0;
        }
    }
L_0015e4b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0015e4b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e4e0;
        }
    }
L_0015e4bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e4c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001199u;
        }
    }
L_0015e4c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0015e4c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_0015e4cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015e4d0:;
    {
        cpu->r[3] = 0x00001266u;
    }
L_0015e4d4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0015e4d8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0015e4dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0015e4e0:;
    {
        cpu->r[3] = 0x00001333u;
    }
L_0015e4e4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0015e4e8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0015e4ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar11GetMaxSpeedEv @ 0015e4f0 (arm) */
void fn_0015e4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e4f0:;
    {
        return fn_0015e48c(cpu);
    }
}

/* _ZN4CCar22ComputeDisplayCarAngleERiS0_S0_R8Vector4sS0_b @ 0015e4f4 (arm) */
void fn_0015e4f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015e4f4:;
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
L_0015e4f8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0015e4fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015e500:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0015e504:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0015e508:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015e50c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x630u);
    }
L_0015e510:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015e514:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x62cu);
    }
L_0015e518:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e51c:;
    {
        cpu->r[7] = rd32(0x0015e524u + + 0x620u);
    }
L_0015e520:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00006667u;
        }
    }
L_0015e524:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
        }
    }
L_0015e528:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
        }
    }
L_0015e52c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_0015e530:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
        }
    }
L_0015e534:;
    {
        cpu->r[7] = add_flags(cpu, 0x0015e53cu, cpu->r[7], 0, 0);
    }
L_0015e538:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[0]; cpu->r[9] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
        }
    }
L_0015e53c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x608u);
    }
L_0015e540:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015e544:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[12], 1, 0);
        }
    }
L_0015e548:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x630u, cpu->r[1]);
        }
    }
L_0015e54c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_0015e550:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0015e554:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0015e558:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0015e55c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0015e560:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015e564:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0015e568:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015e56c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e570:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0015e574:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e578u)) return;
        }
    }
L_0015e578:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_0015e57c:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0015e580:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x620u);
    }
L_0015e584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e588:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0015e58c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0015e590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e78c;
        }
    }
L_0015e594:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[9] = v;
    }
L_0015e598:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0015e59c:;
    {
        cpu->r[0] = 0x0000172cu;
    }
L_0015e5a0:;
    {
        cpu->r[1] = 0x0000166cu;
    }
L_0015e5a4:;
    {
        cpu->r[2] = 0x0000fb07u;
    }
L_0015e5a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015e5ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x2572u << 16);
    }
L_0015e5b0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015e5b4:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000080u, cpu->r[9], 1, 0);
    }
L_0015e5b8:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_0015e5bc:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12]; cpu->r[12] = v;
    }
L_0015e5c0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_0015e5c4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015e5c8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[11], 1, 9u, &shc), cpu->r[1], 1, 0);
    }
L_0015e5cc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[1] = v;
    }
L_0015e5d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015e5d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000007fu, 0, 0);
    }
L_0015e5d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_0015e5dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 1, 7u, &shc), 0, 0);
    }
L_0015e5e0:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0015e5e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015e5e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x620u);
    }
L_0015e5ec:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_0015e5f0:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015e5f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0015e5f8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000080u, cpu->r[0], 1, 0);
    }
L_0015e5fc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[9] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0015e600:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0015e604:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 9u, &shc), cpu->r[3], 1, 0);
    }
L_0015e608:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[2] = v;
    }
L_0015e60c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000007fu, 0, 0);
    }
L_0015e610:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e614:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0015e618:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015e61c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 7u, &shc), 1, 0);
    }
L_0015e620:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0015e624:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e628:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0015e62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e7ec;
        }
    }
L_0015e630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0015e634:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x394u);
    }
L_0015e638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0015e63c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0015e640:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0015e644:;
    {
        sub_flags(cpu, cpu->r[3], 0x000007d0u, 1, 1);
    }
L_0015e648:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015e978;
        }
    }
L_0015e64c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x51cu);
    }
L_0015e650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015e654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e900;
        }
    }
L_0015e65c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0015e660:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[3]);
    }
L_0015e664:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0015e668:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0015e66c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0015e670:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015e674:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0015e678:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_0015e67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e680:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0015e684:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_0015e688:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015e68c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0015e690:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0015e694:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_0015e698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_0015e69c:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015e6a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0015e6a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 1);
    }
L_0015e6a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_0015e6ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e6fc;
        }
    }
L_0015e6b0:;
    {
        cpu->r[2] = 0x00001668u;
    }
L_0015e6b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e6b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0015e6bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015e6c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_0015e6c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[1] = v;
    }
L_0015e6c8:;
    {
        cpu->r[3] = 0x00001730u;
    }
L_0015e6cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0015e6d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015e6d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_0015e6d8:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0015e6dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e6e0:;
    {
        cpu->r[14] = 0x0015e6e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015e6e4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[8] = v;
    }
L_0015e6e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x000007f0u, 0, 0);
    }
L_0015e6ec:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0015e6f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0015e6f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_0015e6f8:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 11u, &shc); cpu->r[8] = v;
    }
L_0015e6fc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015e700:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000005d0u, 0, 0);
    }
L_0015e704:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0015e708:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_0015e70c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0015e710:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0015e714:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0015e718:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015e71c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_0015e720:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015e724:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015e728:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e72c:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0015e730:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ea00;
        }
    }
L_0015e734:;
    {
        cpu->r[2] = rd32(0x0015e73cu + + 0x40cu);
    }
L_0015e738:;
    {
        cpu->r[0] = 0x000084acu;
    }
L_0015e73c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0015e740:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0015e744:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0015e748:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0015e74c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0015e750:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0015e754:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0015e758:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[9] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0015e75c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015e760:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_0015e764:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0015e768:;
    {
        cpu->r[1] = 0x000084b0u;
    }
L_0015e76c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0015e770:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0015e774:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0015e778:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[10] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0015e77c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0015e780:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_0015e784:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_0015e788:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015e78cu)) return;
    }
L_0015e78c:;
    {
        cpu->r[0] = 0x0000172cu;
    }
L_0015e790:;
    {
        cpu->r[1] = 0x0000166cu;
    }
L_0015e794:;
    {
        cpu->r[2] = 0x0000fb07u;
    }
L_0015e798:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_0015e79c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015e7a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x2572u << 16);
    }
L_0015e7a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015e7a8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[12] = v;
    }
L_0015e7ac:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[9] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0015e7b0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0015e7b4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 9u, &shc), cpu->r[12], 1, 0);
    }
L_0015e7b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_0015e7bc:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0015e7c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015e7c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_0015e7c8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[10] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0015e7cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0015e7d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 9u, &shc), 1, 0);
    }
L_0015e7d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0015e7d8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015e7dc:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0015e7e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e7e4:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0015e7e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e630;
        }
    }
L_0015e7ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0015e7f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x394u);
    }
L_0015e7f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0015e7f8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0015e7fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0015e800:;
    {
        sub_flags(cpu, cpu->r[3], 0x000007d0u, 1, 1);
    }
L_0015e804:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015e878;
        }
    }
L_0015e808:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x51cu);
    }
L_0015e80c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015e810:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015e864;
        }
    }
L_0015e818:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0015e81c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x480u);
    }
L_0015e820:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0015e824:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_0015e828:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e840;
        }
    }
L_0015e82c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e830:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0015e834:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_0015e838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0015e83c:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[2]);
    }
L_0015e840:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_0015e844:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015e848:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015e864;
        }
    }
L_0015e84c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015e850:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0015e854:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015e858:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0015e85c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0015e860:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015ea84;
        }
    }
L_0015e864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0015e868:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[3]);
    }
L_0015e86c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015e870:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[3]);
    }
L_0015e874:;
    {
        goto L_0015e698;
    }
L_0015e878:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0015e87c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0015e880:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e808;
        }
    }
L_0015e884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0015e888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e88c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e808;
        }
    }
L_0015e890:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0015e894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_0015e898:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015e89c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0015e8a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e808;
        }
    }
L_0015e8a4:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0015e8a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e8ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e8b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015eaac;
        }
    }
L_0015e8b4:;
    {
        cpu->r[3] = 0x000018f4u;
    }
L_0015e8b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e8bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000du, 1, 1);
    }
L_0015e8c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015eaac;
        }
    }
L_0015e8c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015e8c8:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_0015e8cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_0015e8d0:;
    {
        cpu->r[1] = sub_flags(cpu, 0x0000002au, cpu->r[3], 1, 0);
    }
L_0015e8d4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[10] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0015e8d8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015e8dc:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 1u, &shc), cpu->r[1], 1, 0);
    }
L_0015e8e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e8e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x51cu);
        }
    }
L_0015e8e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x51cu);
        }
    }
L_0015e8ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_0015e8f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
        }
    }
L_0015e8f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
        }
    }
L_0015e8f8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[2]);
        }
    }
L_0015e8fc:;
    {
        goto L_0015e810;
    }
L_0015e900:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0015e904:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x480u);
    }
L_0015e908:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0015e90c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_0015e910:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e928;
        }
    }
L_0015e914:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e918:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0015e91c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_0015e920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0015e924:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[2]);
    }
L_0015e928:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[1] = v;
    }
L_0015e92c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015e930:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015e65c;
        }
    }
L_0015e934:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0015e938:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0015e93c:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0015e940:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_0015e944:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0015e948:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015e65c;
        }
    }
L_0015e94c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x51cu);
    }
L_0015e950:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0015e954:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0015e958:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[1]);
    }
L_0015e95c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0015e960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0015e964:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0015e968:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0015e96c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0015e970:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[2]);
    }
L_0015e974:;
    {
        goto L_0015e664;
    }
L_0015e978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0015e97c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0015e980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e64c;
        }
    }
L_0015e984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0015e988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e98c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015e64c;
        }
    }
L_0015e990:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0015e994:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_0015e998:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015e99c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0015e9a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e64c;
        }
    }
L_0015e9a4:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0015e9a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015e9ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015e9b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015eaf8;
        }
    }
L_0015e9b4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_0015e9b8:;
    {
        cpu->r[2] = 0x000018f4u;
    }
L_0015e9bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015e9c0:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 1, 1);
    }
L_0015e9c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015eaf8;
        }
    }
L_0015e9c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015e9cc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000100u, cpu->r[3], 1, 0);
    }
L_0015e9d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000001fu, 0, 0);
    }
L_0015e9d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e9d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0015e9dc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0015e9e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015e9e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x51cu);
        }
    }
L_0015e9e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x51cu);
        }
    }
L_0015e9ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_0015e9f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
        }
    }
L_0015e9f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
        }
    }
L_0015e9f8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[2]);
        }
    }
L_0015e9fc:;
    {
        goto L_0015e654;
    }
L_0015ea00:;
    {
        cpu->r[1] = 0x00001730u;
    }
L_0015ea04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x390u);
    }
L_0015ea08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x394u);
    }
L_0015ea0c:;
    {
        cpu->r[2] = 0x0000ffffu;
    }
L_0015ea10:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0015ea14:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0015ea18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0015ea1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015ea20:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015ea24:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 3u, &shc), cpu->r[1], 1, 0);
    }
L_0015ea28:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x464u);
    }
L_0015ea2c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[8] = v;
    }
L_0015ea30:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 3, 31u, &shc), 0, 0);
    }
L_0015ea34:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[10] = v;
    }
L_0015ea38:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0015ea3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0015ea40:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[2];
        }
    }
L_0015ea44:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 17u, &shc); cpu->r[8] = v;
    }
L_0015ea48:;
    {
        wr32(cpu->r[4] + + 0x520u, cpu->r[8]);
    }
L_0015ea4c:;
    {
        cpu->r[14] = 0x0015ea54u;
    }
L_0015ea50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ea54u)) return;
    }
L_0015ea54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x464u);
    }
L_0015ea58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0015ea5c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0015ea60:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_0015ea64:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_0015ea68:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_0015ea6c:;
    {
        cpu->r[14] = 0x0015ea70u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0015ea70:;
    {
        wr32(cpu->r[4] + + 0x520u, cpu->r[0]);
    }
L_0015ea74:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015ea78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0015ea7c:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_0015ea80:;
    {
        goto L_0015e734;
    }
L_0015ea84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x51cu);
    }
L_0015ea88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015ea8c:;
    {
        wr32(cpu->r[4] + + 0x518u, cpu->r[2]);
    }
L_0015ea90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ea94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0015ea98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0015ea9c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0015eaa0:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0015eaa4:;
    {
        wr32(cpu->r[4] + + 0x51cu, cpu->r[3]);
    }
L_0015eaa8:;
    {
        goto L_0015e86c;
    }
L_0015eaac:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0015eab0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015eab4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_0015eab8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e808;
        }
    }
L_0015eabc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015eac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015eac4:;
    {
        cpu->r[14] = 0x0015eaccu;
    }
L_0015eac8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015eaccu)) return;
    }
L_0015eacc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000045u, 1, 1);
    }
L_0015ead0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e808;
        }
    }
L_0015ead4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015ead8:;
    {
        cpu->r[2] = 0x0000ff9au;
    }
L_0015eadc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_0015eae0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015eae4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000001fu, 0, 0);
    }
L_0015eae8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015eaec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0015eaf0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0015eaf4:;
    {
        goto L_0015e8e0;
    }
L_0015eaf8:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0015eafc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015eb00:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_0015eb04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015e64c;
        }
    }
L_0015eb08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015eb0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015eb10:;
    {
        cpu->r[14] = 0x0015eb18u;
    }
L_0015eb14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0015eb18u)) return;
    }
L_0015eb18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_0015eb1c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015e64c;
        }
    }
L_0015eb20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x518u);
    }
L_0015eb24:;
    {
        cpu->r[2] = 0x0000ff00u;
    }
L_0015eb28:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_0015eb2c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0015eb30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000001fu, 0, 0);
    }
L_0015eb34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015eb38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0015eb3c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0015eb40:;
    {
        goto L_0015e9e0;
    }
}

/* _ZN4CCar17GetGearChangeTimeEv @ 0015eb4c (arm) */
void fn_0015eb4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015eb4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x350u);
    }
L_0015eb50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0015eb54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar16ApplySkillPointsEv @ 0015eb58 (arm) */
void fn_0015eb58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015eb58:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015eb5c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_0015eb60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015eb64:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0015eb68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ec0c;
        }
    }
L_0015eb6c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x620u);
    }
L_0015eb70:;
    {
        cpu->r[7] = 0x00001c48u;
    }
L_0015eb74:;
    {
        cpu->r[6] = 0x00001c50u;
    }
L_0015eb78:;
    {
        cpu->r[5] = 0x00001c5cu;
    }
L_0015eb7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015eb80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00001c44u;
        }
    }
L_0015eb84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00001c40u;
        }
    }
L_0015eb88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001c40u;
        }
    }
L_0015eb8c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_0015eb90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[1]);
        }
    }
L_0015eb94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[12]);
        }
    }
L_0015eb98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_0015eb9c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
        }
    }
L_0015eba0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_0015eba4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_0015eba8:;
    {
        cpu->r[4] = 0x00001c68u;
    }
L_0015ebac:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_0015ebb0:;
    {
        cpu->r[12] = 0x00001c78u;
    }
L_0015ebb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0015ebb8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
        }
    }
L_0015ebbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0015ebc0:;
    {
        cpu->r[1] = 0x00001c7cu;
    }
L_0015ebc4:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0015ebc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0015ebcc:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0015ebd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015ebd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0015ebd8:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0015ebdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0015ebe0:;
    {
        cpu->r[8] = 0x00001c40u;
    }
L_0015ebe4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0015ebe8:;
    {
        wr32(cpu->r[0] + cpu->r[7], cpu->r[3]);
    }
L_0015ebec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0015ebf0:;
    {
        wr32(cpu->r[0] + cpu->r[8], cpu->r[2]);
    }
L_0015ebf4:;
    {
        wr32(cpu->r[0] + cpu->r[6], cpu->r[3]);
    }
L_0015ebf8:;
    {
        wr32(cpu->r[0] + cpu->r[5], cpu->r[3]);
    }
L_0015ebfc:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_0015ec00:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_0015ec04:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_0015ec08:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + cpu->r[8], cpu->r[3]);
        }
    }
L_0015ec0c:;
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
L_0015ec10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar8AddNitroEf @ 0015ec14 (arm) */
void fn_0015ec14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ec14:;
    {
        cpu->r[3] = 0x000018e4u;
    }
L_0015ec18:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0015ec1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0015ec20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0015ec24:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0015ec28:;
    {
        cpu->r[2] = 0x000018f8u;
    }
L_0015ec2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0015ec30:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0015ec34:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0015ec38:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015ec3c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015ec40:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0015ec44:;
    {
        vfp_sync_flags(cpu);
    }
L_0015ec48:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_0015ec4c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0015ec50:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar13IsCarNitroGodEv @ 0015ec54 (arm) */
void fn_0015ec54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ec54:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015ec58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015ec5c:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0015ec60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0015ec64:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0015ec68:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0015ec6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015ec70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0015ec74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015ec78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0015ec7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4CCar11GetCarClassEb @ 0015ec80 (arm) */
void fn_0015ec80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ec80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015ec84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015ec88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015ec8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ec98;
        }
    }
L_0015ec90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x53cu);
    }
L_0015ec94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ec98u)) return;
    }
L_0015ec98:;
    {
        cpu->r[14] = 0x0015ec9cu; fn_0015ec54(cpu);
    }
L_0015ec9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015eca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ec90;
        }
    }
L_0015eca4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0015eca8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ecacu)) return;
    }
}

/* _ZNK4CCar10GetCarMassEb @ 0015ecac (arm) */
void fn_0015ecac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ecac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015ecb0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015ecb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015ecb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ed38;
        }
    }
L_0015ecbc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015ecc0:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_0015ecc4:;
    {
        cpu->r[0] = 0x000002eeu;
    }
L_0015ecc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015eccc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015ecd0:;
    {
        cpu->r[2] = 0x000005dcu;
    }
L_0015ecd4:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0015ecd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_0015ecdc:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0015ece0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ed30;
        }
    }
L_0015ece4:;
    {
        cpu->r[1] = 0x00005556u;
    }
L_0015ece8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 7u, &shc); cpu->r[12] = v;
    }
L_0015ecec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x5555u << 16);
    }
L_0015ecf0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[12]; cpu->r[0] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0015ecf4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_0015ecf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000100u, 0, 0);
    }
L_0015ecfc:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_0015ed00:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_0015ed04:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015ed08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ed14;
        }
    }
L_0015ed0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ed10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ed4c;
        }
    }
L_0015ed14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0015ed18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x540u);
    }
L_0015ed1c:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_0015ed20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015ed58;
        }
    }
L_0015ed24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_0015ed28:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0015ed2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ed30u)) return;
    }
L_0015ed30:;
    {
        cpu->r[12] = 0x00000100u;
    }
L_0015ed34:;
    {
        goto L_0015ecfc;
    }
L_0015ed38:;
    {
        cpu->r[14] = 0x0015ed3cu; fn_0015ec54(cpu);
    }
L_0015ed3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015ed40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x80000000u);
        }
    }
L_0015ed44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ed48u)) return;
        }
    }
L_0015ed48:;
    {
        goto L_0015ecbc;
    }
L_0015ed4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x540u);
    }
L_0015ed50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0015ed54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ed58u)) return;
    }
L_0015ed58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x498u);
    }
L_0015ed5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0015ed60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015ed24;
        }
    }
L_0015ed64:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[0] = v;
    }
L_0015ed68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015ed6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0015ed70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 8u, &shc), 0, 0);
    }
L_0015ed74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015ed78u)) return;
    }
}

/* _ZN4CCar15ResetCrimeLevelEv @ 0015ed78 (arm) */
void fn_0015ed78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ed78:;
    {
        cpu->r[2] = 0x00001d04u;
    }
L_0015ed7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015ed80:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0015ed84:;
    {
        cpu->r[2] = 0x00001d08u;
    }
L_0015ed88:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_0015ed8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar14AddTurboSoundsEv @ 0015ed90 (arm) */
void fn_0015ed90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ed90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar20GetEngineSoundsStateEv @ 0015ed94 (arm) */
void fn_0015ed94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ed94:;
    {
        cpu->r[3] = 0x00001e34u;
    }
L_0015ed98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0015ed9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar17StartEngineSoundsEv @ 0015eda0 (arm) */
void fn_0015eda0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015eda0:;
    {
        cpu->r[3] = 0x00001e34u;
    }
L_0015eda4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015eda8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015edac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar16StopEngineSoundsEv @ 0015edb0 (arm) */
void fn_0015edb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015edb0:;
    {
        cpu->r[3] = 0x00001e34u;
    }
L_0015edb4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0015edb8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_0015edbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_50 @ 0015edc0 (arm) */
void fn_0015edc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015edc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar28UnRegisterCarSoundsCallbacksEv @ 0015edc4 (arm) */
void fn_0015edc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015edc4:;
    {
        return fn_0019034c(cpu);
    }
}

/* _ZN4CCar26RegisterCarSoundsCallbacksEv @ 0015edc8 (arm) */
void fn_0015edc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015edc8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015edcc:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_0015edd0:;
    {
        cpu->r[14] = 0x0015edd4u; fn_0018ba6c(cpu);
    }
L_0015edd4:;
    {
        cpu->r[4] = rd32(0x0015eddcu + + 0x50u);
    }
L_0015edd8:;
    {
        cpu->r[4] = add_flags(cpu, 0x0015ede0u, cpu->r[4], 0, 0);
    }
L_0015eddc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015ede0:;
    {
        cpu->r[14] = 0x0015ede4u; fn_0018ebc0(cpu);
    }
L_0015ede4:;
    {
        cpu->r[3] = rd32(0x0015edecu + + 0x44u);
    }
L_0015ede8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015edec:;
    {
        cpu->r[2] = rd32(0x0015edf4u + + 0x40u);
    }
L_0015edf0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015edf4:;
    {
        cpu->r[3] = rd32(0x0015edfcu + + 0x3cu);
    }
L_0015edf8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015edfc:;
    {
        cpu->r[2] = rd32(0x0015ee04u + + 0x38u);
    }
L_0015ee00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ee04:;
    {
        cpu->r[3] = rd32(0x0015ee0cu + + 0x34u);
    }
L_0015ee08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0015ee0c:;
    {
        wr32(cpu->r[5], cpu->r[6]);
    }
L_0015ee10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0015ee14:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[12]);
    }
L_0015ee18:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_0015ee1c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_0015ee20:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_0015ee24:;
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
L_0015ee28:;
    {
        return fn_0018ede8(cpu);
    }
}
