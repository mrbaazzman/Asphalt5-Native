#include "functions.h"

/* _ZN11CGameCamera7SetViewEi @ 00149b48 (arm) */
void fn_00149b48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149b48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00149b4c:;
    {
        cpu->r[4] = rd32(0x00149b54u + + 0x104u);
    }
L_00149b50:;
    {
        cpu->r[6] = rd32(0x00149b58u + + 0x104u);
    }
L_00149b54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00149b58:;
    {
        cpu->r[4] = add_flags(cpu, 0x00149b60u, cpu->r[4], 0, 0);
    }
L_00149b5c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00149b60:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00149b64:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00149b68:;
    {
        cpu->r[14] = 0x00149b6cu; fn_00096b88(cpu);
    }
L_00149b6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149b70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00149b80;
        }
    }
L_00149b74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x15cu);
    }
L_00149b78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00149b7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149c0c;
        }
    }
L_00149b80:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00149b84:;
    {
        wr32(cpu->r[5] + + 0x15cu, cpu->r[7]);
    }
L_00149b88:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00149b8c:;
    {
        cpu->r[14] = 0x00149b90u; fn_00096b6c(cpu);
    }
L_00149b90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149b94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00149bec;
        }
    }
L_00149b98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x15cu);
    }
L_00149b9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00149ba0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149ba4u)) return;
        }
    }
L_00149ba4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00149ba8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149bacu)) return;
        }
    }
L_00149bac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00149bb0:;
    {
        wr32(cpu->r[5] + + 0x164u, cpu->r[3]);
    }
L_00149bb4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00149bb8:;
    {
        cpu->r[14] = 0x00149bbcu; fn_00096b88(cpu);
    }
L_00149bbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149bc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149bc4u)) return;
        }
    }
L_00149bc4:;
    {
        cpu->r[3] = rd32(0x00149bccu + + 0x94u);
    }
L_00149bc8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00149bcc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00149bd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00149bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149c30;
        }
    }
L_00149bd8:;
    {
        cpu->r[6] = rd32(0x00149be0u + + 0x84u);
    }
L_00149bdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00149be0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00149be4:;
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
L_00149be8:;
    {
        return fn_00093f70(cpu);
    }
L_00149bec:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00149bf0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00149bf4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00149bf8:;
    {
        cpu->r[14] = 0x00149bfcu; fn_00099454(cpu);
    }
L_00149bfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x15cu);
    }
L_00149c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00149c04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00149c08u)) return;
        }
    }
L_00149c08:;
    {
        goto L_00149ba4;
    }
L_00149c0c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_00149c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149b80;
        }
    }
L_00149c14:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00149c18:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00149c1c:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00149c20:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00149c24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149c28:;
    {
        cpu->r[14] = 0x00149c2cu; fn_000ba68c(cpu);
    }
L_00149c2c:;
    {
        goto L_00149b80;
    }
L_00149c30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00149c34:;
    {
        cpu->r[14] = 0x00149c38u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00149c38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149bd8;
        }
    }
L_00149c40:;
    {
        cpu->r[6] = rd32(0x00149c48u + + 0x1cu);
    }
L_00149c44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00149c48:;
    {
        cpu->r[14] = 0x00149c4cu; fn_00094228(cpu);
    }
L_00149c4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00149c50:;
    {
        cpu->r[14] = 0x00149c54u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00149c54:;
    {
        goto L_00149bdc;
    }
}

/* _ZN11CGameCameraD1Ev @ 00149c68 (arm) */
void fn_00149c68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149c68:;
    {
        cpu->r[3] = rd32(0x00149c70u + + 0x24u);
    }
L_00149c6c:;
    {
        cpu->r[2] = rd32(0x00149c74u + + 0x24u);
    }
L_00149c70:;
    {
        cpu->r[3] = add_flags(cpu, 0x00149c78u, cpu->r[3], 0, 0);
    }
L_00149c74:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00149c78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00149c7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00149c80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00149c84:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00149c88:;
    {
        cpu->r[14] = 0x00149c8cu; fn_000b6198(cpu);
    }
L_00149c8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149c90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00149c94u)) return;
    }
}

/* _ZN11CGameCameraD0Ev @ 00149c9c (arm) */
void fn_00149c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149c9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00149ca0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00149ca4:;
    {
        cpu->r[14] = 0x00149ca8u; fn_00149c68(cpu);
    }
L_00149ca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149cac:;
    {
        cpu->r[14] = 0x00149cb0u; fn_0018ba20(cpu);
    }
L_00149cb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149cb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00149cb8u)) return;
    }
}

/* _ZN11CGameCameraD2Ev @ 00149cb8 (arm) */
void fn_00149cb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149cb8:;
    {
        cpu->r[3] = rd32(0x00149cc0u + + 0x24u);
    }
L_00149cbc:;
    {
        cpu->r[2] = rd32(0x00149cc4u + + 0x24u);
    }
L_00149cc0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00149cc8u, cpu->r[3], 0, 0);
    }
L_00149cc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00149cc8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00149ccc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00149cd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00149cd4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00149cd8:;
    {
        cpu->r[14] = 0x00149cdcu; fn_000b6198(cpu);
    }
L_00149cdc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149ce0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00149ce4u)) return;
    }
}

/* _ZN11CGameCamera21UpdateCamera_InteriorEbP8CCarBasePK11RoadSection @ 00149cec (arm) */
void fn_00149cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00149cec:;
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
L_00149cf0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00149cf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_00149cf8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00149cfc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00149d00:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00149d04:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00149d08:;
    {
        cpu->r[14] = 0x00149d0cu; fn_00149824(cpu);
    }
L_00149d0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149d10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a140;
        }
    }
L_00149d14:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x160u);
    }
L_00149d18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x15cu);
    }
L_00149d1c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00149d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149d38;
        }
    }
L_00149d24:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0xb4u);
    }
L_00149d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_00149d2c:;
    {
        wr32(cpu->r[5] + + 0x1c4u, cpu->r[3]);
    }
L_00149d30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_00149d34:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0x1c4u, cpu->r[3]);
        }
    }
L_00149d38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_00149d3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x0000010cu, 0, 0);
    }
L_00149d40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_00149d44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00149d48:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00149d4c:;
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
L_00149d50:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00149d54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
        }
    }
L_00149d58:;
    {
        if (cond_test(cpu, 1)) {
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
L_00149d5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_00149d60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00149d64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00149d68:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149d6c:;
    {
        cpu->r[14] = 0x00149d74u;
    }
L_00149d70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149d74u)) return;
    }
L_00149d74:;
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
L_00149d78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000118u, 0, 0);
    }
L_00149d7c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149d80:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00149d84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149d88:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x118u);
    }
L_00149d8c:;
    {
        cpu->r[14] = 0x00149d94u;
    }
L_00149d90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149d94u)) return;
    }
L_00149d94:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149de4;
        }
    }
L_00149d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149da0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149da4:;
    {
        cpu->r[14] = 0x00149dacu;
    }
L_00149da8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149dacu)) return;
    }
L_00149dac:;
    {
        cpu->r[2] = 0x0000166cu;
    }
L_00149db0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149db4:;
    {
        cpu->r[10] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00149db8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149dbc:;
    {
        cpu->r[14] = 0x00149dc4u;
    }
L_00149dc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149dc4u)) return;
    }
L_00149dc4:;
    {
        cpu->r[3] = 0x00001724u;
    }
L_00149dc8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149dcc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[10] = v;
    }
L_00149dd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_00149dd4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00149dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_00149ddc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_00149de0:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_00149de4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00149de8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149dec:;
    {
        wr32(cpu->r[5] + + 0x118u, cpu->r[8]);
    }
L_00149df0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149df4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x120u);
    }
L_00149df8:;
    {
        cpu->r[14] = 0x00149e00u;
    }
L_00149dfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e00u)) return;
    }
L_00149e00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149e04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149e24;
        }
    }
L_00149e08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149e10:;
    {
        cpu->r[14] = 0x00149e18u;
    }
L_00149e14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e18u)) return;
    }
L_00149e18:;
    {
        cpu->r[3] = 0x000016f4u;
    }
L_00149e1c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149e20:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00149e24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00149e28:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e2c:;
    {
        wr32(cpu->r[5] + + 0x120u, cpu->r[8]);
    }
L_00149e30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149e34:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x11cu);
    }
L_00149e38:;
    {
        cpu->r[14] = 0x00149e40u;
    }
L_00149e3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e40u)) return;
    }
L_00149e40:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149e44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149e74;
        }
    }
L_00149e48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149e50:;
    {
        cpu->r[14] = 0x00149e58u;
    }
L_00149e54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e58u)) return;
    }
L_00149e58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e5c:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x608u);
    }
L_00149e60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149e64:;
    {
        cpu->r[14] = 0x00149e6cu;
    }
L_00149e68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e6cu)) return;
    }
L_00149e6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x62cu);
    }
L_00149e70:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_00149e74:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00149e78:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e7c:;
    {
        wr32(cpu->r[5] + + 0x11cu, cpu->r[8]);
    }
L_00149e80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149e84:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0xb4u);
    }
L_00149e88:;
    {
        cpu->r[14] = 0x00149e90u;
    }
L_00149e8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149e90u)) return;
    }
L_00149e90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149ebc;
        }
    }
L_00149e98:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149e9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149ea0:;
    {
        cpu->r[14] = 0x00149ea8u;
    }
L_00149ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149ea8u)) return;
    }
L_00149ea8:;
    {
        cpu->r[8] = 0x00001788u;
    }
L_00149eac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00149eb0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00149eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a15c;
        }
    }
L_00149eb8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x84u);
    }
L_00149ebc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000400u, 1, 1);
    }
L_00149ec0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149ec4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149ec8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 0);
        }
    }
L_00149ecc:;
    {
        cpu->r[14] = 0x00149ed4u;
    }
L_00149ed0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149ed4u)) return;
    }
L_00149ed4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149ed8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a154;
        }
    }
L_00149edc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149ee0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149ee4:;
    {
        cpu->r[14] = 0x00149eecu;
    }
L_00149ee8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149eecu)) return;
    }
L_00149eec:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00149ef0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149ef4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_00149ef8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_00149efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a154;
        }
    }
L_00149f00:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149f04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149f08:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2]; cpu->r[7] = v;
    }
L_00149f0c:;
    {
        cpu->r[14] = 0x00149f14u;
    }
L_00149f10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149f14u)) return;
    }
L_00149f14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149f18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a14c;
        }
    }
L_00149f1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149f20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149f24:;
    {
        cpu->r[14] = 0x00149f2cu;
    }
L_00149f28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149f2cu)) return;
    }
L_00149f2c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00149f30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00149f34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00149f38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_00149f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a14c;
        }
    }
L_00149f40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1c4u);
    }
L_00149f44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149f48:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149f4c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 4u, &shc), cpu->r[2], 1, 0);
    }
L_00149f50:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[2]; cpu->r[7] = v;
    }
L_00149f54:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00149f58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x0000000fu, 0, 0);
    }
L_00149f5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_00149f60:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 4u, &shc); cpu->r[7] = v;
    }
L_00149f64:;
    {
        wr32(cpu->r[5] + + 0x118u, cpu->r[7]);
    }
L_00149f68:;
    {
        wr32(cpu->r[5] + + 0x1c4u, cpu->r[7]);
    }
L_00149f6c:;
    {
        cpu->r[14] = 0x00149f74u;
    }
L_00149f70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149f74u)) return;
    }
L_00149f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00149f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149f9c;
        }
    }
L_00149f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00149f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00149f84:;
    {
        cpu->r[14] = 0x00149f8cu;
    }
L_00149f88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00149f8cu)) return;
    }
L_00149f8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x354u);
    }
L_00149f90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00149f94:;
    {
        vfp_sync_flags(cpu);
    }
L_00149f98:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014a1dc;
        }
    }
L_00149f9c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00149fa0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00149fa8u + + 0x2e0u);
    }
L_00149fa4:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00149fa8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00149fb0u + + 0x2dcu);
    }
L_00149fac:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00149fb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x1f8u);
    }
L_00149fb4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x11cu);
    }
L_00149fb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00149fbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00149fc0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00149fc4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00149fc8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00149fcc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00149fd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00149fd4:;
    {
        wr32(cpu->r[5] + + 0x11cu, cpu->r[1]);
    }
L_00149fd8:;
    {
        cpu->r[14] = 0x00149fdcu; fn_001845ac(cpu);
    }
L_00149fdc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00149fe0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x120u);
    }
L_00149fe4:;
    {
        cpu->r[14] = 0x00149fe8u; fn_00184768(cpu);
    }
L_00149fe8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00149fec:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x118u);
    }
L_00149ff0:;
    {
        cpu->r[14] = 0x00149ff4u; fn_001846f0(cpu);
    }
L_00149ff4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00149ff8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00149ffc:;
    {
        cpu->r[3] = 0x00002710u;
    }
L_0014a000:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014a004:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0014a008:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0014a00c:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 12); cpu->r[1] = (uint32_t)(v >> 12); }
    }
L_0014a010:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0014a014:;
    {
        { int32_t v = (int32_t)(cpu->r[2] << 12); cpu->r[2] = (uint32_t)(v >> 12); }
    }
L_0014a018:;
    {
        { int32_t v = (int32_t)(cpu->r[0] << 12); cpu->r[0] = (uint32_t)(v >> 12); }
    }
L_0014a01c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x41cu);
    }
L_0014a020:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[9] = v;
    }
L_0014a024:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x420u);
    }
L_0014a028:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[14] = v;
    }
L_0014a02c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x424u);
    }
L_0014a030:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0014a034:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014a038:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0014a03c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
    }
L_0014a040:;
    {
        wr32(cpu->r[5] + + 0x124u, cpu->r[7]);
    }
L_0014a044:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0014a048:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
    }
L_0014a04c:;
    {
        wr32(cpu->r[5] + + 0x12cu, cpu->r[11]);
    }
L_0014a050:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0014a054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0014a058:;
    {
        wr32(cpu->r[5] + + 0x128u, cpu->r[12]);
    }
L_0014a05c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a084;
        }
    }
L_0014a060:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0014a064:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0014a068:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0014a06c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_0014a070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0014a074:;
    {
        wr32(cpu->r[5] + + 0x124u, cpu->r[9]);
    }
L_0014a078:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[12], 0, 0);
    }
L_0014a07c:;
    {
        wr32(cpu->r[5] + + 0x128u, cpu->r[3]);
    }
L_0014a080:;
    {
        wr32(cpu->r[5] + + 0x12cu, cpu->r[14]);
    }
L_0014a084:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_0014a088:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x41cu);
    }
L_0014a08c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8]; cpu->r[1] = v;
    }
L_0014a090:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x420u);
    }
L_0014a094:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[8] = v;
    }
L_0014a098:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014a09c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x424u);
    }
L_0014a0a0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0014a0a4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0014a0a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_0014a0ac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0014a0b0:;
    {
        wr32(cpu->r[5] + + 0x114u, cpu->r[2]);
    }
L_0014a0b4:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0014a0b8:;
    {
        wr32(cpu->r[5] + + 0x10cu, cpu->r[12]);
    }
L_0014a0bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_0014a0c0:;
    {
        wr32(cpu->r[5] + + 0x110u, cpu->r[2]);
    }
L_0014a0c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a0ec;
        }
    }
L_0014a0c8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0014a0cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0014a0d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0014a0d4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0014a0d8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_0014a0dc:;
    {
        wr32(cpu->r[5] + + 0x10cu, cpu->r[1]);
    }
L_0014a0e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0014a0e4:;
    {
        wr32(cpu->r[5] + + 0x110u, cpu->r[2]);
    }
L_0014a0e8:;
    {
        wr32(cpu->r[5] + + 0x114u, cpu->r[0]);
    }
L_0014a0ec:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a0f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a0f4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0014a0f8:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014a0fc:;
    {
        cpu->r[14] = 0x0014a104u;
    }
L_0014a100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a104u)) return;
    }
L_0014a104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a270;
        }
    }
L_0014a10c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a114:;
    {
        cpu->r[14] = 0x0014a11cu;
    }
L_0014a118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a11cu)) return;
    }
L_0014a11c:;
    {
        cpu->r[3] = 0x000016f8u;
    }
L_0014a120:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a124:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0014a128:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014a12c:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0014a130:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0014a134:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014a138:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_0014a13c:;
    {
        wr32(cpu->r[5] + + 0x110u, cpu->r[10]);
    }
L_0014a140:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0014a144:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014a148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a14cu)) return;
    }
L_0014a14c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014a150:;
    {
        goto L_00149f40;
    }
L_0014a154:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0014a158:;
    {
        goto L_00149f00;
    }
L_0014a15c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a164:;
    {
        cpu->r[14] = 0x0014a16cu;
    }
L_0014a168:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a16cu)) return;
    }
L_0014a16c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_0014a170:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014a174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a188;
        }
    }
L_0014a178:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0014a17c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014a180:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a184:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00149eb8;
        }
    }
L_0014a188:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a18c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a190:;
    {
        cpu->r[14] = 0x0014a198u;
    }
L_0014a194:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a198u)) return;
    }
L_0014a198:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014a19c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a1a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_0014a1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149ebc;
        }
    }
L_0014a1a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a1ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a1b0:;
    {
        cpu->r[14] = 0x0014a1b8u;
    }
L_0014a1b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a1b8u)) return;
    }
L_0014a1b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a1bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00149ebc;
        }
    }
L_0014a1c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a1c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a1c8:;
    {
        cpu->r[14] = 0x0014a1d0u;
    }
L_0014a1cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a1d0u)) return;
    }
L_0014a1d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000031u, 1, 1);
    }
L_0014a1d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x84u);
        }
    }
L_0014a1d8:;
    {
        goto L_00149ebc;
    }
L_0014a1dc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014a1e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a1e4:;
    {
        cpu->r[14] = 0x0014a1ecu;
    }
L_0014a1e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a1ecu)) return;
    }
L_0014a1ec:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014a1f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a1f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014a1f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00149f9c;
        }
    }
L_0014a1fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2b0u);
    }
L_0014a200:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0014a204:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0014a208:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x364u);
    }
L_0014a20c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0014a210:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a218u + + 0x78u);
    }
L_0014a214:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[1] = v;
    }
L_0014a218:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0014a21c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0014a220:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0014a224:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_0014a228:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0014a22c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014a230:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_0014a234:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0014a238:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a23c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0014a240:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x0000003cu;
        }
    }
L_0014a244:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = 0x00000096u;
        }
    }
L_0014a248:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00149fa8;
        }
    }
L_0014a24c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a254u + + 0x40u);
    }
L_0014a250:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_0014a254:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a25cu + + 0x3cu);
    }
L_0014a258:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0014a25c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_0014a260:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0014a264:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014a268:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014a26c:;
    {
        goto L_00149fa8;
    }
L_0014a270:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_0014a274:;
    {
        cpu->r[14] = 0x0014a278u; fn_00093f34(cpu);
    }
L_0014a278:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014a280u + + 0x8u);
    }
L_0014a27c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014a280:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0014a284:;
    {
        goto L_0014a12c;
    }
}

/* _ZN11CGameCamera17UpdateCamera_CoolEbP8CCarBasePK11RoadSectionS4_S4_iii @ 0014a29c (arm) */
void fn_0014a29c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014a29c:;
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
L_0014a2a0:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_0014a2a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_0014a2a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014a2ac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014a2b0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0014a2b4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014a2b8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xa8u);
    }
L_0014a2bc:;
    {
        cpu->r[14] = 0x0014a2c0u; fn_00149824(cpu);
    }
L_0014a2c0:;
    {
        cpu->r[7] = rd32(0x0014a2c8u + + 0x3f4u);
    }
L_0014a2c4:;
    {
        cpu->r[7] = add_flags(cpu, 0x0014a2ccu, cpu->r[7], 0, 0);
    }
L_0014a2c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a2cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a9f8;
        }
    }
L_0014a2d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x160u);
    }
L_0014a2d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014a2d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014a2dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a318;
        }
    }
L_0014a2e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_0014a2e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_0014a2e8:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[10] + + 0xb4u);
    }
L_0014a2ec:;
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
L_0014a2f0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000400u, 1, 1);
    }
L_0014a2f4:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[12]);
    }
L_0014a2f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000800u, 1, 0);
        }
    }
L_0014a2fc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[12]);
        }
    }
L_0014a300:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0014a304:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0014a308:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000600u, 1, 0);
    }
L_0014a30c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0014a310:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[2]);
    }
L_0014a314:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014a318:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_0014a31c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa0c;
        }
    }
L_0014a320:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_0014a324:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 18) = *(float*)G(0x0014a32cu + + 0x380u);
        }
    }
L_0014a328:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 18);
        }
    }
L_0014a32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a360;
        }
    }
L_0014a330:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a334:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a338:;
    {
        cpu->r[14] = 0x0014a340u;
    }
L_0014a33c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a340u)) return;
    }
L_0014a340:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a344:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5f0u);
    }
L_0014a348:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0014a34c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a350:;
    {
        cpu->r[14] = 0x0014a358u;
    }
L_0014a354:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a358u)) return;
    }
L_0014a358:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5f4u);
    }
L_0014a35c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0014a360:;
    {
        cpu->r[9] = rd32(0x0014a368u + + 0x358u);
    }
L_0014a364:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0014a368:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0014a36c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x238u);
    }
L_0014a370:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014a374:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_0014a378:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0014a37c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0014a380:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a384:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0014a388:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0014a38c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0014a390:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0014a394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0014a398:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014a39c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_0014a3a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014a3a4:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a3a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0014a3ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0014a3b0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x23du, cpu->r[3]);
        }
    }
L_0014a3b4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x23cu, cpu->r[3]);
        }
    }
L_0014a3b8:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a3bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014a408;
        }
    }
L_0014a3c0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0014a3c4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0014a3c8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0014a3cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a3d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0014a3d4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0014a3d8:;
    {
        wr8(cpu->r[4] + + 0x23cu, cpu->r[3]);
    }
L_0014a3dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014a3e0:;
    {
        wr8(cpu->r[4] + + 0x23du, cpu->r[3]);
    }
L_0014a3e4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0014a3e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x238u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014a3ec:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014a3f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0014a3f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0014a3f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0014a3fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0014a400:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014a404:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_0014a408:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0014a40c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a410:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014aa64;
        }
    }
L_0014a414:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x23cu);
    }
L_0014a418:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x23du);
    }
L_0014a41c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014a420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ae70;
        }
    }
L_0014a424:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014a428:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000031u;
        }
    }
L_0014a42c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014aa7c;
        }
    }
L_0014a430:;
    {
        cpu->r[14] = 0x0014a434u; fn_00093f34(cpu);
    }
L_0014a434:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[9]);
    }
L_0014a438:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a440u + + 0x270u);
    }
L_0014a43c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0014a440:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014a444:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x418u);
    }
L_0014a448:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0014a44c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0014a450:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0014a454:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014a458:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0014a45c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0014a460:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0014a464:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0014a468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0014a46c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0014a470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0014a474:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014a478:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_0014a47c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014a480:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0014a484:;
    {
        vfp_vdiv(cpu, 17, 14, 15);
    }
L_0014a488:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,17));
    }
L_0014a48c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a490:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0014aa84;
        }
    }
L_0014a494:;
    {
        cpu->r[0] = 0x0000002fu;
    }
L_0014a498:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0014a49c:;
    {
        cpu->r[14] = 0x0014a4a0u; fn_00093f34(cpu);
    }
L_0014a4a0:;
    {
        vfp_vdiv(cpu, 15, 16, 17);
    }
L_0014a4a4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014a4a8:;
    {
        vfp_vmla(cpu, 18, 14, 15);
    }
L_0014a4ac:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0014a4b0:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_0014a4b4:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0014a4b8:;
    {
        cpu->r[14] = 0x0014a4bcu; fn_00093f34(cpu);
    }
L_0014a4bc:;
    {
        cpu->r[3] = rd32(0x0014a4c4u + + 0x200u);
    }
L_0014a4c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a4c8u + + 0x1ecu);
    }
L_0014a4c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014a4ccu + + 0x1ecu);
    }
L_0014a4c8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0014a4cc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0014a4d0:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_0014a4d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0014a4d8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_0014a4dc:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0014a4e0:;
    {
        vfp_vdiv(cpu, 17, 13, 15);
    }
L_0014a4e4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014a4e8:;
    {
        cpu->r[0] = 0x0000002du;
    }
L_0014a4ec:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0014a4f0:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014a4f4:;
    {
        cpu->r[14] = 0x0014a4f8u; fn_00093f34(cpu);
    }
L_0014a4f8:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[0];
    }
L_0014a4fc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014a500:;
    {
        cpu->r[14] = 0x0014a504u; imp_tanf(cpu); /* tanf */
    }
L_0014a504:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[0];
    }
L_0014a508:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0014a50c:;
    {
        cpu->r[14] = 0x0014a510u; imp_tanf(cpu); /* tanf */
    }
L_0014a510:;
    {
        vfp_vmul(cpu, 15, 18, 19);
    }
L_0014a514:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[10] + + 0xb4u);
    }
L_0014a518:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0014a51c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000400u, 1, 1);
    }
L_0014a520:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a524:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000800u, 1, 0);
        }
    }
L_0014a528:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_0014a52c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014a530:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0014a534:;
    {
        vfp_vdiv(cpu, 14, 17, 16);
    }
L_0014a538:;
    {
        vfp_vmla(cpu, 15, 14, 20);
    }
L_0014a53c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014a540:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014a544:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0014a548:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a54c:;
    {
        cpu->r[14] = 0x0014a554u;
    }
L_0014a550:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a554u)) return;
    }
L_0014a554:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa04;
        }
    }
L_0014a55c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a564:;
    {
        cpu->r[14] = 0x0014a56cu;
    }
L_0014a568:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a56cu)) return;
    }
L_0014a56c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014a570:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a574:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_0014a578:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = (~0x00000000u);
        }
    }
L_0014a57c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa04;
        }
    }
L_0014a580:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a584:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a588:;
    {
        cpu->r[14] = 0x0014a590u;
    }
L_0014a58c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a590u)) return;
    }
L_0014a590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a5b8;
        }
    }
L_0014a598:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a59c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a5a0:;
    {
        cpu->r[14] = 0x0014a5a8u;
    }
L_0014a5a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a5a8u)) return;
    }
L_0014a5a8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014a5ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a5b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0014a5b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014ac88;
        }
    }
L_0014a5b8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a5bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a5c0:;
    {
        cpu->r[14] = 0x0014a5c8u;
    }
L_0014a5c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a5c8u)) return;
    }
L_0014a5c8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9]; cpu->r[7] = v;
    }
L_0014a5cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a5d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a5e4;
        }
    }
L_0014a5d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_0014a5d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014a5dc:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a5e0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014adbc;
        }
    }
L_0014a5e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014a5e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1c4u);
        }
    }
L_0014a5ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a610;
        }
    }
L_0014a5f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1c4u);
    }
L_0014a5f4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 4u, &shc), cpu->r[3], 1, 0);
    }
L_0014a5f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0014a5fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000000fu, 0, 0);
    }
L_0014a600:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0014a604:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_0014a608:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 4u, &shc); cpu->r[7] = v;
    }
L_0014a60c:;
    {
        wr32(cpu->r[4] + + 0x1c4u, cpu->r[7]);
    }
L_0014a610:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0014a614:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a618:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a61c:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[2]);
    }
L_0014a620:;
    {
        cpu->r[14] = 0x0014a628u;
    }
L_0014a624:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a628u)) return;
    }
L_0014a628:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a648;
        }
    }
L_0014a630:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a634:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a638:;
    {
        cpu->r[14] = 0x0014a640u;
    }
L_0014a63c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a640u)) return;
    }
L_0014a640:;
    {
        cpu->r[3] = 0x00001708u;
    }
L_0014a644:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a648:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_0014a64c:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[10]);
    }
L_0014a650:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x84u);
    }
L_0014a654:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a658:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a65c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0014a660:;
    {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
    }
L_0014a664:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x88u);
    }
L_0014a668:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0014a66c:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[8]);
    }
L_0014a670:;
    {
        cpu->r[14] = 0x0014a678u;
    }
L_0014a674:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a678u)) return;
    }
L_0014a678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a67c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa4c;
        }
    }
L_0014a680:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a688:;
    {
        cpu->r[14] = 0x0014a690u;
    }
L_0014a68c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a690u)) return;
    }
L_0014a690:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x620u);
    }
L_0014a694:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014a698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa4c;
        }
    }
L_0014a69c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014a6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0014a6a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014aaa0;
        }
    }
L_0014a6a8:;
    {
        goto L_0014a6d0;
    }
L_0014a6d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d4u);
    }
L_0014a6d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 1);
    }
L_0014a6d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0014a6dc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[2]);
        }
    }
L_0014a6e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014a6f0;
        }
    }
L_0014a6e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014a6e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
        }
    }
L_0014a6ec:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[2]);
        }
    }
L_0014a6f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d0u);
    }
L_0014a6f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 1);
    }
L_0014a6f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0014a6fc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
        }
    }
L_0014a700:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014a710;
        }
    }
L_0014a704:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014a708:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
        }
    }
L_0014a70c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[2]);
        }
    }
L_0014a710:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1c8u);
    }
L_0014a714:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 1);
    }
L_0014a718:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0014a71c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[2]);
        }
    }
L_0014a720:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014a730;
        }
    }
L_0014a724:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014a728:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
        }
    }
L_0014a72c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[2]);
        }
    }
L_0014a730:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1ccu);
    }
L_0014a734:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 1);
    }
L_0014a738:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0014a73c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[2]);
        }
    }
L_0014a740:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014a750;
        }
    }
L_0014a744:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014a748:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
        }
    }
L_0014a74c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[2]);
        }
    }
L_0014a750:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1f0u);
    }
L_0014a754:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014a758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014acac;
        }
    }
L_0014a75c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_0014a760:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1c8u);
    }
L_0014a764:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001ccu, 0, 0);
    }
L_0014a768:;
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
L_0014a76c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0014a770:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[12]);
    }
L_0014a774:;
    {
        wr32(cpu->r[4] + + 0x1e0u, cpu->r[0]);
    }
L_0014a778:;
    {
        wr32(cpu->r[4] + + 0x1e4u, cpu->r[1]);
    }
L_0014a77c:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[2]);
    }
L_0014a780:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[3]);
    }
L_0014a784:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a788:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a78c:;
    {
        cpu->r[14] = 0x0014a794u;
    }
L_0014a790:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a794u)) return;
    }
L_0014a794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a7d8;
        }
    }
L_0014a79c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a7a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a7a4:;
    {
        cpu->r[14] = 0x0014a7acu;
    }
L_0014a7a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a7acu)) return;
    }
L_0014a7ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x620u);
    }
L_0014a7b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014a7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a7d8;
        }
    }
L_0014a7b8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a7bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a7c0:;
    {
        cpu->r[14] = 0x0014a7c8u;
    }
L_0014a7c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a7c8u)) return;
    }
L_0014a7c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x620u);
    }
L_0014a7cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014a7d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0014a7d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0014a7d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x180u);
    }
L_0014a7dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014a7e4u + - 0x118u);
    }
L_0014a7e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0014a7e4:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a7e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa54;
        }
    }
L_0014a7ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x184u);
    }
L_0014a7f0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014a7f4:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a7f8:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a800u + - 0x138u);
        }
    }
L_0014a7fc:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_0014a800:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014a804:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014a808:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x194u);
    }
L_0014a80c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a814u + - 0x148u);
    }
L_0014a810:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0014a814:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0014a81c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a838;
        }
    }
L_0014a820:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014a824:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a828:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0014a830u + - 0x168u);
        }
    }
L_0014a82c:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_0014a830:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014a834:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014a838:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1ccu);
    }
L_0014a83c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014a840:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1c8u);
    }
L_0014a844:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a848:;
    {
        wr32(cpu->r[4] + + 0x1c0u, cpu->r[3]);
    }
L_0014a84c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0014a850:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_0014a854:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0014a858:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[7]);
    }
L_0014a85c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0014a860:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[3]);
    }
L_0014a864:;
    {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[3]);
    }
L_0014a868:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a86c:;
    {
        cpu->r[14] = 0x0014a874u;
    }
L_0014a870:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a874u)) return;
    }
L_0014a874:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a8b0;
        }
    }
L_0014a87c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a880:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a884:;
    {
        cpu->r[14] = 0x0014a88cu;
    }
L_0014a888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a88cu)) return;
    }
L_0014a88c:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0014a890:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0014a894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014a898:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a8b0;
        }
    }
L_0014a89c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014a8a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014a8a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0014a8a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000001b8u, 0, 0);
    }
L_0014a8ac:;
    {
        cpu->r[14] = 0x0014a8b0u; fn_00148d48(cpu);
    }
L_0014a8b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014a8b8u + - 0x1ecu);
    }
L_0014a8b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x180u);
    }
L_0014a8b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0014a8bc:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a8c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a8d4;
        }
    }
L_0014a8c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x190u);
    }
L_0014a8c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0014a8cc:;
    {
        vfp_sync_flags(cpu);
    }
L_0014a8d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aae0;
        }
    }
L_0014a8d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0014a8d8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014a8dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0014a8e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014a8e4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x41cu);
    }
L_0014a8e8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x420u);
    }
L_0014a8ec:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x1a4u);
    }
L_0014a8f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3d8u);
        }
    }
L_0014a8f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d4u);
        }
    }
L_0014a8f8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x424u);
    }
L_0014a8fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[5] + + 0x3dcu);
        }
    }
L_0014a900:;
    {
        cpu->r[14] = 0x0014a904u; fn_001845ac(cpu);
    }
L_0014a904:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014a908:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0014a90c:;
    {
        cpu->r[14] = 0x0014a910u; fn_00184768(cpu);
    }
L_0014a910:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014a914:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0014a918:;
    {
        cpu->r[14] = 0x0014a91cu; fn_001846f0(cpu);
    }
L_0014a91c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b8u);
    }
L_0014a920:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014a924:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_0014a928:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1bcu);
    }
L_0014a92c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014a930:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014a934:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[14] = v;
    }
L_0014a938:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_0014a93c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12] + cpu->r[14]; cpu->r[14] = v;
    }
L_0014a940:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014a944:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_0014a948:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1c0u);
    }
L_0014a94c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3]; cpu->r[9] = v;
    }
L_0014a950:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0014a954:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12] + cpu->r[10]; cpu->r[10] = v;
    }
L_0014a958:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_0014a95c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12] + cpu->r[9]; cpu->r[12] = v;
    }
L_0014a960:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0014a964:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[14]; cpu->r[14] = v;
    }
L_0014a968:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[10]; cpu->r[10] = v;
    }
L_0014a96c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_0014a970:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_0014a974:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[14]);
    }
L_0014a978:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_0014a97c:;
    {
        wr32(cpu->r[4] + + 0x1c0u, cpu->r[10]);
    }
L_0014a980:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0014a984:;
    {
        wr32(cpu->r[4] + + 0x1bcu, cpu->r[12]);
    }
L_0014a988:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_0014a98c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0014a990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ab64;
        }
    }
L_0014a994:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[8]);
    }
L_0014a998:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[7]);
    }
L_0014a99c:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[6]);
    }
L_0014a9a0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a9a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a9a8:;
    {
        cpu->r[14] = 0x0014a9b0u;
    }
L_0014a9ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a9b0u)) return;
    }
L_0014a9b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014a9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014aa40;
        }
    }
L_0014a9b8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014a9bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014a9c0:;
    {
        cpu->r[14] = 0x0014a9c8u;
    }
L_0014a9c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014a9c8u)) return;
    }
L_0014a9c8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014a9cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014a9d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0014a9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014aa40;
        }
    }
L_0014a9d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1f0u);
    }
L_0014a9dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014a9e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014a9e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ab50;
        }
    }
L_0014a9e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x110u);
    }
L_0014a9ec:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014a9f0:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[2]);
    }
L_0014a9f4:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[1]);
    }
L_0014a9f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0014a9fc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_0014aa00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aa04u)) return;
    }
L_0014aa04:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0014aa08:;
    {
        goto L_0014a580;
    }
L_0014aa0c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014aa10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014aa14:;
    {
        cpu->r[14] = 0x0014aa1cu;
    }
L_0014aa18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aa1cu)) return;
    }
L_0014aa1c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014aa20:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5e8u);
    }
L_0014aa24:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0014aa28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014aa2c:;
    {
        cpu->r[14] = 0x0014aa34u;
    }
L_0014aa30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aa34u)) return;
    }
L_0014aa34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5ecu);
    }
L_0014aa38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0014aa3c:;
    {
        goto L_0014a360;
    }
L_0014aa40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014aa44:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[2]);
    }
L_0014aa48:;
    {
        goto L_0014a9f8;
    }
L_0014aa4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014aa50:;
    {
        goto L_0014a6d0;
    }
L_0014aa54:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_0014aa58:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0014aa5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x184u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014aa60:;
    {
        goto L_0014a808;
    }
L_0014aa64:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014aa68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014aa6c:;
    {
        wr8(cpu->r[4] + + 0x23cu, cpu->r[3]);
    }
L_0014aa70:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0014aa74:;
    {
        wr8(cpu->r[4] + + 0x23du, cpu->r[3]);
    }
L_0014aa78:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x238u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014aa7c:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0014aa80:;
    {
        goto L_0014a430;
    }
L_0014aa84:;
    {
        cpu->r[0] = 0x0000002fu;
    }
L_0014aa88:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_0014aa8c:;
    {
        cpu->r[14] = 0x0014aa90u; fn_00093f34(cpu);
    }
L_0014aa90:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014aa94:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_0014aa98:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0014aa9c:;
    {
        goto L_0014a4b0;
    }
L_0014aaa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_0014aaa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014a6d0;
        }
    }
L_0014aaa8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014aaac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014aab0:;
    {
        cpu->r[14] = 0x0014aab8u;
    }
L_0014aab4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aab8u)) return;
    }
L_0014aab8:;
    {
        cpu->r[1] = (~0x00000063u);
    }
L_0014aabc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014aac0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x620u);
    }
L_0014aac4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_0014aac8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000007fu, 0, 0);
    }
L_0014aacc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014aad0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0014aad4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 7u, &shc); cpu->r[2] = v;
    }
L_0014aad8:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[2]);
    }
L_0014aadc:;
    {
        goto L_0014a6d0;
    }
L_0014aae0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014aae4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014aae8:;
    {
        cpu->r[14] = 0x0014aaf0u;
    }
L_0014aaec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aaf0u)) return;
    }
L_0014aaf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014aaf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a8d4;
        }
    }
L_0014aaf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_0014aafc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014ab00:;
    {
        vfp_sync_flags(cpu);
    }
L_0014ab04:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0014a8d4;
        }
    }
L_0014ab08:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ab0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ab10:;
    {
        cpu->r[14] = 0x0014ab18u;
    }
L_0014ab14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ab18u)) return;
    }
L_0014ab18:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0014ab1c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014ab20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014ab24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a8d4;
        }
    }
L_0014ab28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_0014ab2c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x364u);
    }
L_0014ab30:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2b0u);
    }
L_0014ab34:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0014ab38:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 10u, &shc); cpu->r[0] = v;
    }
L_0014ab3c:;
    {
        cpu->r[14] = 0x0014ab40u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014ab40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_0014ab44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0014ab48:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_0014ab4c:;
    {
        goto L_0014a8d8;
    }
L_0014ab50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1c4u);
    }
L_0014ab54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014ab58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a9e8;
        }
    }
L_0014ab5c:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[2]);
    }
L_0014ab60:;
    {
        goto L_0014a9f8;
    }
L_0014ab64:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x498u);
    }
L_0014ab68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014ab6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a994;
        }
    }
L_0014ab70:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0014ab74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ab7cu + + 0x304u);
    }
L_0014ab78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ab7c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0014ab80:;
    {
        vfp_vdiv(cpu, 14, 16, 15);
    }
L_0014ab84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ab8cu + + 0x2f8u);
    }
L_0014ab88:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014ab8c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014ab90:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014ab94:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[1] = v;
    }
L_0014ab98:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[2] = v;
    }
L_0014ab9c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[3] = v;
    }
L_0014aba0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0014aba4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014aba8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[11] = v;
    }
L_0014abac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014abb0:;
    {
        uint32_t v = cpu->r[9] * cpu->r[1]; cpu->r[1] = v;
    }
L_0014abb4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0014abb8:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[2] = v;
    }
L_0014abbc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0014abc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0014abc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014abc8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0014abcc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[2] = v;
    }
L_0014abd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014abd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[1], 1, 12u, &shc), 1, 0);
    }
L_0014abd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0014abdc:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_0014abe0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0014abe4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 12u, &shc), 1, 0);
    }
L_0014abe8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_0014abec:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[10]);
    }
L_0014abf0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[3], 1, 12u, &shc), 1, 0);
    }
L_0014abf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0014abf8:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[1]);
    }
L_0014abfc:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0014ac00:;
    {
        cpu->r[14] = 0x0014ac08u;
    }
L_0014ac04:;
    {
        uint32_t t = rd32(cpu->r[1] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ac08u)) return;
    }
L_0014ac08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014ac0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ac28;
        }
    }
L_0014ac10:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ac14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ac18:;
    {
        cpu->r[14] = 0x0014ac20u;
    }
L_0014ac1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ac20u)) return;
    }
L_0014ac20:;
    {
        cpu->r[3] = 0x00001704u;
    }
L_0014ac24:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014ac28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014ac2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014ac30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_0014ac34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0014ac38:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_0014ac3c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[10]);
    }
L_0014ac40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014adb4;
        }
    }
L_0014ac44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_0014ac48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_0014ac4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_0014ac50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = cpu->r[9];
        }
    }
L_0014ac54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ad80;
        }
    }
L_0014ac58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001b8u, 0, 0);
    }
L_0014ac5c:;
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
L_0014ac60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_0014ac64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_0014ac68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_0014ac6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_0014ac70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_0014ac74:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0014ac78:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[3]);
    }
L_0014ac7c:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[9]);
    }
L_0014ac80:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[11]);
    }
L_0014ac84:;
    {
        goto L_0014a9a0;
    }
L_0014ac88:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ac8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ac90:;
    {
        cpu->r[14] = 0x0014ac98u;
    }
L_0014ac94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ac98u)) return;
    }
L_0014ac98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x64u);
    }
L_0014ac9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_0014aca0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0014aca4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a5b8;
        }
    }
L_0014aca8:;
    {
        goto L_0014a5e4;
    }
L_0014acac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001c8u, 0, 0);
    }
L_0014acb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001dcu, 0, 0);
    }
L_0014acb4:;
    {
        cpu->r[14] = 0x0014acb8u; fn_00148a7c(cpu);
    }
L_0014acb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001ccu, 0, 0);
    }
L_0014acbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001e0u, 0, 0);
    }
L_0014acc0:;
    {
        cpu->r[14] = 0x0014acc4u; fn_00148a7c(cpu);
    }
L_0014acc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001d0u, 0, 0);
    }
L_0014acc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001e4u, 0, 0);
    }
L_0014accc:;
    {
        cpu->r[14] = 0x0014acd0u; fn_00148a7c(cpu);
    }
L_0014acd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000001d4u, 0, 0);
    }
L_0014acd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001e8u, 0, 0);
    }
L_0014acd8:;
    {
        cpu->r[14] = 0x0014acdcu; fn_00148a7c(cpu);
    }
L_0014acdc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1ecu);
    }
L_0014ace0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0014ace4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1e0u);
    }
L_0014ace8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_0014acec:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 4u, &shc), cpu->r[2], 1, 0);
    }
L_0014acf0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1c8u);
    }
L_0014acf4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_0014acf8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1ccu);
    }
L_0014acfc:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 3u, &shc), cpu->r[0], 1, 0);
    }
L_0014ad00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_0014ad04:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x1d0u);
    }
L_0014ad08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0014ad0c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x1d4u);
    }
L_0014ad10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0014ad14:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1e4u);
    }
L_0014ad18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1e8u);
    }
L_0014ad1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014ad20:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x0000000fu, 0, 0);
    }
L_0014ad24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_0014ad28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0014ad2c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_0014ad30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[10];
        }
    }
L_0014ad34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014ad38:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_0014ad3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[8];
        }
    }
L_0014ad40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014ad44:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0014ad48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[14];
        }
    }
L_0014ad4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_0014ad50:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_0014ad54:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_0014ad58:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_0014ad5c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0014ad60:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_0014ad64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0014ad68:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[2]);
    }
L_0014ad6c:;
    {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[3]);
    }
L_0014ad70:;
    {
        wr32(cpu->r[4] + + 0x1d0u, cpu->r[12]);
    }
L_0014ad74:;
    {
        wr32(cpu->r[4] + + 0x1d4u, cpu->r[0]);
    }
L_0014ad78:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[1]);
    }
L_0014ad7c:;
    {
        goto L_0014a784;
    }
L_0014ad80:;
    {
        cpu->r[0] = 0x00000027u;
    }
L_0014ad84:;
    {
        cpu->r[14] = 0x0014ad88u; fn_00093f34(cpu);
    }
L_0014ad88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014ad8c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014ad90:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_0014ad94:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014ad98:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[9] = v;
    }
L_0014ad9c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[0]; cpu->r[11] = v;
    }
L_0014ada0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[3] = v;
    }
L_0014ada4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0014ada8:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[11] = v;
    }
L_0014adac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0014adb0:;
    {
        goto L_0014ac58;
    }
L_0014adb4:;
    {
        cpu->r[0] = 0x00000023u;
    }
L_0014adb8:;
    {
        goto L_0014ad84;
    }
L_0014adbc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014adc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014adc4:;
    {
        cpu->r[14] = 0x0014adccu;
    }
L_0014adc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014adccu)) return;
    }
L_0014adcc:;
    {
        cpu->r[9] = 0x00001788u;
    }
L_0014add0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0014add4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014add8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014a5e4;
        }
    }
L_0014addc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x364u);
    }
L_0014ade0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x2b0u);
    }
L_0014ade4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014ade8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014adec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014adf0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014adf4:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014adf8:;
    {
        cpu->r[14] = 0x0014ae00u;
    }
L_0014adfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ae00u)) return;
    }
L_0014ae00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014ae04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ae4c;
        }
    }
L_0014ae08:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ae0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ae10:;
    {
        cpu->r[14] = 0x0014ae18u;
    }
L_0014ae14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ae18u)) return;
    }
L_0014ae18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_0014ae1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_0014ae20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ae4c;
        }
    }
L_0014ae24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ae2cu + + 0x5cu);
    }
L_0014ae28:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_0014ae2c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0014ae30:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0014ae34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014ae38:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_0014ae3c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014ae40:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014ae44:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_0014ae48:;
    {
        goto L_0014a5e4;
    }
L_0014ae4c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0014ae50:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0014ae54:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0014ae58:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014ae5c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_0014ae60:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014ae64:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014ae68:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0014ae6c:;
    {
        goto L_0014a5e4;
    }
L_0014ae70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014ae74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014a4b0;
        }
    }
L_0014ae78:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0014ae7c:;
    {
        goto L_0014a430;
    }
}

/* _ZN11CGameCamera18UpdateCamera_IntroEbPK10RoadStructP8CCarBase @ 0014ae8c (arm) */
void fn_0014ae8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ae8c:;
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
L_0014ae90:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014ae94:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014ae98:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_0014ae9c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0014aea0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014aea4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014aea8:;
    {
        cpu->r[14] = 0x0014aeacu; fn_00149824(cpu);
    }
L_0014aeac:;
    {
        cpu->r[5] = rd32(0x0014aeb4u + + 0x36cu);
    }
L_0014aeb0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014aeb8u, cpu->r[5], 0, 0);
    }
L_0014aeb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014aeb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014afbc;
        }
    }
L_0014aebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x160u);
    }
L_0014aec0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014aec4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x234u, cpu->r[0]);
        }
    }
L_0014aec8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014aecc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014aed0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014aed4:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x41cu);
    }
L_0014aed8:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x420u);
    }
L_0014aedc:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x424u);
    }
L_0014aee0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[7] + + 0x3d8u);
        }
    }
L_0014aee4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[7] + + 0x3dcu);
        }
    }
L_0014aee8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[7] + + 0x3d4u);
        }
    }
L_0014aeec:;
    {
        cpu->r[14] = 0x0014aef4u;
    }
L_0014aef0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014aef4u)) return;
    }
L_0014aef4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014aef8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
        }
    }
L_0014aefc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014af1c;
        }
    }
L_0014af00:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014af04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014af08:;
    {
        cpu->r[14] = 0x0014af10u;
    }
L_0014af0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014af10u)) return;
    }
L_0014af10:;
    {
        cpu->r[3] = 0x00001704u;
    }
L_0014af14:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014af18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0014af1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014af20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014af24:;
    {
        cpu->r[14] = 0x0014af2cu;
    }
L_0014af28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014af2cu)) return;
    }
L_0014af2c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014af30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014af4c;
        }
    }
L_0014af34:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014af38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014af3c:;
    {
        cpu->r[14] = 0x0014af44u;
    }
L_0014af40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014af44u)) return;
    }
L_0014af44:;
    {
        cpu->r[3] = 0x00001708u;
    }
L_0014af48:;
    {
        cpu->r[11] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0014af4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_0014af50:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014af54:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0014af58:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014af5c:;
    {
        cpu->r[14] = 0x0014af64u;
    }
L_0014af60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014af64u)) return;
    }
L_0014af64:;
    {
        cpu->r[3] = rd32(0x0014af6cu + + 0x2b8u);
    }
L_0014af68:;
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
L_0014af6c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
    }
L_0014af70:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014af74:;
    {
        cpu->r[5] = 0x00005556u;
    }
L_0014af78:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x5555u << 16);
    }
L_0014af7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x234u);
    }
L_0014af80:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_0014af84:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0014af88:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x418u);
    }
L_0014af8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0014af90:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[5] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0014af94:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0014af98:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0014af9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0014afa0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014afc8;
        }
    }
L_0014afa4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0014afa8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0014afac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0014afb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014b118;
        }
    }
L_0014afb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0014afb8:;
    {
        wr32(cpu->r[4] + + 0x234u, cpu->r[3]);
    }
L_0014afbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_0014afc0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014afc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014afc8u)) return;
    }
L_0014afc8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014afcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0014afd0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0014afd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000096u, 0, 0);
    }
L_0014afd8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0014afdc:;
    {
        cpu->r[14] = 0x0014afe0u; fn_001845ac(cpu);
    }
L_0014afe0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014afe4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0014afe8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x120u);
    }
L_0014afec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], 0x00000046u, 0, 0);
    }
L_0014aff0:;
    {
        cpu->r[14] = 0x0014aff4u; fn_00184768(cpu);
    }
L_0014aff4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0014aff8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014affc:;
    {
        cpu->r[14] = 0x0014b000u; fn_001846f0(cpu);
    }
L_0014b000:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0014b004:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x234u);
    }
L_0014b008:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_0014b00c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_0014b010:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0014b014:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014b018:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_0014b01c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0014b020:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_0014b024:;
    {
        { int32_t v = (int32_t)(cpu->r[7] << 12); cpu->r[7] = (uint32_t)(v >> 12); }
    }
L_0014b028:;
    {
        { int32_t v = (int32_t)(cpu->r[9] << 12); cpu->r[9] = (uint32_t)(v >> 12); }
    }
L_0014b02c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[5] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0014b030:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0014b034:;
    {
        cpu->r[14] = 0x0014b038u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014b038:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0014b03c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000004bu, 0, 0);
    }
L_0014b040:;
    {
        cpu->r[1] = 0x000005dcu;
    }
L_0014b044:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0014b048:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0014b04c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3]; cpu->r[12] = v;
    }
L_0014b050:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_0014b054:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_0014b058:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[11] = v;
    }
L_0014b05c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0014b060:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[5] = v;
    }
L_0014b064:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0014b068:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[1] = v;
    }
L_0014b06c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0014b070:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[10]);
    }
L_0014b074:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], shifter(cpu->r[11], 1, 12u, &shc), 0, 0);
    }
L_0014b078:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014b07c:;
    {
        cpu->r[12] = 0x00001388u;
    }
L_0014b080:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_0014b084:;
    {
        uint32_t v = cpu->r[12] * cpu->r[9]; cpu->r[9] = v;
    }
L_0014b088:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0014b08c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[7] = v;
    }
L_0014b090:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[9], 1, 12u, &shc), 1, 0);
    }
L_0014b094:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[9]);
    }
L_0014b098:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[7], 1, 12u, &shc), 1, 0);
    }
L_0014b09c:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[7]);
    }
L_0014b0a0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00001000u, cpu->r[0], 1, 0);
    }
L_0014b0a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0014b0a8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[5] = v;
    }
L_0014b0ac:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10] + cpu->r[5]; cpu->r[5] = v;
    }
L_0014b0b0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0014b0b4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_0014b0b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_0014b0bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014b0c0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11] + cpu->r[1]; cpu->r[1] = v;
    }
L_0014b0c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x234u);
    }
L_0014b0c8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[10]; cpu->r[0] = v;
    }
L_0014b0cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000ff0u, 0, 0);
    }
L_0014b0d0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000ff0u, 0, 0);
    }
L_0014b0d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014b0d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000fu, 0, 0);
    }
L_0014b0dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000fu, 0, 0);
    }
L_0014b0e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000ff0u, 0, 0);
    }
L_0014b0e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_0014b0e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_0014b0ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014b0f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_0014b0f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014b0f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[10];
        }
    }
L_0014b0fc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_0014b100:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_0014b104:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[1]);
    }
L_0014b108:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_0014b10c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[0]);
    }
L_0014b110:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[5]);
    }
L_0014b114:;
    {
        goto L_0014afb4;
    }
L_0014b118:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0014b11c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0014b120:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0014b124:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014b128:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014b12c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0014b130:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_0014b134:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014b138:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b13c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014b140:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014b144:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014b14cu + + 0xc8u);
    }
L_0014b148:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_0014b14c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014b154u + + 0xc4u);
    }
L_0014b150:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0014b154:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0014b158:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014b15c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000400u, 0, 0);
    }
L_0014b160:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014b164:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0014b168:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0014b16c:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014b170:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_0014b174:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000096u, 0, 0);
    }
L_0014b178:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0014b17c:;
    {
        cpu->r[14] = 0x0014b180u; fn_001845ac(cpu);
    }
L_0014b180:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b184:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x120u);
    }
L_0014b188:;
    {
        cpu->r[14] = 0x0014b18cu; fn_00184768(cpu);
    }
L_0014b18c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b190:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014b194:;
    {
        cpu->r[14] = 0x0014b198u; fn_001846f0(cpu);
    }
L_0014b198:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014b1a0u + + 0x7cu);
    }
L_0014b19c:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0014b1a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014b1a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0014b1a8:;
    {
        cpu->r[1] = 0x00001388u;
    }
L_0014b1ac:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0014b1b0:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[10]);
    }
L_0014b1b4:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0014b1b8:;
    {
        { int32_t v = (int32_t)(cpu->r[0] << 12); cpu->r[0] = (uint32_t)(v >> 12); }
    }
L_0014b1bc:;
    {
        { int32_t v = (int32_t)(cpu->r[2] << 12); cpu->r[2] = (uint32_t)(v >> 12); }
    }
L_0014b1c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x234u);
    }
L_0014b1c4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[12] = v;
    }
L_0014b1c8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[1] = v;
    }
L_0014b1cc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[0] = v;
    }
L_0014b1d0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[11] = v;
    }
L_0014b1d4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014b1d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_0014b1dc:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[1]);
    }
L_0014b1e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0014b1e4:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[12]);
    }
L_0014b1e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 12u, &shc), 1, 0);
    }
L_0014b1ec:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[0]);
    }
L_0014b1f0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[11], 1, 12u, &shc), 1, 0);
    }
L_0014b1f4:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[8]);
    }
L_0014b1f8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014b1fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000046u, 0, 0);
    }
L_0014b200:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0014b204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014b208:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
    }
L_0014b20c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[10]);
    }
L_0014b210:;
    {
        goto L_0014afb4;
    }
}

/* _ZN11CGameCamera18UpdateCamera_CrashEbPK10RoadStructP8CCarBase @ 0014b228 (arm) */
void fn_0014b228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014b228:;
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
L_0014b22c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0014b230:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x160u);
    }
L_0014b234:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000004cu, 1, 0);
    }
L_0014b238:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014b23c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014b240:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0014b244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b250;
        }
    }
L_0014b248:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014b24c:;
    {
        cpu->r[14] = 0x0014b250u; fn_00149374(cpu);
    }
L_0014b250:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014b254:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x41cu);
    }
L_0014b258:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x420u);
    }
L_0014b25c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x424u);
    }
L_0014b260:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_0014b264:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x490u);
    }
L_0014b268:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_0014b26c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[1];
        }
    }
L_0014b270:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[6] + + 0x3dcu);
        }
    }
L_0014b274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[6] + + 0x3d8u);
        }
    }
L_0014b278:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[6] + + 0x3d4u);
        }
    }
L_0014b27c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b280:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x000001f4u, 0, 0);
    }
L_0014b284:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x0000012cu, 0, 0);
    }
L_0014b288:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0014b28c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x0000012cu, 0, 0);
    }
L_0014b290:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0014b294:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b3a4;
        }
    }
L_0014b298:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x420u);
    }
L_0014b29c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014b2a0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x424u);
    }
L_0014b2a4:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x41cu);
    }
L_0014b2a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0014b2ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 0);
    }
L_0014b2b0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_0014b2b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
    }
L_0014b2b8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0014b2bc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0014b2c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b3d4;
        }
    }
L_0014b2c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0014b2c8:;
    {
        cpu->r[14] = 0x0014b2ccu; fn_0018572c(cpu);
    }
L_0014b2cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x490u);
    }
L_0014b2d0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014b2d4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014b2d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014b2e0u + + 0x128u);
    }
L_0014b2dc:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0014b2e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014b2e8u + + 0x124u);
    }
L_0014b2e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0014b2e8:;
    {
        vfp_sync_flags(cpu);
    }
L_0014b2ec:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0014b2f4u + + 0x11cu);
        }
    }
L_0014b2f0:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 13) = *(float*)G(0x0014b2f8u + + 0x11cu);
        }
    }
L_0014b2f4:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vmla(cpu, 14, 15, 13);
        }
    }
L_0014b2f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x000003e8u;
        }
    }
L_0014b2fc:;
    {
        if (cond_test(cpu, 14)) {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
        }
    }
L_0014b300:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_0014b304:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014b308:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014b30c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x424u);
        }
    }
L_0014b310:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b314:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3dcu);
        }
    }
L_0014b318:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x41cu);
        }
    }
L_0014b31c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3d4u);
        }
    }
L_0014b320:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_0014b324:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x420u);
        }
    }
L_0014b328:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b32c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3d8u);
        }
    }
L_0014b330:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[2], 0, 0);
    }
L_0014b334:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 3, 31u, &shc), 0, 0);
    }
L_0014b338:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0014b33c:;
    {
        cpu->r[14] = 0x0014b340u; fn_001845ac(cpu);
    }
L_0014b340:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xecu);
    }
L_0014b344:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014b348:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b34c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_0014b350:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_0014b354:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[10] = v;
    }
L_0014b358:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_0014b35c:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 1u, &shc); cpu->r[8] = v;
    }
L_0014b360:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014b364:;
    {
        cpu->r[14] = 0x0014b368u; fn_00184768(cpu);
    }
L_0014b368:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b36c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b370:;
    {
        cpu->r[14] = 0x0014b374u; fn_001846f0(cpu);
    }
L_0014b374:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014b378:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014b37c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014b380:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[2] = v;
    }
L_0014b384:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[3] = v;
    }
L_0014b388:;
    {
        uint32_t v = cpu->r[1] * cpu->r[9]; cpu->r[9] = v;
    }
L_0014b38c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 12u, &shc), 0, 0);
    }
L_0014b390:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[2]);
    }
L_0014b394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_0014b398:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_0014b39c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], shifter(cpu->r[9], 1, 12u, &shc), 0, 0);
    }
L_0014b3a0:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[9]);
    }
L_0014b3a4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0014b3a8:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0014b3ac:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[3]);
    }
L_0014b3b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014b3b4:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[11]);
    }
L_0014b3b8:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[12]);
    }
L_0014b3bc:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0014b3c0:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[10]);
    }
L_0014b3c4:;
    {
        wr32(cpu->r[4] + + 0x128u, cpu->r[8]);
    }
L_0014b3c8:;
    {
        wr32(cpu->r[4] + + 0x124u, cpu->r[7]);
    }
L_0014b3cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0014b3d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014b3d4u)) return;
    }
L_0014b3d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_0014b3d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_0014b3dc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0014b3e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_0014b3e4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x3d8u);
    }
L_0014b3e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0014b3ec:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_0014b3f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0014b3f4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0014b3f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0014b3fc:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0014b400:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0014b404:;
    {
        goto L_0014b2c4;
    }
}

/* _ZN11CGameCamera6UpdateEbPK10RoadStructP8CCarBaseiiii @ 0014b418 (arm) */
void fn_0014b418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014b418:;
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
L_0014b41c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_0014b420:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x0000010cu, 0, 0);
    }
L_0014b424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014b428:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0014b42c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0014b430:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0014b434:;
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
L_0014b438:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000130u, 0, 0);
    }
L_0014b43c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x1d0u);
    }
L_0014b440:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014b444:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x1c8u);
    }
L_0014b448:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_0014b44c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x1ccu);
    }
L_0014b450:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0014b454:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0014b458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1d4u);
    }
L_0014b45c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014b460:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_0014b464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_0014b468:;
    {
        cpu->r[10] = rd32(0x0014b470u + + 0x784u);
    }
L_0014b46c:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[14]);
    }
L_0014b470:;
    {
        wr32(cpu->r[4] + + 0x1e0u, cpu->r[9]);
    }
L_0014b474:;
    {
        cpu->r[10] = add_flags(cpu, 0x0014b47cu, cpu->r[10], 0, 0);
    }
L_0014b478:;
    {
        wr32(cpu->r[4] + + 0x1e4u, cpu->r[11]);
    }
L_0014b47c:;
    {
        wr32(cpu->r[4] + + 0x1e8u, cpu->r[0]);
    }
L_0014b480:;
    {
        wr32(cpu->r[4] + + 0x1ecu, cpu->r[1]);
    }
L_0014b484:;
    {
        wr32(cpu->r[4] + + 0x13cu, cpu->r[3]);
    }
L_0014b488:;
    {
        wr32(cpu->r[4] + + 0x14cu, cpu->r[12]);
    }
L_0014b48c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014b490:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014b57c;
        }
    }
L_0014b494:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b498:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0014b49c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[12]);
        }
    }
L_0014b4a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b57c;
        }
    }
L_0014b4a4:;
    {
        cpu->r[9] = rd32(0x0014b4acu + + 0x74cu);
    }
L_0014b4a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b4ac:;
    {
        cpu->r[14] = 0x0014b4b0u; fn_00148aa8(cpu);
    }
L_0014b4b0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_0014b4b4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0014b4b8:;
    {
        cpu->r[14] = 0x0014b4bcu; fn_00096b88(cpu);
    }
L_0014b4bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014b4c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b4d4;
        }
    }
L_0014b4c4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 1);
    }
L_0014b4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b918;
        }
    }
L_0014b4cc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000003u, 1, 1);
    }
L_0014b4d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b940;
        }
    }
L_0014b4d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b4d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x160u);
    }
L_0014b4dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0014b4e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b4ec;
        }
    }
L_0014b4e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0014b4e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bba0;
        }
    }
L_0014b4ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014b4f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b4f4:;
    {
        cpu->r[14] = 0x0014b4fcu;
    }
L_0014b4f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014b4fcu)) return;
    }
L_0014b4fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x460u);
    }
L_0014b500:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014b504:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 0);
    }
L_0014b508:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0014b50c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
        }
    }
L_0014b510:;
    {
        wr32(cpu->r[4] + + 0x178u, cpu->r[0]);
    }
L_0014b514:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x37cu);
    }
L_0014b518:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b51c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x38cu);
    }
L_0014b520:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0014b524:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 10u, &shc); cpu->r[3] = v;
    }
L_0014b528:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[3]);
    }
L_0014b52c:;
    {
        cpu->r[14] = 0x0014b530u; fn_00173e84(cpu);
    }
L_0014b530:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0014b534:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b538:;
    {
        cpu->r[14] = 0x0014b53cu; fn_00173e08(cpu);
    }
L_0014b53c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014b540:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0014b544:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b548:;
    {
        cpu->r[14] = 0x0014b54cu; fn_00173e3c(cpu);
    }
L_0014b54c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b550:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_0014b554:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0014b558:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_0014b55c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_0014b60c;
        case 1: goto L_0014b5a4;
        case 2: goto L_0014b5a4;
        case 3: goto L_0014b638;
        case 4: goto L_0014b638;
        case 5: goto L_0014b60c;
        default: guest_unimplemented(cpu, 0x0014b55cu); return; }
        }
    }
L_0014b560:;
    {
        goto L_0014b5a4;
    }
L_0014b57c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_0014b580:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014b584:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b4a4;
        }
    }
L_0014b588:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014b58c:;
    {
        cpu->r[14] = 0x0014b590u; fn_000964c8(cpu);
    }
L_0014b590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014b594:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0014b598:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0014b59c:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[3]);
    }
L_0014b5a0:;
    {
        goto L_0014b4a4;
    }
L_0014b5a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x168u);
    }
L_0014b5a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0014b5ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_0014b5b0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b5b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0014b5b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0014b5bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_0014b5c0:;
    {
        cpu->r[14] = 0x0014b5c4u; fn_001845ac(cpu);
    }
L_0014b5c4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b5c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b5cc:;
    {
        cpu->r[14] = 0x0014b5d0u; fn_00184768(cpu);
    }
L_0014b5d0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b5d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b5d8:;
    {
        cpu->r[14] = 0x0014b5dcu; fn_001846f0(cpu);
    }
L_0014b5dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0014b5e0:;
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
L_0014b5e4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0014b5e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b5ec:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0014b5f0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0014b5f4:;
    {
        { int32_t v = (int32_t)(cpu->r[0] << 12); cpu->r[0] = (uint32_t)(v >> 12); }
    }
L_0014b5f8:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 12); cpu->r[1] = (uint32_t)(v >> 12); }
    }
L_0014b5fc:;
    {
        { int32_t v = (int32_t)(cpu->r[2] << 12); cpu->r[2] = (uint32_t)(v >> 12); }
    }
L_0014b600:;
    {
        wr32(cpu->r[4] + + 0x16cu, cpu->r[0]);
    }
L_0014b604:;
    {
        wr32(cpu->r[4] + + 0x170u, cpu->r[1]);
    }
L_0014b608:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[2]);
    }
L_0014b60c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_0014b610:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_0014b8ac;
        case 1: goto L_0014b82c;
        case 2: goto L_0014b8c8;
        case 3: goto L_0014b8e4;
        case 4: goto L_0014b8fc;
        case 5: goto L_0014b82c;
        case 6: goto L_0014b82c;
        case 7: goto L_0014b6b8;
        default: guest_unimplemented(cpu, 0x0014b610u); return; }
        }
    }
L_0014b614:;
    {
        goto L_0014b82c;
    }
L_0014b638:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x168u);
    }
L_0014b63c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0014b640:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_0014b644:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b648:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0014b64c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0014b650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0014b654:;
    {
        cpu->r[14] = 0x0014b658u; fn_001845ac(cpu);
    }
L_0014b658:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b65c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b660:;
    {
        cpu->r[14] = 0x0014b664u; fn_00184768(cpu);
    }
L_0014b664:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014b668:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0014b66c:;
    {
        cpu->r[14] = 0x0014b670u; fn_001846f0(cpu);
    }
L_0014b670:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_0014b674:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0014b678:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014b67c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0014b680:;
    {
        wr32(cpu->r[4] + + 0x1c8u, cpu->r[2]);
    }
L_0014b684:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 12); cpu->r[3] = (uint32_t)(v >> 12); }
    }
L_0014b688:;
    {
        wr32(cpu->r[4] + + 0x170u, cpu->r[3]);
    }
L_0014b68c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_0014b690:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0014b694:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x88u);
    }
L_0014b698:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 12); cpu->r[1] = (uint32_t)(v >> 12); }
    }
L_0014b69c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_0014b6a0:;
    {
        wr32(cpu->r[4] + + 0x16cu, cpu->r[1]);
    }
L_0014b6a4:;
    {
        { int32_t v = (int32_t)(cpu->r[2] << 12); cpu->r[2] = (uint32_t)(v >> 12); }
    }
L_0014b6a8:;
    {
        wr32(cpu->r[4] + + 0x174u, cpu->r[2]);
    }
L_0014b6ac:;
    {
        wr32(cpu->r[4] + + 0x1ccu, cpu->r[3]);
    }
L_0014b6b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b6b4:;
    {
        goto L_0014b60c;
    }
L_0014b6b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b6bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b6c0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014b6c4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0014b6c8:;
    {
        cpu->r[14] = 0x0014b6ccu; fn_00148c28(cpu);
    }
L_0014b6cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0014b6d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b6d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0014b6d8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_0014b6dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014b6ec;
        }
    }
L_0014b6e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_0014b6e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_0014b6e8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_0014b6ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f4u);
    }
L_0014b6f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b6f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014ba0c;
        }
    }
L_0014b6f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x160u);
    }
L_0014b6fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b978;
        }
    }
L_0014b704:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b708:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0014b70c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b718;
        }
    }
L_0014b710:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0014b714:;
    {
        wr32(cpu->r[4] + + 0x228u, cpu->r[3]);
    }
L_0014b718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014b71c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014b720:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0014b724:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b728:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0014b72c:;
    {
        cpu->r[2] = 0x0000004bu;
    }
L_0014b730:;
    {
        uint32_t v = cpu->r[3] & ~ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0014b734:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0014b738:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000200u, cpu->r[3], 1, 0);
    }
L_0014b73c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0014b740:;
    {
        cpu->r[12] = 0x0000008cu;
    }
L_0014b744:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0014b748:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 6u, &shc), 0, 0);
    }
L_0014b74c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[6]; cpu->r[6] = v;
    }
L_0014b750:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 9u, &shc); cpu->r[6] = v;
    }
L_0014b754:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014b758:;
    {
        cpu->r[14] = 0x0014b75cu; fn_0017eb4c(cpu);
    }
L_0014b75c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0014b760:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1fcu);
    }
L_0014b764:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x41cu);
    }
L_0014b768:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x420u);
    }
L_0014b76c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x424u);
    }
L_0014b770:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[5] + + 0x3d8u);
        }
    }
L_0014b774:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = rd32(cpu->r[5] + + 0x3dcu);
        }
    }
L_0014b778:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[5] + + 0x3d4u);
        }
    }
L_0014b77c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014baa4;
        }
    }
L_0014b784:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014b788:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_0014b78c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0014b790:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x114u);
    }
L_0014b794:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_0014b798:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_0014b79c:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[2]);
    }
L_0014b7a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 1);
    }
L_0014b7a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000800u, 1, 0);
        }
    }
L_0014b7a8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x118u, cpu->r[2]);
        }
    }
L_0014b7ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x228u);
    }
L_0014b7b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014b7b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014ba4c;
        }
    }
L_0014b7b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_0014b7bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ba70;
        }
    }
L_0014b7c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe8u);
    }
L_0014b7c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014b7c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b994;
        }
    }
L_0014b7cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0014b7d0:;
    {
        wr32(cpu->r[4] + + 0x204u, cpu->r[9]);
    }
L_0014b7d4:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[3]);
    }
L_0014b7d8:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[7]);
    }
L_0014b7dc:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[1]);
    }
L_0014b7e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0014b7e4:;
    {
        wr32(cpu->r[4] + + 0x228u, cpu->r[2]);
    }
L_0014b7e8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014b7ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b7f0:;
    {
        cpu->r[14] = 0x0014b7f8u;
    }
L_0014b7f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014b7f8u)) return;
    }
L_0014b7f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014b7fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b818;
        }
    }
L_0014b800:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014b804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014b808:;
    {
        cpu->r[14] = 0x0014b810u;
    }
L_0014b80c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014b810u)) return;
    }
L_0014b810:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_0014b814:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0014b818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b81c:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[0]);
    }
L_0014b820:;
    {
        wr32(cpu->r[4] + + 0x160u, cpu->r[3]);
    }
L_0014b824:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0014b828:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014b82cu)) return;
    }
L_0014b82c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_0014b830:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_0014b834:;
    {
        cpu->r[14] = 0x00008c50u;
    }
L_0014b838:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014b83c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0014b840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b844:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_0014b848:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b84c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014b850:;
    {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_0014b854:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[14]);
    }
L_0014b858:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x8u);
    }
L_0014b85c:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x1cu);
    }
L_0014b860:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[14], 0x00006300u, 0, 0);
    }
L_0014b864:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0014b868:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_0014b86c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0014b870:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_0014b874:;
    {
        cpu->r[10] = rd32(cpu->r[12] + + 0x1b0u);
    }
L_0014b878:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014b87c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_0014b880:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_0014b884:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_0014b888:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014b88c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0014b890:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0014b894:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa0u);
    }
L_0014b898:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0014b89c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0014b8a0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0014b8a4:;
    {
        cpu->r[14] = 0x0014b8a8u; fn_0014a29c(cpu);
    }
L_0014b8a8:;
    {
        goto L_0014b6cc;
    }
L_0014b8ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b8b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b8b4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0014b8b8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0014b8bc:;
    {
        cpu->r[14] = 0x0014b8c0u; fn_0014ae8c(cpu);
    }
L_0014b8c0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0014b8c4:;
    {
        goto L_0014b6cc;
    }
L_0014b8c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b8cc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b8d0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0014b8d4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0014b8d8:;
    {
        cpu->r[14] = 0x0014b8dcu; fn_0014b228(cpu);
    }
L_0014b8dc:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0014b8e0:;
    {
        goto L_0014b6cc;
    }
L_0014b8e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b8e8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b8ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014b8f0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0014b8f4:;
    {
        cpu->r[14] = 0x0014b8f8u; fn_001494e4(cpu);
    }
L_0014b8f8:;
    {
        goto L_0014b6cc;
    }
L_0014b8fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014b900:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b904:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014b908:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014b90c:;
    {
        cpu->r[14] = 0x0014b910u; fn_00149cec(cpu);
    }
L_0014b910:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0014b914:;
    {
        goto L_0014b6cc;
    }
L_0014b918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x228u);
    }
L_0014b91c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b920:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0014b4d4;
        }
    }
L_0014b924:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b928:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0014b92c:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[1]);
    }
L_0014b930:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_0014b934:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_0014b938:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[1]);
        }
    }
L_0014b93c:;
    {
        goto L_0014b964;
    }
L_0014b940:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x228u);
    }
L_0014b944:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014b948:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0014b4d4;
        }
    }
L_0014b94c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b950:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0014b954:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[1]);
    }
L_0014b958:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_0014b95c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000006u;
        }
    }
L_0014b960:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[1]);
        }
    }
L_0014b964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014b968:;
    {
        cpu->r[14] = 0x0014b96cu; fn_00149b48(cpu);
    }
L_0014b96c:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0014b970:;
    {
        wr32(cpu->r[4] + + 0x228u, cpu->r[3]);
    }
L_0014b974:;
    {
        goto L_0014b4d4;
    }
L_0014b978:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0014b97c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x15cu);
        }
    }
L_0014b980:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b718;
        }
    }
L_0014b984:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x15cu);
    }
L_0014b988:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 1);
    }
L_0014b98c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b710;
        }
    }
L_0014b990:;
    {
        goto L_0014b718;
    }
L_0014b994:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x210u);
    }
L_0014b998:;
    {
        cpu->r[1] = 0x00006667u;
    }
L_0014b99c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x214u);
    }
L_0014b9a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x6666u << 16);
    }
L_0014b9a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x218u);
    }
L_0014b9a8:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 0);
    }
L_0014b9ac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0014b9b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], cpu->r[8], 0, 0);
    }
L_0014b9b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_0014b9b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_0014b9bc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_0014b9c0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[8] = v;
    }
L_0014b9c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[10] = v;
    }
L_0014b9c8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[11] = v;
    }
L_0014b9cc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[8]; cpu->r[0] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0014b9d0:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 31u, &shc); cpu->r[8] = v;
    }
L_0014b9d4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[10]; cpu->r[14] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0014b9d8:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[10] = v;
    }
L_0014b9dc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[11]; cpu->r[14] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0014b9e0:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 31u, &shc); cpu->r[11] = v;
    }
L_0014b9e4:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[12], 1, 2u, &shc), cpu->r[8], 1, 0);
    }
L_0014b9e8:;
    {
        cpu->r[10] = sub_flags(cpu, shifter(cpu->r[0], 1, 2u, &shc), cpu->r[10], 1, 0);
    }
L_0014b9ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0014b9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_0014b9f4:;
    {
        wr32(cpu->r[4] + + 0x204u, cpu->r[9]);
    }
L_0014b9f8:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[3]);
    }
L_0014b9fc:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[11], 1, 0);
    }
L_0014ba00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_0014ba04:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[7]);
    }
L_0014ba08:;
    {
        goto L_0014b7e0;
    }
L_0014ba0c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ba10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ba14:;
    {
        cpu->r[14] = 0x0014ba1cu;
    }
L_0014ba18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ba1cu)) return;
    }
L_0014ba1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014ba20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014b6f8;
        }
    }
L_0014ba24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014ba28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ba2c:;
    {
        cpu->r[14] = 0x0014ba34u;
    }
L_0014ba30:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ba34u)) return;
    }
L_0014ba34:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_0014ba38:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0014ba3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014ba40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000au;
        }
    }
L_0014ba44:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x228u, cpu->r[3]);
        }
    }
L_0014ba48:;
    {
        goto L_0014b6f8;
    }
L_0014ba4c:;
    {
        wr32(cpu->r[4] + + 0x208u, cpu->r[3]);
    }
L_0014ba50:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_0014ba54:;
    {
        wr32(cpu->r[4] + + 0x204u, cpu->r[9]);
    }
L_0014ba58:;
    {
        wr32(cpu->r[4] + + 0x20cu, cpu->r[7]);
    }
L_0014ba5c:;
    {
        wr32(cpu->r[4] + + 0x21cu, cpu->r[8]);
    }
L_0014ba60:;
    {
        wr32(cpu->r[4] + + 0x220u, cpu->r[10]);
    }
L_0014ba64:;
    {
        wr32(cpu->r[4] + + 0x224u, cpu->r[11]);
    }
L_0014ba68:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x228u, cpu->r[3]);
        }
    }
L_0014ba6c:;
    {
        goto L_0014b7e8;
    }
L_0014ba70:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x208u);
    }
L_0014ba74:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x204u);
    }
L_0014ba78:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x21cu);
    }
L_0014ba7c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x220u);
    }
L_0014ba80:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[6], cpu->r[14], 1, 0);
    }
L_0014ba84:;
    {
        wr32(cpu->r[4] + + 0x210u, cpu->r[14]);
    }
L_0014ba88:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_0014ba8c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x224u);
    }
L_0014ba90:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20cu);
    }
L_0014ba94:;
    {
        wr32(cpu->r[4] + + 0x214u, cpu->r[0]);
    }
L_0014ba98:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_0014ba9c:;
    {
        wr32(cpu->r[4] + + 0x218u, cpu->r[1]);
    }
L_0014baa0:;
    {
        goto L_0014b7c0;
    }
L_0014baa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x200u);
    }
L_0014baa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014baac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014b784;
        }
    }
L_0014bab0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000004u, 1, 1);
    }
L_0014bab4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bbb0;
        }
    }
L_0014bab8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014babc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014bac0:;
    {
        cpu->r[14] = 0x0014bac8u;
    }
L_0014bac4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bac8u)) return;
    }
L_0014bac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bacc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bbb0;
        }
    }
L_0014bad0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014bad4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014bad8:;
    {
        cpu->r[14] = 0x0014bae0u;
    }
L_0014badc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bae0u)) return;
    }
L_0014bae0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014bae4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x5c8u);
    }
L_0014bae8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014baec:;
    {
        cpu->r[14] = 0x0014baf4u;
    }
L_0014baf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014baf4u)) return;
    }
L_0014baf4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[7]; cpu->r[7] = v;
    }
L_0014baf8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5d0u);
    }
L_0014bafc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[7]; cpu->r[0] = v;
    }
L_0014bb00:;
    {
        cpu->r[14] = 0x0014bb04u; fn_0017fa74(cpu);
    }
L_0014bb04:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_0014bb08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_0014bb0c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0014bb10:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0014bb14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014bb18:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0014bb1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0014bb20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0014bb24:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0014bb28:;
    {
        cpu->r[14] = 0x0014bb30u;
    }
L_0014bb2c:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bb30u)) return;
    }
L_0014bb30:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0014bb34:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x114u);
    }
L_0014bb38:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
    }
L_0014bb3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014bb40:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_0014bb44:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0014bb48:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0014bb4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 0);
    }
L_0014bb50:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0014bb54:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[12]; cpu->r[0] = v;
    }
L_0014bb58:;
    {
        cpu->r[14] = 0x0014bb5cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014bb5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014bb60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014bb64:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x5ccu);
    }
L_0014bb68:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0014bb6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0014bb70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0014bb74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_0014bb78:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_0014bb7c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_0014bb80:;
    {
        cpu->r[14] = 0x0014bb84u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0014bb84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_0014bb88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014bb8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0014bb90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0014bb94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_0014bb98:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0014bb9c:;
    {
        goto L_0014b794;
    }
L_0014bba0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014bba4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014bba8:;
    {
        cpu->r[14] = 0x0014bbacu; fn_001493a4(cpu);
    }
L_0014bbac:;
    {
        goto L_0014b4ec;
    }
L_0014bbb0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0014bbb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0014bbb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014bbbc:;
    {
        cpu->r[14] = 0x0014bbc4u;
    }
L_0014bbc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bbc4u)) return;
    }
L_0014bbc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0014bbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_0014bbcc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014bbd0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014bbe0;
        }
    }
L_0014bbd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_0014bbd8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014bbdc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0014bbe0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_0014bbe4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0014bbe8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x114u);
    }
L_0014bbec:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[2]);
    }
L_0014bbf0:;
    {
        goto L_0014b794;
    }
}

/* _ZN11CGameCameraC2Ev @ 0014bbfc (arm) */
void fn_0014bbfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014bbfc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014bc00:;
    {
        cpu->r[5] = rd32(0x0014bc08u + + 0x108u);
    }
L_0014bc04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014bc08:;
    {
        cpu->r[14] = 0x0014bc0cu; fn_000b5dc8(cpu);
    }
L_0014bc0c:;
    {
        cpu->r[2] = rd32(0x0014bc14u + + 0x100u);
    }
L_0014bc10:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014bc18u, cpu->r[5], 0, 0);
    }
L_0014bc14:;
    {
        cpu->r[3] = rd32(0x0014bc1cu + + 0xfcu);
    }
L_0014bc18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014bc20u + + 0xecu);
    }
L_0014bc1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc20:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc24:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0014bc28:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014bc30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc34:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc38:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc3c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0014bc40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014bc44:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014bc48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014bc4c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014bc50:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[3]);
    }
L_0014bc54:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0014bc58:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_0014bc5c:;
    {
        wr32(cpu->r[4] + + 0x160u, cpu->r[2]);
    }
L_0014bc60:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0014bc64:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_0014bc68:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[3]);
    }
L_0014bc6c:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_0014bc70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bce4;
        }
    }
L_0014bc74:;
    {
        cpu->r[7] = rd32(0x0014bc7cu + + 0xa0u);
    }
L_0014bc78:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014bc7c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0014bc80:;
    {
        cpu->r[14] = 0x0014bc84u; fn_00093f78(cpu);
    }
L_0014bc84:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0014bc88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014bc90u + + 0x7cu);
    }
L_0014bc8c:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[3]);
    }
L_0014bc90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bc94:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_0014bc98:;
    {
        wr32(cpu->r[4] + + 0x178u, cpu->r[5]);
    }
L_0014bc9c:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[3]);
    }
L_0014bca0:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[5]);
    }
L_0014bca4:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[5]);
    }
L_0014bca8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0014bcac:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[0]);
    }
L_0014bcb0:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[2]);
    }
L_0014bcb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014bcb8:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_0014bcbc:;
    {
        wr32(cpu->r[4] + + 0x230u, cpu->r[2]);
    }
L_0014bcc0:;
    {
        cpu->r[14] = 0x0014bcc4u; fn_00148a38(cpu);
    }
L_0014bcc4:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_0014bcc8:;
    {
        wr32(cpu->r[4] + + 0x1fcu, cpu->r[5]);
    }
L_0014bccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014bcd0:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_0014bcd4:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_0014bcd8:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[5]);
    }
L_0014bcdc:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[5]);
    }
L_0014bce0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bce4u)) return;
    }
L_0014bce4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014bce8:;
    {
        cpu->r[14] = 0x0014bcecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014bcec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bcf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bc74;
        }
    }
L_0014bcf4:;
    {
        cpu->r[7] = rd32(0x0014bcfcu + + 0x20u);
    }
L_0014bcf8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014bcfc:;
    {
        cpu->r[14] = 0x0014bd00u; fn_00094228(cpu);
    }
L_0014bd00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014bd04:;
    {
        cpu->r[14] = 0x0014bd08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014bd08:;
    {
        goto L_0014bc78;
    }
}

/* _ZN11CGameCameraC1Ev @ 0014bd20 (arm) */
void fn_0014bd20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014bd20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014bd24:;
    {
        cpu->r[5] = rd32(0x0014bd2cu + + 0x108u);
    }
L_0014bd28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014bd2c:;
    {
        cpu->r[14] = 0x0014bd30u; fn_000b5dc8(cpu);
    }
L_0014bd30:;
    {
        cpu->r[2] = rd32(0x0014bd38u + + 0x100u);
    }
L_0014bd34:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014bd3cu, cpu->r[5], 0, 0);
    }
L_0014bd38:;
    {
        cpu->r[3] = rd32(0x0014bd40u + + 0xfcu);
    }
L_0014bd3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014bd44u + + 0xecu);
    }
L_0014bd40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd48:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0014bd4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014bd54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bd60:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0014bd64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014bd68:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014bd6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014bd70:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014bd74:;
    {
        wr32(cpu->r[4] + + 0x120u, cpu->r[3]);
    }
L_0014bd78:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0014bd7c:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_0014bd80:;
    {
        wr32(cpu->r[4] + + 0x160u, cpu->r[2]);
    }
L_0014bd84:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0014bd88:;
    {
        wr32(cpu->r[4] + + 0x114u, cpu->r[3]);
    }
L_0014bd8c:;
    {
        wr32(cpu->r[4] + + 0x118u, cpu->r[3]);
    }
L_0014bd90:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_0014bd94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014be08;
        }
    }
L_0014bd98:;
    {
        cpu->r[7] = rd32(0x0014bda0u + + 0xa0u);
    }
L_0014bd9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014bda0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0014bda4:;
    {
        cpu->r[14] = 0x0014bda8u; fn_00093f78(cpu);
    }
L_0014bda8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0014bdac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014bdb4u + + 0x7cu);
    }
L_0014bdb0:;
    {
        wr32(cpu->r[4] + + 0x1f0u, cpu->r[3]);
    }
L_0014bdb4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014bdb8:;
    {
        wr32(cpu->r[4] + + 0x168u, cpu->r[5]);
    }
L_0014bdbc:;
    {
        wr32(cpu->r[4] + + 0x178u, cpu->r[5]);
    }
L_0014bdc0:;
    {
        wr32(cpu->r[4] + + 0x158u, cpu->r[3]);
    }
L_0014bdc4:;
    {
        wr32(cpu->r[4] + + 0x1f4u, cpu->r[5]);
    }
L_0014bdc8:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[5]);
    }
L_0014bdcc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0014bdd0:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[0]);
    }
L_0014bdd4:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[2]);
    }
L_0014bdd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014bddc:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_0014bde0:;
    {
        wr32(cpu->r[4] + + 0x230u, cpu->r[2]);
    }
L_0014bde4:;
    {
        cpu->r[14] = 0x0014bde8u; fn_00148a38(cpu);
    }
L_0014bde8:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[5]);
    }
L_0014bdec:;
    {
        wr32(cpu->r[4] + + 0x1fcu, cpu->r[5]);
    }
L_0014bdf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014bdf4:;
    {
        wr32(cpu->r[4] + + 0x200u, cpu->r[5]);
    }
L_0014bdf8:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_0014bdfc:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[5]);
    }
L_0014be00:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[5]);
    }
L_0014be04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014be08u)) return;
    }
L_0014be08:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014be0c:;
    {
        cpu->r[14] = 0x0014be10u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014be10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014be14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bd98;
        }
    }
L_0014be18:;
    {
        cpu->r[7] = rd32(0x0014be20u + + 0x20u);
    }
L_0014be1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014be20:;
    {
        cpu->r[14] = 0x0014be24u; fn_00094228(cpu);
    }
L_0014be24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014be28:;
    {
        cpu->r[14] = 0x0014be2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014be2c:;
    {
        goto L_0014bd9c;
    }
}

/* _ZN11CGameCamera15RestoreBaseViewEv @ 0014be44 (arm) */
void fn_0014be44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014be44:;
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
L_0014be48:;
    {
        cpu->r[5] = rd32(0x0014be50u + + 0x168u);
    }
L_0014be4c:;
    {
        cpu->r[7] = rd32(0x0014be54u + + 0x168u);
    }
L_0014be50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014be54:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014be5cu, cpu->r[5], 0, 0);
    }
L_0014be58:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014be5c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0014be60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014be64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bef0;
        }
    }
L_0014be68:;
    {
        cpu->r[6] = rd32(0x0014be70u + + 0x150u);
    }
L_0014be6c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014be70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014be74:;
    {
        cpu->r[14] = 0x0014be78u; fn_00093f78(cpu);
    }
L_0014be78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_0014be7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014bf28;
        }
    }
L_0014be80:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014be84:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0014be88:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014be8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bf94;
        }
    }
L_0014be90:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014be94:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0014be98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014be9c:;
    {
        cpu->r[14] = 0x0014bea0u; fn_00093f70(cpu);
    }
L_0014bea0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014bea4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0014bea8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014beac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bf70;
        }
    }
L_0014beb0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014beb4:;
    {
        cpu->r[14] = 0x0014beb8u; fn_00093f78(cpu);
    }
L_0014beb8:;
    {
        wr32(cpu->r[4] + + 0x164u, cpu->r[0]);
    }
L_0014bebc:;
    {
        cpu->r[3] = rd32(0x0014bec4u + + 0x100u);
    }
L_0014bec0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014bec4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0014bec8:;
    {
        cpu->r[14] = 0x0014beccu; fn_00096b6c(cpu);
    }
L_0014becc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bee4;
        }
    }
L_0014bed4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0014bed8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014bedc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x164u);
    }
L_0014bee0:;
    {
        cpu->r[14] = 0x0014bee4u; fn_00099454(cpu);
    }
L_0014bee4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x164u);
    }
L_0014bee8:;
    {
        wr32(cpu->r[4] + + 0x15cu, cpu->r[3]);
    }
L_0014beec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014bef0u)) return;
    }
L_0014bef0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bef4:;
    {
        cpu->r[14] = 0x0014bef8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014bef8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014befc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014be68;
        }
    }
L_0014bf00:;
    {
        cpu->r[6] = rd32(0x0014bf08u + + 0xb8u);
    }
L_0014bf04:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014bf08:;
    {
        cpu->r[14] = 0x0014bf0cu; fn_00094228(cpu);
    }
L_0014bf0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bf10:;
    {
        cpu->r[14] = 0x0014bf14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014bf14:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014bf18:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bf1c:;
    {
        cpu->r[14] = 0x0014bf20u; fn_00093f78(cpu);
    }
L_0014bf20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_0014bf24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014be80;
        }
    }
L_0014bf28:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014bf2c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0014bf30:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014bf34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bf4c;
        }
    }
L_0014bf38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014bf3c:;
    {
        cpu->r[14] = 0x0014bf40u; fn_00093f78(cpu);
    }
L_0014bf40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0014bf44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014bebc;
        }
    }
L_0014bf48:;
    {
        goto L_0014be80;
    }
L_0014bf4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014bf50:;
    {
        cpu->r[14] = 0x0014bf54u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014bf54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bf58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014bf38;
        }
    }
L_0014bf5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bf60:;
    {
        cpu->r[14] = 0x0014bf64u; fn_00094228(cpu);
    }
L_0014bf64:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014bf68:;
    {
        cpu->r[14] = 0x0014bf6cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014bf6c:;
    {
        goto L_0014bf38;
    }
L_0014bf70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014bf74:;
    {
        cpu->r[14] = 0x0014bf78u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014bf78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bf7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014beb0;
        }
    }
L_0014bf80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bf84:;
    {
        cpu->r[14] = 0x0014bf88u; fn_00094228(cpu);
    }
L_0014bf88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014bf8c:;
    {
        cpu->r[14] = 0x0014bf90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014bf90:;
    {
        goto L_0014beb0;
    }
L_0014bf94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bf98:;
    {
        cpu->r[14] = 0x0014bf9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0014bf9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bfa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014be90;
        }
    }
L_0014bfa4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0014bfa8:;
    {
        cpu->r[14] = 0x0014bfacu; fn_00094228(cpu);
    }
L_0014bfac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014bfb0:;
    {
        cpu->r[14] = 0x0014bfb4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0014bfb4:;
    {
        goto L_0014be90;
    }
}

/* _ZN8Particle16Render_BillboardEiP7CMatrix @ 0014bfc8 (arm) */
void fn_0014bfc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014bfc8:;
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
L_0014bfcc:;
    {
        cpu->r[13] -= 56u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
        wr64(cpu->r[13] + 48u, *(uint64_t*)vfp_d(cpu, 14));
    }
L_0014bfd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014bfd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000008cu, 1, 0);
    }
L_0014bfd8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x74u);
    }
L_0014bfdc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014bfe0:;
    {
        cpu->r[14] = 0x0014bfe4u; fn_001515c0(cpu);
    }
L_0014bfe4:;
    {
        cpu->r[5] = rd32(0x0014bfecu + + 0x468u);
    }
L_0014bfe8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014bff0u, cpu->r[5], 0, 0);
    }
L_0014bfec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014bff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014c4c4;
        }
    }
L_0014bff4:;
    {
        cpu->r[3] = rd32(0x0014bffcu + + 0x45cu);
    }
L_0014bff8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0014bffc:;
    {
        cpu->r[1] = rd32(0x0014c004u + + 0x458u);
    }
L_0014c000:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0014c004:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x70u);
    }
L_0014c008:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0014c00c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014c010:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c014:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0014c018:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c01c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c020:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014c024:;
    {
        cpu->r[7] = rd32(cpu->r[0]);
    }
L_0014c028:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3f0u);
    }
L_0014c02c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0014c030:;
    {
        wr32(cpu->r[3] + + 0x3f0u, cpu->r[1]);
    }
L_0014c034:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x26u);
    }
L_0014c038:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_0014c03c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014c040:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_0014c044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014c0c8;
        }
    }
L_0014c048:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014c04c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0014c050:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014c058u + + 0x3f4u);
    }
L_0014c054:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c058:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c05c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c060:;
    {
        cpu->r[14] = 0x0014c064u; fn_0015365c(cpu);
    }
L_0014c064:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_0014c068:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014c070u + + 0x3e0u);
    }
L_0014c06c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x28u);
    }
L_0014c070:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0014c074:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0014c078:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_0014c07c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0014c080:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_0014c084:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_0014c088:;
    {
        vfp_vmul(cpu, 14, 14, 11);
    }
L_0014c08c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_0014c090:;
    {
        vfp_vmla(cpu, 12, 15, 11);
    }
L_0014c094:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_0014c098:;
    {
        vfp_vmla(cpu, 13, 15, 11);
    }
L_0014c09c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_0014c0a0:;
    {
        vfp_vmla(cpu, 14, 15, 11);
    }
L_0014c0a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_0014c0a8:;
    {
        vfp_vadd(cpu, 12, 15, 12);
    }
L_0014c0ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014c0b0:;
    {
        vfp_vadd(cpu, 13, 15, 13);
    }
L_0014c0b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014c0b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014c0bc:;
    {
        vfp_vadd(cpu, 14, 15, 14);
    }
L_0014c0c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c0c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c0c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0014c0cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014c0d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014c0d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_0014c0d8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0014c0e0u + + 0x36cu);
    }
L_0014c0dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c0e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c0e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c0e8:;
    {
        cpu->r[14] = 0x0014c0ecu; fn_001533e4(cpu);
    }
L_0014c0ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014c0f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014c0f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014c0f8:;
    {
        cpu->r[14] = 0x0014c0fcu; fn_0012de90(cpu);
    }
L_0014c0fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014c100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014c4c4;
        }
    }
L_0014c104:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x84u);
    }
L_0014c108:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014c10c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_0014c110:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0xc0u);
    }
L_0014c114:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x48u);
    }
L_0014c118:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014c11c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0014c120:;
    {
        vfp_vsub(cpu, 14, 12, 14);
    }
L_0014c124:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c128:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_0014c12c:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0014c130:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c134:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c138:;
    {
        cpu->r[14] = 0x0014c13cu; fn_00155f80(cpu);
    }
L_0014c13c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_0014c140:;
    {
        vfp_vneg(cpu, 24, 15);
    }
L_0014c144:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c148:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0014c14c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0014c150:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_0014c154:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_0014c158:;
    {
        vfp_vmul(cpu, 17, 15, 15);
    }
L_0014c15c:;
    {
        vfp_vmul(cpu, 23, 24, 14);
    }
L_0014c160:;
    {
        vfp_vnmul(cpu, 21, 22, 14);
    }
L_0014c164:;
    {
        cpu->r[14] = 0x0014c168u; fn_00150894(cpu);
    }
L_0014c168:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0014c16c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_0014c170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014c178u + + 0x2d8u);
    }
L_0014c174:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000078u, 0, 0);
    }
L_0014c178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0014c17c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0014c180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c184:;
    {
        vfp_vsub(cpu, 14, 15, 14);
    }
L_0014c188:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_0014c18c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_0014c190:;
    {
        vfp_vnmul(cpu, 19, 15, 13);
    }
L_0014c194:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_0014c198:;
    {
        vfp_vnmul(cpu, 20, 14, 15);
    }
L_0014c19c:;
    {
        cpu->r[14] = 0x0014c1a0u; fn_00150710(cpu);
    }
L_0014c1a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x74u);
    }
L_0014c1a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014c1a8:;
    {
        cpu->r[14] = 0x0014c1acu; imp_cosf(cpu); /* cosf */
    }
L_0014c1ac:;
    {
        vfp_vmla(cpu, 17, 22, 22);
    }
L_0014c1b0:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_0014c1b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014c1b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0014c1bc:;
    {
        cpu->r[14] = 0x0014c1c0u; imp_sinf(cpu); /* sinf */
    }
L_0014c1c0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_0014c1c4:;
    {
        *vfp_s(cpu,27) = *vfp_s(cpu,6);
    }
L_0014c1c8:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014c1cc:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014c1d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0014c1d4:;
    {
        vfp_vneg(cpu, 9, 20);
    }
L_0014c1d8:;
    {
        vfp_vneg(cpu, 8, 19);
    }
L_0014c1dc:;
    {
        *vfp_s(cpu,26) = *vfp_s(cpu,7);
    }
L_0014c1e0:;
    {
        *vfp_s(cpu,28) = *vfp_s(cpu,25);
    }
L_0014c1e4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014c1e8:;
    {
        vfp_vmul(cpu, 13, 21, 15);
    }
L_0014c1ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c1f4:;
    {
        vfp_vmul(cpu, 11, 24, 15);
    }
L_0014c1f8:;
    {
        vfp_vnmls(cpu, 13, 24, 18);
    }
L_0014c1fc:;
    {
        vfp_vmul(cpu, 14, 23, 15);
    }
L_0014c200:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c204:;
    {
        vfp_vmul(cpu, 12, 17, 15);
    }
L_0014c208:;
    {
        vfp_vmul(cpu, 10, 15, 16);
    }
L_0014c20c:;
    {
        vfp_vmul(cpu, 15, 22, 15);
    }
L_0014c210:;
    {
        vfp_vmla(cpu, 11, 21, 18);
    }
L_0014c214:;
    {
        vfp_vnmls(cpu, 14, 22, 18);
    }
L_0014c218:;
    {
        vfp_vnmls(cpu, 12, 18, 16);
    }
L_0014c21c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c220:;
    {
        vfp_vmla(cpu, 15, 23, 18);
    }
L_0014c224:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014c228:;
    {
        vfp_vmla(cpu, 10, 17, 18);
    }
L_0014c22c:;
    {
        vfp_vmla(cpu, 27, 19, 13);
    }
L_0014c230:;
    {
        vfp_vmul(cpu, 22, 9, 11);
    }
L_0014c234:;
    {
        *vfp_s(cpu,23) = *vfp_s(cpu,6);
    }
L_0014c238:;
    {
        *vfp_s(cpu,24) = *vfp_s(cpu,7);
    }
L_0014c23c:;
    {
        vfp_vmla(cpu, 28, 19, 12);
    }
L_0014c240:;
    {
        vfp_vmla(cpu, 26, 19, 14);
    }
L_0014c244:;
    {
        vfp_vmla(cpu, 25, 8, 12);
    }
L_0014c248:;
    {
        vfp_vmla(cpu, 23, 8, 13);
    }
L_0014c24c:;
    {
        vfp_vmla(cpu, 24, 8, 14);
    }
L_0014c250:;
    {
        vfp_vmul(cpu, 16, 9, 15);
    }
L_0014c254:;
    {
        vfp_vmul(cpu, 19, 20, 15);
    }
L_0014c258:;
    {
        vfp_vmul(cpu, 17, 9, 10);
    }
L_0014c25c:;
    {
        vfp_vmul(cpu, 21, 20, 10);
    }
L_0014c260:;
    {
        vfp_vmul(cpu, 18, 20, 11);
    }
L_0014c264:;
    {
        cpu->r[14] = 0x0014c268u; fn_00150bb8(cpu);
    }
L_0014c268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c26c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_0014c270:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_0014c274:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0014c278:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_0014c27c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0014c280:;
    {
        cpu->r[14] = 0x0014c284u; fn_001509d0(cpu);
    }
L_0014c284:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x74u);
    }
L_0014c288:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_0014c28c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_0014c290:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x70u);
    }
L_0014c294:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_0014c298:;
    {
        cpu->r[5] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c29c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014c2a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014c2a4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_0014c2a8:;
    {
        vfp_vadd(cpu, 13, 22, 27);
    }
L_0014c2ac:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 13));
        cpu->r[0] = ea + 4u;
    }
L_0014c2b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0014c2b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0014c2b8:;
    {
        vfp_vadd(cpu, 12, 16, 26);
    }
L_0014c2bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0014c2c0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0014c2c4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0014c2c8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
    }
L_0014c2cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0014c2d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c2d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014c2d8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_0014c2dc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0014c2e0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_0014c2e4:;
    {
        wr16(cpu->r[2] + cpu->r[5], cpu->r[1]);
    }
L_0014c2e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c2ec:;
    {
        cpu->r[7] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c2f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0014c2f4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_0014c2f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0014c2fc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[8]);
    }
L_0014c300:;
    {
        vfp_vadd(cpu, 13, 17, 28);
    }
L_0014c304:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c308:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[8]);
    }
L_0014c30c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x70u);
    }
L_0014c310:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c314:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[11]);
    }
L_0014c318:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014c31c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014c320:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0014c324:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0014c328:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c32c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c330:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0014c334:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0014c338:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c33c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_0014c340:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014c344:;
    {
        wr16(cpu->r[2] + cpu->r[8], cpu->r[5]);
    }
L_0014c348:;
    {
        vfp_vadd(cpu, 22, 22, 23);
    }
L_0014c34c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c350:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_0014c354:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c358:;
    {
        cpu->r[11] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c35c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c360:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_0014c364:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0014c368:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_0014c36c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[5]);
    }
L_0014c370:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[11]);
    }
L_0014c374:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c378:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_0014c37c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_0014c380:;
    {
        cpu->r[11] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_0014c384:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0014c388:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0014c38c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[11] = v;
    }
L_0014c390:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_0014c394:;
    {
        vfp_vadd(cpu, 16, 16, 24);
    }
L_0014c398:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_0014c39c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_0014c3a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0014c3a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0014c3a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0014c3ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0014c3b0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0014c3b4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[11]);
    }
L_0014c3b8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014c3bc:;
    {
        vfp_vadd(cpu, 17, 17, 25);
    }
L_0014c3c0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c3c4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014c3c8:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0014c3cc:;
    {
        vfp_vadd(cpu, 23, 18, 23);
    }
L_0014c3d0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c3d4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x70u);
    }
L_0014c3d8:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c3dc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014c3e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_0014c3e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_0014c3e8:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[10]);
    }
L_0014c3ec:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c3f0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014c3f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0014c3f8:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[10]);
    }
L_0014c3fc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014c400:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 23);
    }
L_0014c404:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x70u);
    }
L_0014c408:;
    {
        wr16(cpu->r[2] + cpu->r[10], cpu->r[8]);
    }
L_0014c40c:;
    {
        vfp_vadd(cpu, 24, 19, 24);
    }
L_0014c410:;
    {
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c414:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[9]);
    }
L_0014c418:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0014c41c:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[10]);
    }
L_0014c420:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c424:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_0014c428:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c42c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[9]);
    }
L_0014c430:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0014c434:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014c438:;
    {
        wr16(cpu->r[2] + cpu->r[10], cpu->r[7]);
    }
L_0014c43c:;
    {
        vfp_vadd(cpu, 25, 21, 25);
    }
L_0014c440:;
    {
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c444:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_0014c448:;
    {
        goto L_0014c460;
    }
L_0014c460:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0014c464:;
    {
        cpu->r[10] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_0014c468:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0014c46c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0014c470:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0014c474:;
    {
        vfp_vadd(cpu, 18, 18, 27);
    }
L_0014c478:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_0014c47c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 1u, &shc); cpu->r[9] = v;
    }
L_0014c480:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014c484:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c488:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014c48c:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c490:;
    {
        wr16(cpu->r[2] + cpu->r[10], cpu->r[1]);
    }
L_0014c494:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_0014c498:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_0014c49c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c4a0:;
    {
        wr16(cpu->r[2] + cpu->r[9], cpu->r[8]);
    }
L_0014c4a4:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0014c4a8:;
    {
        vfp_vadd(cpu, 19, 19, 26);
    }
L_0014c4ac:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0014c4b0:;
    {
        vfp_vadd(cpu, 21, 21, 28);
    }
L_0014c4b4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0014c4b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_0014c4bc:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c4c0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c4c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0014c4c8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        *(uint64_t*)vfp_d(cpu, 14) = rd64(cpu->r[13] + 48u);
        cpu->r[13] += 56u;
    }
L_0014c4cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014c4d0u)) return;
    }
}

/* _ZN8Particle18Render_DirectionalEiP7CMatrix @ 0014c4d0 (arm) */
void fn_0014c4d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014c4d0:;
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
L_0014c4d4:;
    {
        cpu->r[13] -= 56u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
        wr64(cpu->r[13] + 48u, *(uint64_t*)vfp_d(cpu, 14));
    }
L_0014c4d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014c4dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_0014c4e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x74u);
    }
L_0014c4e4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014c4e8:;
    {
        cpu->r[14] = 0x0014c4ecu; fn_001515c0(cpu);
    }
L_0014c4ec:;
    {
        cpu->r[5] = rd32(0x0014c4f4u + + 0x4e8u);
    }
L_0014c4f0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014c4f8u, cpu->r[5], 0, 0);
    }
L_0014c4f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014c4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014c9f0;
        }
    }
L_0014c4fc:;
    {
        cpu->r[2] = rd32(0x0014c504u + + 0x4dcu);
    }
L_0014c500:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0014c504:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_0014c508:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0014c50c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0014c510:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0014c514:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x26u);
    }
L_0014c518:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0014c51c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014c520:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0014c524:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014c528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014c9fc;
        }
    }
L_0014c52c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0014c530:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0014c534:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014c538:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c53c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0014c540:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c544:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_0014c548:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c54c:;
    {
        cpu->r[14] = 0x0014c550u; fn_00155f80(cpu);
    }
L_0014c550:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x48u);
    }
L_0014c554:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x84u);
    }
L_0014c558:;
    {
        vfp_vsub(cpu, 13, 13, 20);
    }
L_0014c55c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xc0u);
    }
L_0014c560:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0014c564:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0014c568:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014c56c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0014c570:;
    {
        vfp_vsub(cpu, 14, 14, 21);
    }
L_0014c574:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c578:;
    {
        vfp_vsub(cpu, 15, 15, 19);
    }
L_0014c57c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c580:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c584:;
    {
        cpu->r[14] = 0x0014c588u; fn_00155f80(cpu);
    }
L_0014c588:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0014c58c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014c590:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014c594:;
    {
        *vfp_s(cpu,28) = *vfp_s(cpu,20);
    }
L_0014c598:;
    {
        cpu->r[14] = 0x0014c59cu; fn_00155a0c(cpu);
    }
L_0014c59c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014c5a0:;
    {
        cpu->r[14] = 0x0014c5a4u; fn_00155f80(cpu);
    }
L_0014c5a4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0014c5a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014c5ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014c5b0:;
    {
        cpu->r[14] = 0x0014c5b4u; fn_00155a0c(cpu);
    }
L_0014c5b4:;
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
L_0014c5b8:;
    {
        *vfp_s(cpu,29) = *vfp_s(cpu,19);
    }
L_0014c5bc:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0014c5c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c5c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_0014c5c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_0014c5cc:;
    {
        cpu->r[14] = 0x0014c5d0u; fn_00150894(cpu);
    }
L_0014c5d0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_0014c5d4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0014c5d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014c5e0u + + 0x3f4u);
    }
L_0014c5dc:;
    {
        vfp_vsub(cpu, 13, 14, 13);
    }
L_0014c5e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014c5e8u + + 0x3f0u);
    }
L_0014c5e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_0014c5e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_0014c5ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_0014c5f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c5f4:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_0014c5f8:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_0014c5fc:;
    {
        vfp_vsub(cpu, 14, 14, 12);
    }
L_0014c600:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014c604:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014c608:;
    {
        vfp_vmul(cpu, 18, 14, 24);
    }
L_0014c60c:;
    {
        vfp_vmul(cpu, 17, 15, 23);
    }
L_0014c610:;
    {
        cpu->r[14] = 0x0014c614u; fn_00150710(cpu);
    }
L_0014c614:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0014c618:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014c61c:;
    {
        cpu->r[14] = 0x0014c620u; imp_cosf(cpu); /* cosf */
    }
L_0014c620:;
    {
        vfp_vsub(cpu, 23, 23, 17);
    }
L_0014c624:;
    {
        *vfp_s(cpu,27) = *vfp_s(cpu,21);
    }
L_0014c628:;
    {
        vfp_vsub(cpu, 24, 24, 18);
    }
L_0014c62c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0014c630:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0014c634:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c638:;
    {
        cpu->r[14] = 0x0014c63cu; imp_sinf(cpu); /* sinf */
    }
L_0014c63c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_0014c640:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0014c644:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014c648:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_0014c64c:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014c650:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_0014c654:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014c658:;
    {
        vfp_vmul(cpu, 14, 15, 11);
    }
L_0014c65c:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[0]);
    }
L_0014c660:;
    {
        vfp_vmul(cpu, 13, 15, 9);
    }
L_0014c664:;
    {
        vfp_vnmls(cpu, 14, 16, 8);
    }
L_0014c668:;
    {
        vfp_vmul(cpu, 12, 15, 10);
    }
L_0014c66c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c670:;
    {
        vfp_vnmls(cpu, 13, 16, 6);
    }
L_0014c674:;
    {
        vfp_vnmls(cpu, 12, 16, 7);
    }
L_0014c678:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c67c:;
    {
        vfp_vmul(cpu, 14, 15, 6);
    }
L_0014c680:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014c684:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0014c688:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0014c68c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014c690:;
    {
        *vfp_s(cpu, 25) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014c694:;
    {
        *vfp_s(cpu, 26) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_0014c698:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_0014c69c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c6a0:;
    {
        vfp_vmul(cpu, 13, 15, 7);
    }
L_0014c6a4:;
    {
        vfp_vmul(cpu, 15, 15, 8);
    }
L_0014c6a8:;
    {
        vfp_vmla(cpu, 14, 16, 9);
    }
L_0014c6ac:;
    {
        vfp_vmla(cpu, 13, 16, 10);
    }
L_0014c6b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c6b4:;
    {
        vfp_vmla(cpu, 15, 16, 11);
    }
L_0014c6b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c6bc:;
    {
        vfp_vmla(cpu, 21, 23, 12);
    }
L_0014c6c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c6c4:;
    {
        vfp_vmla(cpu, 19, 23, 26);
    }
L_0014c6c8:;
    {
        vfp_vmla(cpu, 20, 23, 25);
    }
L_0014c6cc:;
    {
        vfp_vmla(cpu, 28, 17, 25);
    }
L_0014c6d0:;
    {
        vfp_vmul(cpu, 22, 24, 14);
    }
L_0014c6d4:;
    {
        vfp_vmla(cpu, 27, 17, 12);
    }
L_0014c6d8:;
    {
        vfp_vmul(cpu, 16, 24, 15);
    }
L_0014c6dc:;
    {
        vfp_vmla(cpu, 29, 17, 26);
    }
L_0014c6e0:;
    {
        *vfp_s(cpu,25) = *vfp_s(cpu,20);
    }
L_0014c6e4:;
    {
        vfp_vmul(cpu, 17, 18, 15);
    }
L_0014c6e8:;
    {
        vfp_vmul(cpu, 20, 18, 14);
    }
L_0014c6ec:;
    {
        *vfp_s(cpu,26) = *vfp_s(cpu,19);
    }
L_0014c6f0:;
    {
        *vfp_s(cpu,23) = *vfp_s(cpu,21);
    }
L_0014c6f4:;
    {
        vfp_vmul(cpu, 19, 24, 13);
    }
L_0014c6f8:;
    {
        vfp_vmul(cpu, 21, 18, 13);
    }
L_0014c6fc:;
    {
        cpu->r[14] = 0x0014c700u; fn_00150bb8(cpu);
    }
L_0014c700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c704:;
    {
        cpu->r[14] = 0x0014c708u; fn_00150d0c(cpu);
    }
L_0014c708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014c70c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0014c710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000090u, 0, 0);
    }
L_0014c714:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0014c718:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0014c71c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0014c720:;
    {
        cpu->r[14] = 0x0014c724u; fn_001509d0(cpu);
    }
L_0014c724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x74u);
    }
L_0014c728:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_0014c72c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_0014c730:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014c734:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x8u);
    }
L_0014c738:;
    {
        cpu->r[4] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c73c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014c740:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014c744:;
    {
        vfp_vadd(cpu, 13, 22, 28);
    }
L_0014c748:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[4] = v;
    }
L_0014c74c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 13));
        cpu->r[1] = ea + 4u;
    }
L_0014c750:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0014c754:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0014c758:;
    {
        vfp_vadd(cpu, 12, 16, 27);
    }
L_0014c75c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0014c760:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014c764:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0014c768:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[8]);
    }
L_0014c76c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0014c770:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c774:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0014c778:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[8]);
    }
L_0014c77c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0014c780:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c784:;
    {
        wr16(cpu->r[2] + cpu->r[4], cpu->r[7]);
    }
L_0014c788:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c78c:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[8]);
    }
L_0014c790:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_0014c794:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[11]);
    }
L_0014c798:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0014c79c:;
    {
        cpu->r[7] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c7a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c7a4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[8]);
    }
L_0014c7a8:;
    {
        vfp_vadd(cpu, 13, 19, 29);
    }
L_0014c7ac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014c7b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c7b4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_0014c7b8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014c7bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0014c7c0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0014c7c4:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0014c7c8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c7cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c7d0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_0014c7d4:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0014c7d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c7dc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_0014c7e0:;
    {
        wr16(cpu->r[2] + cpu->r[8], cpu->r[4]);
    }
L_0014c7e4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014c7e8:;
    {
        cpu->r[5] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c7ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c7f0:;
    {
        vfp_vadd(cpu, 22, 22, 25);
    }
L_0014c7f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0014c7f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0014c7fc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_0014c800:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0014c804:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_0014c808:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014c80c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[5]);
    }
L_0014c810:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0014c814:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_0014c818:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0014c81c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_0014c820:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_0014c824:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c828:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0014c82c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c830:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0014c834:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0014c838:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0014c83c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0014c840:;
    {
        vfp_vadd(cpu, 16, 16, 23);
    }
L_0014c844:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014c848:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0014c84c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[11]);
    }
L_0014c850:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c854:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x94u);
    }
L_0014c858:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_0014c85c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 22);
    }
L_0014c860:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0014c864:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0014c868:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0014c86c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_0014c870:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0014c874:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0014c878:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_0014c87c:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[5]);
    }
L_0014c880:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_0014c884:;
    {
        vfp_vadd(cpu, 19, 19, 26);
    }
L_0014c888:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014c88c:;
    {
        vfp_vadd(cpu, 25, 20, 25);
    }
L_0014c890:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_0014c894:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014c898:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c89c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x30u);
    }
L_0014c8a0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c8a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_0014c8a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_0014c8ac:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[10]);
    }
L_0014c8b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014c8b4:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c8b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0014c8bc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[10]);
    }
L_0014c8c0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014c8c4:;
    {
        vfp_vadd(cpu, 23, 17, 23);
    }
L_0014c8c8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 25);
    }
L_0014c8cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_0014c8d0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[9]);
    }
L_0014c8d4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c8d8:;
    {
        wr16(cpu->r[2] + cpu->r[5], cpu->r[8]);
    }
L_0014c8dc:;
    {
        cpu->r[10] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c8e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0014c8e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0014c8e8:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[10]);
    }
L_0014c8ec:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[10]);
    }
L_0014c8f0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014c8f4:;
    {
        vfp_vadd(cpu, 26, 21, 26);
    }
L_0014c8f8:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[10]);
    }
L_0014c8fc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 23);
    }
L_0014c900:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[10] = v;
    }
L_0014c904:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x98u);
    }
L_0014c908:;
    {
        wr16(cpu->r[2] + cpu->r[10], cpu->r[7]);
    }
L_0014c90c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0014c910:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[9]);
    }
L_0014c914:;
    {
        cpu->r[6] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c918:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x38u);
    }
L_0014c91c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0014c920:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_0014c924:;
    {
        vfp_vadd(cpu, 20, 20, 28);
    }
L_0014c928:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 26);
    }
L_0014c92c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c930:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014c934:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c938:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014c93c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_0014c940:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_0014c944:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014c948:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0014c94c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_0014c950:;
    {
        vfp_vadd(cpu, 17, 17, 27);
    }
L_0014c954:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0014c958:;
    {
        vfp_vadd(cpu, 21, 21, 29);
    }
L_0014c95c:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0014c960:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_0014c964:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c968:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c96c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_0014c970:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_0014c974:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_0014c978:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014c97c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 20);
    }
L_0014c980:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0014c984:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014c988:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_0014c98c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014c990:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014c994:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014c998:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014c99c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0014c9a0:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
    }
L_0014c9a4:;
    {
        wr16(cpu->r[2] + cpu->r[6], cpu->r[1]);
    }
L_0014c9a8:;
    {
        cpu->r[0] = rd16(cpu->r[3] + + 0x4u);
    }
L_0014c9ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0014c9b0:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0014c9b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0014c9b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0014c9bc:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0014c9c0:;
    {
        wr16(cpu->r[2] + cpu->r[0], cpu->r[4]);
    }
L_0014c9c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0014c9c8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0014c9cc:;
    {
        wr16(cpu->r[2] + cpu->r[1], cpu->r[8]);
    }
L_0014c9d0:;
    {
        goto L_0014c9ec;
    }
L_0014c9ec:;
    {
        wr16(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_0014c9f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_0014c9f4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        *(uint64_t*)vfp_d(cpu, 14) = rd64(cpu->r[13] + 48u);
        cpu->r[13] += 56u;
    }
L_0014c9f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014c9fcu)) return;
    }
L_0014c9fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014ca00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0014ca04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014ca0cu + - 0x28u);
    }
L_0014ca08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ca0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ca10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ca14:;
    {
        cpu->r[14] = 0x0014ca18u; fn_0015365c(cpu);
    }
L_0014ca18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_0014ca1c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014ca24u + - 0x3cu);
    }
L_0014ca20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x28u);
    }
L_0014ca24:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_0014ca28:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_0014ca2c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0014ca30:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0014ca34:;
    {
        vfp_vmul(cpu, 12, 13, 12);
    }
L_0014ca38:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0014ca3c:;
    {
        vfp_vmul(cpu, 13, 13, 11);
    }
L_0014ca40:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_0014ca44:;
    {
        vfp_vmla(cpu, 14, 15, 11);
    }
L_0014ca48:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_0014ca4c:;
    {
        vfp_vmla(cpu, 12, 15, 11);
    }
L_0014ca50:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_0014ca54:;
    {
        vfp_vmla(cpu, 13, 15, 11);
    }
L_0014ca58:;
    {
        vfp_vadd(cpu, 20, 20, 12);
    }
L_0014ca5c:;
    {
        vfp_vadd(cpu, 21, 21, 13);
    }
L_0014ca60:;
    {
        vfp_vadd(cpu, 19, 19, 14);
    }
L_0014ca64:;
    {
        goto L_0014c52c;
    }
}

/* _ZN7Emitter11GetFrmCountEi @ 0014ca68 (arm) */
void fn_0014ca68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0014ca6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014ca70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter7GetTypeEv @ 0014ca74 (arm) */
void fn_0014ca74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca74:;
    {
        cpu->r[0] = 0x0000005fu;
    }
L_0014ca78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter17GetMeshGroupCountEi @ 0014ca7c (arm) */
void fn_0014ca7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca7c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0014ca80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter18GetMeshGroupShaderEii @ 0014ca84 (arm) */
void fn_0014ca84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca84:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014ca88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter17GetMeshGroupVertsEii @ 0014ca8c (arm) */
void fn_0014ca8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca8c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014ca90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter17GetMeshGroupFacesEii @ 0014ca94 (arm) */
void fn_0014ca94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca94:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014ca98:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter18UpdateEmitterFrameERiS0_ @ 0014ca9c (arm) */
void fn_0014ca9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ca9c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0014caa0:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0014caa4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014caa8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0014caac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0014cab0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0014cab4:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x20u);
    }
L_0014cab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014cabc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
        }
    }
L_0014cac0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1], cpu->r[3]);
        }
    }
L_0014cac4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[2]);
        }
    }
L_0014cac8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0014cacc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0014cad0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2], cpu->r[3]);
        }
    }
L_0014cad4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7Emitter19GenParticleLifetimeEv @ 0014cad8 (arm) */
void fn_0014cad8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cad8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014cadc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014cae0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014cae4:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x48u);
    }
L_0014cae8:;
    {
        cpu->r[14] = 0x0014caecu; fn_000964c8(cpu);
    }
L_0014caec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014caf4u + + 0x20u);
    }
L_0014caf0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x44u);
    }
L_0014caf4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014caf8:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0014cafc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014cb04u + + 0x14u);
    }
L_0014cb00:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0014cb04:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0014cb08:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014cb0c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014cb10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cb14u)) return;
    }
}

/* _ZN7Emitter15GetEmitIntervalEv @ 0014cb1c (arm) */
void fn_0014cb1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cb1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014cb20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014cb24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014cb28:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x38u);
    }
L_0014cb2c:;
    {
        cpu->r[14] = 0x0014cb30u; fn_000964c8(cpu);
    }
L_0014cb30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014cb38u + + 0x20u);
    }
L_0014cb34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_0014cb38:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0014cb3c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0014cb40:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014cb48u + + 0x14u);
    }
L_0014cb44:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_0014cb48:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0014cb4c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014cb50:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014cb54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cb58u)) return;
    }
}

/* _ZN7Emitter10GenBaseRotERfS0_S0_ @ 0014cb60 (arm) */
void fn_0014cb60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cb60:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014cb64:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014cb68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014cb6c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x50u);
    }
L_0014cb70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0014cb74:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014cb78:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014cb7c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0014cb80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0014cb84:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_0014cb88:;
    {
        cpu->r[14] = 0x0014cb8cu; fn_00096514(cpu);
    }
L_0014cb8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014cb90:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0014cb94:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014cb98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_0014cb9c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x54u);
    }
L_0014cba0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0014cba4:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_0014cba8:;
    {
        cpu->r[14] = 0x0014cbacu; fn_00096514(cpu);
    }
L_0014cbac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014cbb0:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0014cbb4:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014cbb8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0014cbbc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x58u);
    }
L_0014cbc0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0014cbc4:;
    {
        uint32_t v = cpu->r[0] ^ 0x80000000u; cpu->r[0] = v;
    }
L_0014cbc8:;
    {
        cpu->r[14] = 0x0014cbccu; fn_00096514(cpu);
    }
L_0014cbcc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014cbd0:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0014cbd4:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014cbd8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014cbdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cbe0u)) return;
    }
}

/* _ZN7Emitter17GetRandomDirSpeedEf @ 0014cbe0 (arm) */
void fn_0014cbe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cbe0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x40u);
    }
L_0014cbe4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014cbe8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0014cbec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014cbf4u + + 0xbcu);
    }
L_0014cbf0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014cbf4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0014cbf8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0014cbfc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014cc00:;
    {
        vfp_sync_flags(cpu);
    }
L_0014cc04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014cc08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014cc0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014cc10:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0014cc14:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0014cc18:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0014cc1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cc98;
        }
    }
L_0014cc20:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0014cc28u + + 0x80u);
    }
L_0014cc24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014cc28:;
    {
        cpu->r[4] = 0x3f800000u;
    }
L_0014cc2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014cc30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014cc34:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbf80u << 16);
    }
L_0014cc38:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014cc3c:;
    {
        cpu->r[14] = 0x0014cc40u; fn_001564b0(cpu);
    }
L_0014cc40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014cc44:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_0014cc48:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014cc4c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014cc50:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_0014cc54:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_0014cc58:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_0014cc5c:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,5), *vfp_d(cpu,8));
    }
L_0014cc60:;
    {
        vfp_sync_flags(cpu);
    }
L_0014cc64:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014cc28;
        }
    }
L_0014cc68:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[4];
    }
L_0014cc6c:;
    {
        vfp_vdiv(cpu, 11, 10, 15);
    }
L_0014cc70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x40u);
    }
L_0014cc74:;
    {
        vfp_vmul(cpu, 10, 11, 13);
    }
L_0014cc78:;
    {
        vfp_vmul(cpu, 12, 11, 12);
    }
L_0014cc7c:;
    {
        vfp_vmul(cpu, 13, 11, 14);
    }
L_0014cc80:;
    {
        vfp_vmul(cpu, 12, 15, 12);
    }
L_0014cc84:;
    {
        vfp_vmul(cpu, 14, 15, 10);
    }
L_0014cc88:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014cc8c:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_0014cc90:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014cc94:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014cc98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014cc9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014cca0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014cca4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cca8u)) return;
    }
}

/* _ZN7Emitter12AquireVtxFmtEv @ 0014ccb8 (arm) */
void fn_0014ccb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ccb8:;
    {
        cpu->r[3] = rd32(0x0014ccc0u + + 0x80u);
    }
L_0014ccbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014ccc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014ccc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014ccc8:;
    {
        cpu->r[0] = rd32(0x0014ccd0u + + 0x74u);
    }
L_0014cccc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ccd4u, cpu->r[3], 0, 0);
    }
L_0014ccd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000040u, 1, 0);
    }
L_0014ccd4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0014ccd8:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0014ccdc:;
    {
        cpu->r[14] = 0x00000009u;
    }
L_0014cce0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0014cce4:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_0014cce8:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0014ccec:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0014ccf0:;
    {
        cpu->r[14] = 0x0000000bu;
    }
L_0014ccf4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0014ccf8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0014ccfc:;
    {
        cpu->r[14] = 0x00000005u;
    }
L_0014cd00:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0014cd04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0014cd08:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_0014cd0c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0014cd10:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0014cd14:;
    {
        cpu->r[14] = 0x000000ffu;
    }
L_0014cd18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0014cd1c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_0014cd20:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0014cd24:;
    {
        wr8(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0014cd28:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0014cd2c:;
    {
        wr8(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0014cd30:;
    {
        cpu->r[14] = 0x0014cd34u; fn_0012f2c4(cpu);
    }
L_0014cd34:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0014cd38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014cd3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cd40u)) return;
    }
}

/* _ZN7Emitter8loadAnimERP11gxAnimationP8LZMAFile @ 0014cd48 (arm) */
void fn_0014cd48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cd48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014cd4c:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0014cd50:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014cd54:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0014cd58:;
    {
        cpu->r[14] = 0x0014cd5cu; fn_0018ba6c(cpu);
    }
L_0014cd5c:;
    {
        cpu->r[5] = rd32(0x0014cd64u + + 0x70u);
    }
L_0014cd60:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014cd68u, cpu->r[5], 0, 0);
    }
L_0014cd64:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014cd68:;
    {
        cpu->r[14] = 0x0014cd6cu; fn_00140224(cpu);
    }
L_0014cd6c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014cd70:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_0014cd74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0014cd78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cd7cu)) return;
        }
    }
L_0014cd7c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0014cd80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014cd84:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014cd88:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[3]);
    }
L_0014cd8c:;
    {
        cpu->r[14] = 0x0014cd90u; fn_001404e8(cpu);
    }
L_0014cd90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014cd94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0014cd98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cd9cu)) return;
        }
    }
L_0014cd9c:;
    {
        cpu->r[1] = rd32(0x0014cda4u + + 0x34u);
    }
L_0014cda0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014cda4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0014cda8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014cdb0u + + 0x20u);
    }
L_0014cdac:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0014cdb0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014cdb4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_0014cdb8:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0014cdbc:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[2]);
    }
L_0014cdc0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_0014cdc4:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_0014cdc8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_0014cdcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cdd0u)) return;
    }
}

/* _ZN7EmitterD1Ev @ 0014cddc (arm) */
void fn_0014cddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cddc:;
    {
        cpu->r[2] = rd32(0x0014cde4u + + 0x1d4u);
    }
L_0014cde0:;
    {
        cpu->r[1] = rd32(0x0014cde8u + + 0x1d4u);
    }
L_0014cde4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014cdecu, cpu->r[2], 0, 0);
    }
L_0014cde8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0014cdec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014cdf0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0014cdf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014cdf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014cdfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0014ce00:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0014ce04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ce20;
        }
    }
L_0014ce08:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014ce0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014ce10:;
    {
        cpu->r[14] = 0x0014ce18u;
    }
L_0014ce14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ce18u)) return;
    }
L_0014ce18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ce1c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_0014ce20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0014ce24:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014ce28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ce44;
        }
    }
L_0014ce2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce30:;
    {
        cpu->r[14] = 0x0014ce34u; fn_00140b44(cpu);
    }
L_0014ce34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce38:;
    {
        cpu->r[14] = 0x0014ce3cu; fn_0018ba20(cpu);
    }
L_0014ce3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ce40:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0014ce44:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x68u);
    }
L_0014ce48:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014ce4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ce68;
        }
    }
L_0014ce50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce54:;
    {
        cpu->r[14] = 0x0014ce58u; fn_00140b44(cpu);
    }
L_0014ce58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce5c:;
    {
        cpu->r[14] = 0x0014ce60u; fn_0018ba20(cpu);
    }
L_0014ce60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ce64:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[3]);
    }
L_0014ce68:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x6cu);
    }
L_0014ce6c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014ce70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ce8c;
        }
    }
L_0014ce74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce78:;
    {
        cpu->r[14] = 0x0014ce7cu; fn_00140b44(cpu);
    }
L_0014ce7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce80:;
    {
        cpu->r[14] = 0x0014ce84u; fn_0018ba20(cpu);
    }
L_0014ce84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ce88:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[3]);
    }
L_0014ce8c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x70u);
    }
L_0014ce90:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014ce94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ceb0;
        }
    }
L_0014ce98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ce9c:;
    {
        cpu->r[14] = 0x0014cea0u; fn_00140b44(cpu);
    }
L_0014cea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cea4:;
    {
        cpu->r[14] = 0x0014cea8u; fn_0018ba20(cpu);
    }
L_0014cea8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ceac:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[3]);
    }
L_0014ceb0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x74u);
    }
L_0014ceb4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014ceb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014ced4;
        }
    }
L_0014cebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cec0:;
    {
        cpu->r[14] = 0x0014cec4u; fn_00140b44(cpu);
    }
L_0014cec4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cec8:;
    {
        cpu->r[14] = 0x0014ceccu; fn_0018ba20(cpu);
    }
L_0014cecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014ced0:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_0014ced4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x78u);
    }
L_0014ced8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014cedc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cef8;
        }
    }
L_0014cee0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cee4:;
    {
        cpu->r[14] = 0x0014cee8u; fn_00140b44(cpu);
    }
L_0014cee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014ceec:;
    {
        cpu->r[14] = 0x0014cef0u; fn_0018ba20(cpu);
    }
L_0014cef0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014cef4:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_0014cef8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x7cu);
    }
L_0014cefc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014cf00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cf1c;
        }
    }
L_0014cf04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cf08:;
    {
        cpu->r[14] = 0x0014cf0cu; fn_00140b44(cpu);
    }
L_0014cf0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cf10:;
    {
        cpu->r[14] = 0x0014cf14u; fn_0018ba20(cpu);
    }
L_0014cf14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014cf18:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_0014cf1c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x80u);
    }
L_0014cf20:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014cf24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cf40;
        }
    }
L_0014cf28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cf2c:;
    {
        cpu->r[14] = 0x0014cf30u; fn_00140b44(cpu);
    }
L_0014cf30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cf34:;
    {
        cpu->r[14] = 0x0014cf38u; fn_0018ba20(cpu);
    }
L_0014cf38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014cf3c:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
    }
L_0014cf40:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014cf44:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014cf48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cfa8;
        }
    }
L_0014cf4c:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0xa0u);
    }
L_0014cf50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014cf54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cf98;
        }
    }
L_0014cf58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0014cf5c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0014cf60:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0014cf64:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014cf68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cf84;
        }
    }
L_0014cf6c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014cf70:;
    {
        cpu->r[14] = 0x0014cf78u;
    }
L_0014cf74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cf78u)) return;
    }
L_0014cf78:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014cf7c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_0014cf80:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0xa0u);
    }
L_0014cf84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0014cf88:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0014cf8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014cf60;
        }
    }
L_0014cf90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014cf94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014cfa0;
        }
    }
L_0014cf98:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0014cf9c:;
    {
        cpu->r[14] = 0x0014cfa0u; fn_0018ba60(cpu);
    }
L_0014cfa0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014cfa4:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[3]);
    }
L_0014cfa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014cfac:;
    {
        cpu->r[14] = 0x0014cfb0u; fn_00140fb4(cpu);
    }
L_0014cfb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014cfb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cfb8u)) return;
    }
}

/* _ZN7EmitterD0Ev @ 0014cfc0 (arm) */
void fn_0014cfc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cfc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014cfc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014cfc8:;
    {
        cpu->r[14] = 0x0014cfccu; fn_0014cddc(cpu);
    }
L_0014cfcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cfd0:;
    {
        cpu->r[14] = 0x0014cfd4u; fn_0018ba20(cpu);
    }
L_0014cfd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014cfd8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014cfdcu)) return;
    }
}

/* _ZN7EmitterD2Ev @ 0014cfdc (arm) */
void fn_0014cfdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014cfdc:;
    {
        cpu->r[2] = rd32(0x0014cfe4u + + 0x1d4u);
    }
L_0014cfe0:;
    {
        cpu->r[1] = rd32(0x0014cfe8u + + 0x1d4u);
    }
L_0014cfe4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014cfecu, cpu->r[2], 0, 0);
    }
L_0014cfe8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0014cfec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014cff0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0014cff4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014cff8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014cffc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0014d000:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0014d004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d020;
        }
    }
L_0014d008:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014d00c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014d010:;
    {
        cpu->r[14] = 0x0014d018u;
    }
L_0014d014:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d018u)) return;
    }
L_0014d018:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d01c:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_0014d020:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0014d024:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d044;
        }
    }
L_0014d02c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d030:;
    {
        cpu->r[14] = 0x0014d034u; fn_00140b44(cpu);
    }
L_0014d034:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d038:;
    {
        cpu->r[14] = 0x0014d03cu; fn_0018ba20(cpu);
    }
L_0014d03c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d040:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0014d044:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x68u);
    }
L_0014d048:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d068;
        }
    }
L_0014d050:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d054:;
    {
        cpu->r[14] = 0x0014d058u; fn_00140b44(cpu);
    }
L_0014d058:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d05c:;
    {
        cpu->r[14] = 0x0014d060u; fn_0018ba20(cpu);
    }
L_0014d060:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d064:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[3]);
    }
L_0014d068:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x6cu);
    }
L_0014d06c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d070:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d08c;
        }
    }
L_0014d074:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d078:;
    {
        cpu->r[14] = 0x0014d07cu; fn_00140b44(cpu);
    }
L_0014d07c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d080:;
    {
        cpu->r[14] = 0x0014d084u; fn_0018ba20(cpu);
    }
L_0014d084:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d088:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[3]);
    }
L_0014d08c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x70u);
    }
L_0014d090:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d0b0;
        }
    }
L_0014d098:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d09c:;
    {
        cpu->r[14] = 0x0014d0a0u; fn_00140b44(cpu);
    }
L_0014d0a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d0a4:;
    {
        cpu->r[14] = 0x0014d0a8u; fn_0018ba20(cpu);
    }
L_0014d0a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d0ac:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[3]);
    }
L_0014d0b0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x74u);
    }
L_0014d0b4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d0d4;
        }
    }
L_0014d0bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d0c0:;
    {
        cpu->r[14] = 0x0014d0c4u; fn_00140b44(cpu);
    }
L_0014d0c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d0c8:;
    {
        cpu->r[14] = 0x0014d0ccu; fn_0018ba20(cpu);
    }
L_0014d0cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d0d0:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_0014d0d4:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x78u);
    }
L_0014d0d8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d0f8;
        }
    }
L_0014d0e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d0e4:;
    {
        cpu->r[14] = 0x0014d0e8u; fn_00140b44(cpu);
    }
L_0014d0e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d0ec:;
    {
        cpu->r[14] = 0x0014d0f0u; fn_0018ba20(cpu);
    }
L_0014d0f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d0f4:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_0014d0f8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x7cu);
    }
L_0014d0fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d11c;
        }
    }
L_0014d104:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d108:;
    {
        cpu->r[14] = 0x0014d10cu; fn_00140b44(cpu);
    }
L_0014d10c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d110:;
    {
        cpu->r[14] = 0x0014d114u; fn_0018ba20(cpu);
    }
L_0014d114:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d118:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_0014d11c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x80u);
    }
L_0014d120:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d140;
        }
    }
L_0014d128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d12c:;
    {
        cpu->r[14] = 0x0014d130u; fn_00140b44(cpu);
    }
L_0014d130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d134:;
    {
        cpu->r[14] = 0x0014d138u; fn_0018ba20(cpu);
    }
L_0014d138:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d13c:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
    }
L_0014d140:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014d144:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014d148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d1a8;
        }
    }
L_0014d14c:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0xa0u);
    }
L_0014d150:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014d154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d198;
        }
    }
L_0014d158:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0014d15c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0014d160:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0014d164:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014d168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d184;
        }
    }
L_0014d16c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014d170:;
    {
        cpu->r[14] = 0x0014d178u;
    }
L_0014d174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d178u)) return;
    }
L_0014d178:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014d17c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_0014d180:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0xa0u);
    }
L_0014d184:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0014d188:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0014d18c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014d160;
        }
    }
L_0014d190:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014d194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d1a0;
        }
    }
L_0014d198:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0014d19c:;
    {
        cpu->r[14] = 0x0014d1a0u; fn_0018ba60(cpu);
    }
L_0014d1a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d1a4:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[3]);
    }
L_0014d1a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d1ac:;
    {
        cpu->r[14] = 0x0014d1b0u; fn_00140fb4(cpu);
    }
L_0014d1b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d1b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d1b8u)) return;
    }
}

/* _ZN7EmitterC1Ev @ 0014d1c0 (arm) */
void fn_0014d1c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d1c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014d1c4:;
    {
        cpu->r[5] = rd32(0x0014d1ccu + + 0x40u);
    }
L_0014d1c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014d1cc:;
    {
        cpu->r[14] = 0x0014d1d0u; fn_00140f34(cpu);
    }
L_0014d1d0:;
    {
        cpu->r[2] = rd32(0x0014d1d8u + + 0x38u);
    }
L_0014d1d4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014d1dcu, cpu->r[5], 0, 0);
    }
L_0014d1d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d1dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d1e0:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_0014d1e4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0014d1e8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0014d1ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014d1f0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0014d1f4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0014d1f8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_0014d1fc:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_0014d200:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_0014d204:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_0014d208:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d20cu)) return;
    }
}

/* _ZN7EmitterC2Ev @ 0014d214 (arm) */
void fn_0014d214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d214:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014d218:;
    {
        cpu->r[5] = rd32(0x0014d220u + + 0x40u);
    }
L_0014d21c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014d220:;
    {
        cpu->r[14] = 0x0014d224u; fn_00140f34(cpu);
    }
L_0014d224:;
    {
        cpu->r[2] = rd32(0x0014d22cu + + 0x38u);
    }
L_0014d228:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014d230u, cpu->r[5], 0, 0);
    }
L_0014d22c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d234:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_0014d238:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0014d23c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0014d240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014d244:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0014d248:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0014d24c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_0014d250:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_0014d254:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_0014d258:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_0014d25c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d260u)) return;
    }
}

/* _ZN7Emitter18MarkNeededTexturesEv @ 0014d268 (arm) */
void fn_0014d268(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d268:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_0014d26c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014d270:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014d274:;
    {
        cpu->r[5] = rd32(0x0014d27cu + + 0xbcu);
    }
L_0014d278:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014d27c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0014d280:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014d284:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014d28cu, cpu->r[5], 0, 0);
    }
L_0014d288:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014d28c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014d294u + + 0x9cu);
    }
L_0014d290:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014d294:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014d298:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0014d29c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d324;
        }
    }
L_0014d2a0:;
    {
        cpu->r[7] = rd32(0x0014d2a8u + + 0x94u);
    }
L_0014d2a4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0014d2a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014d2ac:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0014d2b4u + + 0x80u);
    }
L_0014d2b0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[4];
    }
L_0014d2b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014d2b8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d2bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0014d2c0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d2c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 1u, &shc), 0, 0);
    }
L_0014d2c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 1, 1u, &shc));
        }
    }
L_0014d2cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d2d0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_0014d2d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d2d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0014d2dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014d2e0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0014d2e4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014d2e8:;
    {
        cpu->r[14] = 0x0014d2ecu; guest_call(cpu, cpu->r[12]);
    }
L_0014d2ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014d2f0:;
    {
        vfp_vadd(cpu, 15, 15, 17);
    }
L_0014d2f4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0014d2f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0014d2fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d300:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0014d304:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014d308:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014d30c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0014d310:;
    {
        cpu->r[14] = 0x0014d314u; fn_00135d9c(cpu);
    }
L_0014d314:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x70u);
    }
L_0014d318:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014d31c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0014d320:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014d2b0;
        }
    }
L_0014d324:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014d328:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014d32c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d330u)) return;
    }
}

/* _ZN7Emitter4LoadEP8LZMAFilePttPssS3_sbi @ 0014d340 (arm) */
void fn_0014d340(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d340:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014d344:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014d348:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014d34c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0014d350:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014d354:;
    {
        cpu->r[14] = 0x0014d358u; fn_000fc678(cpu);
    }
L_0014d358:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014d35c:;
    {
        cpu->r[14] = 0x0014d360u; fn_0014f614(cpu);
    }
L_0014d360:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d364:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0014d368:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[0]);
    }
L_0014d36c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0014d370:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014d37c;
        }
    }
L_0014d374:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014d378:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d37cu)) return;
    }
L_0014d37c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014d380:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d384:;
    {
        cpu->r[14] = 0x0014d38cu;
    }
L_0014d388:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d38cu)) return;
    }
L_0014d38c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d390:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0014d394:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d398:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d39c:;
    {
        cpu->r[14] = 0x0014d3a0u; fn_000fc678(cpu);
    }
L_0014d3a0:;
    {
        wr8(cpu->r[5] + + 0x26u, cpu->r[0]);
    }
L_0014d3a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d3a8:;
    {
        cpu->r[14] = 0x0014d3acu; fn_000fc650(cpu);
    }
L_0014d3ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014d3b4u + + 0x334u);
    }
L_0014d3b0:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0014d3b4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014d3b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014d3bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d3c0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014d3c4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d3c8:;
    {
        cpu->r[14] = 0x0014d3ccu; fn_000fc678(cpu);
    }
L_0014d3cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d3d0:;
    {
        cpu->r[14] = 0x0014d3d4u; fn_000fc650(cpu);
    }
L_0014d3d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d3d8:;
    {
        cpu->r[14] = 0x0014d3dcu; fn_000fc678(cpu);
    }
L_0014d3dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000001cu, 0, 0);
    }
L_0014d3e0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d3e4:;
    {
        wr8(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_0014d3e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d3ec:;
    {
        cpu->r[14] = 0x0014d3f0u; fn_0014cd48(cpu);
    }
L_0014d3f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d3f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_0014d3f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d3fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d400:;
    {
        cpu->r[14] = 0x0014d404u; fn_000fc5fc(cpu);
    }
L_0014d404:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[0]);
    }
L_0014d408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d40c:;
    {
        cpu->r[14] = 0x0014d410u; fn_000fc650(cpu);
    }
L_0014d410:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d414:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014d418:;
    {
        wr16(cpu->r[5] + + 0x2cu, cpu->r[0]);
    }
L_0014d41c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000022u, 0, 0);
    }
L_0014d420:;
    {
        cpu->r[14] = 0x0014d424u; fn_00150ed4(cpu);
    }
L_0014d424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d428:;
    {
        cpu->r[14] = 0x0014d42cu; fn_000fc650(cpu);
    }
L_0014d42c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0014d430:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014d434:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014d438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d43c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d440:;
    {
        cpu->r[14] = 0x0014d444u; fn_000fc650(cpu);
    }
L_0014d444:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d448:;
    {
        wr16(cpu->r[5] + + 0x38u, cpu->r[0]);
    }
L_0014d44c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000002eu, 0, 0);
    }
L_0014d450:;
    {
        cpu->r[14] = 0x0014d454u; fn_00150ed4(cpu);
    }
L_0014d454:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d458:;
    {
        cpu->r[14] = 0x0014d45cu; fn_000fc650(cpu);
    }
L_0014d45c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d460:;
    {
        wr16(cpu->r[5] + + 0x3au, cpu->r[0]);
    }
L_0014d464:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000003cu, 0, 0);
    }
L_0014d468:;
    {
        cpu->r[14] = 0x0014d46cu; fn_00150ed4(cpu);
    }
L_0014d46c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d470:;
    {
        cpu->r[14] = 0x0014d474u; fn_000fc650(cpu);
    }
L_0014d474:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0014d478:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014d47c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0014d480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d484:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d488:;
    {
        cpu->r[14] = 0x0014d48cu; fn_000fc650(cpu);
    }
L_0014d48c:;
    {
        wr16(cpu->r[5] + + 0x48u, cpu->r[0]);
    }
L_0014d490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d494:;
    {
        cpu->r[14] = 0x0014d498u; fn_000fc678(cpu);
    }
L_0014d498:;
    {
        wr8(cpu->r[5] + + 0x4au, cpu->r[0]);
    }
L_0014d49c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d4a0:;
    {
        cpu->r[14] = 0x0014d4a4u; fn_000fc650(cpu);
    }
L_0014d4a4:;
    {
        wr16(cpu->r[5] + + 0x4cu, cpu->r[0]);
    }
L_0014d4a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d4ac:;
    {
        cpu->r[14] = 0x0014d4b0u; fn_000fc650(cpu);
    }
L_0014d4b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_0014d4b4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d4b8:;
    {
        wr16(cpu->r[5] + + 0x4eu, cpu->r[0]);
    }
L_0014d4bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d4c0:;
    {
        cpu->r[14] = 0x0014d4c4u; fn_0014cd48(cpu);
    }
L_0014d4c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d4c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000005u);
        }
    }
L_0014d4cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d4d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d4d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000006cu, 0, 0);
    }
L_0014d4d8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d4dc:;
    {
        cpu->r[14] = 0x0014d4e0u; fn_0014cd48(cpu);
    }
L_0014d4e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d4e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_0014d4e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d4ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d4f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000070u, 0, 0);
    }
L_0014d4f4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d4f8:;
    {
        cpu->r[14] = 0x0014d4fcu; fn_0014cd48(cpu);
    }
L_0014d4fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d500:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000007u);
        }
    }
L_0014d504:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d508:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d50c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000074u, 0, 0);
    }
L_0014d510:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d514:;
    {
        cpu->r[14] = 0x0014d518u; fn_0014cd48(cpu);
    }
L_0014d518:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d51c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000008u);
        }
    }
L_0014d520:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d524:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d528:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_0014d52c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d530:;
    {
        cpu->r[14] = 0x0014d534u; fn_0014cd48(cpu);
    }
L_0014d534:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d538:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000009u);
        }
    }
L_0014d53c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d540:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d544:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_0014d548:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d54c:;
    {
        cpu->r[14] = 0x0014d550u; fn_0014cd48(cpu);
    }
L_0014d550:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d554:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000au);
        }
    }
L_0014d558:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d55c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000080u, 0, 0);
    }
L_0014d564:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d568:;
    {
        cpu->r[14] = 0x0014d56cu; fn_0014cd48(cpu);
    }
L_0014d56c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d570:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000bu);
        }
    }
L_0014d574:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014d374;
        }
    }
L_0014d578:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_0014d57c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d580:;
    {
        cpu->r[14] = 0x0014d584u; fn_00150ed4(cpu);
    }
L_0014d584:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000088u, 0, 0);
    }
L_0014d588:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d58c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0014d594u + + 0x158u);
    }
L_0014d590:;
    {
        cpu->r[14] = 0x0014d594u; fn_00150ed4(cpu);
    }
L_0014d594:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_0014d598:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d59c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0014d5a0:;
    {
        cpu->r[14] = 0x0014d5a4u; fn_00150ed4(cpu);
    }
L_0014d5a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_0014d5a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d5ac:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0014d5b0:;
    {
        cpu->r[14] = 0x0014d5b4u; fn_00150ed4(cpu);
    }
L_0014d5b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000094u, 0, 0);
    }
L_0014d5b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d5bc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0014d5c4u + + 0x124u);
    }
L_0014d5c0:;
    {
        cpu->r[14] = 0x0014d5c4u; fn_00150ed4(cpu);
    }
L_0014d5c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d5c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000098u, 0, 0);
    }
L_0014d5cc:;
    {
        cpu->r[14] = 0x0014d5d0u; fn_00150ed4(cpu);
    }
L_0014d5d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d5d4:;
    {
        cpu->r[14] = 0x0014d5d8u; fn_000fc5fc(cpu);
    }
L_0014d5d8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014d5dc:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_0014d5e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d5e4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d5e8:;
    {
        cpu->r[14] = 0x0014d5ecu; fn_000fc5fc(cpu);
    }
L_0014d5ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014d5f0:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_0014d5f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d5f8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d5fc:;
    {
        cpu->r[14] = 0x0014d600u; fn_000fc5fc(cpu);
    }
L_0014d600:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014d604:;
    {
        vfp_vmul(cpu, 15, 14, 16);
    }
L_0014d608:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d60c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d610:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014d614:;
    {
        cpu->r[14] = 0x0014d618u; fn_000fc5fc(cpu);
    }
L_0014d618:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x50u);
    }
L_0014d61c:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0014d620:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_0014d624:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014d628:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014d62c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d630:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0014d634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014d60c;
        }
    }
L_0014d638:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d63c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_0014d640:;
    {
        cpu->r[14] = 0x0014d644u; fn_00150ed4(cpu);
    }
L_0014d644:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d648:;
    {
        cpu->r[14] = 0x0014d64cu; fn_000fc678(cpu);
    }
L_0014d64c:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0014d650:;
    {
        wr8(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0014d654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014d674;
        }
    }
L_0014d65c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d660:;
    {
        cpu->r[14] = 0x0014d664u; fn_0014d268(cpu);
    }
L_0014d664:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014d668:;
    {
        cpu->r[14] = 0x0014d66cu; fn_0014ccb8(cpu);
    }
L_0014d66c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014d670:;
    {
        goto L_0014d374;
    }
L_0014d674:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0014d678:;
    {
        cpu->r[14] = 0x0014d67cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0014d67c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d680:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0014d684:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0014d688:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000078u);
        }
    }
L_0014d68c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d374;
        }
    }
L_0014d690:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xa0u);
    }
L_0014d694:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0014d698:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0014d69c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0014d65c;
        }
    }
L_0014d6a0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014d6a4:;
    {
        cpu->r[14] = 0x0014d6a8u; fn_0014fe50(cpu);
    }
L_0014d6a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xa4u);
    }
L_0014d6ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d6b0:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_0014d6b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0014d6b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0014d6bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014d6c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d6e0;
        }
    }
L_0014d6c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014d6c8:;
    {
        cpu->r[14] = 0x0014d6d0u;
    }
L_0014d6cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d6d0u)) return;
    }
L_0014d6d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014d6d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0014d690;
        }
    }
L_0014d6d8:;
    {
        cpu->r[0] = (~0x0000007au);
    }
L_0014d6dc:;
    {
        goto L_0014d374;
    }
L_0014d6e0:;
    {
        cpu->r[0] = (~0x00000079u);
    }
L_0014d6e4:;
    {
        goto L_0014d374;
    }
}

/* _ZN7Emitter17GetEmissionVolumeEii @ 0014d6f0 (arm) */
void fn_0014d6f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d6f0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014d6f4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014d6f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014d6fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014d700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000002eu, 0, 0);
    }
L_0014d704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0014d708:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014d70c:;
    {
        cpu->r[14] = 0x0014d710u; fn_00150e7c(cpu);
    }
L_0014d710:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014d714:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0x2cu);
    }
L_0014d718:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0014d71c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0014d720:;
    {
        cpu->r[14] = 0x0014d724u; fn_000964c8(cpu);
    }
L_0014d724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0014d728:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0014d72c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0014d730:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d734:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0014d738:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d73c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d740:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d744:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d748:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d74c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d750:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014d754:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0014d758:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014d75c:;
    {
        cpu->r[14] = 0x0014d760u; guest_call(cpu, cpu->r[12]);
    }
L_0014d760:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014d768u + + 0x20u);
    }
L_0014d764:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014d76cu + + 0x20u);
    }
L_0014d768:;
    {
        vfp_vmla(cpu, 15, 16, 14);
    }
L_0014d76c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014d770:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0014d774:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014d778:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014d77c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014d780:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014d784:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d788u)) return;
    }
}

/* _ZN7Emitter14GetTexWrappingEfR14_GXTexWrapModeS1_ @ 0014d790 (arm) */
void fn_0014d790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d790:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0014d794:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0014d798:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_0014d79c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014d7a0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014d7a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014d7a8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014d7ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014d7b0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d7b4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d7b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d7bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d7c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d7c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d7c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d7cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014d7d0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d7d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014d7d8:;
    {
        cpu->r[14] = 0x0014d7dcu; guest_call(cpu, cpu->r[12]);
    }
L_0014d7dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x70u);
    }
L_0014d7e0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0014d7e4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d7e8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d7ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d7f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d7f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d7f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d7fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d800:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014d804:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014d808:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0014d80c:;
    {
        cpu->r[14] = 0x0014d810u; guest_call(cpu, cpu->r[12]);
    }
L_0014d810:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014d814:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_0014d818:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0014d81c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014d820:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014d824:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d828:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014d82c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d830u)) return;
    }
}

/* _ZN7Emitter8GetTMAniEP7CMatrixii @ 0014d830 (arm) */
void fn_0014d830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d830:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0014d834:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000060u, 1, 0);
    }
L_0014d838:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014d83c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014d840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d844:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014d848:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0014d84c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0014d850:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014d854:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0014d858:;
    {
        cpu->r[14] = 0x0014d85cu; fn_001535e0(cpu);
    }
L_0014d85c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0014d860:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014d864:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0014d868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000022u, 0, 0);
    }
L_0014d86c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_0014d870:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_0014d874:;
    {
        cpu->r[14] = 0x0014d878u; fn_00150e7c(cpu);
    }
L_0014d878:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0014d87c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014d880:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0014d884:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0014d888:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d88c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d890:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d894:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d898:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0014d89c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0014d8a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014d8a4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014d8a8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014d8ac:;
    {
        cpu->r[14] = 0x0014d8b0u; guest_call(cpu, cpu->r[12]);
    }
L_0014d8b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_0014d8b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d8b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0014d8bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_0014d8c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014d8c4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d8c8:;
    {
        cpu->r[14] = 0x0014d8ccu; fn_00153678(cpu);
    }
L_0014d8cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0014d8d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014d8d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d8d8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d8dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d8e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d8e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d8e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d8ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d8f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014d8f4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0014d8f8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0014d8fc:;
    {
        cpu->r[14] = 0x0014d900u; guest_call(cpu, cpu->r[12]);
    }
L_0014d900:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d904:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_0014d908:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_0014d90c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0014d910:;
    {
        cpu->r[14] = 0x0014d914u; fn_0015364c(cpu);
    }
L_0014d914:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0014d918:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014d91c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3fc9u << 16);
    }
L_0014d920:;
    {
        cpu->r[14] = 0x0014d924u; fn_00154680(cpu);
    }
L_0014d924:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014d928:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014d92c:;
    {
        cpu->r[14] = 0x0014d930u; fn_00153478(cpu);
    }
L_0014d930:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0014d934:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014d938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014d94c;
        }
    }
L_0014d93c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d940:;
    {
        cpu->r[14] = 0x0014d944u; fn_000b2bc8(cpu);
    }
L_0014d944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014d948:;
    {
        cpu->r[14] = 0x0014d94cu; fn_0018ba20(cpu);
    }
L_0014d94c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_0014d950:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d954u)) return;
    }
}

/* _ZN7Emitter16GetUsedTextureIDEf @ 0014d954 (arm) */
void fn_0014d954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d954:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_0014d958:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0014d95c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014d960:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014d964:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014d968:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d96c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d970:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d974:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d978:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014d97c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014d980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0014d984:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014d988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014d98c:;
    {
        cpu->r[14] = 0x0014d990u; guest_call(cpu, cpu->r[12]);
    }
L_0014d990:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014d994:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014d99cu + + 0x10u);
    }
L_0014d998:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0014d99c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0014d9a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014d9a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014d9a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014d9acu)) return;
    }
}

/* _ZN7Emitter14GetAllDirSpeedEfP8Vector3d @ 0014d9b0 (arm) */
void fn_0014d9b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014d9b0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0014d9b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0014d9b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014d9bc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d9c0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014d9c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0014d9c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014d9cc:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d9d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0014d9d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014d9d8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0014d9dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014d9e0:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014d9e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d9e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014d9ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014d9f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1]);
        }
    }
L_0014d9f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[1]);
        }
    }
L_0014d9f8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0014d9fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
        }
    }
L_0014da00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014da04:;
    {
        cpu->r[14] = 0x0014da08u; guest_call(cpu, cpu->r[12]);
    }
L_0014da08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014da0c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0014da10:;
    {
        vfp_sync_flags(cpu);
    }
L_0014da14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014dac4;
        }
    }
L_0014da18:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0014da1c:;
    {
        vfp_vmul(cpu, 15, 11, 11);
    }
L_0014da20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_0014da24:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0014da28:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x0014da30u + + 0xc0u);
    }
L_0014da2c:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0014da30:;
    {
        vfp_vmla(cpu, 15, 10, 10);
    }
L_0014da34:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0014da38:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,6), *vfp_d(cpu,8));
    }
L_0014da3c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014da40:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014da84;
        }
    }
L_0014da44:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014da4cu + + 0xacu);
    }
L_0014da48:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_0014da4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014da50:;
    {
        vfp_vmul(cpu, 12, 13, 11);
    }
L_0014da54:;
    {
        vfp_vmul(cpu, 14, 13, 14);
    }
L_0014da58:;
    {
        vfp_vmul(cpu, 10, 13, 10);
    }
L_0014da5c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_0014da60:;
    {
        vfp_vmul(cpu, 13, 15, 10);
    }
L_0014da64:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014da68:;
    {
        vfp_vmul(cpu, 15, 15, 12);
    }
L_0014da6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014da70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014da74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014da78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014da7c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014da80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014da84u)) return;
    }
L_0014da84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014da88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014da8c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbf80u << 16);
    }
L_0014da90:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_0014da94:;
    {
        cpu->r[14] = 0x0014da98u; fn_001564b0(cpu);
    }
L_0014da98:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0014da9c:;
    {
        vfp_vmul(cpu, 15, 11, 11);
    }
L_0014daa0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_0014daa4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0014daa8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_0014daac:;
    {
        vfp_vmla(cpu, 15, 10, 10);
    }
L_0014dab0:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0014dab4:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,6), *vfp_d(cpu,8));
    }
L_0014dab8:;
    {
        vfp_sync_flags(cpu);
    }
L_0014dabc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0014da38;
        }
    }
L_0014dac0:;
    {
        goto L_0014da44;
    }
L_0014dac4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_0014dac8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0014dacc:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_0014dad0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0014dad4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014dad8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014dadc:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014dae0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014dae4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dae8:;
    {
        goto L_0014da74;
    }
}

/* _ZN7Emitter10GetXZSpeedEf @ 0014db00 (arm) */
void fn_0014db00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014db00:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0014db04:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014db08:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014db0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014db10:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0014db18u + + 0x9cu);
    }
L_0014db14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014db18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014db1c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014db20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014db24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014db28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014db2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014db30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014db34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0014db38:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0014db3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014db40:;
    {
        cpu->r[14] = 0x0014db44u; guest_call(cpu, cpu->r[12]);
    }
L_0014db44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014db48:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_0014db4c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014db50:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_0014db54:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_0014db58:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_0014db5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014dba4;
        }
    }
L_0014db60:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0014db64:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014db68:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x40c9u << 16);
    }
L_0014db6c:;
    {
        cpu->r[14] = 0x0014db70u; fn_00096514(cpu);
    }
L_0014db70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014db74:;
    {
        cpu->r[14] = 0x0014db78u; imp_cosf(cpu); /* cosf */
    }
L_0014db78:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_0014db7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014db80:;
    {
        cpu->r[14] = 0x0014db84u; imp_sinf(cpu); /* sinf */
    }
L_0014db84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014db88:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_0014db8c:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_0014db90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014db94:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014db98:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014db9c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0014dba0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dba4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014dba8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014dbac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014dbb0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014dbb4u)) return;
    }
}

/* _ZN7Emitter15GenParticleSizeEfRfS0_ @ 0014dbb8 (arm) */
void fn_0014dbb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014dbb8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0014dbbc:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0014dbc0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x78u);
    }
L_0014dbc4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0014dbc8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0014dbcc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0014dbd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014dbd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0014dbd8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dbdc:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dbe0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dbe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dbe8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dbec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dbf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dbf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dbf8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dbfc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0014dc00:;
    {
        cpu->r[14] = 0x0014dc04u; guest_call(cpu, cpu->r[12]);
    }
L_0014dc04:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x78u);
    }
L_0014dc08:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0014dc0c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dc10:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dc14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dc18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dc1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dc20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dc24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dc28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dc2c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dc30:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0014dc34:;
    {
        cpu->r[14] = 0x0014dc38u; guest_call(cpu, cpu->r[12]);
    }
L_0014dc38:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x78u);
    }
L_0014dc3c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0014dc40:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dc44:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dc48:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dc4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dc50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dc54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dc58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dc5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dc60:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dc64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014dc68:;
    {
        cpu->r[14] = 0x0014dc6cu; guest_call(cpu, cpu->r[12]);
    }
L_0014dc6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014dc70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014dc78u + + 0x38u);
    }
L_0014dc74:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014dc78:;
    {
        vfp_vneg(cpu, 14, 15);
    }
L_0014dc7c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014dc80:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dc84:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014dc88:;
    {
        cpu->r[14] = 0x0014dc8cu; fn_00096514(cpu);
    }
L_0014dc8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_0014dc90:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014dc94:;
    {
        vfp_vmla(cpu, 15, 14, 15);
    }
L_0014dc98:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dc9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_0014dca0:;
    {
        vfp_vmla(cpu, 15, 15, 14);
    }
L_0014dca4:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dca8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014dcac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014dcb0u)) return;
    }
}

/* _ZN7Emitter20GetSpecifiedDirSpeedEf @ 0014dcb8 (arm) */
void fn_0014dcb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014dcb8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0014dcbc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014dcc4u + + 0x34cu);
    }
L_0014dcc0:;
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
L_0014dcc4:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dcc8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dccc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014dcd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014dcd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0014dcd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dcdc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dce0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dce4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dce8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dcec:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0014dcf0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014dcf4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0014dcf8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dcfc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0014dd00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dd08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd0c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dd10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dd14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dd18:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dd1c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0014dd20:;
    {
        cpu->r[14] = 0x0014dd24u; guest_call(cpu, cpu->r[12]);
    }
L_0014dd24:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0014dd28:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0014dd2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dd30:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dd34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dd3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dd44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dd48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dd4c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dd50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0014dd54:;
    {
        cpu->r[14] = 0x0014dd58u; guest_call(cpu, cpu->r[12]);
    }
L_0014dd58:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_0014dd5c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0014dd60:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0014dd64:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0014dd68:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014dd6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0014dd74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0014dd78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0014dd7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[3]);
        }
    }
L_0014dd80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014dd84:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014dd88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0014dd8c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0014dd90:;
    {
        cpu->r[14] = 0x0014dd94u; guest_call(cpu, cpu->r[12]);
    }
L_0014dd94:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014dd98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014dda0u + + 0x274u);
    }
L_0014dd9c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0014dda0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0014dda4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014dda8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0014ddac:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014ddb0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014ddb4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0014ddb8:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0014ddbc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014ddc0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014ddc4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014ddc8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014ddcc:;
    {
        cpu->r[14] = 0x0014ddd0u; fn_001564f4(cpu);
    }
L_0014ddd0:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0014ddd8u + + 0x230u);
    }
L_0014ddd4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7]);
    }
L_0014ddd8:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_0014dddc:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_0014dde0:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,6));
    }
L_0014dde4:;
    {
        vfp_sync_flags(cpu);
    }
L_0014dde8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0014de0c;
        }
    }
L_0014ddec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0014ddf0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0014ddf4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_0014ddf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014ddd4;
        }
    }
L_0014ddfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014de00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0014de04:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014de08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014de0cu)) return;
    }
L_0014de0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014de10:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_0014de14:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014de18:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x40c9u << 16);
    }
L_0014de1c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0014de20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0014de24:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0014de28:;
    {
        cpu->r[14] = 0x0014de2cu; fn_00096514(cpu);
    }
L_0014de2c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0014de30:;
    {
        cpu->r[14] = 0x0014de34u; imp_cosf(cpu); /* cosf */
    }
L_0014de34:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0014de38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0014de3c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0014de40:;
    {
        cpu->r[14] = 0x0014de44u; imp_sinf(cpu); /* sinf */
    }
L_0014de44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0014de48:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0014de4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014dfec;
        }
    }
L_0014de50:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_0014de54:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0014de58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014dff0;
        }
    }
L_0014de5c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0014de60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0014de64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e000;
        }
    }
L_0014de68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0014de6c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0014de70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0014de74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014de78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_0014de7c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014de80:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_0014de84:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0014de88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_0014de8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0014de90:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
        }
    }
L_0014de94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
        }
    }
L_0014de98:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12]);
        }
    }
L_0014de9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_0014dea0:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
        }
    }
L_0014dea4:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmls(cpu, 15, 13, 14);
        }
    }
L_0014dea8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0014deac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0014deb0:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0014deb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0014deb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014de8c;
        }
    }
L_0014debc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7]);
    }
L_0014dec0:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0014dec4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0014deccu + + 0x144u);
    }
L_0014dec8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014decc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0014ded0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0014ded4:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,16);
    }
L_0014ded8:;
    {
        *(uint32_t*)G(cpu->r[0] + - 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dedc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0014dee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0014dee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0014dee8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_0014deec:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0014def0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0014def4:;
    {
        vfp_vmla(cpu, 13, 14, 14);
    }
L_0014def8:;
    {
        vfp_vmla(cpu, 16, 15, 15);
    }
L_0014defc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014dedc;
        }
    }
L_0014df00:;
    {
        vfp_vsqrt(cpu, 14, 13);
    }
L_0014df04:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,14));
    }
L_0014df08:;
    {
        vfp_sync_flags(cpu);
    }
L_0014df0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014df1c;
        }
    }
L_0014df10:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0014df14:;
    {
        cpu->r[14] = 0x0014df18u; imp_sqrtf(cpu); /* sqrtf */
    }
L_0014df18:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0014df1c:;
    {
        vfp_vsqrt(cpu, 15, 16);
    }
L_0014df20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0014df28u + + 0xf0u);
    }
L_0014df24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_0014df28:;
    {
        vfp_vdiv(cpu, 17, 13, 14);
    }
L_0014df2c:;
    {
        vfp_sync_flags(cpu);
    }
L_0014df30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014df40;
        }
    }
L_0014df34:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0014df38:;
    {
        cpu->r[14] = 0x0014df3cu; imp_sqrtf(cpu); /* sqrtf */
    }
L_0014df3c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0014df40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014df48u + + 0xd0u);
    }
L_0014df44:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_0014df48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014df4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_0014df50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0014df54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_0014df58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0014df5c:;
    {
        vfp_vmul(cpu, 14, 14, 17);
    }
L_0014df60:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_0014df64:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014df68:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_0014df6c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014df70:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_0014df74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0014df78:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_0014df7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014df4c;
        }
    }
L_0014df80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_0014df84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014df8cu + + 0x88u);
    }
L_0014df88:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014df8c:;
    {
        vfp_vneg(cpu, 14, 15);
    }
L_0014df90:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0014df94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014df98:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0014df9c:;
    {
        cpu->r[14] = 0x0014dfa0u; fn_00096514(cpu);
    }
L_0014dfa0:;
    {
        cpu->r[14] = 0x0014dfa4u; imp_tanf(cpu); /* tanf */
    }
L_0014dfa4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_0014dfa8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0014dfac:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_0014dfb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0014dfb4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0014dfb8:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0014dfbc:;
    {
        vfp_vmla(cpu, 13, 11, 14);
    }
L_0014dfc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_0014dfc4:;
    {
        vfp_vmla(cpu, 12, 11, 10);
    }
L_0014dfc8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0014dfcc:;
    {
        vfp_vmla(cpu, 15, 11, 10);
    }
L_0014dfd0:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_0014dfd4:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0014dfd8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0014dfdc:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0014dfe0:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014dfe4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dfe8:;
    {
        goto L_0014ddfc;
    }
L_0014dfec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0014dff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0014dff4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0014dff8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014dffc:;
    {
        goto L_0014de68;
    }
L_0014e000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0014e004:;
    {
        goto L_0014dff4;
    }
}

/* _ZN7Emitter5SpawnEP16ParticleRendererP13ParticleQueueP7CMatrixiii @ 0014e020 (arm) */
void fn_0014e020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e020:;
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
L_0014e024:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0014e028:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000094u, 1, 0);
    }
L_0014e02c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0014e030:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e034:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xc4u);
    }
L_0014e038:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0014e03c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xc8u);
    }
L_0014e040:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_0014e044:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_0014e048:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0014e04c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0014e050:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0014e054:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0014e058:;
    {
        cpu->r[14] = 0x0014e05cu; fn_00150e7c(cpu);
    }
L_0014e05c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_0014e060:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0014e064:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0014e068:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0014e06c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014e070:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0014e074:;
    {
        cpu->r[14] = 0x0014e078u; fn_00150e7c(cpu);
    }
L_0014e078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0014e07c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc0u);
    }
L_0014e080:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0014e084:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014e088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014e08c:;
    {
        cpu->r[14] = 0x0014e094u;
    }
L_0014e090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e094u)) return;
    }
L_0014e094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014e098:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0014e09c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0014e2f4;
        }
    }
L_0014e0a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0014e0a4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0014e0a8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0014e0ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_0014e0b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_0014e0b4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0014e0bcu + + 0x244u);
    }
L_0014e0b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0014e0bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0014e0c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0014e0c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0014e0c8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0014e0cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0014e0d0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0014e0d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_0014e0d8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0014e0dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0014e0e0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0014e0e4:;
    {
        goto L_0014e1d4;
    }
L_0014e0e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014e0ec:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0014e0f0:;
    {
        cpu->r[14] = 0x0014e0f4u; fn_00153cec(cpu);
    }
L_0014e0f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014e0f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0014e0fc:;
    {
        cpu->r[14] = 0x0014e100u; fn_00153cec(cpu);
    }
L_0014e100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e104:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0014e108:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0014e10c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0014e110:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0014e114:;
    {
        cpu->r[14] = 0x0014e118u; fn_0014dbb8(cpu);
    }
L_0014e118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e11c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0014e120:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_0014e124:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0014e128:;
    {
        cpu->r[14] = 0x0014e12cu; fn_0014cb60(cpu);
    }
L_0014e12c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
    }
L_0014e130:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_0014e134:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e138:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_0014e13c:;
    {
        cpu->r[14] = 0x0014e140u; fn_0014ffb0(cpu);
    }
L_0014e140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0014e144:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014e148:;
    {
        cpu->r[14] = 0x0014e14cu; fn_0015365c(cpu);
    }
L_0014e14c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e150:;
    {
        cpu->r[14] = 0x0014e154u; fn_0014cad8(cpu);
    }
L_0014e154:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e158:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0014e15c:;
    {
        wr16(cpu->r[5] + + 0x48u, cpu->r[3]);
    }
L_0014e160:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_0014e164:;
    {
        wr16(cpu->r[5] + + 0x4au, cpu->r[0]);
    }
L_0014e168:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e16c:;
    {
        cpu->r[14] = 0x0014e170u; fn_0014ff68(cpu);
    }
L_0014e170:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0014e174:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e178:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
    }
L_0014e17c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0014e180:;
    {
        cpu->r[14] = 0x0014e184u; fn_0014ffc0(cpu);
    }
L_0014e184:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e188:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4cu);
    }
L_0014e18c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4eu);
    }
L_0014e190:;
    {
        cpu->r[14] = 0x0014e194u; fn_0014ff84(cpu);
    }
L_0014e194:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0014e198:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x84u);
    }
L_0014e19c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e1a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0014e1a4:;
    {
        cpu->r[14] = 0x0014e1a8u; fn_0014ff74(cpu);
    }
L_0014e1a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0014e1ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e1b0:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[4]);
    }
L_0014e1b4:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_0014e1b8:;
    {
        cpu->r[14] = 0x0014e1bcu; fn_00150190(cpu);
    }
L_0014e1bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0014e1c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014e1c4:;
    {
        cpu->r[14] = 0x0014e1c8u; fn_001502a0(cpu);
    }
L_0014e1c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0014e1cc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0014e1d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e2f4;
        }
    }
L_0014e1d4:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x4au);
    }
L_0014e1d8:;
    {
        cpu->r[14] = 0x0014e1dcu; fn_001502ec(cpu);
    }
L_0014e1dc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014e1e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e2f4;
        }
    }
L_0014e1e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0014e1e8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0014e1ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e1f0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e1f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0014e1f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e1fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014e200:;
    {
        cpu->r[14] = 0x0014e208u;
    }
L_0014e204:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e208u)) return;
    }
L_0014e208:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x18u);
    }
L_0014e20c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0014e210:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0014e214:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0014e218:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0014e21c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0014e220:;
    {
        cpu->r[14] = 0x0014e228u;
    }
L_0014e224:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e228u)) return;
    }
L_0014e228:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0014e22c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0014e230:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014e234:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014e238:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e23c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e240:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0014e244:;
    {
        cpu->r[14] = 0x0014e248u; fn_0014d9b0(cpu);
    }
L_0014e248:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0014e24c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014e250:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014e254:;
    {
        cpu->r[14] = 0x0014e258u; fn_0014db00(cpu);
    }
L_0014e258:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0014e25c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014e260:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014e264:;
    {
        cpu->r[14] = 0x0014e268u; fn_0014cbe0(cpu);
    }
L_0014e268:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014e26c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014e270:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014e274:;
    {
        cpu->r[14] = 0x0014e278u; fn_0014dcb8(cpu);
    }
L_0014e278:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_0014e27c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_0014e280:;
    {
        vfp_vadd(cpu, 13, 13, 15);
    }
L_0014e284:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_0014e288:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x50u);
    }
L_0014e28c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_0014e290:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x26u);
    }
L_0014e294:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0014e298:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_0014e29c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_0014e2a0:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_0014e2a4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x40u);
    }
L_0014e2a8:;
    {
        vfp_vadd(cpu, 13, 13, 12);
    }
L_0014e2ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_0014e2b0:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_0014e2b4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_0014e2b8:;
    {
        vfp_vadd(cpu, 15, 15, 12);
    }
L_0014e2bc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_0014e2c0:;
    {
        vfp_vadd(cpu, 13, 13, 12);
    }
L_0014e2c4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x38u);
    }
L_0014e2c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0014e2cc:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_0014e2d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_0014e2d4:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_0014e2d8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014e2dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e0e8;
        }
    }
L_0014e2e4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0014e2e8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0014e2ec:;
    {
        cpu->r[14] = 0x0014e2f0u; fn_00153c38(cpu);
    }
L_0014e2f0:;
    {
        goto L_0014e0f4;
    }
L_0014e2f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0014e2f8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0014e2fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e300u)) return;
    }
}

/* _ZN15EmitterInstance19SetParticleRendererEP16ParticleRenderer @ 0014e304 (arm) */
void fn_0014e304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e304:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_0014e308:;
    {
        wr32(cpu->r[0] + + 0xacu, cpu->r[1]);
    }
L_0014e30c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0014e310:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[3]);
    }
L_0014e314:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15EmitterInstance6RenderEv @ 0014e318 (arm) */
void fn_0014e318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e318:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014e31c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e320:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014e324:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_0014e328:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014e32c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e330u)) return;
        }
    }
L_0014e330:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_0014e334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014e338:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0014e33c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0014e340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0014e344:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_0014e348:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0014e34c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0014e350:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0014e354:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0014e358:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0014e35c:;
    {
        cpu->r[14] = 0x0014e360u; guest_call(cpu, cpu->r[3]);
    }
L_0014e360:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x78u);
    }
L_0014e364:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014e368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e334;
        }
    }
L_0014e36c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e370u)) return;
    }
}

/* _ZN15EmitterInstanceC1Ev @ 0014e370 (arm) */
void fn_0014e370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e370:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e374:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e378:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0014e37c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_0014e380:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_0014e384:;
    {
        cpu->r[14] = 0x0014e388u; fn_001535e0(cpu);
    }
L_0014e388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_0014e38c:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_0014e390:;
    {
        cpu->r[14] = 0x0014e394u; fn_001535e0(cpu);
    }
L_0014e394:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e39cu + + 0x24u);
    }
L_0014e398:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[5]);
    }
L_0014e39c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e3a0:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0014e3a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e3acu + + 0x18u);
    }
L_0014e3a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e3ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0014e3b0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_0014e3b4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e3b8:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_0014e3bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e3c0u)) return;
    }
}

/* _ZN15EmitterInstanceC2Ev @ 0014e3c8 (arm) */
void fn_0014e3c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e3c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e3cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e3d0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0014e3d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_0014e3d8:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[5]);
    }
L_0014e3dc:;
    {
        cpu->r[14] = 0x0014e3e0u; fn_001535e0(cpu);
    }
L_0014e3e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_0014e3e4:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[5]);
    }
L_0014e3e8:;
    {
        cpu->r[14] = 0x0014e3ecu; fn_001535e0(cpu);
    }
L_0014e3ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e3f4u + + 0x24u);
    }
L_0014e3f0:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[5]);
    }
L_0014e3f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e3f8:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0014e3fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e404u + + 0x18u);
    }
L_0014e400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e404:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0014e408:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_0014e40c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e410:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[5]);
    }
L_0014e414:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e418u)) return;
    }
}

/* _ZN15EmitterInstance19RemoveDeadParticlesEv @ 0014e420 (arm) */
void fn_0014e420(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e420:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014e424:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e428:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0014e42c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0014e430:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014e434:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e438u)) return;
        }
    }
L_0014e438:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0014e43c:;
    {
        goto L_0014e454;
    }
L_0014e440:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x78u);
    }
L_0014e444:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0014e448:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e44c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014e450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e480;
        }
    }
L_0014e454:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x48u);
    }
L_0014e458:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x4au);
    }
L_0014e45c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0014e460:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0014e440;
        }
    }
L_0014e464:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x78u);
    }
L_0014e468:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0014e46c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0014e470:;
    {
        cpu->r[14] = 0x0014e474u; fn_001504a8(cpu);
    }
L_0014e474:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e478:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014e47c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e454;
        }
    }
L_0014e480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e484u)) return;
    }
}

/* _ZN15EmitterInstance4StopEv @ 0014e484 (arm) */
void fn_0014e484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e484:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e488:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014e48c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e490:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e4b0;
        }
    }
L_0014e498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e49c:;
    {
        cpu->r[14] = 0x0014e4a0u; fn_00150554(cpu);
    }
L_0014e4a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e4a4:;
    {
        cpu->r[14] = 0x0014e4a8u; fn_0018ba20(cpu);
    }
L_0014e4a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e4ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0014e4b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xacu);
    }
L_0014e4b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014e4b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e4c0u + + 0x34u);
    }
L_0014e4bc:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[2]);
    }
L_0014e4c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0014e4c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e4c8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0014e4cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e4d4u + + 0x24u);
    }
L_0014e4d0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e4d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e4e8;
        }
    }
L_0014e4d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_0014e4dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0014e4e0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0014e4e4:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0014e4e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e4ec:;
    {
        wr32(cpu->r[4] + + 0xacu, cpu->r[3]);
    }
L_0014e4f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e4f4u)) return;
    }
}

/* _ZN15EmitterInstance22StopOnlyIfQueueIsEmptyEv @ 0014e4fc (arm) */
void fn_0014e4fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e4fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0014e500:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014e504:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014e508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e520;
        }
    }
L_0014e50c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014e510:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014e514:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e520;
        }
    }
L_0014e518:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014e51c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e520u)) return;
    }
L_0014e520:;
    {
        cpu->r[14] = 0x0014e524u; fn_0014e484(cpu);
    }
L_0014e524:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0014e528:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e52cu)) return;
    }
}

/* _ZN15EmitterInstance5StartEP7EmitterP11SceneObjectP7CMatrixi @ 0014e52c (arm) */
void fn_0014e52c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e52c:;
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
L_0014e530:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e534:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0014e538:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0014e53c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0014e540:;
    {
        cpu->r[14] = 0x0014e544u; fn_0014e484(cpu);
    }
L_0014e544:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_0014e548:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0014e54c:;
    {
        cpu->r[14] = 0x0014e550u; fn_0018ba6c(cpu);
    }
L_0014e550:;
    {
        cpu->r[6] = rd32(0x0014e558u + + 0x90u);
    }
L_0014e554:;
    {
        cpu->r[6] = add_flags(cpu, 0x0014e55cu, cpu->r[6], 0, 0);
    }
L_0014e558:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0014e55c:;
    {
        cpu->r[14] = 0x0014e560u; fn_0015028c(cpu);
    }
L_0014e560:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0014e564:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
    }
L_0014e568:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_0014e56c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e5d4;
        }
    }
L_0014e570:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0014e574:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e578:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_0014e57c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0014e580:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0014e584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e5dc;
        }
    }
L_0014e588:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0014e58c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_0014e590:;
    {
        cpu->r[14] = 0x0014e594u; fn_00153624(cpu);
    }
L_0014e594:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x3au);
    }
L_0014e598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e59c:;
    {
        wr16(cpu->r[4] + + 0x9cu, cpu->r[3]);
    }
L_0014e5a0:;
    {
        cpu->r[14] = 0x0014e5a4u; fn_0014cb1c(cpu);
    }
L_0014e5a4:;
    {
        cpu->r[3] = rd32(0x0014e5acu + + 0x40u);
    }
L_0014e5a8:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_0014e5ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0014e5b0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0014e5b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0014e5b8:;
    {
        wr16(cpu->r[4] + + 0x9eu, cpu->r[0]);
    }
L_0014e5bc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014e5c0:;
    {
        cpu->r[14] = 0x0014e5c4u; fn_00147ca4(cpu);
    }
L_0014e5c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e5c8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0014e5cc:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_0014e5d0:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[0]);
    }
L_0014e5d4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0014e5d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e5dcu)) return;
    }
L_0014e5dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_0014e5e0:;
    {
        cpu->r[14] = 0x0014e5e4u; fn_00153600(cpu);
    }
L_0014e5e4:;
    {
        goto L_0014e594;
    }
}

/* _ZN15EmitterInstance15UpdateEmitterTMEv @ 0014e5f0 (arm) */
void fn_0014e5f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e5f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_0014e5f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e5f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0014e5fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_0014e600:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e674;
        }
    }
L_0014e608:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_0014e60c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0014e610:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014e614:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_0014e618:;
    {
        cpu->r[14] = 0x0014e61cu; fn_00153568(cpu);
    }
L_0014e61c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0014e620:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e624:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e628:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0014e62c:;
    {
        cpu->r[14] = 0x0014e630u; fn_001535e0(cpu);
    }
L_0014e630:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0014e634:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0014e638:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014e63c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0014e640:;
    {
        cpu->r[14] = 0x0014e644u; fn_0014d830(cpu);
    }
L_0014e644:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014e648:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0014e64c:;
    {
        cpu->r[14] = 0x0014e650u; fn_00153478(cpu);
    }
L_0014e650:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_0014e654:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0014e658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e66c;
        }
    }
L_0014e65c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e660:;
    {
        cpu->r[14] = 0x0014e664u; fn_000b2bc8(cpu);
    }
L_0014e664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e668:;
    {
        cpu->r[14] = 0x0014e66cu; fn_0018ba20(cpu);
    }
L_0014e66c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_0014e670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e674u)) return;
    }
L_0014e674:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_0014e678:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_0014e67c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0014e680:;
    {
        cpu->r[14] = 0x0014e684u; fn_00153624(cpu);
    }
L_0014e684:;
    {
        goto L_0014e61c;
    }
}

/* _ZN15EmitterInstance6UpdateEv @ 0014e688 (arm) */
void fn_0014e688(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e688:;
    {
        cpu->r[3] = rd16(cpu->r[0] + + 0x9cu);
    }
L_0014e68c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014e690:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014e694:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0014e698:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0014e69c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e6a0:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[0] + + 0x9cu, cpu->r[3]);
        }
    }
L_0014e6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e6b0;
        }
    }
L_0014e6a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014e6ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e6b0u)) return;
    }
L_0014e6b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0014e6b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0014e6b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0014e6bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0014e6c0:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000008u;
        cpu->r[0] = rd32(cpu->r[1]);
        cpu->r[1] = wb_tmp;
    }
L_0014e6c4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0014e6c8:;
    {
        cpu->r[14] = 0x0014e6ccu; fn_0014ca9c(cpu);
    }
L_0014e6cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0014e6d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e7ac;
        }
    }
L_0014e6d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e6d8:;
    {
        cpu->r[14] = 0x0014e6dcu; fn_0014e5f0(cpu);
    }
L_0014e6dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e6e0:;
    {
        cpu->r[14] = 0x0014e6e4u; fn_0014e420(cpu);
    }
L_0014e6e4:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x9eu);
    }
L_0014e6e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0014e6ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e728;
        }
    }
L_0014e6f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0014e6f4:;
    {
        wr16(cpu->r[4] + + 0x9eu, cpu->r[3]);
    }
L_0014e6f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014e6fc:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0014e700:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e6a8;
        }
    }
L_0014e708:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_0014e70c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e710:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0014e714:;
    {
        cpu->r[14] = 0x0014e718u; fn_00150010(cpu);
    }
L_0014e718:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x78u);
    }
L_0014e71c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e720:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e70c;
        }
    }
L_0014e724:;
    {
        goto L_0014e6a8;
    }
L_0014e728:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xa0u);
    }
L_0014e72c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014e730:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0014e6f0;
        }
    }
L_0014e734:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0014e738:;
    {
        cpu->r[14] = 0x0014e73cu; fn_0014cb1c(cpu);
    }
L_0014e73c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0014e740:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0014e744:;
    {
        wr16(cpu->r[4] + + 0x9eu, cpu->r[0]);
    }
L_0014e748:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0014e74c:;
    {
        cpu->r[14] = 0x0014e750u; fn_0014d6f0(cpu);
    }
L_0014e750:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xb4u);
    }
L_0014e754:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb0u);
    }
L_0014e758:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_0014e75c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0xcu);
    }
L_0014e760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_0014e764:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0014e768:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xacu);
    }
L_0014e76c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0014e770:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014e774:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_0014e778:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0014e77c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0014e780:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0014e784:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0014e78cu + + 0x30u);
    }
L_0014e788:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_0014e78c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_0014e790:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,15);
    }
L_0014e794:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0014e798:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0014e79c:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_0014e7a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e7a4:;
    {
        cpu->r[14] = 0x0014e7a8u; fn_0014e020(cpu);
    }
L_0014e7a8:;
    {
        goto L_0014e6f8;
    }
L_0014e7ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e7b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0014e7b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0014e7b8:;
    {
        return fn_0014e484(cpu);
    }
}

/* _ZN15EmitterInstanceD1Ev @ 0014e7c0 (arm) */
void fn_0014e7c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e7c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e7c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e7c8:;
    {
        cpu->r[14] = 0x0014e7ccu; fn_0014e484(cpu);
    }
L_0014e7cc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x98u);
    }
L_0014e7d0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e7d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e7f0;
        }
    }
L_0014e7d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e7dc:;
    {
        cpu->r[14] = 0x0014e7e0u; fn_000b2bc8(cpu);
    }
L_0014e7e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e7e4:;
    {
        cpu->r[14] = 0x0014e7e8u; fn_0018ba20(cpu);
    }
L_0014e7e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e7ec:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_0014e7f0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x54u);
    }
L_0014e7f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e7f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e814;
        }
    }
L_0014e7fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e800:;
    {
        cpu->r[14] = 0x0014e804u; fn_000b2bc8(cpu);
    }
L_0014e804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e808:;
    {
        cpu->r[14] = 0x0014e80cu; fn_0018ba20(cpu);
    }
L_0014e80c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e810:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_0014e814:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e818:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e81cu)) return;
    }
}

/* _ZN15EmitterInstanceD2Ev @ 0014e81c (arm) */
void fn_0014e81c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e81c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e820:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e824:;
    {
        cpu->r[14] = 0x0014e828u; fn_0014e484(cpu);
    }
L_0014e828:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x98u);
    }
L_0014e82c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e84c;
        }
    }
L_0014e834:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e838:;
    {
        cpu->r[14] = 0x0014e83cu; fn_000b2bc8(cpu);
    }
L_0014e83c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e840:;
    {
        cpu->r[14] = 0x0014e844u; fn_0018ba20(cpu);
    }
L_0014e844:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e848:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_0014e84c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x54u);
    }
L_0014e850:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0014e854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0014e870;
        }
    }
L_0014e858:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e85c:;
    {
        cpu->r[14] = 0x0014e860u; fn_000b2bc8(cpu);
    }
L_0014e860:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014e864:;
    {
        cpu->r[14] = 0x0014e868u; fn_0018ba20(cpu);
    }
L_0014e868:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0014e86c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_0014e870:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e874:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e878u)) return;
    }
}

/* _ZN12EmitterShape17GetEmissionVolumeEi @ 0014e878 (arm) */
void fn_0014e878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e878:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0014e87c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShape16SetParticleCountEi @ 0014e880 (arm) */
void fn_0014e880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e880:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17EmitterShape_Disc16SetParticleCountEi @ 0014e884 (arm) */
void fn_0014e884(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e884:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0014e888:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShapeC2Ev @ 0014e88c (arm) */
void fn_0014e88c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e88c:;
    {
        cpu->r[3] = rd32(0x0014e894u + + 0x14u);
    }
L_0014e890:;
    {
        cpu->r[2] = rd32(0x0014e898u + + 0x14u);
    }
L_0014e894:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014e89cu, cpu->r[3], 0, 0);
    }
L_0014e898:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014e89c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014e8a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014e8a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShapeC1Ev @ 0014e8b0 (arm) */
void fn_0014e8b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8b0:;
    {
        cpu->r[3] = rd32(0x0014e8b8u + + 0x14u);
    }
L_0014e8b4:;
    {
        cpu->r[2] = rd32(0x0014e8bcu + + 0x14u);
    }
L_0014e8b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014e8c0u, cpu->r[3], 0, 0);
    }
L_0014e8bc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0014e8c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0014e8c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0014e8c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShapeD2Ev @ 0014e8d4 (arm) */
void fn_0014e8d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShapeD1Ev @ 0014e8d8 (arm) */
void fn_0014e8d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShape4LoadEP8LZMAFile @ 0014e8dc (arm) */
void fn_0014e8dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014e8e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12EmitterShape13SpawnParticleEPfii @ 0014e8e4 (arm) */
void fn_0014e8e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0014e8ecu + + 0xcu);
    }
L_0014e8e8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e8ec:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e8f0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0014e8f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17EmitterShape_DiscC2Ev @ 0014e8fc (arm) */
void fn_0014e8fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e8fc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e900:;
    {
        cpu->r[5] = rd32(0x0014e908u + + 0x2cu);
    }
L_0014e904:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e908:;
    {
        cpu->r[14] = 0x0014e90cu; fn_0014e88c(cpu);
    }
L_0014e90c:;
    {
        cpu->r[3] = rd32(0x0014e914u + + 0x24u);
    }
L_0014e910:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014e918u, cpu->r[5], 0, 0);
    }
L_0014e914:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014e918:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e91c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_0014e920:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014e924:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0014e928:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014e92c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014e930:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e934u)) return;
    }
}

/* _ZN17EmitterShape_DiscC1Ev @ 0014e93c (arm) */
void fn_0014e93c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e93c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0014e940:;
    {
        cpu->r[5] = rd32(0x0014e948u + + 0x2cu);
    }
L_0014e944:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014e948:;
    {
        cpu->r[14] = 0x0014e94cu; fn_0014e88c(cpu);
    }
L_0014e94c:;
    {
        cpu->r[3] = rd32(0x0014e954u + + 0x24u);
    }
L_0014e950:;
    {
        cpu->r[5] = add_flags(cpu, 0x0014e958u, cpu->r[5], 0, 0);
    }
L_0014e954:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0014e958:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014e95c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_0014e960:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0014e964:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_0014e968:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014e96c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014e970:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e974u)) return;
    }
}

/* _ZN17EmitterShape_Disc17GetEmissionVolumeEi @ 0014e97c (arm) */
void fn_0014e97c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e97c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x8u);
    }
L_0014e980:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0014e984:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd16(cpu->r[0] + + 0xau);
        }
    }
L_0014e988:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0014e98c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17EmitterShape_Cube4LoadEP8LZMAFile @ 0014e990 (arm) */
void fn_0014e990(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e990:;
    {
        cpu->r[1] = rd32(0x0014e998u + + 0x3cu);
    }
L_0014e994:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014e998:;
    {
        cpu->r[2] = rd32(0x0014e9a0u + + 0x38u);
    }
L_0014e99c:;
    {
        cpu->r[3] = rd32(0x0014e9a4u + + 0x38u);
    }
L_0014e9a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014e9a8u, cpu->r[1], 0, 0);
    }
L_0014e9a4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014e9a8:;
    {
        cpu->r[12] = rd32(0x0014e9b0u + + 0x30u);
    }
L_0014e9ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014e9b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014e9b8u, cpu->r[2], 0, 0);
    }
L_0014e9b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014e9bcu, cpu->r[3], 0, 0);
    }
L_0014e9b8:;
    {
        cpu->r[14] = 0x00000134u;
    }
L_0014e9bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014e9c4u, cpu->r[12], 0, 0);
    }
L_0014e9c0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014e9c4:;
    {
        cpu->r[14] = 0x0014e9c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014e9c8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014e9cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014e9d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014e9d4u)) return;
    }
}

/* _ZN17EmitterShape_CubeC1Ev @ 0014e9e4 (arm) */
void fn_0014e9e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014e9e4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014e9e8:;
    {
        cpu->r[4] = rd32(0x0014e9f0u + + 0x5cu);
    }
L_0014e9ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014e9f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014e9f4:;
    {
        cpu->r[14] = 0x0014e9f8u; fn_0014e88c(cpu);
    }
L_0014e9f8:;
    {
        cpu->r[3] = rd32(0x0014ea00u + + 0x50u);
    }
L_0014e9fc:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ea04u, cpu->r[4], 0, 0);
    }
L_0014ea00:;
    {
        cpu->r[1] = rd32(0x0014ea08u + + 0x4cu);
    }
L_0014ea04:;
    {
        cpu->r[2] = rd32(0x0014ea0cu + + 0x4cu);
    }
L_0014ea08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ea0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ea10:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ea18u, cpu->r[1], 0, 0);
    }
L_0014ea14:;
    {
        cpu->r[12] = rd32(0x0014ea1cu + + 0x40u);
    }
L_0014ea18:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ea20u, cpu->r[2], 0, 0);
    }
L_0014ea1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ea20:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ea24:;
    {
        cpu->r[3] = rd32(0x0014ea2cu + + 0x34u);
    }
L_0014ea28:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ea30u, cpu->r[12], 0, 0);
    }
L_0014ea2c:;
    {
        cpu->r[14] = 0x00000124u;
    }
L_0014ea30:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0014ea34:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ea3cu, cpu->r[3], 0, 0);
    }
L_0014ea38:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ea3c:;
    {
        cpu->r[14] = 0x0014ea40u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ea40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ea44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ea48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ea4cu)) return;
    }
}

/* _ZN17EmitterShape_CubeC2Ev @ 0014ea64 (arm) */
void fn_0014ea64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ea64:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ea68:;
    {
        cpu->r[4] = rd32(0x0014ea70u + + 0x5cu);
    }
L_0014ea6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ea70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014ea74:;
    {
        cpu->r[14] = 0x0014ea78u; fn_0014e88c(cpu);
    }
L_0014ea78:;
    {
        cpu->r[3] = rd32(0x0014ea80u + + 0x50u);
    }
L_0014ea7c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ea84u, cpu->r[4], 0, 0);
    }
L_0014ea80:;
    {
        cpu->r[1] = rd32(0x0014ea88u + + 0x4cu);
    }
L_0014ea84:;
    {
        cpu->r[2] = rd32(0x0014ea8cu + + 0x4cu);
    }
L_0014ea88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ea8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ea90:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ea98u, cpu->r[1], 0, 0);
    }
L_0014ea94:;
    {
        cpu->r[12] = rd32(0x0014ea9cu + + 0x40u);
    }
L_0014ea98:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014eaa0u, cpu->r[2], 0, 0);
    }
L_0014ea9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014eaa0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014eaa4:;
    {
        cpu->r[3] = rd32(0x0014eaacu + + 0x34u);
    }
L_0014eaa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014eab0u, cpu->r[12], 0, 0);
    }
L_0014eaac:;
    {
        cpu->r[14] = 0x00000124u;
    }
L_0014eab0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0014eab4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014eabcu, cpu->r[3], 0, 0);
    }
L_0014eab8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014eabc:;
    {
        cpu->r[14] = 0x0014eac0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014eac0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014eac4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014eac8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014eaccu)) return;
    }
}

/* _ZN18EmitterShape_Torus4LoadEP8LZMAFile @ 0014eae4 (arm) */
void fn_0014eae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014eae4:;
    {
        cpu->r[1] = rd32(0x0014eaecu + + 0x40u);
    }
L_0014eae8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014eaec:;
    {
        cpu->r[12] = rd32(0x0014eaf4u + + 0x3cu);
    }
L_0014eaf0:;
    {
        cpu->r[2] = rd32(0x0014eaf8u + + 0x3cu);
    }
L_0014eaf4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014eafcu, cpu->r[1], 0, 0);
    }
L_0014eaf8:;
    {
        cpu->r[3] = rd32(0x0014eb00u + + 0x38u);
    }
L_0014eafc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014eb04u, cpu->r[12], 0, 0);
    }
L_0014eb00:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014eb04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014eb08:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014eb10u, cpu->r[2], 0, 0);
    }
L_0014eb0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014eb14u, cpu->r[3], 0, 0);
    }
L_0014eb10:;
    {
        cpu->r[14] = 0x00000117u;
    }
L_0014eb14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0014eb18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014eb1c:;
    {
        cpu->r[14] = 0x0014eb20u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014eb20:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014eb24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014eb28:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014eb2cu)) return;
    }
}

/* _ZN18EmitterShape_TorusC1Ev @ 0014eb3c (arm) */
void fn_0014eb3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014eb3c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014eb40:;
    {
        cpu->r[4] = rd32(0x0014eb48u + + 0x5cu);
    }
L_0014eb44:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014eb48:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014eb4c:;
    {
        cpu->r[14] = 0x0014eb50u; fn_0014e88c(cpu);
    }
L_0014eb50:;
    {
        cpu->r[3] = rd32(0x0014eb58u + + 0x50u);
    }
L_0014eb54:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014eb5cu, cpu->r[4], 0, 0);
    }
L_0014eb58:;
    {
        cpu->r[1] = rd32(0x0014eb60u + + 0x4cu);
    }
L_0014eb5c:;
    {
        cpu->r[2] = rd32(0x0014eb64u + + 0x4cu);
    }
L_0014eb60:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014eb64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014eb68:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014eb70u, cpu->r[1], 0, 0);
    }
L_0014eb6c:;
    {
        cpu->r[12] = rd32(0x0014eb74u + + 0x40u);
    }
L_0014eb70:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014eb78u, cpu->r[2], 0, 0);
    }
L_0014eb74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014eb78:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014eb7c:;
    {
        cpu->r[3] = rd32(0x0014eb84u + + 0x34u);
    }
L_0014eb80:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014eb88u, cpu->r[12], 0, 0);
    }
L_0014eb84:;
    {
        cpu->r[14] = 0x00000107u;
    }
L_0014eb88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_0014eb8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014eb94u, cpu->r[3], 0, 0);
    }
L_0014eb90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014eb94:;
    {
        cpu->r[14] = 0x0014eb98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014eb98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014eb9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014eba0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014eba4u)) return;
    }
}

/* _ZN18EmitterShape_TorusC2Ev @ 0014ebbc (arm) */
void fn_0014ebbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ebbc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ebc0:;
    {
        cpu->r[4] = rd32(0x0014ebc8u + + 0x5cu);
    }
L_0014ebc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ebc8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014ebcc:;
    {
        cpu->r[14] = 0x0014ebd0u; fn_0014e88c(cpu);
    }
L_0014ebd0:;
    {
        cpu->r[3] = rd32(0x0014ebd8u + + 0x50u);
    }
L_0014ebd4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ebdcu, cpu->r[4], 0, 0);
    }
L_0014ebd8:;
    {
        cpu->r[1] = rd32(0x0014ebe0u + + 0x4cu);
    }
L_0014ebdc:;
    {
        cpu->r[2] = rd32(0x0014ebe4u + + 0x4cu);
    }
L_0014ebe0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ebe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ebe8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ebf0u, cpu->r[1], 0, 0);
    }
L_0014ebec:;
    {
        cpu->r[12] = rd32(0x0014ebf4u + + 0x40u);
    }
L_0014ebf0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ebf8u, cpu->r[2], 0, 0);
    }
L_0014ebf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ebf8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ebfc:;
    {
        cpu->r[3] = rd32(0x0014ec04u + + 0x34u);
    }
L_0014ec00:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ec08u, cpu->r[12], 0, 0);
    }
L_0014ec04:;
    {
        cpu->r[14] = 0x00000107u;
    }
L_0014ec08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_0014ec0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ec14u, cpu->r[3], 0, 0);
    }
L_0014ec10:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ec14:;
    {
        cpu->r[14] = 0x0014ec18u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ec18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ec1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ec20:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ec24u)) return;
    }
}

/* _ZN17EmitterShape_Line4LoadEP8LZMAFile @ 0014ec3c (arm) */
void fn_0014ec3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ec3c:;
    {
        cpu->r[1] = rd32(0x0014ec44u + + 0x40u);
    }
L_0014ec40:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ec44:;
    {
        cpu->r[12] = rd32(0x0014ec4cu + + 0x3cu);
    }
L_0014ec48:;
    {
        cpu->r[2] = rd32(0x0014ec50u + + 0x3cu);
    }
L_0014ec4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ec54u, cpu->r[1], 0, 0);
    }
L_0014ec50:;
    {
        cpu->r[3] = rd32(0x0014ec58u + + 0x38u);
    }
L_0014ec54:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ec5cu, cpu->r[12], 0, 0);
    }
L_0014ec58:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014ec5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ec60:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ec68u, cpu->r[2], 0, 0);
    }
L_0014ec64:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ec6cu, cpu->r[3], 0, 0);
    }
L_0014ec68:;
    {
        cpu->r[14] = 0x000000fau;
    }
L_0014ec6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000038u, 0, 0);
    }
L_0014ec70:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ec74:;
    {
        cpu->r[14] = 0x0014ec78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ec78:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014ec7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ec80:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ec84u)) return;
    }
}

/* _ZN17EmitterShape_LineC1Ev @ 0014ec94 (arm) */
void fn_0014ec94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ec94:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ec98:;
    {
        cpu->r[4] = rd32(0x0014eca0u + + 0x5cu);
    }
L_0014ec9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014eca0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014eca4:;
    {
        cpu->r[14] = 0x0014eca8u; fn_0014e88c(cpu);
    }
L_0014eca8:;
    {
        cpu->r[3] = rd32(0x0014ecb0u + + 0x50u);
    }
L_0014ecac:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ecb4u, cpu->r[4], 0, 0);
    }
L_0014ecb0:;
    {
        cpu->r[1] = rd32(0x0014ecb8u + + 0x4cu);
    }
L_0014ecb4:;
    {
        cpu->r[2] = rd32(0x0014ecbcu + + 0x4cu);
    }
L_0014ecb8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ecbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ecc0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ecc8u, cpu->r[1], 0, 0);
    }
L_0014ecc4:;
    {
        cpu->r[12] = rd32(0x0014ecccu + + 0x40u);
    }
L_0014ecc8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ecd0u, cpu->r[2], 0, 0);
    }
L_0014eccc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ecd0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ecd4:;
    {
        cpu->r[3] = rd32(0x0014ecdcu + + 0x34u);
    }
L_0014ecd8:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ece0u, cpu->r[12], 0, 0);
    }
L_0014ecdc:;
    {
        cpu->r[14] = 0x000000eau;
    }
L_0014ece0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_0014ece4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ececu, cpu->r[3], 0, 0);
    }
L_0014ece8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ecec:;
    {
        cpu->r[14] = 0x0014ecf0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ecf0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ecf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ecf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ecfcu)) return;
    }
}

/* _ZN17EmitterShape_LineC2Ev @ 0014ed14 (arm) */
void fn_0014ed14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ed14:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ed18:;
    {
        cpu->r[4] = rd32(0x0014ed20u + + 0x5cu);
    }
L_0014ed1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ed20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014ed24:;
    {
        cpu->r[14] = 0x0014ed28u; fn_0014e88c(cpu);
    }
L_0014ed28:;
    {
        cpu->r[3] = rd32(0x0014ed30u + + 0x50u);
    }
L_0014ed2c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ed34u, cpu->r[4], 0, 0);
    }
L_0014ed30:;
    {
        cpu->r[1] = rd32(0x0014ed38u + + 0x4cu);
    }
L_0014ed34:;
    {
        cpu->r[2] = rd32(0x0014ed3cu + + 0x4cu);
    }
L_0014ed38:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ed3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ed40:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ed48u, cpu->r[1], 0, 0);
    }
L_0014ed44:;
    {
        cpu->r[12] = rd32(0x0014ed4cu + + 0x40u);
    }
L_0014ed48:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ed50u, cpu->r[2], 0, 0);
    }
L_0014ed4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ed50:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ed54:;
    {
        cpu->r[3] = rd32(0x0014ed5cu + + 0x34u);
    }
L_0014ed58:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ed60u, cpu->r[12], 0, 0);
    }
L_0014ed5c:;
    {
        cpu->r[14] = 0x000000eau;
    }
L_0014ed60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_0014ed64:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ed6cu, cpu->r[3], 0, 0);
    }
L_0014ed68:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ed6c:;
    {
        cpu->r[14] = 0x0014ed70u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ed70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ed74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ed78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ed7cu)) return;
    }
}

/* _ZN21EmitterShape_Cylinder4LoadEP8LZMAFile @ 0014ed94 (arm) */
void fn_0014ed94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ed94:;
    {
        cpu->r[1] = rd32(0x0014ed9cu + + 0x40u);
    }
L_0014ed98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ed9c:;
    {
        cpu->r[12] = rd32(0x0014eda4u + + 0x3cu);
    }
L_0014eda0:;
    {
        cpu->r[2] = rd32(0x0014eda8u + + 0x3cu);
    }
L_0014eda4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014edacu, cpu->r[1], 0, 0);
    }
L_0014eda8:;
    {
        cpu->r[3] = rd32(0x0014edb0u + + 0x38u);
    }
L_0014edac:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014edb4u, cpu->r[12], 0, 0);
    }
L_0014edb0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014edb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014edb8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014edc0u, cpu->r[2], 0, 0);
    }
L_0014edbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014edc4u, cpu->r[3], 0, 0);
    }
L_0014edc0:;
    {
        cpu->r[14] = 0x000000ddu;
    }
L_0014edc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000054u, 0, 0);
    }
L_0014edc8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014edcc:;
    {
        cpu->r[14] = 0x0014edd0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014edd0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014edd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014edd8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014eddcu)) return;
    }
}

/* _ZN21EmitterShape_CylinderC1Ev @ 0014edec (arm) */
void fn_0014edec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014edec:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014edf0:;
    {
        cpu->r[4] = rd32(0x0014edf8u + + 0x5cu);
    }
L_0014edf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014edf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014edfc:;
    {
        cpu->r[14] = 0x0014ee00u; fn_0014e88c(cpu);
    }
L_0014ee00:;
    {
        cpu->r[3] = rd32(0x0014ee08u + + 0x50u);
    }
L_0014ee04:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ee0cu, cpu->r[4], 0, 0);
    }
L_0014ee08:;
    {
        cpu->r[1] = rd32(0x0014ee10u + + 0x4cu);
    }
L_0014ee0c:;
    {
        cpu->r[2] = rd32(0x0014ee14u + + 0x4cu);
    }
L_0014ee10:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ee14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ee18:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ee20u, cpu->r[1], 0, 0);
    }
L_0014ee1c:;
    {
        cpu->r[12] = rd32(0x0014ee24u + + 0x40u);
    }
L_0014ee20:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ee28u, cpu->r[2], 0, 0);
    }
L_0014ee24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ee28:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ee2c:;
    {
        cpu->r[3] = rd32(0x0014ee34u + + 0x34u);
    }
L_0014ee30:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ee38u, cpu->r[12], 0, 0);
    }
L_0014ee34:;
    {
        cpu->r[14] = 0x000000cdu;
    }
L_0014ee38:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005cu, 0, 0);
    }
L_0014ee3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ee44u, cpu->r[3], 0, 0);
    }
L_0014ee40:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ee44:;
    {
        cpu->r[14] = 0x0014ee48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ee48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014ee4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ee50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ee54u)) return;
    }
}

/* _ZN21EmitterShape_CylinderC2Ev @ 0014ee6c (arm) */
void fn_0014ee6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ee6c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ee70:;
    {
        cpu->r[4] = rd32(0x0014ee78u + + 0x5cu);
    }
L_0014ee74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ee78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014ee7c:;
    {
        cpu->r[14] = 0x0014ee80u; fn_0014e88c(cpu);
    }
L_0014ee80:;
    {
        cpu->r[3] = rd32(0x0014ee88u + + 0x50u);
    }
L_0014ee84:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ee8cu, cpu->r[4], 0, 0);
    }
L_0014ee88:;
    {
        cpu->r[1] = rd32(0x0014ee90u + + 0x4cu);
    }
L_0014ee8c:;
    {
        cpu->r[2] = rd32(0x0014ee94u + + 0x4cu);
    }
L_0014ee90:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ee94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ee98:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014eea0u, cpu->r[1], 0, 0);
    }
L_0014ee9c:;
    {
        cpu->r[12] = rd32(0x0014eea4u + + 0x40u);
    }
L_0014eea0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014eea8u, cpu->r[2], 0, 0);
    }
L_0014eea4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014eea8:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014eeac:;
    {
        cpu->r[3] = rd32(0x0014eeb4u + + 0x34u);
    }
L_0014eeb0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014eeb8u, cpu->r[12], 0, 0);
    }
L_0014eeb4:;
    {
        cpu->r[14] = 0x000000cdu;
    }
L_0014eeb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000005cu, 0, 0);
    }
L_0014eebc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014eec4u, cpu->r[3], 0, 0);
    }
L_0014eec0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014eec4:;
    {
        cpu->r[14] = 0x0014eec8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014eec8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014eecc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014eed0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014eed4u)) return;
    }
}

/* _ZN19EmitterShape_Sphere4LoadEP8LZMAFile @ 0014eeec (arm) */
void fn_0014eeec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014eeec:;
    {
        cpu->r[1] = rd32(0x0014eef4u + + 0x40u);
    }
L_0014eef0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014eef4:;
    {
        cpu->r[12] = rd32(0x0014eefcu + + 0x3cu);
    }
L_0014eef8:;
    {
        cpu->r[2] = rd32(0x0014ef00u + + 0x3cu);
    }
L_0014eefc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ef04u, cpu->r[1], 0, 0);
    }
L_0014ef00:;
    {
        cpu->r[3] = rd32(0x0014ef08u + + 0x38u);
    }
L_0014ef04:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ef0cu, cpu->r[12], 0, 0);
    }
L_0014ef08:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0014ef0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ef10:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ef18u, cpu->r[2], 0, 0);
    }
L_0014ef14:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ef1cu, cpu->r[3], 0, 0);
    }
L_0014ef18:;
    {
        cpu->r[14] = 0x00000057u;
    }
L_0014ef1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000074u, 0, 0);
    }
L_0014ef20:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ef24:;
    {
        cpu->r[14] = 0x0014ef28u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014ef28:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0014ef2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014ef30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014ef34u)) return;
    }
}

/* _ZN19EmitterShape_SphereC1Ev @ 0014ef44 (arm) */
void fn_0014ef44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014ef44:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014ef48:;
    {
        cpu->r[4] = rd32(0x0014ef50u + + 0x5cu);
    }
L_0014ef4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014ef50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014ef54:;
    {
        cpu->r[14] = 0x0014ef58u; fn_0014e88c(cpu);
    }
L_0014ef58:;
    {
        cpu->r[3] = rd32(0x0014ef60u + + 0x50u);
    }
L_0014ef5c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014ef64u, cpu->r[4], 0, 0);
    }
L_0014ef60:;
    {
        cpu->r[1] = rd32(0x0014ef68u + + 0x4cu);
    }
L_0014ef64:;
    {
        cpu->r[2] = rd32(0x0014ef6cu + + 0x4cu);
    }
L_0014ef68:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014ef6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014ef70:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014ef78u, cpu->r[1], 0, 0);
    }
L_0014ef74:;
    {
        cpu->r[12] = rd32(0x0014ef7cu + + 0x40u);
    }
L_0014ef78:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014ef80u, cpu->r[2], 0, 0);
    }
L_0014ef7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014ef80:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014ef84:;
    {
        cpu->r[3] = rd32(0x0014ef8cu + + 0x34u);
    }
L_0014ef88:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014ef90u, cpu->r[12], 0, 0);
    }
L_0014ef8c:;
    {
        cpu->r[14] = 0x00000047u;
    }
L_0014ef90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_0014ef94:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014ef9cu, cpu->r[3], 0, 0);
    }
L_0014ef98:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014ef9c:;
    {
        cpu->r[14] = 0x0014efa0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014efa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014efa4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014efa8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014efacu)) return;
    }
}

/* _ZN19EmitterShape_SphereC2Ev @ 0014efc4 (arm) */
void fn_0014efc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014efc4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0014efc8:;
    {
        cpu->r[4] = rd32(0x0014efd0u + + 0x5cu);
    }
L_0014efcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0014efd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0014efd4:;
    {
        cpu->r[14] = 0x0014efd8u; fn_0014e88c(cpu);
    }
L_0014efd8:;
    {
        cpu->r[3] = rd32(0x0014efe0u + + 0x50u);
    }
L_0014efdc:;
    {
        cpu->r[4] = add_flags(cpu, 0x0014efe4u, cpu->r[4], 0, 0);
    }
L_0014efe0:;
    {
        cpu->r[1] = rd32(0x0014efe8u + + 0x4cu);
    }
L_0014efe4:;
    {
        cpu->r[2] = rd32(0x0014efecu + + 0x4cu);
    }
L_0014efe8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014efec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0014eff0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014eff8u, cpu->r[1], 0, 0);
    }
L_0014eff4:;
    {
        cpu->r[12] = rd32(0x0014effcu + + 0x40u);
    }
L_0014eff8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f000u, cpu->r[2], 0, 0);
    }
L_0014effc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f000:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0014f004:;
    {
        cpu->r[3] = rd32(0x0014f00cu + + 0x34u);
    }
L_0014f008:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f010u, cpu->r[12], 0, 0);
    }
L_0014f00c:;
    {
        cpu->r[14] = 0x00000047u;
    }
L_0014f010:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_0014f014:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f01cu, cpu->r[3], 0, 0);
    }
L_0014f018:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f01c:;
    {
        cpu->r[14] = 0x0014f020u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0014f024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0014f028:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f02cu)) return;
    }
}

/* _ZN17EmitterShape_CubeD1Ev @ 0014f044 (arm) */
void fn_0014f044(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f044:;
    {
        cpu->r[2] = rd32(0x0014f04cu + + 0x64u);
    }
L_0014f048:;
    {
        cpu->r[3] = rd32(0x0014f050u + + 0x64u);
    }
L_0014f04c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f054u, cpu->r[2], 0, 0);
    }
L_0014f050:;
    {
        cpu->r[1] = rd32(0x0014f058u + + 0x60u);
    }
L_0014f054:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f058:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f05c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f060:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f064:;
    {
        cpu->r[2] = rd32(0x0014f06cu + + 0x50u);
    }
L_0014f068:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f070u, cpu->r[1], 0, 0);
    }
L_0014f06c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f070:;
    {
        cpu->r[12] = rd32(0x0014f078u + + 0x48u);
    }
L_0014f074:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f078:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f080u, cpu->r[2], 0, 0);
    }
L_0014f07c:;
    {
        cpu->r[3] = rd32(0x0014f084u + + 0x40u);
    }
L_0014f080:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f084:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f08cu, cpu->r[12], 0, 0);
    }
L_0014f088:;
    {
        cpu->r[14] = 0x0000012cu;
    }
L_0014f08c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f094u, cpu->r[3], 0, 0);
    }
L_0014f090:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000090u, 0, 0);
    }
L_0014f094:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f098:;
    {
        cpu->r[14] = 0x0014f09cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f09c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f0a0:;
    {
        cpu->r[14] = 0x0014f0a4u; fn_0014e8d4(cpu);
    }
L_0014f0a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f0a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f0ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f0b0u)) return;
    }
}

/* _ZN17EmitterShape_CubeD2Ev @ 0014f0c8 (arm) */
void fn_0014f0c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f0c8:;
    {
        cpu->r[2] = rd32(0x0014f0d0u + + 0x64u);
    }
L_0014f0cc:;
    {
        cpu->r[3] = rd32(0x0014f0d4u + + 0x64u);
    }
L_0014f0d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f0d8u, cpu->r[2], 0, 0);
    }
L_0014f0d4:;
    {
        cpu->r[1] = rd32(0x0014f0dcu + + 0x60u);
    }
L_0014f0d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f0dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f0e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f0e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f0e8:;
    {
        cpu->r[2] = rd32(0x0014f0f0u + + 0x50u);
    }
L_0014f0ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f0f4u, cpu->r[1], 0, 0);
    }
L_0014f0f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f0f4:;
    {
        cpu->r[12] = rd32(0x0014f0fcu + + 0x48u);
    }
L_0014f0f8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f0fc:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f104u, cpu->r[2], 0, 0);
    }
L_0014f100:;
    {
        cpu->r[3] = rd32(0x0014f108u + + 0x40u);
    }
L_0014f104:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f108:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f110u, cpu->r[12], 0, 0);
    }
L_0014f10c:;
    {
        cpu->r[14] = 0x0000012cu;
    }
L_0014f110:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f118u, cpu->r[3], 0, 0);
    }
L_0014f114:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000090u, 0, 0);
    }
L_0014f118:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f11c:;
    {
        cpu->r[14] = 0x0014f120u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f124:;
    {
        cpu->r[14] = 0x0014f128u; fn_0014e8d4(cpu);
    }
L_0014f128:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f12c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f130:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f134u)) return;
    }
}

/* _ZN18EmitterShape_TorusD1Ev @ 0014f14c (arm) */
void fn_0014f14c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f14c:;
    {
        cpu->r[2] = rd32(0x0014f154u + + 0x64u);
    }
L_0014f150:;
    {
        cpu->r[3] = rd32(0x0014f158u + + 0x64u);
    }
L_0014f154:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f15cu, cpu->r[2], 0, 0);
    }
L_0014f158:;
    {
        cpu->r[1] = rd32(0x0014f160u + + 0x60u);
    }
L_0014f15c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f160:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f164:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f168:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f16c:;
    {
        cpu->r[2] = rd32(0x0014f174u + + 0x50u);
    }
L_0014f170:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f178u, cpu->r[1], 0, 0);
    }
L_0014f174:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f178:;
    {
        cpu->r[12] = rd32(0x0014f180u + + 0x48u);
    }
L_0014f17c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f180:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f188u, cpu->r[2], 0, 0);
    }
L_0014f184:;
    {
        cpu->r[3] = rd32(0x0014f18cu + + 0x40u);
    }
L_0014f188:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f18c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f194u, cpu->r[12], 0, 0);
    }
L_0014f190:;
    {
        cpu->r[14] = 0x0000010fu;
    }
L_0014f194:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f19cu, cpu->r[3], 0, 0);
    }
L_0014f198:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000a4u, 0, 0);
    }
L_0014f19c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f1a0:;
    {
        cpu->r[14] = 0x0014f1a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f1a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f1a8:;
    {
        cpu->r[14] = 0x0014f1acu; fn_0014e8d4(cpu);
    }
L_0014f1ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f1b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f1b4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f1b8u)) return;
    }
}

/* _ZN18EmitterShape_TorusD2Ev @ 0014f1d0 (arm) */
void fn_0014f1d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f1d0:;
    {
        cpu->r[2] = rd32(0x0014f1d8u + + 0x64u);
    }
L_0014f1d4:;
    {
        cpu->r[3] = rd32(0x0014f1dcu + + 0x64u);
    }
L_0014f1d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f1e0u, cpu->r[2], 0, 0);
    }
L_0014f1dc:;
    {
        cpu->r[1] = rd32(0x0014f1e4u + + 0x60u);
    }
L_0014f1e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f1e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f1e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f1ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f1f0:;
    {
        cpu->r[2] = rd32(0x0014f1f8u + + 0x50u);
    }
L_0014f1f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f1fcu, cpu->r[1], 0, 0);
    }
L_0014f1f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f1fc:;
    {
        cpu->r[12] = rd32(0x0014f204u + + 0x48u);
    }
L_0014f200:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f204:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f20cu, cpu->r[2], 0, 0);
    }
L_0014f208:;
    {
        cpu->r[3] = rd32(0x0014f210u + + 0x40u);
    }
L_0014f20c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f210:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f218u, cpu->r[12], 0, 0);
    }
L_0014f214:;
    {
        cpu->r[14] = 0x0000010fu;
    }
L_0014f218:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f220u, cpu->r[3], 0, 0);
    }
L_0014f21c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000a4u, 0, 0);
    }
L_0014f220:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f224:;
    {
        cpu->r[14] = 0x0014f228u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f228:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f22c:;
    {
        cpu->r[14] = 0x0014f230u; fn_0014e8d4(cpu);
    }
L_0014f230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f234:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f238:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f23cu)) return;
    }
}

/* _ZN17EmitterShape_LineD1Ev @ 0014f254 (arm) */
void fn_0014f254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f254:;
    {
        cpu->r[2] = rd32(0x0014f25cu + + 0x64u);
    }
L_0014f258:;
    {
        cpu->r[3] = rd32(0x0014f260u + + 0x64u);
    }
L_0014f25c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f264u, cpu->r[2], 0, 0);
    }
L_0014f260:;
    {
        cpu->r[1] = rd32(0x0014f268u + + 0x60u);
    }
L_0014f264:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f268:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f26c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f270:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f274:;
    {
        cpu->r[2] = rd32(0x0014f27cu + + 0x50u);
    }
L_0014f278:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f280u, cpu->r[1], 0, 0);
    }
L_0014f27c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f280:;
    {
        cpu->r[12] = rd32(0x0014f288u + + 0x48u);
    }
L_0014f284:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f288:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f290u, cpu->r[2], 0, 0);
    }
L_0014f28c:;
    {
        cpu->r[3] = rd32(0x0014f294u + + 0x40u);
    }
L_0014f290:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f294:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f29cu, cpu->r[12], 0, 0);
    }
L_0014f298:;
    {
        cpu->r[14] = 0x000000f2u;
    }
L_0014f29c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f2a4u, cpu->r[3], 0, 0);
    }
L_0014f2a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b8u, 0, 0);
    }
L_0014f2a4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f2a8:;
    {
        cpu->r[14] = 0x0014f2acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f2ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f2b0:;
    {
        cpu->r[14] = 0x0014f2b4u; fn_0014e8d4(cpu);
    }
L_0014f2b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f2b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f2bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f2c0u)) return;
    }
}

/* _ZN17EmitterShape_LineD2Ev @ 0014f2d8 (arm) */
void fn_0014f2d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f2d8:;
    {
        cpu->r[2] = rd32(0x0014f2e0u + + 0x64u);
    }
L_0014f2dc:;
    {
        cpu->r[3] = rd32(0x0014f2e4u + + 0x64u);
    }
L_0014f2e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f2e8u, cpu->r[2], 0, 0);
    }
L_0014f2e4:;
    {
        cpu->r[1] = rd32(0x0014f2ecu + + 0x60u);
    }
L_0014f2e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f2ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f2f0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f2f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f2f8:;
    {
        cpu->r[2] = rd32(0x0014f300u + + 0x50u);
    }
L_0014f2fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f304u, cpu->r[1], 0, 0);
    }
L_0014f300:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f304:;
    {
        cpu->r[12] = rd32(0x0014f30cu + + 0x48u);
    }
L_0014f308:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f30c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f314u, cpu->r[2], 0, 0);
    }
L_0014f310:;
    {
        cpu->r[3] = rd32(0x0014f318u + + 0x40u);
    }
L_0014f314:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f318:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f320u, cpu->r[12], 0, 0);
    }
L_0014f31c:;
    {
        cpu->r[14] = 0x000000f2u;
    }
L_0014f320:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f328u, cpu->r[3], 0, 0);
    }
L_0014f324:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b8u, 0, 0);
    }
L_0014f328:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f32c:;
    {
        cpu->r[14] = 0x0014f330u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f330:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f334:;
    {
        cpu->r[14] = 0x0014f338u; fn_0014e8d4(cpu);
    }
L_0014f338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f33c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f340:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f344u)) return;
    }
}

/* _ZN21EmitterShape_CylinderD1Ev @ 0014f35c (arm) */
void fn_0014f35c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f35c:;
    {
        cpu->r[2] = rd32(0x0014f364u + + 0x64u);
    }
L_0014f360:;
    {
        cpu->r[3] = rd32(0x0014f368u + + 0x64u);
    }
L_0014f364:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f36cu, cpu->r[2], 0, 0);
    }
L_0014f368:;
    {
        cpu->r[1] = rd32(0x0014f370u + + 0x60u);
    }
L_0014f36c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f370:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f374:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f378:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f37c:;
    {
        cpu->r[2] = rd32(0x0014f384u + + 0x50u);
    }
L_0014f380:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f388u, cpu->r[1], 0, 0);
    }
L_0014f384:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f388:;
    {
        cpu->r[12] = rd32(0x0014f390u + + 0x48u);
    }
L_0014f38c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f390:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f398u, cpu->r[2], 0, 0);
    }
L_0014f394:;
    {
        cpu->r[3] = rd32(0x0014f39cu + + 0x40u);
    }
L_0014f398:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f39c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f3a4u, cpu->r[12], 0, 0);
    }
L_0014f3a0:;
    {
        cpu->r[14] = 0x000000d5u;
    }
L_0014f3a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f3acu, cpu->r[3], 0, 0);
    }
L_0014f3a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000ccu, 0, 0);
    }
L_0014f3ac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f3b0:;
    {
        cpu->r[14] = 0x0014f3b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f3b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f3b8:;
    {
        cpu->r[14] = 0x0014f3bcu; fn_0014e8d4(cpu);
    }
L_0014f3bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f3c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f3c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f3c8u)) return;
    }
}

/* _ZN21EmitterShape_CylinderD2Ev @ 0014f3e0 (arm) */
void fn_0014f3e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f3e0:;
    {
        cpu->r[2] = rd32(0x0014f3e8u + + 0x64u);
    }
L_0014f3e4:;
    {
        cpu->r[3] = rd32(0x0014f3ecu + + 0x64u);
    }
L_0014f3e8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f3f0u, cpu->r[2], 0, 0);
    }
L_0014f3ec:;
    {
        cpu->r[1] = rd32(0x0014f3f4u + + 0x60u);
    }
L_0014f3f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f3f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f3f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f3fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f400:;
    {
        cpu->r[2] = rd32(0x0014f408u + + 0x50u);
    }
L_0014f404:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f40cu, cpu->r[1], 0, 0);
    }
L_0014f408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f40c:;
    {
        cpu->r[12] = rd32(0x0014f414u + + 0x48u);
    }
L_0014f410:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f414:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f41cu, cpu->r[2], 0, 0);
    }
L_0014f418:;
    {
        cpu->r[3] = rd32(0x0014f420u + + 0x40u);
    }
L_0014f41c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f420:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f428u, cpu->r[12], 0, 0);
    }
L_0014f424:;
    {
        cpu->r[14] = 0x000000d5u;
    }
L_0014f428:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f430u, cpu->r[3], 0, 0);
    }
L_0014f42c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000ccu, 0, 0);
    }
L_0014f430:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f434:;
    {
        cpu->r[14] = 0x0014f438u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f43c:;
    {
        cpu->r[14] = 0x0014f440u; fn_0014e8d4(cpu);
    }
L_0014f440:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f444:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f448:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f44cu)) return;
    }
}

/* _ZN19EmitterShape_SphereD1Ev @ 0014f464 (arm) */
void fn_0014f464(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f464:;
    {
        cpu->r[2] = rd32(0x0014f46cu + + 0x64u);
    }
L_0014f468:;
    {
        cpu->r[3] = rd32(0x0014f470u + + 0x64u);
    }
L_0014f46c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f474u, cpu->r[2], 0, 0);
    }
L_0014f470:;
    {
        cpu->r[1] = rd32(0x0014f478u + + 0x60u);
    }
L_0014f474:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f478:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f47c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f480:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f484:;
    {
        cpu->r[2] = rd32(0x0014f48cu + + 0x50u);
    }
L_0014f488:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f490u, cpu->r[1], 0, 0);
    }
L_0014f48c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f490:;
    {
        cpu->r[12] = rd32(0x0014f498u + + 0x48u);
    }
L_0014f494:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f498:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f4a0u, cpu->r[2], 0, 0);
    }
L_0014f49c:;
    {
        cpu->r[3] = rd32(0x0014f4a4u + + 0x40u);
    }
L_0014f4a0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f4a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f4acu, cpu->r[12], 0, 0);
    }
L_0014f4a8:;
    {
        cpu->r[14] = 0x0000004fu;
    }
L_0014f4ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f4b4u, cpu->r[3], 0, 0);
    }
L_0014f4b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000e4u, 0, 0);
    }
L_0014f4b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f4b8:;
    {
        cpu->r[14] = 0x0014f4bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f4bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f4c0:;
    {
        cpu->r[14] = 0x0014f4c4u; fn_0014e8d4(cpu);
    }
L_0014f4c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f4c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f4cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f4d0u)) return;
    }
}

/* _ZN19EmitterShape_SphereD2Ev @ 0014f4e8 (arm) */
void fn_0014f4e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f4e8:;
    {
        cpu->r[2] = rd32(0x0014f4f0u + + 0x64u);
    }
L_0014f4ec:;
    {
        cpu->r[3] = rd32(0x0014f4f4u + + 0x64u);
    }
L_0014f4f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f4f8u, cpu->r[2], 0, 0);
    }
L_0014f4f4:;
    {
        cpu->r[1] = rd32(0x0014f4fcu + + 0x60u);
    }
L_0014f4f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f4fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f500:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0014f504:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0014f508:;
    {
        cpu->r[2] = rd32(0x0014f510u + + 0x50u);
    }
L_0014f50c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0014f514u, cpu->r[1], 0, 0);
    }
L_0014f510:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0014f514:;
    {
        cpu->r[12] = rd32(0x0014f51cu + + 0x48u);
    }
L_0014f518:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0014f51c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0014f524u, cpu->r[2], 0, 0);
    }
L_0014f520:;
    {
        cpu->r[3] = rd32(0x0014f528u + + 0x40u);
    }
L_0014f524:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0014f528:;
    {
        cpu->r[12] = add_flags(cpu, 0x0014f530u, cpu->r[12], 0, 0);
    }
L_0014f52c:;
    {
        cpu->r[14] = 0x0000004fu;
    }
L_0014f530:;
    {
        cpu->r[3] = add_flags(cpu, 0x0014f538u, cpu->r[3], 0, 0);
    }
L_0014f534:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000e4u, 0, 0);
    }
L_0014f538:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0014f53c:;
    {
        cpu->r[14] = 0x0014f540u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0014f540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f544:;
    {
        cpu->r[14] = 0x0014f548u; fn_0014e8d4(cpu);
    }
L_0014f548:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f54c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0014f550:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f554u)) return;
    }
}

/* _ZN12EmitterShapeD0Ev @ 0014f56c (arm) */
void fn_0014f56c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f56c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f570:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f574:;
    {
        cpu->r[14] = 0x0014f578u; fn_0014e8d8(cpu);
    }
L_0014f578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f57c:;
    {
        cpu->r[14] = 0x0014f580u; fn_0018ba20(cpu);
    }
L_0014f580:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f584:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f588u)) return;
    }
}

/* _ZN17EmitterShape_CubeD0Ev @ 0014f588 (arm) */
void fn_0014f588(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f588:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f58c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f590:;
    {
        cpu->r[14] = 0x0014f594u; fn_0014f044(cpu);
    }
L_0014f594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f598:;
    {
        cpu->r[14] = 0x0014f59cu; fn_0018ba20(cpu);
    }
L_0014f59c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f5a4u)) return;
    }
}

/* _ZN18EmitterShape_TorusD0Ev @ 0014f5a4 (arm) */
void fn_0014f5a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0014f5a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0014f5a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0014f5ac:;
    {
        cpu->r[14] = 0x0014f5b0u; fn_0014f14c(cpu);
    }
L_0014f5b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5b4:;
    {
        cpu->r[14] = 0x0014f5b8u; fn_0018ba20(cpu);
    }
L_0014f5b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0014f5bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0014f5c0u)) return;
    }
}
