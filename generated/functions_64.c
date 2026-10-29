#include "functions.h"

/* _ZN8Vector4s13GetProjectionERKS_S1_ @ 00185668 (arm) */
void fn_00185668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185668:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018566c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_00185670:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00185674:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_00185678:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018567c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[3]);
        wr32(ea + 8u, cpu->r[12]);
    }
L_00185680:;
    {
        cpu->r[14] = 0x00185684u; fn_001855bc(cpu);
    }
L_00185684:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00185688:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018568c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00185690:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_00185694:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185698:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_0018569c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8u);
    }
L_001856a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001856a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_001856a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_001856ac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001856b0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_001856b4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001856b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001856bc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_001856c0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[12]);
    }
L_001856c4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_001856c8:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_001856cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001856d0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001856d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001856d8u)) return;
    }
}

/* _ZN8Vector4s12GetReflexionERKS_S1_ @ 001856d8 (arm) */
void fn_001856d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001856d8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001856dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001856e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001856e4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001856e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001856ec:;
    {
        cpu->r[14] = 0x001856f0u; fn_00185668(cpu);
    }
L_001856f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001856f4:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001856f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001856fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_00185700:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[12], 2, 1u, &shc), cpu->r[1], 1, 0);
    }
L_00185704:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00185708:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_0018570c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00185710:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00185714:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[12], 2, 1u, &shc), cpu->r[2], 1, 0);
    }
L_00185718:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0018571c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[1], 2, 1u, &shc), cpu->r[3], 1, 0);
    }
L_00185720:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00185724:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00185728:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018572cu)) return;
    }
}

/* _ZNK8Vector4s6LengthEv @ 0018572c (arm) */
void fn_0018572c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018572c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00185730:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00185734:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00185738:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0018573c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00185740:;
    {
        return fn_0017fa74(cpu);
    }
}

/* _ZN8Vector2s6ResizeEi @ 00185744 (arm) */
void fn_00185744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185744:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00185748:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018574c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185750:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00185754:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00185758:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_0018575c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00185760:;
    {
        cpu->r[14] = 0x00185764u; fn_0017fa74(cpu);
    }
L_00185764:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00185768:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018576c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185770:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185774:;
    {
        cpu->r[14] = 0x00185778u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185778:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018577c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185780:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185784:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185788:;
    {
        cpu->r[14] = 0x0018578cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018578c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185790:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185794u)) return;
    }
}

/* _ZN8Vector2s9NormalizeEv @ 00185794 (arm) */
void fn_00185794(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185794:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00185798:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018579c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001857a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001857a4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_001857a8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_001857ac:;
    {
        cpu->r[14] = 0x001857b0u; fn_0017fa74(cpu);
    }
L_001857b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001857b4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001857b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001857bc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001857c0:;
    {
        cpu->r[14] = 0x001857c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001857c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001857c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001857cc:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001857d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001857d4:;
    {
        cpu->r[14] = 0x001857d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001857d8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001857dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001857e0u)) return;
    }
}

/* _ZNK8Vector2s6LengthEv @ 001857e0 (arm) */
void fn_001857e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001857e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001857e4:;
    {
        cpu->r[14] = 0x001857e8u; fn_00184e04(cpu);
    }
L_001857e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001857ec:;
    {
        return fn_0017fa74(cpu);
    }
}

/* _ZN6Quat4s9NormalizeEv @ 001857f0 (arm) */
void fn_001857f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001857f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001857f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001857f8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001857fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00185804:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[12] = v;
    }
L_00185808:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018580c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[12]; cpu->r[12] = v;
    }
L_00185810:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_00185814:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[12]; cpu->r[12] = v;
    }
L_00185818:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_0018581c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00185820:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_00185824:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_00185828:;
    {
        vfp_sync_flags(cpu);
    }
L_0018582c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00185844;
        }
    }
L_00185830:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00185834:;
    {
        cpu->r[14] = 0x00185838u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00185838:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_0018583c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00185840:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00185844:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00185848:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018584c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[0];
    }
L_00185850:;
    {
        vfp_vdiv(cpu, 11, 11, 15);
    }
L_00185854:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00185858:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_0018585c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00185860:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[3];
    }
L_00185864:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00185868:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_0018586c:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_00185870:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_00185874:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,11);
    }
L_00185878:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_0018587c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00185880:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00185884:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00185888:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_0018588c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00185890:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00185894:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00185898u)) return;
    }
}

/* _ZN6Quat4s4LerpEbRS_S0_fS0_ @ 00185898 (arm) */
void fn_00185898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185898:;
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
L_0018589c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001858a0:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_001858a4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[3];
    }
L_001858a8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001858ac:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001858b0:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x4u);
    }
L_001858b4:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x4u);
    }
L_001858b8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[1] = v;
    }
L_001858bc:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0xcu);
    }
L_001858c0:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7] + cpu->r[1]; cpu->r[1] = v;
    }
L_001858c4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001858c8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x8u);
    }
L_001858cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001858d0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x30u);
    }
L_001858d4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10] + cpu->r[1]; cpu->r[1] = v;
    }
L_001858d8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_001858dc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001858e0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001858e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001858e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001858ec:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_001858f0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
        }
    }
L_001858f4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
        }
    }
L_001858f8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
        }
    }
L_001858fc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
        }
    }
L_00185900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00185944;
        }
    }
L_00185908:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0018590c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x00185914u + + 0x14cu);
    }
L_00185910:;
    {
        vfp_sync_flags(cpu);
    }
L_00185914:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,10) = *vfp_s(cpu,15);
        }
    }
L_00185918:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 10, 15);
        }
    }
L_0018591c:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,10);
    }
L_00185920:;
    {
        *vfp_d(cpu, 5) = *vfp_d(cpu, 6) - *vfp_d(cpu, 5);
    }
L_00185924:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0018592cu + + 0x13cu);
    }
L_00185928:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,5), *vfp_d(cpu,6));
    }
L_0018592c:;
    {
        vfp_sync_flags(cpu);
    }
L_00185930:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001859e0;
        }
    }
L_00185934:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0018593cu + + 0x134u);
    }
L_00185938:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
    }
L_0018593c:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_00185940:;
    {
        goto L_00185950;
    }
L_00185944:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0018594cu + + 0x124u);
    }
L_00185948:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_0018594c:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
    }
L_00185950:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[10];
    }
L_00185954:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_00185958:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[7];
    }
L_0018595c:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[6];
    }
L_00185960:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00185964:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[12];
    }
L_00185968:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[9];
    }
L_0018596c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185970:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00185974:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00185978:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_0018597c:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00185980:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00185984:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_00185988:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_0018598c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_00185990:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00185994:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00185998:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_0018599c:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[2];
    }
L_001859a0:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_001859a4:;
    {
        vfp_vmla(cpu, 12, 9, 16);
    }
L_001859a8:;
    {
        vfp_vmla(cpu, 14, 8, 16);
    }
L_001859ac:;
    {
        vfp_vmla(cpu, 13, 10, 16);
    }
L_001859b0:;
    {
        vfp_vmla(cpu, 15, 11, 16);
    }
L_001859b4:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_001859b8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_001859bc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001859c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001859c4:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001859c8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001859cc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001859d0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001859d4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001859d8:;
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
L_001859dc:;
    {
        return fn_001857f0(cpu);
    }
L_001859e0:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_001859e4:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001859e8:;
    {
        cpu->r[14] = 0x001859ecu; imp_acos(cpu); /* acos */
    }
L_001859ec:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001859f0:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,6);
    }
L_001859f4:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,16);
    }
L_001859f8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,7); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001859fc:;
    {
        cpu->r[14] = 0x00185a00u; imp_sin(cpu); /* sin */
    }
L_00185a00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00185a08u + + 0x68u);
    }
L_00185a04:;
    {
        vfp_vsub(cpu, 15, 15, 17);
    }
L_00185a08:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00185a0c:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_00185a10:;
    {
        *(uint64_t*)vfp_d(cpu,9) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00185a14:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00185a18:;
    {
        cpu->r[14] = 0x00185a1cu; imp_sin(cpu); /* sin */
    }
L_00185a1c:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_00185a20:;
    {
        *vfp_s(cpu,18) = (float)*vfp_d(cpu,9);
    }
L_00185a24:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_00185a28:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00185a2c:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00185a30:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00185a34:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) / *vfp_d(cpu, 9);
    }
L_00185a38:;
    {
        cpu->r[14] = 0x00185a3cu; imp_sin(cpu); /* sin */
    }
L_00185a3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185a40:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00185a44:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[9] = v1;
    }
L_00185a48:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00185a4c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 9);
    }
L_00185a50:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,8);
    }
L_00185a54:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00185a58:;
    {
        goto L_00185950;
    }
}

/* _ZNK8Vector2s10SafeLengthEv @ 00185a78 (arm) */
void fn_00185a78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185a78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00185a7c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[5] = v1;
    }
L_00185a80:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185a84:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185a88:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[6] = v;
    }
L_00185a8c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00185a90:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_00185a94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[6];
        }
    }
L_00185a98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_00185a9c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00008000u, 1, 1);
    }
L_00185aa0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185b0c;
        }
    }
L_00185aa4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185aa8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185b18;
        }
    }
L_00185aac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185ab0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185ab4:;
    {
        cpu->r[14] = 0x00185ab8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185ab8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00080000u, 1, 1);
    }
L_00185abc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[6] = v;
    }
L_00185ac0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185b34;
        }
    }
L_00185ac4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185ac8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185acc:;
    {
        cpu->r[14] = 0x00185ad0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185ad0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[6]; cpu->r[0] = v;
    }
L_00185ad4:;
    {
        cpu->r[14] = 0x00185ad8u; fn_0017fa74(cpu);
    }
L_00185ad8:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185adc:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185ae0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00185ae4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185ae8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00185aec:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185af0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185af4u)) return;
        }
    }
L_00185af4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00185af8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
        }
    }
L_00185afc:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185b00:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185b04:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00185b08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185b0cu)) return;
    }
L_00185b0c:;
    {
        cpu->r[14] = 0x00185b10u; fn_00184e04(cpu);
    }
L_00185b10:;
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
L_00185b14:;
    {
        return fn_0017fa74(cpu);
    }
L_00185b18:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00185b1c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185b20:;
    {
        cpu->r[14] = 0x00185b24u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185b24:;
    {
        sub_flags(cpu, cpu->r[6], 0x00080000u, 1, 1);
    }
L_00185b28:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185b2c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[6] = v;
    }
L_00185b30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185ac4;
        }
    }
L_00185b34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185b38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185b3c:;
    {
        cpu->r[14] = 0x00185b40u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185b40:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185b44:;
    {
        goto L_00185ad0;
    }
}

/* _ZNK8Vector4s10SafeLengthEv @ 00185b48 (arm) */
void fn_00185b48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185b48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00185b4c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[6] = v1;
    }
L_00185b50:;
    {
        cpu->r[1] = 0x00006882u;
    }
L_00185b54:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_00185b58:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185b5c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185b60:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[8] = v;
    }
L_00185b64:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_00185b68:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00185b6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[8];
        }
    }
L_00185b70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_00185b74:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[7] = v;
    }
L_00185b78:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00185b7c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00185b80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[7];
        }
    }
L_00185b84:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00185b88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00185c0c;
        }
    }
L_00185b8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185b90:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185c20;
        }
    }
L_00185b94:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185b98:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185b9c:;
    {
        cpu->r[14] = 0x00185ba0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185ba0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00080000u, 1, 1);
    }
L_00185ba4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[8] = v;
    }
L_00185ba8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185c3c;
        }
    }
L_00185bac:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185bb0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185bb4:;
    {
        cpu->r[14] = 0x00185bb8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185bb8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00080000u, 1, 1);
    }
L_00185bbc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[8]; cpu->r[6] = v;
    }
L_00185bc0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185c58;
        }
    }
L_00185bc4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185bc8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185bcc:;
    {
        cpu->r[14] = 0x00185bd0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185bd0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[6]; cpu->r[0] = v;
    }
L_00185bd4:;
    {
        cpu->r[14] = 0x00185bd8u; fn_0017fa74(cpu);
    }
L_00185bd8:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185bdc:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185be0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00185be4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185be8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00185bec:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185bf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185bf4u)) return;
        }
    }
L_00185bf4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00185bf8:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
        }
    }
L_00185bfc:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185c00:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00185c04:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00185c08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185c0cu)) return;
    }
L_00185c0c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00185c10:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6] + cpu->r[3]; cpu->r[6] = v;
    }
L_00185c14:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5] + cpu->r[6]; cpu->r[0] = v;
    }
L_00185c18:;
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
L_00185c1c:;
    {
        return fn_0017fa74(cpu);
    }
L_00185c20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00185c24:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185c28:;
    {
        cpu->r[14] = 0x00185c2cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185c2c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00080000u, 1, 1);
    }
L_00185c30:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185c34:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[8] = v;
    }
L_00185c38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185bac;
        }
    }
L_00185c3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00185c40:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185c44:;
    {
        cpu->r[14] = 0x00185c48u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185c48:;
    {
        sub_flags(cpu, cpu->r[7], 0x00080000u, 1, 1);
    }
L_00185c4c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185c50:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[8]; cpu->r[6] = v;
    }
L_00185c54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185bc4;
        }
    }
L_00185c58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185c5c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00185c60:;
    {
        cpu->r[14] = 0x00185c64u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185c64:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185c68:;
    {
        goto L_00185bd0;
    }
}

/* _ZN8Vector4s13SafeNormalizeEv @ 00185c6c (arm) */
void fn_00185c6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185c6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00185c70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185c74:;
    {
        cpu->r[14] = 0x00185c78u; fn_00185b48(cpu);
    }
L_00185c78:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185c7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00185c80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185c84u)) return;
        }
    }
L_00185c84:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00185c88:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00185c8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00185c90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_00185c94:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185cfc;
        }
    }
L_00185c98:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185c9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185ca0:;
    {
        cpu->r[14] = 0x00185ca4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185ca4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185ca8:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185cac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185cb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185cb4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185cb8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185d20;
        }
    }
L_00185cbc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185cc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185cc4:;
    {
        cpu->r[14] = 0x00185cc8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185cc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185ccc:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185cd0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185cd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185cd8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185cdc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185d48;
        }
    }
L_00185ce0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185ce4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185ce8:;
    {
        cpu->r[14] = 0x00185cecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185cec:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00185cf0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185cf4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00185cf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185cfcu)) return;
    }
L_00185cfc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185d00:;
    {
        cpu->r[14] = 0x00185d04u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185d04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185d08:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185d0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185d10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185d14:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185d18:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185d1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185cbc;
        }
    }
L_00185d20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00185d24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185d28:;
    {
        cpu->r[14] = 0x00185d2cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185d2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185d30:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185d34:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185d38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185d3c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185d40:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185d44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185ce0;
        }
    }
L_00185d48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00185d4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185d50:;
    {
        cpu->r[14] = 0x00185d54u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185d54:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[3] = v;
    }
L_00185d58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185d5c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00185d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185d64u)) return;
    }
}

/* _ZN8Vector2s13SafeNormalizeEv @ 00185d64 (arm) */
void fn_00185d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185d64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00185d68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185d6c:;
    {
        cpu->r[14] = 0x00185d70u; fn_00185a78(cpu);
    }
L_00185d70:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185d74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00185d78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185d7cu)) return;
        }
    }
L_00185d7c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00185d80:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00185d84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00185d88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_00185d8c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185dd0;
        }
    }
L_00185d90:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185d94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185d98:;
    {
        cpu->r[14] = 0x00185d9cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185da0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185da4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185da8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185dac:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185db0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00185df4;
        }
    }
L_00185db4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185db8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185dbc:;
    {
        cpu->r[14] = 0x00185dc0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185dc0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00185dc4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185dc8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00185dcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185dd0u)) return;
    }
L_00185dd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185dd4:;
    {
        cpu->r[14] = 0x00185dd8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185dd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185ddc:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185de0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00185de4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00185de8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185dec:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185df0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00185db4;
        }
    }
L_00185df4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00185df8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185dfc:;
    {
        cpu->r[14] = 0x00185e00u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185e00:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[3] = v;
    }
L_00185e04:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185e08:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00185e0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185e10u)) return;
    }
}

/* _ZN8Vector4s10SafeResizeEi @ 00185e10 (arm) */
void fn_00185e10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185e10:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00185e14:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00185e18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185e1c:;
    {
        cpu->r[14] = 0x00185e20u; fn_00185b48(cpu);
    }
L_00185e20:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185e24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_00185e28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185e2cu)) return;
        }
    }
L_00185e2c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00185e30:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185e34:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185e38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185e3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185e40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185ef4;
        }
    }
L_00185e44:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185e48:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00185e4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185e50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185ee0;
        }
    }
L_00185e54:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185e58:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185e5c:;
    {
        cpu->r[14] = 0x00185e60u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185e60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185e64:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185e68:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185e6c:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185e70:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185e74:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185e78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185f20;
        }
    }
L_00185e7c:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185e80:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00185e84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185e88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185f7c;
        }
    }
L_00185e8c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185e90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185e94:;
    {
        cpu->r[14] = 0x00185e98u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185e98:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185e9c:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185ea0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185ea4:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185ea8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185eac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185eb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185f4c;
        }
    }
L_00185eb4:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185eb8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00185ebc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185ec0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185f68;
        }
    }
L_00185ec4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185ec8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185ecc:;
    {
        cpu->r[14] = 0x00185ed0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185ed0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00185ed4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185ed8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00185edc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185ee0u)) return;
    }
L_00185ee0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185ee4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185ee8:;
    {
        cpu->r[14] = 0x00185eecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185eec:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185ef0:;
    {
        goto L_00185e60;
    }
L_00185ef4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00185ef8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185efc:;
    {
        cpu->r[14] = 0x00185f00u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185f00:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185f04:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185f08:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185f0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185f10:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185f14:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185f18:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185f1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00185e7c;
        }
    }
L_00185f20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00185f24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185f28:;
    {
        cpu->r[14] = 0x00185f2cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185f2c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185f30:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185f34:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185f38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185f3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185f40:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185f44:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185f48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00185eb4;
        }
    }
L_00185f4c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00185f50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185f54:;
    {
        cpu->r[14] = 0x00185f58u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185f58:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
    }
L_00185f5c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00185f60:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00185f64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185f68u)) return;
    }
L_00185f68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185f6c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185f70:;
    {
        cpu->r[14] = 0x00185f74u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185f74:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[5] = v;
    }
L_00185f78:;
    {
        goto L_00185ed4;
    }
L_00185f7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00185f80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185f84:;
    {
        cpu->r[14] = 0x00185f88u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185f88:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185f8c:;
    {
        goto L_00185e98;
    }
}

/* _ZN8Vector2s10SafeResizeEi @ 00185f90 (arm) */
void fn_00185f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185f90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00185f94:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00185f98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185f9c:;
    {
        cpu->r[14] = 0x00185fa0u; fn_00185a78(cpu);
    }
L_00185fa0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185fa4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[5];
        }
    }
L_00185fa8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185facu)) return;
        }
    }
L_00185fac:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_00185fb0:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185fb4:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185fb8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185fbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185fc0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018603c;
        }
    }
L_00185fc4:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185fc8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_00185fcc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185fd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00186028;
        }
    }
L_00185fd4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[0] = v;
    }
L_00185fd8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185fdc:;
    {
        cpu->r[14] = 0x00185fe0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185fe0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185fe4:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00185fe8:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185fec:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00185ff0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00185ff4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00185ff8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00186068;
        }
    }
L_00185ffc:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00186000:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_00186004:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00186008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00186084;
        }
    }
L_0018600c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[0] = v;
    }
L_00186010:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186014:;
    {
        cpu->r[14] = 0x00186018u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186018:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018601c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00186020:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00186024:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186028u)) return;
    }
L_00186028:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018602c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186030:;
    {
        cpu->r[14] = 0x00186034u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186034:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
    }
L_00186038:;
    {
        goto L_00185fe0;
    }
L_0018603c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00186040:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186044:;
    {
        cpu->r[14] = 0x00186048u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186048:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018604c:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00186050:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00186054:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00186058:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018605c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_00186060:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00186064:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00185ffc;
        }
    }
L_00186068:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018606c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186070:;
    {
        cpu->r[14] = 0x00186074u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186074:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[6] = v;
    }
L_00186078:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0018607c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00186080:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186084u)) return;
    }
L_00186084:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00186088:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018608c:;
    {
        cpu->r[14] = 0x00186090u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186090:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[6] = v;
    }
L_00186094:;
    {
        goto L_0018601c;
    }
}

/* _Z20RaytriangleIntersectRK8Vector4sS1_S1_S1_S1_S1_b @ 00186098 (arm) */
void fn_00186098(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186098:;
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
L_0018609c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001860a0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001860a4:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_001860a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
    }
L_001860ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001860b0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001860b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001860b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001860bc:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001860c0:;
    {
        cpu->r[9] = rd32(cpu->r[12]);
    }
L_001860c4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x4u);
    }
L_001860c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001860cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_001860d0:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x4u);
    }
L_001860d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001860d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001860dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001860e0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_001860e4:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x8u);
    }
L_001860e8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_001860ec:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x68u);
    }
L_001860f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001860f4:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x8u);
    }
L_001860f8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001860fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_00186100:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00186104:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00186108:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0018610c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1] + cpu->r[2]; cpu->r[1] = v;
    }
L_00186110:;
    {
        cpu->r[2] = (~cpu->r[1]);
    }
L_00186114:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
    }
L_00186118:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018611c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018612c;
        }
    }
L_00186120:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00186124:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00186128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186194;
        }
    }
L_0018612c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00186130:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_00186134:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_00186138:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_0018613c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00186140:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_00186144:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_00186148:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018614c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_00186150:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00186154:;
    {
        uint32_t v = cpu->r[6] * cpu->r[9]; cpu->r[9] = v;
    }
L_00186158:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 0);
    }
L_0018615c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10] + cpu->r[9]; cpu->r[10] = v;
    }
L_00186160:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7] + cpu->r[10]; cpu->r[11] = v;
    }
L_00186164:;
    {
        cpu->r[11] = (~cpu->r[11]);
    }
L_00186168:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 31u, &shc); cpu->r[11] = v;
    }
L_0018616c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_00186170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186194;
        }
    }
L_00186174:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00186178:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018617c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186180:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00186184:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00186188:;
    {
        cpu->r[14] = 0x0018618cu; fn_00185200(cpu);
    }
L_0018618c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00186190:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001861a0;
        }
    }
L_00186194:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00186198:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0018619c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001861a0u)) return;
    }
L_001861a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001861a4:;
    {
        cpu->r[14] = 0x001861a8u; fn_00184f64(cpu);
    }
L_001861a8:;
    {
        cpu->r[14] = 0x001861acu; fn_001854e0(cpu);
    }
L_001861ac:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_001861b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001861b4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_001861b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018647c;
        }
    }
L_001861bc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_001861c0:;
    {
        cpu->r[7] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001861c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_001861c8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001861cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186444;
        }
    }
L_001861d0:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_001861d4:;
    {
        cpu->r[11] = rd32(cpu->r[6] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001861d8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_001861dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018640c;
        }
    }
L_001861e0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_001861e4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001861e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_001861ec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001863d4;
        }
    }
L_001861f0:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_001861f4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001861f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_001861fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018639c;
        }
    }
L_00186200:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00186204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00186208:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0018620c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00186210:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186364;
        }
    }
L_00186214:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_00186218:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018621c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
    }
L_00186220:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00186224:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018632c;
        }
    }
L_00186228:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018622c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00186230:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_00186234:;
    {
        cpu->r[5] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00186238:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001862f4;
        }
    }
L_0018623c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00186240:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00186244:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00186248:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_0018624c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_00186250:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
    }
L_00186254:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_00186258:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[9], 1, 0);
    }
L_0018625c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_00186260:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_00186264:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_00186268:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8]; cpu->r[8] = v;
    }
L_0018626c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_00186270:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[8]; cpu->r[8] = v;
    }
L_00186274:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6] + cpu->r[12]; cpu->r[6] = v;
    }
L_00186278:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018627c:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_00186280:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001862b8;
        }
    }
L_00186284:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00186288:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_0018628c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00186194;
        }
    }
L_00186290:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00186294:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_00186298:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_0018629c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001862a0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001862a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7]; cpu->r[7] = v;
    }
L_001862a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3] + cpu->r[7]; cpu->r[0] = v;
    }
L_001862ac:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_001862b0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_001862b4:;
    {
        goto L_00186198;
    }
L_001862b8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001862bc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001862c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001862c4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_001862c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_001862cc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[11]; cpu->r[9] = v;
    }
L_001862d0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7] + cpu->r[9]; cpu->r[3] = v;
    }
L_001862d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001862d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001862dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186198;
        }
    }
L_001862e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001862e4:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_001862e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001862ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001862f0:;
    {
        goto L_00186198;
    }
L_001862f4:;
    {
        cpu->r[1] = rd32(0x001862fcu + + 0x1b8u);
    }
L_001862f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001862fc:;
    {
        cpu->r[12] = rd32(0x00186304u + + 0x1b4u);
    }
L_00186300:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186304:;
    {
        cpu->r[2] = rd32(0x0018630cu + + 0x1b0u);
    }
L_00186308:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186310u, cpu->r[1], 0, 0);
    }
L_0018630c:;
    {
        cpu->r[3] = rd32(0x00186314u + + 0x1acu);
    }
L_00186310:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186318u, cpu->r[12], 0, 0);
    }
L_00186314:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018631cu, cpu->r[2], 0, 0);
    }
L_00186318:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0018631c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186324u, cpu->r[3], 0, 0);
    }
L_00186320:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186324:;
    {
        cpu->r[14] = 0x00186328u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186328:;
    {
        goto L_0018623c;
    }
L_0018632c:;
    {
        cpu->r[1] = rd32(0x00186334u + + 0x190u);
    }
L_00186330:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186334:;
    {
        cpu->r[12] = rd32(0x0018633cu + + 0x18cu);
    }
L_00186338:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_0018633c:;
    {
        cpu->r[2] = rd32(0x00186344u + + 0x188u);
    }
L_00186340:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186348u, cpu->r[1], 0, 0);
    }
L_00186344:;
    {
        cpu->r[3] = rd32(0x0018634cu + + 0x184u);
    }
L_00186348:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186350u, cpu->r[12], 0, 0);
    }
L_0018634c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186354u, cpu->r[2], 0, 0);
    }
L_00186350:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186354:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018635cu, cpu->r[3], 0, 0);
    }
L_00186358:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018635c:;
    {
        cpu->r[14] = 0x00186360u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186360:;
    {
        goto L_00186228;
    }
L_00186364:;
    {
        cpu->r[1] = rd32(0x0018636cu + + 0x168u);
    }
L_00186368:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018636c:;
    {
        cpu->r[12] = rd32(0x00186374u + + 0x164u);
    }
L_00186370:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186374:;
    {
        cpu->r[2] = rd32(0x0018637cu + + 0x160u);
    }
L_00186378:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186380u, cpu->r[1], 0, 0);
    }
L_0018637c:;
    {
        cpu->r[3] = rd32(0x00186384u + + 0x15cu);
    }
L_00186380:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186388u, cpu->r[12], 0, 0);
    }
L_00186384:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018638cu, cpu->r[2], 0, 0);
    }
L_00186388:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0018638c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186394u, cpu->r[3], 0, 0);
    }
L_00186390:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186394:;
    {
        cpu->r[14] = 0x00186398u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186398:;
    {
        goto L_00186214;
    }
L_0018639c:;
    {
        cpu->r[1] = rd32(0x001863a4u + + 0x140u);
    }
L_001863a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001863a4:;
    {
        cpu->r[12] = rd32(0x001863acu + + 0x13cu);
    }
L_001863a8:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001863ac:;
    {
        cpu->r[2] = rd32(0x001863b4u + + 0x138u);
    }
L_001863b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001863b8u, cpu->r[1], 0, 0);
    }
L_001863b4:;
    {
        cpu->r[3] = rd32(0x001863bcu + + 0x134u);
    }
L_001863b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001863c0u, cpu->r[12], 0, 0);
    }
L_001863bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001863c4u, cpu->r[2], 0, 0);
    }
L_001863c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001863c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001863ccu, cpu->r[3], 0, 0);
    }
L_001863c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001863cc:;
    {
        cpu->r[14] = 0x001863d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001863d0:;
    {
        goto L_00186200;
    }
L_001863d4:;
    {
        cpu->r[1] = rd32(0x001863dcu + + 0x118u);
    }
L_001863d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001863dc:;
    {
        cpu->r[12] = rd32(0x001863e4u + + 0x114u);
    }
L_001863e0:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001863e4:;
    {
        cpu->r[2] = rd32(0x001863ecu + + 0x110u);
    }
L_001863e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001863f0u, cpu->r[1], 0, 0);
    }
L_001863ec:;
    {
        cpu->r[3] = rd32(0x001863f4u + + 0x10cu);
    }
L_001863f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001863f8u, cpu->r[12], 0, 0);
    }
L_001863f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001863fcu, cpu->r[2], 0, 0);
    }
L_001863f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001863fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186404u, cpu->r[3], 0, 0);
    }
L_00186400:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186404:;
    {
        cpu->r[14] = 0x00186408u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186408:;
    {
        goto L_001861f0;
    }
L_0018640c:;
    {
        cpu->r[1] = rd32(0x00186414u + + 0xf0u);
    }
L_00186410:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186414:;
    {
        cpu->r[12] = rd32(0x0018641cu + + 0xecu);
    }
L_00186418:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_0018641c:;
    {
        cpu->r[2] = rd32(0x00186424u + + 0xe8u);
    }
L_00186420:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186428u, cpu->r[1], 0, 0);
    }
L_00186424:;
    {
        cpu->r[3] = rd32(0x0018642cu + + 0xe4u);
    }
L_00186428:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186430u, cpu->r[12], 0, 0);
    }
L_0018642c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186434u, cpu->r[2], 0, 0);
    }
L_00186430:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186434:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018643cu, cpu->r[3], 0, 0);
    }
L_00186438:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018643c:;
    {
        cpu->r[14] = 0x00186440u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186440:;
    {
        goto L_001861e0;
    }
L_00186444:;
    {
        cpu->r[1] = rd32(0x0018644cu + + 0xc8u);
    }
L_00186448:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018644c:;
    {
        cpu->r[12] = rd32(0x00186454u + + 0xc4u);
    }
L_00186450:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186454:;
    {
        cpu->r[2] = rd32(0x0018645cu + + 0xc0u);
    }
L_00186458:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186460u, cpu->r[1], 0, 0);
    }
L_0018645c:;
    {
        cpu->r[3] = rd32(0x00186464u + + 0xbcu);
    }
L_00186460:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186468u, cpu->r[12], 0, 0);
    }
L_00186464:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018646cu, cpu->r[2], 0, 0);
    }
L_00186468:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_0018646c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186474u, cpu->r[3], 0, 0);
    }
L_00186470:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186474:;
    {
        cpu->r[14] = 0x00186478u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186478:;
    {
        goto L_001861d0;
    }
L_0018647c:;
    {
        cpu->r[1] = rd32(0x00186484u + + 0xa0u);
    }
L_00186480:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186484:;
    {
        cpu->r[12] = rd32(0x0018648cu + + 0x9cu);
    }
L_00186488:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_0018648c:;
    {
        cpu->r[2] = rd32(0x00186494u + + 0x98u);
    }
L_00186490:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186498u, cpu->r[1], 0, 0);
    }
L_00186494:;
    {
        cpu->r[3] = rd32(0x0018649cu + + 0x94u);
    }
L_00186498:;
    {
        cpu->r[12] = add_flags(cpu, 0x001864a0u, cpu->r[12], 0, 0);
    }
L_0018649c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001864a4u, cpu->r[2], 0, 0);
    }
L_001864a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001864a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001864acu, cpu->r[3], 0, 0);
    }
L_001864a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001864ac:;
    {
        cpu->r[14] = 0x001864b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001864b0:;
    {
        goto L_001861bc;
    }
}

/* _Z32FindRaytriangleIntersectionPointRK8Vector4sS1_S1_S1_S1_RS_b @ 00186534 (arm) */
void fn_00186534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186534:;
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
L_00186538:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_0018653c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00186540:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00186544:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x68u);
    }
L_00186548:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018654c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00186550:;
    {
        cpu->r[11] = rd32(cpu->r[4]);
    }
L_00186554:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_00186558:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018655c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_00186560:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00186564:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_00186568:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_0018656c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_00186570:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[10] = v;
    }
L_00186574:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_00186578:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[10]; cpu->r[10] = v;
    }
L_0018657c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00186580:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00186584:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_00186588:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0018658c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_00186590:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00186594:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_00186598:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x70u);
    }
L_0018659c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_001865a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001865a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[10]; cpu->r[9] = v;
    }
L_001865a8:;
    {
        cpu->r[10] = (~cpu->r[9]);
    }
L_001865ac:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 31u, &shc); cpu->r[10] = v;
    }
L_001865b0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001865b4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001865b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001865c8;
        }
    }
L_001865bc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_001865c0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001865c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001866b8;
        }
    }
L_001865c8:;
    {
        cpu->r[9] = rd32(cpu->r[6]);
    }
L_001865cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001865d0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x4u);
    }
L_001865d4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_001865d8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_001865dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001865e0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x8u);
    }
L_001865e4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_001865e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001865ec:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_001865f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001865f4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
    }
L_001865f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001865fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8] + cpu->r[3]; cpu->r[3] = v;
    }
L_00186600:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_00186604:;
    {
        cpu->r[3] = (~cpu->r[3]);
    }
L_00186608:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 31u, &shc); cpu->r[3] = v;
    }
L_0018660c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00186610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001866b8;
        }
    }
L_00186614:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00186618:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018661c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_00186620:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00186624:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_00186628:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018662c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00186630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00186634:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_00186638:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_0018663c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_00186640:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00186644:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00186648:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_0018664c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00186650:;
    {
        cpu->r[14] = 0x00186654u; fn_00185200(cpu);
    }
L_00186654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00186658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001866b8;
        }
    }
L_0018665c:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00186660:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00186664:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00186668:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018666c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00186670:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00186674:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00186678:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0018667c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_00186680:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00186684:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 0);
    }
L_00186688:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0018668c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_00186690:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x8u);
    }
L_00186694:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_00186698:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
    }
L_0018669c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[12]; cpu->r[1] = v;
    }
L_001866a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_001866a4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_001866a8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[4] + cpu->r[1]; cpu->r[4] = v;
    }
L_001866ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_001866b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001866b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001866c8;
        }
    }
L_001866b8:;
    {
        cpu->r[4] = (~0x80000000u);
    }
L_001866bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001866c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_001866c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001866c8u)) return;
    }
L_001866c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001866cc:;
    {
        cpu->r[14] = 0x001866d0u; fn_00184f64(cpu);
    }
L_001866d0:;
    {
        cpu->r[14] = 0x001866d4u; fn_001854e0(cpu);
    }
L_001866d4:;
    {
        cpu->r[10] = rd32(cpu->r[0]);
    }
L_001866d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001866dc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
    }
L_001866e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001869e8;
        }
    }
L_001866e4:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x4u);
    }
L_001866e8:;
    {
        cpu->r[10] = rd32(cpu->r[8] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_001866ec:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_001866f0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_001866f4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001869b0;
        }
    }
L_001866f8:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_001866fc:;
    {
        cpu->r[9] = rd32(cpu->r[8] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00186700:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
    }
L_00186704:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_00186708:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186978;
        }
    }
L_0018670c:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x4u);
    }
L_00186710:;
    {
        cpu->r[10] = rd32(cpu->r[5] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00186714:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_00186718:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0018671c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186940;
        }
    }
L_00186720:;
    {
        cpu->r[10] = rd32(cpu->r[7]);
    }
L_00186724:;
    {
        cpu->r[5] = rd32(cpu->r[5] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00186728:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
    }
L_0018672c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_00186730:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186908;
        }
    }
L_00186734:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x4u);
    }
L_00186738:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018673c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00186740:;
    {
        cpu->r[10] = rd32(cpu->r[9] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00186744:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001868d0;
        }
    }
L_00186748:;
    {
        cpu->r[11] = rd32(cpu->r[7]);
    }
L_0018674c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00186750:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_00186754:;
    {
        cpu->r[5] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00186758:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186898;
        }
    }
L_0018675c:;
    {
        cpu->r[9] = rd32(cpu->r[7] + + 0x4u);
    }
L_00186760:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00186764:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_00186768:;
    {
        cpu->r[7] = rd32(cpu->r[0] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_0018676c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00186860;
        }
    }
L_00186770:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00186774:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00186778:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018677c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_00186780:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_00186784:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_00186788:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018678c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 0);
    }
L_00186790:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00186794:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00186798:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018679c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001867a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001867a4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12]; cpu->r[12] = v;
    }
L_001867a8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001867ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001867b0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001867b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_001867b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001867bc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 0);
    }
L_001867c0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_001867c4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[1] = v;
    }
L_001867c8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11] + cpu->r[12]; cpu->r[12] = v;
    }
L_001867cc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[5] + cpu->r[1]; cpu->r[5] = v;
    }
L_001867d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001867d4:;
    {
        if (cond_test(cpu, 14)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_001867d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186820;
        }
    }
L_001867dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001867e0:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_001867e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001866b8;
        }
    }
L_001867e8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001867ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001867f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001867f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001867f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001867fc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_00186800:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00186804:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00186808:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0018680c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186810:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001866b8;
        }
    }
L_00186814:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00186818:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0018681c:;
    {
        goto L_001866bc;
    }
L_00186820:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00186824:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_00186828:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018682c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00186830:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00186834:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 0);
    }
L_00186838:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0018683c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00186840:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00186844:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00186848:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018684c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186814;
        }
    }
L_00186850:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00186854:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_00186858:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001866b8;
        }
    }
L_0018685c:;
    {
        goto L_00186814;
    }
L_00186860:;
    {
        cpu->r[1] = rd32(0x00186868u + + 0x1b8u);
    }
L_00186864:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186868:;
    {
        cpu->r[12] = rd32(0x00186870u + + 0x1b4u);
    }
L_0018686c:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186870:;
    {
        cpu->r[2] = rd32(0x00186878u + + 0x1b0u);
    }
L_00186874:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018687cu, cpu->r[1], 0, 0);
    }
L_00186878:;
    {
        cpu->r[3] = rd32(0x00186880u + + 0x1acu);
    }
L_0018687c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186884u, cpu->r[12], 0, 0);
    }
L_00186880:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186888u, cpu->r[2], 0, 0);
    }
L_00186884:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186888:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186890u, cpu->r[3], 0, 0);
    }
L_0018688c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186890:;
    {
        cpu->r[14] = 0x00186894u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186894:;
    {
        goto L_00186770;
    }
L_00186898:;
    {
        cpu->r[1] = rd32(0x001868a0u + + 0x190u);
    }
L_0018689c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001868a0:;
    {
        cpu->r[12] = rd32(0x001868a8u + + 0x18cu);
    }
L_001868a4:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001868a8:;
    {
        cpu->r[2] = rd32(0x001868b0u + + 0x188u);
    }
L_001868ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001868b4u, cpu->r[1], 0, 0);
    }
L_001868b0:;
    {
        cpu->r[3] = rd32(0x001868b8u + + 0x184u);
    }
L_001868b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001868bcu, cpu->r[12], 0, 0);
    }
L_001868b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001868c0u, cpu->r[2], 0, 0);
    }
L_001868bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001868c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001868c8u, cpu->r[3], 0, 0);
    }
L_001868c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001868c8:;
    {
        cpu->r[14] = 0x001868ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001868cc:;
    {
        goto L_0018675c;
    }
L_001868d0:;
    {
        cpu->r[1] = rd32(0x001868d8u + + 0x168u);
    }
L_001868d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001868d8:;
    {
        cpu->r[12] = rd32(0x001868e0u + + 0x164u);
    }
L_001868dc:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001868e0:;
    {
        cpu->r[2] = rd32(0x001868e8u + + 0x160u);
    }
L_001868e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001868ecu, cpu->r[1], 0, 0);
    }
L_001868e8:;
    {
        cpu->r[3] = rd32(0x001868f0u + + 0x15cu);
    }
L_001868ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x001868f4u, cpu->r[12], 0, 0);
    }
L_001868f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001868f8u, cpu->r[2], 0, 0);
    }
L_001868f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001868f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186900u, cpu->r[3], 0, 0);
    }
L_001868fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186900:;
    {
        cpu->r[14] = 0x00186904u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186904:;
    {
        goto L_00186748;
    }
L_00186908:;
    {
        cpu->r[1] = rd32(0x00186910u + + 0x140u);
    }
L_0018690c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186910:;
    {
        cpu->r[12] = rd32(0x00186918u + + 0x13cu);
    }
L_00186914:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186918:;
    {
        cpu->r[2] = rd32(0x00186920u + + 0x138u);
    }
L_0018691c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186924u, cpu->r[1], 0, 0);
    }
L_00186920:;
    {
        cpu->r[3] = rd32(0x00186928u + + 0x134u);
    }
L_00186924:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018692cu, cpu->r[12], 0, 0);
    }
L_00186928:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186930u, cpu->r[2], 0, 0);
    }
L_0018692c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186930:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186938u, cpu->r[3], 0, 0);
    }
L_00186934:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186938:;
    {
        cpu->r[14] = 0x0018693cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018693c:;
    {
        goto L_00186734;
    }
L_00186940:;
    {
        cpu->r[1] = rd32(0x00186948u + + 0x118u);
    }
L_00186944:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186948:;
    {
        cpu->r[12] = rd32(0x00186950u + + 0x114u);
    }
L_0018694c:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186950:;
    {
        cpu->r[2] = rd32(0x00186958u + + 0x110u);
    }
L_00186954:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018695cu, cpu->r[1], 0, 0);
    }
L_00186958:;
    {
        cpu->r[3] = rd32(0x00186960u + + 0x10cu);
    }
L_0018695c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186964u, cpu->r[12], 0, 0);
    }
L_00186960:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186968u, cpu->r[2], 0, 0);
    }
L_00186964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186968:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186970u, cpu->r[3], 0, 0);
    }
L_0018696c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186970:;
    {
        cpu->r[14] = 0x00186974u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186974:;
    {
        goto L_00186720;
    }
L_00186978:;
    {
        cpu->r[1] = rd32(0x00186980u + + 0xf0u);
    }
L_0018697c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00186980:;
    {
        cpu->r[12] = rd32(0x00186988u + + 0xecu);
    }
L_00186984:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_00186988:;
    {
        cpu->r[2] = rd32(0x00186990u + + 0xe8u);
    }
L_0018698c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186994u, cpu->r[1], 0, 0);
    }
L_00186990:;
    {
        cpu->r[3] = rd32(0x00186998u + + 0xe4u);
    }
L_00186994:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018699cu, cpu->r[12], 0, 0);
    }
L_00186998:;
    {
        cpu->r[2] = add_flags(cpu, 0x001869a0u, cpu->r[2], 0, 0);
    }
L_0018699c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001869a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001869a8u, cpu->r[3], 0, 0);
    }
L_001869a4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001869a8:;
    {
        cpu->r[14] = 0x001869acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001869ac:;
    {
        goto L_0018670c;
    }
L_001869b0:;
    {
        cpu->r[1] = rd32(0x001869b8u + + 0xc8u);
    }
L_001869b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001869b8:;
    {
        cpu->r[12] = rd32(0x001869c0u + + 0xc4u);
    }
L_001869bc:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001869c0:;
    {
        cpu->r[2] = rd32(0x001869c8u + + 0xc0u);
    }
L_001869c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001869ccu, cpu->r[1], 0, 0);
    }
L_001869c8:;
    {
        cpu->r[3] = rd32(0x001869d0u + + 0xbcu);
    }
L_001869cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001869d4u, cpu->r[12], 0, 0);
    }
L_001869d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001869d8u, cpu->r[2], 0, 0);
    }
L_001869d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_001869d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001869e0u, cpu->r[3], 0, 0);
    }
L_001869dc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001869e0:;
    {
        cpu->r[14] = 0x001869e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001869e4:;
    {
        goto L_001866f8;
    }
L_001869e8:;
    {
        cpu->r[1] = rd32(0x001869f0u + + 0xa0u);
    }
L_001869ec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001869f0:;
    {
        cpu->r[12] = rd32(0x001869f8u + + 0x9cu);
    }
L_001869f4:;
    {
        cpu->r[14] = 0x000000a8u;
    }
L_001869f8:;
    {
        cpu->r[2] = rd32(0x00186a00u + + 0x98u);
    }
L_001869fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00186a04u, cpu->r[1], 0, 0);
    }
L_00186a00:;
    {
        cpu->r[3] = rd32(0x00186a08u + + 0x94u);
    }
L_00186a04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00186a0cu, cpu->r[12], 0, 0);
    }
L_00186a08:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186a10u, cpu->r[2], 0, 0);
    }
L_00186a0c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00186a10:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186a18u, cpu->r[3], 0, 0);
    }
L_00186a14:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00186a18:;
    {
        cpu->r[14] = 0x00186a1cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00186a1c:;
    {
        goto L_001866e4;
    }
}

/* _ZN15CWeatherManagerC2Ev @ 00186aa0 (arm) */
void fn_00186aa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186aa0:;
    {
        cpu->r[1] = 0x0000f830u;
    }
L_00186aa4:;
    {
        cpu->r[2] = 0x0000f448u;
    }
L_00186aa8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00186aac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00186ab0:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_00186ab4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00186ab8:;
    {
        cpu->r[1] = 0x000007d0u;
    }
L_00186abc:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_00186ac0:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_00186ac4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00186ac8:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[12]);
    }
L_00186acc:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00186ad0:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[2]);
    }
L_00186ad4:;
    {
        wr32(cpu->r[0] + + 0xc8u, cpu->r[2]);
    }
L_00186ad8:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00186adc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00186ae0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00186ae4:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_00186ae8:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00186aec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManagerC1Ev @ 00186af0 (arm) */
void fn_00186af0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186af0:;
    {
        cpu->r[1] = 0x0000f830u;
    }
L_00186af4:;
    {
        cpu->r[2] = 0x0000f448u;
    }
L_00186af8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00186afc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00186b00:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_00186b04:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00186b08:;
    {
        cpu->r[1] = 0x000007d0u;
    }
L_00186b0c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_00186b10:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_00186b14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00186b18:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[12]);
    }
L_00186b1c:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00186b20:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[2]);
    }
L_00186b24:;
    {
        wr32(cpu->r[0] + + 0xc8u, cpu->r[2]);
    }
L_00186b28:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00186b2c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00186b30:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00186b34:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_00186b38:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00186b3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManager16GetWeatherSpriteEv @ 00186b40 (arm) */
void fn_00186b40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186b40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xe0u);
    }
L_00186b44:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00186b48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00186b4c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000009u;
        }
    }
L_00186b50:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00186b54:;
    {
        cpu->r[2] = rd32(0x00186b5cu + + 0x8u);
    }
L_00186b58:;
    {
        cpu->r[2] = add_flags(cpu, 0x00186b60u, cpu->r[2], 0, 0);
    }
L_00186b5c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00186b60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManager7DisableEi @ 00186b68 (arm) */
void fn_00186b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186b68:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00186b6c:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[1]);
    }
L_00186b70:;
    {
        wr8(cpu->r[0] + + 0xdcu, cpu->r[3]);
    }
L_00186b74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManager6UpdateEv @ 00186b78 (arm) */
void fn_00186b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186b78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00186b7c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8u);
    }
L_00186b80:;
    {
        cpu->r[3] = rd32(0x00186b88u + + 0x134u);
    }
L_00186b84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00186b88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00186b8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186b94u, cpu->r[3], 0, 0);
    }
L_00186b90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186b94u)) return;
        }
    }
L_00186b94:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xdcu);
    }
L_00186b98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00186b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186c48;
        }
    }
L_00186ba0:;
    {
        cpu->r[1] = rd32(0x00186ba8u + + 0x118u);
    }
L_00186ba4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xd8u);
    }
L_00186ba8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00186bac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00186bb0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00186bb4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
        }
    }
L_00186bb8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_00186bbc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[2]);
        }
    }
L_00186bc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00186bc4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
        }
    }
L_00186bc8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00186bcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_00186bd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_00186bd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00186bd8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00186bdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00186be0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00186be4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_00186be8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_00186bec:;
    {
        cpu->r[14] = 0x00186bf0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186bf0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00186bf4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_00186bf8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00186bfc:;
    {
        cpu->r[14] = 0x00186c00u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00186c00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00186c04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_00186c08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00186c0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00186c10:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_00186c14:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00186c18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00186c24;
        }
    }
L_00186c1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00186c20:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_00186c24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00186c28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00186c2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00186c30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
        }
    }
L_00186c34:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_00186c38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186c3cu)) return;
        }
    }
L_00186c3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
        }
    }
L_00186c40:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
        }
    }
L_00186c44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186c48u)) return;
    }
L_00186c48:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xecu);
    }
L_00186c4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00186c50:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00186c54:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0xecu, cpu->r[2]);
        }
    }
L_00186c58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186c5cu)) return;
        }
    }
L_00186c5c:;
    {
        cpu->r[2] = rd32(0x00186c64u + + 0x5cu);
    }
L_00186c60:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xd8u);
    }
L_00186c64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00186c68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00186c6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_00186c70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00186c74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00186c78:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00186c7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_00186c80:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[2]);
        }
    }
L_00186c84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_00186c88:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00186bdc;
        }
    }
L_00186c8c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xf0u);
    }
L_00186c90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186c94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186cac;
        }
    }
L_00186c98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00186c9c:;
    {
        wr32(cpu->r[0] + + 0xf0u, cpu->r[3]);
    }
L_00186ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186ca4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_00186ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00186bdc;
        }
    }
L_00186cac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00186cb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00186cb4:;
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
L_00186cb8:;
    {
        return fn_00186b68(cpu);
    }
}

/* _ZN15CWeatherManager6EnableEii @ 00186cc4 (arm) */
void fn_00186cc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186cc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00186cc8:;
    {
        cpu->r[12] = 0x0000270fu;
    }
L_00186ccc:;
    {
        wr8(cpu->r[0] + + 0xdcu, cpu->r[3]);
    }
L_00186cd0:;
    {
        wr32(cpu->r[0] + + 0xf4u, cpu->r[12]);
    }
L_00186cd4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00186cd8:;
    {
        wr32(cpu->r[0] + + 0xf0u, cpu->r[1]);
    }
L_00186cdc:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_00186ce0:;
    {
        wr32(cpu->r[0] + + 0xecu, cpu->r[2]);
    }
L_00186ce4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00186ce8:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[3]);
    }
L_00186cec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManager14SetWeatherTypeEi @ 00186cf0 (arm) */
void fn_00186cf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186cf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00186cf4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00186cf8:;
    {
        wr32(cpu->r[0] + + 0xe0u, cpu->r[1]);
    }
L_00186cfc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xccu);
    }
L_00186d00:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00186d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186d24;
        }
    }
L_00186d08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_00186d0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186d40;
        }
    }
L_00186d10:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_00186d14:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00186d18:;
    {
        wr32(cpu->r[0] + + 0xe4u, cpu->r[3]);
    }
L_00186d1c:;
    {
        wr32(cpu->r[0] + + 0xe8u, cpu->r[3]);
    }
L_00186d20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00186d24:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00186d28:;
    {
        wr32(cpu->r[0] + + 0xe4u, cpu->r[3]);
    }
L_00186d2c:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_00186d30:;
    {
        wr32(cpu->r[0] + + 0xe8u, cpu->r[3]);
    }
L_00186d34:;
    {
        cpu->r[3] = 0x00000046u;
    }
L_00186d38:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00186d3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00186d40:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_00186d44:;
    {
        wr32(cpu->r[0] + + 0xe8u, cpu->r[3]);
    }
L_00186d48:;
    {
        wr32(cpu->r[0] + + 0xe4u, cpu->r[3]);
    }
L_00186d4c:;
    {
        cpu->r[3] = 0x0000000fu;
    }
L_00186d50:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00186d54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15CWeatherManager12RespawnDecalEi @ 00186d58 (arm) */
void fn_00186d58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186d58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00186d5c:;
    {
        cpu->r[4] = rd32(0x00186d64u + + 0x64u);
    }
L_00186d60:;
    {
        cpu->r[3] = rd32(0x00186d68u + + 0x64u);
    }
L_00186d64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00186d68:;
    {
        cpu->r[4] = add_flags(cpu, 0x00186d70u, cpu->r[4], 0, 0);
    }
L_00186d6c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00186d70:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00186d74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000009u, 0, 0);
    }
L_00186d78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00186d7c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00186d80:;
    {
        cpu->r[14] = 0x00186d84u; fn_000964c8(cpu);
    }
L_00186d84:;
    {
        cpu->r[3] = rd32(0x00186d8cu + + 0x44u);
    }
L_00186d88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00186d8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_00186d90:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00186d94:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00186d98:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00186d9c:;
    {
        cpu->r[14] = 0x00186da0u; fn_000964c8(cpu);
    }
L_00186da0:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_00186da4:;
    {
        wr16(cpu->r[4] + + 0x6u, cpu->r[0]);
    }
L_00186da8:;
    {
        cpu->r[0] = 0x00000096u;
    }
L_00186dac:;
    {
        cpu->r[14] = 0x00186db0u; fn_000964c8(cpu);
    }
L_00186db0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00186db4:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00186db8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00186dbc:;
    {
        cpu->r[14] = 0x00186dc0u; fn_000964c8(cpu);
    }
L_00186dc0:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[0]);
    }
L_00186dc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186dc8u)) return;
    }
}

/* _ZN15CWeatherManager14Render2DDecalsEv @ 00186dd4 (arm) */
void fn_00186dd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186dd4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00186dd8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8u);
    }
L_00186ddc:;
    {
        cpu->r[4] = rd32(0x00186de4u + + 0x124u);
    }
L_00186de0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00186de4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186de8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00186dec:;
    {
        cpu->r[4] = add_flags(cpu, 0x00186df4u, cpu->r[4], 0, 0);
    }
L_00186df0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186ebc;
        }
    }
L_00186df4:;
    {
        cpu->r[3] = rd32(0x00186dfcu + + 0x110u);
    }
L_00186df8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00186dfc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00186e00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00186e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186ec4;
        }
    }
L_00186e08:;
    {
        cpu->r[5] = rd32(0x00186e10u + + 0x100u);
    }
L_00186e0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00186e10:;
    {
        cpu->r[14] = 0x00186e14u; fn_00186b40(cpu);
    }
L_00186e14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00186e18:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00186e1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00186e20:;
    {
        cpu->r[14] = 0x00186e24u; fn_0018aa44(cpu);
    }
L_00186e24:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00186e28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186e2c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00186e30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186ebc;
        }
    }
L_00186e34:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00186e38:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_00186e3c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00186e40:;
    {
        goto L_00186e54;
    }
L_00186e44:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00186e48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00186e4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00186e50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00186ebc;
        }
    }
L_00186e54:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4eu);
    }
L_00186e58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00186e5c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x52u);
    }
L_00186e60:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4cu);
    }
L_00186e64:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00186e68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00186e6c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x50u);
    }
L_00186e70:;
    {
        cpu->r[12] = sub_flags(cpu, 0x000000ffu, cpu->r[12], 1, 0);
    }
L_00186e74:;
    {
        uint32_t v = cpu->r[12] & 0x000000ffu; cpu->r[12] = v;
    }
L_00186e78:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00186e7c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00186e80:;
    {
        cpu->r[14] = 0x00186e84u; fn_000ab50c(cpu);
    }
L_00186e84:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x50u);
    }
L_00186e88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_00186e8c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_00186e90:;
    {
        wr16(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_00186e94:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_00186e98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00186e9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186e44;
        }
    }
L_00186ea0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00186ea4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00186ea8:;
    {
        cpu->r[14] = 0x00186eacu; fn_00186d58(cpu);
    }
L_00186eac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00186eb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00186eb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00186eb8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00186e54;
        }
    }
L_00186ebc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00186ec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00186ec4u)) return;
    }
L_00186ec4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00186ec8:;
    {
        cpu->r[14] = 0x00186eccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00186ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00186ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00186e08;
        }
    }
L_00186ed4:;
    {
        cpu->r[5] = rd32(0x00186edcu + + 0x34u);
    }
L_00186ed8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00186edc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00186ee0:;
    {
        cpu->r[14] = 0x00186ee4u; fn_0018aa20(cpu);
    }
L_00186ee4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00186ee8:;
    {
        cpu->r[14] = 0x00186eecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00186eec:;
    {
        cpu->r[3] = rd32(0x00186ef4u + + 0x20u);
    }
L_00186ef0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00186ef4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00186ef8:;
    {
        cpu->r[3] = rd32(0x00186f00u + + 0x18u);
    }
L_00186efc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00186f00:;
    {
        cpu->r[14] = 0x00186f04u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00186f04:;
    {
        goto L_00186e0c;
    }
}

/* _ZN15CWeatherManager11RespawnDropEiP7CMatrix @ 00186f1c (arm) */
void fn_00186f1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00186f1c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00186f20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00186f24:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00186f28:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x34u);
    }
L_00186f2c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_00186f30:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00186f34:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00186f38:;
    {
        cpu->r[14] = 0x00186f3cu; fn_000964c8(cpu);
    }
L_00186f3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00186f40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00186f44:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00186f48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00186f4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x38u);
    }
L_00186f50:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00186f54:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[5], 2, 4u, &shc), cpu->r[3]);
    }
L_00186f58:;
    {
        cpu->r[14] = 0x00186f5cu; fn_000964c8(cpu);
    }
L_00186f5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00186f60:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00186f64:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00186f68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00186f6c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00186f70:;
    {
        cpu->r[14] = 0x00186f74u; fn_000964c8(cpu);
    }
L_00186f74:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_00186f78:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00186f7c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00186f80:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_00186f84:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00186f88:;
    {
        cpu->r[14] = 0x00186f8cu; fn_000964c8(cpu);
    }
L_00186f8c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00186f90:;
    {
        wr8(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_00186f94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00186f98:;
    {
        cpu->r[14] = 0x00186f9cu; fn_00153c38(cpu);
    }
L_00186f9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00186fa0:;
    {
        cpu->r[3] = rd32(0x00186fa8u + + 0x64u);
    }
L_00186fa4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_00186fa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00186fac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_00186fb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00186fb8u, cpu->r[3], 0, 0);
    }
L_00186fb4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00186fb8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_00186fbc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00186fc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00186fc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00186fc8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x8u);
    }
L_00186fcc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x8u);
    }
L_00186fd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00186fd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00186fd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00186fdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_00186fe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00186fe4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00186fe8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00186fec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00186ff0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_00186ff4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00186ff8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_00186ffc:;
    {
        wr8(cpu->r[6] + + 0xeu, cpu->r[2]);
    }
L_00187000:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00187004:;
    {
        wr8(cpu->r[6] + + 0xdu, cpu->r[0]);
    }
L_00187008:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018700cu)) return;
    }
}

/* _ZN15CWeatherManagerD1Ev @ 00187010 (arm) */
void fn_00187010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187010:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00187014:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187018:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0018701c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187030;
        }
    }
L_00187024:;
    {
        cpu->r[14] = 0x00187028u; fn_0018ba60(cpu);
    }
L_00187028:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018702c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00187030:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00187034:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187048;
        }
    }
L_0018703c:;
    {
        cpu->r[14] = 0x00187040u; fn_0018ba60(cpu);
    }
L_00187040:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187044:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_00187048:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018704c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00187050u)) return;
    }
}

/* _ZN15CWeatherManagerD2Ev @ 00187050 (arm) */
void fn_00187050(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187050:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00187054:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187058:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc4u);
    }
L_0018705c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187070;
        }
    }
L_00187064:;
    {
        cpu->r[14] = 0x00187068u; fn_0018ba60(cpu);
    }
L_00187068:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018706c:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_00187070:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00187074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187088;
        }
    }
L_0018707c:;
    {
        cpu->r[14] = 0x00187080u; fn_0018ba60(cpu);
    }
L_00187080:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187084:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_00187088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018708c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00187090u)) return;
    }
}

/* _ZN15CWeatherManager4InitEiiii @ 00187090 (arm) */
void fn_00187090(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187090:;
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
L_00187094:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00187098:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018709c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc4u);
    }
L_001870a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001870a4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001870a8:;
    {
        cpu->r[7] = rd32(0x001870b0u + + 0x1ccu);
    }
L_001870ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001870b0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001870b4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_001870b8:;
    {
        cpu->r[7] = add_flags(cpu, 0x001870c0u, cpu->r[7], 0, 0);
    }
L_001870bc:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_001870c0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_001870c4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001870c8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001870cc:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[6]);
    }
L_001870d0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_001870d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001870e4;
        }
    }
L_001870d8:;
    {
        cpu->r[14] = 0x001870dcu; fn_0018ba60(cpu);
    }
L_001870dc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_001870e0:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[6]);
    }
L_001870e4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 4u, &shc); cpu->r[0] = v;
    }
L_001870e8:;
    {
        cpu->r[14] = 0x001870ecu; imp__Znaj(cpu); /* _Znaj */
    }
L_001870ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001870f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018711c;
        }
    }
L_001870f4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001870f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001870fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00187104u + + 0x16cu);
    }
L_00187100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00187104:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00187108:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0018710c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00187110:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00187114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00187118:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187100;
        }
    }
L_0018711c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00187120:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[0]);
    }
L_00187124:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187128:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018713c;
        }
    }
L_0018712c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00187130:;
    {
        cpu->r[14] = 0x00187134u; fn_0018ba60(cpu);
    }
L_00187134:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187138:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_0018713c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00187140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00187144:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00187148:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0018714c:;
    {
        cpu->r[14] = 0x00187150u; imp__Znaj(cpu); /* _Znaj */
    }
L_00187150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00187154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187158:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[0]);
    }
L_0018715c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00187160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187268;
        }
    }
L_00187164:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00187168:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018716c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00187170:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[2] = v;
    }
L_00187174:;
    {
        cpu->r[14] = 0x00187178u; imp_memset(cpu); /* memset */
    }
L_00187178:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018717c:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00187180:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000004cu, 0, 0);
    }
L_00187184:;
    {
        cpu->r[14] = 0x00187188u; imp_memset(cpu); /* memset */
    }
L_00187188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0018718c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00187190:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00187194:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 6u, &shc); cpu->r[2] = v;
    }
L_00187198:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_0018719c:;
    {
        cpu->r[14] = 0x001871a0u; imp_memset(cpu); /* memset */
    }
L_001871a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001871a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001871a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001871e8;
        }
    }
L_001871ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001871b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001871b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001871bcu + + 0xb4u);
    }
L_001871b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001871c0u + + 0xb4u);
    }
L_001871bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001871c4u + + 0xb4u);
    }
L_001871c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001871c4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001871c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001871cc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001871d0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001871d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001871d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001871dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001871e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003cu, 0, 0);
    }
L_001871e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001871c0;
        }
    }
L_001871e8:;
    {
        cpu->r[3] = rd32(0x001871f0u + + 0x90u);
    }
L_001871ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001871f0:;
    {
        cpu->r[2] = rd32(0x001871f8u + + 0x8cu);
    }
L_001871f4:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001871f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187200u, cpu->r[3], 0, 0);
    }
L_001871fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00187200:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00187204:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00187208:;
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
L_0018720c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00187210:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[5]);
    }
L_00187214:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00187218:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0018721c:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_00187220:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187224:;
    {
        wr32(cpu->r[6] + + 0xccu, cpu->r[1]);
    }
L_00187228:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0018722c:;
    {
        cpu->r[14] = 0x00187230u; fn_00135d9c(cpu);
    }
L_00187230:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 1);
    }
L_00187234:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00187238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187210;
        }
    }
L_0018723c:;
    {
        cpu->r[2] = rd32(0x00187244u + + 0x44u);
    }
L_00187240:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00187244:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00187248:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0018724c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00187250:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00187254:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xccu);
    }
L_00187258:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0018725c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00187260:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_00187264:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00187268:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018726c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187270u)) return;
    }
}

/* _ZN15CWeatherManager6RenderEb @ 0018728c (arm) */
void fn_0018728c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018728c:;
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
L_00187290:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187294:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_00187298:;
    {
        cpu->r[0] = rd32(0x001872a0u + + 0x440u);
    }
L_0018729c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_001872a0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001872a4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001872acu, cpu->r[0], 0, 0);
    }
L_001872a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001872ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001872b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187614;
        }
    }
L_001872b4:;
    {
        cpu->r[3] = rd32(0x001872bcu + + 0x428u);
    }
L_001872b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001872bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001872c0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001872c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001872c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001872cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001872d0:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_001872d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001872d8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001872dc:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_001872e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001872e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001872e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000033u;
        }
    }
L_001872ec:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001872f0:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_001872f4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001872f8:;
    {
        cpu->r[14] = 0x001872fcu; fn_0014814c(cpu);
    }
L_001872fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00187300:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00187304:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000128u, 0, 0);
    }
L_00187308:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[6]);
    }
L_0018730c:;
    {
        cpu->r[14] = 0x00187310u; fn_00153624(cpu);
    }
L_00187310:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x28u);
    }
L_00187314:;
    {
        cpu->r[3] = rd32(0x0018731cu + + 0x3ccu);
    }
L_00187318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000200u, 0, 0);
    }
L_0018731c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe4u);
    }
L_00187320:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 21u, &shc); cpu->r[12] = v;
    }
L_00187324:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018732cu, cpu->r[3], 0, 0);
    }
L_00187328:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_0018732c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xe8u);
    }
L_00187330:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 21u, &shc); cpu->r[12] = v;
    }
L_00187334:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x14u);
    }
L_00187338:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_0018733c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_00187340:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00187344:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00187348:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_0018734c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x8u);
    }
L_00187350:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[14];
    }
L_00187354:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x8u);
    }
L_00187358:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0018735c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_00187360:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00187364:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_00187368:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0018736c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00187370:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[7] = v;
    }
L_00187374:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_00187378:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0018737c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[7] = v;
    }
L_00187380:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00187384:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[8] = v;
    }
L_00187388:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_0018738c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00187390:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00187394:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001874d0;
        }
    }
L_00187398:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018739c:;
    {
        *vfp_s(cpu,8) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001873a0:;
    {
        cpu->r[14] = cpu->r[6];
    }
L_001873a4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001873a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001873ac:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xc4u);
    }
L_001873b0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], 0x00000014u, 0, 0);
    }
L_001873b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001873b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[14], 0x00000028u, 0, 0);
    }
L_001873bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001873c0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001873c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_001873c8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001873cc:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0xeu);
    }
L_001873d0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_001873d4:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0xdu);
    }
L_001873d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001873dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_001873e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_001873e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001873e8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001873ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001873f0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001873f4:;
    {
        vfp_vadd(cpu, 15, 15, 12);
    }
L_001873f8:;
    {
        vfp_vadd(cpu, 14, 14, 13);
    }
L_001873fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00187400:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00187404:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00187408:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_0018740c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_00187410:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00187414:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_00187418:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[5];
    }
L_0018741c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00187420:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00187424:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_00187428:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[5];
    }
L_0018742c:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00187430:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 0);
    }
L_00187434:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[5];
    }
L_00187438:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0018743c:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00187440:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00187444:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00187448:;
    {
        uint32_t wb_tmp = cpu->r[12] + cpu->r[14];
        wr32(cpu->r[12] + cpu->r[14], cpu->r[5]);
        cpu->r[12] = wb_tmp;
    }
L_0018744c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00187450:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00187454:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00187458:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000003cu, 0, 0);
    }
L_0018745c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00187460:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00187464:;
    {
        uint32_t wb_tmp = cpu->r[0] + cpu->r[11];
        wr32(cpu->r[0] + cpu->r[11], cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_00187468:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0018746c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00187470:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00187474:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00187478:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0018747c:;
    {
        uint32_t wb_tmp = cpu->r[1] + cpu->r[9];
        wr32(cpu->r[1] + cpu->r[9], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_00187480:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00187484:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00187488:;
    {
        vfp_vadd(cpu, 13, 13, 8);
    }
L_0018748c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00187490:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001874c0;
        }
    }
L_00187494:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00187498:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xcu);
    }
L_0018749c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 4u, &shc), cpu->r[0]);
    }
L_001874a0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001874a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001874a8:;
    {
        wr8(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_001874ac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x14u);
    }
L_001874b0:;
    {
        vfp_vadd(cpu, 9, 9, 13);
    }
L_001874b4:;
    {
        *(int32_t*)vfp_s(cpu,9) = (int32_t)*vfp_s(cpu,9);
    }
L_001874b8:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_001874bc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_001874c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001874c4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001874c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001873ac;
        }
    }
L_001874cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_001874d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001874d4:;
    {
        cpu->r[6] = 0x000011e8u;
    }
L_001874d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001874dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001874e0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_001874e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001874e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001874ec:;
    {
        cpu->r[14] = 0x001874f4u;
    }
L_001874f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001874f4u)) return;
    }
L_001874f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001874f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001874fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00187500:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187504:;
    {
        cpu->r[14] = 0x0018750cu;
    }
L_00187508:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018750cu)) return;
    }
L_0018750c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00187510:;
    {
        cpu->r[3] = rd32(0x00187518u + + 0x1d4u);
    }
L_00187514:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00187518:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x4u);
    }
L_0018751c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00187520:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00187524:;
    {
        cpu->r[14] = 0x00187528u; fn_00135cf4(cpu);
    }
L_00187528:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018752c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018760c;
        }
    }
L_00187530:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00187534:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00187538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018754c;
        }
    }
L_0018753c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00187540:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187544:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00187548:;
    {
        cpu->r[14] = 0x0018754cu; fn_0012f12c(cpu);
    }
L_0018754c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187550:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00187554:;
    {
        cpu->r[14] = 0x00187558u; fn_0012e824(cpu);
    }
L_00187558:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018755c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001875f8;
        }
    }
L_00187564:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187568:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018756c:;
    {
        cpu->r[14] = 0x00187570u; fn_0012e1c8(cpu);
    }
L_00187570:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_00187574:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_00187578:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0018757c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00187580:;
    {
        cpu->r[14] = 0x00187584u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00187584:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187588:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_0018758c:;
    {
        cpu->r[14] = 0x00187590u; fn_0012e124(cpu);
    }
L_00187590:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187594:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00187598:;
    {
        cpu->r[14] = 0x0018759cu; fn_0012e150(cpu);
    }
L_0018759c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc8u);
    }
L_001875a0:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001875a4:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_001875a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001875ac:;
    {
        cpu->r[2] = 0x00000014u;
    }
L_001875b0:;
    {
        cpu->r[14] = 0x001875b4u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_001875b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001875b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001875bc:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001875c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001875c4:;
    {
        cpu->r[14] = 0x001875c8u; imp_glDrawArrays(cpu); /* glDrawArrays */
    }
L_001875c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001875cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001875d0:;
    {
        cpu->r[14] = 0x001875d4u; fn_0012e1c8(cpu);
    }
L_001875d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001875d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001875dc:;
    {
        cpu->r[14] = 0x001875e0u; fn_0012e19c(cpu);
    }
L_001875e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001875e4:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_001875e8:;
    {
        cpu->r[14] = 0x001875ecu; fn_0012e124(cpu);
    }
L_001875ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001875f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001875f4:;
    {
        cpu->r[14] = 0x001875f8u; fn_0012e150(cpu);
    }
L_001875f8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001875fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001876a0;
        }
    }
L_00187600:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xe0u);
    }
L_00187604:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00187608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018761c;
        }
    }
L_0018760c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00187610:;
    {
        cpu->r[14] = 0x00187614u; fn_000b2bc8(cpu);
    }
L_00187614:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00187618:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018761cu)) return;
    }
L_0018761c:;
    {
        cpu->r[3] = rd32(0x00187624u + + 0xccu);
    }
L_00187620:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00187624:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xf4u);
    }
L_00187628:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0018762c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00187630:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_00187634:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187638:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_0018763c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00187640:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00187644:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001876a0;
        }
    }
L_00187648:;
    {
        cpu->r[0] = 0x00000370u;
    }
L_0018764c:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_00187650:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_00187654:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd8u);
    }
L_00187658:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[3] = v;
    }
L_0018765c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00187660:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00187664:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[3], 1, 0);
    }
L_00187668:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0018766c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001876a0;
        }
    }
L_00187670:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00187674:;
    {
        cpu->r[1] = 0x00000063u;
    }
L_00187678:;
    {
        cpu->r[14] = 0x0018767cu; fn_000964c8(cpu);
    }
L_0018767c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_00187680:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001876c8;
        }
    }
L_00187684:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00187688:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001876a0;
        }
    }
L_0018768c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187690:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00187694:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00187698:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_0018769c:;
    {
        cpu->r[14] = 0x001876a0u; fn_000b9cf0(cpu);
    }
L_001876a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001876a4:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_001876a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001876ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001876b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001876b4:;
    {
        cpu->r[14] = 0x001876bcu;
    }
L_001876b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001876bcu)) return;
    }
L_001876bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001876c0:;
    {
        cpu->r[14] = 0x001876c4u; fn_000b2bc8(cpu);
    }
L_001876c4:;
    {
        goto L_00187614;
    }
L_001876c8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001876cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001876d0:;
    {
        cpu->r[14] = 0x001876d4u; fn_000b9cf0(cpu);
    }
L_001876d4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001876d8:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_001876dc:;
    {
        goto L_001876a0;
    }
}

/* _ZN16CMoneyQueue_Item11StartMotionEi @ 001876f4 (arm) */
void fn_001876f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001876f4:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_001876f8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_001876fc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00187700:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00187704:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00187708:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16CMoneyQueue_Item3SetEii @ 0018770c (arm) */
void fn_0018770c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018770c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00187710:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00187714:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00187718:;
    {
        cpu->r[5] = rd32(0x00187720u + + 0x80u);
    }
L_0018771c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187720:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00187724:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018772cu, cpu->r[5], 0, 0);
    }
L_00187728:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018772c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187770;
        }
    }
L_00187730:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00187734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187748;
        }
    }
L_00187738:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0018773c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00187740:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00187744:;
    {
        cpu->r[14] = 0x00187748u; fn_001876f4(cpu);
    }
L_00187748:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0018774c:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00187750:;
    {
        cpu->r[3] = 0x00000073u;
    }
L_00187754:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00187758:;
    {
        cpu->r[3] = rd32(0x00187760u + + 0x44u);
    }
L_0018775c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00187760:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187764:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000004au, 1, 0);
    }
L_00187768:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0018776c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187770u)) return;
    }
L_00187770:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_00187774:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00187778:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018777c:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00187780:;
    {
        cpu->r[3] = 0x0000005au;
    }
L_00187784:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00187788:;
    {
        cpu->r[3] = rd32(0x00187790u + + 0x14u);
    }
L_0018778c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00187790:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187794:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000004au, 1, 0);
    }
L_00187798:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0018779c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001877a0u)) return;
    }
}

/* _ZN16CMoneyQueue_Item6UpdateEv @ 001877a8 (arm) */
void fn_001877a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001877a8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001877ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001877b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001877f4;
        }
    }
L_001877b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_001877b8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001877bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001877c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001877c4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001877c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001877cc:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001877d0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x1cu);
    }
L_001877d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001877d8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_001877dc:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001877e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001877e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001877e8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001877ec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_001877f0:;
    {
        return fn_0018770c(cpu);
    }
L_001877f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001877f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001877fc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00187800:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00187804:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000002u;
        }
    }
L_00187808:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_0018780c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueueD2Ev @ 00187810 (arm) */
void fn_00187810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187810:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00187814:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00187818:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueueD1Ev @ 0018781c (arm) */
void fn_0018781c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018781c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00187820:;
    {
        wr32(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00187824:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueue5ResetEv @ 00187828 (arm) */
void fn_00187828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187828:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018782c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00187830:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00187834:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00187838:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0018783c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueue17GetCompleteAmountEv @ 00187840 (arm) */
void fn_00187840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187840:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00187844:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_00187848:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0018784c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00187850:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00187854:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018788c;
        }
    }
L_00187858:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x8u);
    }
L_0018785c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187860:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00187864:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00187868:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0018786c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
    }
L_00187870:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00187874:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_00187878:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018787c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_00187880:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_00187884:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00187888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187860;
        }
    }
L_0018788c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00187890:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueue16GetCurrentAmountEv @ 00187894 (arm) */
void fn_00187894(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187894:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00187898:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueue4PullEv @ 0018789c (arm) */
void fn_0018789c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018789c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_001878a0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001878a4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001878a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001878ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001878b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001878e0;
        }
    }
L_001878b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001878b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001878bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001878c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_001878c4:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[1] = v;
    }
L_001878c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001878cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001878d0:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_001878d4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_001878d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001878dc:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_001878e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001878e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CMoneyQueue4PushEii @ 001878e8 (arm) */
void fn_001878e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001878e8:;
    {
        cpu->r[3] = rd32(0x001878f0u + + 0x144u);
    }
L_001878ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001878f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001878f4:;
    {
        cpu->r[0] = rd32(0x001878fcu + + 0x13cu);
    }
L_001878f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187900u, cpu->r[3], 0, 0);
    }
L_001878fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00187900:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00187904:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00187908:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0018790c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00187910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001879b0;
        }
    }
L_00187918:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018791c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001879b8;
        }
    }
L_00187920:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00187924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187980;
        }
    }
L_0018792c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_00187930:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00187934:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00187938:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 31u, &shc); cpu->r[0] = v;
    }
L_0018793c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00187940:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[12] = v;
    }
L_00187944:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00187948:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[6] = v;
    }
L_0018794c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00187950:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00187954:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_00187958:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018795c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00187978;
        }
    }
L_00187960:;
    {
        cpu->r[5] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 4u, &shc));
    }
L_00187964:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_00187968:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
        }
    }
L_0018796c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187a0c;
        }
    }
L_00187970:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_00187974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001879f8;
        }
    }
L_00187978:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0018797c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001879c0;
        }
    }
L_00187980:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00187984:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00187988:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 31u, &shc); cpu->r[0] = v;
    }
L_0018798c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00187990:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_00187994:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00187998:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 5u, &shc), 0, 0);
    }
L_0018799c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001879a0:;
    {
        cpu->r[14] = 0x001879a4u; fn_0018770c(cpu);
    }
L_001879a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001879a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001879ac:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001879b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001879b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001879b8u)) return;
    }
L_001879b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001879bc:;
    {
        goto L_00187978;
    }
L_001879c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001879c4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_001879c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001879cc:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001879d0:;
    {
        cpu->r[14] = 0x001879d4u; fn_0018789c(cpu);
    }
L_001879d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001879d8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001879dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001879e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001879e4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001879e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001879ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001879f0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
        }
    }
L_001879f4:;
    {
        goto L_00187980;
    }
L_001879f8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_001879fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00187a00:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x2cu);
    }
L_00187a04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00187a08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187978;
        }
    }
L_00187a0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00187a10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00187a14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00187a18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187978;
        }
    }
L_00187a1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00187a20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00187a24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_00187a28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00187a2c:;
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
L_00187a30:;
    {
        return fn_0018770c(cpu);
    }
}

/* _ZN11CMoneyQueueC1Ev @ 00187a3c (arm) */
void fn_00187a3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187a3c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00187a40:;
    {
        cpu->r[4] = rd32(0x00187a48u + + 0xe8u);
    }
L_00187a44:;
    {
        cpu->r[3] = rd32(0x00187a4cu + + 0xe8u);
    }
L_00187a48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00187a4c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00187a54u, cpu->r[4], 0, 0);
    }
L_00187a50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00187a54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187a58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187a5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187a60:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_00187a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187af8;
        }
    }
L_00187a68:;
    {
        cpu->r[3] = rd32(0x00187a70u + + 0xc8u);
    }
L_00187a6c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187a70:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00187a74:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00187a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187ab4;
        }
    }
L_00187a7c:;
    {
        cpu->r[6] = rd32(0x00187a84u + + 0xb8u);
    }
L_00187a80:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_00187a84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_00187a88:;
    {
        cpu->r[14] = 0x00187a8cu; fn_00096a08(cpu);
    }
L_00187a8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00187a90:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00187a94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00187a98:;
    {
        cpu->r[14] = 0x00187a9cu; fn_0018aa44(cpu);
    }
L_00187a9c:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_00187aa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00187aa4:;
    {
        cpu->r[14] = 0x00187aa8u; fn_00187828(cpu);
    }
L_00187aa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00187aac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00187ab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187ab4u)) return;
    }
L_00187ab4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187ab8:;
    {
        cpu->r[14] = 0x00187abcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00187abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187a7c;
        }
    }
L_00187ac4:;
    {
        cpu->r[6] = rd32(0x00187accu + + 0x70u);
    }
L_00187ac8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00187acc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00187ad0:;
    {
        cpu->r[14] = 0x00187ad4u; fn_0018aa20(cpu);
    }
L_00187ad4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187ad8:;
    {
        cpu->r[14] = 0x00187adcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00187adc:;
    {
        cpu->r[3] = rd32(0x00187ae4u + + 0x5cu);
    }
L_00187ae0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00187ae4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187ae8:;
    {
        cpu->r[3] = rd32(0x00187af0u + + 0x54u);
    }
L_00187aec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187af0:;
    {
        cpu->r[14] = 0x00187af4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00187af4:;
    {
        goto L_00187a80;
    }
L_00187af8:;
    {
        cpu->r[1] = rd32(0x00187b00u + + 0x48u);
    }
L_00187afc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00187b00:;
    {
        cpu->r[2] = rd32(0x00187b08u + + 0x44u);
    }
L_00187b04:;
    {
        cpu->r[14] = 0x00000098u;
    }
L_00187b08:;
    {
        cpu->r[3] = rd32(0x00187b10u + + 0x40u);
    }
L_00187b0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187b14u, cpu->r[1], 0, 0);
    }
L_00187b10:;
    {
        cpu->r[12] = rd32(0x00187b18u + + 0x3cu);
    }
L_00187b14:;
    {
        cpu->r[2] = add_flags(cpu, 0x00187b1cu, cpu->r[2], 0, 0);
    }
L_00187b18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187b20u, cpu->r[3], 0, 0);
    }
L_00187b1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00187b20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00187b28u, cpu->r[12], 0, 0);
    }
L_00187b24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00187b28:;
    {
        cpu->r[14] = 0x00187b2cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00187b2c:;
    {
        goto L_00187a68;
    }
}

/* _ZN16CMoneyQueue_Item4DrawEP6Sprite @ 00187b58 (arm) */
void fn_00187b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187b58:;
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
L_00187b5c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x10u);
    }
L_00187b60:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x14u);
    }
L_00187b64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187b68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_00187b6c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00187b70:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_00187b74:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_00187b78:;
    {
        cpu->r[14] = 0x00187b7cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00187b7c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_00187b80:;
    {
        cpu->r[5] = rd32(0x00187b88u + + 0x10cu);
    }
L_00187b84:;
    {
        cpu->r[2] = rd32(0x00187b8cu + + 0x10cu);
    }
L_00187b88:;
    {
        cpu->r[5] = add_flags(cpu, 0x00187b90u, cpu->r[5], 0, 0);
    }
L_00187b8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00187b90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_00187b94:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_00187b98:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_00187b9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000009u, 0, 0);
    }
L_00187ba0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000020u, 1, 1);
    }
L_00187ba4:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_00187ba8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000007u;
        }
    }
L_00187bac:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
        }
    }
L_00187bb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187bb4:;
    {
        cpu->r[3] = rd32(0x00187bbcu + + 0xe0u);
    }
L_00187bb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = sub_flags(cpu, 0x00000007u, cpu->r[6], 1, 0);
        }
    }
L_00187bbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00187bc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187bc4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00187bc8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00187c60;
        }
    }
L_00187bcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00187bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187bd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00187c68;
        }
    }
L_00187bd8:;
    {
        cpu->r[1] = rd32(0x00187be0u + + 0xc0u);
    }
L_00187bdc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00187be0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187be4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187becu, cpu->r[1], 0, 0);
    }
L_00187be8:;
    {
        cpu->r[14] = 0x00187becu; fn_000ae830(cpu);
    }
L_00187bec:;
    {
        cpu->r[0] = rd32(0x00187bf4u + + 0xb0u);
    }
L_00187bf0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00187bf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00187bf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_00187bfc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00187c00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00187c04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_00187c08:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00187c0c:;
    {
        cpu->r[14] = 0x00187c10u; fn_000f3d88(cpu);
    }
L_00187c10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00187c14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00187c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187c80;
        }
    }
L_00187c1c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00187c20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00187c24:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00187c28:;
    {
        cpu->r[0] = 0x000000ffu;
    }
L_00187c2c:;
    {
        cpu->r[12] = 0x00000007u;
    }
L_00187c30:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00187c34:;
    {
        cpu->r[14] = 0x00187c38u; fn_0017fb58(cpu);
    }
L_00187c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00187c3c:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00187c40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00187c44:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00187c48:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_00187c4c:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00187c50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187c54:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_00187c58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00187c5c:;
    {
        cpu->r[14] = 0x00187c60u; fn_000ad19c(cpu);
    }
L_00187c60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00187c64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187c68u)) return;
    }
L_00187c68:;
    {
        cpu->r[1] = rd32(0x00187c70u + + 0x38u);
    }
L_00187c6c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00187c70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187c74:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187c7cu, cpu->r[1], 0, 0);
    }
L_00187c78:;
    {
        cpu->r[14] = 0x00187c7cu; fn_000ae830(cpu);
    }
L_00187c7c:;
    {
        goto L_00187bec;
    }
L_00187c80:;
    {
        cpu->r[1] = rd32(0x00187c88u + + 0x24u);
    }
L_00187c84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187c88:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187c90u, cpu->r[1], 0, 0);
    }
L_00187c8c:;
    {
        cpu->r[14] = 0x00187c90u; fn_000ae248(cpu);
    }
L_00187c90:;
    {
        goto L_00187c1c;
    }
}

/* _ZN11CMoneyQueue6UpdateEv @ 00187cb0 (arm) */
void fn_00187cb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187cb0:;
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
L_00187cb4:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_00187cb8:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0xcu);
    }
L_00187cbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_00187cc0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00187cc4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00187cc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
        }
    }
L_00187ccc:;
    {
        cpu->r[1] = rd32(0x00187cd4u + + 0x230u);
    }
L_00187cd0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0], cpu->r[6]);
        }
    }
L_00187cd4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00187cd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187ce0u, cpu->r[1], 0, 0);
    }
L_00187cdc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00187ce0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00187ce4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00187ce8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00187e04;
        }
    }
L_00187cec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187cf0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00187cf4:;
    {
        cpu->r[3] = rd32(0x00187cfcu + + 0x20cu);
    }
L_00187cf8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000073u, 0, 0);
    }
L_00187cfc:;
    {
        cpu->r[1] = rd32(0x00187d04u + + 0x208u);
    }
L_00187d00:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00187d04:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187d0cu, cpu->r[3], 0, 0);
    }
L_00187d08:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00187d0c:;
    {
        cpu->r[3] = rd32(0x00187d14u + + 0x1fcu);
    }
L_00187d10:;
    {
        cpu->r[2] = rd32(0x00187d18u + + 0x1fcu);
    }
L_00187d14:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187d1cu, cpu->r[3], 0, 0);
    }
L_00187d18:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00187d1c:;
    {
        cpu->r[3] = rd32(0x00187d24u + + 0x1f4u);
    }
L_00187d20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00187d24:;
    {
        cpu->r[3] = add_flags(cpu, 0x00187d2cu, cpu->r[3], 0, 0);
    }
L_00187d28:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00187d2c:;
    {
        cpu->r[3] = rd32(0x00187d34u + + 0x1e8u);
    }
L_00187d30:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00187d34:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00187d38:;
    {
        goto L_00187d80;
    }
L_00187d3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00187d40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187e14;
        }
    }
L_00187d44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00187d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187e1c;
        }
    }
L_00187d4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00187d50:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x4u);
    }
L_00187d54:;
    {
        cpu->r[14] = 0x00187d58u; fn_0018789c(cpu);
    }
L_00187d58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_00187d5c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00187d60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187d64:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00187d68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00187d6c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
        }
    }
L_00187d70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00187d74:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00187d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187df8;
        }
    }
L_00187d7c:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00187d80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00187d84:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00187d88:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00187d8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_00187d90:;
    {
        uint32_t v = cpu->r[9] & 0x00000001u; cpu->r[9] = v;
    }
L_00187d94:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00187d98:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[11] = v;
    }
L_00187d9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00187da0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_00187da4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187da8:;
    {
        cpu->r[14] = 0x00187dacu; fn_001877a8(cpu);
    }
L_00187dac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 4u, &shc));
    }
L_00187db0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00187db4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187d3c;
        }
    }
L_00187db8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187dbc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00187dc0:;
    {
        cpu->r[14] = 0x00187dc4u; fn_001876f4(cpu);
    }
L_00187dc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00187dc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187e14;
        }
    }
L_00187dd0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00187dd4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000009u, 0, 0);
    }
L_00187dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000009u, 0, 0);
    }
L_00187ddc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00187de0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187de4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_00187de8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00187dec:;
    {
        cpu->r[14] = 0x00187df0u; fn_00187b58(cpu);
    }
L_00187df0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00187df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187d7c;
        }
    }
L_00187df8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00187dfc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00187e00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00187e0c;
        }
    }
L_00187e04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00187e08:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00187e0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00187e10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187e14u)) return;
    }
L_00187e14:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00187e18:;
    {
        goto L_00187de0;
    }
L_00187e1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00187e20:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000009u, 0, 0);
    }
L_00187e24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00187e28:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00187e2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187e30:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00187e34:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[9], 2, 5u, &shc); cpu->r[9] = v;
        }
    }
L_00187e38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00187ed4;
        }
    }
L_00187e3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00187e40:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 4u, &shc), 0, 0);
    }
L_00187e44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00187e48:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 5u, &shc); cpu->r[9] = v;
    }
L_00187e4c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00187e50:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x4u);
    }
L_00187e54:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00187e58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187e5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00187e60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187e64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_00187e68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00187e6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_00187e70:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00187e74:;
    {
        cpu->r[14] = 0x00187e78u; fn_000ae830(cpu);
    }
L_00187e78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00187e7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00187e80:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x14u);
    }
L_00187e84:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00187e88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00187e8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_00187e90:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00187e94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00187e98:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00187e9c:;
    {
        cpu->r[14] = 0x00187ea0u; fn_000f3d88(cpu);
    }
L_00187ea0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_00187ea4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00187ea8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00187eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187ef4;
        }
    }
L_00187eb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_00187eb4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00187eb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00187ebc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00187ec0:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00187ec4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00187ec8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00187ecc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00187ed0:;
    {
        cpu->r[14] = 0x00187ed4u; fn_000ad19c(cpu);
    }
L_00187ed4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_00187ed8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00187edc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x28u);
    }
L_00187ee0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00187ee4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00187ee8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000006u, 0, 0);
    }
L_00187eec:;
    {
        wr32(cpu->r[9] + + 0x28u, cpu->r[3]);
    }
L_00187ef0:;
    {
        goto L_00187d70;
    }
L_00187ef4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00187ef8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00187efc:;
    {
        cpu->r[14] = 0x00187f00u; fn_000ae248(cpu);
    }
L_00187f00:;
    {
        goto L_00187eb0;
    }
}

/* _ZN11CMoneyQueueC2Ev @ 00187f20 (arm) */
void fn_00187f20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00187f20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00187f24:;
    {
        cpu->r[4] = rd32(0x00187f2cu + + 0xe8u);
    }
L_00187f28:;
    {
        cpu->r[3] = rd32(0x00187f30u + + 0xe8u);
    }
L_00187f2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00187f30:;
    {
        cpu->r[4] = add_flags(cpu, 0x00187f38u, cpu->r[4], 0, 0);
    }
L_00187f34:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00187f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00187f40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00187f44:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
    }
L_00187f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187fdc;
        }
    }
L_00187f4c:;
    {
        cpu->r[3] = rd32(0x00187f54u + + 0xc8u);
    }
L_00187f50:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187f54:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00187f58:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00187f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187f98;
        }
    }
L_00187f60:;
    {
        cpu->r[6] = rd32(0x00187f68u + + 0xb8u);
    }
L_00187f64:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_00187f68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x54u);
    }
L_00187f6c:;
    {
        cpu->r[14] = 0x00187f70u; fn_00096a08(cpu);
    }
L_00187f70:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00187f74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00187f78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00187f7c:;
    {
        cpu->r[14] = 0x00187f80u; fn_0018aa44(cpu);
    }
L_00187f80:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[0]);
    }
L_00187f84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00187f88:;
    {
        cpu->r[14] = 0x00187f8cu; fn_00187828(cpu);
    }
L_00187f8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00187f90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00187f94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00187f98u)) return;
    }
L_00187f98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187f9c:;
    {
        cpu->r[14] = 0x00187fa0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00187fa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00187fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00187f60;
        }
    }
L_00187fa8:;
    {
        cpu->r[6] = rd32(0x00187fb0u + + 0x70u);
    }
L_00187fac:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00187fb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00187fb4:;
    {
        cpu->r[14] = 0x00187fb8u; fn_0018aa20(cpu);
    }
L_00187fb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00187fbc:;
    {
        cpu->r[14] = 0x00187fc0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00187fc0:;
    {
        cpu->r[3] = rd32(0x00187fc8u + + 0x5cu);
    }
L_00187fc4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00187fc8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187fcc:;
    {
        cpu->r[3] = rd32(0x00187fd4u + + 0x54u);
    }
L_00187fd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00187fd4:;
    {
        cpu->r[14] = 0x00187fd8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00187fd8:;
    {
        goto L_00187f64;
    }
L_00187fdc:;
    {
        cpu->r[1] = rd32(0x00187fe4u + + 0x48u);
    }
L_00187fe0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00187fe4:;
    {
        cpu->r[2] = rd32(0x00187fecu + + 0x44u);
    }
L_00187fe8:;
    {
        cpu->r[14] = 0x00000098u;
    }
L_00187fec:;
    {
        cpu->r[3] = rd32(0x00187ff4u + + 0x40u);
    }
L_00187ff0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00187ff8u, cpu->r[1], 0, 0);
    }
L_00187ff4:;
    {
        cpu->r[12] = rd32(0x00187ffcu + + 0x3cu);
    }
L_00187ff8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00188000u, cpu->r[2], 0, 0);
    }
L_00187ffc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00188004u, cpu->r[3], 0, 0);
    }
L_00188000:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00188004:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018800cu, cpu->r[12], 0, 0);
    }
L_00188008:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018800c:;
    {
        cpu->r[14] = 0x00188010u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00188010:;
    {
        goto L_00187f4c;
    }
}

/* _ZN11PointSystemD2Ev @ 0018803c (arm) */
void fn_0018803c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018803c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188040:;
    {
        wr32(cpu->r[0] + + 0x6c4u, cpu->r[2]);
    }
L_00188044:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystemD1Ev @ 00188048 (arm) */
void fn_00188048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188048:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018804c:;
    {
        wr32(cpu->r[0] + + 0x6c4u, cpu->r[2]);
    }
L_00188050:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem15ChangeEventTextENS_14SActionMessageENS_6EEventE @ 00188054 (arm) */
void fn_00188054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188054:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00188058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0018805c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_00188060:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00188064:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem28GetCrimePointsInCurrentLevelERK4CCar @ 00188068 (arm) */
void fn_00188068(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188068:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_0018806c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00188070:;
    {
        cpu->r[2] = 0x00008548u;
    }
L_00188074:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00188078:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0018807c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00188080:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000007bu, 0, 0);
        }
    }
L_00188084:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00001d08u;
        }
    }
L_00188088:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_0018808c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[2] = 0x00001d08u;
        }
    }
L_00188090:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_00188094:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_00188098:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_0018809c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem31GetMaxCrimePointsInCurrentLevelERK4CCar @ 001880a0 (arm) */
void fn_001880a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001880a0:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_001880a4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_001880a8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001880ac:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_001880b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001880b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000004u;
        }
    }
L_001880b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001880bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000007cu, 0, 0);
    }
L_001880c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001880c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem20GetActionMessageTextENS_6EEventE @ 001880c8 (arm) */
void fn_001880c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001880c8:;
    {
        cpu->r[3] = rd32(0x001880d0u + + 0x14u);
    }
L_001880cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001880d0:;
    {
        cpu->r[2] = rd32(0x001880d8u + + 0x10u);
    }
L_001880d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001880dcu, cpu->r[3], 0, 0);
    }
L_001880d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001880dc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001880e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem19GetEventMessageTextENS_10EEventTypeE @ 001880ec (arm) */
void fn_001880ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001880ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_001880f0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001880f4:;
    {
        if (cond_test(cpu, 9)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001880f8:;
    {
        cpu->r[3] = rd32(0x00188100u + + 0x8u);
    }
L_001880fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00188104u, cpu->r[3], 0, 0);
    }
L_00188100:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00188104:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem22ResetTimeExpMultiplierEi @ 0018810c (arm) */
void fn_0018810c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018810c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00188110:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00188114:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00188118:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0018811c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00188120:;
    {
        wr8(cpu->r[2] + + 0x208u, cpu->r[12]);
    }
L_00188124:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001388u;
        }
    }
L_00188128:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x20cu, cpu->r[2]);
        }
    }
L_0018812c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188144;
        }
    }
L_00188130:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001cu, 1, 1);
    }
L_00188134:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001388u;
        }
    }
L_00188138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = (~0x00000000u);
        }
    }
L_0018813c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x35cu, cpu->r[2]);
        }
    }
L_00188140:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + + 0x20cu, cpu->r[12]);
        }
    }
L_00188144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00188148:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018814c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00188150:;
    {
        wr32(cpu->r[0] + + 0x210u, cpu->r[3]);
    }
L_00188154:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem23ResetTimeExpMultipliersEv @ 00188158 (arm) */
void fn_00188158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188158:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018815c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00188160:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00188164:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00188168:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018816c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00188170:;
    {
        cpu->r[14] = 0x00188174u; fn_0018810c(cpu);
    }
L_00188174:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_00188178:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188164;
        }
    }
L_0018817c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188180u)) return;
    }
}

/* _ZN11PointSystem11ClearEventsEv @ 00188180 (arm) */
void fn_00188180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188180:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188184:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00188188:;
    {
        wr32(cpu->r[0] + + 0x5e0u, cpu->r[2]);
    }
L_0018818c:;
    {
        wr32(cpu->r[0] + + 0x5d8u, cpu->r[1]);
    }
L_00188190:;
    {
        wr32(cpu->r[0] + + 0x5d4u, cpu->r[2]);
    }
L_00188194:;
    {
        wr8(cpu->r[0] + + 0x5dcu, cpu->r[2]);
    }
L_00188198:;
    {
        return fn_00188158(cpu);
    }
}

/* _ZN11PointSystem9GetPointsEiNS_5ETypeE @ 0018819c (arm) */
void fn_0018819c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018819c:;
    {
        cpu->r[3] = rd32(0x001881a4u + + 0x94u);
    }
L_001881a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001881a4:;
    {
        cpu->r[12] = rd32(0x001881acu + + 0x90u);
    }
L_001881a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001881b0u, cpu->r[3], 0, 0);
    }
L_001881ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001881b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001881b4:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_001881b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188228;
        }
    }
L_001881bc:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x10u);
    }
L_001881c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001881c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188228;
        }
    }
L_001881c8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001881cc:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_001881d0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_001881d4:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001881d8:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001881dc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001881e0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001881e4:;
    {
        cpu->r[4] = 0x000010d0u;
    }
L_001881e8:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001881ec:;
    {
        goto L_00188200;
    }
L_001881f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001881f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_001881f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_001881fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188228;
        }
    }
L_00188200:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x14u);
    }
L_00188204:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_00188208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001881f0;
        }
    }
L_0018820c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x18u);
    }
L_00188210:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00188214:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001881f0;
        }
    }
L_00188218:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0018821c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00188220:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00188224:;
    {
        goto L_00188230;
    }
L_00188228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0018822c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00188230:;
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
L_00188234:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11PointSystem24UpdateTimeExpMultipliersEv @ 00188240 (arm) */
void fn_00188240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188240:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00188244:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00188248:;
    {
        cpu->r[14] = 0x0018824cu; fn_0009b4d0(cpu);
    }
L_0018824c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00188250:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00188254:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20cu);
    }
L_00188258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018825c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00188260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188274;
        }
    }
L_00188264:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x210u);
    }
L_00188268:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0018826c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00188270:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[4] + + 0x208u, cpu->r[12]);
        }
    }
L_00188274:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001fu, 1, 1);
    }
L_00188278:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0018827c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188254;
        }
    }
L_00188280:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00188284u)) return;
    }
}

/* _ZN11PointSystem25MarkTimeExpMultiplierCallEi @ 00188284 (arm) */
void fn_00188284(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188284:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00188288:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018828c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00188290:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20cu);
    }
L_00188294:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00188298:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018829cu)) return;
        }
    }
L_0018829c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x208u);
    }
L_001882a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001882a4:;
    {
        wr8(cpu->r[4] + + 0x208u, cpu->r[3]);
    }
L_001882a8:;
    {
        cpu->r[14] = 0x001882acu; fn_0009b4d0(cpu);
    }
L_001882ac:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[0]);
    }
L_001882b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001882b4u)) return;
    }
}

/* _ZN11PointSystem18UpdatePointMessageEv @ 001882b4 (arm) */
void fn_001882b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001882b4:;
    {
        cpu->r[3] = rd32(0x001882bcu + + 0x218u);
    }
L_001882b8:;
    {
        cpu->r[2] = rd32(0x001882c0u + + 0x218u);
    }
L_001882bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001882c4u, cpu->r[3], 0, 0);
    }
L_001882c0:;
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
L_001882c4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001882c8:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_001882cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001882d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001882d4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001882d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001882dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_001882e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188494;
        }
    }
L_001882e4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_001882e8:;
    {
        cpu->r[5] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_001882ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001882f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188494;
        }
    }
L_001882f4:;
    {
        cpu->r[14] = 0x001882f8u; fn_00188240(cpu);
    }
L_001882f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5e0u);
    }
L_001882fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00188300:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_00188304:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188308:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188494;
        }
    }
L_0018830c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00188310:;
    {
        cpu->r[7] = 0x0000851fu;
    }
L_00188314:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x51ebu << 16);
    }
L_00188318:;
    {
        cpu->r[6] = 0x00000032u;
    }
L_0018831c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[2]; cpu->r[3] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_00188320:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00188324:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[1], 1, 4u, &shc), cpu->r[3], 1, 0);
    }
L_00188328:;
    {
        uint32_t v = cpu->r[2] - cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_0018832c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00188330:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00188334:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00188338:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x384u);
    }
L_0018833c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 1);
    }
L_00188340:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00188494;
        }
    }
L_00188344:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_00188348:;
    {
        cpu->r[10] = 0x00008cb4u;
    }
L_0018834c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00188350:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_00188354:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_00188358:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0018835c:;
    {
        goto L_00188390;
    }
L_00188360:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00188364:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00188368:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[7] * (int64_t)(int32_t)cpu->r[2]; cpu->r[3] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0018836c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00188370:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[3], 1, 0);
    }
L_00188374:;
    {
        uint32_t v = cpu->r[2] - cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_00188378:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0018837c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00188380:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00188384:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x384u);
    }
L_00188388:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001eu, 1, 1);
    }
L_0018838c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001883c0;
        }
    }
L_00188390:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00188394:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00188398:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0018839c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x37cu);
    }
L_001883a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_001883a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001883a8:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[1] + cpu->r[10], cpu->r[12]);
        }
    }
L_001883ac:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_001883b0:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[1] + cpu->r[8], cpu->r[11]);
        }
    }
L_001883b4:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[12]);
        }
    }
L_001883b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001883bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188360;
        }
    }
L_001883c0:;
    {
        cpu->r[6] = 0x0000851fu;
    }
L_001883c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5e0u);
    }
L_001883c8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x51ebu << 16);
    }
L_001883cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001883d0:;
    {
        cpu->r[7] = 0x00000032u;
    }
L_001883d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001883d8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001883dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188408;
        }
    }
L_001883e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001883e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001883e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001883ec:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x5d8u, cpu->r[1]);
        }
    }
L_001883f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001883f4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_001883f8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001883fc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[8], 1, 4u, &shc), cpu->r[12], 1, 0);
    }
L_00188400:;
    {
        uint32_t v = cpu->r[1] - cpu->r[7] * cpu->r[12]; cpu->r[1] = v;
    }
L_00188404:;
    {
        wr32(cpu->r[4] + + 0x5d4u, cpu->r[1]);
    }
L_00188408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018840c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00188410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001883d4;
        }
    }
L_00188414:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_00188418:;
    {
        wr8(cpu->r[4] + + 0x5dcu, cpu->r[0]);
    }
L_0018841c:;
    {
        wr32(cpu->r[4] + + 0x5e0u, cpu->r[2]);
    }
L_00188420:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018849c;
        }
    }
L_00188424:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5e0u);
    }
L_00188428:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000002u, cpu->r[5], 1, 0);
    }
L_0018842c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_00188430:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00188434:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_00188438:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[5];
        }
    }
L_0018843c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00188440:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188494;
        }
    }
L_00188444:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00188448:;
    {
        cpu->r[8] = 0x0000851fu;
    }
L_0018844c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x51ebu << 16);
    }
L_00188450:;
    {
        cpu->r[11] = 0x00000032u;
    }
L_00188454:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_00188458:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0018845c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_00188460:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00188464:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00188468:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_0018846c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00188470:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_00188474:;
    {
        uint32_t v = cpu->r[3] - cpu->r[11] * cpu->r[6]; cpu->r[6] = v;
    }
L_00188478:;
    {
        cpu->r[14] = 0x0018847cu; fn_0009b4d0(cpu);
    }
L_0018847c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_00188480:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00188484:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00188488:;
    {
        wr32(cpu->r[6] + + 0x384u, cpu->r[9]);
    }
L_0018848c:;
    {
        wr32(cpu->r[6] + + 0x380u, cpu->r[0]);
    }
L_00188490:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188458;
        }
    }
L_00188494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00188498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018849cu)) return;
    }
L_0018849c:;
    {
        cpu->r[1] = rd32(0x001884a4u + + 0x38u);
    }
L_001884a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001884a4:;
    {
        cpu->r[12] = rd32(0x001884acu + + 0x34u);
    }
L_001884a8:;
    {
        cpu->r[14] = 0x000001acu;
    }
L_001884ac:;
    {
        cpu->r[2] = rd32(0x001884b4u + + 0x30u);
    }
L_001884b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001884b8u, cpu->r[1], 0, 0);
    }
L_001884b4:;
    {
        cpu->r[3] = rd32(0x001884bcu + + 0x2cu);
    }
L_001884b8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001884c0u, cpu->r[12], 0, 0);
    }
L_001884bc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001884c4u, cpu->r[2], 0, 0);
    }
L_001884c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_001884c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001884ccu, cpu->r[3], 0, 0);
    }
L_001884c8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001884cc:;
    {
        cpu->r[14] = 0x001884d0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001884d0:;
    {
        goto L_00188424;
    }
}

/* _ZN11PointSystem11ManageEventENS_6EEventER4CCari @ 001884ec (arm) */
void fn_001884ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001884ec:;
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
L_001884f0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001884f4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001884f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x5d4u);
    }
L_001884fc:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_00188500:;
    {
        cpu->r[6] = rd32(0x00188508u + + 0x56cu);
    }
L_00188504:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_00188508:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001eu, 1, 1);
    }
L_0018850c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00188510:;
    {
        cpu->r[6] = add_flags(cpu, 0x00188518u, cpu->r[6], 0, 0);
    }
L_00188514:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00188518:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018851c:;
    {
        cpu->r[9] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00188520:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00188808;
        }
    }
L_00188524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_00188528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0018852c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00188530:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188534:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00188538:;
    {
        cpu->r[14] = 0x0018853cu; fn_0015ec14(cpu);
    }
L_0018853c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188540:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00188544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188548:;
    {
        cpu->r[14] = 0x0018854cu; fn_0018819c(cpu);
    }
L_0018854c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188550:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018858c;
        }
    }
L_00188554:;
    {
        cpu->r[10] = rd32(0x0018855cu + + 0x51cu);
    }
L_00188558:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018855c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188560:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00188564:;
    {
        cpu->r[14] = 0x00188568u; fn_000a2a00(cpu);
    }
L_00188568:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_0018856c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00188570:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_00188574:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00188578:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0018857c:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_00188580:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00188584:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00188588:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018858c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188590:;
    {
        cpu->r[14] = 0x00188594u; fn_0015d920(cpu);
    }
L_00188594:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001885b0;
        }
    }
L_0018859c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_001885a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d14u;
        }
    }
L_001885a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_001885a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001885ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_001885b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_001885b4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001885b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001885d0;
        }
    }
L_001885bc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001885c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001885dc;
        }
    }
L_001885c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001885c8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001885cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001885d0u)) return;
    }
L_001885d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x498u);
    }
L_001885d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001885d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001885bc;
        }
    }
L_001885dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001885e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188840;
        }
    }
L_001885e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000011u, 1, 1);
    }
L_001885e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188924;
        }
    }
L_001885ec:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_001885f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001888cc;
        }
    }
L_001885f4:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001au, 1, 1);
    }
L_001885f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188960;
        }
    }
L_001885fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00188600:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], 0x00000016u, 1, 1);
        }
    }
L_00188604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001888a0;
        }
    }
L_00188608:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018860c:;
    {
        cpu->r[10] = rd32(0x00188614u + + 0x464u);
    }
L_00188610:;
    {
        cpu->r[14] = 0x00188614u; fn_000a5c98(cpu);
    }
L_00188614:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188618:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_0018861c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00188620:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00188624:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_00188628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001885c4;
        }
    }
L_0018862c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00188630:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00188634:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00188638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001885c4;
        }
    }
L_0018863c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188640:;
    {
        cpu->r[14] = 0x00188644u; fn_0015d920(cpu);
    }
L_00188644:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001888a8;
        }
    }
L_0018864c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00188650:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
        }
    }
L_00188654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001888c0;
        }
    }
L_00188658:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018865c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188a28;
        }
    }
L_00188660:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00188664:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00188668:;
    {
        cpu->r[3] = 0x0000a414u;
    }
L_0018866c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00188670:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00188674:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x204u);
    }
L_00188678:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0018867c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00188680:;
    {
        cpu->r[14] = 0x00188684u; fn_001878e8(cpu);
    }
L_00188684:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x204u);
    }
L_00188688:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_0018868c:;
    {
        cpu->r[2] = 0x00001cfcu;
    }
L_00188690:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00188694:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00188698:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0018869c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_001886a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00001d00u;
        }
    }
L_001886a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_001886a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[1], 0, 0);
        }
    }
L_001886ac:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[8]);
        }
    }
L_001886b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001886b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001cfcu;
        }
    }
L_001886b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001886bc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_001886c0:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_001886c4:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001886c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001886cc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[8] = v;
        }
    }
L_001886d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188970;
        }
    }
L_001886d4:;
    {
        cpu->r[2] = rd32(0x001886dcu + + 0x3a0u);
    }
L_001886d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000740u, 0, 0);
    }
L_001886dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001886e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001886e4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001886e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001886ec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001886f0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001886f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001886f8:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_001886fc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00188700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001887e0;
        }
    }
L_00188704:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x5e0u);
    }
L_00188708:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0018870c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188780;
        }
    }
L_00188710:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x5d4u);
    }
L_00188714:;
    {
        cpu->r[6] = 0x0000851fu;
    }
L_00188718:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x51ebu << 16);
    }
L_0018871c:;
    {
        cpu->r[8] = 0x00000032u;
    }
L_00188720:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00188724:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00188728:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[3], 1, 0);
    }
L_0018872c:;
    {
        uint32_t v = cpu->r[12] - cpu->r[8] * cpu->r[3]; cpu->r[3] = v;
    }
L_00188730:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00188734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00188738:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x37cu);
    }
L_0018873c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00188740:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00188744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188768;
        }
    }
L_00188748:;
    {
        goto L_001887e0;
    }
L_0018874c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_00188750:;
    {
        uint32_t v = cpu->r[2] - cpu->r[8] * cpu->r[1]; cpu->r[2] = v;
    }
L_00188754:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00188758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018875c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x37cu);
    }
L_00188760:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00188764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001887e0;
        }
    }
L_00188768:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018876c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00188770:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_00188774:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00188778:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0018877c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018874c;
        }
    }
L_00188780:;
    {
        cpu->r[14] = 0x00188784u; fn_0009b4d0(cpu);
    }
L_00188784:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x5e0u);
    }
L_00188788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018878c:;
    {
        wr8(cpu->r[7] + + 0x5dcu, cpu->r[3]);
    }
L_00188790:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 1);
    }
L_00188794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188a60;
        }
    }
L_00188798:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x5d8u);
    }
L_0018879c:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_001887a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_001887a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001887a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001887ac:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001887b0:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[12], 1, 0);
    }
L_001887b4:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_001887b8:;
    {
        uint32_t v = cpu->r[1] - cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_001887bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001887c0:;
    {
        wr32(cpu->r[7] + + 0x5d8u, cpu->r[2]);
    }
L_001887c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001887c8:;
    {
        wr32(cpu->r[2] + + 0x384u, cpu->r[3]);
    }
L_001887cc:;
    {
        wr32(cpu->r[2] + + 0x380u, cpu->r[0]);
    }
L_001887d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5e0u);
    }
L_001887d4:;
    {
        wr32(cpu->r[2] + + 0x37cu, cpu->r[4]);
    }
L_001887d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001887dc:;
    {
        wr32(cpu->r[7] + + 0x5e0u, cpu->r[3]);
    }
L_001887e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001887e4:;
    {
        cpu->r[14] = 0x001887e8u; fn_0015d920(cpu);
    }
L_001887e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001887ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001885c4;
        }
    }
L_001887f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_001887f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d10u;
        }
    }
L_001887f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_001887fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00188800:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_00188804:;
    {
        goto L_001885c4;
    }
L_00188808:;
    {
        cpu->r[1] = rd32(0x00188810u + + 0x270u);
    }
L_0018880c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00188810:;
    {
        cpu->r[12] = rd32(0x00188818u + + 0x26cu);
    }
L_00188814:;
    {
        cpu->r[14] = 0x0000009fu;
    }
L_00188818:;
    {
        cpu->r[2] = rd32(0x00188820u + + 0x268u);
    }
L_0018881c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00188824u, cpu->r[1], 0, 0);
    }
L_00188820:;
    {
        cpu->r[3] = rd32(0x00188828u + + 0x264u);
    }
L_00188824:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018882cu, cpu->r[12], 0, 0);
    }
L_00188828:;
    {
        cpu->r[2] = add_flags(cpu, 0x00188830u, cpu->r[2], 0, 0);
    }
L_0018882c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_00188830:;
    {
        cpu->r[3] = add_flags(cpu, 0x00188838u, cpu->r[3], 0, 0);
    }
L_00188834:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00188838:;
    {
        cpu->r[14] = 0x0018883cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018883c:;
    {
        goto L_00188524;
    }
L_00188840:;
    {
        cpu->r[10] = rd32(0x00188848u + + 0x230u);
    }
L_00188844:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00188848:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0018884c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00188854u + + 0x218u);
    }
L_00188850:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188854:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00188858:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0018885c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00188860:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00188864:;
    {
        cpu->r[2] = 0x000018f8u;
    }
L_00188868:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018886c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00188870:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00188874:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00188878:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018887c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00188880:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00188884:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00188888:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0018888c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00188890:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_00188894:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00188898:;
    {
        cpu->r[14] = 0x0018889cu; fn_0015ec14(cpu);
    }
L_0018889c:;
    {
        goto L_00188614;
    }
L_001888a0:;
    {
        cpu->r[10] = rd32(0x001888a8u + + 0x1d0u);
    }
L_001888a4:;
    {
        goto L_00188614;
    }
L_001888a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001888ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001888b0:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001bu, 1, 1);
    }
L_001888b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001888b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001888bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188658;
        }
    }
L_001888c0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001888c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00188684;
        }
    }
L_001888c8:;
    {
        goto L_0018868c;
    }
L_001888cc:;
    {
        cpu->r[10] = 0x00001c44u;
    }
L_001888d0:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001888d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001888d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001888dc:;
    {
        cpu->r[14] = 0x001888e0u; fn_000a6118(cpu);
    }
L_001888e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001888e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001888e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00188a50;
        }
    }
L_001888ec:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_001888f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001888f4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001888f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001888fc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188900:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00188904:;
    {
        cpu->r[10] = rd32(0x0018890cu + + 0x16cu);
    }
L_00188908:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018890c:;
    {
        cpu->r[14] = 0x00188910u; fn_0018819c(cpu);
    }
L_00188910:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00188914:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00188918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_0018891c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_00188920:;
    {
        goto L_00188614;
    }
L_00188924:;
    {
        cpu->r[3] = rd32(0x0018892cu + + 0x164u);
    }
L_00188928:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018892c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00188930:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00188934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188a00;
        }
    }
L_00188938:;
    {
        cpu->r[10] = rd32(0x00188940u + + 0x154u);
    }
L_0018893c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188940:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_00188944:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00188948:;
    {
        cpu->r[3] = 0x00001cfcu;
    }
L_0018894c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188950:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
        }
    }
L_00188954:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[8], 1, 1u, &shc); cpu->r[8] = v;
        }
    }
L_00188958:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_0018895c:;
    {
        goto L_001885fc;
    }
L_00188960:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00188964:;
    {
        cpu->r[10] = rd32(0x0018896cu + + 0x10cu);
    }
L_00188968:;
    {
        cpu->r[14] = 0x0018896cu; fn_000a5c98(cpu);
    }
L_0018896c:;
    {
        goto L_00188614;
    }
L_00188970:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[8] = v;
    }
L_00188974:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018897c:;
    {
        cpu->r[3] = 0x00001d08u;
    }
L_00188980:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00188984:;
    {
        cpu->r[2] = rd32(cpu->r[9] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_00188988:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018898c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_00188990:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00188994:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_00188998:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[2] = v;
    }
L_0018899c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001889a0:;
    {
        cpu->r[14] = 0x001889a4u; fn_000a2a00(cpu);
    }
L_001889a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001889acu + + 0xc4u);
    }
L_001889a8:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_001889ac:;
    {
        cpu->r[12] = 0x00001d04u;
    }
L_001889b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001889b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001889b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001889bc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001889c0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001889c4:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_001889c8:;
    {
        vfp_vmla(cpu, 17, 16, 15);
    }
L_001889cc:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_001889d0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_001889d4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001889d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001886d4;
        }
    }
L_001889dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000007cu, 0, 0);
    }
L_001889e0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001889e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001889e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001886d4;
        }
    }
L_001889ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001889f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001889f4:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[1]);
    }
L_001889f8:;
    {
        cpu->r[14] = 0x001889fcu; fn_00161950(cpu);
    }
L_001889fc:;
    {
        goto L_001886d4;
    }
L_00188a00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188a04:;
    {
        cpu->r[14] = 0x00188a08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00188a08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188938;
        }
    }
L_00188a10:;
    {
        cpu->r[10] = rd32(0x00188a18u + + 0x7cu);
    }
L_00188a14:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_00188a18:;
    {
        cpu->r[14] = 0x00188a1cu; fn_00094228(cpu);
    }
L_00188a1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188a20:;
    {
        cpu->r[14] = 0x00188a24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00188a24:;
    {
        goto L_0018893c;
    }
L_00188a28:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00188a2c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00188a30:;
    {
        cpu->r[3] = 0x0000a414u;
    }
L_00188a34:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00188a38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00188a3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00188a40:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00188a44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00188a48:;
    {
        cpu->r[14] = 0x00188a4cu; fn_001878e8(cpu);
    }
L_00188a4c:;
    {
        goto L_0018868c;
    }
L_00188a50:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00188a54:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00188a58:;
    {
        cpu->r[14] = 0x00188a5cu; fn_000a5c04(cpu);
    }
L_00188a5c:;
    {
        goto L_001888ec;
    }
L_00188a60:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00188a64:;
    {
        wr8(cpu->r[7] + + 0x5dcu, cpu->r[3]);
    }
L_00188a68:;
    {
        goto L_001887e0;
    }
}

/* _ZN11PointSystemC1Ev @ 00188a98 (arm) */
void fn_00188a98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188a98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00188a9c:;
    {
        cpu->r[5] = rd32(0x00188aa4u + + 0xc8u);
    }
L_00188aa0:;
    {
        cpu->r[2] = rd32(0x00188aa8u + + 0xc8u);
    }
L_00188aa4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00188aa8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00188ab0u, cpu->r[5], 0, 0);
    }
L_00188aac:;
    {
        wr32(cpu->r[0] + + 0x600u, cpu->r[3]);
    }
L_00188ab0:;
    {
        wr32(cpu->r[0] + + 0x5d4u, cpu->r[3]);
    }
L_00188ab4:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_00188ab8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00188abc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00188ac0:;
    {
        wr32(cpu->r[0] + + 0x204u, cpu->r[2]);
    }
L_00188ac4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00188ac8:;
    {
        wr32(cpu->r[0] + + 0x5d8u, cpu->r[2]);
    }
L_00188acc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00188ad0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00188ad4:;
    {
        wr32(cpu->r[0] + + 0x5f0u, cpu->r[1]);
    }
L_00188ad8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00188adc:;
    {
        wr8(cpu->r[0] + + 0x5dcu, cpu->r[3]);
    }
L_00188ae0:;
    {
        wr32(cpu->r[0] + + 0x5e0u, cpu->r[3]);
    }
L_00188ae4:;
    {
        wr32(cpu->r[0] + + 0x5fcu, cpu->r[3]);
    }
L_00188ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188b28;
        }
    }
L_00188aec:;
    {
        cpu->r[6] = rd32(0x00188af4u + + 0x80u);
    }
L_00188af0:;
    {
        cpu->r[3] = rd32(0x00188af8u + + 0x80u);
    }
L_00188af4:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00188af8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188afc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00188b00:;
    {
        cpu->r[14] = 0x00188b04u; fn_00096a08(cpu);
    }
L_00188b04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188b08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00188b0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00188b10:;
    {
        cpu->r[14] = 0x00188b14u; fn_0018aa44(cpu);
    }
L_00188b14:;
    {
        wr32(cpu->r[4] + + 0x6c4u, cpu->r[0]);
    }
L_00188b18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00188b1c:;
    {
        cpu->r[14] = 0x00188b20u; fn_00188180(cpu);
    }
L_00188b20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00188b24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188b28u)) return;
    }
L_00188b28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188b2c:;
    {
        cpu->r[14] = 0x00188b30u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00188b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188aec;
        }
    }
L_00188b38:;
    {
        cpu->r[6] = rd32(0x00188b40u + + 0x34u);
    }
L_00188b3c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00188b40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188b44:;
    {
        cpu->r[14] = 0x00188b48u; fn_0018aa20(cpu);
    }
L_00188b48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188b4c:;
    {
        cpu->r[14] = 0x00188b50u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00188b50:;
    {
        cpu->r[3] = rd32(0x00188b58u + + 0x24u);
    }
L_00188b54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188b58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188b5c:;
    {
        cpu->r[3] = rd32(0x00188b64u + + 0x1cu);
    }
L_00188b60:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188b64:;
    {
        cpu->r[14] = 0x00188b68u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00188b68:;
    {
        goto L_00188af0;
    }
}

/* _ZN11PointSystemC2Ev @ 00188b84 (arm) */
void fn_00188b84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188b84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00188b88:;
    {
        cpu->r[5] = rd32(0x00188b90u + + 0xc8u);
    }
L_00188b8c:;
    {
        cpu->r[2] = rd32(0x00188b94u + + 0xc8u);
    }
L_00188b90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00188b94:;
    {
        cpu->r[5] = add_flags(cpu, 0x00188b9cu, cpu->r[5], 0, 0);
    }
L_00188b98:;
    {
        wr32(cpu->r[0] + + 0x600u, cpu->r[3]);
    }
L_00188b9c:;
    {
        wr32(cpu->r[0] + + 0x5d4u, cpu->r[3]);
    }
L_00188ba0:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_00188ba4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00188ba8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00188bac:;
    {
        wr32(cpu->r[0] + + 0x204u, cpu->r[2]);
    }
L_00188bb0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00188bb4:;
    {
        wr32(cpu->r[0] + + 0x5d8u, cpu->r[2]);
    }
L_00188bb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00188bbc:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00188bc0:;
    {
        wr32(cpu->r[0] + + 0x5f0u, cpu->r[1]);
    }
L_00188bc4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00188bc8:;
    {
        wr8(cpu->r[0] + + 0x5dcu, cpu->r[3]);
    }
L_00188bcc:;
    {
        wr32(cpu->r[0] + + 0x5e0u, cpu->r[3]);
    }
L_00188bd0:;
    {
        wr32(cpu->r[0] + + 0x5fcu, cpu->r[3]);
    }
L_00188bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188c14;
        }
    }
L_00188bd8:;
    {
        cpu->r[6] = rd32(0x00188be0u + + 0x80u);
    }
L_00188bdc:;
    {
        cpu->r[3] = rd32(0x00188be4u + + 0x80u);
    }
L_00188be0:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00188be4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188be8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00188bec:;
    {
        cpu->r[14] = 0x00188bf0u; fn_00096a08(cpu);
    }
L_00188bf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188bf4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00188bf8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00188bfc:;
    {
        cpu->r[14] = 0x00188c00u; fn_0018aa44(cpu);
    }
L_00188c00:;
    {
        wr32(cpu->r[4] + + 0x6c4u, cpu->r[0]);
    }
L_00188c04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00188c08:;
    {
        cpu->r[14] = 0x00188c0cu; fn_00188180(cpu);
    }
L_00188c0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00188c10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188c14u)) return;
    }
L_00188c14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188c18:;
    {
        cpu->r[14] = 0x00188c1cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00188c1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188bd8;
        }
    }
L_00188c24:;
    {
        cpu->r[6] = rd32(0x00188c2cu + + 0x34u);
    }
L_00188c28:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00188c2c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188c30:;
    {
        cpu->r[14] = 0x00188c34u; fn_0018aa20(cpu);
    }
L_00188c34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188c38:;
    {
        cpu->r[14] = 0x00188c3cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00188c3c:;
    {
        cpu->r[3] = rd32(0x00188c44u + + 0x24u);
    }
L_00188c40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188c44:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188c48:;
    {
        cpu->r[3] = rd32(0x00188c50u + + 0x1cu);
    }
L_00188c4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00188c50:;
    {
        cpu->r[14] = 0x00188c54u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00188c54:;
    {
        goto L_00188bdc;
    }
}

/* _ZN11PointSystem11RefreshFontEv @ 00188c70 (arm) */
void fn_00188c70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188c70:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00188c74:;
    {
        cpu->r[4] = rd32(0x00188c7cu + + 0x8cu);
    }
L_00188c78:;
    {
        cpu->r[3] = rd32(0x00188c80u + + 0x8cu);
    }
L_00188c7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00188c80:;
    {
        cpu->r[4] = add_flags(cpu, 0x00188c88u, cpu->r[4], 0, 0);
    }
L_00188c84:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00188c88:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00188c8c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00188c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188cc4;
        }
    }
L_00188c94:;
    {
        cpu->r[5] = rd32(0x00188c9cu + + 0x74u);
    }
L_00188c98:;
    {
        cpu->r[3] = rd32(0x00188ca0u + + 0x74u);
    }
L_00188c9c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00188ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00188ca4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00188ca8:;
    {
        cpu->r[14] = 0x00188cacu; fn_00096a08(cpu);
    }
L_00188cac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188cb0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00188cb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00188cb8:;
    {
        cpu->r[14] = 0x00188cbcu; fn_0018aa44(cpu);
    }
L_00188cbc:;
    {
        wr32(cpu->r[6] + + 0x6c4u, cpu->r[0]);
    }
L_00188cc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188cc4u)) return;
    }
L_00188cc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188cc8:;
    {
        cpu->r[14] = 0x00188cccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00188ccc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188c94;
        }
    }
L_00188cd4:;
    {
        cpu->r[5] = rd32(0x00188cdcu + + 0x34u);
    }
L_00188cd8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00188cdc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188ce0:;
    {
        cpu->r[14] = 0x00188ce4u; fn_0018aa20(cpu);
    }
L_00188ce4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188ce8:;
    {
        cpu->r[14] = 0x00188cecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00188cec:;
    {
        cpu->r[3] = rd32(0x00188cf4u + + 0x24u);
    }
L_00188cf0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00188cf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00188cf8:;
    {
        cpu->r[3] = rd32(0x00188d00u + + 0x1cu);
    }
L_00188cfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00188d00:;
    {
        cpu->r[14] = 0x00188d04u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_00188d04:;
    {
        goto L_00188c98;
    }
}

/* _ZN11PointSystem14GetMoneyRewardENS_6EEventE @ 00188d20 (arm) */
void fn_00188d20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188d20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00188d24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_00188d28:;
    {
        cpu->r[6] = rd32(0x00188d30u + + 0xbcu);
    }
L_00188d2c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00188d30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00188d34:;
    {
        cpu->r[6] = add_flags(cpu, 0x00188d3cu, cpu->r[6], 0, 0);
    }
L_00188d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188d84;
        }
    }
L_00188d3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188d40:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00188d44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188d48:;
    {
        cpu->r[14] = 0x00188d4cu; fn_0018819c(cpu);
    }
L_00188d4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188d50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00188d70;
        }
    }
L_00188d54:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00188d58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188d5c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188d60:;
    {
        cpu->r[14] = 0x00188d64u; fn_0018819c(cpu);
    }
L_00188d64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x204u);
    }
L_00188d68:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_00188d6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188d70u)) return;
    }
L_00188d70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188d74:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00188d78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188d7c:;
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
L_00188d80:;
    {
        return fn_0018819c(cpu);
    }
L_00188d84:;
    {
        cpu->r[3] = rd32(0x00188d8cu + + 0x64u);
    }
L_00188d88:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00188d8c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00188d90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00188d94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188dc4;
        }
    }
L_00188d98:;
    {
        cpu->r[8] = rd32(0x00188da0u + + 0x54u);
    }
L_00188d9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00188da0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_00188da4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00188da8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188d3c;
        }
    }
L_00188dac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00188db0:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_00188db4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00188db8:;
    {
        cpu->r[14] = 0x00188dbcu; fn_0018819c(cpu);
    }
L_00188dbc:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00188dc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188dc4u)) return;
    }
L_00188dc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188dc8:;
    {
        cpu->r[14] = 0x00188dccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00188dcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00188dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188d98;
        }
    }
L_00188dd4:;
    {
        cpu->r[8] = rd32(0x00188ddcu + + 0x18u);
    }
L_00188dd8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00188ddc:;
    {
        cpu->r[14] = 0x00188de0u; fn_00094228(cpu);
    }
L_00188de0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00188de4:;
    {
        cpu->r[14] = 0x00188de8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00188de8:;
    {
        goto L_00188d9c;
    }
}

/* _ZN11PointSystem18GetEventStatisticsENS_10EEventTypeERiS1_ @ 00188df8 (arm) */
void fn_00188df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00188df8:;
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
L_00188dfc:;
    {
        cpu->r[10] = rd32(0x00188e04u + + 0x258u);
    }
L_00188e00:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00188e04:;
    {
        cpu->r[1] = rd32(0x00188e0cu + + 0x254u);
    }
L_00188e08:;
    {
        cpu->r[10] = add_flags(cpu, 0x00188e10u, cpu->r[10], 0, 0);
    }
L_00188e0c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00188e10:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00188e14:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00188e18:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_00188e1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00188e20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00188e24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00188e28:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00188e2c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00188e30:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00188e34:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00188e38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00188e3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00188e40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00188e44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00188e48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00188e4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00188e50:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00188e54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189018;
        }
    }
L_00188e58:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00188e5c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00188e60:;
    {
        cpu->r[3] = rd32(0x00188e68u + + 0x1fcu);
    }
L_00188e64:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00188e68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00001d00u, 0, 0);
    }
L_00188e6c:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_00188e70:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_00188e74:;
    {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00188e78:;
    {
        goto L_00188e90;
    }
L_00188e7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00188e80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00188e84:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001fu, 1, 1);
    }
L_00188e88:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00188e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188f0c;
        }
    }
L_00188e90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_00188e94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00188e98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00188e9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188e7c;
        }
    }
L_00188ea0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00188ea4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00188ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188fd4;
        }
    }
L_00188eac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_00188eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00188f18;
        }
    }
L_00188eb4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00188eb8:;
    {
        cpu->r[11] = 0x00008548u;
    }
L_00188ebc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00188ec0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00188ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00188ec8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00188ecc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00188ed0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[11]);
    }
L_00188ed4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00188ed8:;
    {
        cpu->r[11] = rd32(cpu->r[12]);
    }
L_00188edc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00188ee0:;
    {
        cpu->r[14] = 0x00188ee4u; fn_00188d20(cpu);
    }
L_00188ee4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00188ee8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00188eec:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[11]; cpu->r[11] = v;
    }
L_00188ef0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00188ef4:;
    {
        wr32(cpu->r[12], cpu->r[11]);
    }
L_00188ef8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00188efc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00188f00:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001fu, 1, 1);
    }
L_00188f04:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00188f08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00188e90;
        }
    }
L_00188f0c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00188f10:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00188f14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00188f18u)) return;
    }
L_00188f18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00188f1c:;
    {
        cpu->r[3] = 0x00001d54u;
    }
L_00188f20:;
    {
        cpu->r[14] = 0x00001d40u;
    }
L_00188f24:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_00188f28:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00188f2c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00188f30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00188f34:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_00188f38:;
    {
        cpu->r[14] = 0x00008548u;
    }
L_00188f3c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_00188f40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00188f44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_00188f48:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00188f4c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00188f50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_00188f54:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00188f58:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_00188f5c:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00188f60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_00188f64:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00188f68:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00188f6c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00188f70:;
    {
        cpu->r[14] = 0x00188f74u; fn_00188d20(cpu);
    }
L_00188f74:;
    {
        cpu->r[14] = 0x00008548u;
    }
L_00188f78:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00188f7c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00188f80:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[14]);
    }
L_00188f84:;
    {
        cpu->r[14] = 0x00188f88u; fn_00188d20(cpu);
    }
L_00188f88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00188f8c:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_00188f90:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_00188f94:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00188f98:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00188f9c:;
    {
        cpu->r[14] = 0x00188fa0u; fn_00188d20(cpu);
    }
L_00188fa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00188fa4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00188fa8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00188fac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[11] = v;
    }
L_00188fb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00188fb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00188fb8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[11]; cpu->r[11] = v;
    }
L_00188fbc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00188fc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00188fc4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[11]; cpu->r[11] = v;
    }
L_00188fc8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00188fcc:;
    {
        wr32(cpu->r[12], cpu->r[11]);
    }
L_00188fd0:;
    {
        goto L_00188ef8;
    }
L_00188fd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00188fd8:;
    {
        cpu->r[2] = 0x00008548u;
    }
L_00188fdc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00188fe0:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_00188fe4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00188fe8:;
    {
        cpu->r[11] = rd32(cpu->r[8]);
    }
L_00188fec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00188ff0:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00188ff4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00188ff8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00188ffc:;
    {
        cpu->r[14] = 0x00189000u; fn_00188d20(cpu);
    }
L_00189000:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00189004:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00189008:;
    {
        uint32_t v = cpu->r[11] * cpu->r[0] + cpu->r[3]; cpu->r[11] = v;
    }
L_0018900c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00189010:;
    {
        wr32(cpu->r[12], cpu->r[11]);
    }
L_00189014:;
    {
        goto L_00188ef8;
    }
L_00189018:;
    {
        cpu->r[1] = rd32(0x00189020u + + 0x48u);
    }
L_0018901c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00189020:;
    {
        cpu->r[14] = rd32(0x00189028u + + 0x44u);
    }
L_00189024:;
    {
        cpu->r[6] = 0x000002c9u;
    }
L_00189028:;
    {
        cpu->r[2] = rd32(0x00189030u + + 0x40u);
    }
L_0018902c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00189034u, cpu->r[1], 0, 0);
    }
L_00189030:;
    {
        cpu->r[3] = rd32(0x00189038u + + 0x3cu);
    }
L_00189034:;
    {
        cpu->r[14] = add_flags(cpu, 0x0018903cu, cpu->r[14], 0, 0);
    }
L_00189038:;
    {
        cpu->r[2] = add_flags(cpu, 0x00189040u, cpu->r[2], 0, 0);
    }
L_0018903c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000003cu, 0, 0);
    }
L_00189040:;
    {
        cpu->r[3] = add_flags(cpu, 0x00189048u, cpu->r[3], 0, 0);
    }
L_00189044:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00189048:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_0018904c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00189050:;
    {
        cpu->r[14] = 0x00189054u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00189054:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00189058:;
    {
        goto L_00188e58;
    }
}

/* _ZN11PointSystem18GetEventStatisticsENS_6EEventERiS1_ @ 00189078 (arm) */
void fn_00189078(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189078:;
    {
        cpu->r[3] = rd32(0x00189080u + + 0x194u);
    }
L_0018907c:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_00189080:;
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
L_00189084:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00189088:;
    {
        cpu->r[1] = rd32(0x00189090u + + 0x188u);
    }
L_0018908c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00189094u, cpu->r[3], 0, 0);
    }
L_00189090:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00189094:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_00189098:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0018909c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001890a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001890a4:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_001890a8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001890ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001890b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_001890b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001890b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001890bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001890c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001890c4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_001890c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001890cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001891dc;
        }
    }
L_001890d0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001890d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001891ac;
        }
    }
L_001890d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000009u, 1, 1);
    }
L_001890dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018912c;
        }
    }
L_001890e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000740u, 0, 0);
    }
L_001890e4:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001890e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001890ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001890f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001890f4:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_001890f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001890fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00189100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00189104:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00189108:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018910c:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_00189110:;
    {
        cpu->r[14] = 0x00189114u; fn_00188d20(cpu);
    }
L_00189114:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00189118:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_0018911c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[0] + cpu->r[5]; cpu->r[0] = v;
    }
L_00189120:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_00189124:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00189128:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018912cu)) return;
    }
L_0018912c:;
    {
        cpu->r[3] = 0x00001d3cu;
    }
L_00189130:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00189134:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_00189138:;
    {
        cpu->r[10] = 0x00008548u;
    }
L_0018913c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00189140:;
    {
        cpu->r[3] = 0x00001d40u;
    }
L_00189144:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00189148:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018914c:;
    {
        cpu->r[3] = 0x00001d54u;
    }
L_00189150:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00189154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_00189158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0018915c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00189160:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00189164:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00189168:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0018916c:;
    {
        cpu->r[14] = 0x00189170u; fn_00188d20(cpu);
    }
L_00189170:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00189174:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189178:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0018917c:;
    {
        cpu->r[14] = 0x00189180u; fn_00188d20(cpu);
    }
L_00189180:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_00189184:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00189188:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_0018918c:;
    {
        cpu->r[14] = 0x00189190u; fn_00188d20(cpu);
    }
L_00189190:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00189194:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7]; cpu->r[11] = v;
    }
L_00189198:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6] + cpu->r[11]; cpu->r[9] = v;
    }
L_0018919c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_001891a0:;
    {
        uint32_t v = cpu->r[4] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_001891a4:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001891a8:;
    {
        goto L_00189124;
    }
L_001891ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001891b0:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001891b4:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_001891b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001891bc:;
    {
        cpu->r[4] = rd32(cpu->r[8]);
    }
L_001891c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001891c4:;
    {
        cpu->r[3] = 0x00001d1cu;
    }
L_001891c8:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001891cc:;
    {
        cpu->r[14] = 0x001891d0u; fn_00188d20(cpu);
    }
L_001891d0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0] + cpu->r[4]; cpu->r[0] = v;
    }
L_001891d4:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001891d8:;
    {
        goto L_00189124;
    }
L_001891dc:;
    {
        cpu->r[1] = rd32(0x001891e4u + + 0x38u);
    }
L_001891e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001891e4:;
    {
        cpu->r[12] = rd32(0x001891ecu + + 0x34u);
    }
L_001891e8:;
    {
        cpu->r[14] = 0x00000295u;
    }
L_001891ec:;
    {
        cpu->r[2] = rd32(0x001891f4u + + 0x30u);
    }
L_001891f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001891f8u, cpu->r[1], 0, 0);
    }
L_001891f4:;
    {
        cpu->r[3] = rd32(0x001891fcu + + 0x2cu);
    }
L_001891f8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00189200u, cpu->r[12], 0, 0);
    }
L_001891fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00189204u, cpu->r[2], 0, 0);
    }
L_00189200:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000050u, 0, 0);
    }
L_00189204:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018920cu, cpu->r[3], 0, 0);
    }
L_00189208:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018920c:;
    {
        cpu->r[14] = 0x00189210u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00189210:;
    {
        goto L_001890d0;
    }
}

/* _ZN11PointSystem16DrawPointMessageEv @ 0018922c (arm) */
void fn_0018922c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018922c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6c4u);
    }
L_00189230:;
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
L_00189234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00189238:;
    {
        cpu->r[5] = rd32(0x00189240u + + 0x4b0u);
    }
L_0018923c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002d4u, 1, 0);
    }
L_00189240:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189244:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018924cu, cpu->r[5], 0, 0);
    }
L_00189248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001896b8;
        }
    }
L_0018924c:;
    {
        cpu->r[0] = rd32(0x00189254u + + 0x4a0u);
    }
L_00189250:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_00189254:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00189258:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0018925c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00189260:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00189264:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000cu, 1, 1);
    }
L_00189268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189510;
        }
    }
L_0018926c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00189270:;
    {
        cpu->r[10] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00189274:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00189278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189510;
        }
    }
L_0018927c:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x5e0u);
    }
L_00189280:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00189284:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00189510;
        }
    }
L_00189288:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000002a0u, 0, 0);
    }
L_0018928c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00189290:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00189294:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00189298:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018929c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001892a0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001892a4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001892a8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001892ac:;
    {
        cpu->r[2] = 0x00000258u;
    }
L_001892b0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001892b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001892b8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001892bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_001892c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00000002u;
        }
    }
L_001892c4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_001892c8:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001892cc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001892d0:;
    {
        cpu->r[14] = 0x001892d4u; imp_memset(cpu); /* memset */
    }
L_001892d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001892d8:;
    {
        cpu->r[3] = rd32(0x001892e0u + + 0x418u);
    }
L_001892dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001892e0:;
    {
        cpu->r[1] = rd32(0x001892e8u + + 0x414u);
    }
L_001892e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001892e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001892f0u, cpu->r[3], 0, 0);
    }
L_001892ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001892f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000064u, 0, 0);
    }
L_001892f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001892f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_001892fc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[14]);
    }
L_00189300:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_00189304:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00189308:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_0018930c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00189310:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_00189314:;
    {
        goto L_00189368;
    }
L_00189318:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018931c:;
    {
        cpu->r[11] = 0x00008cb4u;
    }
L_00189320:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00189324:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00189328:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_0018932c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00189330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001895b0;
        }
    }
L_00189334:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_00189338:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0018933c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00189340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189354;
        }
    }
L_00189344:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_00189348:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018934c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00189350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001894e8;
        }
    }
L_00189354:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00189358:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018935c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_00189360:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00189364:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00189510;
        }
    }
L_00189368:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x5d4u);
    }
L_0018936c:;
    {
        cpu->r[4] = 0x0000851fu;
    }
L_00189370:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x51ebu << 16);
    }
L_00189374:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00189378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0018937c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00189380:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[4] * (int64_t)(int32_t)cpu->r[2]; cpu->r[14] = (uint32_t)v; cpu->r[4] = (uint32_t)(v >> 32); }
    }
L_00189384:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00189388:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0018938c:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_00189390:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_00189394:;
    {
        uint32_t v = cpu->r[2] - cpu->r[0] * cpu->r[4]; cpu->r[4] = v;
    }
L_00189398:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0018939c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001893a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001893a4:;
    {
        cpu->r[9] = rd32(cpu->r[11] + + 0x37cu);
    }
L_001893a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_001893ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001893b0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001893b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001893b8:;
    {
        cpu->r[14] = 0x001893bcu; fn_000aeb58(cpu);
    }
L_001893bc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x37cu);
    }
L_001893c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_001893c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001893c8:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001893cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189318;
        }
    }
L_001893d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001893d4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001893d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001893dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001893e0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_001893e4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001893e8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001893ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001893f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001893f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001893f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001893fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00189400:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00189404:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00189408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018967c;
        }
    }
L_0018940c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00189410:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00189414:;
    {
        cpu->r[14] = 0x00189418u; fn_000ae160(cpu);
    }
L_00189418:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018941c:;
    {
        cpu->r[3] = 0x000005ecu;
    }
L_00189420:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00189424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001895ec;
        }
    }
L_00189428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000002ccu, 0, 0);
    }
L_0018942c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000002c8u, 0, 0);
    }
L_00189430:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x6c4u);
    }
L_00189434:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00189438:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018943c:;
    {
        wr32(cpu->r[13] + + 0x2ccu, cpu->r[9]);
    }
L_00189440:;
    {
        wr32(cpu->r[13] + + 0x2c8u, cpu->r[9]);
    }
L_00189444:;
    {
        cpu->r[14] = 0x00189448u; fn_000aa404(cpu);
    }
L_00189448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_0018944c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00189450:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x384u);
    }
L_00189454:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 1);
    }
L_00189458:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00189518;
        }
    }
L_0018945c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2ccu);
    }
L_00189460:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_00189464:;
    {
        cpu->r[3] = 0x0000cccdu;
    }
L_00189468:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xccccu << 16);
    }
L_0018946c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[11] = v;
    }
L_00189470:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00189474:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[11]; cpu->r[0] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00189478:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0018947c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00189480:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_00189484:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 2u, &shc); cpu->r[11] = v;
    }
L_00189488:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0018948c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00189490:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00189494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018955c;
        }
    }
L_00189498:;
    {
        cpu->r[9] = rd32(0x001894a0u + + 0x260u);
    }
L_0018949c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_001894a0:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001894a4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x6c4u);
    }
L_001894a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x0000008cu, 0, 0);
    }
L_001894ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001894b0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001894b4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001894b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001894bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 0);
    }
L_001894c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001894c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_001894c8:;
    {
        cpu->r[14] = 0x001894ccu; fn_000ad19c(cpu);
    }
L_001894cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001894d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001894d4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001894d8:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_001894dc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_001894e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001894e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189354;
        }
    }
L_001894e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001894ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001894f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001894f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_001894f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001894fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_00189500:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x384u);
    }
L_00189504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00189508:;
    {
        wr32(cpu->r[4] + + 0x384u, cpu->r[3]);
    }
L_0018950c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00189368;
        }
    }
L_00189510:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002d4u, 0, 0);
    }
L_00189514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189518u)) return;
    }
L_00189518:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_0018951c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = sub_flags(cpu, 0x00000005u, cpu->r[2], 1, 0);
        }
    }
L_00189520:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x0000cccdu;
        }
    }
L_00189524:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2ccu);
        }
    }
L_00189528:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xccccu << 16);
        }
    }
L_0018952c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[11] = cpu->r[9];
        }
    }
L_00189530:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[11] = v;
        }
    }
L_00189534:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00189538:;
    {
        if (cond_test(cpu, 10)) {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[11]; cpu->r[1] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
        }
    }
L_0018953c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00189540:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00189544:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_00189548:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[11], 3, 2u, &shc); cpu->r[11] = v;
        }
    }
L_0018954c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00189550:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00189554:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00189558:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189498;
        }
    }
L_0018955c:;
    {
        cpu->r[3] = rd32(0x00189564u + + 0x1a0u);
    }
L_00189560:;
    {
        cpu->r[1] = (~0x7f000000u);
    }
L_00189564:;
    {
        cpu->r[9] = rd32(0x0018956cu + + 0x194u);
    }
L_00189568:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018956c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00189570:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00189574:;
    {
        cpu->r[14] = 0x00189578u; fn_0012dd58(cpu);
    }
L_00189578:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0018957c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000008au, 0, 0);
    }
L_00189580:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00189584:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2ccu);
    }
L_00189588:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0018958c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00189590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000006u, 0, 0);
    }
L_00189594:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_00189598:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_0018959c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2c8u);
    }
L_001895a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001895a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001895a8:;
    {
        cpu->r[14] = 0x001895acu; fn_00130908(cpu);
    }
L_001895ac:;
    {
        goto L_0018949c;
    }
L_001895b0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001895b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001895b8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001895bc:;
    {
        cpu->r[14] = 0x001895c0u; fn_00188d20(cpu);
    }
L_001895c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001895c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001895c8:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001895cc:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_001895d0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_001895d4:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_001895d8:;
    {
        wr32(cpu->r[3] + cpu->r[11], cpu->r[1]);
    }
L_001895dc:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[9]);
    }
L_001895e0:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_001895e4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[0]);
    }
L_001895e8:;
    {
        goto L_00189334;
    }
L_001895ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001895f0:;
    {
        cpu->r[12] = 0x0000a418u;
    }
L_001895f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001895f8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_001895fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00189600:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00189604:;
    {
        cpu->r[1] = rd32(0x0018960cu + + 0xfcu);
    }
L_00189608:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_0018960c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189610:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00189614:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00189618:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018961c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00189624u, cpu->r[1], 0, 0);
    }
L_00189620:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_00189624:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00189628:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0018962c:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_00189630:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00189634:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00189638:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_0018963c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00189640:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_00189644:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00189648:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_0018964c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_00189650:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_00189654:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00189658:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_0018965c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_00189660:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_00189664:;
    {
        wr32(cpu->r[14], cpu->r[3]);
    }
L_00189668:;
    {
        cpu->r[14] = 0x0018966cu; fn_000ae830(cpu);
    }
L_0018966c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00189670:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00189674:;
    {
        cpu->r[14] = 0x00189678u; fn_000ae228(cpu);
    }
L_00189678:;
    {
        goto L_00189428;
    }
L_0018967c:;
    {
        cpu->r[3] = 0x000001fcu;
    }
L_00189680:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_00189684:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00189688:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018968c:;
    {
        cpu->r[1] = rd32(0x00189694u + + 0x78u);
    }
L_00189690:;
    {
        cpu->r[2] = rd32(0x00189698u + + 0x78u);
    }
L_00189694:;
    {
        cpu->r[3] = rd32(0x0018969cu + + 0x78u);
    }
L_00189698:;
    {
        cpu->r[1] = add_flags(cpu, 0x001896a0u, cpu->r[1], 0, 0);
    }
L_0018969c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001896a4u, cpu->r[2], 0, 0);
    }
L_001896a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001896a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001896acu, cpu->r[3], 0, 0);
    }
L_001896a8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001896ac:;
    {
        cpu->r[14] = 0x001896b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001896b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001896b4:;
    {
        goto L_0018940c;
    }
L_001896b8:;
    {
        cpu->r[1] = rd32(0x001896c0u + + 0x58u);
    }
L_001896bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001896c0:;
    {
        cpu->r[12] = rd32(0x001896c8u + + 0x54u);
    }
L_001896c4:;
    {
        cpu->r[14] = 0x000001c9u;
    }
L_001896c8:;
    {
        cpu->r[2] = rd32(0x001896d0u + + 0x50u);
    }
L_001896cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001896d4u, cpu->r[1], 0, 0);
    }
L_001896d0:;
    {
        cpu->r[3] = rd32(0x001896d8u + + 0x4cu);
    }
L_001896d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001896dcu, cpu->r[12], 0, 0);
    }
L_001896d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001896e0u, cpu->r[2], 0, 0);
    }
L_001896dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000064u, 0, 0);
    }
L_001896e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001896e8u, cpu->r[3], 0, 0);
    }
L_001896e4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001896e8:;
    {
        cpu->r[14] = 0x001896ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001896ec:;
    {
        goto L_0018924c;
    }
}

/* _ZN12CGamePackage5CloseEi @ 00189728 (arm) */
void fn_00189728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189728:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CGamePackage12SetActiveLibEi @ 0018972c (arm) */
void fn_0018972c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018972c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189730:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x24u);
    }
L_00189734:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189738:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018973c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00189740:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189744u)) return;
        }
    }
L_00189744:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00189748:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000au, 0, 0);
    }
L_0018974c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00189750:;
    {
        cpu->r[14] = 0x00189754u; fn_000fc0ac(cpu);
    }
L_00189754:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00189758:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x0000000au, 0, 0);
    }
L_0018975c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_00189760:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00189764:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_00189768:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018976c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00189770:;
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
L_00189774:;
    {
        return fn_000fc0b4(cpu);
    }
}

/* _ZN12CGamePackage7GetFileEi @ 00189778 (arm) */
void fn_00189778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189778:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018977c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189784:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00189788:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018978c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00189790:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00189794:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189798u)) return;
        }
    }
L_00189798:;
    {
        cpu->r[14] = 0x0018979cu; fn_0018972c(cpu);
    }
L_0018979c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001897a0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001897a4:;
    {
        cpu->r[14] = 0x001897a8u; fn_0018a694(cpu);
    }
L_001897a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001897ac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001897b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001897b4u)) return;
    }
}

/* _ZN12CGamePackage11GetLZMAFileEi @ 001897b4 (arm) */
void fn_001897b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001897b4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001897b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001897bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001897c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001897c4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001897c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001897cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001897d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001897d4u)) return;
        }
    }
L_001897d4:;
    {
        cpu->r[14] = 0x001897d8u; fn_0018972c(cpu);
    }
L_001897d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001897dc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001897e0:;
    {
        cpu->r[14] = 0x001897e4u; fn_0018a694(cpu);
    }
L_001897e4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001897e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001897ec:;
    {
        cpu->r[14] = 0x001897f0u; fn_0018a444(cpu);
    }
L_001897f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001897f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001897f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001897fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189800u)) return;
    }
}

/* _ZN12CGamePackage10GetNewFileEib @ 00189800 (arm) */
void fn_00189800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189800:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00189804:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189808:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018980c:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00189810:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00189814:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00189818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189824;
        }
    }
L_0018981c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00189820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189824u)) return;
    }
L_00189824:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00189828:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0018982c:;
    {
        cpu->r[14] = 0x00189830u; fn_000fc508(cpu);
    }
L_00189830:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189834:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018981c;
        }
    }
L_00189838:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018983c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00189840:;
    {
        cpu->r[14] = 0x00189844u; fn_0018a694(cpu);
    }
L_00189844:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00189848:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018984c:;
    {
        cpu->r[14] = 0x00189850u; fn_000fc0d0(cpu);
    }
L_00189850:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00189854:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189858u)) return;
    }
}

/* _ZN12CGamePackage12GetLibOffsetEi @ 00189858 (arm) */
void fn_00189858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189858:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0018985c:;
    {
        return fn_0018a578(cpu);
    }
}

/* _ZN12CGamePackage17CloseTexturesLZMAEi @ 00189860 (arm) */
void fn_00189860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189860:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00189864:;
    {
        return fn_0018a41c(cpu);
    }
}

/* _ZN12CGamePackage16CloseStringsLZMAEi @ 00189868 (arm) */
void fn_00189868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189868:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018986c:;
    {
        return fn_0018a41c(cpu);
    }
}

/* _ZN12CGamePackage9CloseLZMAEi @ 00189870 (arm) */
void fn_00189870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189870:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00189874:;
    {
        return fn_0018a41c(cpu);
    }
}

/* _ZN12CGamePackage14UnBindTexturesEv @ 00189878 (arm) */
void fn_00189878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189878:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018987c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189880:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00189884:;
    {
        return fn_0018a410(cpu);
    }
}

/* _ZN12CGamePackage13UnBindStringsEv @ 00189888 (arm) */
void fn_00189888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189888:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018988c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189890:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00189894:;
    {
        return fn_0018a410(cpu);
    }
}

/* _ZN12CGamePackage12BindTexturesEv @ 00189898 (arm) */
void fn_00189898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189898:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018989c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001898a0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001898a4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001898a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001898ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001898b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001898b4u)) return;
        }
    }
L_001898b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001898b8:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_001898bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001898c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001898c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001898c8u)) return;
        }
    }
L_001898c8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_001898cc:;
    {
        cpu->r[14] = 0x001898d0u; fn_0018a694(cpu);
    }
L_001898d0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001898d4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001898d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001898dc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001898e0:;
    {
        cpu->r[14] = 0x001898e4u; fn_0018a784(cpu);
    }
L_001898e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001898e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001898ecu)) return;
    }
}

/* _ZN12CGamePackage19GetTexturesLZMAFileEi @ 001898ec (arm) */
void fn_001898ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001898ec:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001898f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001898f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001898f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001898fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00189900:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00189904:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00189908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018990cu)) return;
        }
    }
L_0018990c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00189910:;
    {
        cpu->r[14] = 0x00189914u; fn_0018972c(cpu);
    }
L_00189914:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189918:;
    {
        cpu->r[14] = 0x0018991cu; fn_00189898(cpu);
    }
L_0018991c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00189920:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00189924:;
    {
        cpu->r[14] = 0x00189928u; fn_0018a694(cpu);
    }
L_00189928:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018992c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00189930:;
    {
        cpu->r[14] = 0x00189934u; fn_0018a444(cpu);
    }
L_00189934:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00189938:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018993c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00189940:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189944u)) return;
    }
}

/* _ZN12CGamePackage11BindStringsEv @ 00189944 (arm) */
void fn_00189944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189944:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189948:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018994c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00189950:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00189954:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00189958:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0018995c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189960u)) return;
        }
    }
L_00189960:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00189964:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00189968:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018996c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00189970:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189974u)) return;
        }
    }
L_00189974:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_00189978:;
    {
        cpu->r[14] = 0x0018997cu; fn_0018a694(cpu);
    }
L_0018997c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00189980:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00189984:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00189988:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0018998c:;
    {
        cpu->r[14] = 0x00189990u; fn_0018a784(cpu);
    }
L_00189990:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189994:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189998u)) return;
    }
}

/* _ZN12CGamePackage18GetStringsLZMAFileEi @ 00189998 (arm) */
void fn_00189998(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189998:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018999c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001899a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001899a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001899a8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001899ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001899b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001899b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001899b8u)) return;
        }
    }
L_001899b8:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001899bc:;
    {
        cpu->r[14] = 0x001899c0u; fn_0018972c(cpu);
    }
L_001899c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001899c4:;
    {
        cpu->r[14] = 0x001899c8u; fn_00189944(cpu);
    }
L_001899c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001899cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001899d0:;
    {
        cpu->r[14] = 0x001899d4u; fn_0018a694(cpu);
    }
L_001899d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001899d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001899dc:;
    {
        cpu->r[14] = 0x001899e0u; fn_0018a444(cpu);
    }
L_001899e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001899e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_001899e8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001899ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001899f0u)) return;
    }
}

/* _ZN12CGamePackageD2Ev @ 001899f0 (arm) */
void fn_001899f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001899f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001899f4:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001899f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001899fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189a1c;
        }
    }
L_00189a04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a08:;
    {
        cpu->r[14] = 0x00189a0cu; fn_0018a8cc(cpu);
    }
L_00189a0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a10:;
    {
        cpu->r[14] = 0x00189a14u; fn_0018ba20(cpu);
    }
L_00189a14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189a18:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00189a1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189a20:;
    {
        cpu->r[14] = 0x00189a24u; fn_00189888(cpu);
    }
L_00189a24:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_00189a28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189a48;
        }
    }
L_00189a30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a34:;
    {
        cpu->r[14] = 0x00189a38u; fn_0018a8cc(cpu);
    }
L_00189a38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a3c:;
    {
        cpu->r[14] = 0x00189a40u; fn_0018ba20(cpu);
    }
L_00189a40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189a44:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00189a48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189a4c:;
    {
        cpu->r[14] = 0x00189a50u; fn_00189878(cpu);
    }
L_00189a50:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_00189a54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189a58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189a74;
        }
    }
L_00189a5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a60:;
    {
        cpu->r[14] = 0x00189a64u; fn_0018a8cc(cpu);
    }
L_00189a64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189a68:;
    {
        cpu->r[14] = 0x00189a6cu; fn_0018ba20(cpu);
    }
L_00189a6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189a70:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00189a74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00189a78:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00189a7c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00189a80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189aa0;
        }
    }
L_00189a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189aa0;
        }
    }
L_00189a8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00189a90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00189a94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00189a98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189aa8;
        }
    }
L_00189a9c:;
    {
        cpu->r[14] = 0x00189aa0u; fn_002082a8(cpu);
    }
L_00189aa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189aa4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189aa8u)) return;
    }
L_00189aa8:;
    {
        cpu->r[14] = 0x00189aacu; fn_0018ba20(cpu);
    }
L_00189aac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189ab0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189ab4u)) return;
    }
}

/* _ZN12CGamePackageD1Ev @ 00189ab4 (arm) */
void fn_00189ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189ab4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189ab8:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_00189abc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189ac0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189ac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189ae0;
        }
    }
L_00189ac8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189acc:;
    {
        cpu->r[14] = 0x00189ad0u; fn_0018a8cc(cpu);
    }
L_00189ad0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189ad4:;
    {
        cpu->r[14] = 0x00189ad8u; fn_0018ba20(cpu);
    }
L_00189ad8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189adc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00189ae0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189ae4:;
    {
        cpu->r[14] = 0x00189ae8u; fn_00189888(cpu);
    }
L_00189ae8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_00189aec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189b0c;
        }
    }
L_00189af4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189af8:;
    {
        cpu->r[14] = 0x00189afcu; fn_0018a8cc(cpu);
    }
L_00189afc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189b00:;
    {
        cpu->r[14] = 0x00189b04u; fn_0018ba20(cpu);
    }
L_00189b04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189b08:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00189b0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189b10:;
    {
        cpu->r[14] = 0x00189b14u; fn_00189878(cpu);
    }
L_00189b14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_00189b18:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189b1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189b38;
        }
    }
L_00189b20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189b24:;
    {
        cpu->r[14] = 0x00189b28u; fn_0018a8cc(cpu);
    }
L_00189b28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00189b2c:;
    {
        cpu->r[14] = 0x00189b30u; fn_0018ba20(cpu);
    }
L_00189b30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189b34:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00189b38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00189b3c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00189b40:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00189b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189b64;
        }
    }
L_00189b48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189b64;
        }
    }
L_00189b50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00189b54:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00189b58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00189b5c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189b6c;
        }
    }
L_00189b60:;
    {
        cpu->r[14] = 0x00189b64u; fn_002082a8(cpu);
    }
L_00189b64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189b68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189b6cu)) return;
    }
L_00189b6c:;
    {
        cpu->r[14] = 0x00189b70u; fn_0018ba20(cpu);
    }
L_00189b70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189b74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189b78u)) return;
    }
}

/* _ZN12CGamePackageC1Ev @ 00189b78 (arm) */
void fn_00189b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189b78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189b7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189b80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00189b84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00189b88:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00189b8c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189b90:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00189b94:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00189b98:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00189b9c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00189ba0:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00189ba4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_00189ba8:;
    {
        cpu->r[14] = 0x00189bacu; fn_0018ba6c(cpu);
    }
L_00189bac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189bb0:;
    {
        cpu->r[14] = 0x00189bb4u; fn_0018a3f0(cpu);
    }
L_00189bb4:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00189bb8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189bbc:;
    {
        cpu->r[14] = 0x00189bc0u; fn_0018ba6c(cpu);
    }
L_00189bc0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189bc4:;
    {
        cpu->r[14] = 0x00189bc8u; fn_0018a3f0(cpu);
    }
L_00189bc8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00189bcc:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189bd0:;
    {
        cpu->r[14] = 0x00189bd4u; fn_0018ba6c(cpu);
    }
L_00189bd4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189bd8:;
    {
        cpu->r[14] = 0x00189bdcu; fn_0018a3f0(cpu);
    }
L_00189bdc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00189be0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00189be4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_00189be8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00189bec:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00189bf0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_00189bf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00189bf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189be8;
        }
    }
L_00189bfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189c00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189c04u)) return;
    }
}

/* _ZNSs9_M_assignEPKcS0_ @ 00189c04 (arm) */
void fn_00189c04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189c04:;
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
L_00189c08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00189c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189c10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00189c14:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00189c18:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00189c1c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00189c20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00189c24:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00189c28:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00189c2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189c68;
        }
    }
L_00189c30:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00189c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189df0;
        }
    }
L_00189c38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00189c3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00189c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189c5c;
        }
    }
L_00189c44:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_00189c48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00189c4c:;
    {
        wr8(cpu->r[0] + cpu->r[5], cpu->r[1]);
    }
L_00189c50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189c54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00189c58:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00189c5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189c60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00189c64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189c68u)) return;
    }
L_00189c68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00189c6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_00189c70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189dd0;
        }
    }
L_00189c74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_00189c78:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00189c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189c5c;
        }
    }
L_00189c80:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00189c84:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_00189c88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
        }
    }
L_00189c8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_00189c90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00189c94:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00189c98:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00189d80;
        }
    }
L_00189c9c:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_00189ca0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00189ca4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_00189ca8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00189cac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189e10;
        }
    }
L_00189cb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00189cb4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_00189cb8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
        }
    }
L_00189cbc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
        }
    }
L_00189cc0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00189cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189cd0;
        }
    }
L_00189cc8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00189ccc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_00189e20;
        }
    }
L_00189cd0:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_00189cd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00189cd8:;
    {
        cpu->r[14] = 0x00189cdcu; fn_0018ba6c(cpu);
    }
L_00189cdc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_00189ce0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189ce4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00189ce8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_00189cec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189cf0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00189cf4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00189cf8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_00189cfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00189d1c;
        }
    }
L_00189d00:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00189d04:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[5]);
    }
L_00189d08:;
    {
        wr8(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_00189d0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00189d10:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00189d14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189d04;
        }
    }
L_00189d18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00189d1c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00189d20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00189d40;
        }
    }
L_00189d24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189d28:;
    {
        cpu->r[2] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_00189d2c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00189d30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00189d34:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00189d38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189d28;
        }
    }
L_00189d3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_00189d40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189d44:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_00189d48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00189d4c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00189d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189d70;
        }
    }
L_00189d54:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00189d58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189d70;
        }
    }
L_00189d5c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00189d60:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00189d64:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_00189d68:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189e48;
        }
    }
L_00189d6c:;
    {
        cpu->r[14] = 0x00189d70u; fn_002082a8(cpu);
    }
L_00189d70:;
    {
        wr32(cpu->r[4], cpu->r[8]);
    }
L_00189d74:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00189d78:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_00189d7c:;
    {
        goto L_00189c5c;
    }
L_00189d80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00189d84:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_00189d88:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00189d8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00189dac;
        }
    }
L_00189d90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00189d94:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00189d98:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x1u;
        cpu->r[1] = rd8(cpu->r[2] + + 0x1u);
        cpu->r[2] = wb_tmp;
    }
L_00189d9c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_00189da0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x1u;
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_00189da4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189d98;
        }
    }
L_00189da8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189dac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00189db0:;
    {
        wr8(cpu->r[3] + cpu->r[10], cpu->r[2]);
    }
L_00189db4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189db8:;
    {
        cpu->r[2] = rd8(cpu->r[7]);
    }
L_00189dbc:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_00189dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189dc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00189dc8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_00189dcc:;
    {
        goto L_00189c5c;
    }
L_00189dd0:;
    {
        cpu->r[14] = 0x00189dd4u; imp_memcpy(cpu); /* memcpy */
    }
L_00189dd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189dd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00189ddc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00189de0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_00189de4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00189de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189c80;
        }
    }
L_00189dec:;
    {
        goto L_00189c5c;
    }
L_00189df0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00189df4:;
    {
        cpu->r[14] = 0x00189df8u; imp_memcpy(cpu); /* memcpy */
    }
L_00189df8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00189dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00189e00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00189e04:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00189e08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189c44;
        }
    }
L_00189e0c:;
    {
        goto L_00189c5c;
    }
L_00189e10:;
    {
        cpu->r[0] = rd32(0x00189e18u + + 0x38u);
    }
L_00189e14:;
    {
        cpu->r[0] = add_flags(cpu, 0x00189e1cu, cpu->r[0], 0, 0);
    }
L_00189e18:;
    {
        cpu->r[14] = 0x00189e1cu; fn_00208298(cpu);
    }
L_00189e1c:;
    {
        goto L_00189cb0;
    }
L_00189e20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00189e24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_00189e28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[8];
        }
    }
L_00189e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00189ce8;
        }
    }
L_00189e30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000080u, 1, 1);
    }
L_00189e34:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00189e38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00189cd8;
        }
    }
L_00189e3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00189e40:;
    {
        cpu->r[14] = 0x00189e44u; fn_00208278(cpu);
    }
L_00189e44:;
    {
        goto L_00189cdc;
    }
L_00189e48:;
    {
        cpu->r[14] = 0x00189e4cu; fn_0018ba20(cpu);
    }
L_00189e4c:;
    {
        goto L_00189d70;
    }
}

/* _ZN12CGamePackage4BindEPc @ 00189e54 (arm) */
void fn_00189e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189e54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00189e58:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00189e5c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189e60:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00189e64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00189e68:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00189e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00189e70:;
    {
        wr32(cpu->r[2] + + 0x28u, cpu->r[1]);
    }
L_00189e74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_00189e78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00189e7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189e6c;
        }
    }
L_00189e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189e84:;
    {
        cpu->r[14] = 0x00189e88u; imp_strlen(cpu); /* strlen */
    }
L_00189e88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00189e8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00189e90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00189e94:;
    {
        cpu->r[14] = 0x00189e98u; fn_00189c04(cpu);
    }
L_00189e98:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00189e9c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00189ea0:;
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
L_00189ea4:;
    {
        return fn_0018a898(cpu);
    }
}

/* _ZN12CGamePackageC2Ev @ 00189ea8 (arm) */
void fn_00189ea8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189ea8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00189eac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189eb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00189eb4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00189eb8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00189ebc:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189ec0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00189ec4:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00189ec8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00189ecc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00189ed0:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00189ed4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_00189ed8:;
    {
        cpu->r[14] = 0x00189edcu; fn_0018ba6c(cpu);
    }
L_00189edc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189ee0:;
    {
        cpu->r[14] = 0x00189ee4u; fn_0018a3f0(cpu);
    }
L_00189ee4:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_00189ee8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189eec:;
    {
        cpu->r[14] = 0x00189ef0u; fn_0018ba6c(cpu);
    }
L_00189ef0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189ef4:;
    {
        cpu->r[14] = 0x00189ef8u; fn_0018a3f0(cpu);
    }
L_00189ef8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00189efc:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00189f00:;
    {
        cpu->r[14] = 0x00189f04u; fn_0018ba6c(cpu);
    }
L_00189f04:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00189f08:;
    {
        cpu->r[14] = 0x00189f0cu; fn_0018a3f0(cpu);
    }
L_00189f0c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00189f10:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00189f14:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_00189f18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00189f1c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00189f20:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_00189f24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00189f28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00189f18;
        }
    }
L_00189f2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00189f30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00189f34u)) return;
    }
}

/* _ZN14GamePackageMgrC2Ev @ 00189f34 (arm) */
void fn_00189f34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189f34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00189f38:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00189f3c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00189f40:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00189f44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GamePackageMgrC1Ev @ 00189f48 (arm) */
void fn_00189f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189f48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00189f4c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00189f50:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00189f54:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00189f58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GamePackageMgr10GetPackageEi @ 00189f5c (arm) */
void fn_00189f5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189f5c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00189f60:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00189f64:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00189f68:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00189f6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00189f70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00189f74:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_00189f78:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00189f7c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00189fb8;
        }
    }
L_00189f80:;
    {
        cpu->r[1] = rd32(0x00189f88u + + 0x3cu);
    }
L_00189f84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00189f88:;
    {
        cpu->r[2] = rd32(0x00189f90u + + 0x38u);
    }
L_00189f8c:;
    {
        cpu->r[14] = 0x0000006fu;
    }
L_00189f90:;
    {
        cpu->r[3] = rd32(0x00189f98u + + 0x34u);
    }
L_00189f94:;
    {
        cpu->r[1] = add_flags(cpu, 0x00189f9cu, cpu->r[1], 0, 0);
    }
L_00189f98:;
    {
        cpu->r[12] = rd32(0x00189fa0u + + 0x30u);
    }
L_00189f9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00189fa4u, cpu->r[2], 0, 0);
    }
L_00189fa0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00189fa8u, cpu->r[3], 0, 0);
    }
L_00189fa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00189fa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00189fb0u, cpu->r[12], 0, 0);
    }
L_00189fac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00189fb0:;
    {
        cpu->r[14] = 0x00189fb4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00189fb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00189fb8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00189fbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00189fc0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00189fc4u)) return;
    }
}

/* _ZN14GamePackageMgr29SearchAndResgisterDLCPackagesEv @ 00189fd4 (arm) */
void fn_00189fd4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00189fd4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00189fd8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00189fdc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_00189fe0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00189fe4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00189fe8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00189fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a024;
        }
    }
L_00189ff0:;
    {
        cpu->r[1] = rd32(0x00189ff8u + + 0x34u);
    }
L_00189ff4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00189ff8:;
    {
        cpu->r[12] = rd32(0x0018a000u + + 0x30u);
    }
L_00189ffc:;
    {
        cpu->r[14] = 0x00000040u;
    }
L_0018a000:;
    {
        cpu->r[2] = rd32(0x0018a008u + + 0x2cu);
    }
L_0018a004:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a00cu, cpu->r[1], 0, 0);
    }
L_0018a008:;
    {
        cpu->r[3] = rd32(0x0018a010u + + 0x28u);
    }
L_0018a00c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a014u, cpu->r[12], 0, 0);
    }
L_0018a010:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a018u, cpu->r[2], 0, 0);
    }
L_0018a014:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0018a018:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a020u, cpu->r[3], 0, 0);
    }
L_0018a01c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018a020:;
    {
        cpu->r[14] = 0x0018a024u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a028:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a02cu)) return;
    }
}

/* _ZN14GamePackageMgr11FreeAllDataEv @ 0018a03c (arm) */
void fn_0018a03c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a03c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018a040:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018a044:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018a048:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018a04c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018a050:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018a054:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a058u)) return;
        }
    }
L_0018a058:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018a05c:;
    {
        goto L_0018a08c;
    }
L_0018a060:;
    {
        cpu->r[14] = 0x0018a064u; fn_00189ab4(cpu);
    }
L_0018a064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a068:;
    {
        cpu->r[14] = 0x0018a06cu; fn_0018ba20(cpu);
    }
L_0018a06c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018a070:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018a074:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_0018a078:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0018a07c:;
    {
        wr32(cpu->r[1] + - 0x4u, cpu->r[6]);
    }
L_0018a080:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018a084:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018a088:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a0b0;
        }
    }
L_0018a08c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + - 0x4u);
    }
L_0018a090:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018a094:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a060;
        }
    }
L_0018a098:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018a09c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_0018a0a0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0018a0a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018a0a8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018a0ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a08c;
        }
    }
L_0018a0b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a0b4u)) return;
    }
}

/* _ZN14GamePackageMgrD2Ev @ 0018a0b4 (arm) */
void fn_0018a0b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a0b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018a0b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a0bc:;
    {
        cpu->r[14] = 0x0018a0c0u; fn_0018a03c(cpu);
    }
L_0018a0c0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a0c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a0c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a0e4;
        }
    }
L_0018a0cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018a0d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018a0d4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018a0d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018a0dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a0ec;
        }
    }
L_0018a0e0:;
    {
        cpu->r[14] = 0x0018a0e4u; fn_002082a8(cpu);
    }
L_0018a0e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a0e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a0ecu)) return;
    }
L_0018a0ec:;
    {
        cpu->r[14] = 0x0018a0f0u; fn_0018ba20(cpu);
    }
L_0018a0f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a0f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a0f8u)) return;
    }
}

/* _ZN14GamePackageMgr16Package_RegisterEPc @ 0018a0f8 (arm) */
void fn_0018a0f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a0f8:;
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
L_0018a0fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018a100:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0018a104:;
    {
        cpu->r[0] = 0x00000068u;
    }
L_0018a108:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018a10c:;
    {
        cpu->r[14] = 0x0018a110u; fn_0018ba6c(cpu);
    }
L_0018a110:;
    {
        cpu->r[4] = rd32(0x0018a118u + + 0x1ccu);
    }
L_0018a114:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018a11cu, cpu->r[4], 0, 0);
    }
L_0018a118:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018a11c:;
    {
        cpu->r[14] = 0x0018a120u; fn_00189b78(cpu);
    }
L_0018a120:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018a124:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a128:;
    {
        cpu->r[14] = 0x0018a12cu; fn_00189e54(cpu);
    }
L_0018a12c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a130:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a1b8;
        }
    }
L_0018a134:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[9] = v1;
    }
L_0018a138:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018a13c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0018a140:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0018a144:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
        }
    }
L_0018a148:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0018a14c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[9]);
        }
    }
L_0018a150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a214;
        }
    }
L_0018a154:;
    {
        cpu->r[3] = rd32(0x0018a15cu + + 0x18cu);
    }
L_0018a158:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a15c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0018a160:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0018a164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a1d0;
        }
    }
L_0018a168:;
    {
        cpu->r[5] = rd32(0x0018a170u + + 0x17cu);
    }
L_0018a16c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0018a170:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a174:;
    {
        cpu->r[14] = 0x0018a178u; fn_0018ae04(cpu);
    }
L_0018a178:;
    {
        cpu->r[3] = rd32(0x0018a180u + + 0x170u);
    }
L_0018a17c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a180:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a184:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018a188:;
    {
        cpu->r[14] = 0x0018a18cu; fn_00136c2c(cpu);
    }
L_0018a18c:;
    {
        cpu->r[3] = rd32(0x0018a194u + + 0x160u);
    }
L_0018a190:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a194:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a198:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018a19c:;
    {
        cpu->r[14] = 0x0018a1a0u; fn_00132fa4(cpu);
    }
L_0018a1a0:;
    {
        cpu->r[3] = rd32(0x0018a1a8u + + 0x150u);
    }
L_0018a1a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a1a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a1ac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018a1b0:;
    {
        cpu->r[14] = 0x0018a1b4u; fn_0009eb10(cpu);
    }
L_0018a1b4:;
    {
        goto L_0018a1c8;
    }
L_0018a1b8:;
    {
        cpu->r[3] = rd32(0x0018a1c0u + + 0x13cu);
    }
L_0018a1bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018a1c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a1c4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0018a1c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018a1cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a1d0u)) return;
    }
L_0018a1d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018a1d4:;
    {
        cpu->r[14] = 0x0018a1d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0018a1d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a168;
        }
    }
L_0018a1e0:;
    {
        cpu->r[5] = rd32(0x0018a1e8u + + 0x104u);
    }
L_0018a1e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0018a1e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018a1ec:;
    {
        cpu->r[14] = 0x0018a1f0u; fn_0018aa20(cpu);
    }
L_0018a1f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018a1f4:;
    {
        cpu->r[14] = 0x0018a1f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0018a1f8:;
    {
        cpu->r[3] = rd32(0x0018a200u + + 0x100u);
    }
L_0018a1fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018a200:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a204:;
    {
        cpu->r[3] = rd32(0x0018a20cu + + 0xf8u);
    }
L_0018a208:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018a20c:;
    {
        cpu->r[14] = 0x0018a210u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0018a210:;
    {
        goto L_0018a16c;
    }
L_0018a214:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0018a218:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[6], 0, 0);
        }
    }
L_0018a21c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0018a220:;
    {
        add_flags(cpu, cpu->r[10], 0xc0000001u, 0, 1);
    }
L_0018a224:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a278;
        }
    }
L_0018a228:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_0018a22c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a278;
        }
    }
L_0018a230:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018a234:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_0018a238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a2c8;
        }
    }
L_0018a23c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0018a240:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[8];
        }
    }
L_0018a244:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a2ac;
        }
    }
L_0018a248:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a24c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018a250:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[7]);
        cpu->r[9] = wb_tmp;
    }
L_0018a254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a270;
        }
    }
L_0018a258:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018a25c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018a260:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018a264:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a2a0;
        }
    }
L_0018a268:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018a26c:;
    {
        cpu->r[14] = 0x0018a270u; fn_002082a8(cpu);
    }
L_0018a270:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[9]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_0018a274:;
    {
        goto L_0018a154;
    }
L_0018a278:;
    {
        cpu->r[10] = (~0x00000003u);
    }
L_0018a27c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0018a280:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018a284:;
    {
        cpu->r[14] = 0x0018a288u; fn_0018ba6c(cpu);
    }
L_0018a288:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018a28c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018a290:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018a294:;
    {
        uint32_t v = cpu->r[10] & ~ 0x00000003u; cpu->r[10] = v;
    }
L_0018a298:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0018a29c:;
    {
        goto L_0018a23c;
    }
L_0018a2a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018a2a4:;
    {
        cpu->r[14] = 0x0018a2a8u; fn_0018ba20(cpu);
    }
L_0018a2a8:;
    {
        goto L_0018a270;
    }
L_0018a2ac:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0018a2b0:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0018a2b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018a2b8:;
    {
        cpu->r[14] = 0x0018a2bcu; imp_memmove(cpu); /* memmove */
    }
L_0018a2bc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018a2c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0018a2c4:;
    {
        goto L_0018a248;
    }
L_0018a2c8:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_0018a2cc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0018a2d0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000080u, 1, 1);
    }
L_0018a2d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a280;
        }
    }
L_0018a2d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0018a2dc:;
    {
        cpu->r[14] = 0x0018a2e0u; fn_00208278(cpu);
    }
L_0018a2e0:;
    {
        goto L_0018a288;
    }
}

/* _ZN14GamePackageMgr4InitEv @ 0018a308 (arm) */
void fn_0018a308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a308:;
    {
        cpu->r[3] = rd32(0x0018a310u + + 0x68u);
    }
L_0018a30c:;
    {
        cpu->r[2] = rd32(0x0018a314u + + 0x68u);
    }
L_0018a310:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a318u, cpu->r[3], 0, 0);
    }
L_0018a314:;
    {
        cpu->r[1] = rd32(0x0018a31cu + + 0x64u);
    }
L_0018a318:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018a31c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018a320:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_0018a324:;
    {
        cpu->r[2] = rd32(0x0018a32cu + + 0x58u);
    }
L_0018a328:;
    {
        cpu->r[3] = rd32(0x0018a330u + + 0x58u);
    }
L_0018a32c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0018a330:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0018a334:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a33cu, cpu->r[2], 0, 0);
    }
L_0018a338:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a340u, cpu->r[3], 0, 0);
    }
L_0018a33c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018a340:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a348u, cpu->r[1], 0, 0);
    }
L_0018a344:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018a348:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[12]);
    }
L_0018a34c:;
    {
        cpu->r[14] = 0x0018a350u; imp_sprintf(cpu); /* sprintf */
    }
L_0018a350:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018a354:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018a358:;
    {
        cpu->r[14] = 0x0018a35cu; fn_0018a0f8(cpu);
    }
L_0018a35c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_0018a360:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018a364:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018a368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a374;
        }
    }
L_0018a36c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_0018a370:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a374u)) return;
    }
L_0018a374:;
    {
        cpu->r[14] = 0x0018a378u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0018a378:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] & shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
        }
    }
L_0018a37c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0018a380:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[8], 4, (cpu->r[1] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_0018a384:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, 23u, &shc); cpu->r[7] = v;
        }
    }
L_0018a388:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[4]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[8] << 32) | cpu->r[7]);
        cpu->r[8] = wb_tmp;
        }
    }
}

/* _ZN14GamePackageMgrD1Ev @ 0018a38c (arm) */
void fn_0018a38c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a38c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018a390:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a394:;
    {
        cpu->r[14] = 0x0018a398u; fn_0018a03c(cpu);
    }
L_0018a398:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a39c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a3a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a3bc;
        }
    }
L_0018a3a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018a3a8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018a3ac:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018a3b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018a3b4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018a3c4;
        }
    }
L_0018a3b8:;
    {
        cpu->r[14] = 0x0018a3bcu; fn_002082a8(cpu);
    }
L_0018a3bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a3c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a3c4u)) return;
    }
L_0018a3c4:;
    {
        cpu->r[14] = 0x0018a3c8u; fn_0018ba20(cpu);
    }
L_0018a3c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a3cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a3d0u)) return;
    }
}

/* _ZN8CPackageC2Ev @ 0018a3d0 (arm) */
void fn_0018a3d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a3d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018a3d4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018a3d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018a3dc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018a3e0:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018a3e4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018a3e8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0018a3ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CPackageC1Ev @ 0018a3f0 (arm) */
void fn_0018a3f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a3f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018a3f4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018a3f8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018a3fc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018a400:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018a404:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018a408:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0018a40c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CPackage17UnBindPackageFileEv @ 0018a410 (arm) */
void fn_0018a410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a410:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a414:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018a418:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CPackage18FreeCompressedFileEi @ 0018a41c (arm) */
void fn_0018a41c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a41c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018a420:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018a424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a428:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018a42c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0018a430:;
    {
        cpu->r[14] = 0x0018a434u; fn_000fc5c8(cpu);
    }
L_0018a434:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018a438:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_0018a43c:;
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
L_0018a440:;
    {
        return fn_000fc710(cpu);
    }
}

/* _ZN8CPackage18InitCompressedFileEi @ 0018a444 (arm) */
void fn_0018a444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a444:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018a448:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0018a44c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a450:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018a454:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018a458:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018a45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a474;
        }
    }
L_0018a460:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018a464:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0018a468:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a46c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0018a470:;
    {
        return fn_000fc5bc(cpu);
    }
L_0018a474:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0018a478:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0018a47c:;
    {
        cpu->r[14] = 0x0018a480u; fn_0018ba6c(cpu);
    }
L_0018a480:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018a484:;
    {
        cpu->r[14] = 0x0018a488u; fn_000fc5b0(cpu);
    }
L_0018a488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018a48c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018a490:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[5]);
    }
L_0018a494:;
    {
        goto L_0018a460;
    }
}

/* _ZN8CPackage10GetLibSizeEi @ 0018a498 (arm) */
void fn_0018a498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a498:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0018a49c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018a4a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018a4a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018a4a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018a4dc;
        }
    }
L_0018a4ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018a4b0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0018a4b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018a4dc;
        }
    }
L_0018a4b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0018a4bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a4c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a51c;
        }
    }
L_0018a4c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018a4c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018a4cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018a4d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0018a4d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a4d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a4dcu)) return;
    }
L_0018a4dc:;
    {
        cpu->r[1] = rd32(0x0018a4e4u + + 0x74u);
    }
L_0018a4e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018a4e4:;
    {
        cpu->r[2] = rd32(0x0018a4ecu + + 0x70u);
    }
L_0018a4e8:;
    {
        cpu->r[14] = 0x00000066u;
    }
L_0018a4ec:;
    {
        cpu->r[3] = rd32(0x0018a4f4u + + 0x6cu);
    }
L_0018a4f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a4f8u, cpu->r[1], 0, 0);
    }
L_0018a4f4:;
    {
        cpu->r[12] = rd32(0x0018a4fcu + + 0x68u);
    }
L_0018a4f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a500u, cpu->r[2], 0, 0);
    }
L_0018a4fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a504u, cpu->r[3], 0, 0);
    }
L_0018a500:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018a504:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a50cu, cpu->r[12], 0, 0);
    }
L_0018a508:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018a50c:;
    {
        cpu->r[14] = 0x0018a510u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a510:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0018a514:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a4c4;
        }
    }
L_0018a51c:;
    {
        cpu->r[1] = rd32(0x0018a524u + + 0x44u);
    }
L_0018a520:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018a524:;
    {
        cpu->r[2] = rd32(0x0018a52cu + + 0x40u);
    }
L_0018a528:;
    {
        cpu->r[14] = 0x00000067u;
    }
L_0018a52c:;
    {
        cpu->r[3] = rd32(0x0018a534u + + 0x3cu);
    }
L_0018a530:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a538u, cpu->r[1], 0, 0);
    }
L_0018a534:;
    {
        cpu->r[12] = rd32(0x0018a53cu + + 0x38u);
    }
L_0018a538:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a540u, cpu->r[2], 0, 0);
    }
L_0018a53c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a544u, cpu->r[3], 0, 0);
    }
L_0018a540:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018a544:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a54cu, cpu->r[12], 0, 0);
    }
L_0018a548:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018a54c:;
    {
        cpu->r[14] = 0x0018a550u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a550:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_0018a554:;
    {
        goto L_0018a4c4;
    }
}

/* _ZN8CPackage12GetLibOffsetEi @ 0018a578 (arm) */
void fn_0018a578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a578:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0018a57c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018a580:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018a584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a588:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018a604;
        }
    }
L_0018a58c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018a590:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0018a594:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018a604;
        }
    }
L_0018a598:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018a59c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a5a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a63c;
        }
    }
L_0018a5a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_0018a5a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a5ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_0018a5b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_0018a5b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_0018a5b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_0018a5bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
        }
    }
L_0018a5c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_0018a5c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_0018a5c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
        }
    }
L_0018a5cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_0018a5d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018a5d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018a5f8;
        }
    }
L_0018a5d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018a5dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a5e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a5e4:;
    {
        cpu->r[14] = 0x0018a5e8u; fn_0018a498(cpu);
    }
L_0018a5e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018a5ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_0018a5f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_0018a5f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a5dc;
        }
    }
L_0018a5f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018a5fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a600:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a604u)) return;
    }
L_0018a604:;
    {
        cpu->r[1] = rd32(0x0018a60cu + + 0x68u);
    }
L_0018a608:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018a60c:;
    {
        cpu->r[12] = rd32(0x0018a614u + + 0x64u);
    }
L_0018a610:;
    {
        cpu->r[14] = 0x00000070u;
    }
L_0018a614:;
    {
        cpu->r[2] = rd32(0x0018a61cu + + 0x60u);
    }
L_0018a618:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a620u, cpu->r[1], 0, 0);
    }
L_0018a61c:;
    {
        cpu->r[3] = rd32(0x0018a624u + + 0x5cu);
    }
L_0018a620:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a628u, cpu->r[12], 0, 0);
    }
L_0018a624:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a62cu, cpu->r[2], 0, 0);
    }
L_0018a628:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0018a62c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a634u, cpu->r[3], 0, 0);
    }
L_0018a630:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018a634:;
    {
        cpu->r[14] = 0x0018a638u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a638:;
    {
        goto L_0018a598;
    }
L_0018a63c:;
    {
        cpu->r[1] = rd32(0x0018a644u + + 0x40u);
    }
L_0018a640:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018a644:;
    {
        cpu->r[12] = rd32(0x0018a64cu + + 0x3cu);
    }
L_0018a648:;
    {
        cpu->r[14] = 0x00000071u;
    }
L_0018a64c:;
    {
        cpu->r[2] = rd32(0x0018a654u + + 0x38u);
    }
L_0018a650:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a658u, cpu->r[1], 0, 0);
    }
L_0018a654:;
    {
        cpu->r[3] = rd32(0x0018a65cu + + 0x34u);
    }
L_0018a658:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a660u, cpu->r[12], 0, 0);
    }
L_0018a65c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a664u, cpu->r[2], 0, 0);
    }
L_0018a660:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0018a664:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a66cu, cpu->r[3], 0, 0);
    }
L_0018a668:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018a66c:;
    {
        cpu->r[14] = 0x0018a670u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a670:;
    {
        goto L_0018a5a4;
    }
}

/* _ZN8CPackage12FSeekLibDataEi @ 0018a694 (arm) */
void fn_0018a694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a694:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018a698:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0018a69c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a6a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018a6a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a6a8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018a6ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = (~0x00000000u);
        }
    }
L_0018a6b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a72c;
        }
    }
L_0018a6b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018a6b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018a738;
        }
    }
L_0018a6bc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018a6c0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_0018a6c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018a738;
        }
    }
L_0018a6c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_0018a6cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a6d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0018a6d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
        }
    }
L_0018a6d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_0018a6dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_0018a6e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
        }
    }
L_0018a6e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
        }
    }
L_0018a6e8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018a6ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018a71c;
        }
    }
L_0018a6f0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018a6f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018a6f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a6fc:;
    {
        cpu->r[14] = 0x0018a700u; fn_0018a498(cpu);
    }
L_0018a700:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018a704:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a708:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018a70c:;
    {
        cpu->r[14] = 0x0018a710u; fn_0018a498(cpu);
    }
L_0018a710:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_0018a714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0018a718:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018a6f4;
        }
    }
L_0018a71c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a720:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a724:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018a728:;
    {
        cpu->r[14] = 0x0018a72cu; fn_000fc0b4(cpu);
    }
L_0018a72c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018a730:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a734:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a738u)) return;
    }
L_0018a738:;
    {
        cpu->r[1] = rd32(0x0018a740u + + 0x34u);
    }
L_0018a73c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018a740:;
    {
        cpu->r[12] = rd32(0x0018a748u + + 0x30u);
    }
L_0018a744:;
    {
        cpu->r[14] = 0x00000087u;
    }
L_0018a748:;
    {
        cpu->r[2] = rd32(0x0018a750u + + 0x2cu);
    }
L_0018a74c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018a754u, cpu->r[1], 0, 0);
    }
L_0018a750:;
    {
        cpu->r[3] = rd32(0x0018a758u + + 0x28u);
    }
L_0018a754:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018a75cu, cpu->r[12], 0, 0);
    }
L_0018a758:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018a760u, cpu->r[2], 0, 0);
    }
L_0018a75c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0018a760:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018a768u, cpu->r[3], 0, 0);
    }
L_0018a764:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018a768:;
    {
        cpu->r[14] = 0x0018a76cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018a76c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a770:;
    {
        goto L_0018a6c8;
    }
}

/* _ZN8CPackage4BindEP10IFileReadIb @ 0018a784 (arm) */
void fn_0018a784(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a784:;
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
L_0018a788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a78c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018a790:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0018a794:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_0018a798:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018a79c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0018a7a0:;
    {
        cpu->r[14] = 0x0018a7a4u; fn_000fc0ac(cpu);
    }
L_0018a7a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018a7a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a7ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018a7b0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0018a7b4:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x2u;
        wr16(cpu->r[8] + - 0x2u, cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_0018a7b8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018a7bc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0018a7c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018a7c4:;
    {
        cpu->r[14] = 0x0018a7c8u; fn_000fc154(cpu);
    }
L_0018a7c8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x6u);
    }
L_0018a7cc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0018a7d0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0018a7d4:;
    {
        cpu->r[14] = 0x0018a7d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018a7d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a7dc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018a7e0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0018a7e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0018a7e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a874;
        }
    }
L_0018a7ec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018a7f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a87c;
        }
    }
L_0018a7f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a7f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a7fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018a854;
        }
    }
L_0018a800:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018a804:;
    {
        cpu->r[10] = cpu->r[13];
    }
L_0018a808:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0018a80c:;
    {
        goto L_0018a814;
    }
L_0018a810:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018a814:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0018a818:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0018a81c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a820:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_0018a824:;
    {
        cpu->r[14] = 0x0018a828u; fn_000fc154(cpu);
    }
L_0018a828:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0018a82c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018a830:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a834:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018a838:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[7]);
    }
L_0018a83c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_0018a840:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018a844:;
    {
        cpu->r[14] = 0x0018a848u; fn_000fc154(cpu);
    }
L_0018a848:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a84c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0018a850:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018a810;
        }
    }
L_0018a854:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0018a858:;
    {
        cpu->r[14] = 0x0018a85cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0018a85c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a860:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018a864:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0018a868:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0018a86c:;
    {
        cpu->r[14] = 0x0018a870u; imp_memset(cpu); /* memset */
    }
L_0018a870:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018a874:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018a878:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a87cu)) return;
    }
L_0018a87c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a880:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018a884:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018a888:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0018a88c:;
    {
        cpu->r[14] = 0x0018a890u; fn_000fc154(cpu);
    }
L_0018a890:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018a894:;
    {
        goto L_0018a854;
    }
}

/* _ZN8CPackage4BindEPc @ 0018a898 (arm) */
void fn_0018a898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a898:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018a89c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018a8a0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0018a8a4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018a8a8:;
    {
        cpu->r[14] = 0x0018a8acu; fn_000fc508(cpu);
    }
L_0018a8ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a8c4;
        }
    }
L_0018a8b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018a8b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018a8bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018a8c0:;
    {
        return fn_0018a784(cpu);
    }
L_0018a8c4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0018a8c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a8ccu)) return;
    }
}

/* _ZN8CPackageD1Ev @ 0018a8cc (arm) */
void fn_0018a8cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a8cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018a8d0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018a8d4:;
    {
        cpu->r[14] = 0x0018a8d8u; fn_000fc564(cpu);
    }
L_0018a8d8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0018a8dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018a8e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0018a8e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018a924;
        }
    }
L_0018a8e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018a8ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018a8f0:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0018a8f4:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018a8f8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018a8fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a918;
        }
    }
L_0018a900:;
    {
        cpu->r[14] = 0x0018a904u; fn_000fc6f0(cpu);
    }
L_0018a904:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018a908:;
    {
        cpu->r[14] = 0x0018a90cu; fn_0018ba20(cpu);
    }
L_0018a90c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018a910:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0018a914:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_0018a918:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018a91c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0018a920:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018a8f4;
        }
    }
L_0018a924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a93c;
        }
    }
L_0018a92c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018a930:;
    {
        cpu->r[14] = 0x0018a934u; fn_0018ba60(cpu);
    }
L_0018a934:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a938:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_0018a93c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_0018a940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a954;
        }
    }
L_0018a948:;
    {
        cpu->r[14] = 0x0018a94cu; fn_0018ba60(cpu);
    }
L_0018a94c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a950:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0018a954:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018a958:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a95cu)) return;
    }
}

/* _ZN8CPackageD2Ev @ 0018a95c (arm) */
void fn_0018a95c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a95c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018a960:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018a964:;
    {
        cpu->r[14] = 0x0018a968u; fn_000fc564(cpu);
    }
L_0018a968:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0018a96c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018a970:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
        }
    }
L_0018a974:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018a9b4;
        }
    }
L_0018a978:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018a97c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018a980:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0018a984:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018a988:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018a98c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a9a8;
        }
    }
L_0018a990:;
    {
        cpu->r[14] = 0x0018a994u; fn_000fc6f0(cpu);
    }
L_0018a994:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018a998:;
    {
        cpu->r[14] = 0x0018a99cu; fn_0018ba20(cpu);
    }
L_0018a99c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018a9a0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0018a9a4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_0018a9a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018a9ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0018a9b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018a984;
        }
    }
L_0018a9b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018a9b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a9cc;
        }
    }
L_0018a9bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018a9c0:;
    {
        cpu->r[14] = 0x0018a9c4u; fn_0018ba60(cpu);
    }
L_0018a9c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a9c8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_0018a9cc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_0018a9d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018a9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018a9e4;
        }
    }
L_0018a9d8:;
    {
        cpu->r[14] = 0x0018a9dcu; fn_0018ba60(cpu);
    }
L_0018a9dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018a9e0:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[3]);
    }
L_0018a9e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018a9e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018a9ecu)) return;
    }
}

/* _ZN11CSpriteInfoC2Ev @ 0018a9ec (arm) */
void fn_0018a9ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a9ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018a9f0:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018a9f4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018a9f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CSpriteInfoC1Ev @ 0018a9fc (arm) */
void fn_0018a9fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018a9fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018aa00:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018aa04:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018aa08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManagerC2Ev @ 0018aa0c (arm) */
void fn_0018aa0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa0c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018aa10:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018aa14:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018aa18:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018aa1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManagerC1Ev @ 0018aa20 (arm) */
void fn_0018aa20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018aa24:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018aa28:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018aa2c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018aa30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManager21Package_GetSpritesNumEi @ 0018aa34 (arm) */
void fn_0018aa34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa34:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018aa38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018aa3c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018aa40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManager9GetSpriteEii @ 0018aa44 (arm) */
void fn_0018aa44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa44:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018aa48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018aa4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018aa50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_0018aa54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManager15SetSpriteNeededEibi @ 0018aa58 (arm) */
void fn_0018aa58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa58:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0018aa5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0018aa60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018aa64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0018aa68:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_0018aa6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13SpriteManager15GetSpriteNeededEii @ 0018aa70 (arm) */
void fn_0018aa70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa70:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018aa74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018aa78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018aa7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0018aa80:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x4u);
    }
L_0018aa84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13SpriteManager22Package_FreeAllSpritesEi @ 0018aa88 (arm) */
void fn_0018aa88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018aa88:;
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
L_0018aa8c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018aa90:;
    {
        cpu->r[2] = rd32(0x0018aa98u + + 0x80u);
    }
L_0018aa94:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0018aa98:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018aa9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018aaa4u, cpu->r[2], 0, 0);
    }
L_0018aaa0:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_0018aaa4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018aaa8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018aaacu)) return;
        }
    }
L_0018aaac:;
    {
        cpu->r[3] = rd32(0x0018aab4u + + 0x68u);
    }
L_0018aab0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018aab4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0018aab8:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0018aabc:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0018aac0:;
    {
        cpu->r[9] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0018aac4:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0018aac8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018aacc:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_0018aad0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018aad4:;
    {
        cpu->r[14] = 0x0018aad8u; fn_00135d64(cpu);
    }
L_0018aad8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018aadc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_0018aae0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_0018aae4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018aae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ab04;
        }
    }
L_0018aaec:;
    {
        cpu->r[14] = 0x0018aaf0u; fn_000aa7f4(cpu);
    }
L_0018aaf0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0018aaf4:;
    {
        cpu->r[14] = 0x0018aaf8u; fn_0018ba20(cpu);
    }
L_0018aaf8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018aafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_0018ab00:;
    {
        wr32(cpu->r[2] + cpu->r[4], cpu->r[7]);
    }
L_0018ab04:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0018ab08:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0018ab0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0018ab10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018aac4;
        }
    }
L_0018ab14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ab18u)) return;
    }
}

/* _ZN11CSpriteInfoD1Ev @ 0018ab20 (arm) */
void fn_0018ab20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ab20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ab24:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0018ab28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ab2c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018ab30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ab4c;
        }
    }
L_0018ab34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018ab38:;
    {
        cpu->r[14] = 0x0018ab3cu; fn_000aa7f4(cpu);
    }
L_0018ab3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018ab40:;
    {
        cpu->r[14] = 0x0018ab44u; fn_0018ba20(cpu);
    }
L_0018ab44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018ab48:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0018ab4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ab50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ab54u)) return;
    }
}

/* _ZN11CSpriteInfoD2Ev @ 0018ab54 (arm) */
void fn_0018ab54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ab54:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ab58:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0018ab5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ab60:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018ab64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ab80;
        }
    }
L_0018ab68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018ab6c:;
    {
        cpu->r[14] = 0x0018ab70u; fn_000aa7f4(cpu);
    }
L_0018ab70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018ab74:;
    {
        cpu->r[14] = 0x0018ab78u; fn_0018ba20(cpu);
    }
L_0018ab78:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018ab7c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0018ab80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ab84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ab88u)) return;
    }
}

/* _ZN10SpritePackD1Ev @ 0018ab88 (arm) */
void fn_0018ab88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ab88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ab8c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ab90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ab94:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018ab98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018abdc;
        }
    }
L_0018ab9c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0018aba0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0018aba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0018aba8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018abb4;
        }
    }
L_0018abac:;
    {
        goto L_0018abcc;
    }
L_0018abb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018abb4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018abb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018abbc:;
    {
        cpu->r[14] = 0x0018abc0u; fn_0018ab20(cpu);
    }
L_0018abc0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018abc4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0018abc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018abb0;
        }
    }
L_0018abcc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018abd0:;
    {
        cpu->r[14] = 0x0018abd4u; fn_0018ba60(cpu);
    }
L_0018abd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018abd8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0018abdc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018abe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018abe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018abf4;
        }
    }
L_0018abe8:;
    {
        cpu->r[14] = 0x0018abecu; fn_0018ba20(cpu);
    }
L_0018abec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018abf0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0018abf4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018abf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018abfcu)) return;
    }
}

/* _ZN13SpriteManager18Package_UnRegisterEi @ 0018abfc (arm) */
void fn_0018abfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018abfc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0018ac00:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ac04:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018ac08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0018ac0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ac10:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_0018ac14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ac18u)) return;
        }
    }
L_0018ac18:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018ac1c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018ac20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ac40;
        }
    }
L_0018ac24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018ac28:;
    {
        cpu->r[14] = 0x0018ac2cu; fn_0018ab88(cpu);
    }
L_0018ac2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018ac30:;
    {
        cpu->r[14] = 0x0018ac34u; fn_0018ba20(cpu);
    }
L_0018ac34:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0018ac38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018ac3c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_0018ac40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0018ac44:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0018ac48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ac4cu)) return;
    }
}

/* _ZN13SpriteManager11FreeAllDataEv @ 0018ac4c (arm) */
void fn_0018ac4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ac4c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ac50:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018ac54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018ac58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018ac5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ac60:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018ac64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ac68u)) return;
        }
    }
L_0018ac68:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0018ac6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ac70:;
    {
        cpu->r[14] = 0x0018ac74u; fn_0018abfc(cpu);
    }
L_0018ac74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018ac78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018ac7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018ac80:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018ac84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ac68;
        }
    }
L_0018ac88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ac8cu)) return;
    }
}
