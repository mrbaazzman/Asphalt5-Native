#include "functions.h"

/* _ZN5Scene11LoadCamAnimEi @ 000bb764 (arm) */
void fn_000bb764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb764:;
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
L_000bb768:;
    {
        cpu->r[6] = 0x000081bcu;
    }
L_000bb76c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000bb770:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000bb774:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000bb778:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bb77c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000bb780:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000bb784:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bb954;
        }
    }
L_000bb788:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bb78c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb7dc;
        }
    }
L_000bb790:;
    {
        cpu->r[3] = 0x00008194u;
    }
L_000bb794:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb79c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bb7a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bb7a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_000bb7a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000bb7ac:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
        }
    }
L_000bb7b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb7c8;
        }
    }
L_000bb7b4:;
    {
        goto L_000bb948;
    }
L_000bb7b8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x198u);
    }
L_000bb7bc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bb7c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000bb7c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb948;
        }
    }
L_000bb7c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000bb7cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000bb7d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018000u, 0, 0);
    }
L_000bb7d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000bb7d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb7b8;
        }
    }
L_000bb7dc:;
    {
        cpu->r[0] = 0x00000054u;
    }
L_000bb7e0:;
    {
        cpu->r[9] = 0x000081bcu;
    }
L_000bb7e4:;
    {
        cpu->r[14] = 0x000bb7e8u; fn_0018ba6c(cpu);
    }
L_000bb7e8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bb7ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000bb7f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000bb7f4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bb7f8:;
    {
        cpu->r[14] = 0x000bb7fcu; fn_000b7300(cpu);
    }
L_000bb7fc:;
    {
        cpu->r[1] = 0x00008c78u;
    }
L_000bb800:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000bb804:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bb808:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000bb80c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bb810:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006000u, 0, 0);
    }
L_000bb814:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bb818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000064u, 0, 0);
    }
L_000bb81c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bb820:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bb824:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bb828:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000bb82c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_000bb830:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_000bb834:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb934;
        }
    }
L_000bb838:;
    {
        cpu->r[1] = 0x00001cecu;
    }
L_000bb83c:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bb840:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb844:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bb848:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bb84c:;
    {
        cpu->r[10] = 0x00001ce8u;
    }
L_000bb850:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bb854:;
    {
        cpu->r[11] = 0x00001cf0u;
    }
L_000bb858:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb85c:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_000bb860:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_000bb864:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bb868:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[3] = v;
    }
L_000bb86c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000bb870:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000bb874:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000bb878:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000bb87c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000bb880:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000bb884:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bb888:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bb88c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000bb890:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000bb894:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000bb898:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000bb89c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000bb8a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000bb8a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bb8a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
        }
    }
L_000bb8ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
        }
    }
L_000bb8b0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bb8b4:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_000bb8b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_000bb8bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000bb8c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
        }
    }
L_000bb8c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
        }
    }
L_000bb8c8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000bb8cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bb8d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bb91c;
        }
    }
L_000bb8d4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bb8d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_000bb8dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000bb8e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
        }
    }
L_000bb8e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
        }
    }
L_000bb8e8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000bb8ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x59cu);
    }
L_000bb8f0:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_000bb8f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000bb8f8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000bb8fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bb91c;
        }
    }
L_000bb900:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000bb904:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006000u, 0, 0);
    }
L_000bb908:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000064u, 0, 0);
    }
L_000bb90c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000bb910:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000bb914:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000bb918:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[6]);
    }
L_000bb91c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000bb920:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000bb924:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000bb928:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000bb92c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000bb930:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bb890;
        }
    }
L_000bb934:;
    {
        cpu->r[3] = 0x000081bcu;
    }
L_000bb938:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bb93c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bb940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000bb944:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000bb948:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000bb94c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000bb950:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bb954u)) return;
    }
L_000bb954:;
    {
        cpu->r[1] = rd32(0x000bb95cu + + 0x34u);
    }
L_000bb958:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bb95c:;
    {
        cpu->r[12] = rd32(0x000bb964u + + 0x30u);
    }
L_000bb960:;
    {
        cpu->r[14] = 0x0000446bu;
    }
L_000bb964:;
    {
        cpu->r[2] = rd32(0x000bb96cu + + 0x2cu);
    }
L_000bb968:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bb970u, cpu->r[1], 0, 0);
    }
L_000bb96c:;
    {
        cpu->r[3] = rd32(0x000bb974u + + 0x28u);
    }
L_000bb970:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bb978u, cpu->r[12], 0, 0);
    }
L_000bb974:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bb97cu, cpu->r[2], 0, 0);
    }
L_000bb978:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000074u, 0, 0);
    }
L_000bb97c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bb984u, cpu->r[3], 0, 0);
    }
L_000bb980:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bb984:;
    {
        cpu->r[14] = 0x000bb988u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bb988:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000bb98c:;
    {
        goto L_000bb788;
    }
}

/* _ZN5Scene11SetCarLightEiifff @ 000bb9a0 (arm) */
void fn_000bb9a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bb9a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bb9a4:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[1], 0x00004000u, 1, 1);
        }
    }
L_000bb9a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000bb9ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000bb9b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_000bb9b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_000bb9b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bb9e8;
        }
    }
L_000bb9bc:;
    {
        cpu->r[4] = 0x00004364u;
    }
L_000bb9c0:;
    {
        cpu->r[12] = 0x00004368u;
    }
L_000bb9c4:;
    {
        cpu->r[14] = 0x0000436cu;
    }
L_000bb9c8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000bb9cc:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000bb9d0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bb9d4:;
    {
        wr32(cpu->r[0] + cpu->r[4], cpu->r[3]);
    }
L_000bb9d8:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bb9dc:;
    {
        wr32(cpu->r[0] + cpu->r[14], cpu->r[4]);
    }
L_000bb9e0:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bb9e4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[14]);
    }
L_000bb9e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000bb9ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000bb9f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = rd32(0x000bb9f8u + + 0x48u);
        }
    }
L_000bb9f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, 0x000bb9fcu, cpu->r[0], 0, 0);
        }
    }
L_000bb9f8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bb9fc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = rd32(cpu->r[2] + + 0x80u);
        }
    }
L_000bba00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bba04:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000bba08:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000bba0c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000bba10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bba14:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_000bba18:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[3]);
        cpu->r[12] = wb_tmp;
    }
L_000bba1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bba20:;
    {
        wr32(cpu->r[12], cpu->r[3]);
    }
L_000bba24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bba28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bba30u + + 0xcu);
    }
L_000bba2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bba30:;
    {
        cpu->r[14] = 0x000bba34u; imp_glLightfv(cpu); /* glLightfv */
    }
L_000bba34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000bba38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bba3cu)) return;
    }
}

/* _ZN5Scene14SetCarMaterialEifff @ 000bba44 (arm) */
void fn_000bba44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bba44:;
    {
        cpu->r[12] = rd32(0x000bba4cu + + 0xb8u);
    }
L_000bba48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_000bba4c:;
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
L_000bba50:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000bba54:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bba5cu, cpu->r[12], 0, 0);
    }
L_000bba58:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000bba5c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000bba60:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000bba64:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000bba68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bbad8;
        }
    }
L_000bba6c:;
    {
        cpu->r[3] = rd32(0x000bba74u + + 0x94u);
    }
L_000bba70:;
    {
        cpu->r[8] = 0x00001288u;
    }
L_000bba74:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000bba78:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[7] = v;
    }
L_000bba7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_000bba80:;
    {
        cpu->r[10] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000bba84:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000bba88:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bba8c:;
    {
        cpu->r[14] = 0x000bba90u; fn_00147cd8(cpu);
    }
L_000bba90:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000bba94:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000bba98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000bba9c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_000bbaa0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000bbaa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000bbaa8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbaac:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[6]);
    }
L_000bbab0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_000bbab4:;
    {
        cpu->r[14] = 0x000bbab8u; fn_00147cd8(cpu);
    }
L_000bbab8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000bbabc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000bbac0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000bbac4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbac8:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[6]);
    }
L_000bbacc:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[5]);
    }
L_000bbad0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000bbad4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbad8u)) return;
    }
L_000bbad8:;
    {
        cpu->r[1] = 0x00004370u;
    }
L_000bbadc:;
    {
        cpu->r[3] = 0x00004374u;
    }
L_000bbae0:;
    {
        cpu->r[2] = 0x00004378u;
    }
L_000bbae4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000bbae8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bbaec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000bbaf0:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[5]);
    }
L_000bbaf4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000bbaf8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[6]);
    }
L_000bbafc:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000bbb00:;
    {
        goto L_000bba6c;
    }
}

/* _ZN5Scene21UpdateReflectionAlphaEv @ 000bbb0c (arm) */
void fn_000bbb0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bbb0c:;
    {
        cpu->r[3] = rd32(0x000bbb14u + + 0x84u);
    }
L_000bbb10:;
    {
        cpu->r[0] = rd32(0x000bbb18u + + 0x84u);
    }
L_000bbb14:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bbb1cu, cpu->r[3], 0, 0);
    }
L_000bbb18:;
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
L_000bbb1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000bbb20:;
    {
        cpu->r[5] = 0x00001770u;
    }
L_000bbb24:;
    {
        cpu->r[8] = 0x0000cccdu;
    }
L_000bbb28:;
    {
        cpu->r[10] = 0x0000d70au;
    }
L_000bbb2c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x3f4cu << 16);
    }
L_000bbb30:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000bbb34:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x3c23u << 16);
    }
L_000bbb38:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bbb3c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000bbb40:;
    {
        cpu->r[7] = 0x00001774u;
    }
L_000bbb44:;
    {
        cpu->r[6] = 0x00001288u;
    }
L_000bbb48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bbb4c:;
    {
        cpu->r[14] = 0x000bbb50u; fn_000ba618(cpu);
    }
L_000bbb50:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000bbb54:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bbb58:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[0]);
    }
L_000bbb5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000bbb60:;
    {
        cpu->r[14] = 0x000bbb64u; fn_000ba618(cpu);
    }
L_000bbb64:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_000bbb68:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000bbb6c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_000bbb70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000bbb74:;
    {
        cpu->r[14] = 0x000bbb78u; fn_00147cd8(cpu);
    }
L_000bbb78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000bbb7c:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000bbb80:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbb84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000bbb88:;
    {
        cpu->r[14] = 0x000bbb8cu; fn_00147cd8(cpu);
    }
L_000bbb8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_000bbb90:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbb94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbb98u)) return;
    }
}

/* _ZN5Scene9SetLightsEv @ 000bbba0 (arm) */
void fn_000bbba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bbba0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bbba4:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000bbba8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000068u, 1, 0);
    }
L_000bbbac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bbbb4u + + 0x1bcu);
    }
L_000bbbb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bbbb4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bbbb8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000bbbbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bbbc0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000bbbc8u + + 0x1acu);
    }
L_000bbbc4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bbbccu + + 0x1acu);
    }
L_000bbbc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbcc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000bbbd4u + + 0x1a8u);
    }
L_000bbbd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bbbd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbe0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbe4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbbe8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bbbec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bbbf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbbf4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbbf8:;
    {
        cpu->r[3] = 0x00000404u;
    }
L_000bbbfc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbc00:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000bbc04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bbc08:;
    {
        cpu->r[3] = (~0x0000007fu);
    }
L_000bbc0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bbc10:;
    {
        wr8(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_000bbc14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bbc18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbc1c:;
    {
        cpu->r[14] = 0x000bbc20u; fn_00147e80(cpu);
    }
L_000bbc20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bbc24:;
    {
        cpu->r[0] = 0x00000b53u;
    }
L_000bbc28:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000bbc30u + + 0x150u);
    }
L_000bbc2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbc30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbc34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbc38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbc3c:;
    {
        cpu->r[14] = 0x000bbc40u; imp_glLightModelfv(cpu); /* glLightModelfv */
    }
L_000bbc40:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bbc44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bbc48:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bbc4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bbc50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bbc54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bbc58:;
    {
        cpu->r[14] = 0x000bbc60u;
    }
L_000bbc5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbc60u)) return;
    }
L_000bbc60:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bbc64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bbc68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bbc6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bbc70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bbc74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bbc78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bbc7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000bbc80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000bbc84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000bbc88:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bbc8c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000bbc90:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000bbc94:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000bbc98:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bbc9c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bbca0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000bbca4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0]);
    }
L_000bbca8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000bbcac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000bbcb0:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000bbcb4:;
    {
        vfp_vsub(cpu, 12, 10, 12);
    }
L_000bbcb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbcbc:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_000bbcc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000bbcc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bbcc8:;
    {
        cpu->r[14] = 0x000bbcccu; fn_00155f80(cpu);
    }
L_000bbccc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000bbcd0:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000bbcd4:;
    {
        cpu->r[1] = 0x00001203u;
    }
L_000bbcd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_000bbcdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bbce0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbce4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_000bbce8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbcec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_000bbcf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbcf4:;
    {
        cpu->r[14] = 0x000bbcf8u; imp_glLightfv(cpu); /* glLightfv */
    }
L_000bbcf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000bbcfc:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000bbd00:;
    {
        cpu->r[1] = 0x00001200u;
    }
L_000bbd04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bbd0cu + + 0x78u);
    }
L_000bbd08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbd0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd1c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bbd24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbd28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbd2c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bbd30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbd34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bbd38:;
    {
        cpu->r[14] = 0x000bbd3cu; imp_glLightfv(cpu); /* glLightfv */
    }
L_000bbd3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_000bbd40:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000bbd44:;
    {
        cpu->r[1] = 0x00001201u;
    }
L_000bbd48:;
    {
        cpu->r[14] = 0x000bbd4cu; imp_glLightfv(cpu); /* glLightfv */
    }
L_000bbd4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000bbd50:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000bbd54:;
    {
        cpu->r[1] = 0x00001202u;
    }
L_000bbd58:;
    {
        cpu->r[14] = 0x000bbd5cu; imp_glLightfv(cpu); /* glLightfv */
    }
L_000bbd5c:;
    {
        cpu->r[0] = 0x00004000u;
    }
L_000bbd60:;
    {
        cpu->r[14] = 0x000bbd64u; imp_glEnable(cpu); /* glEnable */
    }
L_000bbd64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000bbd68:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000bbd6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbd70u)) return;
    }
}

/* _ZN5Scene27ComputeSectionLengthFromCarEi8Vector4sb @ 000bbd88 (arm) */
void fn_000bbd88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bbd88:;
    {
        cpu->r[12] = 0x00008c50u;
    }
L_000bbd8c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bbd90:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000bbd94:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bbd98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bbd9c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000bbda0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000bbda4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000bbda8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000bbdac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbdb0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bbdb4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_000bbdb8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000bbdbc:;
    {
        cpu->r[14] = 0x000bbdc0u; fn_00180c78(cpu);
    }
L_000bbdc0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bbdc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bbdc8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bbdcc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bbdd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bbdd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbdd8:;
    {
        cpu->r[14] = 0x000bbddcu; fn_00180c78(cpu);
    }
L_000bbddc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bbde0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
        }
    }
L_000bbde4:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000bbde8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[6] + + 0x30u);
        }
    }
L_000bbdec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
        }
    }
L_000bbdf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
        }
    }
L_000bbdf4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bbdf8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000bbdfc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bbe00:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000bbe04:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000bbe08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bbe0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000bbe10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000bbe14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000bbe18:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000bbe1c:;
    {
        cpu->r[14] = 0x000bbe20u; fn_0018572c(cpu);
    }
L_000bbe20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000bbe24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbe28u)) return;
    }
}

/* _ZN5Scene20ComputeSectionLengthEi @ 000bbe28 (arm) */
void fn_000bbe28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bbe28:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bbe2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bbe30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bbe34:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bbe38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bbe3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000bbe40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000bbe44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbe48:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bbe4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000bbe50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000bbe54:;
    {
        cpu->r[14] = 0x000bbe58u; fn_00180c78(cpu);
    }
L_000bbe58:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bbe5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bbe60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bbe64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bbe68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bbe6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbe70:;
    {
        cpu->r[14] = 0x000bbe74u; fn_00180c78(cpu);
    }
L_000bbe74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_000bbe78:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x30u);
    }
L_000bbe7c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x8u);
    }
L_000bbe80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000bbe84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000bbe88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bbe8c:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x30u);
    }
L_000bbe90:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bbe94:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000bbe98:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
    }
L_000bbe9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bbea0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_000bbea4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bbea8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000bbeac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000bbeb0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000bbeb4:;
    {
        cpu->r[14] = 0x000bbeb8u; fn_0018572c(cpu);
    }
L_000bbeb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000bbebc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbec0u)) return;
    }
}

/* _ZN5Scene28ComputeDistanceOnRoadBetweenEP4CCarS1_ @ 000bbec0 (arm) */
void fn_000bbec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bbec0:;
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
L_000bbec4:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_000bbec8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000bbecc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bbed0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000bbed4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000bbed8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000bbedc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000bbee0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1b0u);
    }
L_000bbee4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbee8:;
    {
        cpu->r[14] = 0x000bbeecu; fn_00180968(cpu);
    }
L_000bbeec:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x1b0u);
    }
L_000bbef0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000bbef4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bbef8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000bbefc:;
    {
        cpu->r[14] = 0x000bbf00u; fn_00180968(cpu);
    }
L_000bbf00:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_000bbf04:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bbf08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bbfd0;
        }
    }
L_000bbf0c:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_000bbf10:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bbf14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000bbf18:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000bbf1c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000bbf20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bbf24:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000bbf28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000bbf2c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000bbf30:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000bbf34:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_000bbf38:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_000bbf3c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000bbf40:;
    {
        cpu->r[14] = 0x000bbf44u; fn_000bbd88(cpu);
    }
L_000bbf44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_000bbf48:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bbf4c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000bbf50:;
    {
        cpu->r[10] = 0x00001684u;
    }
L_000bbf54:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000bbf58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bbf5c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000bbf94;
        }
    }
L_000bbf60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000bbf64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bbf68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000bbf6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bbf70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000bbf74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_000bbf78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_000bbf7c:;
    {
        cpu->r[14] = 0x000bbf80u; fn_000bbe28(cpu);
    }
L_000bbf80:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000bbf84:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000bbf88:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000bbf8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_000bbf90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bbf60;
        }
    }
L_000bbf94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000bbf98:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000bbf9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bbf60;
        }
    }
L_000bbfa0:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_000bbfa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bbfa8:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x3d8u);
    }
L_000bbfac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bbfb0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x3d4u);
    }
L_000bbfb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bbfb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bbfbc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[12]);
        wr32(ea + 8u, cpu->r[14]);
    }
L_000bbfc0:;
    {
        cpu->r[14] = 0x000bbfc4u; fn_000bbd88(cpu);
    }
L_000bbfc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_000bbfc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000bbfcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bbfd0u)) return;
    }
L_000bbfd0:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_000bbfd4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bbfd8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bbfdc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000bbfe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bbf14;
        }
    }
L_000bbfe4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x3d4u);
    }
L_000bbfe8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000bbfec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000bbff0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000bbff4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3d8u);
    }
L_000bbff8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000bbffc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000bc000:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_000bc004:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_000bc008:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000bc00c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000bc010:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000bc014:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000bc018:;
    {
        cpu->r[14] = 0x000bc01cu; fn_0018572c(cpu);
    }
L_000bc01c:;
    {
        goto L_000bbfc8;
    }
}

/* _ZN5Scene21ComputeDistanceToCarsEv @ 000bc020 (arm) */
void fn_000bc020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc020:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bc024:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc028:;
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
L_000bc02c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bc030:;
    {
        cpu->r[9] = 0x00008cbcu;
    }
L_000bc034:;
    {
        cpu->r[7] = 0x00008cc4u;
    }
L_000bc038:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bc03c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bc040:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000bc044:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bc048:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000bc04c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bc050:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000bc054:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bc058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000bc05c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000bc060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000bc064:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bc068:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000bc06c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bc070:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc15c;
        }
    }
L_000bc074:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000bc078:;
    {
        cpu->r[8] = 0x00008cc0u;
    }
L_000bc07c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bc080:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bc084:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bc088:;
    {
        cpu->r[11] = 0x00001820u;
    }
L_000bc08c:;
    {
        goto L_000bc0bc;
    }
L_000bc090:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58cu);
    }
L_000bc094:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc098:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_000bc09c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_000bc0a0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000bc0a4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000bc0a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bc0ac:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000bc0b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000bc0b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000bc0b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000bc15c;
        }
    }
L_000bc0bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000bc0c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_000bc0c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
        }
    }
L_000bc0c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
        }
    }
L_000bc0cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000bc0d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bc0d4:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000bc0d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bc0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc0a4;
        }
    }
L_000bc0e0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[11]);
    }
L_000bc0e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc0e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc0fc;
        }
    }
L_000bc0ec:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000bc0f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000bc0f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bc0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc0a4;
        }
    }
L_000bc0fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bc100:;
    {
        cpu->r[14] = 0x000bc104u; fn_0015d920(cpu);
    }
L_000bc104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc090;
        }
    }
L_000bc10c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bc110:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000bc114:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000bc118:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bc11c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000bc120:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc164;
        }
    }
L_000bc124:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bc128:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000bc12c:;
    {
        cpu->r[14] = 0x000bc130u; fn_000bbec0(cpu);
    }
L_000bc130:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58cu);
    }
L_000bc134:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bc138:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bc13c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_000bc140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_000bc144:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_000bc148:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000bc14c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000bc150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000bc154:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000bc158:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bc0bc;
        }
    }
L_000bc15c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bc160:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc164u)) return;
    }
L_000bc164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bc168:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000bc16c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bc170:;
    {
        cpu->r[14] = 0x000bc174u; fn_000bbec0(cpu);
    }
L_000bc174:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_000bc178:;
    {
        goto L_000bc130;
    }
}

/* _ZN5Scene26MP_EnqueueUpdateCarMessageEiiPh @ 000bc17c (arm) */
void fn_000bc17c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc17c:;
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
L_000bc180:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000bc184:;
    {
        cpu->r[2] = 0x0000a408u;
    }
L_000bc188:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000bc18c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000bc190:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], 0x0006a000u, 0, 0);
    }
L_000bc194:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_000bc198:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000bc19c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000bc1a0:;
    {
        cpu->r[12] = rd32(0x000bc1a8u + + 0x13cu);
    }
L_000bc1a4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x1u);
    }
L_000bc1a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bc1ac:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x1u);
    }
L_000bc1b0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bc1b8u, cpu->r[12], 0, 0);
    }
L_000bc1b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000bc1b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bc1bc:;
    {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[3] = v;
    }
L_000bc1c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bc1c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc2c4;
        }
    }
L_000bc1c8:;
    {
        cpu->r[4] = rd32(0x000bc1d0u + + 0x118u);
    }
L_000bc1cc:;
    {
        cpu->r[3] = 0x00004bf0u;
    }
L_000bc1d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bc1d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000bc1d8:;
    {
        cpu->r[9] = rd8(cpu->r[8] + + 0x14u);
    }
L_000bc1dc:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000bc1e0:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000bc1e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00006300u, 0, 0);
    }
L_000bc1e8:;
    {
        cpu->r[4] = rd8(cpu->r[8] + + 0x15u);
    }
L_000bc1ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000bc1f0:;
    {
        wr8(cpu->r[14] + cpu->r[3], cpu->r[10]);
    }
L_000bc1f4:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000bc1f8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bc1fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000bc200:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x4u);
    }
L_000bc204:;
    {
        cpu->r[3] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_000bc208:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc20c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc2cc;
        }
    }
L_000bc210:;
    {
        cpu->r[4] = 0x0000a408u;
    }
L_000bc214:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bc218:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000bc21c:;
    {
        cpu->r[8] = 0x00000b00u;
    }
L_000bc220:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000bc224:;
    {
        cpu->r[10] = 0x00000016u;
    }
L_000bc228:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7]; cpu->r[8] = v;
    }
L_000bc22c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x1u);
    }
L_000bc230:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000bc234:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0] + cpu->r[8]; cpu->r[0] = v;
    }
L_000bc238:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000bc23c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_000bc240:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000c00u, 0, 0);
    }
L_000bc244:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000bc248:;
    {
        cpu->r[14] = 0x000bc24cu; imp_memcpy(cpu); /* memcpy */
    }
L_000bc24c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1u);
    }
L_000bc250:;
    {
        cpu->r[3] = 0x00004c01u;
    }
L_000bc254:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bc258:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2] + cpu->r[8]; cpu->r[10] = v;
    }
L_000bc25c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_000bc260:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_000bc264:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_000bc268:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_000bc26c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000bc270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc2ac;
        }
    }
L_000bc274:;
    {
        cpu->r[1] = rd32(0x000bc27cu + + 0x70u);
    }
L_000bc278:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bc27c:;
    {
        cpu->r[12] = rd32(0x000bc284u + + 0x6cu);
    }
L_000bc280:;
    {
        cpu->r[14] = 0x00003986u;
    }
L_000bc284:;
    {
        cpu->r[2] = rd32(0x000bc28cu + + 0x68u);
    }
L_000bc288:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bc290u, cpu->r[1], 0, 0);
    }
L_000bc28c:;
    {
        cpu->r[3] = rd32(0x000bc294u + + 0x64u);
    }
L_000bc290:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bc298u, cpu->r[12], 0, 0);
    }
L_000bc294:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bc29cu, cpu->r[2], 0, 0);
    }
L_000bc298:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000090u, 0, 0);
    }
L_000bc29c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bc2a4u, cpu->r[3], 0, 0);
    }
L_000bc2a0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bc2a4:;
    {
        cpu->r[14] = 0x000bc2a8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bc2a8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1u);
    }
L_000bc2ac:;
    {
        cpu->r[3] = 0x0000a408u;
    }
L_000bc2b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000bc2b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bc2b8:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_000bc2bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_000bc2c0:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[2]);
    }
L_000bc2c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bc2c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc2ccu)) return;
    }
L_000bc2cc:;
    {
        cpu->r[3] = 0x0000167cu;
    }
L_000bc2d0:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[4], 2, 8u, &shc); cpu->r[4] = v;
    }
L_000bc2d4:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_000bc2d8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_000bc2dc:;
    {
        cpu->r[14] = 0x000bc2e0u; fn_000ba248(cpu);
    }
L_000bc2e0:;
    {
        goto L_000bc210;
    }
}

/* _ZN5Scene20UpdateDelayedScriptsEv @ 000bc2fc (arm) */
void fn_000bc2fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc2fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bc300:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00011800u, 0, 0);
    }
L_000bc304:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000334u, 0, 0);
    }
L_000bc308:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bc30c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_000bc310:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000bc314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc318:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000bc31c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc340;
        }
    }
L_000bc320:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bc324:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_000bc328:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc340;
        }
    }
L_000bc32c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000bc330:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bc334:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc338:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bc340;
        }
    }
L_000bc33c:;
    {
        cpu->r[14] = 0x000bc340u; fn_000e0890(cpu);
    }
L_000bc340:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000bc344:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_000bc348:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc310;
        }
    }
L_000bc34c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc350u)) return;
    }
}

/* _ZN5Scene23ResetVisibilitySectionsEv @ 000bc350 (arm) */
void fn_000bc350(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc350:;
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
L_000bc354:;
    {
        cpu->r[7] = 0x00008c38u;
    }
L_000bc358:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bc35c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bc360:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bc364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc410;
        }
    }
L_000bc36c:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000bc370:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bc374:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc378:;
    {
        cpu->r[6] = 0x00008c40u;
    }
L_000bc37c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000bc380:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000bc384:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bc388:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_000bc38c:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000bc390:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + cpu->r[3]);
    }
L_000bc394:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc398:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc3bc;
        }
    }
L_000bc39c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bc3a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000bc3a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bc3a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc3bc;
        }
    }
L_000bc3ac:;
    {
        cpu->r[14] = 0x000bc3b0u; fn_0018ba60(cpu);
    }
L_000bc3b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bc3b4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[8]);
    }
L_000bc3b8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000bc3bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bc3c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bc3c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bc3c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bc38c;
        }
    }
L_000bc3cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bc3d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc3ec;
        }
    }
L_000bc3d4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000bc3d8:;
    {
        cpu->r[14] = 0x000bc3dcu; fn_0018ba60(cpu);
    }
L_000bc3dc:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000bc3e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc3e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc3e8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000bc3ec:;
    {
        cpu->r[4] = 0x00008c40u;
    }
L_000bc3f0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000bc3f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000bc3f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc3fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc400u)) return;
        }
    }
L_000bc400:;
    {
        cpu->r[14] = 0x000bc404u; fn_0018ba60(cpu);
    }
L_000bc404:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bc408:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_000bc40c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc410u)) return;
    }
L_000bc410:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000bc414:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc418:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bc41c:;
    {
        goto L_000bc3cc;
    }
}

/* _ZN5Scene19SpawnAnimatedObjectEi @ 000bc420 (arm) */
void fn_000bc420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc420:;
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
L_000bc424:;
    {
        cpu->r[6] = rd32(0x000bc42cu + + 0x290u);
    }
L_000bc428:;
    {
        cpu->r[2] = rd32(0x000bc430u + + 0x290u);
    }
L_000bc42c:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000bc430:;
    {
        cpu->r[6] = add_flags(cpu, 0x000bc438u, cpu->r[6], 0, 0);
    }
L_000bc434:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc438:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bc43c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bc440:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000bc444:;
    {
        cpu->r[0] = 0x000001acu;
    }
L_000bc448:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bc44c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000bc450:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_000bc454:;
    {
        cpu->r[14] = 0x000bc458u; fn_0018ba6c(cpu);
    }
L_000bc458:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bc45c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000bc460:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bc464:;
    {
        cpu->r[14] = 0x000bc468u; fn_000ea704(cpu);
    }
L_000bc468:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bc46c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc470:;
    {
        cpu->r[7] = rd16(cpu->r[4] + + 0xe8u);
    }
L_000bc474:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bc478:;
    {
        cpu->r[14] = 0x000bc47cu; fn_00132894(cpu);
    }
L_000bc47c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000bc480:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000bc484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc644;
        }
    }
L_000bc488:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bc48c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bc490:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc494:;
    {
        cpu->r[14] = 0x000bc498u; fn_00132b38(cpu);
    }
L_000bc498:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc49c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bc67c;
        }
    }
L_000bc4a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000bc4a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bc4a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000bc4ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc4b0:;
    {
        cpu->r[14] = 0x000bc4b8u;
    }
L_000bc4b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc4b8u)) return;
    }
L_000bc4b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc4bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bc67c;
        }
    }
L_000bc4c0:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000bc4c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc4c8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bc4cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc4d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc514;
        }
    }
L_000bc4d4:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000bc4d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc4dc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bc4e0:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_000bc4e4:;
    {
        cpu->r[3] = rd16(cpu->r[1] + + 0xe8u);
    }
L_000bc4e8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000bc4ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000bc4f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc508;
        }
    }
L_000bc4f4:;
    {
        goto L_000bc5cc;
    }
L_000bc4f8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000bc4fc:;
    {
        cpu->r[2] = rd16(cpu->r[1] + + 0xe8u);
    }
L_000bc500:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000bc504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc5cc;
        }
    }
L_000bc508:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000bc50c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000bc510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc4f8;
        }
    }
L_000bc514:;
    {
        cpu->r[3] = rd32(0x000bc51cu + + 0x1a8u);
    }
L_000bc518:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000bc51c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc520:;
    {
        cpu->r[8] = 0x00001c6cu;
    }
L_000bc524:;
    {
        cpu->r[7] = 0x00001c70u;
    }
L_000bc528:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000bc52c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000bc530:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bc534:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bc538:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000bc53c:;
    {
        cpu->r[14] = 0x000bc540u; fn_00135de0(cpu);
    }
L_000bc540:;
    {
        cpu->r[1] = 0x000059d7u;
    }
L_000bc544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bc548:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000bc54c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000bc550:;
    {
        cpu->r[14] = 0x000bc554u; fn_00135de0(cpu);
    }
L_000bc554:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000bc558:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000bc55c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bc560:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000bc564:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_000bc568:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bc56c:;
    {
        cpu->r[14] = 0x000bc570u; fn_00136660(cpu);
    }
L_000bc570:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bc574:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000bc578:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000bc57c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
        }
    }
L_000bc580:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
        }
    }
L_000bc584:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc5e4;
        }
    }
L_000bc588:;
    {
        cpu->r[2] = 0x00001c68u;
    }
L_000bc58c:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000bc590:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bc594:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc598:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bc59c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000bc5a0:;
    {
        wr32(cpu->r[2] + cpu->r[0], cpu->r[4]);
    }
L_000bc5a4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000bc5a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bc5ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bc5b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000bc5b4:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000bc5b8:;
    {
        cpu->r[14] = 0x000bc5c0u;
    }
L_000bc5bc:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc5c0u)) return;
    }
L_000bc5c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bc5c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bc5c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc5ccu)) return;
    }
L_000bc5cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000ecu, 0, 0);
    }
L_000bc5d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000ecu, 0, 0);
    }
L_000bc5d4:;
    {
        cpu->r[14] = 0x000bc5d8u; fn_000e95d0(cpu);
    }
L_000bc5d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bc5dc:;
    {
        wr8(cpu->r[4] + + 0x11du, cpu->r[3]);
    }
L_000bc5e0:;
    {
        goto L_000bc514;
    }
L_000bc5e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000bc5e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 1u, &shc), 0, 1);
    }
L_000bc5ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc620;
        }
    }
L_000bc5f0:;
    {
        cpu->r[10] = 0x00001c68u;
    }
L_000bc5f4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bc5f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000bc5fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc63c;
        }
    }
L_000bc604:;
    {
        cpu->r[14] = 0x000bc608u; fn_0018ba60(cpu);
    }
L_000bc608:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[6]);
    }
L_000bc60c:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[6]);
    }
L_000bc610:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bc614:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[6]);
    }
L_000bc618:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000bc61c:;
    {
        goto L_000bc588;
    }
L_000bc620:;
    {
        cpu->r[10] = 0x00001c68u;
    }
L_000bc624:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bc628:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000bc62c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc694;
        }
    }
L_000bc634:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000bc638:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bc5a4;
        }
    }
L_000bc63c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000bc640:;
    {
        goto L_000bc588;
    }
L_000bc644:;
    {
        cpu->r[1] = rd32(0x000bc64cu + + 0x7cu);
    }
L_000bc648:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bc64c:;
    {
        cpu->r[12] = rd32(0x000bc654u + + 0x78u);
    }
L_000bc650:;
    {
        cpu->r[14] = 0x00003fe5u;
    }
L_000bc654:;
    {
        cpu->r[2] = rd32(0x000bc65cu + + 0x74u);
    }
L_000bc658:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bc660u, cpu->r[1], 0, 0);
    }
L_000bc65c:;
    {
        cpu->r[3] = rd32(0x000bc664u + + 0x70u);
    }
L_000bc660:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bc668u, cpu->r[12], 0, 0);
    }
L_000bc664:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bc66cu, cpu->r[2], 0, 0);
    }
L_000bc668:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000acu, 0, 0);
    }
L_000bc66c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bc674u, cpu->r[3], 0, 0);
    }
L_000bc670:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bc674:;
    {
        cpu->r[14] = 0x000bc678u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bc678:;
    {
        goto L_000bc488;
    }
L_000bc67c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bc680:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000bc684:;
    {
        cpu->r[14] = 0x000bc68cu;
    }
L_000bc688:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc68cu)) return;
    }
L_000bc68c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bc690:;
    {
        goto L_000bc5c0;
    }
L_000bc694:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000bc698:;
    {
        cpu->r[14] = 0x000bc69cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000bc69c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc6a0:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[0]);
    }
L_000bc6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc5a4;
        }
    }
L_000bc6a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bc6ac:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[6]);
    }
L_000bc6b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000bc6b4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000bc6b8:;
    {
        goto L_000bc588;
    }
}

/* _ZN5Scene17MP_ServerSendDataEv @ 000bc6d8 (arm) */
void fn_000bc6d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc6d8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bc6dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc6e0:;
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
L_000bc6e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bc6e8:;
    {
        cpu->r[9] = 0x00000016u;
    }
L_000bc6ec:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000bc6f0:;
    {
        cpu->r[4] = rd32(0x000bc6f8u + + 0x88u);
    }
L_000bc6f4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bc6f8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000bc700u, cpu->r[4], 0, 0);
    }
L_000bc6fc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[8]; cpu->r[9] = v;
    }
L_000bc700:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000bc704:;
    {
        cpu->r[14] = 0x000bc708u; imp__Znaj(cpu); /* _Znaj */
    }
L_000bc708:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000bc70c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bc710:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bc73c;
        }
    }
L_000bc714:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000bc718:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000bc71c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bc720:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000bc724:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000bc728:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bc72c:;
    {
        cpu->r[14] = 0x000bc730u; fn_000b9fb0(cpu);
    }
L_000bc730:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_000bc734:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000016u, 0, 0);
    }
L_000bc738:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc71c;
        }
    }
L_000bc73c:;
    {
        cpu->r[0] = rd32(0x000bc744u + + 0x40u);
    }
L_000bc740:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000bc744:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000bc748:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000bc74c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000bc750:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000bc754:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000bc758:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000bc75c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bc760:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bc764:;
    {
        cpu->r[14] = 0x000bc76cu;
    }
L_000bc768:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc76cu)) return;
    }
L_000bc76c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bc770:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc774u)) return;
        }
    }
L_000bc774:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bc778:;
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
L_000bc77c:;
    {
        return fn_0018ba60(cpu);
    }
}

/* _ZN11StaticArrayIP11SceneObjectE6ResizeEi @ 000bc788 (arm) */
void fn_000bc788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc788:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bc78c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bc790:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000bc794:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000bc798:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc79c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc7ac;
        }
    }
L_000bc7a0:;
    {
        cpu->r[14] = 0x000bc7a4u; fn_0018ba60(cpu);
    }
L_000bc7a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bc7a8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000bc7ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bc7b0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_000bc7b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc7b8u)) return;
        }
    }
L_000bc7b8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000bc7bc:;
    {
        cpu->r[14] = 0x000bc7c0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000bc7c0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000bc7c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc7c8u)) return;
    }
}

/* _ZN11StaticArrayIP8CPowerupE6ResizeEi @ 000bc7c8 (arm) */
void fn_000bc7c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc7c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bc7cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bc7d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000bc7d4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000bc7d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc7dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc7ec;
        }
    }
L_000bc7e0:;
    {
        cpu->r[14] = 0x000bc7e4u; fn_0018ba60(cpu);
    }
L_000bc7e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bc7e8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_000bc7ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bc7f0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_000bc7f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc7f8u)) return;
        }
    }
L_000bc7f8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_000bc7fc:;
    {
        cpu->r[14] = 0x000bc800u; imp__Znaj(cpu); /* _Znaj */
    }
L_000bc800:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000bc804:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc808u)) return;
    }
}

/* _ZN5Scene14SpawnCopBehindEP4CCariiNS0_7CopTypeE @ 000bc808 (arm) */
void fn_000bc808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc808:;
    {
        cpu->r[12] = rd32(0x000bc810u + + 0x1d4u);
    }
L_000bc80c:;
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
L_000bc810:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000bc814:;
    {
        cpu->r[1] = rd32(0x000bc81cu + + 0x1ccu);
    }
L_000bc818:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bc820u, cpu->r[12], 0, 0);
    }
L_000bc81c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bc820:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bc824:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000bc828:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000bc82c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000bc830:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000bc834:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_000bc838:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000bc83c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc87c;
        }
    }
L_000bc840:;
    {
        cpu->r[7] = 0x00001788u;
    }
L_000bc844:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000bc848:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bc84c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc87c;
        }
    }
L_000bc850:;
    {
        cpu->r[0] = 0x00001820u;
    }
L_000bc854:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[0]);
    }
L_000bc858:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc85c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc87c;
        }
    }
L_000bc860:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_000bc864:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000bc868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc888;
        }
    }
L_000bc86c:;
    {
        cpu->r[3] = 0x000018c4u;
    }
L_000bc870:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bc874:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000bc878:;
    {
        goto L_000bc880;
    }
L_000bc87c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bc880:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bc884:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bc888u)) return;
    }
L_000bc888:;
    {
        uint32_t v = cpu->r[1] & 0x20000000u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_000bc88c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[1];
        }
    }
L_000bc890:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[1];
        }
    }
L_000bc894:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x000018c0u;
        }
    }
L_000bc898:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc86c;
        }
    }
L_000bc89c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000bc8a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
    }
L_000bc8a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x9cu);
    }
L_000bc8a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bc8ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc8d0;
        }
    }
L_000bc8b0:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bc8b4:;
    {
        { uint32_t v = cpu->r[9] & 0x00100000u; set_nz(cpu, v); }
    }
L_000bc8b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc8d0;
        }
    }
L_000bc8bc:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000bc8c0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 1);
    }
L_000bc8c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc9ac;
        }
    }
L_000bc8c8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_000bc8cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc9c8;
        }
    }
L_000bc8d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000bc8d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000001cu, 1, 1);
    }
L_000bc8d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc89c;
        }
    }
L_000bc8dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bc8e0:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
        }
    }
L_000bc8e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[10];
        }
    }
L_000bc8e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bc8ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000018c4u;
        }
    }
L_000bc8f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_000bc8f4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
        }
    }
L_000bc8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bc880;
        }
    }
L_000bc8fc:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000bc900:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000bc904:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bc908:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bc90c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x000000b8u, 0, 0);
    }
L_000bc910:;
    {
        cpu->r[7] = 0x00000007u;
    }
L_000bc914:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000bc918:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000bc91c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000bc920:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00001840u, 0, 0);
    }
L_000bc924:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000bc928:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bc92c:;
    {
        cpu->r[14] = 0x000bc930u; fn_0016310c(cpu);
    }
L_000bc930:;
    {
        cpu->r[3] = 0x000018c4u;
    }
L_000bc934:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000bc938:;
    {
        cpu->r[14] = 0x000018b8u;
    }
L_000bc93c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000bc940:;
    {
        cpu->r[3] = 0x00001898u;
    }
L_000bc944:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000bc948:;
    {
        wr32(cpu->r[6] + cpu->r[14], cpu->r[4]);
    }
L_000bc94c:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[12]);
    }
L_000bc950:;
    {
        cpu->r[3] = 0x00001850u;
    }
L_000bc954:;
    {
        cpu->r[14] = 0x000017b4u;
    }
L_000bc958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_000bc95c:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[12]);
    }
L_000bc960:;
    {
        cpu->r[3] = 0x00001851u;
    }
L_000bc964:;
    {
        wr32(cpu->r[6] + cpu->r[14], cpu->r[7]);
    }
L_000bc968:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000bc96c:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[12]);
    }
L_000bc970:;
    {
        cpu->r[3] = 0x00001852u;
    }
L_000bc974:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000bc978:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[12]);
    }
L_000bc97c:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000bc980:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bc984:;
    {
        cpu->r[14] = 0x000bc988u; fn_00160820(cpu);
    }
L_000bc988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_000bc98c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000bc990:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000bc994:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000bc998:;
    {
        cpu->r[12] = 0x000000a0u;
    }
L_000bc99c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bc9a0:;
    {
        cpu->r[14] = 0x000bc9a4u; fn_00160820(cpu);
    }
L_000bc9a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bc9a8:;
    {
        goto L_000bc880;
    }
L_000bc9ac:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_000bc9b0:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_000bc9b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc8d0;
        }
    }
L_000bc9b8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x498u);
    }
L_000bc9bc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000bc9c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_000bc9c4:;
    {
        goto L_000bc8d0;
    }
L_000bc9c8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_000bc9cc:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_000bc9d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bc8d0;
        }
    }
L_000bc9d4:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x498u);
    }
L_000bc9d8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000bc9dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_000bc9e0:;
    {
        goto L_000bc8d0;
    }
}

/* _ZN5Scene27GetCurrentVisibilitySectionEv @ 000bc9ec (arm) */
void fn_000bc9ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bc9ec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bc9f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000bc9f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bc9f8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000bc9fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bca00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000bca04:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000bca08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000bca0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000bca10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bca4c;
        }
    }
L_000bca14:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x8u);
    }
L_000bca18:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000bca1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bca20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000bca24:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00006300u, 0, 0);
    }
L_000bca28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bca2c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000001eu, 0, 0);
    }
L_000bca30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000bca34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_000bca38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000010cu, 0, 0);
    }
L_000bca3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000bca40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bca44:;
    {
        cpu->r[14] = 0x000bca48u; fn_0017bf58(cpu);
    }
L_000bca48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000bca4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000bca50:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bca54u)) return;
    }
}

/* _ZN5Scene14UpdateCarColorEi @ 000bca54 (arm) */
void fn_000bca54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bca54:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bca58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bca5c:;
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
L_000bca60:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000bca64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bca68:;
    {
        cpu->r[5] = rd32(0x000bca70u + + 0x424u);
    }
L_000bca6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bca70:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bca74:;
    {
        cpu->r[7] = rd32(0x000bca7cu + + 0x41cu);
    }
L_000bca78:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000bca7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bca80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bca84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bca88:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000bca8c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000bca94u, cpu->r[5], 0, 0);
    }
L_000bca90:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000bca94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bca98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_000bca9c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000bcaa0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bcaa4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bcaa8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bcaac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bcab0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000bcab4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000bcab8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000bcabc:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000bcac0:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000bcac4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bcac8:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[10], 1, 0);
    }
L_000bcacc:;
    {
        cpu->r[14] = 0x000bcad0u; fn_00096b5c(cpu);
    }
L_000bcad0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[10];
    }
L_000bcad4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bcad8:;
    {
        cpu->r[2] = 0x00008c30u;
    }
L_000bcadc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bcae0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bcae4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bcaecu + + 0x394u);
    }
L_000bcae8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x42cu);
    }
L_000bcaec:;
    {
        cpu->r[3] = 0x00008c32u;
    }
L_000bcaf0:;
    {
        cpu->r[12] = rd16(cpu->r[4] + cpu->r[2]);
    }
L_000bcaf4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bcaf8:;
    {
        cpu->r[3] = rd16(cpu->r[4] + cpu->r[3]);
    }
L_000bcafc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000bcb00:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000bcb04:;
    {
        vfp_vsub(cpu, 12, 12, 10);
    }
L_000bcb08:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000bcb0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000bcb10:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000bcb14:;
    {
        vfp_vsub(cpu, 16, 16, 11);
    }
L_000bcb18:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000bcb1c:;
    {
        vfp_vdiv(cpu, 14, 12, 14);
    }
L_000bcb20:;
    {
        vfp_vdiv(cpu, 12, 16, 13);
    }
L_000bcb24:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_000bcb28:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000bcb2c:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_000bcb30:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000bcb34:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_000bcb38:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bcb3c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000bcb40:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000bcb44:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bcb48:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bcb4c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000bcb50:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bcb54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bcb6c;
        }
    }
L_000bcb58:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_000bcb5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000bcb60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000bcb64:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[10], 3, 31u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_000bcb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bcdc4;
        }
    }
L_000bcb6c:;
    {
        cpu->r[1] = rd32(0x000bcb74u + + 0x328u);
    }
L_000bcb70:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bcb74:;
    {
        cpu->r[12] = rd32(0x000bcb7cu + + 0x324u);
    }
L_000bcb78:;
    {
        cpu->r[14] = 0x00002696u;
    }
L_000bcb7c:;
    {
        cpu->r[2] = rd32(0x000bcb84u + + 0x320u);
    }
L_000bcb80:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bcb88u, cpu->r[1], 0, 0);
    }
L_000bcb84:;
    {
        cpu->r[3] = rd32(0x000bcb8cu + + 0x31cu);
    }
L_000bcb88:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bcb90u, cpu->r[12], 0, 0);
    }
L_000bcb8c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bcb94u, cpu->r[2], 0, 0);
    }
L_000bcb90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000c0u, 0, 0);
    }
L_000bcb94:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bcb9cu, cpu->r[3], 0, 0);
    }
L_000bcb98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bcb9c:;
    {
        cpu->r[14] = 0x000bcba0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bcba0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bcba4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000bcba8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bcbac:;
    {
        cpu->r[14] = 0x000bcbb0u; fn_000b9c88(cpu);
    }
L_000bcbb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000bcbb4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000bcbb8:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000bcbbc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000bcbc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000bcbc4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000bcbc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bcdf0;
        }
    }
L_000bcbcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000bcbd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bcdf0;
        }
    }
L_000bcbd4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000bcbdcu + + 0x2a8u);
    }
L_000bcbd8:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bcbdc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bcbe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bcbe4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000bcbe8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000bcbec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bcbf0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bcbf4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bcbf8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
        }
    }
L_000bcbfc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bcc00:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bcc04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
        }
    }
L_000bcc08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
        }
    }
L_000bcc0c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000bcc10:;
    {
        cpu->r[14] = 0x000bcc14u; fn_0015d920(cpu);
    }
L_000bcc14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bcc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bcd38;
        }
    }
L_000bcc1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00006200u, 0, 0);
    }
L_000bcc20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000au, 0, 0);
    }
L_000bcc24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000bcc28:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x6u);
    }
L_000bcc2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000c7u, 1, 1);
    }
L_000bcc30:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000bcdd0;
        }
    }
L_000bcc34:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000bcc38:;
    {
        cpu->r[2] = rd32(0x000bcc40u + + 0x26cu);
    }
L_000bcc3c:;
    {
        cpu->r[3] = 0x0000438cu;
    }
L_000bcc40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bcc44:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bcc48:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000bcc4c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bcc50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bcc54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000bcc58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bcc5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bcdf8;
        }
    }
L_000bcc60:;
    {
        cpu->r[3] = rd32(0x000bcc68u + + 0x248u);
    }
L_000bcc64:;
    {
        cpu->r[6] = 0x00001288u;
    }
L_000bcc68:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000bcc6c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcc70:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bcc74:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bcc78:;
    {
        cpu->r[14] = 0x000bcc7cu; fn_00147cd8(cpu);
    }
L_000bcc7c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bcc80:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000bcc84:;
    {
        cpu->r[8] = 0x00004368u;
    }
L_000bcc88:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000bcc8c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_000bcc90:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[7]);
    }
L_000bcc94:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bcc98:;
    {
        cpu->r[6] = 0x00004374u;
    }
L_000bcc9c:;
    {
        cpu->r[14] = 0x000bcca0u; fn_00147cd8(cpu);
    }
L_000bcca0:;
    {
        cpu->r[1] = 0x0000436cu;
    }
L_000bcca4:;
    {
        cpu->r[2] = 0x00004378u;
    }
L_000bcca8:;
    {
        cpu->r[3] = 0x00004364u;
    }
L_000bccac:;
    {
        cpu->r[12] = 0x00004370u;
    }
L_000bccb0:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000bccb4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000bccb8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000bccbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bccc0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000bccc4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[8]);
    }
L_000bccc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000bcccc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000bccd0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_000bccd4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000bccd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000bccdc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_000bcce0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000bcce4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6]);
    }
L_000bcce8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000bccec:;
    {
        vfp_vadd(cpu, 12, 12, 13);
    }
L_000bccf0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000bccf4:;
    {
        cpu->r[2] = rd32(0x000bccfcu + + 0x1b8u);
    }
L_000bccf8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x000bcd00u + + 0x188u);
    }
L_000bccfc:;
    {
        cpu->r[3] = rd32(0x000bcd04u + + 0x1b4u);
    }
L_000bcd00:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bcd04:;
    {
        cpu->r[2] = rd32(0x000bcd0cu + + 0x1b0u);
    }
L_000bcd08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcd0c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bcd10:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000bcd14:;
    {
        cpu->r[2] = rd32(0x000bcd1cu + + 0x1a4u);
    }
L_000bcd18:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_000bcd1c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000bcd20:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bcd24:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_000bcd28:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bcd2c:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[7]);
    }
L_000bcd30:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bcd34:;
    {
        goto L_000bcdb8;
    }
L_000bcd38:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00006200u, 0, 0);
    }
L_000bcd3c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000bcd44u + + 0x144u);
    }
L_000bcd40:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000au, 0, 0);
    }
L_000bcd44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bcd4cu + + 0x140u);
    }
L_000bcd48:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000bcd4c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x6u);
    }
L_000bcd50:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000bcd54:;
    {
        cpu->r[3] = rd32(0x000bcd5cu + + 0x160u);
    }
L_000bcd58:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000bcd5c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x5u);
    }
L_000bcd60:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000bcd64:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x4u);
    }
L_000bcd68:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000bcd6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcd70:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000bcd74:;
    {
        cpu->r[3] = rd32(0x000bcd7cu + + 0x13cu);
    }
L_000bcd78:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcd7c:;
    {
        cpu->r[3] = rd32(0x000bcd84u + + 0x130u);
    }
L_000bcd80:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcd84:;
    {
        cpu->r[3] = rd32(0x000bcd8cu + + 0x134u);
    }
L_000bcd88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bcd8c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bcd90:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bcd94:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_000bcd98:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000bcd9c:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_000bcda0:;
    {
        vfp_vadd(cpu, 13, 13, 16);
    }
L_000bcda4:;
    {
        vfp_vadd(cpu, 15, 12, 16);
    }
L_000bcda8:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bcdac:;
    {
        vfp_vadd(cpu, 16, 14, 16);
    }
L_000bcdb0:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bcdb4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bcdb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bcdbc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000bcdc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bcdc4u)) return;
    }
L_000bcdc4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000bcdc8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bcba0;
        }
    }
L_000bcdcc:;
    {
        goto L_000bcb6c;
    }
L_000bcdd0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x5u);
    }
L_000bcdd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000c7u, 1, 1);
    }
L_000bcdd8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bcc34;
        }
    }
L_000bcddc:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0x4u);
    }
L_000bcde0:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000c7u, 1, 1);
    }
L_000bcde4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000bcde8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000bcdec:;
    {
        goto L_000bcc38;
    }
L_000bcdf0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000bcdf8u + + 0x98u);
    }
L_000bcdf4:;
    {
        goto L_000bcbd8;
    }
L_000bcdf8:;
    {
        cpu->r[3] = rd32(0x000bce00u + + 0xb0u);
    }
L_000bcdfc:;
    {
        cpu->r[8] = 0x00001288u;
    }
L_000bce00:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000bce04:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000bce08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000bce0c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bce10:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000bce14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bce18:;
    {
        cpu->r[14] = 0x000bce1cu; fn_00147cd8(cpu);
    }
L_000bce1c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000bce20:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000bce24:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[7]);
    }
L_000bce28:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bce2c:;
    {
        cpu->r[14] = 0x000bce30u; fn_00147cd8(cpu);
    }
L_000bce30:;
    {
        cpu->r[3] = rd32(0x000bce38u + + 0x80u);
    }
L_000bce34:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000bce3cu + + 0x4cu);
    }
L_000bce38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bce40u + + 0x4cu);
    }
L_000bce3c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bce40:;
    {
        cpu->r[3] = rd32(0x000bce48u + + 0x6cu);
    }
L_000bce44:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bce48:;
    {
        cpu->r[3] = rd32(0x000bce50u + + 0x6cu);
    }
L_000bce4c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bce50:;
    {
        cpu->r[3] = rd32(0x000bce58u + + 0x68u);
    }
L_000bce54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bce58:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[7]);
    }
L_000bce5c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x6u);
    }
L_000bce60:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000bce64:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x5u);
    }
L_000bce68:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000bce6c:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x4u);
    }
L_000bce70:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000bce74:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000bce78:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000bce7c:;
    {
        goto L_000bcd8c;
    }
}

/* _ZN5Scene14GetRankTextureEv @ 000bcec4 (arm) */
void fn_000bcec4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bcec4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bcec8:;
    {
        cpu->r[4] = 0x000087b8u;
    }
L_000bcecc:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000bced0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bced4:;
    {
        cpu->r[3] = rd32(0x000bcedcu + + 0x2cu);
    }
L_000bced8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000bcedc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bcee4u, cpu->r[3], 0, 0);
    }
L_000bcee0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bcee4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bcee8u)) return;
        }
    }
L_000bcee8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bceec:;
    {
        cpu->r[0] = rd32(0x000bcef4u + + 0x18u);
    }
L_000bcef0:;
    {
        cpu->r[1] = 0x00005146u;
    }
L_000bcef4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000bcef8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000bcefc:;
    {
        cpu->r[14] = 0x000bcf00u; fn_00135cf4(cpu);
    }
L_000bcf00:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[0]);
    }
L_000bcf04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bcf08u)) return;
    }
}

/* _ZN5Scene19MP_AddEndRacePlayerEii @ 000bcf10 (arm) */
void fn_000bcf10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bcf10:;
    {
        cpu->r[12] = 0x00001c90u;
    }
L_000bcf14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x000018c0u, 0, 0);
    }
L_000bcf18:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bcf1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000032u, 0, 0);
    }
L_000bcf20:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000bcf24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bcf28:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000bcf2c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000bcf30:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_000bcf34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x000063c4u;
        }
    }
L_000bcf38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[12]);
        }
    }
L_000bcf3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_000bcf40:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[4]);
        }
    }
L_000bcf44:;
    {
        cpu->r[0] = rd32(0x000bcf4cu + + 0x8u);
    }
L_000bcf48:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bcf50u, cpu->r[0], 0, 0);
    }
L_000bcf4c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000bcf50:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN5Scene24MP_ServerSendEndRaceListEv @ 000bcf58 (arm) */
void fn_000bcf58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bcf58:;
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
L_000bcf5c:;
    {
        cpu->r[1] = rd32(0x000bcf64u + + 0x17cu);
    }
L_000bcf60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000bcf64:;
    {
        cpu->r[2] = rd32(0x000bcf6cu + + 0x178u);
    }
L_000bcf68:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bcf70u, cpu->r[1], 0, 0);
    }
L_000bcf6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000bcf70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000bcf74:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bcf78:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000bcf7c:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000bcf80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bcf84:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bcf88:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000bcf8c:;
    {
        cpu->r[1] = 0x000063c4u;
    }
L_000bcf90:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000bcf94:;
    {
        cpu->r[5] = 0x00000018u;
    }
L_000bcf98:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bcf9c:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_000bcfa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000bcfa4:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_000bcfa8:;
    {
        cpu->r[9] = rd32(0x000bcfb0u + + 0x138u);
    }
L_000bcfac:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_000bcfb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000bcfb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bcfb8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000bcfbc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000bcfc0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bcfc4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_000bcfc8:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000bcfcc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcfd0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000bcfd8u, cpu->r[9], 0, 0);
    }
L_000bcfd4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcfd8:;
    {
        wr8(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_000bcfdc:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_000bcfe0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcfe4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcfe8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcfec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcff0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcff4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000bcff8:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_000bcffc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000bd000:;
    {
        wr8(cpu->r[13] + + 0x11u, cpu->r[3]);
    }
L_000bd004:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000018c0u, 0, 0);
    }
L_000bd008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000032u, 0, 0);
    }
L_000bd00c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000bd010:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000bd014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd088;
        }
    }
L_000bd018:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[7]);
    }
L_000bd01c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bd020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000bd024:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000bd028:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000bd02c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000bd030:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_000bd034:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000bd038:;
    {
        wr8(cpu->r[5] + - 0x30u, cpu->r[4]);
    }
L_000bd03c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_000bd040:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000bd044:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000bd048:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_000bd04c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_000bd050:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_000bd054:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000bd058:;
    {
        wr8(cpu->r[8] + - 0x30u, cpu->r[1]);
    }
L_000bd05c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[8] = v;
    }
L_000bd060:;
    {
        wr8(cpu->r[6] + - 0x30u, cpu->r[8]);
    }
L_000bd064:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 16u, &shc); cpu->r[6] = v;
    }
L_000bd068:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 24u, &shc); cpu->r[1] = v;
    }
L_000bd06c:;
    {
        wr8(cpu->r[14] + - 0x30u, cpu->r[6]);
    }
L_000bd070:;
    {
        wr8(cpu->r[12] + - 0x30u, cpu->r[1]);
    }
L_000bd074:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000bd078:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000bd07c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bd080:;
    {
        cpu->r[14] = 0x000bd084u; fn_001d0ac4(cpu);
    }
L_000bd084:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[7]);
    }
L_000bd088:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bd08c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_000bd090:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd004;
        }
    }
L_000bd094:;
    {
        cpu->r[12] = 0x000063e8u;
    }
L_000bd098:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000bd09c:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_000bd0a0:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000bd0a4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bd0a8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd0ac:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd0b0:;
    {
        cpu->r[14] = 0x000bd0b8u;
    }
L_000bd0b4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd0b8u)) return;
    }
L_000bd0b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bd0bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000bd0c0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000bd0c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000bd0c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd0cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000bd0d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd0dc;
        }
    }
L_000bd0d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000bd0d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd0dcu)) return;
    }
L_000bd0dc:;
    {
        cpu->r[14] = 0x000bd0e0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000bd0e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 3, 9u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000bd0e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000bd0e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN5Scene26MP_ServerSendClientHasQuitEii @ 000bd0ec (arm) */
void fn_000bd0ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd0ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bd0f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bd0f4:;
    {
        cpu->r[0] = rd32(0x000bd0fcu + + 0x88u);
    }
L_000bd0f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bd0fc:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000bd100:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[1]);
    }
L_000bd104:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000bd108:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000bd10c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd114u, cpu->r[0], 0, 0);
    }
L_000bd110:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_000bd114:;
    {
        cpu->r[4] = rd32(0x000bd11cu + + 0x6cu);
    }
L_000bd118:;
    {
        cpu->r[14] = 0x0000000bu;
    }
L_000bd11c:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[12]);
    }
L_000bd120:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000bd124:;
    {
        cpu->r[4] = add_flags(cpu, 0x000bd12cu, cpu->r[4], 0, 0);
    }
L_000bd128:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000bd12c:;
    {
        cpu->r[14] = 0x000bd130u; fn_001d0ac4(cpu);
    }
L_000bd130:;
    {
        cpu->r[0] = rd32(0x000bd138u + + 0x54u);
    }
L_000bd134:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bd138:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000bd13c:;
    {
        cpu->r[3] = 0x000000ffu;
    }
L_000bd140:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000bd144:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000bd148:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000bd14c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000bd150:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd154:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd158:;
    {
        cpu->r[14] = 0x000bd160u;
    }
L_000bd15c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd160u)) return;
    }
L_000bd160:;
    {
        cpu->r[2] = 0x00001b3cu;
    }
L_000bd164:;
    {
        cpu->r[3] = 0x00001b40u;
    }
L_000bd168:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bd16c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bd170:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_000bd174:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd178:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000bd17c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bd180:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd184u)) return;
    }
}

/* _ZN5Scene19MP_ClientSendPausedEb @ 000bd190 (arm) */
void fn_000bd190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd190:;
    {
        cpu->r[3] = rd32(0x000bd198u + + 0x68u);
    }
L_000bd194:;
    {
        cpu->r[2] = rd32(0x000bd19cu + + 0x68u);
    }
L_000bd198:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd1a0u, cpu->r[3], 0, 0);
    }
L_000bd19c:;
    {
        cpu->r[0] = rd32(0x000bd1a4u + + 0x64u);
    }
L_000bd1a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000bd1a4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bd1a8:;
    {
        cpu->r[3] = 0x000063ecu;
    }
L_000bd1ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bd1b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd1b8u, cpu->r[0], 0, 0);
    }
L_000bd1b4:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000bd1b8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000bd1bc:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_000bd1c0:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[1]);
    }
L_000bd1c4:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bd1c8:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000bd1cc:;
    {
        cpu->r[14] = 0x000bd1d0u; fn_001d0ac4(cpu);
    }
L_000bd1d0:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000bd1d4:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000bd1d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bd1dc:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000bd1e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bd1e4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000bd1e8:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd1ec:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd1f0:;
    {
        cpu->r[14] = 0x000bd1f8u;
    }
L_000bd1f4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd1f8u)) return;
    }
L_000bd1f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bd1fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd200u)) return;
    }
}

/* _ZN5Scene18MP_ClientSendReadyEv @ 000bd20c (arm) */
void fn_000bd20c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd20c:;
    {
        cpu->r[3] = rd32(0x000bd214u + + 0x7cu);
    }
L_000bd210:;
    {
        cpu->r[2] = rd32(0x000bd218u + + 0x7cu);
    }
L_000bd214:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd21cu, cpu->r[3], 0, 0);
    }
L_000bd218:;
    {
        cpu->r[0] = rd32(0x000bd220u + + 0x78u);
    }
L_000bd21c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000bd220:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bd224:;
    {
        cpu->r[3] = 0x000063ecu;
    }
L_000bd228:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bd22c:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd234u, cpu->r[0], 0, 0);
    }
L_000bd230:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000bd234:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000bd238:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000bd23c:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bd240:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000bd244:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000bd248:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[2]);
    }
L_000bd24c:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000bd250:;
    {
        cpu->r[14] = 0x000bd254u; fn_001d0ac4(cpu);
    }
L_000bd254:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000bd258:;
    {
        cpu->r[0] = 0x000063e8u;
    }
L_000bd25c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bd260:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000bd264:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bd268:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000bd26c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd270:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd274:;
    {
        cpu->r[14] = 0x000bd27cu;
    }
L_000bd278:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd27cu)) return;
    }
L_000bd27c:;
    {
        cpu->r[0] = rd32(0x000bd284u + + 0x18u);
    }
L_000bd280:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd288u, cpu->r[0], 0, 0);
    }
L_000bd284:;
    {
        cpu->r[14] = 0x000bd288u; fn_001d0ac4(cpu);
    }
L_000bd288:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bd28c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd290u)) return;
    }
}

/* _ZN5Scene22MP_ServerSendStartGameEi @ 000bd2a0 (arm) */
void fn_000bd2a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd2a0:;
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
L_000bd2a4:;
    {
        cpu->r[4] = rd32(0x000bd2acu + + 0xa8u);
    }
L_000bd2a8:;
    {
        cpu->r[3] = rd32(0x000bd2b0u + + 0xa8u);
    }
L_000bd2ac:;
    {
        cpu->r[6] = 0x000063e8u;
    }
L_000bd2b0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000bd2b8u, cpu->r[4], 0, 0);
    }
L_000bd2b4:;
    {
        cpu->r[5] = rd32(0x000bd2bcu + + 0xa0u);
    }
L_000bd2b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_000bd2bc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000bd2c0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bd2c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bd2c8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bd2cc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bd2d0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000bd2d4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000bd2d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000bd2dc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xc0u);
    }
L_000bd2e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd2e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd334;
        }
    }
L_000bd2e8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000bd2ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bd2f0:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000bd2f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bd2f8:;
    {
        cpu->r[14] = 0x000bd2fcu; imp_memset(cpu); /* memset */
    }
L_000bd2fc:;
    {
        cpu->r[0] = rd32(0x000bd304u + + 0x5cu);
    }
L_000bd300:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000bd304:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000bd308:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd310u, cpu->r[0], 0, 0);
    }
L_000bd30c:;
    {
        cpu->r[14] = 0x000bd310u; fn_001d0ac4(cpu);
    }
L_000bd310:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000bd314:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000bd318:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000bd31c:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000bd320:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000bd324:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd328:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd32c:;
    {
        cpu->r[14] = 0x000bd334u;
    }
L_000bd330:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd334u)) return;
    }
L_000bd334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bd338:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000bd33c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd340:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000bd344:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd350;
        }
    }
L_000bd348:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000bd34c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd350u)) return;
    }
L_000bd350:;
    {
        cpu->r[14] = 0x000bd354u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000bd354:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 4, 2u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000bd358:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_000bd35c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000bd360:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 2, 24u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN5Scene26MP_CheckAndResendStartGameEv @ 000bd364 (arm) */
void fn_000bd364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd364:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000bd368:;
    {
        cpu->r[5] = rd32(0x000bd370u + + 0x9cu);
    }
L_000bd36c:;
    {
        cpu->r[6] = rd32(0x000bd374u + + 0x9cu);
    }
L_000bd370:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000bd374:;
    {
        cpu->r[5] = add_flags(cpu, 0x000bd37cu, cpu->r[5], 0, 0);
    }
L_000bd378:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000bd37c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bd380:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd384:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000bd388:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bd38c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd390u)) return;
        }
    }
L_000bd390:;
    {
        cpu->r[2] = 0x0000672du;
    }
L_000bd394:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000bd398:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bd39c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd3a0u)) return;
        }
    }
L_000bd3a0:;
    {
        cpu->r[8] = 0x000063f0u;
    }
L_000bd3a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bd3a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd3ac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd3b0u)) return;
        }
    }
L_000bd3b0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bd3b4:;
    {
        goto L_000bd3d0;
    }
L_000bd3b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bd3bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bd3c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd3c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bd3c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bd3cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bd408;
        }
    }
L_000bd3d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_000bd3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00064000u, 0, 0);
    }
L_000bd3d8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xbf0u);
    }
L_000bd3dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd3e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd3b8;
        }
    }
L_000bd3e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000bd3e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bd3ec:;
    {
        cpu->r[14] = 0x000bd3f0u; fn_000bd2a0(cpu);
    }
L_000bd3f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bd3f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bd3f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd3fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000bd400:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bd404:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bd3d0;
        }
    }
L_000bd408:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd40cu)) return;
    }
}

/* _ZN5Scene24MP_ServerCheckSendResyncEv @ 000bd414 (arm) */
void fn_000bd414(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd414:;
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
L_000bd418:;
    {
        cpu->r[6] = rd32(0x000bd420u + + 0x164u);
    }
L_000bd41c:;
    {
        cpu->r[8] = rd32(0x000bd424u + + 0x164u);
    }
L_000bd420:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000bd424:;
    {
        cpu->r[6] = add_flags(cpu, 0x000bd42cu, cpu->r[6], 0, 0);
    }
L_000bd428:;
    {
        cpu->r[1] = rd32(0x000bd430u + + 0x15cu);
    }
L_000bd42c:;
    {
        cpu->r[9] = 0x000063f0u;
    }
L_000bd430:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000bd434:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000bd438:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000bd43c:;
    {
        cpu->r[1] = 0x00005f53u;
    }
L_000bd440:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd444:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bd448:;
    {
        cpu->r[10] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000bd44c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000bd450:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000bd454:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000bd458:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd45c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bd548;
        }
    }
L_000bd460:;
    {
        cpu->r[3] = rd32(0x000bd468u + + 0x128u);
    }
L_000bd464:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000bd468:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bd46c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000128u, 0, 0);
    }
L_000bd470:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd478u, cpu->r[3], 0, 0);
    }
L_000bd474:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bd478:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000bd47c:;
    {
        goto L_000bd4a0;
    }
L_000bd480:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000bd484:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bd488:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000bd48c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd490:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000bd494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000bd498:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bd49c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bd548;
        }
    }
L_000bd4a0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8u);
    }
L_000bd4a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd4a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd480;
        }
    }
L_000bd4ac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000bd4b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bd4b4:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000bd4b8:;
    {
        cpu->r[14] = 0x000bd4bcu; imp_memset(cpu); /* memset */
    }
L_000bd4bc:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_000bd4c0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bd4c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bd568;
        }
    }
L_000bd4c8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 0);
    }
L_000bd4cc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000014u, 1, 1);
    }
L_000bd4d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000014u;
        }
    }
L_000bd4d4:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[7]);
    }
L_000bd4d8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000bd4dc:;
    {
        cpu->r[14] = 0x000063e8u;
    }
L_000bd4e0:;
    {
        wr8(cpu->r[13] + + 0xdu, cpu->r[3]);
    }
L_000bd4e4:;
    {
        cpu->r[3] = 0x00000019u;
    }
L_000bd4e8:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000bd4ec:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000bd4f0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000bd4f4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000bd4f8:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000bd4fc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000bd500:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000bd504:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000bd508:;
    {
        cpu->r[14] = 0x000bd510u;
    }
L_000bd50c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd510u)) return;
    }
L_000bd510:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bd514:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000bd518:;
    {
        wr8(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_000bd51c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_000bd520:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000bd524:;
    {
        cpu->r[14] = 0x000bd528u; fn_001d0ac4(cpu);
    }
L_000bd528:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000bd52c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bd530:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000bd534:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd538:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000bd53c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000bd540:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bd544:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bd4a0;
        }
    }
L_000bd548:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bd54c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000bd550:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000bd554:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd558:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000bd55c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd580;
        }
    }
L_000bd560:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000bd564:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd568u)) return;
    }
L_000bd568:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000bd56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 1);
    }
L_000bd570:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x000000ecu;
        }
    }
L_000bd574:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = (~0x00000013u);
        }
    }
L_000bd578:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[7]);
        }
    }
L_000bd57c:;
    {
        goto L_000bd4d8;
    }
L_000bd580:;
    {
        cpu->r[14] = 0x000bd584u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000bd584:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 4, 31u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
        }
    }
L_000bd588:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_000bd58c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000bd590:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[12]);
        cpu->r[3] = rd16(cpu->r[5]);
        cpu->r[5] = wb_tmp;
        }
    }
}

/* _ZN5Scene26MP_ProcessUpdateCarMessageEPh @ 000bd594 (arm) */
void fn_000bd594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd594:;
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
L_000bd598:;
    {
        cpu->r[8] = rd8(cpu->r[1] + + 0x1u);
    }
L_000bd59c:;
    {
        cpu->r[6] = rd32(0x000bd5a4u + + 0x348u);
    }
L_000bd5a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000bd5a4:;
    {
        uint32_t v = cpu->r[8] & 0x0000000fu; cpu->r[8] = v;
    }
L_000bd5a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000bd5ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00006300u, 0, 0);
    }
L_000bd5b0:;
    {
        cpu->r[6] = add_flags(cpu, 0x000bd5b8u, cpu->r[6], 0, 0);
    }
L_000bd5b4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000001eu, 0, 0);
    }
L_000bd5b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000bd5bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_000bd5c0:;
    {
        cpu->r[5] = rd32(cpu->r[10] + + 0x4u);
    }
L_000bd5c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bd5c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd8b0;
        }
    }
L_000bd5cc:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bd5d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bd5d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bd5d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bd5dc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000bd5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd854;
        }
    }
L_000bd5e4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x6u);
    }
L_000bd5e8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5u);
    }
L_000bd5ec:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000bd5f0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x4u);
    }
L_000bd5f4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000bd5f8:;
    {
        cpu->r[14] = rd8(cpu->r[4] + + 0x8u);
    }
L_000bd5fc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000bd600:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x9u);
    }
L_000bd604:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[3] = v;
    }
L_000bd608:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x7u);
    }
L_000bd60c:;
    {
        cpu->r[9] = rd8(cpu->r[4] + + 0xbu);
    }
L_000bd610:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~shifter(cpu->r[3], 2, 16u, &shc));
        }
    }
L_000bd614:;
    {
        cpu->r[11] = rd8(cpu->r[4] + + 0x15u);
    }
L_000bd618:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x14u);
    }
L_000bd61c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~shifter(cpu->r[3], 3, 16u, &shc));
        }
    }
L_000bd620:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000bd624:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000bd628:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[11] = v;
    }
L_000bd62c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[14], 2, 8u, &shc); cpu->r[14] = v;
    }
L_000bd630:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xcu);
    }
L_000bd634:;
    {
        uint32_t v = cpu->r[14] | cpu->r[1]; cpu->r[14] = v;
    }
L_000bd638:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xau);
    }
L_000bd63c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = (~shifter(cpu->r[14], 2, 16u, &shc));
        }
    }
L_000bd640:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = (~shifter(cpu->r[14], 3, 16u, &shc));
        }
    }
L_000bd644:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000bd648:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 16u, &shc); cpu->r[2] = v;
    }
L_000bd64c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[9], 2, 8u, &shc); cpu->r[9] = v;
    }
L_000bd650:;
    {
        cpu->r[2] = 0x0000167cu;
    }
L_000bd654:;
    {
        uint32_t v = cpu->r[9] | cpu->r[1]; cpu->r[9] = v;
    }
L_000bd658:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bd65c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = (~shifter(cpu->r[9], 2, 16u, &shc));
        }
    }
L_000bd660:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = (~shifter(cpu->r[9], 3, 16u, &shc));
        }
    }
L_000bd664:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_000bd668:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bd85c;
        }
    }
L_000bd66c:;
    {
        cpu->r[10] = rd32(0x000bd674u + + 0x27cu);
    }
L_000bd670:;
    {
        cpu->r[1] = 0x00001cecu;
    }
L_000bd674:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bd678:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_000bd67c:;
    {
        cpu->r[0] = 0x00005f58u;
    }
L_000bd680:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000bd684:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000bd688:;
    {
        cpu->r[0] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_000bd68c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd83c;
        }
    }
L_000bd694:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_000bd698:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000bd69c:;
    {
        cpu->r[12] = 0x000063e8u;
    }
L_000bd6a0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4dcu);
    }
L_000bd6a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00001cc0u, 0, 0);
    }
L_000bd6a8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000bd6ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00001cc0u, 0, 0);
    }
L_000bd6b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_000bd6b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000bd6b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000bd6bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000bd6c0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[0]);
    }
L_000bd6c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00011c00u, 0, 0);
    }
L_000bd6c8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000bd6cc:;
    {
        cpu->r[12] = 0x00001cc8u;
    }
L_000bd6d0:;
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
L_000bd6d4:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000bd6d8:;
    {
        cpu->r[12] = 0x00001cccu;
    }
L_000bd6dc:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_000bd6e0:;
    {
        cpu->r[12] = 0x00001cd0u;
    }
L_000bd6e4:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[9]);
    }
L_000bd6e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000bd6ec:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000bd6f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000bd6f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bd6f8:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000bd6fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000128u, 0, 0);
    }
L_000bd700:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000bd704:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_000bd708:;
    {
        cpu->r[14] = 0x000bd70cu; fn_000ba2e0(cpu);
    }
L_000bd70c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xdu);
    }
L_000bd710:;
    {
        cpu->r[2] = 0x00001660u;
    }
L_000bd714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_000bd718:;
    {
        cpu->r[1] = (cpu->r[1] >> 4) & 0x1u;
    }
L_000bd71c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd720:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x3u);
    }
L_000bd724:;
    {
        cpu->r[2] = 0x00001ce0u;
    }
L_000bd728:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x2u);
    }
L_000bd72c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_000bd730:;
    {
        cpu->r[1] = 0x00001cf4u;
    }
L_000bd734:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_000bd738:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0xfu);
    }
L_000bd73c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0xeu);
    }
L_000bd740:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000bd744:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd748:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0xfu);
    }
L_000bd74c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd750:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 2, 16u, &shc));
        }
    }
L_000bd754:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 3, 16u, &shc));
        }
    }
L_000bd758:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
        }
    }
L_000bd75c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x11u);
    }
L_000bd760:;
    {
        cpu->r[2] = 0x00001ce4u;
    }
L_000bd764:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x10u);
    }
L_000bd768:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000bd76c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd770:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0x11u);
    }
L_000bd774:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd778:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 2, 16u, &shc));
        }
    }
L_000bd77c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 3, 16u, &shc));
        }
    }
L_000bd780:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
        }
    }
L_000bd784:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x13u);
    }
L_000bd788:;
    {
        cpu->r[2] = 0x00001ce8u;
    }
L_000bd78c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x12u);
    }
L_000bd790:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000bd794:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd798:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s8(cpu->r[4] + + 0x13u);
    }
L_000bd79c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd7a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 2, 16u, &shc));
        }
    }
L_000bd7a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (~shifter(cpu->r[1], 3, 16u, &shc));
        }
    }
L_000bd7a8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
        }
    }
L_000bd7ac:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000bd7b0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_000bd7b4:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000bd7b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bd7bc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
        }
    }
L_000bd7c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & ~ 0x08000001u; cpu->r[1] = v;
        }
    }
L_000bd7c4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000bd7c8:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_000bd7cc:;
    {
        uint32_t v = cpu->r[2] & 0x00000040u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_000bd7d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000018ecu;
        }
    }
L_000bd7d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x000018ecu;
        }
    }
L_000bd7d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000003u;
        }
    }
L_000bd7dc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[2]);
        }
    }
L_000bd7e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
        }
    }
L_000bd7e4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[3]);
    }
L_000bd7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd7ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bd890;
        }
    }
L_000bd7f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000bd7f4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000bd7f8:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000bd7fc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000bd800:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bd804:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bd834;
        }
    }
L_000bd808:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x1u);
    }
L_000bd80c:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000bd810:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000bd814:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_000bd818:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000bd81c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xdu);
    }
L_000bd820:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_000bd824:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000bd828:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_000bd82c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000bd830:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
        }
    }
L_000bd834:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000bd838:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd83cu)) return;
    }
L_000bd83c:;
    {
        cpu->r[0] = 0x00004328u;
    }
L_000bd840:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000bd844:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000bd848:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd84c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[11]);
        }
    }
L_000bd850:;
    {
        goto L_000bd694;
    }
L_000bd854:;
    {
        cpu->r[10] = rd32(0x000bd85cu + + 0x94u);
    }
L_000bd858:;
    {
        goto L_000bd7f0;
    }
L_000bd85c:;
    {
        cpu->r[12] = 0x00001cecu;
    }
L_000bd860:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00011c00u, 0, 0);
    }
L_000bd864:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bd868:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000128u, 0, 0);
    }
L_000bd86c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000bd870:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000bd874:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[7]);
    }
L_000bd878:;
    {
        cpu->r[10] = rd32(0x000bd880u + + 0x70u);
    }
L_000bd87c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000bd880:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_000bd884:;
    {
        cpu->r[14] = 0x000bd888u; fn_000ba2e0(cpu);
    }
L_000bd888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000du, 0, 0);
    }
L_000bd88c:;
    {
        goto L_000bd720;
    }
L_000bd890:;
    {
        cpu->r[0] = rd32(0x000bd898u + + 0x5cu);
    }
L_000bd894:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x58cu);
    }
L_000bd898:;
    {
        cpu->r[0] = add_flags(cpu, 0x000bd8a0u, cpu->r[0], 0, 0);
    }
L_000bd89c:;
    {
        cpu->r[14] = 0x000bd8a0u; fn_001d0ac4(cpu);
    }
L_000bd8a0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000bd8a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000bd8a8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000bd8ac:;
    {
        goto L_000bd7f0;
    }
L_000bd8b0:;
    {
        cpu->r[1] = rd32(0x000bd8b8u + + 0x40u);
    }
L_000bd8b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bd8b8:;
    {
        cpu->r[12] = rd32(0x000bd8c0u + + 0x3cu);
    }
L_000bd8bc:;
    {
        cpu->r[14] = 0x00003aa4u;
    }
L_000bd8c0:;
    {
        cpu->r[2] = rd32(0x000bd8c8u + + 0x38u);
    }
L_000bd8c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bd8ccu, cpu->r[1], 0, 0);
    }
L_000bd8c8:;
    {
        cpu->r[3] = rd32(0x000bd8d0u + + 0x34u);
    }
L_000bd8cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bd8d4u, cpu->r[12], 0, 0);
    }
L_000bd8d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bd8d8u, cpu->r[2], 0, 0);
    }
L_000bd8d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d0u, 0, 0);
    }
L_000bd8d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd8e0u, cpu->r[3], 0, 0);
    }
L_000bd8dc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bd8e0:;
    {
        cpu->r[14] = 0x000bd8e4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bd8e4:;
    {
        cpu->r[5] = rd32(cpu->r[10] + + 0x4u);
    }
L_000bd8e8:;
    {
        goto L_000bd5cc;
    }
}

/* _ZN5Scene23MP_AutoResumedPopStatesEv @ 000bd908 (arm) */
void fn_000bd908(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd908:;
    {
        cpu->r[3] = rd32(0x000bd910u + + 0x40u);
    }
L_000bd90c:;
    {
        cpu->r[2] = rd32(0x000bd914u + + 0x40u);
    }
L_000bd910:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd918u, cpu->r[3], 0, 0);
    }
L_000bd914:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000bd918:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bd91c:;
    {
        goto L_000bd928;
    }
L_000bd920:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000bd924:;
    {
        cpu->r[14] = 0x000bd928u; fn_000f34e8(cpu);
    }
L_000bd928:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000bd92c:;
    {
        cpu->r[14] = 0x000bd930u; fn_000f34a0(cpu);
    }
L_000bd930:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000bd934:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000bd938:;
    {
        cpu->r[14] = 0x000bd940u;
    }
L_000bd93c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd940u)) return;
    }
L_000bd940:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000bd944:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bd948:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bd920;
        }
    }
L_000bd94c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bd950u)) return;
    }
}

/* _ZN5Scene13GetNumUpdatesEv @ 000bd958 (arm) */
void fn_000bd958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bd958:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000bd95c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bd960:;
    {
        cpu->r[14] = 0x000bd964u; fn_0009b4d0(cpu);
    }
L_000bd964:;
    {
        cpu->r[2] = 0x00008d84u;
    }
L_000bd968:;
    {
        cpu->r[3] = rd32(0x000bd970u + + 0xd4u);
    }
L_000bd96c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bd970:;
    {
        cpu->r[1] = 0x00008d80u;
    }
L_000bd974:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bd97cu, cpu->r[3], 0, 0);
    }
L_000bd978:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bd97c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bd980:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bd984:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
        }
    }
L_000bd988:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
        }
    }
L_000bd98c:;
    {
        cpu->r[2] = rd32(0x000bd994u + + 0xb4u);
    }
L_000bd990:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000bd994:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_000bd998:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bd99c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bd9a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bd9a4:;
    {
        cpu->r[14] = 0x000bd9a8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000bd9a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000bd9ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bd9b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bd9b4:;
    {
        cpu->r[14] = 0x000bd9b8u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000bd9b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000bd9bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bd9c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bd9c4:;
    {
        cpu->r[14] = 0x000bd9c8u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_000bd9c8:;
    {
        cpu->r[3] = 0x00008d8cu;
    }
L_000bd9cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bd9d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bd9d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000bd9d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000bd9dc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000bd9e0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000bd9e4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
        }
    }
L_000bd9e8:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000bd9ec:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000bd9f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_000bd9f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bda04;
        }
    }
L_000bd9f8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000bd9fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000002u;
        }
    }
L_000bda00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bda3c;
        }
    }
L_000bda04:;
    {
        cpu->r[1] = 0x00008d80u;
    }
L_000bda08:;
    {
        cpu->r[3] = 0x00008d84u;
    }
L_000bda0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bda10:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bda14:;
    {
        cpu->r[2] = 0x00008d88u;
    }
L_000bda18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bda1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bda20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bda24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000bda28:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000bda2c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000bda30:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000bda34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bda38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bda3cu)) return;
    }
L_000bda3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bda34;
        }
    }
L_000bda40:;
    {
        goto L_000bda04;
    }
}

/* _ZN5Scene31MP_ServerCheckAndSendAutoResumeEv @ 000bda4c (arm) */
void fn_000bda4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bda4c:;
    {
        cpu->r[3] = rd32(0x000bda54u + + 0x5cu);
    }
L_000bda50:;
    {
        cpu->r[2] = rd32(0x000bda58u + + 0x5cu);
    }
L_000bda54:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bda5cu, cpu->r[3], 0, 0);
    }
L_000bda58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000bda5c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000bda60:;
    {
        cpu->r[5] = 0x00005f94u;
    }
L_000bda64:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000bda68:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000bda6c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000bda70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
        }
    }
L_000bda74:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[4]);
        }
    }
L_000bda78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bda7cu)) return;
        }
    }
L_000bda7c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bda80u)) return;
        }
    }
L_000bda80:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000bda84:;
    {
        cpu->r[14] = 0x000bda88u; fn_000ba460(cpu);
    }
L_000bda88:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_000bda8c:;
    {
        cpu->r[3] = 0x00006737u;
    }
L_000bda90:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[4]);
    }
L_000bda94:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000bda98:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_000bda9c:;
    {
        cpu->r[14] = 0x000bdaa0u; fn_0009b4d0(cpu);
    }
L_000bdaa0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000bdaa4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bdaa8:;
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
L_000bdaac:;
    {
        return fn_000967dc(cpu);
    }
}

/* _ZN5Scene22CheckPlayerCarInTunnelEv @ 000bdab8 (arm) */
void fn_000bdab8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bdab8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bdabc:;
    {
        cpu->r[2] = 0x000083f0u;
    }
L_000bdac0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bdac4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bdac8:;
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
L_000bdacc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000bdad0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bdad4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000bdad8:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[5]);
    }
L_000bdadc:;
    {
        cpu->r[9] = 0x0000839cu;
    }
L_000bdae0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000bdae4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bdae8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bdaec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bdaf0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[9]);
    }
L_000bdaf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bdaf8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000bdafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bdb00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bdb04:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000bdb08:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000bdb0c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_000bdb10:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_000bdb14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bdb68;
        }
    }
L_000bdb18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00018000u, 0, 0);
    }
L_000bdb1c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000bdb24u + + 0x80u);
    }
L_000bdb20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000003a0u, 0, 0);
    }
L_000bdb24:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_000bdb28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bdb2c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000bdb30:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000bdb34:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000bdb38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bdb3c:;
    {
        cpu->r[14] = 0x000bdb40u; fn_000df710(cpu);
    }
L_000bdb40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000bdb44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bdb48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bdb94;
        }
    }
L_000bdb4c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x28u);
    }
L_000bdb50:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000bdb54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bdb70;
        }
    }
L_000bdb58:;
    {
        cpu->r[3] = 0x000083f0u;
    }
L_000bdb5c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000bdb60:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bdb64:;
    {
        wr8(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_000bdb68:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000bdb6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bdb70u)) return;
    }
L_000bdb70:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000bdb74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0xcu);
    }
L_000bdb78:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000bdb7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000bdb80:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdb84:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_000bdb88:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000bdb8c:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdb90:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000bdb58;
        }
    }
L_000bdb94:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[9]);
    }
L_000bdb98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000bdb9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bdb24;
        }
    }
L_000bdba0:;
    {
        goto L_000bdb68;
    }
}

/* _ZN5Scene23MP_UpdateSimulatedPanelEv @ 000bdba8 (arm) */
void fn_000bdba8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bdba8:;
    {
        cpu->r[3] = 0x000043e4u;
    }
L_000bdbac:;
    {
        cpu->r[2] = rd32(0x000bdbb4u + + 0x22cu);
    }
L_000bdbb0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bdbb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000bdbb8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bdbbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bdbc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bdbc8u, cpu->r[2], 0, 0);
    }
L_000bdbc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000bdbc8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000bdbcc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
        }
    }
L_000bdbd0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000bdbd4:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bdbd8u)) return;
        }
    }
L_000bdbd8:;
    {
        cpu->r[0] = rd32(0x000bdbe0u + + 0x204u);
    }
L_000bdbdc:;
    {
        cpu->r[3] = 0x000043dcu;
    }
L_000bdbe0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bdbe4:;
    {
        cpu->r[1] = 0x000043e0u;
    }
L_000bdbe8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000bdbec:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000bdbf0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bdbf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bdbf8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000bdbfc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bdc00:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_000bdc04:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[12];
    }
L_000bdc08:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bdc0c:;
    {
        cpu->r[12] = rd32(0x000bdc14u + + 0x1d4u);
    }
L_000bdc10:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
    }
L_000bdc14:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_000bdc18:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000bdc1c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[12]);
    }
L_000bdc20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000bdc24:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdc68;
        }
    }
L_000bdc2c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000bdc30:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000bdc34:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdc68;
        }
    }
L_000bdc3c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000bdc40:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bdc44:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000bdc48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_000bdc4c:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc50:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdc68;
        }
    }
L_000bdc54:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000bdc58:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_000bdc5c:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc60:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000bdc64:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[3] + + 0x34u, cpu->r[12]);
        }
    }
L_000bdc68:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000bdc6c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000bdc70:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc74:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bdcb4;
        }
    }
L_000bdc78:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000bdc7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_000bdc80:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc84:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdcb4;
        }
    }
L_000bdc88:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_000bdc8c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bdc90:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000bdc94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_000bdc98:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdc9c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdcb4;
        }
    }
L_000bdca0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000bdca4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_000bdca8:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdcac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000bdcb0:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
        }
    }
L_000bdcb4:;
    {
        cpu->r[0] = rd32(0x000bdcbcu + + 0x130u);
    }
L_000bdcb8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000bdcbc:;
    {
        cpu->r[0] = 0x000084a8u;
    }
L_000bdcc0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bdcc4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000bdcc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bdccc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bdd7c;
        }
    }
L_000bdcd0:;
    {
        cpu->r[0] = 0x000084a0u;
    }
L_000bdcd4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000bdcd8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000bdcdc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bdce0:;
    {
        cpu->r[0] = 0x000084a4u;
    }
L_000bdce4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000bdce8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000bdcec:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdcf0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd60;
        }
    }
L_000bdcf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000bdcf8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000bdcfc:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd00:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd60;
        }
    }
L_000bdd04:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000bdd08:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bdd0c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000bdd10:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_000bdd14:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd18:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd60;
        }
    }
L_000bdd1c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000bdd20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_000bdd24:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd60;
        }
    }
L_000bdd2c:;
    {
        cpu->r[14] = 0x000bdd30u; fn_0015ca98(cpu);
    }
L_000bdd30:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000bdd34:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bdd38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bdd3c:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000bdd40:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000bdd44:;
    {
        cpu->r[14] = 0x000bdd48u; fn_0018b600(cpu);
    }
L_000bdd48:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000bdd4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bdd50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bdd54:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000bdd58:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000bdd5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bdd60u)) return;
    }
L_000bdd60:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000bdd64:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bdd7c;
        }
    }
L_000bdd6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_000bdd70:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000bdd74:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd78:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000bdd84;
        }
    }
L_000bdd7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000bdd80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bdd84u)) return;
    }
L_000bdd84:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000bdd88:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bdd8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_000bdd90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000bdd94:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdd98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd7c;
        }
    }
L_000bdd9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_000bdda0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000bdda4:;
    {
        vfp_sync_flags(cpu);
    }
L_000bdda8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000bdd7c;
        }
    }
L_000bddac:;
    {
        cpu->r[14] = 0x000bddb0u; fn_0015ca98(cpu);
    }
L_000bddb0:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000bddb4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bddb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bddbc:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000bddc0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000bddc4:;
    {
        cpu->r[14] = 0x000bddc8u; fn_0018b600(cpu);
    }
L_000bddc8:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000bddcc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bddd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bddd4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000bddd8:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000bdddc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000bdde0u)) return;
    }
}

/* _ZN5Scene21UpdateStartRaceSoundsEv @ 000bddf0 (arm) */
void fn_000bddf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bddf0:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000bddf4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000bddf8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000bddfc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bde00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bde04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bde08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_000bde0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000bde10:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000bdee8;
        case 1: goto L_000bdec0;
        case 2: goto L_000bde84;
        case 3: goto L_000bde7c;
        case 4: goto L_000bde2c;
        default: guest_unimplemented(cpu, 0x000bde10u); return; }
        }
    }
L_000bde14:;
    {
        goto L_000bde7c;
    }
L_000bde2c:;
    {
        cpu->r[5] = 0x00004338u;
    }
L_000bde30:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bde34:;
    {
        cpu->r[6] = rd8(cpu->r[0] + cpu->r[5]);
    }
L_000bde38:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bde3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bde7c;
        }
    }
L_000bde40:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000bde44:;
    {
        cpu->r[1] = 0x000000b3u;
    }
L_000bde48:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bde4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bde50:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000bde54:;
    {
        cpu->r[14] = 0x000bde58u; fn_000fd218(cpu);
    }
L_000bde58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000bde5c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000bde60:;
    {
        cpu->r[1] = 0x000000b5u;
    }
L_000bde64:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000bde68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000bde6c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000bde70:;
    {
        cpu->r[14] = 0x000bde74u; fn_000fd288(cpu);
    }
L_000bde74:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000bde78:;
    {
        wr8(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000bde7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bde80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bde84u)) return;
    }
L_000bde84:;
    {
        cpu->r[5] = 0x00004338u;
    }
L_000bde88:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bde8c:;
    {
        cpu->r[6] = rd8(cpu->r[0] + cpu->r[5]);
    }
L_000bde90:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bde94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bde7c;
        }
    }
L_000bde98:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000bde9c:;
    {
        cpu->r[1] = 0x000000b4u;
    }
L_000bdea0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bdea4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000bdea8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000bdeac:;
    {
        cpu->r[14] = 0x000bdeb0u; fn_000fd218(cpu);
    }
L_000bdeb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000bdeb4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000bdeb8:;
    {
        cpu->r[1] = 0x000000b2u;
    }
L_000bdebc:;
    {
        goto L_000bde64;
    }
L_000bdec0:;
    {
        cpu->r[5] = 0x00004338u;
    }
L_000bdec4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bdec8:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[5]);
    }
L_000bdecc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000bded0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bde7c;
        }
    }
L_000bded4:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000bded8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000bdedc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000bdee0:;
    {
        cpu->r[1] = 0x000000b3u;
    }
L_000bdee4:;
    {
        goto L_000bdf0c;
    }
L_000bdee8:;
    {
        cpu->r[5] = 0x00004338u;
    }
L_000bdeec:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000bdef0:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[5]);
    }
L_000bdef4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000bdef8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bde7c;
        }
    }
L_000bdefc:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000bdf00:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000bdf04:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000bdf08:;
    {
        cpu->r[1] = 0x000000b4u;
    }
L_000bdf0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000bdf10:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000bdf14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000bdf18:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bdf1c:;
    {
        cpu->r[14] = 0x000bdf20u; fn_000fd288(cpu);
    }
L_000bdf20:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000bdf24:;
    {
        wr8(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000bdf28:;
    {
        goto L_000bde7c;
    }
}

/* _Z13DebugDrawLineiiiiiii @ 000bdf2c (arm) */
void fn_000bdf2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bdf2c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000bdf30:;
    {
        cpu->r[4] = rd32(0x000bdf38u + + 0x144u);
    }
L_000bdf34:;
    {
        cpu->r[5] = rd32(0x000bdf3cu + + 0x144u);
    }
L_000bdf38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_000bdf3c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000bdf44u, cpu->r[4], 0, 0);
    }
L_000bdf40:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000bdf44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000bdf48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bdf4c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_000bdf50:;
    {
        cpu->r[14] = 0x000bdf54u; imp_glGetError(cpu); /* glGetError */
    }
L_000bdf54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bdf58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000bdf5c:;
    {
        wr16(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000bdf60:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000bdf64:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000bdf68:;
    {
        wr16(cpu->r[13] + + 0x36u, cpu->r[3]);
    }
L_000bdf6c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000bdf70:;
    {
        wr16(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000bdf74:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_000bdf78:;
    {
        wr16(cpu->r[13] + + 0x3au, cpu->r[3]);
    }
L_000bdf7c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000bdf80:;
    {
        cpu->r[1] = (cpu->r[2] >> 1) & 0xffu;
    }
L_000bdf84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000019u, 0, 0);
    }
L_000bdf88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000064u, 1, 1);
    }
L_000bdf8c:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[1]);
    }
L_000bdf90:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_000bdf94:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_000bdf98:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[0]);
    }
L_000bdf9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000bdfa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bdf80;
        }
    }
L_000bdfa4:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_000bdfa8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000bdfb0u + + 0xc0u);
    }
L_000bdfac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bdfb4u + + 0xc0u);
    }
L_000bdfb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bdfb8u + + 0xc0u);
    }
L_000bdfb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bdfb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bdfbc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bdfc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bdfc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bdfc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bdfcc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bdfd0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bdfd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bdfd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bdfdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bdfe0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bdfe4:;
    {
        cpu->r[14] = 0x000bdfe8u; imp_glDisable(cpu); /* glDisable */
    }
L_000bdfe8:;
    {
        cpu->r[3] = rd32(0x000bdff0u + + 0x94u);
    }
L_000bdfec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000bdff0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bdff4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000bdff8:;
    {
        cpu->r[14] = 0x000bdffcu; fn_0012e19c(cpu);
    }
L_000bdffc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000be000:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000be004:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000be008:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_000be00c:;
    {
        cpu->r[14] = 0x000be010u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_000be010:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000be014:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000be018:;
    {
        cpu->r[14] = 0x000be01cu; fn_0012e1c8(cpu);
    }
L_000be01c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000be020:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_000be024:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000be028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000be02c:;
    {
        cpu->r[14] = 0x000be030u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_000be030:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_000be034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000be038:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000be03c:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_000be040:;
    {
        cpu->r[14] = 0x000be044u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_000be044:;
    {
        cpu->r[14] = 0x000be048u; imp_glGetError(cpu); /* glGetError */
    }
L_000be048:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_000be04c:;
    {
        cpu->r[14] = 0x000be050u; imp_glEnable(cpu); /* glEnable */
    }
L_000be050:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000be054:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000be058:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000be05c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000be060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be06c;
        }
    }
L_000be064:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000be068:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000be06cu)) return;
    }
L_000be06c:;
    {
        cpu->r[14] = 0x000be070u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000be070:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x8000u << 16);
        }
    }
L_000be074:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[8], 0x00000000u, (cpu->cpsr >> 29) & 1, 1);
        }
    }
L_000be078:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x8000u << 16);
        }
    }
L_000be07c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[4]);
        cpu->r[12] = (uint32_t)(int32_t)s8(cpu->r[8]);
        cpu->r[8] = wb_tmp;
        }
    }
L_000be080:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000be084:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN5Scene19DrawCollisionsDebugEv @ 000be088 (arm) */
void fn_000be088(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be088:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000be08c:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000be090:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be094:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000be098:;
    {
        cpu->r[1] = rd32(0x000be0a0u + + 0x180u);
    }
L_000be09c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000be0a0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000be0a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000be0a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000be0ac:;
    {
        cpu->r[3] = rd32(0x000be0b4u + + 0x170u);
    }
L_000be0b0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000be0b8u, cpu->r[1], 0, 0);
    }
L_000be0b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000be0b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000be0bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_000be0c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000be0c4:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000be0c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be1f8;
        }
    }
L_000be0cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000be0d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000be0d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000be0d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000be0dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000be0e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000be0e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000be0e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
        }
    }
L_000be0ec:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000be0f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000be0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be1f8;
        }
    }
L_000be0f8:;
    {
        cpu->r[14] = 0x000be0fcu; fn_0015d920(cpu);
    }
L_000be0fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000be100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be1f8;
        }
    }
L_000be104:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000be108:;
    {
        cpu->r[2] = 0x000011e8u;
    }
L_000be10c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be110:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000be114:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000be118:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000be11c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000be120:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00008ddcu;
        }
    }
L_000be124:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00008dd4u;
        }
    }
L_000be128:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000be12c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000be130:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000be134:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
        }
    }
L_000be138:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000be13c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
        }
    }
L_000be140:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000be144:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000be148:;
    {
        cpu->r[14] = 0x000be14cu; guest_call(cpu, cpu->r[3]);
    }
L_000be14c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000be150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000be154:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000be158:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000be15c:;
    {
        cpu->r[14] = 0x000be164u;
    }
L_000be160:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000be164u)) return;
    }
L_000be164:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000be168:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be16c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000be170:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000be174:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000be200;
        }
    }
L_000be178:;
    {
        cpu->r[3] = 0x00008dd4u;
    }
L_000be17c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be184u + + 0x98u);
    }
L_000be180:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be184:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000be188:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000be18c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000be190:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_000be194:;
    {
        vfp_vadd(cpu, 11, 13, 15);
    }
L_000be198:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x2cu);
    }
L_000be19c:;
    {
        cpu->r[14] = 0x00000064u;
    }
L_000be1a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_000be1a4:;
    {
        vfp_vadd(cpu, 12, 14, 15);
    }
L_000be1a8:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_000be1ac:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000be1b0:;
    {
        *(int32_t*)vfp_s(cpu,10) = (int32_t)*vfp_s(cpu,10);
    }
L_000be1b4:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000be1b8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,10);
    }
L_000be1bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000be1c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be1c4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000be1c8:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_000be1cc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be1d0:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_000be1d4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000be1d8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000be1dc:;
    {
        cpu->r[14] = 0x000be1e0u; fn_000bdf2c(cpu);
    }
L_000be1e0:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000be1e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000be1e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000be1ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000be1f0:;
    {
        cpu->r[14] = 0x000be1f8u;
    }
L_000be1f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000be1f8u)) return;
    }
L_000be1f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000be1fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000be200u)) return;
    }
L_000be200:;
    {
        cpu->r[2] = 0x00008ddcu;
    }
L_000be204:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000be208:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000be20c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be214u + + 0x8u);
    }
L_000be210:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000be214:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000be218:;
    {
        goto L_000be18c;
    }
}

/* _ZN5Scene15ResetGPUBuffersEv @ 000be228 (arm) */
void fn_000be228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be228:;
    {
        cpu->r[3] = rd32(0x000be230u + + 0x7cu);
    }
L_000be22c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be230:;
    {
        cpu->r[2] = rd32(0x000be238u + + 0x78u);
    }
L_000be234:;
    {
        cpu->r[3] = add_flags(cpu, 0x000be23cu, cpu->r[3], 0, 0);
    }
L_000be238:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000be23c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000be240:;
    {
        cpu->r[4] = 0x000084c2u;
    }
L_000be244:;
    {
        cpu->r[7] = 0x000084bfu;
    }
L_000be248:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000be24c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000be250:;
    {
        cpu->r[14] = 0x000be254u; fn_0012e1c8(cpu);
    }
L_000be254:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000be258:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be25c:;
    {
        cpu->r[14] = 0x000be260u; fn_0012e170(cpu);
    }
L_000be260:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000be264:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be268:;
    {
        cpu->r[14] = 0x000be26cu; fn_0012e19c(cpu);
    }
L_000be26c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000be270:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000be274:;
    {
        cpu->r[14] = 0x000be278u; fn_0012e124(cpu);
    }
L_000be278:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000be27c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000be280:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be284:;
    {
        cpu->r[14] = 0x000be288u; fn_0012e150(cpu);
    }
L_000be288:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000be28c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be26c;
        }
    }
L_000be290:;
    {
        cpu->r[0] = 0x00008892u;
    }
L_000be294:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be298:;
    {
        cpu->r[14] = 0x000be29cu; imp_glBindBuffer(cpu); /* glBindBuffer */
    }
L_000be29c:;
    {
        cpu->r[0] = 0x00008893u;
    }
L_000be2a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be2a4:;
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
L_000be2a8:;
    {
        imp_glBindBuffer(cpu); /* tail glBindBuffer */ return;
    }
}

/* _ZN5Scene20GetTurningCorrectionEff @ 000be2b4 (arm) */
void fn_000be2b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be2b4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000be2b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000be2bc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000be2c0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_000be2c4:;
    {
        vfp_vdiv(cpu, 14, 13, 16);
    }
L_000be2c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be2d0u + + 0x24u);
    }
L_000be2cc:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000be2d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be2d8u + + 0x20u);
    }
L_000be2d4:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000be2d8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000be2dc:;
    {
        cpu->r[14] = 0x000be2e0u; imp_sinf(cpu); /* sinf */
    }
L_000be2e0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000be2e4:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_000be2e8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000be2ec:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000be2f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000be2f4u)) return;
    }
}

/* _ZN5Scene16Debug_ToggleRainEv @ 000be2fc (arm) */
void fn_000be2fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be2fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000be300:;
    {
        cpu->r[4] = 0x000042d0u;
    }
L_000be304:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000be308:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000be30c:;
    {
        cpu->r[3] = rd32(0x000be314u + + 0x50u);
    }
L_000be310:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000be314:;
    {
        cpu->r[3] = add_flags(cpu, 0x000be31cu, cpu->r[3], 0, 0);
    }
L_000be318:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x8u);
    }
L_000be31c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000be320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be344;
        }
    }
L_000be324:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000be328:;
    {
        cpu->r[14] = 0x000be32cu; fn_00186cf0(cpu);
    }
L_000be32c:;
    {
        cpu->r[1] = 0x0000967fu;
    }
L_000be330:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_000be334:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0098u << 16);
    }
L_000be338:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000be33c:;
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
L_000be340:;
    {
        return fn_00186cc4(cpu);
    }
L_000be344:;
    {
        cpu->r[2] = rd32(0x000be34cu + + 0x1cu);
    }
L_000be348:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000be34c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000be350:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000be354:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000be358:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000be35c:;
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
L_000be360:;
    {
        return fn_00186b68(cpu);
    }
}

/* _ZN5Scene21UpdateHighSpeedEffectEv @ 000be36c (arm) */
void fn_000be36c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be36c:;
    {
        cpu->r[3] = rd32(0x000be374u + + 0x1bcu);
    }
L_000be370:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000be374:;
    {
        cpu->r[1] = rd32(0x000be37cu + + 0x1b8u);
    }
L_000be378:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000be37c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000be384u, cpu->r[3], 0, 0);
    }
L_000be380:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be388u + + 0x19cu);
    }
L_000be384:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000be388:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000be38c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000be390:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000be394:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000be398:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be39c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_000be3a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000be3a4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000be3a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000be3ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_000be3b0:;
    {
        cpu->r[0] = 0x00009fb4u;
    }
L_000be3b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000be3b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000be3bc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_000be3c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000be3c4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_000be3c8:;
    {
        cpu->r[0] = 0x0000002au;
    }
L_000be3cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000be3d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000be3d4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be3d8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000be3dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_000be3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x464u);
    }
L_000be3e4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_000be3e8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000be3ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be3f4u + + 0x134u);
    }
L_000be3f0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000be3f4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000be3f8:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000be3fc:;
    {
        cpu->r[7] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_000be400:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be404:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be408:;
    {
        cpu->r[14] = 0x000be40cu; fn_00093f34(cpu);
    }
L_000be40c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_000be410:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be414:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000be418:;
    {
        vfp_vmul(cpu, 14, 13, 15);
    }
L_000be41c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be424u + + 0x108u);
    }
L_000be420:;
    {
        cpu->r[0] = 0x0000002bu;
    }
L_000be424:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000be428:;
    {
        cpu->r[14] = 0x000be42cu; fn_00093f34(cpu);
    }
L_000be42c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000be430:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000be434:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000be438:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000be43c:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000be440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be4ec;
        }
    }
L_000be444:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_000be448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000be44c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000be450:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000be4ec;
        }
    }
L_000be454:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000be458:;
    {
        cpu->r[0] = 0x00000007u;
    }
L_000be45c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000be460:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000be464:;
    {
        cpu->r[14] = 0x000be468u; fn_0017fb0c(cpu);
    }
L_000be468:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x210u);
    }
L_000be46c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000be470:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000be474:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
        }
    }
L_000be478:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[7], 1, 0);
        }
    }
L_000be47c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000be480:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000be4fc;
        }
    }
L_000be484:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x210u);
    }
L_000be488:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000be48c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000140u, 0, 0);
    }
L_000be490:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000be494:;
    {
        cpu->r[12] = 0x000018ecu;
    }
L_000be498:;
    {
        cpu->r[8] = (~0x00000001u);
    }
L_000be49c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_000be4a0:;
    {
        wr32(cpu->r[5] + + 0x210u, cpu->r[1]);
    }
L_000be4a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x214u);
    }
L_000be4a8:;
    {
        add_flags(cpu, cpu->r[2], 0x00000002u, 0, 1);
    }
L_000be4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be4d4;
        }
    }
L_000be4b0:;
    {
        wr32(cpu->r[3] + + 0x354u, cpu->r[6]);
    }
L_000be4b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000be4b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_000be4bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000be4c0:;
    {
        wr32(cpu->r[3] + + 0x214u, cpu->r[2]);
    }
L_000be4c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_000be4c8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x214u, cpu->r[8]);
        }
    }
L_000be4cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_000be4d0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x210u, cpu->r[1]);
        }
    }
L_000be4d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000be4d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000be4dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be4a4;
        }
    }
L_000be4e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000be4e4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000be4e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000be4ecu)) return;
    }
L_000be4ec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000be4f0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000be4f4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000be4f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000be484;
        }
    }
L_000be4fc:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000be500:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000be504:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000be508:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000be50c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be484;
        }
    }
L_000be510:;
    {
        cpu->r[0] = 0x00000029u;
    }
L_000be514:;
    {
        cpu->r[14] = 0x000be518u; fn_00093f34(cpu);
    }
L_000be518:;
    {
        cpu->r[3] = 0x00009fb4u;
    }
L_000be51c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_000be520:;
    {
        goto L_000be484;
    }
}

/* _ZN5Scene28GetIntersectionWithRectangleEifRsS0_ @ 000be538 (arm) */
void fn_000be538(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be538:;
    {
        cpu->r[12] = rd32(0x000be540u + + 0x1d8u);
    }
L_000be53c:;
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
L_000be540:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000be544:;
    {
        cpu->r[14] = rd32(0x000be54cu + + 0x1d0u);
    }
L_000be548:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_000be54c:;
    {
        cpu->r[2] = rd32(0x000be554u + + 0x1ccu);
    }
L_000be550:;
    {
        cpu->r[12] = add_flags(cpu, 0x000be558u, cpu->r[12], 0, 0);
    }
L_000be554:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000064u, 0, 0);
    }
L_000be558:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000044u, 0, 0);
    }
L_000be55c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_000be560:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000be564:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000be568:;
    {
        cpu->r[10] = rd32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000be56c:;
    {
        cpu->r[5] = rd32(cpu->r[14]);
    }
L_000be570:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_000be574:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000be578:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be57c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[4];
    }
L_000be580:;
    {
        cpu->r[6] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000be584:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_000be588:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_000be58c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 3, 31u, &shc), 0, 0);
    }
L_000be590:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_000be594:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_000be598:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be59c:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000be5a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000be5a4:;
    {
        cpu->r[14] = 0x000be5a8u; imp_atanf(cpu); /* atanf */
    }
L_000be5a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000be5b0u + + 0x158u);
    }
L_000be5ac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000be5b0:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000be5b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,16));
    }
L_000be5b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000be5bc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000be628;
        }
    }
L_000be5c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000be5c4:;
    {
        vfp_sync_flags(cpu);
    }
L_000be5c8:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000be628;
        }
    }
L_000be5cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000be668;
        }
    }
L_000be5d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000be5d8u + + 0x134u);
    }
L_000be5d4:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000be5d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,16));
    }
L_000be5dc:;
    {
        vfp_sync_flags(cpu);
    }
L_000be5e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000be668;
        }
    }
L_000be5e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be5ecu + + 0x124u);
    }
L_000be5e8:;
    {
        vfp_vsub(cpu, 15, 15, 16);
    }
L_000be5ec:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000028u, 1, 0);
    }
L_000be5f0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 0);
    }
L_000be5f4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be5f8:;
    {
        cpu->r[14] = 0x000be5fcu; imp_tanf(cpu); /* tanf */
    }
L_000be5fc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_000be600:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be604:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[10];
    }
L_000be608:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be60c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000be610:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_000be614:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be618:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be61c:;
    {
        wr16(cpu->r[8], cpu->r[3]);
    }
L_000be620:;
    {
        wr16(cpu->r[7], cpu->r[4]);
    }
L_000be624:;
    {
        goto L_000be660;
    }
L_000be628:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000be62c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000be630:;
    {
        wr16(cpu->r[8], cpu->r[5]);
    }
L_000be634:;
    {
        cpu->r[14] = 0x000be638u; imp_tanf(cpu); /* tanf */
    }
L_000be638:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000be63c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
    }
L_000be640:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000be644:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be648:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000be64c:;
    {
        vfp_vmls(cpu, 15, 14, 13);
    }
L_000be650:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be654:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be658:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_000be65c:;
    {
        wr16(cpu->r[7], cpu->r[3]);
    }
L_000be660:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000be664:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000be668u)) return;
    }
L_000be668:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000be670u + + 0x9cu);
    }
L_000be66c:;
    {
        vfp_vsub(cpu, 13, 14, 15);
    }
L_000be670:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,16));
    }
L_000be674:;
    {
        vfp_sync_flags(cpu);
    }
L_000be678:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000be6c8;
        }
    }
L_000be67c:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_000be680:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000be684:;
    {
        vfp_sync_flags(cpu);
    }
L_000be688:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000be6c8;
        }
    }
L_000be68c:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_000be690:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_000be694:;
    {
        wr16(cpu->r[8], cpu->r[5]);
    }
L_000be698:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000be69c:;
    {
        cpu->r[14] = 0x000be6a0u; imp_tanf(cpu); /* tanf */
    }
L_000be6a0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_000be6a4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
    }
L_000be6a8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000be6ac:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be6b0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000be6b4:;
    {
        vfp_vmls(cpu, 15, 14, 13);
    }
L_000be6b8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be6bc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be6c0:;
    {
        wr16(cpu->r[7], cpu->r[3]);
    }
L_000be6c4:;
    {
        goto L_000be660;
    }
L_000be6c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000be6d0u + + 0x44u);
    }
L_000be6cc:;
    {
        vfp_vsub(cpu, 15, 15, 16);
    }
L_000be6d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], cpu->r[4], 0, 0);
    }
L_000be6d4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be6d8:;
    {
        cpu->r[14] = 0x000be6dcu; imp_tanf(cpu); /* tanf */
    }
L_000be6dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_000be6e0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[10];
    }
L_000be6e4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000be6e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000be6ec:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000be6f0:;
    {
        vfp_vmls(cpu, 15, 14, 13);
    }
L_000be6f4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be6f8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000be6fc:;
    {
        wr16(cpu->r[8], cpu->r[3]);
    }
L_000be700:;
    {
        wr16(cpu->r[7], cpu->r[4]);
    }
L_000be704:;
    {
        goto L_000be660;
    }
}

/* _ZN5Scene20GetBoostStripeCoordsEiiib @ 000be724 (arm) */
void fn_000be724(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be724:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000be728:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000be72c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000be730:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000be738u + + 0xb8u);
    }
L_000be734:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000be738:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000be73c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000be740:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 5u, &shc), cpu->r[1], 1, 0);
    }
L_000be744:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000be748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000be74c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000049u, 0, 0);
    }
L_000be750:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000be754:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000be758:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001fu, 1, 1);
    }
L_000be75c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_000be760:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = 0x0000001fu;
        }
    }
L_000be764:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_000be768:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000be76c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000be770:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000006u, 0, 0);
    }
L_000be774:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000be778:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000be77c:;
    {
        vfp_vmul(cpu, 17, 15, 16);
    }
L_000be780:;
    {
        vfp_vadd(cpu, 16, 17, 16);
    }
L_000be784:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000be788:;
    {
        cpu->r[14] = 0x000be78cu; fn_000be538(cpu);
    }
L_000be78c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000be790:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000be794:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000be798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000be79c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000000au, 0, 0);
    }
L_000be7a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000be7a4:;
    {
        cpu->r[14] = 0x000be7a8u; fn_000be538(cpu);
    }
L_000be7a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000be7ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000be7b0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000be7b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000be7b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000000eu, 0, 0);
    }
L_000be7bc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000be7c0:;
    {
        cpu->r[14] = 0x000be7c4u; fn_000be538(cpu);
    }
L_000be7c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000be7c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000be7cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000be7d0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000be7d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000012u, 0, 0);
    }
L_000be7d8:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000be7dc:;
    {
        cpu->r[14] = 0x000be7e0u; fn_000be538(cpu);
    }
L_000be7e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000be7e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000be7e8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000be7ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000be7f0u)) return;
    }
}

/* _ZN5Scene21RenderHighSpeedEffectEv @ 000be7f4 (arm) */
void fn_000be7f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be7f4:;
    {
        cpu->r[3] = rd32(0x000be7fcu + + 0x114u);
    }
L_000be7f8:;
    {
        cpu->r[2] = rd32(0x000be800u + + 0x114u);
    }
L_000be7fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000be804u, cpu->r[3], 0, 0);
    }
L_000be800:;
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
L_000be804:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000be808:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000be80c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000be810:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000be814:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000be818:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000be81c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000be820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be82c;
        }
    }
L_000be824:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000be828:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000be82cu)) return;
    }
L_000be82c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_000be830:;
    {
        cpu->r[14] = 0x000be834u; fn_00093f34(cpu);
    }
L_000be834:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000be838:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000be83c:;
    {
        vfp_sync_flags(cpu);
    }
L_000be840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be824;
        }
    }
L_000be844:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000be848:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be84c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000be850:;
    {
        cpu->r[4] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000be854:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000be858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be824;
        }
    }
L_000be85c:;
    {
        cpu->r[14] = 0x000be860u; fn_00097ad0(cpu);
    }
L_000be860:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000be864:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000be868:;
    {
        cpu->r[9] = rd32(0x000be870u + + 0xa8u);
    }
L_000be86c:;
    {
        cpu->r[14] = 0x000be870u; fn_0018aa44(cpu);
    }
L_000be870:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000be874:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000be878:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000be87c:;
    {
        cpu->r[9] = add_flags(cpu, 0x000be884u, cpu->r[9], 0, 0);
    }
L_000be880:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_000be884:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000be888:;
    {
        cpu->r[7] = 0x000018ecu;
    }
L_000be88c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000be890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000be894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000be898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000be89c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_000be8a0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000be8a4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x214u);
    }
L_000be8a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000be8ac:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_000be8b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000be8b4:;
    {
        add_flags(cpu, cpu->r[12], 0x00000002u, 0, 1);
    }
L_000be8b8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000be8bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000be8fc;
        }
    }
L_000be8c0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000be8c4:;
    {
        cpu->r[14] = 0x000be8c8u; fn_000be724(cpu);
    }
L_000be8c8:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000be8cc:;
    {
        cpu->r[3] = 0x00ff0000u;
    }
L_000be8d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000be8d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000be8d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000be8dc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0xecu);
        }
    }
L_000be8e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000be8e4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = sub_flags(cpu, 0x000000ffu, cpu->r[3], 1, 0);
        }
    }
L_000be8e8:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[3] = v;
        }
    }
L_000be8ec:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
        }
    }
L_000be8f0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000be8f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000be8f8:;
    {
        cpu->r[14] = 0x000be8fcu; fn_000ab8ac(cpu);
    }
L_000be8fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000be900:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000be904:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000050u, 1, 1);
    }
L_000be908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be8a4;
        }
    }
L_000be90c:;
    {
        goto L_000be824;
    }
}

/* _ZN5Scene21InitSpeedEffectStripsEv @ 000be91c (arm) */
void fn_000be91c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000be91c:;
    {
        cpu->r[3] = rd32(0x000be924u + + 0xe4u);
    }
L_000be920:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000be924:;
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
L_000be928:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000be930u + + 0xd4u);
    }
L_000be92c:;
    {
        cpu->r[2] = rd32(0x000be934u + + 0xd8u);
    }
L_000be930:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000be934:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000be938:;
    {
        cpu->r[0] = rd32(0x000be940u + + 0xd0u);
    }
L_000be93c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000be944u, cpu->r[3], 0, 0);
    }
L_000be940:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000be944:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000be948:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[14]);
    }
L_000be94c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000be950:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000be954:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[12]);
    }
L_000be958:;
    {
        cpu->r[0] = rd32(0x000be960u + + 0xb4u);
    }
L_000be95c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000be960:;
    {
        cpu->r[0] = add_flags(cpu, 0x000be968u, cpu->r[0], 0, 0);
    }
L_000be964:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000f8u, 0, 0);
    }
L_000be968:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000be96c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000be970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000be974:;
    {
        vfp_vmul(cpu, 13, 15, 12);
    }
L_000be978:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000be97c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000080u, 1, 1);
    }
L_000be980:;
    {
        vfp_vmul(cpu, 15, 15, 11);
    }
L_000be984:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000be988:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_000be98c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000be990:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000be994:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x190u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000be998:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000be99c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000be9a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be96c;
        }
    }
L_000be9a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000be9a8:;
    {
        cpu->r[9] = (~0x00000001u);
    }
L_000be9ac:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_000be9b0:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000be9b4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000be9b8:;
    {
        wr32(cpu->r[6] + + 0x210u, cpu->r[3]);
    }
L_000be9bc:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_000be9c0:;
    {
        wr32(cpu->r[8] + + 0x214u, cpu->r[9]);
    }
L_000be9c4:;
    {
        wr32(cpu->r[8] + + 0x354u, cpu->r[10]);
    }
L_000be9c8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000be9cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000be9d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000be9d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000be9d8:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_000be9dc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000be9e0:;
    {
        cpu->r[14] = 0x000be9e4u; fn_000be724(cpu);
    }
L_000be9e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001fu, 1, 1);
    }
L_000be9e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be9c8;
        }
    }
L_000be9ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000be9f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000be9f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000050u, 1, 1);
    }
L_000be9f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000be9bc;
        }
    }
L_000be9fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000bea00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bea04u)) return;
    }
}

/* _ZN5Scene19PreRenderCollidableEv @ 000bea18 (arm) */
void fn_000bea18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bea18:;
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
L_000bea1c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000bea20:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000bea24:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bea28:;
    {
        cpu->r[7] = 0x00001050u;
    }
L_000bea2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bea30:;
    {
        cpu->r[1] = rd32(0x000bea38u + + 0x17cu);
    }
L_000bea34:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000bea38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bea3c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bea44u, cpu->r[1], 0, 0);
    }
L_000bea40:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_000bea44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000bea48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bea4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000beb60;
        }
    }
L_000bea50:;
    {
        cpu->r[2] = rd32(0x000bea58u + + 0x160u);
    }
L_000bea54:;
    {
        cpu->r[6] = 0x00001c60u;
    }
L_000bea58:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000bea5c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000bea60:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000bea64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bea68:;
    {
        goto L_000bea80;
    }
L_000bea6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000bea70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bea74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000bea78:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000bea7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000beb60;
        }
    }
L_000bea80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_000bea84:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000bea88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000bea8c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x70u);
    }
L_000bea90:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x76u);
    }
L_000bea94:;
    {
        cpu->r[9] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000bea98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bea9c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[9] + + 0x17au, cpu->r[10]);
        }
    }
L_000beaa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bea6c;
        }
    }
L_000beaa4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x75u);
    }
L_000beaa8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000beaac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bea6c;
        }
    }
L_000beab0:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_000beab4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000beab8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000beabc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3cu);
    }
L_000beac0:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x4cu);
    }
L_000beac4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000beac8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000beacc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x48u);
    }
L_000bead0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x44u);
    }
L_000bead4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000bead8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000beadc:;
    {
        cpu->r[12] = 0x00001d38u;
    }
L_000beae0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000beae4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_000beae8:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000beaec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000beaf0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x50u);
    }
L_000beaf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000740u, 0, 0);
    }
L_000beaf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x40u);
    }
L_000beafc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000beb00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_000beb04:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_000beb08:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[12];
    }
L_000beb0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000beb10:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[11];
    }
L_000beb14:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000beb18:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000beb1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000beb20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000beb24:;
    {
        cpu->r[14] = 0x000beb2cu;
    }
L_000beb28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000beb2cu)) return;
    }
L_000beb2c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000beb30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000beb34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000beb6c;
        }
    }
L_000beb38:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000beb3c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000beb40:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000beb44:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000beb48:;
    {
        cpu->r[14] = 0x000beb4cu; fn_0015364c(cpu);
    }
L_000beb4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000beb50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000beb54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000beb58:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000beb5c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bea80;
        }
    }
L_000beb60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000beb64:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000beb68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000beb6cu)) return;
    }
L_000beb6c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000beb70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000beb74:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000beb78:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000beb7c:;
    {
        cpu->r[14] = 0x000beb80u; fn_0015364c(cpu);
    }
L_000beb80:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_000beb84:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000beb88:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3e49u << 16);
    }
L_000beb8c:;
    {
        cpu->r[14] = 0x000beb90u; fn_00154734(cpu);
    }
L_000beb90:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_000beb94:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000beb98:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3e49u << 16);
    }
L_000beb9c:;
    {
        cpu->r[14] = 0x000beba0u; fn_00154514(cpu);
    }
L_000beba0:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_000beba4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000beba8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3f49u << 16);
    }
L_000bebac:;
    {
        cpu->r[14] = 0x000bebb0u; fn_00154350(cpu);
    }
L_000bebb0:;
    {
        goto L_000beb38;
    }
}

/* _ZN5Scene24UpdateCarMatrices_ForcedEP14CarSceneObject8Vector3d4Quat @ 000bebbc (arm) */
void fn_000bebbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bebbc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000bebc0:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000bebc4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bebc8:;
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
L_000bebcc:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000bebd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_000bebd4:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[13] + + 0x98u);
    }
L_000bebd8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000bebdc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bebe0:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_000bebe4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000bebe8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xd00u);
    }
L_000bebec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bebf0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_000bebf4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_000bebf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000bebfc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000bec00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000bec04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00008cb8u;
        }
    }
L_000bec08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bec0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bec10:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_000bec14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
        }
    }
L_000bec18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000bec1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bec20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bec24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bec28:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_000bec2c:;
    {
        cpu->r[14] = 0x000bec30u; fn_000b5a8c(cpu);
    }
L_000bec30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000bec34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x000003c8u, 0, 0);
    }
L_000bec38:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bec3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_000bec40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bec44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_000bec48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bec4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bec50:;
    {
        cpu->r[14] = 0x000bec54u; fn_000b5ba0(cpu);
    }
L_000bec54:;
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
L_000bec58:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000bec5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000bec60:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000bec64:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000bec68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bec6c:;
    {
        cpu->r[14] = 0x000bec74u;
    }
L_000bec70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bec74u)) return;
    }
L_000bec74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bec78:;
    {
        cpu->r[14] = 0x000bec7cu; fn_000b5a8c(cpu);
    }
L_000bec7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000bec80:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000bec84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bec88:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bec8c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bec90:;
    {
        cpu->r[14] = 0x000bec94u; fn_000b5a8c(cpu);
    }
L_000bec94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000bec98:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bec9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000beca0:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000beca4:;
    {
        cpu->r[14] = 0x000beca8u; fn_000b5a8c(cpu);
    }
L_000beca8:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x3ccu);
    }
L_000becac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x000003d4u, 0, 0);
    }
L_000becb0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d0u);
    }
L_000becb4:;
    {
        cpu->r[14] = 0x00007840u;
    }
L_000becb8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3c8u);
    }
L_000becbc:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_000becc0:;
    {
        wr32(cpu->r[6] + + 0x3d4u, cpu->r[10]);
    }
L_000becc4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x017du << 16);
    }
L_000becc8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_000beccc:;
    {
        wr32(cpu->r[6] + + 0x3d8u, cpu->r[8]);
    }
L_000becd0:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9]; cpu->r[9] = v;
    }
L_000becd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000410u, 0, 0);
    }
L_000becd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000becdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000bece0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bece4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bece8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000becec:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000becf0:;
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
L_000becf4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8] + cpu->r[9]; cpu->r[8] = v;
    }
L_000becf8:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000becfc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000bed00:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10] + cpu->r[8]; cpu->r[10] = v;
    }
L_000bed04:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[14], 1, 1);
    }
L_000bed08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bf06c;
        }
    }
L_000bed0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bed10:;
    {
        cpu->r[14] = 0x000bed14u; fn_000b5aa4(cpu);
    }
L_000bed14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bed18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000befdc;
        }
    }
L_000bed1c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000bed20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000bed24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000bed28:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000bed2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bed30:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[7]);
    }
L_000bed34:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000bed38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000bed3c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_000bed40:;
    {
        vfp_vadd(cpu, 18, 18, 18);
    }
L_000bed44:;
    {
        cpu->r[14] = 0x000bed4cu;
    }
L_000bed48:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bed4cu)) return;
    }
L_000bed4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bed54u + + 0x344u);
    }
L_000bed50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bed58u + + 0x344u);
    }
L_000bed54:;
    {
        wr32(cpu->r[6] + + 0x380u, cpu->r[7]);
    }
L_000bed58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00064000u, 0, 0);
    }
L_000bed5c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000bed64u + + 0x33cu);
    }
L_000bed60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000b4u, 0, 0);
    }
L_000bed64:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x000bed6cu + + 0x338u);
    }
L_000bed68:;
    {
        vfp_vmul(cpu, 13, 16, 14);
    }
L_000bed6c:;
    {
        vfp_vmla(cpu, 15, 13, 16);
    }
L_000bed70:;
    {
        vfp_vmul(cpu, 14, 17, 14);
    }
L_000bed74:;
    {
        vfp_vmul(cpu, 13, 18, 16);
    }
L_000bed78:;
    {
        vfp_vadd(cpu, 19, 19, 19);
    }
L_000bed7c:;
    {
        vfp_vmla(cpu, 15, 14, 17);
    }
L_000bed80:;
    {
        vfp_vmla(cpu, 13, 19, 17);
    }
L_000bed84:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bed88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bed8c:;
    {
        cpu->r[14] = 0x000bed90u; imp_atan2f(cpu); /* atan2f */
    }
L_000bed90:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000bed94:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bed98:;
    {
        cpu->r[14] = 0x000bed9cu; fn_00153600(cpu);
    }
L_000bed9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_000beda0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000beda4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000beda8:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_000bedac:;
    {
        vfp_vmul(cpu, 13, 15, 21);
    }
L_000bedb0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bedb4:;
    {
        cpu->r[14] = 0x000bedb8u; fn_00154734(cpu);
    }
L_000bedb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_000bedbc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bedc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bedc4:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_000bedc8:;
    {
        vfp_vmul(cpu, 14, 15, 21);
    }
L_000bedcc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bedd0:;
    {
        cpu->r[14] = 0x000bedd4u; fn_00154514(cpu);
    }
L_000bedd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bedd8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000beddc:;
    {
        cpu->r[14] = 0x000bede0u; fn_00154350(cpu);
    }
L_000bede0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bede8u + + 0x2c0u);
    }
L_000bede4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bede8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bedec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bedf0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bedf8u + + 0x2b4u);
    }
L_000bedf4:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_000bedf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000bedfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000bee00:;
    {
        vfp_vdiv(cpu, 15, 15, 20);
    }
L_000bee04:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bee08:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bee0c:;
    {
        cpu->r[14] = 0x000bee10u; fn_0015365c(cpu);
    }
L_000bee10:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bee14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bee18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bee1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000bee20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bee24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000bee28:;
    {
        cpu->r[14] = 0x000bee2cu; fn_00177118(cpu);
    }
L_000bee2c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x480u);
    }
L_000bee30:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[6];
    }
L_000bee34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bee38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000bee3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bee40:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000bee44:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bee48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bee4c:;
    {
        cpu->r[14] = 0x000bee50u; fn_0015364c(cpu);
    }
L_000bee50:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000bee54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_000bee58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000bee5c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bee60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_000bee64:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bee68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_000bee6c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bee70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_000bee74:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bee78:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x10u;
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_000bee7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000bee80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_000bee84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bee58;
        }
    }
L_000bee88:;
    {
        cpu->r[8] = 0x00001cecu;
    }
L_000bee8c:;
    {
        cpu->r[3] = 0x00001cf4u;
    }
L_000bee90:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bee94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bee98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000bee9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000beea0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000beea4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000beea8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000befc8;
        }
    }
L_000beeac:;
    {
        cpu->r[1] = 0x00008dd8u;
    }
L_000beeb0:;
    {
        cpu->r[3] = 0x00008e68u;
    }
L_000beeb4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000beeb8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000beebc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000beec0:;
    {
        cpu->r[1] = 0x00008e64u;
    }
L_000beec4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000beec8:;
    {
        cpu->r[3] = 0x00008e6cu;
    }
L_000beecc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000beed0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000beed4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000beed8:;
    {
        cpu->r[9] = 0x00001ce8u;
    }
L_000beedc:;
    {
        cpu->r[10] = 0x00001cf0u;
    }
L_000beee0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000beee4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000beee8:;
    {
        cpu->r[1] = 0x00008dd4u;
    }
L_000beeec:;
    {
        cpu->r[3] = 0x00008ddcu;
    }
L_000beef0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000beef4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000beef8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000beefc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000bef00:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000bef04:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000bef08:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000bef0c:;
    {
        goto L_000bef34;
    }
L_000bef10:;
    {
        cpu->r[3] = 0x00001cf4u;
    }
L_000bef14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000bef18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bef1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000bef20:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000bef24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bef28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bef2c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000bef30:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000befc8;
        }
    }
L_000bef34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000bef38:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
        }
    }
L_000bef3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000bef40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000bef44:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
        }
    }
L_000bef48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bef4c:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000bef50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[11], 1, 1);
    }
L_000bef54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bef10;
        }
    }
L_000bef58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000bef5c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000bef60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bef64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000bef68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
        }
    }
L_000bef6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000bef70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_000bef74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000bef78:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000bef7c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bef80:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bef84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
        }
    }
L_000bef88:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000bef8c:;
    {
        cpu->r[14] = 0x000bef90u; fn_00153624(cpu);
    }
L_000bef90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000bef94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bef98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000bef9c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
        }
    }
L_000befa0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000befa4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_000befa8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000befac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
        }
    }
L_000befb0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000befb4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000befb8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000befbc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000befc0:;
    {
        cpu->r[14] = 0x000befc4u; fn_00153624(cpu);
    }
L_000befc4:;
    {
        goto L_000bef10;
    }
L_000befc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000befcc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000befd0:;
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
L_000befd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000befd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000befdc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000befe0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000befe4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000befe8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000befec:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000beff0:;
    {
        cpu->r[14] = 0x000beff4u; fn_000b5cbc(cpu);
    }
L_000beff4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000beff8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000beffc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_000bf000:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bf004:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000bf008:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bf00c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_000bf010:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bf014:;
    {
        cpu->r[14] = 0x000bf018u; fn_000b5fc4(cpu);
    }
L_000bf018:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bf020u + + 0x78u);
    }
L_000bf01c:;
    {
        vfp_vmul(cpu, 13, 16, 14);
    }
L_000bf020:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf028u + + 0x74u);
    }
L_000bf024:;
    {
        vfp_vadd(cpu, 18, 18, 18);
    }
L_000bf028:;
    {
        vfp_vmla(cpu, 15, 13, 16);
    }
L_000bf02c:;
    {
        vfp_vmul(cpu, 14, 17, 14);
    }
L_000bf030:;
    {
        vfp_vmul(cpu, 13, 18, 16);
    }
L_000bf034:;
    {
        vfp_vadd(cpu, 19, 19, 19);
    }
L_000bf038:;
    {
        vfp_vmla(cpu, 15, 14, 17);
    }
L_000bf03c:;
    {
        vfp_vmla(cpu, 13, 19, 17);
    }
L_000bf040:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bf044:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bf048:;
    {
        cpu->r[14] = 0x000bf04cu; imp_atan2f(cpu); /* atan2f */
    }
L_000bf04c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf054u + + 0x58u);
    }
L_000bf050:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000bf054:;
    {
        vfp_vmul(cpu, 14, 13, 15);
    }
L_000bf058:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf060u + + 0x40u);
    }
L_000bf05c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000bf060:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf064:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bf068:;
    {
        goto L_000bee88;
    }
L_000bf06c:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000bf070:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000bf074:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000bf078:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000bf07c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x000001b0u, 0, 0);
    }
L_000bf080:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000bf084:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000bf088:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000bf08c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000bf090:;
    {
        cpu->r[14] = 0x000bf094u; fn_0017c2c4(cpu);
    }
L_000bf094:;
    {
        goto L_000bed0c;
    }
}

/* _ZN5Scene27UpdateFakeWheelsSuspensionsEiRiS0_ @ 000bf0b0 (arm) */
void fn_000bf0b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bf0b0:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000bf0b4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bf0b8:;
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
L_000bf0bc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000bf0c0:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000bf0c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000bf0c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bf0cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000bf0d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bf0d4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = 0x00008cc0u;
        }
    }
L_000bf0d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bf0dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf0e0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000bf0e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf0e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
        }
    }
L_000bf0ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bf0f0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf0f4:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bf0f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf0fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf100:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf104:;
    {
        cpu->r[9] = rd32(cpu->r[0]);
    }
L_000bf108:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000bf10c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000bf110:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00001cf0u;
        }
    }
L_000bf114:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf118:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000bf11c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf120:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bf124:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
        }
    }
L_000bf128:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf12c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bf130:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf134:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000bf138:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_000bf13c:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_000bf140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf1c0;
        }
    }
L_000bf144:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x1dcu);
    }
L_000bf148:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000bf14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf1cc;
        }
    }
L_000bf150:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000bf154:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_000bf158:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000bf15c:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_000bf160:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000bf164:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bf168:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = (~0x00000009u);
        }
    }
L_000bf16c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bf170:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[8];
        }
    }
L_000bf174:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000bf178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[8];
        }
    }
L_000bf17c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_000bf180:;
    {
        cpu->r[14] = 0x000bf184u; fn_000afd20(cpu);
    }
L_000bf184:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bf188:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000bf18c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000bf190:;
    {
        cpu->r[14] = 0x000bf194u; fn_000afd20(cpu);
    }
L_000bf194:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bf198:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000bf19c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000bf1a0:;
    {
        cpu->r[14] = 0x000bf1a4u; fn_000afd20(cpu);
    }
L_000bf1a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000bf1a8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000bf1ac:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000bf1b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bf1b4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000bf1b8:;
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
L_000bf1bc:;
    {
        return fn_000afd20(cpu);
    }
L_000bf1c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000bf1c4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000bf1c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf1ccu)) return;
    }
L_000bf1cc:;
    {
        cpu->r[6] = rd32(cpu->r[9] + + 0x498u);
    }
L_000bf1d0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bf1d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf150;
        }
    }
L_000bf1d8:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x518u);
    }
L_000bf1dc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000bf1e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf298;
        }
    }
L_000bf1e4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[9] + + 0x354u);
    }
L_000bf1e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_000bf1ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf1f4u + + 0x2c8u);
    }
L_000bf1f0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bf1f4:;
    {
        wr32(cpu->r[9] + + 0x5e0u, cpu->r[3]);
    }
L_000bf1f8:;
    {
        vfp_sync_flags(cpu);
    }
L_000bf1fc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[8];
        }
    }
L_000bf200:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = cpu->r[8];
        }
    }
L_000bf204:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_000bf208:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bf350;
        }
    }
L_000bf20c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x000005d0u, 0, 0);
    }
L_000bf210:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bf218u + + 0x2a8u);
    }
L_000bf214:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000bf218:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000bf21c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_000bf220:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000bf228u + + 0x29cu);
    }
L_000bf224:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000bf228:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_000bf22c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bf230:;
    {
        wr32(cpu->r[9] + + 0x5dcu, cpu->r[3]);
    }
L_000bf234:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000bf238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf23c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf284;
        }
    }
L_000bf240:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000bf244:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000bf248:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf250u + + 0x278u);
    }
L_000bf24c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000bf250:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf258u + + 0x274u);
    }
L_000bf254:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000bf258:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bf25c:;
    {
        cpu->r[14] = 0x000bf260u; imp_sinf(cpu); /* sinf */
    }
L_000bf260:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf268u + + 0x268u);
    }
L_000bf264:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000bf268:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000bf26c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf270:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bf274:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000bf278:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_000bf27c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000bf280:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000bf284:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000bf288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf300;
        }
    }
L_000bf28c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bf290:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000bf294:;
    {
        goto L_000bf160;
    }
L_000bf298:;
    {
        cpu->r[11] = rd32(cpu->r[2]);
    }
L_000bf29c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_000bf2a0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000bf2a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf2acu + + 0x21cu);
    }
L_000bf2a8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000bf2ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf2b4u + + 0x218u);
    }
L_000bf2b0:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000bf2b4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bf2b8:;
    {
        cpu->r[14] = 0x000bf2bcu; imp_sinf(cpu); /* sinf */
    }
L_000bf2bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf2c4u + + 0x210u);
    }
L_000bf2c0:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_000bf2c4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000bf2c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf2cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = cpu->r[6];
        }
    }
L_000bf2d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_000bf2d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = cpu->r[4];
        }
    }
L_000bf2d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[8];
        }
    }
L_000bf2dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000bf2e0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000bf2e4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf2e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bf2ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_000bf2f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bf2f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[4];
        }
    }
L_000bf2f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = cpu->r[8];
        }
    }
L_000bf2fc:;
    {
        goto L_000bf234;
    }
L_000bf300:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[11];
    }
L_000bf304:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000bf308:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf310u + + 0x1b8u);
    }
L_000bf30c:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000bf310:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf318u + + 0x1b4u);
    }
L_000bf314:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000bf318:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000bf31c:;
    {
        cpu->r[14] = 0x000bf320u; imp_sinf(cpu); /* sinf */
    }
L_000bf320:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf328u + + 0x1acu);
    }
L_000bf324:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bf328:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000bf32c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000bf330:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000bf334:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf338:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000bf33c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_000bf340:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 0);
    }
L_000bf344:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_000bf348:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000bf34c:;
    {
        goto L_000bf160;
    }
L_000bf350:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000bf354:;
    {
        cpu->r[14] = 0x000bf358u; fn_000979a0(cpu);
    }
L_000bf358:;
    {
        cpu->r[14] = 0x000bf35cu; fn_00093fd8(cpu);
    }
L_000bf35c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bf360:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000bf364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf37c;
        }
    }
L_000bf368:;
    {
        cpu->r[14] = 0x000bf36cu; fn_000979a0(cpu);
    }
L_000bf36c:;
    {
        cpu->r[14] = 0x000bf370u; fn_00093fd8(cpu);
    }
L_000bf370:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000bf374:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bf378:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf3a4;
        }
    }
L_000bf37c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bf380:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf388:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bf38c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bf390:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bf394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bf398:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bf39c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_000bf3a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf460;
        }
    }
L_000bf3a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf3acu + + 0x128u);
    }
L_000bf3a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000bf3ac:;
    {
        cpu->r[6] = rd32(cpu->r[9] + + 0x5a4u);
    }
L_000bf3b0:;
    {
        cpu->r[8] = (cpu->r[6] >> 1) & 0x1u;
    }
L_000bf3b4:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[6] = v;
    }
L_000bf3b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000bf3bc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf3c4u + + 0x114u);
        }
    }
L_000bf3c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000bf3c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bf3fc;
        }
    }
L_000bf3c8:;
    {
        vfp_vdiv(cpu, 13, 16, 15);
    }
L_000bf3cc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000bf3d4u + + 0xe8u);
    }
L_000bf3d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf3d8u + + 0x104u);
    }
L_000bf3d4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000bf3dcu + + 0x104u);
    }
L_000bf3d8:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000bf3dc:;
    {
        vfp_vmul(cpu, 14, 13, 12);
    }
L_000bf3e0:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_000bf3e4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000bf3ecu + + 0xf8u);
    }
L_000bf3e8:;
    {
        vfp_vmla(cpu, 14, 13, 12);
    }
L_000bf3ec:;
    {
        vfp_vmla(cpu, 15, 13, 11);
    }
L_000bf3f0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000bf3f4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf3f8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bf3fc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000bf400:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_000bf404:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = cpu->r[3];
        }
    }
L_000bf408:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_000bf40c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[8];
        }
    }
L_000bf410:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000bf414:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[9] + + 0x5e0u, cpu->r[1]);
        }
    }
L_000bf418:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000bf41c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bf420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_000bf424:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
        }
    }
L_000bf428:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_000bf42c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_000bf430:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_000bf434:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_000bf438:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bf43c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[9] + + 0x5e0u, cpu->r[3]);
        }
    }
L_000bf440:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x624u);
    }
L_000bf444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf448:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf450u + + 0x6cu);
        }
    }
L_000bf44c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x000005e0u, 0, 0);
        }
    }
L_000bf450:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000bf454:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
        }
    }
L_000bf458:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[9] + + 0x5e0u, cpu->r[3]);
        }
    }
L_000bf45c:;
    {
        goto L_000bf20c;
    }
L_000bf460:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000bf464:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf46cu + + 0x7cu);
    }
L_000bf468:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf46c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000bf474u + + 0x6cu);
    }
L_000bf470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000bf474:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000bf478:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_000bf47c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf484u + + 0x68u);
    }
L_000bf480:;
    {
        cpu->r[8] = rd32(cpu->r[9] + + 0x588u);
    }
L_000bf484:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000bf488:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000bf48c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000bf490:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000bf494:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 31u, &shc); cpu->r[8] = v;
    }
L_000bf498:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_000bf49c:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_000bf4a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf4a8u + + 0x34u);
    }
L_000bf4a4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000bf4a8:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000bf4ac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000bf4b4u + + 0x8u);
    }
L_000bf4b0:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_000bf4b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000bf4b8:;
    {
        goto L_000bf3fc;
    }
}

/* _ZN5Scene28RenderCarsTransparentObjectsEh @ 000bf4f0 (arm) */
void fn_000bf4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bf4f0:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000bf4f4:;
    {
        cpu->r[1] = rd32(0x000bf4fcu + + 0x37cu);
    }
L_000bf4f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf4fc:;
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
L_000bf500:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000bf504:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bf508:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000bf50c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bf514u, cpu->r[1], 0, 0);
    }
L_000bf510:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf514:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000bf518:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000bf51c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bf834;
        }
    }
L_000bf520:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bf524:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf528:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bf52c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf530:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf534:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf538:;
    {
        cpu->r[14] = 0x000bf540u;
    }
L_000bf53c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf540u)) return;
    }
L_000bf540:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bf544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bf7fc;
        }
    }
L_000bf548:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bf54c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf550:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bf554:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf558:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf55c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf560:;
    {
        cpu->r[14] = 0x000bf568u;
    }
L_000bf564:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf568u)) return;
    }
L_000bf568:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bf56c:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000bf570:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf574:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bf578:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf580u + + 0x2ecu);
    }
L_000bf57c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bf580:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bf584:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000bf588:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bf58c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000bf590:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[0]);
    }
L_000bf594:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_000bf598:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000bf59c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bf7f0;
        }
    }
L_000bf5a0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000bf5a4:;
    {
        cpu->r[9] = 0x00001cecu;
    }
L_000bf5a8:;
    {
        cpu->r[7] = 0x00001ce8u;
    }
L_000bf5ac:;
    {
        cpu->r[8] = 0x00001cf0u;
    }
L_000bf5b0:;
    {
        cpu->r[12] = rd32(0x000bf5b8u + + 0x2c4u);
    }
L_000bf5b4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000bf5b8:;
    {
        cpu->r[1] = rd32(0x000bf5c0u + + 0x2c0u);
    }
L_000bf5bc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000bf5c0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000bf5c4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_000bf5c8:;
    {
        cpu->r[2] = 0x00001c58u;
    }
L_000bf5cc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000bf5d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bf5d4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000bf5d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000bf5dc:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000bf5e4u + + 0x28cu);
    }
L_000bf5e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000bf5e4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000bf5ecu + + 0x288u);
    }
L_000bf5e8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000bf5ec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000bf5f0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000bf5f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
        }
    }
L_000bf5f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000bf5fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
        }
    }
L_000bf600:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf604:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bf608:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bf60c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x178u);
    }
L_000bf610:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bf614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf7c4;
        }
    }
L_000bf618:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000bf61c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bf620:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000bf624:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf628:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bf62c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_000bf630:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000bf634:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
        }
    }
L_000bf638:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bf63c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf640:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_000bf644:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000bf648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf7c4;
        }
    }
L_000bf64c:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_000bf650:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000bf654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf66c;
        }
    }
L_000bf65c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bf660:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000bf664:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bf668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bf7c4;
        }
    }
L_000bf66c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000bf670:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000bf674:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000bf678:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf67c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000bf680:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000bf684:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000bf688:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000bf68c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf690:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf694:;
    {
        cpu->r[14] = 0x000bf69cu;
    }
L_000bf698:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf69cu)) return;
    }
L_000bf69c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000bf6a0:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_000bf6a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000bf6a8:;
    {
        cpu->r[11] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000bf6ac:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_000bf6b0:;
    {
        uint32_t v = cpu->r[11] & ~ 0x08000001u; cpu->r[11] = v;
    }
L_000bf6b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf6b8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] | 0x00000001u; cpu->r[11] = v;
        }
    }
L_000bf6bc:;
    {
        cpu->r[14] = 0x000bf6c0u; fn_0015d920(cpu);
    }
L_000bf6c0:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000bf6c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000bf6c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000bf6cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bf6d0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[4], 1, 1);
    }
L_000bf6d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000bf6d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
        }
    }
L_000bf6dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000bf6e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000bf6e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10] + + 0x354u);
    }
L_000bf6e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
        }
    }
L_000bf6ec:;
    {
        cpu->r[0] = 0x00008c74u;
    }
L_000bf6f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000bf6f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf6f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bf6fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf700:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xd24u);
    }
L_000bf704:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf708:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] | 0x00008000u; cpu->r[11] = v;
        }
    }
L_000bf70c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[4], 1, 1);
    }
L_000bf710:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
        }
    }
L_000bf714:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000bf718:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
        }
    }
L_000bf71c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf720:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000bf724:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bf728:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf72c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xd25u);
    }
L_000bf730:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf734:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[11] | 0x00000001u; cpu->r[11] = v;
        }
    }
L_000bf738:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[4], 1, 1);
    }
L_000bf73c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 0);
        }
    }
L_000bf740:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000bf744:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[7]);
        }
    }
L_000bf748:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = add_flags(cpu, cpu->r[3], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
        }
    }
L_000bf74c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000bf750:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000bf754:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
        }
    }
L_000bf758:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000bf75c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf760:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_000bf764:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
    }
L_000bf768:;
    {
        vfp_vsub(cpu, 13, 13, 17);
    }
L_000bf76c:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_000bf770:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x418u);
    }
L_000bf774:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000bf778:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000bf77c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000bf780:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_000bf784:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[12];
    }
L_000bf788:;
    {
        uint32_t v = cpu->r[11] | cpu->r[3]; cpu->r[11] = v;
    }
L_000bf78c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_000bf790:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bf794:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bf798:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000bf79c:;
    {
        vfp_vdiv(cpu, 14, 15, 20);
    }
L_000bf7a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000bf7a4:;
    {
        cpu->r[14] = 0x000bf7a8u; fn_000afa90(cpu);
    }
L_000bf7a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000bf7ac:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000bf7b0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000bf7b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf7b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf7bc:;
    {
        cpu->r[14] = 0x000bf7c4u;
    }
L_000bf7c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf7c4u)) return;
    }
L_000bf7c4:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bf7c8:;
    {
        cpu->r[2] = 0x00008cc4u;
    }
L_000bf7cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf7d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bf7d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000bf7d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000bf7dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000bf7e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000bf7e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000bf7e8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000bf7ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bf5ec;
        }
    }
L_000bf7f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000bf7f4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000bf7f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf7fcu)) return;
    }
L_000bf7fc:;
    {
        cpu->r[1] = rd32(0x000bf804u + + 0x80u);
    }
L_000bf800:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bf804:;
    {
        cpu->r[12] = rd32(0x000bf80cu + + 0x7cu);
    }
L_000bf808:;
    {
        cpu->r[14] = 0x000027d3u;
    }
L_000bf80c:;
    {
        cpu->r[2] = rd32(0x000bf814u + + 0x78u);
    }
L_000bf810:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bf818u, cpu->r[1], 0, 0);
    }
L_000bf814:;
    {
        cpu->r[3] = rd32(0x000bf81cu + + 0x74u);
    }
L_000bf818:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bf820u, cpu->r[12], 0, 0);
    }
L_000bf81c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bf824u, cpu->r[2], 0, 0);
    }
L_000bf820:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000178u, 0, 0);
    }
L_000bf824:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bf82cu, cpu->r[3], 0, 0);
    }
L_000bf828:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bf82c:;
    {
        cpu->r[14] = 0x000bf830u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bf830:;
    {
        goto L_000bf548;
    }
L_000bf834:;
    {
        cpu->r[1] = rd32(0x000bf83cu + + 0x58u);
    }
L_000bf838:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000bf83c:;
    {
        cpu->r[12] = rd32(0x000bf844u + + 0x54u);
    }
L_000bf840:;
    {
        cpu->r[14] = 0x000027d2u;
    }
L_000bf844:;
    {
        cpu->r[2] = rd32(0x000bf84cu + + 0x50u);
    }
L_000bf848:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bf850u, cpu->r[1], 0, 0);
    }
L_000bf84c:;
    {
        cpu->r[3] = rd32(0x000bf854u + + 0x4cu);
    }
L_000bf850:;
    {
        cpu->r[12] = add_flags(cpu, 0x000bf858u, cpu->r[12], 0, 0);
    }
L_000bf854:;
    {
        cpu->r[2] = add_flags(cpu, 0x000bf85cu, cpu->r[2], 0, 0);
    }
L_000bf858:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000178u, 0, 0);
    }
L_000bf85c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bf864u, cpu->r[3], 0, 0);
    }
L_000bf860:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000bf864:;
    {
        cpu->r[14] = 0x000bf868u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000bf868:;
    {
        goto L_000bf520;
    }
}

/* _ZN5Scene10RenderCarsEh @ 000bf8a8 (arm) */
void fn_000bf8a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000bf8a8:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000bf8ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf8b0:;
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
L_000bf8b4:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000bf8b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000bf8bc:;
    {
        cpu->r[10] = rd32(0x000bf8c4u + + 0x43cu);
    }
L_000bf8c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_000bf8c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf8c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000bf8cc:;
    {
        cpu->r[10] = add_flags(cpu, 0x000bf8d4u, cpu->r[10], 0, 0);
    }
L_000bf8d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0428;
        }
    }
L_000bf8d4:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bf8d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf8e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf8e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf8e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf8ec:;
    {
        cpu->r[14] = 0x000bf8f4u;
    }
L_000bf8f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf8f4u)) return;
    }
L_000bf8f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bf8f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c016c;
        }
    }
L_000bf8fc:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bf900:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf908:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_000bf90c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bf910:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bf914:;
    {
        cpu->r[14] = 0x000bf91cu;
    }
L_000bf918:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf91cu)) return;
    }
L_000bf91c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bf924u + + 0x3c4u);
    }
L_000bf920:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000bf924:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bf928:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000bf92c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[3]);
    }
L_000bf930:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000bf934:;
    {
        vfp_vmul(cpu, 18, 14, 15);
    }
L_000bf938:;
    {
        cpu->r[14] = 0x000bf93cu; fn_000bbba0(cpu);
    }
L_000bf93c:;
    {
        cpu->r[3] = 0x00008448u;
    }
L_000bf940:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf944:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf948:;
    {
        cpu->r[3] = rd32(0x000bf950u + + 0x3b4u);
    }
L_000bf94c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bf950:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000bf954:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf958:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000bf95c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0460;
        }
    }
L_000bf960:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000bf964:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf96c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000bf974:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf978:;
    {
        cpu->r[14] = 0x000bf980u;
    }
L_000bf97c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bf980u)) return;
    }
L_000bf980:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bf984:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0134;
        }
    }
L_000bf988:;
    {
        cpu->r[3] = rd32(0x000bf990u + + 0x378u);
    }
L_000bf98c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000bf990:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bf994:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfc70;
        }
    }
L_000bf99c:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000bf9a0:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000bf9a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bf9a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bf9ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bf9b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bf9b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bf9b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bf9bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000bfc70;
        }
    }
L_000bf9c0:;
    {
        cpu->r[1] = rd32(0x000bf9c8u + + 0x344u);
    }
L_000bf9c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000bf9c8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000bf9cc:;
    {
        cpu->r[3] = rd32(0x000bf9d4u + + 0x33cu);
    }
L_000bf9d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bf9d8u, cpu->r[1], 0, 0);
    }
L_000bf9d4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000bf9d8:;
    {
        cpu->r[1] = rd32(0x000bf9e0u + + 0x334u);
    }
L_000bf9dc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000001e4u, 0, 0);
    }
L_000bf9e0:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000bf9e4:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000bf9e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bf9f0u, cpu->r[1], 0, 0);
    }
L_000bf9ec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000bf9f0:;
    {
        cpu->r[1] = rd32(0x000bf9f8u + + 0x320u);
    }
L_000bf9f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000bf9fcu, cpu->r[3], 0, 0);
    }
L_000bf9f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000198u, 0, 0);
    }
L_000bf9fc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000bfa00:;
    {
        cpu->r[1] = add_flags(cpu, 0x000bfa08u, cpu->r[1], 0, 0);
    }
L_000bfa04:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_000bfa08:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000bfa0c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000bfa10:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bfa14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfa18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfa1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfa20:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfa24:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfa28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bfa2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfa30:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_000bfa34:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bfa38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfc40;
        }
    }
L_000bfa3c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000bfa40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000bfa44:;
    {
        cpu->r[14] = 0x000bfa4cu;
    }
L_000bfa48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bfa4cu)) return;
    }
L_000bfa4c:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bfa50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfa54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfa58:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000bfa5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000bfa60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bfa64:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfa68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfa6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfa70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfa74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfa78:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
        }
    }
L_000bfa7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfa80:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000bfa84:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bfa88:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000bfa8c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x3dcu);
    }
L_000bfa90:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000bfa94:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000bfa98:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x3d8u);
    }
L_000bfa9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bfaa0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000bfaa4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_000bfaa8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000bfaac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bfab0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfab4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfab8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfabc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000bfac0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfac4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bfac8:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_000bfacc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfad0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bfad4:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000bfad8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfadc:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[1];
    }
L_000bfae0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000bfae4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000bfae8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000bfaec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000bfaf0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x88u);
    }
L_000bfaf4:;
    {
        vfp_vsub(cpu, 15, 15, 12);
    }
L_000bfaf8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000bfafc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000bfb00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000bfb08u + + 0x1e4u);
    }
L_000bfb04:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000bfb08:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_000bfb0c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x000bfb14u + + 0x1ccu);
    }
L_000bfb10:;
    {
        vfp_vsub(cpu, 13, 13, 10);
    }
L_000bfb14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000bfb18:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_000bfb1c:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_000bfb20:;
    {
        cpu->r[14] = 0x000bfb24u; fn_00153600(cpu);
    }
L_000bfb24:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000bfb28:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,8);
    }
L_000bfb2c:;
    {
        vfp_vneg(cpu, 16, 16);
    }
L_000bfb30:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000bfb34:;
    {
        cpu->r[14] = 0x000bfb38u; fn_00154350(cpu);
    }
L_000bfb38:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000bfb3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000bfb40:;
    {
        cpu->r[14] = 0x000bfb44u; fn_00153c38(cpu);
    }
L_000bfb44:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bfb48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfb4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfb50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000bfb54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000bfb58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00001cf0u;
        }
    }
L_000bfb5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfb60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000bfb64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfb68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bfb6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfb70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bfb74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfb78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000bfb7c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x178u);
    }
L_000bfb80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bfb84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfc40;
        }
    }
L_000bfb88:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bfb8c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bfb90:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bfb94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfc08;
        }
    }
L_000bfb98:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000bfb9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfba0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfba4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000bfba8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000bfbac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000bfbb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000bfbb4:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_000bfbb8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000bfbbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0498;
        }
    }
L_000bfbc0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x3d4u);
    }
L_000bfbc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_000bfbc8:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x3d8u);
    }
L_000bfbcc:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x3dcu);
    }
L_000bfbd0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3d8u);
    }
L_000bfbd4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3dcu);
    }
L_000bfbd8:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x3d4u);
    }
L_000bfbdc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000bfbe0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_000bfbe4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_000bfbe8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_000bfbec:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_000bfbf0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_000bfbf4:;
    {
        cpu->r[14] = 0x000bfbf8u; fn_0018572c(cpu);
    }
L_000bfbf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x000007d0u, 1, 1);
    }
L_000bfbfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000bfc40;
        }
    }
L_000bfc00:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bfc04:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bfc08:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_000bfc0c:;
    {
        cpu->r[2] = rd8(cpu->r[7] + cpu->r[2]);
    }
L_000bfc10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bfc14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfc2c;
        }
    }
L_000bfc18:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bfc1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfc2c;
        }
    }
L_000bfc20:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000bfc24:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000bfc28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0268;
        }
    }
L_000bfc2c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000bfc30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfc40;
        }
    }
L_000bfc34:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_000bfc38:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000bfc3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0348;
        }
    }
L_000bfc40:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000bfc44:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000bfc48:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bfc4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfc50:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bfc54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000bfc58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bfc5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfc60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bfc64:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bfc68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000bfa08;
        }
    }
L_000bfc6c:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_000bfc70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bfc74:;
    {
        cpu->r[14] = 0x000bfc78u; fn_000e6290(cpu);
    }
L_000bfc78:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000bfc7c:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000bfc80:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bfc84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfc88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bfc8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfc90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bfc94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bfc98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0088;
        }
    }
L_000bfc9c:;
    {
        cpu->r[3] = rd32(0x000bfca4u + + 0x78u);
    }
L_000bfca0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000bfca4:;
    {
        cpu->r[0] = rd32(0x000bfcacu + + 0x74u);
    }
L_000bfca8:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000bfcac:;
    {
        cpu->r[1] = rd32(0x000bfcb4u + + 0x70u);
    }
L_000bfcb0:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x000bfcb8u + + 0x38u);
    }
L_000bfcb4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000bfcb8:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x000bfcc0u + + 0x34u);
    }
L_000bfcbc:;
    {
        cpu->r[3] = rd32(0x000bfcc4u + + 0x64u);
    }
L_000bfcc0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000bfcc8u + + 0x30u);
    }
L_000bfcc4:;
    {
        cpu->r[9] = rd32(0x000bfcccu + + 0x60u);
    }
L_000bfcc8:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x000bfcd0u + + 0x2cu);
    }
L_000bfccc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000bfcd0:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_000bfcd4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000bfcd8:;
    {
        goto L_000bfd64;
    }
L_000bfd38:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000bfd3c:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000bfd40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bfd44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfd48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000bfd4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000bfd50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bfd54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfd58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000bfd5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bfd60:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c008c;
        }
    }
L_000bfd64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000bfd68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000bfd6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bfd70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfd74:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfd78:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfd7c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfd80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfd84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfd88:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bfd8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfd90:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bfd94:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_000bfd98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfd9c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000bfda0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00001cf0u;
        }
    }
L_000bfda4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000bfda8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfdac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfdb0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfdb4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfdb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfdbc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfdc0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
        }
    }
L_000bfdc4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000bfdc8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_000bfdcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfd38;
        }
    }
L_000bfdd0:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000bfdd4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000bfdd8:;
    {
        { uint32_t v = cpu->r[1] & 0x00100000u; set_nz(cpu, v); }
    }
L_000bfddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfd38;
        }
    }
L_000bfde0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000bfde4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00001ce8u;
        }
    }
L_000bfde8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000bfdec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfdf0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfdf4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfdf8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bfdfc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000bfe00:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bfe04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfe08:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000bfe0c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x178u);
    }
L_000bfe10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bfe14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfd38;
        }
    }
L_000bfe18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000bfe1c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000bfe20:;
    {
        cpu->r[14] = 0x000bfe24u; fn_0015d920(cpu);
    }
L_000bfe24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000bfe28:;
    {
        cpu->r[1] = 0x000011e8u;
    }
L_000bfe2c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000bfe30:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000bfe34:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000bfe38:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000bfe3c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000bfe40:;
    {
        cpu->r[14] = 0x000bfe48u;
    }
L_000bfe44:;
    {
        uint32_t t = rd32(cpu->r[1] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000bfe48u)) return;
    }
L_000bfe48:;
    {
        cpu->r[1] = 0x00001920u;
    }
L_000bfe4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000bfe50:;
    {
        cpu->r[0] = rd8(cpu->r[7] + cpu->r[1]);
    }
L_000bfe54:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000bfe58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000bfe5c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000bfe60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000bfe64:;
    {
        uint32_t v = cpu->r[1] & ~ 0x08000001u; cpu->r[8] = v;
    }
L_000bfe68:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[8] | 0x00000001u; cpu->r[8] = v;
        }
    }
L_000bfe6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bfe70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bfe7c;
        }
    }
L_000bfe74:;
    {
        { uint32_t v = cpu->r[1] & 0x04000000u; set_nz(cpu, v); }
    }
L_000bfe78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0100;
        }
    }
L_000bfe7c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000bfe84u + - 0x150u);
    }
L_000bfe80:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000bfe84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000bfe88:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000bfe8c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000bfe90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000bfe94:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xf0u);
    }
L_000bfe98:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000bfe9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000d20u, 0, 0);
        }
    }
L_000bfea0:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
        }
    }
L_000bfea4:;
    {
        cpu->r[14] = 0x000bfea8u; fn_000bca54(cpu);
    }
L_000bfea8:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_000bfeac:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_000bfeb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000bfeb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000bff44;
        }
    }
L_000bfeb8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000bfebc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000bfec0:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000bfec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bff44;
        }
    }
L_000bfec8:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bfecc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000bfed0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bfed4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bfed8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000bfedc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00001cf0u;
        }
    }
L_000bfee0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000bfee4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfee8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000bfeec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bfef0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfef4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfef8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfefc:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bff00:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bff04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000bff08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bff0c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000bff10:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bff14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000bff18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bff1c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bff20:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bff24:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000bff28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bff2c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bff30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bff34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bff38:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000bff3c:;
    {
        cpu->r[14] = 0x000bff40u; fn_000b2ebc(cpu);
    }
L_000bff40:;
    {
        goto L_000c003c;
    }
L_000bff44:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bff48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bff4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bff50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bff54:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c00e8;
        }
    }
L_000bff58:;
    {
        cpu->r[3] = 0x00001ce8u;
    }
L_000bff5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bff60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bff64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_000bff68:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000bff6c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000bff70:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bff74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bff78:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000bff7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000bff80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000bff84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bff88:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bff8c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000bff90:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bff94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000bff98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000bff9c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000bffa0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000bffa4:;
    {
        cpu->r[14] = 0x000bffa8u; fn_000afc7c(cpu);
    }
L_000bffa8:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000bffac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000bffb0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000bffb4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000bffb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000bffbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000bffc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x354u);
    }
L_000bffc4:;
    {
        cpu->r[12] = 0x00008c74u;
    }
L_000bffc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000bffcc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000bffd0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000bffd4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00001cf0u;
        }
    }
L_000bffd8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000bffdc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bffe0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
        }
    }
L_000bffe4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000bffe8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000bffec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfff0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000bfff4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_000bfff8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000bfffc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
        }
    }
L_000c0000:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0004:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000c0008:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_000c000c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000c0010:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000c0014:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_000c0018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_000c001c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000c0020:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000c0024:;
    {
        uint32_t v = cpu->r[8] | cpu->r[12]; cpu->r[12] = v;
    }
L_000c0028:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c002c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000c0030:;
    {
        vfp_vdiv(cpu, 14, 15, 21);
    }
L_000c0034:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000c0038:;
    {
        cpu->r[14] = 0x000c003cu; fn_000b54a8(cpu);
    }
L_000c003c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000c0040:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c0044:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000c0048:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_000c004c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c0050:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c0054:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000c0058:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[1]);
    }
L_000c005c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c0060:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000c0064:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_000c0068:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c006c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0070:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[11]);
    }
L_000c0074:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0078:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000c007c:;
    {
        cpu->r[14] = 0x000c0084u;
    }
L_000c0080:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0084u)) return;
    }
L_000c0084:;
    {
        goto L_000bfd38;
    }
L_000c0088:;
    {
        cpu->r[9] = rd32(0x000c0090u + - 0x364u);
    }
L_000c008c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c0090:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0094:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c0098:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000c009c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c00a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000c00a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c01a4;
        }
    }
L_000c00a8:;
    {
        cpu->r[3] = rd32(0x000c00b0u + - 0x380u);
    }
L_000c00ac:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000c00b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c00b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c00b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0128;
        }
    }
L_000c00bc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000c00c0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c00c4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000c00c8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c00cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c00d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c00dc;
        }
    }
L_000c00d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c00d8:;
    {
        cpu->r[14] = 0x000c00dcu; fn_000de1f4(cpu);
    }
L_000c00dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000c00e0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000c00e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c00e8u)) return;
    }
L_000c00e8:;
    {
        cpu->r[1] = 0x00001cf0u;
    }
L_000c00ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000c00f0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000c00f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000c00f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c00fc:;
    {
        goto L_000bff68;
    }
L_000c0100:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_000c0104:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8000u << 16);
    }
L_000c0108:;
    {
        uint32_t v = cpu->r[1] & cpu->r[2]; cpu->r[2] = v;
    }
L_000c010c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0250;
        }
    }
L_000c0114:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x624u);
    }
L_000c0118:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000c0120u + + 0x39cu);
    }
L_000c011c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000c0120:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,17) = *vfp_s(cpu,23);
        }
    }
L_000c0124:;
    {
        goto L_000bfe80;
    }
L_000c0128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c012c:;
    {
        cpu->r[14] = 0x000c0130u; fn_000e82f0(cpu);
    }
L_000c0130:;
    {
        goto L_000c00bc;
    }
L_000c0134:;
    {
        cpu->r[1] = rd32(0x000c013cu + + 0x38cu);
    }
L_000c0138:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c013c:;
    {
        cpu->r[12] = rd32(0x000c0144u + + 0x388u);
    }
L_000c0140:;
    {
        cpu->r[14] = 0x000026fdu;
    }
L_000c0144:;
    {
        cpu->r[2] = rd32(0x000c014cu + + 0x384u);
    }
L_000c0148:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c0150u, cpu->r[1], 0, 0);
    }
L_000c014c:;
    {
        cpu->r[3] = rd32(0x000c0154u + + 0x380u);
    }
L_000c0150:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c0158u, cpu->r[12], 0, 0);
    }
L_000c0154:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c015cu, cpu->r[2], 0, 0);
    }
L_000c0158:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000198u, 0, 0);
    }
L_000c015c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c0164u, cpu->r[3], 0, 0);
    }
L_000c0160:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c0164:;
    {
        cpu->r[14] = 0x000c0168u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c0168:;
    {
        goto L_000bf988;
    }
L_000c016c:;
    {
        cpu->r[1] = rd32(0x000c0174u + + 0x364u);
    }
L_000c0170:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c0174:;
    {
        cpu->r[12] = rd32(0x000c017cu + + 0x360u);
    }
L_000c0178:;
    {
        cpu->r[14] = 0x000026edu;
    }
L_000c017c:;
    {
        cpu->r[2] = rd32(0x000c0184u + + 0x35cu);
    }
L_000c0180:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c0188u, cpu->r[1], 0, 0);
    }
L_000c0184:;
    {
        cpu->r[3] = rd32(0x000c018cu + + 0x358u);
    }
L_000c0188:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c0190u, cpu->r[12], 0, 0);
    }
L_000c018c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c0194u, cpu->r[2], 0, 0);
    }
L_000c0190:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000198u, 0, 0);
    }
L_000c0194:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c019cu, cpu->r[3], 0, 0);
    }
L_000c0198:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c019c:;
    {
        cpu->r[14] = 0x000c01a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c01a0:;
    {
        goto L_000bf8fc;
    }
L_000c01a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c01a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000c01ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c01b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c01b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c01b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c01bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c01c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
        }
    }
L_000c01c4:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_000c01c8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000c01cc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c01d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c01d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c00a8;
        }
    }
L_000c01d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c01dc:;
    {
        cpu->r[5] = 0x000011e8u;
    }
L_000c01e0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_000c01e4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c01e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c01ec:;
    {
        cpu->r[14] = 0x000c01f4u;
    }
L_000c01f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c01f4u)) return;
    }
L_000c01f4:;
    {
        cpu->r[2] = 0x00001d04u;
    }
L_000c01f8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c01fc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c0200:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000c0204:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000c0208:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c020c:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000c0210:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c0214:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c021cu + + 0x2a4u);
    }
L_000c0218:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c021c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000c0220:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_000c0224:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000c0228:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c022c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000c0230:;
    {
        cpu->r[14] = 0x000c0234u; fn_000b4940(cpu);
    }
L_000c0234:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c0238:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_000c023c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0240:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0244:;
    {
        cpu->r[14] = 0x000c024cu;
    }
L_000c0248:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c024cu)) return;
    }
L_000c024c:;
    {
        goto L_000c00a8;
    }
L_000c0250:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x380u);
    }
L_000c0254:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000c0258:;
    {
        vfp_vmul(cpu, 14, 15, 23);
    }
L_000c025c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000c0264u + + 0x260u);
    }
L_000c0260:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_000c0264:;
    {
        goto L_000bfe80;
    }
L_000c0268:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x498u);
    }
L_000c026c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfc2c;
        }
    }
L_000c0274:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c0278:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c027c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c0280:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0284:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0288:;
    {
        cpu->r[14] = 0x000c0290u;
    }
L_000c028c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0290u)) return;
    }
L_000c0290:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000c0294:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0298:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_000c029c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_000c02a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c02a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c02a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_000c02ac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c02b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000c02b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c02b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c02bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00001cf0u;
        }
    }
L_000c02c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000c02c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c02c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000c02cc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c02d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c02d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c02d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c02dc:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c02e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c02e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000c02e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c02ec:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000c02f0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c02f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c02f8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000c02fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c0300:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c0304:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000c0308:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c030c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000c0310:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000c0314:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c0318:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c031c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c0320:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c0324:;
    {
        cpu->r[14] = 0x000c0328u; fn_000af5b0(cpu);
    }
L_000c0328:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c032c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c0330:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000c0334:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0338:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c033c:;
    {
        cpu->r[14] = 0x000c0344u;
    }
L_000c0340:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0344u)) return;
    }
L_000c0344:;
    {
        goto L_000bfc40;
    }
L_000c0348:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x498u);
    }
L_000c034c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000bfc40;
        }
    }
L_000c0354:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c0358:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c035c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c0360:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0364:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0368:;
    {
        cpu->r[14] = 0x000c0370u;
    }
L_000c036c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0370u)) return;
    }
L_000c0370:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000c0374:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0378:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_000c037c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_000c0380:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c0384:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c0388:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_000c038c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c0390:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000c0394:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000c0398:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000c039c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00001cf0u;
        }
    }
L_000c03a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001ce8u;
        }
    }
L_000c03a4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c03a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000c03ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c03b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c03b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c03b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000c03bc:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000c03c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c03c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
        }
    }
L_000c03c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c03cc:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000c03d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000c03d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000c03d8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000c03dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c03e0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000c03e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
        }
    }
L_000c03e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000c03ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000c03f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_000c03f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000c03f8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c03fc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000c0400:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c0404:;
    {
        cpu->r[14] = 0x000c0408u; fn_000af474(cpu);
    }
L_000c0408:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000c040c:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000c0410:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000c0414:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c0418:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c041c:;
    {
        cpu->r[14] = 0x000c0424u;
    }
L_000c0420:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0424u)) return;
    }
L_000c0424:;
    {
        goto L_000bfc40;
    }
L_000c0428:;
    {
        cpu->r[1] = rd32(0x000c0430u + + 0xb8u);
    }
L_000c042c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c0430:;
    {
        cpu->r[12] = rd32(0x000c0438u + + 0xb4u);
    }
L_000c0434:;
    {
        cpu->r[14] = 0x000026ecu;
    }
L_000c0438:;
    {
        cpu->r[2] = rd32(0x000c0440u + + 0xb0u);
    }
L_000c043c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c0444u, cpu->r[1], 0, 0);
    }
L_000c0440:;
    {
        cpu->r[3] = rd32(0x000c0448u + + 0xacu);
    }
L_000c0444:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c044cu, cpu->r[12], 0, 0);
    }
L_000c0448:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c0450u, cpu->r[2], 0, 0);
    }
L_000c044c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000198u, 0, 0);
    }
L_000c0450:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c0458u, cpu->r[3], 0, 0);
    }
L_000c0454:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c0458:;
    {
        cpu->r[14] = 0x000c045cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c045c:;
    {
        goto L_000bf8d4;
    }
L_000c0460:;
    {
        cpu->r[1] = rd32(0x000c0468u + + 0x90u);
    }
L_000c0464:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c0468:;
    {
        cpu->r[12] = rd32(0x000c0470u + + 0x8cu);
    }
L_000c046c:;
    {
        cpu->r[14] = 0x000026fcu;
    }
L_000c0470:;
    {
        cpu->r[2] = rd32(0x000c0478u + + 0x88u);
    }
L_000c0474:;
    {
        cpu->r[1] = add_flags(cpu, 0x000c047cu, cpu->r[1], 0, 0);
    }
L_000c0478:;
    {
        cpu->r[3] = rd32(0x000c0480u + + 0x84u);
    }
L_000c047c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000c0484u, cpu->r[12], 0, 0);
    }
L_000c0480:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c0488u, cpu->r[2], 0, 0);
    }
L_000c0484:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000198u, 0, 0);
    }
L_000c0488:;
    {
        cpu->r[3] = add_flags(cpu, 0x000c0490u, cpu->r[3], 0, 0);
    }
L_000c048c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000c0490:;
    {
        cpu->r[14] = 0x000c0494u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c0494:;
    {
        goto L_000bf960;
    }
L_000c0498:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000c049c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000c04a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000c04a4:;
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
L_000c04a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c04ac:;
    {
        cpu->r[12] = 0x00002727u;
    }
L_000c04b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000c04b4:;
    {
        cpu->r[14] = 0x000c04b8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000c04b8:;
    {
        goto L_000bfbc0;
    }
}

/* _ZN5Scene30TriggerSoundForObjectCollisionEi @ 000c0508 (arm) */
void fn_000c0508(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c0508:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000c9u, 1, 1);
    }
L_000c050c:;
    {
        cpu->r[0] = rd32(0x000c0514u + + 0x60u);
    }
L_000c0510:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000c0514:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c051cu, cpu->r[0], 0, 0);
    }
L_000c0518:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000c051c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0528;
        }
    }
L_000c0520:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c0524:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0528u)) return;
    }
L_000c0528:;
    {
        cpu->r[12] = rd32(0x000c0530u + + 0x48u);
    }
L_000c052c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000c0530:;
    {
        cpu->r[1] = 0x00000083u;
    }
L_000c0534:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000c0538:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000c053c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c0540:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c0544:;
    {
        cpu->r[14] = 0x000c0548u; fn_000fd224(cpu);
    }
L_000c0548:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000c054c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0520;
        }
    }
L_000c0550:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000c0554:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c0558:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000c055c:;
    {
        cpu->r[1] = 0x00000083u;
    }
L_000c0560:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000c0564:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000c0568:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000c056c:;
    {
        cpu->r[14] = 0x000c0570u; fn_000fd248(cpu);
    }
L_000c0570:;
    {
        goto L_000c0520;
    }
}

/* _ZN5Scene14isGameFinishedERbS0_Ri @ 000c057c (arm) */
void fn_000c057c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c057c:;
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
L_000c0580:;
    {
        cpu->r[5] = rd32(0x000c0588u + + 0x7c4u);
    }
L_000c0584:;
    {
        cpu->r[7] = rd32(0x000c058cu + + 0x7c4u);
    }
L_000c0588:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000c058c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c0594u, cpu->r[5], 0, 0);
    }
L_000c0590:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_000c0594:;
    {
        cpu->r[2] = 0x000082f4u;
    }
L_000c0598:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000c059c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c05a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c05a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000c05a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c05ac:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c05b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c05b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c07b4;
        }
    }
L_000c05b8:;
    {
        cpu->r[1] = 0x000082fcu;
    }
L_000c05bc:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_000c05c0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000c05c4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c05c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c05cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000c05d0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[6], cpu->r[3]);
        }
    }
L_000c05d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_000c05d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[10], cpu->r[3]);
        }
    }
L_000c05dc:;
    {
        cpu->r[3] = 0x00004220u;
    }
L_000c05e0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[8], cpu->r[2]);
        }
    }
L_000c05e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c05e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000c05ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c05f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000c05f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000c05f8:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000c05fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c0600:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c0604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c0608:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c060c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001640u, 0, 0);
    }
L_000c0610:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0614:;
    {
        cpu->r[2] = 0x00001cfcu;
    }
L_000c0618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000c061c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0620:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c0624:;
    {
        cpu->r[14] = 0x000c0628u; fn_0015d718(cpu);
    }
L_000c0628:;
    {
        cpu->r[1] = 0x00001d10u;
    }
L_000c062c:;
    {
        cpu->r[2] = 0x0000a42du;
    }
L_000c0630:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c0634:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000c0638:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c063c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000c0640:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000c0644:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000c0648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c064c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c0650:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c0654:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c0658:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c065c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000c0660:;
    {
        cpu->r[1] = 0x00001d14u;
    }
L_000c0664:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000c0668:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000c066c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0700;
        }
    }
L_000c0670:;
    {
        cpu->r[0] = 0x0000a428u;
    }
L_000c0674:;
    {
        cpu->r[12] = 0x0000a42cu;
    }
L_000c0678:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000c067c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000c0680:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000c0684:;
    {
        wr8(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000c0688:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000c068c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001684u;
        }
    }
L_000c0690:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_000c0694:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c0698:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c069c:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000c06a0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[1]);
        }
    }
L_000c06a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c06a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000c06ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c06b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c06b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c06b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c06bc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c06c0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000c06c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0708;
        }
    }
L_000c06c8:;
    {
        cpu->r[1] = 0x0000a428u;
    }
L_000c06cc:;
    {
        cpu->r[3] = 0x0000a42cu;
    }
L_000c06d0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000c06d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c06d8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000c06dc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000c06e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_000c06e4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000c06e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_000c06ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c06f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c06f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c06f8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c06fc:;
    {
        goto L_000c0708;
    }
L_000c0700:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000c0704:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0708:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000c070c:;
    {
        cpu->r[12] = 0x00001be0u;
    }
L_000c0710:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000c0714:;
    {
        cpu->r[9] = 0x00001be8u;
    }
L_000c0718:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000c071c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000c0720:;
    {
        cpu->r[9] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_000c0724:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_000c0728:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_000c072c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000c0730:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000c0734:;
    {
        sub_flags(cpu, cpu->r[12], 0x0000000bu, 1, 1);
    }
L_000c0738:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[12]) {
        case 0: goto L_000c0b7c;
        case 1: goto L_000c0af8;
        case 2: goto L_000c0778;
        case 3: goto L_000c0778;
        case 4: goto L_000c0a94;
        case 5: goto L_000c09d0;
        case 6: goto L_000c0790;
        case 7: goto L_000c0910;
        case 8: goto L_000c088c;
        case 9: goto L_000c07c8;
        case 10: goto L_000c0778;
        case 11: goto L_000c0770;
        default: guest_unimplemented(cpu, 0x000c0738u); return; }
        }
    }
L_000c073c:;
    {
        goto L_000c0778;
    }
L_000c0770:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c07b4;
        }
    }
L_000c0778:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c077c:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_000c0780:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0784:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0788:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000c078c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0790u)) return;
    }
L_000c0790:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c0794:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c0798:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c079c:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c07a0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_000c07a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c07a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4cu);
    }
L_000c07ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c07b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000c0be0;
        }
    }
L_000c07b4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c07b8:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c07bc:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c07c0:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c07c4:;
    {
        goto L_000c0788;
    }
L_000c07c8:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c07cc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c07d0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c07d4:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c07d8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_000c07dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c07e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x48u);
    }
L_000c07e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000c07e8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c0c84;
        }
    }
L_000c07ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c07f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c080c;
        }
    }
L_000c07f4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c07f8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c07fc:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0800:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0804:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c080c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0810:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000c0814:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c0818:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c081c:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0820:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0824:;
    {
        wr8(cpu->r[8], cpu->r[9]);
    }
L_000c0828:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c082c:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0830:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c0834:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0838:;
    {
        cpu->r[14] = 0x000c083cu; fn_00098aec(cpu);
    }
L_000c083c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0840:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c0844:;
    {
        cpu->r[14] = 0x000c0848u; fn_000ae1a4(cpu);
    }
L_000c0848:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c084c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0850:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000c0854:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0858:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c085c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0860:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c0864:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000c0868:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_000c086c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x48u);
    }
L_000c0870:;
    {
        cpu->r[14] = 0x000c0874u; fn_00098aec(cpu);
    }
L_000c0874:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0878:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c087c:;
    {
        cpu->r[14] = 0x000c0880u; fn_000ae1a4(cpu);
    }
L_000c0880:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c0884:;
    {
        cpu->r[0] = 0x0000069du;
    }
L_000c0888:;
    {
        goto L_000c0c64;
    }
L_000c088c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c0890:;
    {
        cpu->r[3] = 0x00004dd3u;
    }
L_000c0894:;
    {
        cpu->r[0] = 0x00001c50u;
    }
L_000c0898:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x1062u << 16);
    }
L_000c089c:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c08a0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000c08a4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000c08a8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000c08ac:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_000c08b0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[9]; cpu->r[0] = v;
    }
L_000c08b4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000c08b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_000c08bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000c08c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c08ec;
        }
    }
L_000c08c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c08c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c07b4;
        }
    }
L_000c08cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000c08d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c08ec;
        }
    }
L_000c08d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c08d8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c08dc:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c08e0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c08e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c08e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c08ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c08f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c08f4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c08f8:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_000c08fc:;
    {
        cpu->r[0] = 0x0000069eu;
    }
L_000c0900:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0904:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0908:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c090c:;
    {
        goto L_000c0ae0;
    }
L_000c0910:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c0914:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c0918:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000c091c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c0920:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c0924:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_000c0928:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x50u);
    }
L_000c092c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000c0930:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c0954;
        }
    }
L_000c0934:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c07b4;
        }
    }
L_000c093c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0940:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0944:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0948:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c094c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0954:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c0958:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000c095c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0960:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_000c0964:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0968:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000c096c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c0970:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c0974:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0978:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c097c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000c0980:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_000c0984:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c0988:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c098c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c0990:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0006a000u, 0, 0);
    }
L_000c0994:;
    {
        wr8(cpu->r[8], cpu->r[10]);
    }
L_000c0998:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_000c099c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x50u);
    }
L_000c09a0:;
    {
        cpu->r[14] = 0x000c09a4u; fn_00098aec(cpu);
    }
L_000c09a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c09a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c09ac:;
    {
        cpu->r[14] = 0x000c09b0u; fn_000ae1a4(cpu);
    }
L_000c09b0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000c09b4:;
    {
        cpu->r[0] = 0x0000069fu;
    }
L_000c09b8:;
    {
        cpu->r[14] = 0x000c09bcu; fn_000aeb58(cpu);
    }
L_000c09bc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000c09c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c09c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000430u, 0, 0);
    }
L_000c09c8:;
    {
        cpu->r[14] = 0x000c09ccu; fn_000ae740(cpu);
    }
L_000c09cc:;
    {
        goto L_000c0788;
    }
L_000c09d0:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000c09d4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x438u);
    }
L_000c09d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c09dc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000c09e0:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000c09e4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_000c09e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x40u);
    }
L_000c09ec:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000c09f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000c0cb8;
        }
    }
L_000c09f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c09f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0a14;
        }
    }
L_000c09fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0a00:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0a04:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0a08:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0a0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0a14:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0a18:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000c0a1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c0a20:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c0a24:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0a28:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0a2c:;
    {
        wr8(cpu->r[8], cpu->r[9]);
    }
L_000c0a30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c0a34:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0a38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c0a3c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0a40:;
    {
        cpu->r[14] = 0x000c0a44u; fn_00098aec(cpu);
    }
L_000c0a44:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0a48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c0a4c:;
    {
        cpu->r[14] = 0x000c0a50u; fn_000ae1a4(cpu);
    }
L_000c0a50:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c0a54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0a58:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000c0a5c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0a60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c0a64:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0a68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c0a6c:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000c0a70:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_000c0a74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x40u);
    }
L_000c0a78:;
    {
        cpu->r[14] = 0x000c0a7cu; fn_00098aec(cpu);
    }
L_000c0a7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0a80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c0a84:;
    {
        cpu->r[14] = 0x000c0a88u; fn_000ae1a4(cpu);
    }
L_000c0a88:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c0a8c:;
    {
        cpu->r[0] = 0x0000069bu;
    }
L_000c0a90:;
    {
        goto L_000c0c64;
    }
L_000c0a94:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_000c0a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0cdc;
        }
    }
L_000c0a9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0aa8;
        }
    }
L_000c0aa0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0aa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0ac0;
        }
    }
L_000c0aa8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0aac:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0ab0:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0ab4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0ab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0ac0:;
    {
        cpu->r[0] = 0x0000069au;
    }
L_000c0ac4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c0ac8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c0acc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c0ad0:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_000c0ad4:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0ad8:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0adc:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0ae0:;
    {
        cpu->r[14] = 0x000c0ae4u; fn_000aeb58(cpu);
    }
L_000c0ae4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0006a000u, 0, 0);
    }
L_000c0ae8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0aec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000430u, 0, 0);
    }
L_000c0af0:;
    {
        cpu->r[14] = 0x000c0af4u; fn_000ae160(cpu);
    }
L_000c0af4:;
    {
        goto L_000c0788;
    }
L_000c0af8:;
    {
        cpu->r[2] = 0x000010dcu;
    }
L_000c0afc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_000c0b00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c0b04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000c0b08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c0b0c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000c0b10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14cu);
    }
L_000c0b14:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x150u);
    }
L_000c0b18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_000c0b1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000c0b20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001eu, 0, 0);
    }
L_000c0b24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000c0b28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000c0b2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c0b30:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_000c0b34:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c0b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0cf4;
        }
    }
L_000c0b3c:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000c0b40:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000c0b44:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000c0b48:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000c0b4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0bc4;
        }
    }
L_000c0b50:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000c0b54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0bc4;
        }
    }
L_000c0b58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c0b5c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c0b60:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c0b64:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_000c0b68:;
    {
        cpu->r[0] = 0x00000699u;
    }
L_000c0b6c:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0b70:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0b74:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0b78:;
    {
        goto L_000c0ae0;
    }
L_000c0b7c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000003u, 1, 1);
    }
L_000c0b80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c0cd0;
        }
    }
L_000c0b84:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0b88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0d0c;
        }
    }
L_000c0b8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0b90:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0b94:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0b98:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0b9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0ba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0ba4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000c0ba8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000c0bac:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_000c0bb0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000c0bb4:;
    {
        wr8(cpu->r[6], cpu->r[2]);
    }
L_000c0bb8:;
    {
        cpu->r[0] = 0x00000698u;
    }
L_000c0bbc:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0bc0:;
    {
        goto L_000c0ae0;
    }
L_000c0bc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0bc8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0bcc:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0bd0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0bd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0bdc:;
    {
        goto L_000c0b58;
    }
L_000c0be0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0d20;
        }
    }
L_000c0be8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0bec:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000c0bf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000c0bf4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c0bf8:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0bfc:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_000c0c00:;
    {
        wr8(cpu->r[8], cpu->r[9]);
    }
L_000c0c04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000c0c08:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0c0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_000c0c10:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0c14:;
    {
        cpu->r[14] = 0x000c0c18u; fn_00098aec(cpu);
    }
L_000c0c18:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0c1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000c0c20:;
    {
        cpu->r[14] = 0x000c0c24u; fn_000ae1a4(cpu);
    }
L_000c0c24:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000c0c28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0c2c:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000c0c30:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000c0c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000c0c38:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0c3c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000c0c40:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000c0c44:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_000c0c48:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4cu);
    }
L_000c0c4c:;
    {
        cpu->r[14] = 0x000c0c50u; fn_00098aec(cpu);
    }
L_000c0c50:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0c54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c0c58:;
    {
        cpu->r[14] = 0x000c0c5cu; fn_000ae1a4(cpu);
    }
L_000c0c5c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c0c60:;
    {
        cpu->r[0] = 0x0000069cu;
    }
L_000c0c64:;
    {
        cpu->r[14] = 0x000c0c68u; fn_000aeb58(cpu);
    }
L_000c0c68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0006a000u, 0, 0);
    }
L_000c0c6c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000c0c70:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000c0c74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000c0c78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000430u, 0, 0);
    }
L_000c0c7c:;
    {
        cpu->r[14] = 0x000c0c80u; fn_000ae740(cpu);
    }
L_000c0c80:;
    {
        goto L_000c0788;
    }
L_000c0c84:;
    {
        cpu->r[3] = 0x0000a42cu;
    }
L_000c0c88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c0c8c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000c0c90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0c94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c07ec;
        }
    }
L_000c0c98:;
    {
        cpu->r[2] = 0x0000a42du;
    }
L_000c0c9c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c0ca0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c0ca4:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0ca8:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000c0cac:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0cb0:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000c0cb4:;
    {
        goto L_000c0788;
    }
L_000c0cb8:;
    {
        cpu->r[3] = 0x0000a42cu;
    }
L_000c0cbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000c0cc0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000c0cc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c09f4;
        }
    }
L_000c0ccc:;
    {
        goto L_000c0c98;
    }
L_000c0cd0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0b8c;
        }
    }
L_000c0cd8:;
    {
        goto L_000c0ba4;
    }
L_000c0cdc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0aa8;
        }
    }
L_000c0ce4:;
    {
        wr8(cpu->r[6], cpu->r[11]);
    }
L_000c0ce8:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_000c0cec:;
    {
        wr8(cpu->r[8], cpu->r[11]);
    }
L_000c0cf0:;
    {
        goto L_000c0788;
    }
L_000c0cf4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0b3c;
        }
    }
L_000c0cfc:;
    {
        wr8(cpu->r[6], cpu->r[11]);
    }
L_000c0d00:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_000c0d04:;
    {
        wr8(cpu->r[8], cpu->r[11]);
    }
L_000c0d08:;
    {
        goto L_000c0788;
    }
L_000c0d0c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000c0d10:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_000c0d14:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_000c0d18:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000c0d1c:;
    {
        goto L_000c0788;
    }
L_000c0d20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000c0d24:;
    {
        cpu->r[14] = 0x000c0d28u; fn_000b9b58(cpu);
    }
L_000c0d28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c0d2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0be8;
        }
    }
L_000c0d30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000c0d34:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c0d38:;
    {
        cpu->r[3] = 0x000082fcu;
    }
L_000c0d3c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0d40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0778;
        }
    }
L_000c0d48:;
    {
        goto L_000c0be8;
    }
}

/* _ZN5Scene14isGameFinishedEv @ 000c0d54 (arm) */
void fn_000c0d54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c0d54:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_000c0d58:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000c0d5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000c0d60:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000c0d64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000007u, 0, 0);
    }
L_000c0d68:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_000c0d6c:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x2u;
        wr8(cpu->r[1] + - 0x2u, cpu->r[12]);
        cpu->r[1] = wb_tmp;
    }
L_000c0d70:;
    {
        cpu->r[14] = 0x000c0d74u; fn_000c057c(cpu);
    }
L_000c0d74:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x6u);
    }
L_000c0d78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000c0d7c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0d80u)) return;
    }
}

/* _ZN5Scene15MuteEngineSoundEi @ 000c0d80 (arm) */
void fn_000c0d80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c0d80:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000c0d84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000c0d88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000c0d8c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000c0d90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000c0d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000c0d98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000c0d9c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c0da0:;
    {
        return fn_0015edb0(cpu);
    }
}

/* _ZN5Scene28MP_CheckKeepAliveMultiplayerEv @ 000c0da4 (arm) */
void fn_000c0da4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000c0da4:;
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
L_000c0da8:;
    {
        cpu->r[5] = rd32(0x000c0db0u + + 0x3a4u);
    }
L_000c0dac:;
    {
        cpu->r[6] = rd32(0x000c0db4u + + 0x3a4u);
    }
L_000c0db0:;
    {
        cpu->r[10] = 0x000063e8u;
    }
L_000c0db4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000c0dbcu, cpu->r[5], 0, 0);
    }
L_000c0db8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000c0dbc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000c0dc0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c0dc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0dc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c0dcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0f30;
        }
    }
L_000c0dd4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x316u);
    }
L_000c0dd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0ddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0f30;
        }
    }
L_000c0de0:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000c0de4:;
    {
        cpu->r[4] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c0de8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000c0dec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0f28;
        }
    }
L_000c0df0:;
    {
        cpu->r[2] = 0x0000672du;
    }
L_000c0df4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c0df8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0dfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0f28;
        }
    }
L_000c0e00:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c0e04:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0e08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0e0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0f28;
        }
    }
L_000c0e10:;
    {
        cpu->r[2] = rd32(0x000c0e18u + + 0x344u);
    }
L_000c0e14:;
    {
        cpu->r[0] = 0x00004328u;
    }
L_000c0e18:;
    {
        cpu->r[11] = 0x00001c90u;
    }
L_000c0e1c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000c0e20:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c0e28u, cpu->r[2], 0, 0);
    }
L_000c0e24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000c0e28:;
    {
        cpu->r[2] = rd32(0x000c0e30u + + 0x330u);
    }
L_000c0e2c:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000c0e30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000c0e34:;
    {
        cpu->r[2] = add_flags(cpu, 0x000c0e3cu, cpu->r[2], 0, 0);
    }
L_000c0e38:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000c0e3c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000c0e40:;
    {
        goto L_000c0e60;
    }
L_000c0e44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c0e48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c0e4c:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c0e50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c0e54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0e58:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000c0e5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000c0f28;
        }
    }
L_000c0e60:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x000017c0u, 0, 0);
    }
L_000c0e64:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000001cu, 0, 0);
    }
L_000c0e68:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000c0e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000c0e70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000c0e74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0e78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0e44;
        }
    }
L_000c0e7c:;
    {
        cpu->r[14] = 0x000c0e80u; fn_0009b4d0(cpu);
    }
L_000c0e80:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c0e84:;
    {
        cpu->r[1] = 0x00000bb8u;
    }
L_000c0e88:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c0e8c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000c0e90:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x4u);
    }
L_000c0e94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_000c0e98:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000c0e9c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000c0e4c;
        }
    }
L_000c0ea0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000c0ea4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000c0ea8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0eac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0fdc;
        }
    }
L_000c0eb0:;
    {
        cpu->r[1] = 0x00005f58u;
    }
L_000c0eb4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c0eb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0ebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0ff4;
        }
    }
L_000c0ec0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000c0ec4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000c0ec8:;
    {
        cpu->r[14] = 0x000c0eccu; fn_001d0ac4(cpu);
    }
L_000c0ecc:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000c0ed0:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000c0ed4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c0ed8:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0edc:;
    {
        cpu->r[14] = 0x000c0ee0u; fn_000c0d80(cpu);
    }
L_000c0ee0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_000c0ee4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c0ee8:;
    {
        cpu->r[14] = 0x000c0eecu; fn_00096928(cpu);
    }
L_000c0eec:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000c0ef0:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c0ef4:;
    {
        cpu->r[11] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000c0ef8:;
    {
        cpu->r[14] = 0x000c0efcu; fn_0018ba6c(cpu);
    }
L_000c0efc:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000c0f00:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000c0f04:;
    {
        cpu->r[14] = 0x000c0f08u; fn_001aaf48(cpu);
    }
L_000c0f08:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000c0f0c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000c0f10:;
    {
        cpu->r[14] = 0x000c0f14u; fn_000f361c(cpu);
    }
L_000c0f14:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000c0f18:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000c0f1c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000c0f20:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000c0f24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000c0e60;
        }
    }
L_000c0f28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c0f2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000c0f30u)) return;
    }
L_000c0f30:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000c0f34:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000c0f38:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000c0f3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0f40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0fc8;
        }
    }
L_000c0f44:;
    {
        cpu->r[0] = rd32(0x000c0f4cu + + 0x218u);
    }
L_000c0f48:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c0f4c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c0f50:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c0f58u, cpu->r[0], 0, 0);
    }
L_000c0f54:;
    {
        cpu->r[14] = 0x000c0f58u; fn_001d0ac4(cpu);
    }
L_000c0f58:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c0f5c:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000c0f60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c0f64:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000c0f68:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c0f6c:;
    {
        cpu->r[14] = 0x000c0f70u; fn_000c0d80(cpu);
    }
L_000c0f70:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c0f74:;
    {
        cpu->r[14] = 0x000c0f78u; fn_00096928(cpu);
    }
L_000c0f78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000c0f7c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000c0f80:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c0f84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c0f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c10ec;
        }
    }
L_000c0f8c:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c0f90:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c0f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c10d4;
        }
    }
L_000c0f9c:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c0fa0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c0fa4:;
    {
        cpu->r[14] = 0x000c0fa8u; fn_0018ba6c(cpu);
    }
L_000c0fa8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000c0fac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c0fb0:;
    {
        cpu->r[14] = 0x000c0fb4u; fn_001aaf48(cpu);
    }
L_000c0fb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000c0fb8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c0fbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000c0fc0:;
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
L_000c0fc4:;
    {
        return fn_000f361c(cpu);
    }
L_000c0fc8:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000c0fcc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000c0fd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000c0fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0f28;
        }
    }
L_000c0fd8:;
    {
        goto L_000c0f44;
    }
L_000c0fdc:;
    {
        cpu->r[0] = 0x00005f58u;
    }
L_000c0fe0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[0]);
    }
L_000c0fe4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c0fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0e4c;
        }
    }
L_000c0fec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000c0ff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0e4c;
        }
    }
L_000c0ff4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_000c0ff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_000c0ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c1000:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c1004:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_000c1008:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1038;
        }
    }
L_000c100c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00006300u, 0, 0);
    }
L_000c1010:;
    {
        cpu->r[1] = 0x00001740u;
    }
L_000c1014:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000c1018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000c101c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000c1020:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000c1024:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000c1028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000c0e4c;
        }
    }
L_000c102c:;
    {
        cpu->r[1] = 0x00001cedu;
    }
L_000c1030:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000c1034:;
    {
        wr8(cpu->r[2] + cpu->r[1], cpu->r[0]);
    }
L_000c1038:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c103c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000c1040:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xc0u);
    }
L_000c1044:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000c1048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c0e4c;
        }
    }
L_000c104c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1050:;
    {
        cpu->r[14] = 0x000c1054u; fn_000ba368(cpu);
    }
L_000c1054:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000c1058:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c1104;
        }
    }
L_000c105c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000c1060:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000c1064:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1068:;
    {
        cpu->r[14] = 0x000c106cu; fn_001d0ac4(cpu);
    }
L_000c106c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1070:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1074:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c1078:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c107c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c1080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c1084:;
    {
        cpu->r[14] = 0x000c108cu;
    }
L_000c1088:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c108cu)) return;
    }
L_000c108c:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c1090:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c1094:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000c1098:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000c109c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000c10a0:;
    {
        cpu->r[14] = 0x000c10a8u;
    }
L_000c10a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x58u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000c10a8u)) return;
    }
L_000c10a8:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_000c10ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000c10cc;
        }
    }
L_000c10b0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c10b4:;
    {
        cpu->r[1] = 0x00005f53u;
    }
L_000c10b8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000c10bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c10c0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000c10c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000c10c8:;
    {
        cpu->r[14] = 0x000c10ccu; fn_000bd0ec(cpu);
    }
L_000c10cc:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000c10d0:;
    {
        goto L_000c0e4c;
    }
L_000c10d4:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c10d8:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c10dc:;
    {
        cpu->r[14] = 0x000c10e0u; fn_0018ba6c(cpu);
    }
L_000c10e0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000c10e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c10e8:;
    {
        goto L_000c0fb0;
    }
L_000c10ec:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c10f0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c10f4:;
    {
        cpu->r[14] = 0x000c10f8u; fn_0018ba6c(cpu);
    }
L_000c10f8:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_000c10fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1100:;
    {
        goto L_000c0fb0;
    }
L_000c1104:;
    {
        cpu->r[0] = rd32(0x000c110cu + + 0x5cu);
    }
L_000c1108:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000c110c:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000c1110:;
    {
        cpu->r[0] = add_flags(cpu, 0x000c1118u, cpu->r[0], 0, 0);
    }
L_000c1114:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000c1118:;
    {
        cpu->r[14] = 0x000c111cu; fn_001d0ac4(cpu);
    }
L_000c111c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000c1120:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000c1124:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000c1128:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000c112c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000c1130:;
    {
        cpu->r[14] = 0x000c1134u; fn_000c0d80(cpu);
    }
L_000c1134:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1138:;
    {
        cpu->r[14] = 0x000c113cu; fn_00096928(cpu);
    }
L_000c113c:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_000c1140:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000c1144:;
    {
        cpu->r[14] = 0x000c1148u; fn_0018ba6c(cpu);
    }
L_000c1148:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000c114c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000c1150:;
    {
        goto L_000c0fb0;
    }
}
