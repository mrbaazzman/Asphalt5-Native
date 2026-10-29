#include "functions.h"

/* _ZN12RaceRecorder20RecordPolicePositionEi @ 000f685c (arm) */
void fn_000f685c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f685c:;
    {
        cpu->r[3] = rd32(0x000f6864u + + 0x1acu);
    }
L_000f6860:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_000f6864:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f6868:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f686c:;
    {
        cpu->r[0] = rd32(0x000f6874u + + 0x1a0u);
    }
L_000f6870:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f6878u, cpu->r[3], 0, 0);
    }
L_000f6874:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_000f6878:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000f687c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000f6880:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f6884:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000f6888:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f688c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_000f6890:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000006u, 1, 1);
    }
L_000f6894:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f6914;
        }
    }
L_000f6898:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00006300u, 0, 0);
    }
L_000f689c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000026u, 0, 0);
    }
L_000f68a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f68a4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f68a8:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f68ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f68b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f68b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f68b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f694c;
        }
    }
L_000f68bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000410u, 0, 0);
    }
L_000f68c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000460u, 0, 0);
    }
L_000f68c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f68c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_000f68cc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x3dcu);
    }
L_000f68d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000440u, 0, 0);
    }
L_000f68d4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_000f68d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000284u, 0, 0);
    }
L_000f68dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_000f68e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x000002d0u, 0, 0);
    }
L_000f68e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f68e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f68ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f68f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f68f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000f68f8:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[6]);
    }
L_000f68fc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[5]);
    }
L_000f6900:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[6]);
    }
L_000f6904:;
    {
        wr32(cpu->r[7] + + 0xaacu, cpu->r[0]);
    }
L_000f6908:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[0]);
    }
L_000f690c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_000f6910:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f6914u)) return;
    }
L_000f6914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00006000u, 0, 0);
    }
L_000f6918:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000075u, 0, 0);
    }
L_000f691c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6920:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000f6924:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f6928:;
    {
        cpu->r[14] = 0x000f6930u;
    }
L_000f692c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000f6930u)) return;
    }
L_000f6930:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000f6934:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f6938:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f693c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000f6940:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000f6944:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f6948:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f68bc;
        }
    }
L_000f694c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000284u, 0, 0);
    }
L_000f6950:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x41cu);
    }
L_000f6954:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6958:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x424u);
    }
L_000f695c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x420u);
    }
L_000f6960:;
    {
        cpu->r[5] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6964:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_000f6968:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6994;
        }
    }
L_000f696c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000650u, 0, 0);
    }
L_000f6970:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_000f6974:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f6978:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000f697c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f6980:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f6984:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[6]);
    }
L_000f6988:;
    {
        uint32_t v = cpu->r[5] | 0x00000080u; cpu->r[5] = v;
    }
L_000f698c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_000f6990:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
    }
L_000f6994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x000002a8u, 0, 0);
    }
L_000f6998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f699c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f69a0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f69a4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000f69a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f69d4;
        }
    }
L_000f69ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x00000650u, 0, 0);
    }
L_000f69b0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000f69b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f69b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000f69bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f69c0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_000f69c4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_000f69c8:;
    {
        uint32_t v = cpu->r[12] | 0x00000040u; cpu->r[12] = v;
    }
L_000f69cc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_000f69d0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f69d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x000002d0u, 0, 0);
    }
L_000f69d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f69dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f69e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f69e4u)) return;
        }
    }
L_000f69e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000650u, 0, 0);
    }
L_000f69e8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000f69ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000f69f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000f69f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f69f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f69fc:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_000f6a00:;
    {
        uint32_t v = cpu->r[0] | 0x00000020u; cpu->r[0] = v;
    }
L_000f6a04:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_000f6a08:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6a0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f6a10u)) return;
    }
}

/* _ZN12RaceRecorder14RecordPositionEi @ 000f6a18 (arm) */
void fn_000f6a18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f6a18:;
    {
        cpu->r[12] = rd32(0x000f6a20u + + 0x1bcu);
    }
L_000f6a1c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000f6a20:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000f6a24:;
    {
        cpu->r[5] = rd32(0x000f6a2cu + + 0x1b4u);
    }
L_000f6a28:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f6a30u, cpu->r[12], 0, 0);
    }
L_000f6a2c:;
    {
        cpu->r[4] = 0x00008c78u;
    }
L_000f6a30:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000f6a34:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000f6a38:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f6a3c:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_000f6a40:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f6a44:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000f6a48:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f6a4c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_000f6a50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6bd4;
        }
    }
L_000f6a54:;
    {
        cpu->r[1] = 0x0000432cu;
    }
L_000f6a58:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000f6a5c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000f6a60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f6a64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6ae4;
        }
    }
L_000f6a68:;
    {
        cpu->r[1] = 0x00008cbcu;
    }
L_000f6a6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000022u, 0, 0);
    }
L_000f6a70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f6a74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000092u, 0, 0);
    }
L_000f6a78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x0000009au, 0, 0);
    }
L_000f6a7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x000000a2u, 0, 0);
    }
L_000f6a80:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000f6a84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000f6a88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f6a8c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00008cc0u;
        }
    }
L_000f6a90:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008cb8u;
        }
    }
L_000f6a94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000f6a98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000f6a9c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_000f6aa0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
        }
    }
L_000f6aa4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
        }
    }
L_000f6aa8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6aac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6ab0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
    }
L_000f6ab4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000f6ab8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000f6abc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000f6ac0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000f6ac4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_000f6ac8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[12]);
    }
L_000f6acc:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000f6ad0:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[12]);
    }
L_000f6ad4:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_000f6ad8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_000f6adc:;
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
L_000f6ae0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f6ae4:;
    {
        cpu->r[1] = 0x00008cbcu;
    }
L_000f6ae8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f6aec:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_000f6af0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f6af4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00008cc0u;
        }
    }
L_000f6af8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00008cb8u;
        }
    }
L_000f6afc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000f6b00:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000f6b04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_000f6b08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
        }
    }
L_000f6b0c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
        }
    }
L_000f6b10:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6b14:;
    {
        cpu->r[0] = 0x00008508u;
    }
L_000f6b18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000f6b1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000f6b20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000f6b24:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000f6b28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f6b2c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_000f6b30:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_000f6b34:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_000f6b38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = rd32(cpu->r[1] + + 0x41cu);
        }
    }
L_000f6b3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x424u);
        }
    }
L_000f6b40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + + 0x420u);
        }
    }
L_000f6b44:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f6b48:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_000f6b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6b70;
        }
    }
L_000f6b50:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000640u, 0, 0);
    }
L_000f6b54:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_000f6b58:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f6b5c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6b60:;
    {
        wr16(cpu->r[1] + + 0x8u, cpu->r[7]);
    }
L_000f6b64:;
    {
        uint32_t v = cpu->r[6] | 0x00000080u; cpu->r[6] = v;
    }
L_000f6b68:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[6]);
    }
L_000f6b6c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[4]);
    }
L_000f6b70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
    }
L_000f6b74:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000f6b78:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000f6b7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6ba0;
        }
    }
L_000f6b80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000640u, 0, 0);
    }
L_000f6b84:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000f6b88:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f6b8c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6b90:;
    {
        wr16(cpu->r[1] + + 0xau, cpu->r[6]);
    }
L_000f6b94:;
    {
        uint32_t v = cpu->r[5] | 0x00000040u; cpu->r[5] = v;
    }
L_000f6b98:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_000f6b9c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[12]);
    }
L_000f6ba0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000022u, 0, 0);
    }
L_000f6ba4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f6ba8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_000f6bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6adc;
        }
    }
L_000f6bb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000640u, 0, 0);
    }
L_000f6bb4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_000f6bb8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6bbc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f6bc0:;
    {
        wr16(cpu->r[3] + + 0xcu, cpu->r[4]);
    }
L_000f6bc4:;
    {
        uint32_t v = cpu->r[12] | 0x00000020u; cpu->r[12] = v;
    }
L_000f6bc8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_000f6bcc:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[0]);
    }
L_000f6bd0:;
    {
        goto L_000f6adc;
    }
L_000f6bd4:;
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
L_000f6bd8:;
    {
        return fn_000f685c(cpu);
    }
}

/* _ZN12RaceRecorder21RecordTrafficRotationEiiiii @ 000f6be4 (arm) */
void fn_000f6be4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f6be4:;
    {
        cpu->r[12] = rd32(0x000f6becu + + 0x278u);
    }
L_000f6be8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000f6bec:;
    {
        cpu->r[5] = rd32(0x000f6bf4u + + 0x274u);
    }
L_000f6bf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f6bf8u, cpu->r[12], 0, 0);
    }
L_000f6bf4:;
    {
        cpu->r[4] = 0x0000432cu;
    }
L_000f6bf8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000f6bfc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f6c00:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f6c04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f6c08:;
    {
        cpu->r[6] = rd32(cpu->r[12]);
    }
L_000f6c0c:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f6c10:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000f6c14:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f6c18:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f6c1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6cc0;
        }
    }
L_000f6c20:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f6c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6c74;
        }
    }
L_000f6c28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000f6c2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000248u, 0, 0);
        }
    }
L_000f6c30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000158u, 0, 0);
        }
    }
L_000f6c34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000016cu, 0, 0);
        }
    }
L_000f6c38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000270u, 0, 0);
        }
    }
L_000f6c3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000180u, 0, 0);
        }
    }
L_000f6c40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000194u, 0, 0);
        }
    }
L_000f6c44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000234u, 0, 0);
        }
    }
L_000f6c48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000025cu, 0, 0);
        }
    }
L_000f6c4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000f6c50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6c54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f6c58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f6c5c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6c60:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6c64:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6c68:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6c6c:;
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
L_000f6c70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f6c74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000220u, 0, 0);
    }
L_000f6c78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x0000011cu, 0, 0);
    }
L_000f6c7c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000130u, 0, 0);
    }
L_000f6c80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_000f6c84:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x000001f8u, 0, 0);
    }
L_000f6c88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000020cu, 0, 0);
    }
L_000f6c8c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_000f6c90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_000f6c94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6c98:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_000f6c9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f6ca0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_000f6ca4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6ca8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[7]);
    }
L_000f6cac:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6cb0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6cb4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6cb8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[7]);
    }
L_000f6cbc:;
    {
        goto L_000f6c6c;
    }
L_000f6cc0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f6cc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f6d74;
        }
    }
L_000f6cc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000011cu, 0, 0);
    }
L_000f6ccc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6cd0:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6cd4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000f6cd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6d00;
        }
    }
L_000f6cdc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6ce0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000f6ce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f6ce8:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6cec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6cf0:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_000f6cf4:;
    {
        uint32_t v = cpu->r[5] | 0x00000010u; cpu->r[5] = v;
    }
L_000f6cf8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f6cfc:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6d00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000130u, 0, 0);
    }
L_000f6d04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6d08:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6d0c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f6d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6d38;
        }
    }
L_000f6d14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6d18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000f6d1c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f6d20:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6d24:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6d28:;
    {
        wr16(cpu->r[12] + + 0x1eu, cpu->r[3]);
    }
L_000f6d2c:;
    {
        uint32_t v = cpu->r[4] | 0x00000008u; cpu->r[4] = v;
    }
L_000f6d30:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[4]);
    }
L_000f6d34:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6d38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000144u, 0, 0);
    }
L_000f6d3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6d40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f6d44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f6d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6c6c;
        }
    }
L_000f6d4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6d50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000f6d54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f6d58:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6d5c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f6d60:;
    {
        wr16(cpu->r[2] + + 0x20u, cpu->r[7]);
    }
L_000f6d64:;
    {
        uint32_t v = cpu->r[1] | 0x00000004u; cpu->r[1] = v;
    }
L_000f6d68:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f6d6c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[7]);
    }
L_000f6d70:;
    {
        goto L_000f6c6c;
    }
L_000f6d74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_000f6d78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6df0;
        }
    }
L_000f6d7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000180u, 0, 0);
    }
L_000f6d80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6d84:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6d88:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000f6d8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6db4;
        }
    }
L_000f6d90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6d94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000f6d98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f6d9c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6da0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6da4:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_000f6da8:;
    {
        uint32_t v = cpu->r[5] | 0x00000800u; cpu->r[5] = v;
    }
L_000f6dac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f6db0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6db4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000194u, 0, 0);
    }
L_000f6db8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6dbc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6dc0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f6dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6c6c;
        }
    }
L_000f6dc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6dcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000f6dd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f6dd4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6dd8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6ddc:;
    {
        wr16(cpu->r[1] + + 0x1au, cpu->r[3]);
    }
L_000f6de0:;
    {
        uint32_t v = cpu->r[12] | 0x00000400u; cpu->r[12] = v;
    }
L_000f6de4:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000f6de8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6dec:;
    {
        goto L_000f6c6c;
    }
L_000f6df0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000158u, 0, 0);
    }
L_000f6df4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_000f6df8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f6dfc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000f6e00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6e28;
        }
    }
L_000f6e04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6e08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000f6e0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f6e10:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6e14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6e18:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_000f6e1c:;
    {
        uint32_t v = cpu->r[5] | 0x00000200u; cpu->r[5] = v;
    }
L_000f6e20:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f6e24:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6e28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000016cu, 0, 0);
    }
L_000f6e2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6e30:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6e34:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f6e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6c6c;
        }
    }
L_000f6e3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f6e40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000f6e44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f6e48:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6e4c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6e50:;
    {
        wr16(cpu->r[1] + + 0x16u, cpu->r[3]);
    }
L_000f6e54:;
    {
        uint32_t v = cpu->r[12] | 0x00000100u; cpu->r[12] = v;
    }
L_000f6e58:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000f6e5c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6e60:;
    {
        goto L_000f6c6c;
    }
}

/* _ZN12RaceRecorder20RecordPoliceRotationEiiiii @ 000f6e6c (arm) */
void fn_000f6e6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f6e6c:;
    {
        cpu->r[12] = rd32(0x000f6e74u + + 0x2a0u);
    }
L_000f6e70:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_000f6e74:;
    {
        cpu->r[6] = rd32(0x000f6e7cu + + 0x29cu);
    }
L_000f6e78:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f6e80u, cpu->r[12], 0, 0);
    }
L_000f6e7c:;
    {
        cpu->r[5] = 0x0000432cu;
    }
L_000f6e80:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000f6e84:;
    {
        cpu->r[4] = 0x00008c78u;
    }
L_000f6e88:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_000f6e8c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000f6e90:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f6e94:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f6e98:;
    {
        cpu->r[8] = rd32(cpu->r[12]);
    }
L_000f6e9c:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f6ea0:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_000f6ea4:;
    {
        cpu->r[5] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f6ea8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f6eac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000f6eb0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000f6eb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f6f40;
        }
    }
L_000f6eb8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f6ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6f00;
        }
    }
L_000f6ec0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000f6ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7078;
        }
    }
L_000f6ec8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000540u, 0, 0);
    }
L_000f6ecc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000560u, 0, 0);
    }
L_000f6ed0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000f6ed4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000003acu, 0, 0);
    }
L_000f6ed8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f6edc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000au, 0, 0);
    }
L_000f6ee0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f6ee4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f6ee8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6eec:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_000f6ef0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6ef4:;
    {
        wr32(cpu->r[12] + + 0xf4cu, cpu->r[3]);
    }
L_000f6ef8:;
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
L_000f6efc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f6f00:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x000004b0u, 0, 0);
    }
L_000f6f04:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x000004d0u, 0, 0);
    }
L_000f6f08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000318u, 0, 0);
    }
L_000f6f0c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000480u, 0, 0);
    }
L_000f6f10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f6f14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f6f18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000f6f1c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_000f6f20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000006u, 0, 0);
    }
L_000f6f24:;
    {
        wr32(cpu->r[6] + + 0xbd4u, cpu->r[2]);
    }
L_000f6f28:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_000f6f2c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[7]);
    }
L_000f6f30:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[3]);
    }
L_000f6f34:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6f38:;
    {
        wr32(cpu->r[6] + + 0xcfcu, cpu->r[7]);
    }
L_000f6f3c:;
    {
        goto L_000f6ef8;
    }
L_000f6f40:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000f6f44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f6ff8;
        }
    }
L_000f6f48:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x000002f4u, 0, 0);
    }
L_000f6f4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f6f50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f6f54:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000f6f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6f80;
        }
    }
L_000f6f5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f6f60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000f6f64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f6f68:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6f6c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6f70:;
    {
        wr8(cpu->r[1] + + 0x1cu, cpu->r[2]);
    }
L_000f6f74:;
    {
        uint32_t v = cpu->r[5] | 0x00000010u; cpu->r[5] = v;
    }
L_000f6f78:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_000f6f7c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[2]);
    }
L_000f6f80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000318u, 0, 0);
    }
L_000f6f84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f6f88:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f6f8c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000f6f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6fb8;
        }
    }
L_000f6f94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f6f98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000f6f9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f6fa0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6fa4:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f6fa8:;
    {
        wr16(cpu->r[1] + + 0x1eu, cpu->r[3]);
    }
L_000f6fac:;
    {
        uint32_t v = cpu->r[4] | 0x00000008u; cpu->r[4] = v;
    }
L_000f6fb0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[4]);
    }
L_000f6fb4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f6fb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000033cu, 0, 0);
    }
L_000f6fbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000f6fc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000f6fc4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f6fc8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000f6fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6ef8;
        }
    }
L_000f6fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f6fd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f6fd8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f6fdc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f6fe0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f6fe4:;
    {
        wr16(cpu->r[2] + + 0x20u, cpu->r[7]);
    }
L_000f6fe8:;
    {
        uint32_t v = cpu->r[1] | 0x00000004u; cpu->r[1] = v;
    }
L_000f6fec:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f6ff0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_000f6ff4:;
    {
        goto L_000f6ef8;
    }
L_000f6ff8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_000f6ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f70a4;
        }
    }
L_000f7000:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000003acu, 0, 0);
    }
L_000f7004:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f7008:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f700c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000f7010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7038;
        }
    }
L_000f7014:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f7018:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000f701c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000f7020:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f7024:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f7028:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_000f702c:;
    {
        uint32_t v = cpu->r[5] | 0x00000800u; cpu->r[5] = v;
    }
L_000f7030:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000f7034:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7038:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x000003d0u, 0, 0);
    }
L_000f703c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f7040:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f7044:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7048:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000f704c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6ef8;
        }
    }
L_000f7050:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f7054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f7058:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f705c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f7060:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f7064:;
    {
        wr16(cpu->r[1] + + 0x1au, cpu->r[3]);
    }
L_000f7068:;
    {
        uint32_t v = cpu->r[0] | 0x00000400u; cpu->r[0] = v;
    }
L_000f706c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_000f7070:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_000f7074:;
    {
        goto L_000f6ef8;
    }
L_000f7078:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000004f0u, 0, 0);
    }
L_000f707c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000520u, 0, 0);
    }
L_000f7080:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000au, 0, 0);
    }
L_000f7084:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000364u, 0, 0);
    }
L_000f7088:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f708c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7090:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f7094:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7098:;
    {
        wr32(cpu->r[12] + + 0xe24u, cpu->r[3]);
    }
L_000f709c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_000f70a0:;
    {
        goto L_000f6ef8;
    }
L_000f70a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], 0x00000364u, 0, 0);
    }
L_000f70a8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000f70ac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000f70b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f70d8;
        }
    }
L_000f70b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f70b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000f70bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f70c0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f70c4:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f70c8:;
    {
        wr16(cpu->r[1] + + 0x14u, cpu->r[2]);
    }
L_000f70cc:;
    {
        uint32_t v = cpu->r[5] | 0x00000200u; cpu->r[5] = v;
    }
L_000f70d0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_000f70d4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_000f70d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000388u, 0, 0);
    }
L_000f70dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f70e0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f70e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f70e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f6ef8;
        }
    }
L_000f70ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000650u, 0, 0);
    }
L_000f70f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_000f70f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_000f70f8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_000f70fc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7100:;
    {
        wr16(cpu->r[2] + + 0x16u, cpu->r[3]);
    }
L_000f7104:;
    {
        uint32_t v = cpu->r[0] | 0x00000100u; cpu->r[0] = v;
    }
L_000f7108:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_000f710c:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_000f7110:;
    {
        goto L_000f6ef8;
    }
}

/* _ZN12RaceRecorder14RecordRotationEiiiii @ 000f711c (arm) */
void fn_000f711c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f711c:;
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
L_000f7120:;
    {
        cpu->r[5] = rd32(0x000f7128u + + 0x224u);
    }
L_000f7124:;
    {
        cpu->r[6] = rd32(0x000f712cu + + 0x224u);
    }
L_000f7128:;
    {
        cpu->r[7] = 0x00008c78u;
    }
L_000f712c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000f7134u, cpu->r[5], 0, 0);
    }
L_000f7130:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000f7134:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_000f7138:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f713c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000f7140:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_000f7144:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000f7148:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f714c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000f7150:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000f7154:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_000f7158:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000f715c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000f7160:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000f7164:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f7284;
        }
    }
L_000f7168:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000f716c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000f7170:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000f7174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f7178:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f71f4;
        }
    }
L_000f717c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000f7180:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f71c0;
        }
    }
L_000f7184:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_000f7188:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000042u, 0, 0);
        }
    }
L_000f718c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
        }
    }
L_000f7190:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x000000dau, 0, 0);
        }
    }
L_000f7194:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000052u, 0, 0);
        }
    }
L_000f7198:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
        }
    }
L_000f719c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000cau, 0, 0);
        }
    }
L_000f71a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000c2u, 0, 0);
        }
    }
L_000f71a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000d2u, 0, 0);
        }
    }
L_000f71a8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[8]);
    }
L_000f71ac:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[10]);
    }
L_000f71b0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[10]);
    }
L_000f71b4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[8]);
    }
L_000f71b8:;
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
L_000f71bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f71c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x000000bau, 0, 0);
    }
L_000f71c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
    }
L_000f71c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
    }
L_000f71cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x000000aau, 0, 0);
    }
L_000f71d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002au, 0, 0);
    }
L_000f71d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b2u, 0, 0);
    }
L_000f71d8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[11]);
    }
L_000f71dc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[10]);
    }
L_000f71e0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[8]);
    }
L_000f71e4:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[10]);
    }
L_000f71e8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[8]);
    }
L_000f71ec:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[11]);
    }
L_000f71f0:;
    {
        goto L_000f71b8;
    }
L_000f71f4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000f71f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f728c;
        }
    }
L_000f71fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000002au, 0, 0);
    }
L_000f7200:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f7204:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000f7208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7228;
        }
    }
L_000f720c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7210:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7214:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7218:;
    {
        wr16(cpu->r[3] + + 0x16u, cpu->r[10]);
    }
L_000f721c:;
    {
        uint32_t v = cpu->r[1] | 0x00000010u; cpu->r[1] = v;
    }
L_000f7220:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f7224:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[10]);
    }
L_000f7228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000032u, 0, 0);
    }
L_000f722c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f7230:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000f7234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7254;
        }
    }
L_000f7238:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000640u, 0, 0);
    }
L_000f723c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7240:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7244:;
    {
        wr16(cpu->r[3] + + 0x18u, cpu->r[8]);
    }
L_000f7248:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_000f724c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f7250:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[8]);
    }
L_000f7254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000003au, 0, 0);
    }
L_000f7258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f725c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_000f7260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f71b8;
        }
    }
L_000f7264:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000640u, 0, 0);
    }
L_000f7268:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f726c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7270:;
    {
        wr16(cpu->r[3] + + 0x1au, cpu->r[11]);
    }
L_000f7274:;
    {
        uint32_t v = cpu->r[1] | 0x00000004u; cpu->r[1] = v;
    }
L_000f7278:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f727c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[11]);
    }
L_000f7280:;
    {
        goto L_000f71b8;
    }
L_000f7284:;
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
L_000f7288:;
    {
        return fn_000f6e6c(cpu);
    }
L_000f728c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_000f7290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f72f0;
        }
    }
L_000f7294:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000052u, 0, 0);
    }
L_000f7298:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f729c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000f72a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f72c0;
        }
    }
L_000f72a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f72a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f72ac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f72b0:;
    {
        wr16(cpu->r[3] + + 0x12u, cpu->r[10]);
    }
L_000f72b4:;
    {
        uint32_t v = cpu->r[1] | 0x00000800u; cpu->r[1] = v;
    }
L_000f72b8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f72bc:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[10]);
    }
L_000f72c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000005au, 0, 0);
    }
L_000f72c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f72c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000f72cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f71b8;
        }
    }
L_000f72d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000640u, 0, 0);
    }
L_000f72d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f72d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f72dc:;
    {
        wr16(cpu->r[3] + + 0x14u, cpu->r[8]);
    }
L_000f72e0:;
    {
        uint32_t v = cpu->r[1] | 0x00000400u; cpu->r[1] = v;
    }
L_000f72e4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f72e8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[8]);
    }
L_000f72ec:;
    {
        goto L_000f71b8;
    }
L_000f72f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000042u, 0, 0);
    }
L_000f72f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f72f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_000f72fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f731c;
        }
    }
L_000f7300:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7304:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7308:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f730c:;
    {
        wr16(cpu->r[3] + + 0xeu, cpu->r[10]);
    }
L_000f7310:;
    {
        uint32_t v = cpu->r[1] | 0x00000200u; cpu->r[1] = v;
    }
L_000f7314:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f7318:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[10]);
    }
L_000f731c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x0000004au, 0, 0);
    }
L_000f7320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f7324:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000f7328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f71b8;
        }
    }
L_000f732c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000640u, 0, 0);
    }
L_000f7330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f7334:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7338:;
    {
        wr16(cpu->r[3] + + 0x10u, cpu->r[8]);
    }
L_000f733c:;
    {
        uint32_t v = cpu->r[1] | 0x00000100u; cpu->r[1] = v;
    }
L_000f7340:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_000f7344:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[8]);
    }
L_000f7348:;
    {
        goto L_000f71b8;
    }
}

/* _ZN12RaceRecorder15RecordParameterEiii @ 000f7354 (arm) */
void fn_000f7354(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7354:;
    {
        cpu->r[12] = rd32(0x000f735cu + + 0x3b0u);
    }
L_000f7358:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000f735c:;
    {
        cpu->r[5] = rd32(0x000f7364u + + 0x3acu);
    }
L_000f7360:;
    {
        cpu->r[12] = add_flags(cpu, 0x000f7368u, cpu->r[12], 0, 0);
    }
L_000f7364:;
    {
        cpu->r[4] = 0x00008c78u;
    }
L_000f7368:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000f736c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[5]);
    }
L_000f7370:;
    {
        cpu->r[5] = rd32(cpu->r[12]);
    }
L_000f7374:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_000f7378:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000f737c:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000f7380:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_000f7384:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f7418;
        }
    }
L_000f7388:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f738c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7420;
        }
    }
L_000f7390:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f7394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f748c;
        }
    }
L_000f7398:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000f739c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f74dc;
        }
    }
L_000f73a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000f73a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7440;
        }
    }
L_000f73a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000f73ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f760c;
        }
    }
L_000f73b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000f73b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f765c;
        }
    }
L_000f73b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000f73bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7684;
        }
    }
L_000f73c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_000f73c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f75c0;
        }
    }
L_000f73c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_000f73cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7418;
        }
    }
L_000f73d0:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f73d4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f73d8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f73dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f73e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000008au, 0, 0);
        }
    }
L_000f73e4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f73e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7418;
        }
    }
L_000f73ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000008au, 0, 0);
    }
L_000f73f0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f73f4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f73f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f73fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7400:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7404:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f7408:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[3]);
    }
L_000f740c:;
    {
        uint32_t v = cpu->r[12] | 0x00020000u; cpu->r[12] = v;
    }
L_000f7410:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000f7414:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7418:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000f741c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f7420:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7424:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f7428:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f742c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f7430:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f7534;
        }
    }
L_000f7434:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f7438:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
    }
L_000f743c:;
    {
        goto L_000f7418;
    }
L_000f7440:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7444:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f7448:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f744c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f7450:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7434;
        }
    }
L_000f7454:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f7458:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f745c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 3, 18u, &shc), 1, 1);
    }
L_000f7460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f7464:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7468:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f746c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f7470:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7474:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[3], 2, 18u, &shc); cpu->r[3] = v;
    }
L_000f7478:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[3]);
    }
L_000f747c:;
    {
        uint32_t v = cpu->r[1] | 0x00002000u; cpu->r[1] = v;
    }
L_000f7480:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f7484:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7488:;
    {
        goto L_000f7418;
    }
L_000f748c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7490:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f7494:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f7498:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f749c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7434;
        }
    }
L_000f74a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f74a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f74a8:;
    {
        cpu->r[2] = (cpu->r[2] >> 10) & 0xffu;
    }
L_000f74ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f74b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f74b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f74b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f74bc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f74c0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f74c4:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[3], 2, 10u, &shc); cpu->r[3] = v;
    }
L_000f74c8:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[3]);
    }
L_000f74cc:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
    }
L_000f74d0:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f74d4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f74d8:;
    {
        goto L_000f7418;
    }
L_000f74dc:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f74e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f74e4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f74e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f74ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7434;
        }
    }
L_000f74f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f74f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f74f8:;
    {
        cpu->r[2] = (cpu->r[2] >> 7) & 0x7u;
    }
L_000f74fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f7500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f7504:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7508:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[3] = v;
    }
L_000f750c:;
    {
        uint32_t v = cpu->r[3] & 0x00000380u; cpu->r[3] = v;
    }
L_000f7510:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7514:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f7518:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f751c:;
    {
        uint32_t v = cpu->r[3] | cpu->r[4]; cpu->r[3] = v;
    }
L_000f7520:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[3]);
    }
L_000f7524:;
    {
        uint32_t v = cpu->r[1] | 0x00001000u; cpu->r[1] = v;
    }
L_000f7528:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f752c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7530:;
    {
        goto L_000f7418;
    }
L_000f7534:;
    {
        add_flags(cpu, cpu->r[3], 0x0000003fu, 0, 1);
    }
L_000f7538:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~0x0000003eu);
        }
    }
L_000f753c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f75ac;
        }
    }
L_000f7540:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003fu, 1, 1);
    }
L_000f7544:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x0000003fu;
        }
    }
L_000f7548:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_000f754c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f75ac;
        }
    }
L_000f7550:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f7554:;
    {
        cpu->r[2] = rd8(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000f7558:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_000f755c:;
    {
        cpu->r[5] = (uint32_t)((uint8_t)cpu->r[2]);
    }
L_000f7560:;
    {
        { uint32_t v = cpu->r[5] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f7564:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] & 0x0000003fu; cpu->r[2] = v;
        }
    }
L_000f7568:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_000f756c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
        }
    }
L_000f7570:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f7574:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[12] | 0x00000040u; cpu->r[12] = v;
        }
    }
L_000f7578:;
    {
        cpu->r[2] = (uint32_t)((int8_t)cpu->r[2]);
    }
L_000f757c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f7580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f7584:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7588:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f758c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000f7590:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7594:;
    {
        uint32_t v = cpu->r[12] | cpu->r[1]; cpu->r[12] = v;
    }
L_000f7598:;
    {
        wr32(cpu->r[3] + + 0x1cu, cpu->r[12]);
    }
L_000f759c:;
    {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
    }
L_000f75a0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_000f75a4:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[12]);
    }
L_000f75a8:;
    {
        goto L_000f7418;
    }
L_000f75ac:;
    {
        cpu->r[2] = (uint32_t)((int8_t)cpu->r[3]);
    }
L_000f75b0:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000f75b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000f75b8:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_000f75bc:;
    {
        goto L_000f7550;
    }
L_000f75c0:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f75c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f75c8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f75cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f75d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000082u, 0, 0);
        }
    }
L_000f75d4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f75d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7418;
        }
    }
L_000f75dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000082u, 0, 0);
    }
L_000f75e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f75e4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f75e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f75ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f75f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f75f4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f75f8:;
    {
        wr32(cpu->r[1] + + 0x38u, cpu->r[3]);
    }
L_000f75fc:;
    {
        uint32_t v = cpu->r[12] | 0x00020000u; cpu->r[12] = v;
    }
L_000f7600:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000f7604:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7608:;
    {
        goto L_000f7418;
    }
L_000f760c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7610:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f7614:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f7618:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f761c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
        }
    }
L_000f7620:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f7624:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7418;
        }
    }
L_000f7628:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f762c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f7630:;
    {
        uint32_t v = cpu->r[2] & ~ 0xff000000u; cpu->r[2] = v;
    }
L_000f7634:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f7638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f763c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7640:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7644:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7648:;
    {
        wr32(cpu->r[2] + + 0x30u, cpu->r[3]);
    }
L_000f764c:;
    {
        uint32_t v = cpu->r[1] | 0x00008000u; cpu->r[1] = v;
    }
L_000f7650:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f7654:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7658:;
    {
        goto L_000f7418;
    }
L_000f765c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7660:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f7664:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f7668:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f766c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f76d0;
        }
    }
L_000f7670:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f7674:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7678:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000f767c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7680:;
    {
        goto L_000f7418;
    }
L_000f7684:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000f7688:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000f768c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000f7690:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f7694:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
        }
    }
L_000f7698:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f769c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7418;
        }
    }
L_000f76a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
    }
L_000f76a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f76a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f76ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f76b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f76b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f76b8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f76bc:;
    {
        wr32(cpu->r[2] + + 0x34u, cpu->r[3]);
    }
L_000f76c0:;
    {
        uint32_t v = cpu->r[1] | 0x00010000u; cpu->r[1] = v;
    }
L_000f76c4:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f76c8:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f76cc:;
    {
        goto L_000f7418;
    }
L_000f76d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f76d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_000f76d8:;
    {
        uint32_t v = cpu->r[2] & 0xff000000u; cpu->r[2] = v;
    }
L_000f76dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000f76e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7418;
        }
    }
L_000f76e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f76e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f76ec:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x30u);
    }
L_000f76f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f76f4:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000f76f8:;
    {
        wr32(cpu->r[2] + + 0x30u, cpu->r[3]);
    }
L_000f76fc:;
    {
        uint32_t v = cpu->r[1] | 0x00008000u; cpu->r[1] = v;
    }
L_000f7700:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000f7704:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[3]);
    }
L_000f7708:;
    {
        goto L_000f7418;
    }
}

/* _ZN12RaceRecorder22RecordTrafficParameterEiii @ 000f7714 (arm) */
void fn_000f7714(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7714:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f7718:;
    {
        cpu->r[2] = rd32(0x000f7720u + + 0x84u);
    }
L_000f771c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f7720:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f7728u, cpu->r[2], 0, 0);
    }
L_000f7724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7730;
        }
    }
L_000f7728:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f772c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f7730:;
    {
        cpu->r[4] = rd32(0x000f7738u + + 0x70u);
    }
L_000f7734:;
    {
        cpu->r[12] = 0x0000432cu;
    }
L_000f7738:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000f773c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_000f7740:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000f7744:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000f7748:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f774c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000f7750:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f7754:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001a8u, 0, 0);
        }
    }
L_000f7758:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
        }
    }
L_000f775c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[3]);
        }
    }
L_000f7760:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f7728;
        }
    }
L_000f7764:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000001a8u, 0, 0);
    }
L_000f7768:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000f776c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f7770:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000f7774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7728;
        }
    }
L_000f7778:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f777c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_000f7780:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000f7784:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f7788:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f778c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_000f7790:;
    {
        wr16(cpu->r[1] + + 0x22u, cpu->r[3]);
    }
L_000f7794:;
    {
        uint32_t v = cpu->r[12] | 0x00000002u; cpu->r[12] = v;
    }
L_000f7798:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[12]);
    }
L_000f779c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[3]);
    }
L_000f77a0:;
    {
        goto L_000f7728;
    }
}

/* _ZN12RaceRecorder25GetTrafficReplayParameterEii @ 000f77ac (arm) */
void fn_000f77ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f77ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f77b0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000f77b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000f77b8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000f77bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f77c0:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000f77c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000f77c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000f77cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000f77d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f77d4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f77d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000f77dc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000f77e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f77f4;
        }
    }
L_000f77e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001a8u, 0, 0);
    }
L_000f77e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000f77ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f77f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f77f4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f77f8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000002u; set_nz(cpu, v); }
    }
L_000f77fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001a8u, 0, 0);
        }
    }
L_000f7800:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000001a8u, 0, 0);
        }
    }
L_000f7804:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd16(cpu->r[2] + + 0x22u);
        }
    }
L_000f7808:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
        }
    }
L_000f780c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
        }
    }
L_000f7810:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000f7814:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000f7818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_000f781c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder18GetReplayParameterEii @ 000f7820 (arm) */
void fn_000f7820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7820:;
    {
        cpu->r[3] = rd32(0x000f7828u + + 0x328u);
    }
L_000f7824:;
    {
        cpu->r[12] = 0x00008c78u;
    }
L_000f7828:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f782c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f7830:;
    {
        cpu->r[0] = rd32(0x000f7838u + + 0x31cu);
    }
L_000f7834:;
    {
        cpu->r[3] = add_flags(cpu, 0x000f783cu, cpu->r[3], 0, 0);
    }
L_000f7838:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000f783c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000f7840:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000f7844:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000f7848:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f784c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000f7850:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f7854:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f78d0;
        }
    }
L_000f7858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000062u, 0, 0);
    }
L_000f785c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000f7860:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f78dc;
        }
    }
L_000f7868:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000f786c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7940;
        }
    }
L_000f7870:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000f7874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7968;
        }
    }
L_000f7878:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000f787c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f791c;
        }
    }
L_000f7880:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000f7884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a30;
        }
    }
L_000f7888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_000f788c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a58;
        }
    }
L_000f7890:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_000f7894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a80;
        }
    }
L_000f7898:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_000f789c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f79c4;
        }
    }
L_000f78a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_000f78a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f78d0;
        }
    }
L_000f78a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f78ac:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f78b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f78b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f78b8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f78bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000f78c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7b30;
        }
    }
L_000f78c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000008au, 0, 0);
    }
L_000f78c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f78cc:;
    {
        goto L_000f78d4;
    }
L_000f78d0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f78d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f78d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f78dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f78e0:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f78e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f78e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f78ec:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f78f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f78f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000f78f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f79ec;
        }
    }
L_000f78fc:;
    {
        uint32_t v = cpu->r[0] & 0x0000007fu; cpu->r[0] = v;
    }
L_000f7900:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000f7904:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f7908:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[0] = v;
        }
    }
L_000f790c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_000f7910:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_000f7914:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_000f7918:;
    {
        goto L_000f78d4;
    }
L_000f791c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7920:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7924:;
    {
        cpu->r[1] = 0x00001a0cu;
    }
L_000f7928:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000f792c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f7930:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000f7934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f79a8;
        }
    }
L_000f7938:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 18u, &shc); cpu->r[0] = v;
    }
L_000f793c:;
    {
        goto L_000f78d4;
    }
L_000f7940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7944:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000f7948:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000f794c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000f7950:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f7954:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000f7958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a0c;
        }
    }
L_000f795c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007au, 0, 0);
    }
L_000f7960:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7964:;
    {
        goto L_000f78d4;
    }
L_000f7968:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f796c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7970:;
    {
        cpu->r[1] = 0x00001a0cu;
    }
L_000f7974:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000f7978:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f797c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000f7980:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f798c;
        }
    }
L_000f7984:;
    {
        cpu->r[0] = (cpu->r[0] >> 7) & 0x7u;
    }
L_000f7988:;
    {
        goto L_000f78d4;
    }
L_000f798c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7990:;
    {
        { uint32_t v = cpu->r[1] & 0x00001000u; set_nz(cpu, v); }
    }
L_000f7994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7984;
        }
    }
L_000f7998:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f799c:;
    {
        cpu->r[0] = (cpu->r[0] >> 7) & 0x7u;
    }
L_000f79a0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000f79a4:;
    {
        goto L_000f78d4;
    }
L_000f79a8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f79ac:;
    {
        { uint32_t v = cpu->r[1] & 0x00002000u; set_nz(cpu, v); }
    }
L_000f79b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7938;
        }
    }
L_000f79b4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f79b8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 18u, &shc); cpu->r[0] = v;
    }
L_000f79bc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000f79c0:;
    {
        goto L_000f78d4;
    }
L_000f79c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f79c8:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000f79cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f79d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000f79d4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f79d8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000f79dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7b0c;
        }
    }
L_000f79e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000082u, 0, 0);
    }
L_000f79e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f79e8:;
    {
        goto L_000f78d4;
    }
L_000f79ec:;
    {
        uint32_t v = cpu->r[0] & 0x0000007fu; cpu->r[0] = v;
    }
L_000f79f0:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000f79f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f79f8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[3] = v;
        }
    }
L_000f79fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_000f7a00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_000f7a04:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_000f7a08:;
    {
        goto L_000f78d4;
    }
L_000f7a0c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7a10:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_000f7a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f795c;
        }
    }
L_000f7a18:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f7a1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007au, 0, 0);
    }
L_000f7a20:;
    {
        cpu->r[0] = (cpu->r[2] >> 10) & 0xffu;
    }
L_000f7a24:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[0]);
    }
L_000f7a28:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7a2c:;
    {
        goto L_000f78d4;
    }
L_000f7a30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7a34:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f7a38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7a3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f7a40:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f7a44:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000f7a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7aa8;
        }
    }
L_000f7a4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f7a50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7a54:;
    {
        goto L_000f78d4;
    }
L_000f7a58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7a5c:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f7a60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7a64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000f7a68:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f7a6c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000f7a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7ac8;
        }
    }
L_000f7a74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000f7a78:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x1abu);
    }
L_000f7a7c:;
    {
        goto L_000f78d4;
    }
L_000f7a80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7a84:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000f7a88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7a8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000f7a90:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000f7a94:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000f7a98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7ae8;
        }
    }
L_000f7a9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
    }
L_000f7aa0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000f7aa4:;
    {
        goto L_000f78d4;
    }
L_000f7aa8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7aac:;
    {
        { uint32_t v = cpu->r[2] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f7ab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a4c;
        }
    }
L_000f7ab4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f7ab8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f7abc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7ac0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f7ac4:;
    {
        goto L_000f78d4;
    }
L_000f7ac8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7acc:;
    {
        { uint32_t v = cpu->r[2] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f7ad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a74;
        }
    }
L_000f7ad4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f7ad8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000006au, 0, 0);
    }
L_000f7adc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7ae0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0x33u);
    }
L_000f7ae4:;
    {
        goto L_000f78d4;
    }
L_000f7ae8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7aec:;
    {
        { uint32_t v = cpu->r[0] & 0x00010000u; set_nz(cpu, v); }
    }
L_000f7af0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f7a9c;
        }
    }
L_000f7af4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000f7af8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x34u);
    }
L_000f7afc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000072u, 0, 0);
    }
L_000f7b00:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7b04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x34u);
    }
L_000f7b08:;
    {
        goto L_000f78d4;
    }
L_000f7b0c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7b10:;
    {
        { uint32_t v = cpu->r[0] & 0x00020000u; set_nz(cpu, v); }
    }
L_000f7b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f79e0;
        }
    }
L_000f7b18:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000f7b1c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x38u);
    }
L_000f7b20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000082u, 0, 0);
    }
L_000f7b24:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7b28:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x38u);
    }
L_000f7b2c:;
    {
        goto L_000f78d4;
    }
L_000f7b30:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7b34:;
    {
        { uint32_t v = cpu->r[2] & 0x00020000u; set_nz(cpu, v); }
    }
L_000f7b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f78c4;
        }
    }
L_000f7b3c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3cu);
    }
L_000f7b40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000008au, 0, 0);
    }
L_000f7b44:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[2]);
    }
L_000f7b48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3cu);
    }
L_000f7b4c:;
    {
        goto L_000f78d4;
    }
}

/* _ZN12RaceRecorder17GetReplaySettingsEv @ 000f7b58 (arm) */
void fn_000f7b58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7b58:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_000f7b5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000f7b60:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1cu);
    }
L_000f7b64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f7b68:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
        }
    }
L_000f7b6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000f7b70:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f7b74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f7b94;
        }
    }
L_000f7b78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f7b7c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f7bec;
        }
    }
L_000f7b80:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_000f7b84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000f7b88:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7b8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f7b90:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000f7b94:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_000f7b98:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x30u);
    }
L_000f7b9c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7ba0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_000f7ba4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_000f7ba8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000f7bd8;
        }
    }
L_000f7bac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7bb0:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000f7bb4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_000f7bb8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_000f7bbc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_000f7bc0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f7bd8;
        }
    }
L_000f7bc4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000f7bc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000f7bec;
        }
    }
L_000f7bcc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_000f7bd0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7bd4:;
    {
        goto L_000f7b8c;
    }
L_000f7bd8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_000f7bdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f7be0:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_000f7be4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000f7be8:;
    {
        goto L_000f7b8c;
    }
L_000f7bec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_000f7bf0:;
    {
        goto L_000f7b8c;
    }
}

/* _ZN12RaceRecorder12IsIncompleteEv @ 000f7bf4 (arm) */
void fn_000f7bf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7bf4:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x3cu);
    }
L_000f7bf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder13SetIncompleteEv @ 000f7bfc (arm) */
void fn_000f7bfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7bfc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000f7c00:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[3]);
    }
L_000f7c04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder7SaveCarEP4CCar @ 000f7c08 (arm) */
void fn_000f7c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7c08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder10RestoreCarEP4CCar @ 000f7c0c (arm) */
void fn_000f7c0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7c0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder20WriteByteToCarBufferEc @ 000f7c10 (arm) */
void fn_000f7c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7c10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f7c14:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7c18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7c1c:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_000f7c20:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_000f7c24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder21WriteShortToCarBufferEs @ 000f7c28 (arm) */
void fn_000f7c28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7c28:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_000f7c2c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f7c30:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7c34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f7c38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f7c3c:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[1]);
    }
L_000f7c40:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7c44:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000f7c48:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7c4c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x7u);
    }
L_000f7c50:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f7c54:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_000f7c58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f7c5c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_000f7c60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder19WriteIntToCarBufferEi @ 000f7c64 (arm) */
void fn_000f7c64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7c64:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000f7c68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f7c6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f7c70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000f7c74:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7c78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7c7c:;
    {
        cpu->r[4] = rd8(cpu->r[13] + + 0x4u);
    }
L_000f7c80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f7c84:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[4]);
    }
L_000f7c88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f7c8c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7c90:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7c94:;
    {
        cpu->r[5] = rd8(cpu->r[13] + + 0x5u);
    }
L_000f7c98:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_000f7c9c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000f7ca0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7ca4:;
    {
        cpu->r[4] = rd8(cpu->r[13] + + 0x6u);
    }
L_000f7ca8:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_000f7cac:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[4]);
    }
L_000f7cb0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7cb4:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x7u);
    }
L_000f7cb8:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f7cbc:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_000f7cc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f7cc4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000f7cc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder21WriteFloatToCarBufferEf @ 000f7ccc (arm) */
void fn_000f7ccc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7ccc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000f7cd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f7cd4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f7cd8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000f7cdc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7ce0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7ce4:;
    {
        cpu->r[4] = rd8(cpu->r[13] + + 0x4u);
    }
L_000f7ce8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000f7cec:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[4]);
    }
L_000f7cf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f7cf4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7cf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f7cfc:;
    {
        cpu->r[5] = rd8(cpu->r[13] + + 0x5u);
    }
L_000f7d00:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_000f7d04:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000f7d08:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7d0c:;
    {
        cpu->r[4] = rd8(cpu->r[13] + + 0x6u);
    }
L_000f7d10:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_000f7d14:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[4]);
    }
L_000f7d18:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f7d1c:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x7u);
    }
L_000f7d20:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000f7d24:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[12]);
    }
L_000f7d28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f7d2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000f7d30:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12RaceRecorder20WriteQuatToCarBufferE6Quat4s @ 000f7d34 (arm) */
void fn_000f7d34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7d34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000f7d38:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f7d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000f7d40:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f7d44:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_000f7d48:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_000f7d4c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_000f7d50:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_000f7d54:;
    {
        cpu->r[14] = 0x000f7d58u; fn_000f7c64(cpu);
    }
L_000f7d58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7d5c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000f7d60:;
    {
        cpu->r[14] = 0x000f7d64u; fn_000f7c64(cpu);
    }
L_000f7d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7d68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f7d6c:;
    {
        cpu->r[14] = 0x000f7d70u; fn_000f7c64(cpu);
    }
L_000f7d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7d74:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f7d78:;
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
L_000f7d7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f7d80:;
    {
        return fn_000f7c64(cpu);
    }
}

/* _ZN12RaceRecorder23WriteCarRecordsToBufferEi @ 000f7d84 (arm) */
void fn_000f7d84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7d84:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_000f7d88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7d8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f7d90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f7d94:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7d98:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f7d9c:;
    {
        cpu->r[14] = 0x000f7da0u; fn_000f7c28(cpu);
    }
L_000f7da0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7da4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7da8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f7dac:;
    {
        cpu->r[14] = 0x000f7db0u; fn_000f7c64(cpu);
    }
L_000f7db0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7db4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7db8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f7dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7fac;
        }
    }
L_000f7dc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f7dc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f94;
        }
    }
L_000f7dc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f7dcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f7c;
        }
    }
L_000f7dd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f7dd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f64;
        }
    }
L_000f7dd8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f7ddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f4c;
        }
    }
L_000f7de0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f7de4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f34;
        }
    }
L_000f7de8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f7dec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f1c;
        }
    }
L_000f7df0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f7df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7f04;
        }
    }
L_000f7df8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f7dfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7eec;
        }
    }
L_000f7e00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f7e04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7ed4;
        }
    }
L_000f7e08:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f7e0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7eb0;
        }
    }
L_000f7e10:;
    {
        cpu->r[1] = 0x00003003u;
    }
L_000f7e14:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0000u << 16);
    }
L_000f7e18:;
    {
        uint32_t v = cpu->r[3] & cpu->r[1]; cpu->r[1] = v;
    }
L_000f7e1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f7e20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7e98;
        }
    }
L_000f7e24:;
    {
        { uint32_t v = cpu->r[3] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f7e28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7e80;
        }
    }
L_000f7e2c:;
    {
        { uint32_t v = cpu->r[3] & 0x00010000u; set_nz(cpu, v); }
    }
L_000f7e30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7e68;
        }
    }
L_000f7e34:;
    {
        { uint32_t v = cpu->r[3] & 0x00020000u; set_nz(cpu, v); }
    }
L_000f7e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f7e44;
        }
    }
L_000f7e3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f7e40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f7e44u)) return;
    }
L_000f7e44:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x38u);
    }
L_000f7e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7e4c:;
    {
        cpu->r[14] = 0x000f7e50u; fn_000f7c64(cpu);
    }
L_000f7e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7e54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7e58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3cu);
    }
L_000f7e5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f7e60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_000f7e64:;
    {
        return fn_000f7c64(cpu);
    }
L_000f7e68:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x34u);
    }
L_000f7e6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7e70:;
    {
        cpu->r[14] = 0x000f7e74u; fn_000f7c64(cpu);
    }
L_000f7e74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7e78:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7e7c:;
    {
        goto L_000f7e34;
    }
L_000f7e80:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x30u);
    }
L_000f7e84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7e88:;
    {
        cpu->r[14] = 0x000f7e8cu; fn_000f7c64(cpu);
    }
L_000f7e8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7e90:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7e94:;
    {
        goto L_000f7e2c;
    }
L_000f7e98:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x1cu);
    }
L_000f7e9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7ea0:;
    {
        cpu->r[14] = 0x000f7ea4u; fn_000f7c64(cpu);
    }
L_000f7ea4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7ea8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7eac:;
    {
        goto L_000f7e24;
    }
L_000f7eb0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x2cu);
    }
L_000f7eb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_000f7eb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7ebc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000f7ec0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_000f7ec4:;
    {
        cpu->r[14] = 0x000f7ec8u; fn_000f7d34(cpu);
    }
L_000f7ec8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7ecc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7ed0:;
    {
        goto L_000f7e10;
    }
L_000f7ed4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x1au);
    }
L_000f7ed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7edc:;
    {
        cpu->r[14] = 0x000f7ee0u; fn_000f7c28(cpu);
    }
L_000f7ee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7ee4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7ee8:;
    {
        goto L_000f7e08;
    }
L_000f7eec:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x18u);
    }
L_000f7ef0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7ef4:;
    {
        cpu->r[14] = 0x000f7ef8u; fn_000f7c28(cpu);
    }
L_000f7ef8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7efc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f00:;
    {
        goto L_000f7e00;
    }
L_000f7f04:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x16u);
    }
L_000f7f08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f0c:;
    {
        cpu->r[14] = 0x000f7f10u; fn_000f7c28(cpu);
    }
L_000f7f10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f14:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f18:;
    {
        goto L_000f7df8;
    }
L_000f7f1c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x14u);
    }
L_000f7f20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f24:;
    {
        cpu->r[14] = 0x000f7f28u; fn_000f7c28(cpu);
    }
L_000f7f28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f2c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f30:;
    {
        goto L_000f7df0;
    }
L_000f7f34:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x12u);
    }
L_000f7f38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f3c:;
    {
        cpu->r[14] = 0x000f7f40u; fn_000f7c28(cpu);
    }
L_000f7f40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f44:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f48:;
    {
        goto L_000f7de8;
    }
L_000f7f4c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_000f7f50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f54:;
    {
        cpu->r[14] = 0x000f7f58u; fn_000f7c28(cpu);
    }
L_000f7f58:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f5c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f60:;
    {
        goto L_000f7de0;
    }
L_000f7f64:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xeu);
    }
L_000f7f68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f6c:;
    {
        cpu->r[14] = 0x000f7f70u; fn_000f7c28(cpu);
    }
L_000f7f70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f74:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f78:;
    {
        goto L_000f7dd8;
    }
L_000f7f7c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xcu);
    }
L_000f7f80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f84:;
    {
        cpu->r[14] = 0x000f7f88u; fn_000f7c28(cpu);
    }
L_000f7f88:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7f8c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7f90:;
    {
        goto L_000f7dd0;
    }
L_000f7f94:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xau);
    }
L_000f7f98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7f9c:;
    {
        cpu->r[14] = 0x000f7fa0u; fn_000f7c28(cpu);
    }
L_000f7fa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7fa4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7fa8:;
    {
        goto L_000f7dc8;
    }
L_000f7fac:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_000f7fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7fb4:;
    {
        cpu->r[14] = 0x000f7fb8u; fn_000f7c28(cpu);
    }
L_000f7fb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000f7fbc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f7fc0:;
    {
        goto L_000f7dc0;
    }
}

/* _ZN12RaceRecorder30WriteCarTrafficRecordsToBufferEi @ 000f7fc4 (arm) */
void fn_000f7fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f7fc4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f7fc8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f7fcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_000f7fd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f7fd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f7fd8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f7fdc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f7fe0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f7fe4:;
    {
        cpu->r[14] = 0x000f7fe8u; fn_000f7c28(cpu);
    }
L_000f7fe8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f7fec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f7ff0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x4u);
    }
L_000f7ff4:;
    {
        cpu->r[14] = 0x000f7ff8u; fn_000f7c28(cpu);
    }
L_000f7ff8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f7ffc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8000:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f8004:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f81d0;
        }
    }
L_000f8008:;
    {
        { uint32_t v = cpu->r[2] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f800c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f81b4;
        }
    }
L_000f8010:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f8014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8198;
        }
    }
L_000f8018:;
    {
        { uint32_t v = cpu->r[2] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f801c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f817c;
        }
    }
L_000f8020:;
    {
        { uint32_t v = cpu->r[2] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f8024:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8160;
        }
    }
L_000f8028:;
    {
        { uint32_t v = cpu->r[2] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f802c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8144;
        }
    }
L_000f8030:;
    {
        { uint32_t v = cpu->r[2] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f8034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8128;
        }
    }
L_000f8038:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f803c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f810c;
        }
    }
L_000f8040:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f8044:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f80f0;
        }
    }
L_000f8048:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f804c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f80d4;
        }
    }
L_000f8050:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f8054:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f80ac;
        }
    }
L_000f8058:;
    {
        cpu->r[1] = 0x00003003u;
    }
L_000f805c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0000u << 16);
    }
L_000f8060:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[1] = v;
    }
L_000f8064:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f8068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8090;
        }
    }
L_000f806c:;
    {
        { uint32_t v = cpu->r[2] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f8070:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f807c;
        }
    }
L_000f8074:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f8078:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f807cu)) return;
    }
L_000f807c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8080:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x34u);
    }
L_000f8084:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f8088:;
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
L_000f808c:;
    {
        return fn_000f7c64(cpu);
    }
L_000f8090:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8094:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x22u);
    }
L_000f8098:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f809c:;
    {
        cpu->r[14] = 0x000f80a0u; fn_000f7c64(cpu);
    }
L_000f80a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000f80a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f80a8:;
    {
        goto L_000f806c;
    }
L_000f80ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f80b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
    }
L_000f80b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f80b8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000f80bc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_000f80c0:;
    {
        cpu->r[14] = 0x000f80c4u; fn_000f7d34(cpu);
    }
L_000f80c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f80c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f80cc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f80d0:;
    {
        goto L_000f8058;
    }
L_000f80d4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_000f80d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f80dc:;
    {
        cpu->r[14] = 0x000f80e0u; fn_000f7c28(cpu);
    }
L_000f80e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f80e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f80e8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f80ec:;
    {
        goto L_000f8050;
    }
L_000f80f0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1eu);
    }
L_000f80f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f80f8:;
    {
        cpu->r[14] = 0x000f80fcu; fn_000f7c28(cpu);
    }
L_000f80fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8100:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8104:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8108:;
    {
        goto L_000f8048;
    }
L_000f810c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1cu);
    }
L_000f8110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8114:;
    {
        cpu->r[14] = 0x000f8118u; fn_000f7c10(cpu);
    }
L_000f8118:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f811c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8120:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8124:;
    {
        goto L_000f8040;
    }
L_000f8128:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1au);
    }
L_000f812c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8130:;
    {
        cpu->r[14] = 0x000f8134u; fn_000f7c28(cpu);
    }
L_000f8134:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8138:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f813c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8140:;
    {
        goto L_000f8038;
    }
L_000f8144:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x18u);
    }
L_000f8148:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f814c:;
    {
        cpu->r[14] = 0x000f8150u; fn_000f7c28(cpu);
    }
L_000f8150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8154:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8158:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f815c:;
    {
        goto L_000f8030;
    }
L_000f8160:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x16u);
    }
L_000f8164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8168:;
    {
        cpu->r[14] = 0x000f816cu; fn_000f7c28(cpu);
    }
L_000f816c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8170:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8174:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8178:;
    {
        goto L_000f8028;
    }
L_000f817c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x14u);
    }
L_000f8180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8184:;
    {
        cpu->r[14] = 0x000f8188u; fn_000f7c28(cpu);
    }
L_000f8188:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f818c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8190:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8194:;
    {
        goto L_000f8020;
    }
L_000f8198:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_000f819c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f81a0:;
    {
        cpu->r[14] = 0x000f81a4u; fn_000f7c64(cpu);
    }
L_000f81a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f81a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f81ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f81b0:;
    {
        goto L_000f8018;
    }
L_000f81b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000f81b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f81bc:;
    {
        cpu->r[14] = 0x000f81c0u; fn_000f7c64(cpu);
    }
L_000f81c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f81c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f81c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f81cc:;
    {
        goto L_000f8010;
    }
L_000f81d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000f81d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f81d8:;
    {
        cpu->r[14] = 0x000f81dcu; fn_000f7c64(cpu);
    }
L_000f81dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f81e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f81e4:;
    {
        goto L_000f8008;
    }
}

/* _ZN12RaceRecorder29WriteCarPoliceRecordsToBufferEi @ 000f81e8 (arm) */
void fn_000f81e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f81e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f81ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000650u, 0, 0);
    }
L_000f81f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_000f81f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f81f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f81fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8200:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8204:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000f8208:;
    {
        cpu->r[14] = 0x000f820cu; fn_000f7c28(cpu);
    }
L_000f820c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8214:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x4u);
    }
L_000f8218:;
    {
        cpu->r[14] = 0x000f821cu; fn_000f7c28(cpu);
    }
L_000f821c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8220:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8224:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f8228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f83f4;
        }
    }
L_000f822c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f8230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f83d8;
        }
    }
L_000f8234:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f8238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f83bc;
        }
    }
L_000f823c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f8240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f83a0;
        }
    }
L_000f8244:;
    {
        { uint32_t v = cpu->r[2] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f8248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8384;
        }
    }
L_000f824c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f8250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8368;
        }
    }
L_000f8254:;
    {
        { uint32_t v = cpu->r[2] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f8258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f834c;
        }
    }
L_000f825c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f8260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8330;
        }
    }
L_000f8264:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f8268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8314;
        }
    }
L_000f826c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f8270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f82f8;
        }
    }
L_000f8274:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f8278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f82d0;
        }
    }
L_000f827c:;
    {
        cpu->r[1] = 0x00003003u;
    }
L_000f8280:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0000u << 16);
    }
L_000f8284:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[1] = v;
    }
L_000f8288:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f828c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f82b4;
        }
    }
L_000f8290:;
    {
        { uint32_t v = cpu->r[2] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f8294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f82a0;
        }
    }
L_000f8298:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f829c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f82a0u)) return;
    }
L_000f82a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f82a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x34u);
    }
L_000f82a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f82ac:;
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
L_000f82b0:;
    {
        return fn_000f7c64(cpu);
    }
L_000f82b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f82b8:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x22u);
    }
L_000f82bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f82c0:;
    {
        cpu->r[14] = 0x000f82c4u; fn_000f7c64(cpu);
    }
L_000f82c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_000f82c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f82cc:;
    {
        goto L_000f8290;
    }
L_000f82d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_000f82d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
    }
L_000f82d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f82dc:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000f82e0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_000f82e4:;
    {
        cpu->r[14] = 0x000f82e8u; fn_000f7d34(cpu);
    }
L_000f82e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f82ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f82f0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f82f4:;
    {
        goto L_000f827c;
    }
L_000f82f8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x20u);
    }
L_000f82fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8300:;
    {
        cpu->r[14] = 0x000f8304u; fn_000f7c28(cpu);
    }
L_000f8304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8308:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f830c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8310:;
    {
        goto L_000f8274;
    }
L_000f8314:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1eu);
    }
L_000f8318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f831c:;
    {
        cpu->r[14] = 0x000f8320u; fn_000f7c28(cpu);
    }
L_000f8320:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8324:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8328:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f832c:;
    {
        goto L_000f826c;
    }
L_000f8330:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1cu);
    }
L_000f8334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8338:;
    {
        cpu->r[14] = 0x000f833cu; fn_000f7c10(cpu);
    }
L_000f833c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8340:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8344:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8348:;
    {
        goto L_000f8264;
    }
L_000f834c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x1au);
    }
L_000f8350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8354:;
    {
        cpu->r[14] = 0x000f8358u; fn_000f7c28(cpu);
    }
L_000f8358:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f835c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8360:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8364:;
    {
        goto L_000f825c;
    }
L_000f8368:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x18u);
    }
L_000f836c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8370:;
    {
        cpu->r[14] = 0x000f8374u; fn_000f7c28(cpu);
    }
L_000f8374:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8378:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f837c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8380:;
    {
        goto L_000f8254;
    }
L_000f8384:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x16u);
    }
L_000f8388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f838c:;
    {
        cpu->r[14] = 0x000f8390u; fn_000f7c28(cpu);
    }
L_000f8390:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f8394:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8398:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f839c:;
    {
        goto L_000f824c;
    }
L_000f83a0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x14u);
    }
L_000f83a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f83a8:;
    {
        cpu->r[14] = 0x000f83acu; fn_000f7c28(cpu);
    }
L_000f83ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f83b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83b8:;
    {
        goto L_000f8244;
    }
L_000f83bc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_000f83c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f83c4:;
    {
        cpu->r[14] = 0x000f83c8u; fn_000f7c64(cpu);
    }
L_000f83c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f83cc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83d4:;
    {
        goto L_000f823c;
    }
L_000f83d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000f83dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f83e0:;
    {
        cpu->r[14] = 0x000f83e4u; fn_000f7c64(cpu);
    }
L_000f83e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000f83e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83ec:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f83f0:;
    {
        goto L_000f8234;
    }
L_000f83f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000f83f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f83fc:;
    {
        cpu->r[14] = 0x000f8400u; fn_000f7c64(cpu);
    }
L_000f8400:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8404:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8408:;
    {
        goto L_000f822c;
    }
}

/* _ZN12RaceRecorder26WriteCameraRecordsToBufferEv @ 000f840c (arm) */
void fn_000f840c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f840c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f8410:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000f8414:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000f8418:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f841c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000f8420:;
    {
        cpu->r[3] = rd16(cpu->r[0] + cpu->r[3]);
    }
L_000f8424:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000f8428:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_000f842c:;
    {
        wr16(cpu->r[2], cpu->r[3]);
    }
L_000f8430:;
    {
        cpu->r[14] = 0x000f8434u; fn_000f7c28(cpu);
    }
L_000f8434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f843c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8440:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x2u);
    }
L_000f8444:;
    {
        cpu->r[14] = 0x000f8448u; fn_000f7c28(cpu);
    }
L_000f8448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f844c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8450:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8454:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8458:;
    {
        cpu->r[14] = 0x000f845cu; fn_000f7ccc(cpu);
    }
L_000f845c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8464:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8468:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000f846c:;
    {
        cpu->r[14] = 0x000f8470u; fn_000f7ccc(cpu);
    }
L_000f8470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8474:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8478:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f847c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000f8480:;
    {
        cpu->r[14] = 0x000f8484u; fn_000f7ccc(cpu);
    }
L_000f8484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8488:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f848c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8490:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x10u);
    }
L_000f8494:;
    {
        cpu->r[14] = 0x000f8498u; fn_000f7ccc(cpu);
    }
L_000f8498:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f849c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f84a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f84a4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_000f84a8:;
    {
        cpu->r[14] = 0x000f84acu; fn_000f7ccc(cpu);
    }
L_000f84ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f84b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f84b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f84b8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_000f84bc:;
    {
        cpu->r[14] = 0x000f84c0u; fn_000f7ccc(cpu);
    }
L_000f84c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f84c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f84c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f84cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_000f84d0:;
    {
        cpu->r[14] = 0x000f84d4u; fn_000f7ccc(cpu);
    }
L_000f84d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f84d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f84dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f84e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x20u);
    }
L_000f84e4:;
    {
        cpu->r[14] = 0x000f84e8u; fn_000f7ccc(cpu);
    }
L_000f84e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f84ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f84f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f84f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_000f84f8:;
    {
        cpu->r[14] = 0x000f84fcu; fn_000f7ccc(cpu);
    }
L_000f84fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8504:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8508:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x28u);
    }
L_000f850c:;
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
L_000f8510:;
    {
        return fn_000f7ccc(cpu);
    }
}

/* _ZN12RaceRecorder25WriteEventRecordsToBufferEv @ 000f8514 (arm) */
void fn_000f8514(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8514:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f8518:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000f851c:;
    {
        cpu->r[7] = 0x00001920u;
    }
L_000f8520:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f8524:;
    {
        cpu->r[1] = rd16(cpu->r[0] + cpu->r[2]);
    }
L_000f8528:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000f852c:;
    {
        wr16(cpu->r[3], cpu->r[1]);
    }
L_000f8530:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_000f8534:;
    {
        cpu->r[14] = 0x000f8538u; fn_000f7c28(cpu);
    }
L_000f8538:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f853c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8540:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f8544:;
    {
        cpu->r[14] = 0x000f8548u; fn_000f7c10(cpu);
    }
L_000f8548:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f854c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f8550:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000f8554:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f8598;
        }
    }
L_000f8558:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f855c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[6] = v;
    }
L_000f8560:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8564:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000f8568:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f856c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x4u);
    }
L_000f8570:;
    {
        cpu->r[14] = 0x000f8574u; fn_000f7c64(cpu);
    }
L_000f8574:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f8578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f857c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000f8580:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_000f8584:;
    {
        cpu->r[14] = 0x000f8588u; fn_000f7c64(cpu);
    }
L_000f8588:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f858c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_000f8590:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000f8594:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f855c;
        }
    }
L_000f8598:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f859c:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_000f85a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f85a4u)) return;
    }
}

/* _ZN12RaceRecorder15CloseReplayFileEv @ 000f85a4 (arm) */
void fn_000f85a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f85a4:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f85a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f85ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f85b0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f85b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000f85b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f85c0;
        }
    }
L_000f85bc:;
    {
        cpu->r[14] = 0x000f85c0u; imp_fclose(cpu); /* fclose */
    }
L_000f85c0:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f85c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000f85c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000f85cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f85d0u)) return;
    }
}

/* _ZN12RaceRecorder9EndReplayEv @ 000f85d0 (arm) */
void fn_000f85d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f85d0:;
    {
        return fn_000f85a4(cpu);
    }
}

/* _ZN12RaceRecorder20UpdateFromReplayFileEv @ 000f85d4 (arm) */
void fn_000f85d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f85d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f85d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f85dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00032000u, 1, 1);
    }
L_000f85e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f85e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000f8604;
        }
    }
L_000f85e8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000f85ec:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f85f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f85f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f85f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f85fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000f8600:;
    {
        imp_fread(cpu); /* tail fread */ return;
    }
L_000f8604:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f8608:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00032000u, cpu->r[3], 1, 0);
    }
L_000f860c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f8610:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_000f8614:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f8618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f861c:;
    {
        cpu->r[14] = 0x000f8620u; imp_fread(cpu); /* fread */
    }
L_000f8620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f8624:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f8628:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f862cu)) return;
        }
    }
L_000f862c:;
    {
        goto L_000f85e8;
    }
}

/* _ZN12RaceRecorder18IncCrtBufferOffsetEv @ 000f8630 (arm) */
void fn_000f8630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8630:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f8634:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f8638:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f863c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00032000u, 1, 1);
    }
L_000f8640:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f8644:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_000f8648:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f864cu)) return;
        }
    }
L_000f864c:;
    {
        cpu->r[14] = 0x000f8650u; fn_000f85d4(cpu);
    }
L_000f8650:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f8654:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_000f8658:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f865cu)) return;
    }
}

/* _ZN12RaceRecorder22ReadFloatFromCarBufferEv @ 000f865c (arm) */
void fn_000f865c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f865c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f8660:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f8664:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f8668:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f866c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f8670:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f8674:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000f8678:;
    {
        cpu->r[14] = 0x000f867cu; fn_000f8630(cpu);
    }
L_000f867c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f8680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8684:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f8688:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f868c:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000f8690:;
    {
        cpu->r[14] = 0x000f8694u; fn_000f8630(cpu);
    }
L_000f8694:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f8698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f869c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f86a0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f86a4:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000f86a8:;
    {
        cpu->r[14] = 0x000f86acu; fn_000f8630(cpu);
    }
L_000f86ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f86b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f86b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f86b8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f86bc:;
    {
        wr8(cpu->r[13] + + 0x7u, cpu->r[3]);
    }
L_000f86c0:;
    {
        cpu->r[14] = 0x000f86c4u; fn_000f8630(cpu);
    }
L_000f86c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f86c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f86cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f86d0u)) return;
    }
}

/* _ZN12RaceRecorder20ReadIntFromCarBufferEv @ 000f86d0 (arm) */
void fn_000f86d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f86d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f86d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f86d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f86dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f86e0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f86e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f86e8:;
    {
        wr8(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000f86ec:;
    {
        cpu->r[14] = 0x000f86f0u; fn_000f8630(cpu);
    }
L_000f86f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f86f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f86f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f86fc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f8700:;
    {
        wr8(cpu->r[13] + + 0x5u, cpu->r[3]);
    }
L_000f8704:;
    {
        cpu->r[14] = 0x000f8708u; fn_000f8630(cpu);
    }
L_000f8708:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f870c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8710:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f8714:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f8718:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000f871c:;
    {
        cpu->r[14] = 0x000f8720u; fn_000f8630(cpu);
    }
L_000f8720:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f8724:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8728:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f872c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f8730:;
    {
        wr8(cpu->r[13] + + 0x7u, cpu->r[3]);
    }
L_000f8734:;
    {
        cpu->r[14] = 0x000f8738u; fn_000f8630(cpu);
    }
L_000f8738:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f873c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f8740:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8744u)) return;
    }
}

/* _ZN12RaceRecorder21ReadQuatFromCarBufferEv @ 000f8744 (arm) */
void fn_000f8744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8744:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000f8748:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f874c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000f8750:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000f8754:;
    {
        cpu->r[14] = 0x000f8758u; fn_000f86d0(cpu);
    }
L_000f8758:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000f875c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8760:;
    {
        cpu->r[14] = 0x000f8764u; fn_000f86d0(cpu);
    }
L_000f8764:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000f8768:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f876c:;
    {
        cpu->r[14] = 0x000f8770u; fn_000f86d0(cpu);
    }
L_000f8770:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000f8774:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8778:;
    {
        cpu->r[14] = 0x000f877cu; fn_000f86d0(cpu);
    }
L_000f877c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000f8780:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8784:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8788u)) return;
    }
}

/* _ZN12RaceRecorder22ReadShortFromCarBufferEv @ 000f8788 (arm) */
void fn_000f8788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8788:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f878c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f8790:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f8794:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f8798:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f879c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000f87a0:;
    {
        wr8(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_000f87a4:;
    {
        cpu->r[14] = 0x000f87a8u; fn_000f8630(cpu);
    }
L_000f87a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_000f87ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f87b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_000f87b4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000f87b8:;
    {
        wr8(cpu->r[13] + + 0x7u, cpu->r[3]);
    }
L_000f87bc:;
    {
        cpu->r[14] = 0x000f87c0u; fn_000f8630(cpu);
    }
L_000f87c0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x6u);
    }
L_000f87c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f87c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f87ccu)) return;
    }
}

/* _ZN12RaceRecorder27ReadCameraRecordsFromBufferEv @ 000f87cc (arm) */
void fn_000f87cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f87cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f87d0:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000f87d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f87d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000f87dc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f87e0:;
    {
        cpu->r[14] = 0x000f87e4u; fn_000f8788(cpu);
    }
L_000f87e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f87e8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f87ec:;
    {
        wr16(cpu->r[6], cpu->r[0]);
    }
L_000f87f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f87f4:;
    {
        cpu->r[14] = 0x000f87f8u; fn_000f8788(cpu);
    }
L_000f87f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f87fc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8800:;
    {
        wr16(cpu->r[7] + + 0x2u, cpu->r[0]);
    }
L_000f8804:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8808:;
    {
        cpu->r[14] = 0x000f880cu; fn_000f865c(cpu);
    }
L_000f880c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8810:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8814:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_000f8818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f881c:;
    {
        cpu->r[14] = 0x000f8820u; fn_000f865c(cpu);
    }
L_000f8820:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8824:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8828:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_000f882c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8830:;
    {
        cpu->r[14] = 0x000f8834u; fn_000f865c(cpu);
    }
L_000f8834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8838:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f883c:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_000f8840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8844:;
    {
        cpu->r[14] = 0x000f8848u; fn_000f865c(cpu);
    }
L_000f8848:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f884c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8850:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[0]);
    }
L_000f8854:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8858:;
    {
        cpu->r[14] = 0x000f885cu; fn_000f865c(cpu);
    }
L_000f885c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8860:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8864:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[0]);
    }
L_000f8868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f886c:;
    {
        cpu->r[14] = 0x000f8870u; fn_000f865c(cpu);
    }
L_000f8870:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8874:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8878:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[0]);
    }
L_000f887c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8880:;
    {
        cpu->r[14] = 0x000f8884u; fn_000f865c(cpu);
    }
L_000f8884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f8888:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f888c:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[0]);
    }
L_000f8890:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8894:;
    {
        cpu->r[14] = 0x000f8898u; fn_000f865c(cpu);
    }
L_000f8898:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f889c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f88a0:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_000f88a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f88a8:;
    {
        cpu->r[14] = 0x000f88acu; fn_000f865c(cpu);
    }
L_000f88ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f88b0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f88b4:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[0]);
    }
L_000f88b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f88bc:;
    {
        cpu->r[14] = 0x000f88c0u; fn_000f865c(cpu);
    }
L_000f88c0:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[0]);
    }
L_000f88c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f88c8u)) return;
    }
}

/* _ZN12RaceRecorder24ReadCarRecordsFromBufferEi @ 000f88c8 (arm) */
void fn_000f88c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f88c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f88cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f88d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000f88d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f88d8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f88dc:;
    {
        cpu->r[14] = 0x000f88e0u; fn_000f8788(cpu);
    }
L_000f88e0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f88e4:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_000f88e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f88ec:;
    {
        cpu->r[14] = 0x000f88f0u; fn_000f86d0(cpu);
    }
L_000f88f0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f88f4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_000f88f8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f88fc:;
    {
        { uint32_t v = cpu->r[12] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f8900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8aec;
        }
    }
L_000f8904:;
    {
        { uint32_t v = cpu->r[12] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f8908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8ad4;
        }
    }
L_000f890c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f8910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8abc;
        }
    }
L_000f8914:;
    {
        { uint32_t v = cpu->r[12] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f8918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8aa4;
        }
    }
L_000f891c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f8920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a8c;
        }
    }
L_000f8924:;
    {
        { uint32_t v = cpu->r[12] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f8928:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a74;
        }
    }
L_000f892c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f8930:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a5c;
        }
    }
L_000f8934:;
    {
        { uint32_t v = cpu->r[12] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f8938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a44;
        }
    }
L_000f893c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f8940:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a2c;
        }
    }
L_000f8944:;
    {
        { uint32_t v = cpu->r[12] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f8948:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8a14;
        }
    }
L_000f894c:;
    {
        { uint32_t v = cpu->r[12] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f8950:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f89ec;
        }
    }
L_000f8954:;
    {
        cpu->r[3] = 0x00003003u;
    }
L_000f8958:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_000f895c:;
    {
        uint32_t v = cpu->r[12] & cpu->r[3]; cpu->r[3] = v;
    }
L_000f8960:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f8964:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f89d4;
        }
    }
L_000f8968:;
    {
        { uint32_t v = cpu->r[12] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f896c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f89bc;
        }
    }
L_000f8970:;
    {
        { uint32_t v = cpu->r[12] & 0x00010000u; set_nz(cpu, v); }
    }
L_000f8974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f89a4;
        }
    }
L_000f8978:;
    {
        { uint32_t v = cpu->r[12] & 0x00020000u; set_nz(cpu, v); }
    }
L_000f897c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f899c;
        }
    }
L_000f8980:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8984:;
    {
        cpu->r[14] = 0x000f8988u; fn_000f86d0(cpu);
    }
L_000f8988:;
    {
        cpu->r[6] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f898c:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_000f8990:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8994:;
    {
        cpu->r[14] = 0x000f8998u; fn_000f86d0(cpu);
    }
L_000f8998:;
    {
        wr32(cpu->r[6] + + 0x3cu, cpu->r[0]);
    }
L_000f899c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f89a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f89a4u)) return;
    }
L_000f89a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f89a8:;
    {
        cpu->r[14] = 0x000f89acu; fn_000f86d0(cpu);
    }
L_000f89ac:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000f89b0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f89b4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f89b8:;
    {
        goto L_000f8978;
    }
L_000f89bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f89c0:;
    {
        cpu->r[14] = 0x000f89c4u; fn_000f86d0(cpu);
    }
L_000f89c4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_000f89c8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f89cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f89d0:;
    {
        goto L_000f8970;
    }
L_000f89d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f89d8:;
    {
        cpu->r[14] = 0x000f89dcu; fn_000f86d0(cpu);
    }
L_000f89dc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000f89e0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f89e4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f89e8:;
    {
        goto L_000f8968;
    }
L_000f89ec:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_000f89f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f89f4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000f89f8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_000f89fc:;
    {
        cpu->r[14] = 0x000f8a00u; fn_000f8744(cpu);
    }
L_000f8a00:;
    {
        uint32_t base = cpu->r[8];
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
L_000f8a04:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a08:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a0c:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000f8a10:;
    {
        goto L_000f8954;
    }
L_000f8a14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a18:;
    {
        cpu->r[14] = 0x000f8a1cu; fn_000f8788(cpu);
    }
L_000f8a1c:;
    {
        wr16(cpu->r[4] + + 0x1au, cpu->r[0]);
    }
L_000f8a20:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a24:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a28:;
    {
        goto L_000f894c;
    }
L_000f8a2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a30:;
    {
        cpu->r[14] = 0x000f8a34u; fn_000f8788(cpu);
    }
L_000f8a34:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_000f8a38:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a3c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a40:;
    {
        goto L_000f8944;
    }
L_000f8a44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a48:;
    {
        cpu->r[14] = 0x000f8a4cu; fn_000f8788(cpu);
    }
L_000f8a4c:;
    {
        wr16(cpu->r[4] + + 0x16u, cpu->r[0]);
    }
L_000f8a50:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a54:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a58:;
    {
        goto L_000f893c;
    }
L_000f8a5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a60:;
    {
        cpu->r[14] = 0x000f8a64u; fn_000f8788(cpu);
    }
L_000f8a64:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_000f8a68:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a6c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a70:;
    {
        goto L_000f8934;
    }
L_000f8a74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a78:;
    {
        cpu->r[14] = 0x000f8a7cu; fn_000f8788(cpu);
    }
L_000f8a7c:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[0]);
    }
L_000f8a80:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a84:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8a88:;
    {
        goto L_000f892c;
    }
L_000f8a8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8a90:;
    {
        cpu->r[14] = 0x000f8a94u; fn_000f8788(cpu);
    }
L_000f8a94:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000f8a98:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8a9c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8aa0:;
    {
        goto L_000f8924;
    }
L_000f8aa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8aa8:;
    {
        cpu->r[14] = 0x000f8aacu; fn_000f8788(cpu);
    }
L_000f8aac:;
    {
        wr16(cpu->r[4] + + 0xeu, cpu->r[0]);
    }
L_000f8ab0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8ab4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ab8:;
    {
        goto L_000f891c;
    }
L_000f8abc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ac0:;
    {
        cpu->r[14] = 0x000f8ac4u; fn_000f8788(cpu);
    }
L_000f8ac4:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000f8ac8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8acc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ad0:;
    {
        goto L_000f8914;
    }
L_000f8ad4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ad8:;
    {
        cpu->r[14] = 0x000f8adcu; fn_000f8788(cpu);
    }
L_000f8adc:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[0]);
    }
L_000f8ae0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8ae4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ae8:;
    {
        goto L_000f890c;
    }
L_000f8aec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8af0:;
    {
        cpu->r[14] = 0x000f8af4u; fn_000f8788(cpu);
    }
L_000f8af4:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000f8af8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000f8afc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8b00:;
    {
        goto L_000f8904;
    }
}

/* _ZN12RaceRecorder21ReadByteFromCarBufferEv @ 000f8b04 (arm) */
void fn_000f8b04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8b04:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f8b08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f8b0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f8b10:;
    {
        cpu->r[4] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000f8b14:;
    {
        cpu->r[14] = 0x000f8b18u; fn_000f8630(cpu);
    }
L_000f8b18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8b1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8b20u)) return;
    }
}

/* _ZN12RaceRecorder26ReadEventRecordsFromBufferEv @ 000f8b20 (arm) */
void fn_000f8b20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8b20:;
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
L_000f8b24:;
    {
        cpu->r[8] = 0x00001920u;
    }
L_000f8b28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f8b2c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000f8b30:;
    {
        cpu->r[14] = 0x000f8b34u; fn_000f8788(cpu);
    }
L_000f8b34:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f8b38:;
    {
        wr16(cpu->r[6], cpu->r[0]);
    }
L_000f8b3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8b40:;
    {
        cpu->r[14] = 0x000f8b44u; fn_000f8b04(cpu);
    }
L_000f8b44:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[0]);
    }
L_000f8b48:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f8b4c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x2u);
    }
L_000f8b50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f8b54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8b58u)) return;
        }
    }
L_000f8b58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f8b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8b60:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[7] = v;
    }
L_000f8b64:;
    {
        cpu->r[14] = 0x000f8b68u; fn_000f86d0(cpu);
    }
L_000f8b68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_000f8b6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f8b70:;
    {
        wr8(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_000f8b74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000f8b78:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f8b7c:;
    {
        cpu->r[14] = 0x000f8b80u; fn_000f86d0(cpu);
    }
L_000f8b80:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000f8b84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_000f8b88:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[0]);
    }
L_000f8b8c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x2u);
    }
L_000f8b90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f8b94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f8b5c;
        }
    }
L_000f8b98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8b9cu)) return;
    }
}

/* _ZN12RaceRecorder30ReadCarPoliceRecordsFromBufferEi @ 000f8b9c (arm) */
void fn_000f8b9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8b9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f8ba0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000650u, 0, 0);
    }
L_000f8ba4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000f8ba8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000f8bac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f8bb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8bb4:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8bb8:;
    {
        cpu->r[14] = 0x000f8bbcu; fn_000f8788(cpu);
    }
L_000f8bbc:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8bc0:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_000f8bc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8bc8:;
    {
        cpu->r[14] = 0x000f8bccu; fn_000f8788(cpu);
    }
L_000f8bcc:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8bd0:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000f8bd4:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_000f8bd8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8bdc:;
    {
        { uint32_t v = cpu->r[12] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f8be0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8da8;
        }
    }
L_000f8be4:;
    {
        { uint32_t v = cpu->r[12] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f8be8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d8c;
        }
    }
L_000f8bec:;
    {
        { uint32_t v = cpu->r[12] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f8bf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d70;
        }
    }
L_000f8bf4:;
    {
        { uint32_t v = cpu->r[12] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f8bf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d54;
        }
    }
L_000f8bfc:;
    {
        { uint32_t v = cpu->r[12] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f8c00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d38;
        }
    }
L_000f8c04:;
    {
        { uint32_t v = cpu->r[12] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f8c08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d1c;
        }
    }
L_000f8c0c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f8c10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8d00;
        }
    }
L_000f8c14:;
    {
        { uint32_t v = cpu->r[12] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f8c18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8ce4;
        }
    }
L_000f8c1c:;
    {
        { uint32_t v = cpu->r[12] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f8c20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8cc8;
        }
    }
L_000f8c24:;
    {
        { uint32_t v = cpu->r[12] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f8c28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8cac;
        }
    }
L_000f8c2c:;
    {
        { uint32_t v = cpu->r[12] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f8c30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8c80;
        }
    }
L_000f8c34:;
    {
        cpu->r[3] = 0x00003003u;
    }
L_000f8c38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_000f8c3c:;
    {
        uint32_t v = cpu->r[12] & cpu->r[3]; cpu->r[3] = v;
    }
L_000f8c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f8c44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8c64;
        }
    }
L_000f8c48:;
    {
        { uint32_t v = cpu->r[12] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f8c4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f8c5c;
        }
    }
L_000f8c50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8c54:;
    {
        cpu->r[14] = 0x000f8c58u; fn_000f86d0(cpu);
    }
L_000f8c58:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000f8c5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f8c60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8c64u)) return;
    }
L_000f8c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8c68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8c6c:;
    {
        cpu->r[14] = 0x000f8c70u; fn_000f86d0(cpu);
    }
L_000f8c70:;
    {
        wr16(cpu->r[4] + + 0x22u, cpu->r[0]);
    }
L_000f8c74:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8c78:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8c7c:;
    {
        goto L_000f8c48;
    }
L_000f8c80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f8c84:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000f8c88:;
    {
        cpu->r[14] = 0x000f8c8cu; fn_000f8744(cpu);
    }
L_000f8c8c:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_000f8c90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8c94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000f8c98:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8c9c:;
    {
        uint32_t base = cpu->r[8];
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
L_000f8ca0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ca4:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000f8ca8:;
    {
        goto L_000f8c34;
    }
L_000f8cac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8cb0:;
    {
        cpu->r[14] = 0x000f8cb4u; fn_000f8788(cpu);
    }
L_000f8cb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8cb8:;
    {
        wr16(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_000f8cbc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8cc0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8cc4:;
    {
        goto L_000f8c2c;
    }
L_000f8cc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ccc:;
    {
        cpu->r[14] = 0x000f8cd0u; fn_000f8788(cpu);
    }
L_000f8cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8cd4:;
    {
        wr16(cpu->r[4] + + 0x1eu, cpu->r[0]);
    }
L_000f8cd8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8cdc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ce0:;
    {
        goto L_000f8c24;
    }
L_000f8ce4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ce8:;
    {
        cpu->r[14] = 0x000f8cecu; fn_000f8b04(cpu);
    }
L_000f8cec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8cf0:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000f8cf4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8cf8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8cfc:;
    {
        goto L_000f8c1c;
    }
L_000f8d00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d04:;
    {
        cpu->r[14] = 0x000f8d08u; fn_000f8788(cpu);
    }
L_000f8d08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d0c:;
    {
        wr16(cpu->r[4] + + 0x1au, cpu->r[0]);
    }
L_000f8d10:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8d14:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8d18:;
    {
        goto L_000f8c14;
    }
L_000f8d1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d20:;
    {
        cpu->r[14] = 0x000f8d24u; fn_000f8788(cpu);
    }
L_000f8d24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d28:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_000f8d2c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8d30:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8d34:;
    {
        goto L_000f8c0c;
    }
L_000f8d38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d3c:;
    {
        cpu->r[14] = 0x000f8d40u; fn_000f8788(cpu);
    }
L_000f8d40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d44:;
    {
        wr16(cpu->r[4] + + 0x16u, cpu->r[0]);
    }
L_000f8d48:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8d4c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8d50:;
    {
        goto L_000f8c04;
    }
L_000f8d54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d58:;
    {
        cpu->r[14] = 0x000f8d5cu; fn_000f8788(cpu);
    }
L_000f8d5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d60:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_000f8d64:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8d68:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8d6c:;
    {
        goto L_000f8bfc;
    }
L_000f8d70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d74:;
    {
        cpu->r[14] = 0x000f8d78u; fn_000f86d0(cpu);
    }
L_000f8d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d7c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000f8d80:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8d84:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8d88:;
    {
        goto L_000f8bf4;
    }
L_000f8d8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8d90:;
    {
        cpu->r[14] = 0x000f8d94u; fn_000f86d0(cpu);
    }
L_000f8d94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8d98:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000f8d9c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8da0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8da4:;
    {
        goto L_000f8bec;
    }
L_000f8da8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8dac:;
    {
        cpu->r[14] = 0x000f8db0u; fn_000f86d0(cpu);
    }
L_000f8db0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000f8db4:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8db8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8dbc:;
    {
        goto L_000f8be4;
    }
}

/* _ZN12RaceRecorder31ReadCarTrafficRecordsFromBufferEi @ 000f8dc0 (arm) */
void fn_000f8dc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8dc0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f8dc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], 0x00000640u, 0, 0);
    }
L_000f8dc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_000f8dcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_000f8dd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000f8dd4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8dd8:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8ddc:;
    {
        cpu->r[14] = 0x000f8de0u; fn_000f8788(cpu);
    }
L_000f8de0:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8de4:;
    {
        wr16(cpu->r[4], cpu->r[0]);
    }
L_000f8de8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8dec:;
    {
        cpu->r[14] = 0x000f8df0u; fn_000f8788(cpu);
    }
L_000f8df0:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8df4:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000f8df8:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_000f8dfc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8e00:;
    {
        { uint32_t v = cpu->r[12] & 0x00000080u; set_nz(cpu, v); }
    }
L_000f8e04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8fcc;
        }
    }
L_000f8e08:;
    {
        { uint32_t v = cpu->r[12] & 0x00000040u; set_nz(cpu, v); }
    }
L_000f8e0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8fb0;
        }
    }
L_000f8e10:;
    {
        { uint32_t v = cpu->r[12] & 0x00000020u; set_nz(cpu, v); }
    }
L_000f8e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f94;
        }
    }
L_000f8e18:;
    {
        { uint32_t v = cpu->r[12] & 0x00000200u; set_nz(cpu, v); }
    }
L_000f8e1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f78;
        }
    }
L_000f8e20:;
    {
        { uint32_t v = cpu->r[12] & 0x00000100u; set_nz(cpu, v); }
    }
L_000f8e24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f5c;
        }
    }
L_000f8e28:;
    {
        { uint32_t v = cpu->r[12] & 0x00000800u; set_nz(cpu, v); }
    }
L_000f8e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f40;
        }
    }
L_000f8e30:;
    {
        { uint32_t v = cpu->r[12] & 0x00000400u; set_nz(cpu, v); }
    }
L_000f8e34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f24;
        }
    }
L_000f8e38:;
    {
        { uint32_t v = cpu->r[12] & 0x00000010u; set_nz(cpu, v); }
    }
L_000f8e3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8f08;
        }
    }
L_000f8e40:;
    {
        { uint32_t v = cpu->r[12] & 0x00000008u; set_nz(cpu, v); }
    }
L_000f8e44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8eec;
        }
    }
L_000f8e48:;
    {
        { uint32_t v = cpu->r[12] & 0x00000004u; set_nz(cpu, v); }
    }
L_000f8e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8ed0;
        }
    }
L_000f8e50:;
    {
        { uint32_t v = cpu->r[12] & 0x00004000u; set_nz(cpu, v); }
    }
L_000f8e54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8ea4;
        }
    }
L_000f8e58:;
    {
        cpu->r[3] = 0x00003003u;
    }
L_000f8e5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_000f8e60:;
    {
        uint32_t v = cpu->r[12] & cpu->r[3]; cpu->r[3] = v;
    }
L_000f8e64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f8e68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f8e88;
        }
    }
L_000f8e6c:;
    {
        { uint32_t v = cpu->r[12] & 0x00008000u; set_nz(cpu, v); }
    }
L_000f8e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f8e80;
        }
    }
L_000f8e74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8e78:;
    {
        cpu->r[14] = 0x000f8e7cu; fn_000f86d0(cpu);
    }
L_000f8e7c:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[0]);
    }
L_000f8e80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000f8e84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8e88u)) return;
    }
L_000f8e88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8e8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8e90:;
    {
        cpu->r[14] = 0x000f8e94u; fn_000f86d0(cpu);
    }
L_000f8e94:;
    {
        wr16(cpu->r[4] + + 0x22u, cpu->r[0]);
    }
L_000f8e98:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x4u);
    }
L_000f8e9c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ea0:;
    {
        goto L_000f8e6c;
    }
L_000f8ea4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f8ea8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_000f8eac:;
    {
        cpu->r[14] = 0x000f8eb0u; fn_000f8744(cpu);
    }
L_000f8eb0:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_000f8eb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8eb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000f8ebc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8ec0:;
    {
        uint32_t base = cpu->r[8];
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
L_000f8ec4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ec8:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000f8ecc:;
    {
        goto L_000f8e58;
    }
L_000f8ed0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ed4:;
    {
        cpu->r[14] = 0x000f8ed8u; fn_000f8788(cpu);
    }
L_000f8ed8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8edc:;
    {
        wr16(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_000f8ee0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8ee4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8ee8:;
    {
        goto L_000f8e50;
    }
L_000f8eec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8ef0:;
    {
        cpu->r[14] = 0x000f8ef4u; fn_000f8788(cpu);
    }
L_000f8ef4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8ef8:;
    {
        wr16(cpu->r[4] + + 0x1eu, cpu->r[0]);
    }
L_000f8efc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f00:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f04:;
    {
        goto L_000f8e48;
    }
L_000f8f08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f0c:;
    {
        cpu->r[14] = 0x000f8f10u; fn_000f8b04(cpu);
    }
L_000f8f10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8f14:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_000f8f18:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f1c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f20:;
    {
        goto L_000f8e40;
    }
L_000f8f24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f28:;
    {
        cpu->r[14] = 0x000f8f2cu; fn_000f8788(cpu);
    }
L_000f8f2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8f30:;
    {
        wr16(cpu->r[4] + + 0x1au, cpu->r[0]);
    }
L_000f8f34:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f38:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f3c:;
    {
        goto L_000f8e38;
    }
L_000f8f40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f44:;
    {
        cpu->r[14] = 0x000f8f48u; fn_000f8788(cpu);
    }
L_000f8f48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8f4c:;
    {
        wr16(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_000f8f50:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f54:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f58:;
    {
        goto L_000f8e30;
    }
L_000f8f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f60:;
    {
        cpu->r[14] = 0x000f8f64u; fn_000f8788(cpu);
    }
L_000f8f64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8f68:;
    {
        wr16(cpu->r[4] + + 0x16u, cpu->r[0]);
    }
L_000f8f6c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f70:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f74:;
    {
        goto L_000f8e28;
    }
L_000f8f78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f7c:;
    {
        cpu->r[14] = 0x000f8f80u; fn_000f8788(cpu);
    }
L_000f8f80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8f84:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_000f8f88:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8f8c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8f90:;
    {
        goto L_000f8e20;
    }
L_000f8f94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8f98:;
    {
        cpu->r[14] = 0x000f8f9cu; fn_000f86d0(cpu);
    }
L_000f8f9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8fa0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_000f8fa4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8fa8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8fac:;
    {
        goto L_000f8e18;
    }
L_000f8fb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8fb4:;
    {
        cpu->r[14] = 0x000f8fb8u; fn_000f86d0(cpu);
    }
L_000f8fb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000f8fbc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000f8fc0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_000f8fc4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8fc8:;
    {
        goto L_000f8e10;
    }
L_000f8fcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000f8fd0:;
    {
        cpu->r[14] = 0x000f8fd4u; fn_000f86d0(cpu);
    }
L_000f8fd4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000f8fd8:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x4u);
    }
L_000f8fdc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f8fe0:;
    {
        goto L_000f8e08;
    }
}

/* _ZN12RaceRecorder17FlushToReplayFileEv @ 000f8fe4 (arm) */
void fn_000f8fe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f8fe4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x40u);
    }
L_000f8fe8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000f8fec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000f8ff0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f8ff4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f8ff8u)) return;
        }
    }
L_000f8ff8:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f8ffc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_000f9000:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f9008:;
    {
        cpu->r[14] = 0x000f900cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f900c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000f9010:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_000f9014:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000f9018u)) return;
    }
}

/* _ZN12RaceRecorder16LoadReplayHeaderEv @ 000f9018 (arm) */
void fn_000f9018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f9018:;
    {
        cpu->r[2] = rd32(0x000f9020u + + 0x6f8u);
    }
L_000f901c:;
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
L_000f9020:;
    {
        cpu->r[1] = rd32(0x000f9028u + + 0x6f4u);
    }
L_000f9024:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000f9028:;
    {
        cpu->r[5] = 0x00001a14u;
    }
L_000f902c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f9034u, cpu->r[1], 0, 0);
    }
L_000f9030:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f9034:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000f9038:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f903c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000f9040:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f9044:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f9048:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f904c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000f9050:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000f9054:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9058:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000f905c:;
    {
        cpu->r[14] = 0x000f9060u; imp_fseek(cpu); /* fseek */
    }
L_000f9060:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001a00u, 0, 0);
    }
L_000f9064:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9068:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f906c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9070:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9074:;
    {
        cpu->r[14] = 0x000f9078u; imp_fread(cpu); /* fread */
    }
L_000f9078:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000f907c:;
    {
        cpu->r[12] = 0x00001a08u;
    }
L_000f9080:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9084:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f9088:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f908c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9090:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_000f9094:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_000f9098:;
    {
        cpu->r[14] = 0x000f909cu; imp_fread(cpu); /* fread */
    }
L_000f909c:;
    {
        cpu->r[3] = 0x000017dcu;
    }
L_000f90a0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f90a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f90a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f90ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f90b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_000f90b4:;
    {
        cpu->r[14] = 0x000f90b8u; imp_fread(cpu); /* fread */
    }
L_000f90b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f90bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001600u, 0, 0);
    }
L_000f90c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f90c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000f90c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f90cc:;
    {
        cpu->r[14] = 0x000f90d0u; imp_fread(cpu); /* fread */
    }
L_000f90d0:;
    {
        cpu->r[3] = 0x0000163cu;
    }
L_000f90d4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000f90d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f90dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f91d4;
        }
    }
L_000f90e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000f90e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f90e8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000f90ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000f90f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000f90f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000f90f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000f90fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000f9100:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000f9104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000f9108:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000f910c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000f9110:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000f9114:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000f9118:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000f911c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_000f9120:;
    {
        cpu->r[14] = cpu->r[8];
    }
L_000f9124:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f9128:;
    {
        cpu->r[7] = 0x00001a14u;
    }
L_000f912c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000f9130:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[12]);
        cpu->r[14] = wb_tmp;
    }
L_000f9134:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_000f9138:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f913c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f9140:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[12]);
        cpu->r[14] = wb_tmp;
    }
L_000f9144:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000f9148:;
    {
        wr8(cpu->r[14], cpu->r[12]);
    }
L_000f914c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f9150:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f9154:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000f9158:;
    {
        wr32(cpu->r[6], cpu->r[12]);
    }
L_000f915c:;
    {
        wr32(cpu->r[10], cpu->r[12]);
    }
L_000f9160:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9164:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f9168:;
    {
        wr32(cpu->r[9], cpu->r[12]);
    }
L_000f916c:;
    {
        wr32(cpu->r[11], cpu->r[12]);
    }
L_000f9170:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9174:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f9178:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[12]);
    }
L_000f917c:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9180:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f9184:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9188:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f918c:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9190:;
    {
        cpu->r[14] = 0x000f9194u; imp_fread(cpu); /* fread */
    }
L_000f9194:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_000f9198:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f919c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f91a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f91a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000f91a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f91ac:;
    {
        cpu->r[14] = 0x000f91b0u; fn_0009320c(cpu);
    }
L_000f91b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f91b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f91b8:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_000f91bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f91c0:;
    {
        cpu->r[14] = 0x000f91c4u; imp_fread(cpu); /* fread */
    }
L_000f91c4:;
    {
        cpu->r[3] = 0x0000163cu;
    }
L_000f91c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000f91cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f91d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f9120;
        }
    }
L_000f91d4:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f91d8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f91dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f91e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000f91e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f91e8:;
    {
        cpu->r[7] = 0x0000163cu;
    }
L_000f91ec:;
    {
        cpu->r[14] = 0x000f91f0u; imp_fread(cpu); /* fread */
    }
L_000f91f0:;
    {
        cpu->r[1] = 0x0000d4c0u;
    }
L_000f91f4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f91f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f91fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9200:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f9204:;
    {
        cpu->r[14] = 0x000f9208u; imp_fread(cpu); /* fread */
    }
L_000f9208:;
    {
        cpu->r[1] = 0x0000d4c0u;
    }
L_000f920c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9210:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f9214:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f9218:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f921c:;
    {
        cpu->r[14] = 0x000f9220u; imp_fread(cpu); /* fread */
    }
L_000f9220:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_000f9224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f9228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f9350;
        }
    }
L_000f922c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f9230:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9234:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000092u, 0, 0);
    }
L_000f9238:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f923c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9240:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9244:;
    {
        cpu->r[14] = 0x000f9248u; imp_fread(cpu); /* fread */
    }
L_000f9248:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f924c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000009au, 0, 0);
    }
L_000f9250:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9254:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9258:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f925c:;
    {
        cpu->r[14] = 0x000f9260u; imp_fread(cpu); /* fread */
    }
L_000f9260:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9264:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a2u, 0, 0);
    }
L_000f9268:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f926c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9270:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9274:;
    {
        cpu->r[14] = 0x000f9278u; imp_fread(cpu); /* fread */
    }
L_000f9278:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f927c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000aau, 0, 0);
    }
L_000f9280:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9284:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9288:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f928c:;
    {
        cpu->r[14] = 0x000f9290u; imp_fread(cpu); /* fread */
    }
L_000f9290:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9294:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000b2u, 0, 0);
    }
L_000f9298:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f929c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f92a0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f92a4:;
    {
        cpu->r[14] = 0x000f92a8u; imp_fread(cpu); /* fread */
    }
L_000f92a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f92ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000bau, 0, 0);
    }
L_000f92b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f92b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f92b8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f92bc:;
    {
        cpu->r[14] = 0x000f92c0u; imp_fread(cpu); /* fread */
    }
L_000f92c0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f92c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c2u, 0, 0);
    }
L_000f92c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f92cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f92d0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f92d4:;
    {
        cpu->r[14] = 0x000f92d8u; imp_fread(cpu); /* fread */
    }
L_000f92d8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f92dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000cau, 0, 0);
    }
L_000f92e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f92e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f92e8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f92ec:;
    {
        cpu->r[14] = 0x000f92f0u; imp_fread(cpu); /* fread */
    }
L_000f92f0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f92f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000d2u, 0, 0);
    }
L_000f92f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f92fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9300:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9304:;
    {
        cpu->r[14] = 0x000f9308u; imp_fread(cpu); /* fread */
    }
L_000f9308:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f930c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000dau, 0, 0);
    }
L_000f9310:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9318:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f931c:;
    {
        cpu->r[14] = 0x000f9320u; imp_fread(cpu); /* fread */
    }
L_000f9320:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000005f0u, 0, 0);
    }
L_000f9324:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9328:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000eu, 0, 0);
    }
L_000f932c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9334:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9338:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000f933c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9340:;
    {
        cpu->r[14] = 0x000f9344u; imp_fread(cpu); /* fread */
    }
L_000f9344:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_000f9348:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f934c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f9230;
        }
    }
L_000f9350:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f9354:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f9358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001bcu, 0, 0);
    }
L_000f935c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9360:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9364:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9368:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f936c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9370:;
    {
        cpu->r[14] = 0x000f9374u; imp_fread(cpu); /* fread */
    }
L_000f9374:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001d0u, 0, 0);
    }
L_000f9378:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f937c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9380:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9388:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f938c:;
    {
        cpu->r[14] = 0x000f9390u; imp_fread(cpu); /* fread */
    }
L_000f9390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001e4u, 0, 0);
    }
L_000f9394:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9398:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f939c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f93a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f93a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f93a8:;
    {
        cpu->r[14] = 0x000f93acu; imp_fread(cpu); /* fread */
    }
L_000f93ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001f8u, 0, 0);
    }
L_000f93b0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f93b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f93b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f93bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f93c0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f93c4:;
    {
        cpu->r[14] = 0x000f93c8u; imp_fread(cpu); /* fread */
    }
L_000f93c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000020cu, 0, 0);
    }
L_000f93cc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f93d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f93d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f93d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f93dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f93e0:;
    {
        cpu->r[14] = 0x000f93e4u; imp_fread(cpu); /* fread */
    }
L_000f93e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000220u, 0, 0);
    }
L_000f93e8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f93ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f93f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f93f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f93f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f93fc:;
    {
        cpu->r[14] = 0x000f9400u; imp_fread(cpu); /* fread */
    }
L_000f9400:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000234u, 0, 0);
    }
L_000f9404:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9408:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f940c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9410:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9414:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9418:;
    {
        cpu->r[14] = 0x000f941cu; imp_fread(cpu); /* fread */
    }
L_000f941c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000248u, 0, 0);
    }
L_000f9420:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9424:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9428:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f942c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9430:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9434:;
    {
        cpu->r[14] = 0x000f9438u; imp_fread(cpu); /* fread */
    }
L_000f9438:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000025cu, 0, 0);
    }
L_000f943c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9440:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9444:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f944c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9450:;
    {
        cpu->r[14] = 0x000f9454u; imp_fread(cpu); /* fread */
    }
L_000f9454:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000270u, 0, 0);
    }
L_000f9458:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f945c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9460:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9468:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f946c:;
    {
        cpu->r[14] = 0x000f9470u; imp_fread(cpu); /* fread */
    }
L_000f9470:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000600u, 0, 0);
    }
L_000f9474:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9478:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f947c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f9480:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9484:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f948c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9490:;
    {
        cpu->r[14] = 0x000f9494u; imp_fread(cpu); /* fread */
    }
L_000f9494:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000014u, 1, 1);
    }
L_000f9498:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9358;
        }
    }
L_000f949c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f94a0:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f94a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000410u, 0, 0);
    }
L_000f94a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f94ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f94b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f94b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f94b8:;
    {
        cpu->r[7] = 0x00001a14u;
    }
L_000f94bc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f94c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f94c4:;
    {
        cpu->r[14] = 0x000f94c8u; imp_fread(cpu); /* fread */
    }
L_000f94c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000440u, 0, 0);
    }
L_000f94cc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f94d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f94d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f94d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f94dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f94e0:;
    {
        cpu->r[14] = 0x000f94e4u; imp_fread(cpu); /* fread */
    }
L_000f94e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000460u, 0, 0);
    }
L_000f94e8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f94ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f94f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f94f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f94f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f94fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9500:;
    {
        cpu->r[14] = 0x000f9504u; imp_fread(cpu); /* fread */
    }
L_000f9504:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000480u, 0, 0);
    }
L_000f9508:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f950c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9510:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9514:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9518:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f951c:;
    {
        cpu->r[14] = 0x000f9520u; imp_fread(cpu); /* fread */
    }
L_000f9520:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9524:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004b0u, 0, 0);
    }
L_000f9528:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f952c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9530:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9534:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9538:;
    {
        cpu->r[14] = 0x000f953cu; imp_fread(cpu); /* fread */
    }
L_000f953c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004d0u, 0, 0);
    }
L_000f9540:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9544:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f9548:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f954c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9550:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9554:;
    {
        cpu->r[14] = 0x000f9558u; imp_fread(cpu); /* fread */
    }
L_000f9558:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004f0u, 0, 0);
    }
L_000f955c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9560:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f9564:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9568:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f956c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9570:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9574:;
    {
        cpu->r[14] = 0x000f9578u; imp_fread(cpu); /* fread */
    }
L_000f9578:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f957c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000520u, 0, 0);
    }
L_000f9580:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9588:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f958c:;
    {
        cpu->r[14] = 0x000f9590u; imp_fread(cpu); /* fread */
    }
L_000f9590:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_000f9594:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9598:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000f959c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f95a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f95a4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f95a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f95ac:;
    {
        cpu->r[14] = 0x000f95b0u; imp_fread(cpu); /* fread */
    }
L_000f95b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000560u, 0, 0);
    }
L_000f95b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f95b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f95bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f95c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f95c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f95c8:;
    {
        cpu->r[14] = 0x000f95ccu; imp_fread(cpu); /* fread */
    }
L_000f95cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000610u, 0, 0);
    }
L_000f95d0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f95d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f95d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f95dc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f95e0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f95e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f95e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f95ec:;
    {
        cpu->r[14] = 0x000f95f0u; imp_fread(cpu); /* fread */
    }
L_000f95f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000f95f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f94a4;
        }
    }
L_000f95f8:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000f95fc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9600:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9604:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9608:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f960c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000f9610:;
    {
        cpu->r[14] = 0x000f9614u; imp_fread(cpu); /* fread */
    }
L_000f9614:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9618:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f961c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9624:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000f9628:;
    {
        cpu->r[14] = 0x000f962cu; imp_fread(cpu); /* fread */
    }
L_000f962c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9630:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9634:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9638:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f963c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_000f9640:;
    {
        cpu->r[14] = 0x000f9644u; imp_fread(cpu); /* fread */
    }
L_000f9644:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9648:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f964c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9654:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000f9658:;
    {
        cpu->r[14] = 0x000f965cu; imp_fread(cpu); /* fread */
    }
L_000f965c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9660:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9664:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f966c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_000f9670:;
    {
        cpu->r[14] = 0x000f9674u; imp_fread(cpu); /* fread */
    }
L_000f9674:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9678:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f967c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9684:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000044u, 0, 0);
    }
L_000f9688:;
    {
        cpu->r[14] = 0x000f968cu; imp_fread(cpu); /* fread */
    }
L_000f968c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9690:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9694:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f969c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_000f96a0:;
    {
        cpu->r[14] = 0x000f96a4u; imp_fread(cpu); /* fread */
    }
L_000f96a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f96a8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f96ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f96b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f96b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_000f96b8:;
    {
        cpu->r[14] = 0x000f96bcu; imp_fread(cpu); /* fread */
    }
L_000f96bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f96c0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f96c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f96c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f96cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_000f96d0:;
    {
        cpu->r[14] = 0x000f96d4u; imp_fread(cpu); /* fread */
    }
L_000f96d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f96d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f96dc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f96e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f96e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000f96e8:;
    {
        cpu->r[14] = 0x000f96ecu; imp_fread(cpu); /* fread */
    }
L_000f96ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f96f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f96f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f96f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000f96fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000f9700:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9704:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f9708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9714;
        }
    }
L_000f970c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000f9710:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f9714u)) return;
    }
L_000f9714:;
    {
        cpu->r[14] = 0x000f9718u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f9718:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f971c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 4, 7u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN12RaceRecorder14OpenReplayFileEPc @ 000f9720 (arm) */
void fn_000f9720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f9720:;
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
L_000f9724:;
    {
        cpu->r[4] = rd32(0x000f972cu + + 0xa4u);
    }
L_000f9728:;
    {
        cpu->r[5] = rd32(0x000f9730u + + 0xa4u);
    }
L_000f972c:;
    {
        cpu->r[7] = 0x00001a14u;
    }
L_000f9730:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f9738u, cpu->r[4], 0, 0);
    }
L_000f9734:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_000f9738:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000f973c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f9740:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9744:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f9748:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000f974c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f9750:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[2]);
    }
L_000f9754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f977c;
        }
    }
L_000f9758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f975c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f9760:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_000f9764:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9768:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f976c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f97cc;
        }
    }
L_000f9770:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f9774:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_000f9778:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f977cu)) return;
    }
L_000f977c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000f9780:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f9784:;
    {
        cpu->r[1] = rd32(0x000f978cu + + 0x4cu);
    }
L_000f9788:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_000f978c:;
    {
        cpu->r[2] = rd32(0x000f9794u + + 0x48u);
    }
L_000f9790:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f9794:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f979cu, cpu->r[1], 0, 0);
    }
L_000f9798:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f97a0u, cpu->r[2], 0, 0);
    }
L_000f979c:;
    {
        cpu->r[14] = 0x000f97a0u; imp_sprintf(cpu); /* sprintf */
    }
L_000f97a0:;
    {
        cpu->r[1] = rd32(0x000f97a8u + + 0x38u);
    }
L_000f97a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f97a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f97b0u, cpu->r[1], 0, 0);
    }
L_000f97ac:;
    {
        cpu->r[14] = 0x000f97b0u; imp_fopen(cpu); /* fopen */
    }
L_000f97b0:;
    {
        wr32(cpu->r[6] + cpu->r[7], cpu->r[0]);
    }
L_000f97b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f97b8:;
    {
        cpu->r[14] = 0x000f97bcu; fn_000f9018(cpu);
    }
L_000f97bc:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_000f97c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f97c4:;
    {
        cpu->r[14] = 0x000f97c8u; fn_000f85d4(cpu);
    }
L_000f97c8:;
    {
        goto L_000f9758;
    }
L_000f97cc:;
    {
        cpu->r[14] = 0x000f97d0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f97d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 4, 25u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_000f97d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f97d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[0]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000f97dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + (-cpu->r[4]);
        cpu->r[5] = (uint32_t)(int32_t)s8(cpu->r[1]);
        cpu->r[1] = wb_tmp;
        }
    }
L_000f97e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[8], 4, 5u, &shc); cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN12RaceRecorder16SaveReplayHeaderEv @ 000f97e4 (arm) */
void fn_000f97e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f97e4:;
    {
        cpu->r[2] = rd32(0x000f97ecu + + 0x6e8u);
    }
L_000f97e8:;
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
L_000f97ec:;
    {
        cpu->r[1] = rd32(0x000f97f4u + + 0x6e4u);
    }
L_000f97f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_000f97f4:;
    {
        cpu->r[5] = 0x00001a14u;
    }
L_000f97f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f9800u, cpu->r[1], 0, 0);
    }
L_000f97fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000f9800:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000f9804:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000f9808:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000f980c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f9810:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f9814:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f9818:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000f981c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_000f9820:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9824:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000f9828:;
    {
        cpu->r[14] = 0x000f982cu; imp_fseek(cpu); /* fseek */
    }
L_000f982c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001a00u, 0, 0);
    }
L_000f9830:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9834:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9838:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f983c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9840:;
    {
        cpu->r[14] = 0x000f9844u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9844:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9848:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f984c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9850:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_000f9854:;
    {
        cpu->r[14] = 0x000f9858u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9858:;
    {
        cpu->r[3] = 0x000017dcu;
    }
L_000f985c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9860:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000f9868:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f986c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000058u, 0, 0);
    }
L_000f9870:;
    {
        cpu->r[14] = 0x000f9874u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9874:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f9878:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001600u, 0, 0);
    }
L_000f987c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9880:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000f9884:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f9888:;
    {
        cpu->r[14] = 0x000f988cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f988c:;
    {
        cpu->r[3] = 0x0000163cu;
    }
L_000f9890:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000f9894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f9898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f9990;
        }
    }
L_000f989c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000f98a0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f98a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000f98a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000f98ac:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_000f98b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000f98b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000f98b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000f98bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000f98c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000f98c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000f98c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000f98cc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000f98d0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_000f98d4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_000f98d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_000f98dc:;
    {
        cpu->r[14] = cpu->r[8];
    }
L_000f98e0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000f98e4:;
    {
        cpu->r[7] = 0x00001a14u;
    }
L_000f98e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000f98ec:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[12]);
        cpu->r[14] = wb_tmp;
    }
L_000f98f0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_000f98f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f98f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000f98fc:;
    {
        uint32_t wb_tmp = cpu->r[14] + 0x00000004u;
        wr32(cpu->r[14], cpu->r[12]);
        cpu->r[14] = wb_tmp;
    }
L_000f9900:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000f9904:;
    {
        wr8(cpu->r[14], cpu->r[12]);
    }
L_000f9908:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000f990c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4u);
    }
L_000f9910:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000f9914:;
    {
        wr32(cpu->r[6], cpu->r[12]);
    }
L_000f9918:;
    {
        wr32(cpu->r[10], cpu->r[12]);
    }
L_000f991c:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9920:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000f9924:;
    {
        wr32(cpu->r[9], cpu->r[12]);
    }
L_000f9928:;
    {
        wr32(cpu->r[11], cpu->r[12]);
    }
L_000f992c:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9930:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000f9934:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[12]);
    }
L_000f9938:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f993c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000f9940:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f9944:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000f9948:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_000f994c:;
    {
        cpu->r[14] = 0x000f9950u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9950:;
    {
        cpu->r[0] = 0x00000032u;
    }
L_000f9954:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000f9958:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f995c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f9960:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000f9964:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9968:;
    {
        cpu->r[14] = 0x000f996cu; fn_0009320c(cpu);
    }
L_000f996c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9970:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f9974:;
    {
        cpu->r[1] = 0x00000031u;
    }
L_000f9978:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f997c:;
    {
        cpu->r[14] = 0x000f9980u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9980:;
    {
        cpu->r[3] = 0x0000163cu;
    }
L_000f9984:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000f9988:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f998c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f98dc;
        }
    }
L_000f9990:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f9994:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9998:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f999c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_000f99a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f99a4:;
    {
        cpu->r[7] = 0x0000163cu;
    }
L_000f99a8:;
    {
        cpu->r[14] = 0x000f99acu; imp_fwrite(cpu); /* fwrite */
    }
L_000f99ac:;
    {
        cpu->r[1] = 0x0000d4c0u;
    }
L_000f99b0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f99b4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f99b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f99bc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000f99c0:;
    {
        cpu->r[14] = 0x000f99c4u; imp_fwrite(cpu); /* fwrite */
    }
L_000f99c4:;
    {
        cpu->r[1] = 0x0000d4c0u;
    }
L_000f99c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f99cc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000f99d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000f99d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f99d8:;
    {
        cpu->r[14] = 0x000f99dcu; imp_fwrite(cpu); /* fwrite */
    }
L_000f99dc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_000f99e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f99e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f9b0c;
        }
    }
L_000f99e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f99ec:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f99f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000092u, 0, 0);
    }
L_000f99f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f99f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f99fc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a00:;
    {
        cpu->r[14] = 0x000f9a04u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a04:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000009au, 0, 0);
    }
L_000f9a0c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a14:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a18:;
    {
        cpu->r[14] = 0x000f9a1cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a1c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a2u, 0, 0);
    }
L_000f9a24:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a2c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a30:;
    {
        cpu->r[14] = 0x000f9a34u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a34:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000aau, 0, 0);
    }
L_000f9a3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a44:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a48:;
    {
        cpu->r[14] = 0x000f9a4cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a4c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000b2u, 0, 0);
    }
L_000f9a54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a5c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a60:;
    {
        cpu->r[14] = 0x000f9a64u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000bau, 0, 0);
    }
L_000f9a6c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a74:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a78:;
    {
        cpu->r[14] = 0x000f9a7cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a7c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c2u, 0, 0);
    }
L_000f9a84:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9a88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9a8c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9a90:;
    {
        cpu->r[14] = 0x000f9a94u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9a94:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9a98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000cau, 0, 0);
    }
L_000f9a9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9aa0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9aa4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9aa8:;
    {
        cpu->r[14] = 0x000f9aacu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9aac:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ab0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000d2u, 0, 0);
    }
L_000f9ab4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9ab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9abc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9ac0:;
    {
        cpu->r[14] = 0x000f9ac4u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9ac4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ac8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000dau, 0, 0);
    }
L_000f9acc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9ad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9ad4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9ad8:;
    {
        cpu->r[14] = 0x000f9adcu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9adc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000005f0u, 0, 0);
    }
L_000f9ae0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ae4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000eu, 0, 0);
    }
L_000f9ae8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9aec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9af0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9af4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000f9af8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9afc:;
    {
        cpu->r[14] = 0x000f9b00u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9b00:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_000f9b04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000f9b08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000f99ec;
        }
    }
L_000f9b0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f9b10:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f9b14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001bcu, 0, 0);
    }
L_000f9b18:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9b1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9b20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9b24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9b28:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9b2c:;
    {
        cpu->r[14] = 0x000f9b30u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9b30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001d0u, 0, 0);
    }
L_000f9b34:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9b38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9b3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9b40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9b44:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9b48:;
    {
        cpu->r[14] = 0x000f9b4cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9b4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001e4u, 0, 0);
    }
L_000f9b50:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9b54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9b58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9b60:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9b64:;
    {
        cpu->r[14] = 0x000f9b68u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9b68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000001f8u, 0, 0);
    }
L_000f9b6c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9b70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9b74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9b78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9b7c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9b80:;
    {
        cpu->r[14] = 0x000f9b84u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9b84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000020cu, 0, 0);
    }
L_000f9b88:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9b8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9b90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9b94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9b98:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9b9c:;
    {
        cpu->r[14] = 0x000f9ba0u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9ba0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000220u, 0, 0);
    }
L_000f9ba4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ba8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9bac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9bb4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9bb8:;
    {
        cpu->r[14] = 0x000f9bbcu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9bbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000234u, 0, 0);
    }
L_000f9bc0:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9bc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9bc8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9bcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9bd0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9bd4:;
    {
        cpu->r[14] = 0x000f9bd8u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9bd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000248u, 0, 0);
    }
L_000f9bdc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9be0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9be4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9be8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9bec:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9bf0:;
    {
        cpu->r[14] = 0x000f9bf4u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9bf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000025cu, 0, 0);
    }
L_000f9bf8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9bfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9c00:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9c04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9c08:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9c0c:;
    {
        cpu->r[14] = 0x000f9c10u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9c10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000270u, 0, 0);
    }
L_000f9c14:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9c18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9c1c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9c20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9c24:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9c28:;
    {
        cpu->r[14] = 0x000f9c2cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9c2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000600u, 0, 0);
    }
L_000f9c30:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9c34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f9c38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f9c3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9c40:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9c44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9c48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9c4c:;
    {
        cpu->r[14] = 0x000f9c50u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9c50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000014u, 1, 1);
    }
L_000f9c54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9b14;
        }
    }
L_000f9c58:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f9c5c:;
    {
        cpu->r[6] = 0x00001a14u;
    }
L_000f9c60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000410u, 0, 0);
    }
L_000f9c64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9c68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9c6c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9c70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9c74:;
    {
        cpu->r[7] = 0x00001a14u;
    }
L_000f9c78:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9c7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9c80:;
    {
        cpu->r[14] = 0x000f9c84u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000440u, 0, 0);
    }
L_000f9c88:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9c8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000f9c90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9c94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9c98:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9c9c:;
    {
        cpu->r[14] = 0x000f9ca0u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9ca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000460u, 0, 0);
    }
L_000f9ca4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ca8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f9cac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9cb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9cb4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9cb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9cbc:;
    {
        cpu->r[14] = 0x000f9cc0u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9cc0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000480u, 0, 0);
    }
L_000f9cc4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000f9ccc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9cd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9cd4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9cd8:;
    {
        cpu->r[14] = 0x000f9cdcu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9cdc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9ce0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004b0u, 0, 0);
    }
L_000f9ce4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9ce8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9cec:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9cf0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9cf4:;
    {
        cpu->r[14] = 0x000f9cf8u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9cf8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004d0u, 0, 0);
    }
L_000f9cfc:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000f9d04:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9d0c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9d10:;
    {
        cpu->r[14] = 0x000f9d14u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9d14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000004f0u, 0, 0);
    }
L_000f9d18:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f9d20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9d28:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9d2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9d30:;
    {
        cpu->r[14] = 0x000f9d34u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9d34:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000520u, 0, 0);
    }
L_000f9d3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9d44:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9d48:;
    {
        cpu->r[14] = 0x000f9d4cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9d4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000540u, 0, 0);
    }
L_000f9d50:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000f9d58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9d60:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9d64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9d68:;
    {
        cpu->r[14] = 0x000f9d6cu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9d6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000560u, 0, 0);
    }
L_000f9d70:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f9d78:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9d80:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9d84:;
    {
        cpu->r[14] = 0x000f9d88u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9d88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000610u, 0, 0);
    }
L_000f9d8c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9d90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000f9d94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000f9d98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9d9c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[4]; cpu->r[0] = v;
    }
L_000f9da0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000f9da4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000f9da8:;
    {
        cpu->r[14] = 0x000f9dacu; imp_fwrite(cpu); /* fwrite */
    }
L_000f9dac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000f9db0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9c60;
        }
    }
L_000f9db4:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000f9db8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9dbc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9dc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9dc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_000f9dcc:;
    {
        cpu->r[14] = 0x000f9dd0u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9dd0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9dd4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9dd8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9ddc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9de0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000f9de4:;
    {
        cpu->r[14] = 0x000f9de8u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9de8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9dec:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9df0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9df4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9df8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_000f9dfc:;
    {
        cpu->r[14] = 0x000f9e00u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e04:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e08:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000f9e14:;
    {
        cpu->r[14] = 0x000f9e18u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e1c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_000f9e2c:;
    {
        cpu->r[14] = 0x000f9e30u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e34:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e38:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000044u, 0, 0);
    }
L_000f9e44:;
    {
        cpu->r[14] = 0x000f9e48u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e4c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_000f9e5c:;
    {
        cpu->r[14] = 0x000f9e60u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e64:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000004cu, 0, 0);
    }
L_000f9e74:;
    {
        cpu->r[14] = 0x000f9e78u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e7c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e80:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9e84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000050u, 0, 0);
    }
L_000f9e8c:;
    {
        cpu->r[14] = 0x000f9e90u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9e90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9e94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000f9e98:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000f9e9c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000f9ea0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000f9ea4:;
    {
        cpu->r[14] = 0x000f9ea8u; imp_fwrite(cpu); /* fwrite */
    }
L_000f9ea8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000f9eac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000f9eb0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000f9eb4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000f9eb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000f9ebc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9ec0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f9ec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9ed0;
        }
    }
L_000f9ec8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_000f9ecc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f9ed0u)) return;
    }
L_000f9ed0:;
    {
        cpu->r[14] = 0x000f9ed4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f9ed4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f9ed8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN12RaceRecorder16CreateReplayFileEPc @ 000f9edc (arm) */
void fn_000f9edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f9edc:;
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
L_000f9ee0:;
    {
        cpu->r[4] = rd32(0x000f9ee8u + + 0xa8u);
    }
L_000f9ee4:;
    {
        cpu->r[5] = rd32(0x000f9eecu + + 0xa8u);
    }
L_000f9ee8:;
    {
        cpu->r[8] = 0x00001a14u;
    }
L_000f9eec:;
    {
        cpu->r[4] = add_flags(cpu, 0x000f9ef4u, cpu->r[4], 0, 0);
    }
L_000f9ef0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_000f9ef4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000f9ef8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000f9efc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9f00:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f9f04:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000f9f08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000f9f0c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000f9f10:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[2]);
    }
L_000f9f14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000f9f38;
        }
    }
L_000f9f18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000f9f1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_000f9f20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000f9f24:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000f9f28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000f9f8c;
        }
    }
L_000f9f2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000f9f30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_000f9f34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f9f38u)) return;
    }
L_000f9f38:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000f9f3c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000f9f40:;
    {
        cpu->r[1] = rd32(0x000f9f48u + + 0x50u);
    }
L_000f9f44:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_000f9f48:;
    {
        cpu->r[2] = rd32(0x000f9f50u + + 0x4cu);
    }
L_000f9f4c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f9f50:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f9f58u, cpu->r[1], 0, 0);
    }
L_000f9f54:;
    {
        cpu->r[2] = add_flags(cpu, 0x000f9f5cu, cpu->r[2], 0, 0);
    }
L_000f9f58:;
    {
        cpu->r[14] = 0x000f9f5cu; imp_sprintf(cpu); /* sprintf */
    }
L_000f9f5c:;
    {
        cpu->r[1] = rd32(0x000f9f64u + + 0x3cu);
    }
L_000f9f60:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000f9f64:;
    {
        cpu->r[1] = add_flags(cpu, 0x000f9f6cu, cpu->r[1], 0, 0);
    }
L_000f9f68:;
    {
        cpu->r[14] = 0x000f9f6cu; imp_fopen(cpu); /* fopen */
    }
L_000f9f6c:;
    {
        wr32(cpu->r[6] + cpu->r[8], cpu->r[0]);
    }
L_000f9f70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f9f74:;
    {
        cpu->r[14] = 0x000f9f78u; fn_000f97e4(cpu);
    }
L_000f9f78:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000f9f7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000f9f80:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[7]);
    }
L_000f9f84:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[7]);
    }
L_000f9f88:;
    {
        goto L_000f9f18;
    }
L_000f9f8c:;
    {
        cpu->r[14] = 0x000f9f90u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000f9f90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 3, 10u, &shc); cpu->r[0] = v;
        set_nz(cpu, v);
        }
    }
L_000f9f94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000f9f98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[4], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000f9f9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[8], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
L_000f9fa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & shifter(cpu->r[12], 3, (cpu->r[11] & 0xffu), &shc); cpu->r[4] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN12RaceRecorder13EndRecordRaceEv @ 000f9fa4 (arm) */
void fn_000f9fa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000f9fa4:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000f9fa8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000f9fac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000f9fb0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000f9fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000f9fb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000f9fbcu)) return;
        }
    }
L_000f9fbc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_000f9fc0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00001900u, 0, 0);
    }
L_000f9fc4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_000f9fc8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000f9fcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000f9fd0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000f9fd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000f9fd8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_000f9fdc:;
    {
        cpu->r[14] = 0x000f9fe0u; fn_000f8fe4(cpu);
    }
L_000f9fe0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f9fe4:;
    {
        cpu->r[14] = 0x000f9fe8u; fn_000f97e4(cpu);
    }
L_000f9fe8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000f9fec:;
    {
        cpu->r[14] = 0x000f9ff0u; fn_000f85a4(cpu);
    }
L_000f9ff0:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_000f9ff4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000f9ff8:;
    {
        cpu->r[2] = 0x000000f4u;
    }
L_000f9ffc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fa000:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_000fa004:;
    {
        cpu->r[14] = 0x000fa008u; imp_memset(cpu); /* memset */
    }
L_000fa008:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000fa00c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fa010:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa014:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fa018:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000fa01c:;
    {
        cpu->r[14] = 0x000fa020u; imp_memset(cpu); /* memset */
    }
L_000fa020:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_000fa024:;
    {
        wr32(cpu->r[4] + - 0x104u, cpu->r[7]);
    }
L_000fa028:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000fa02c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa00c;
        }
    }
L_000fa030:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000024u, 0, 0);
    }
L_000fa034:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000fa038:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_000fa03c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000fa040:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000014u, 1, 1);
    }
L_000fa044:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fa048:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa04c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa050:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_000fa054:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa058:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa05c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa060:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa064:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa068:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa06c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa070:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa074:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa078:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa07c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa080:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fa084:;
    {
        wr32(cpu->r[8] + - 0x108u, cpu->r[2]);
    }
L_000fa088:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000fa08c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa038;
        }
    }
L_000fa090:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00001940u, 0, 0);
    }
L_000fa094:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000fa098:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_000fa09c:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_000fa0a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000fa0a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000025u, 1, 1);
    }
L_000fa0a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000fa0ac:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa0b4:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[2]);
    }
L_000fa0b8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0bc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0c0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0c4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0c8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0cc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0d0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0d4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0d8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0dc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0e0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa0e4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fa0e8:;
    {
        wr32(cpu->r[1] + - 0x108u, cpu->r[2]);
    }
L_000fa0ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000fa0f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa09c;
        }
    }
L_000fa0f4:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[2]);
    }
L_000fa0f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa0fcu)) return;
    }
}

/* _ZN12RaceRecorder23GetPoliceReplayPositionEi @ 000fa0fc (arm) */
void fn_000fa0fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fa0fc:;
    {
        cpu->r[3] = rd32(0x000fa104u + + 0x220u);
    }
L_000fa100:;
    {
        cpu->r[12] = 0x00008c78u;
    }
L_000fa104:;
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
L_000fa108:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000fa10c:;
    {
        cpu->r[1] = rd32(0x000fa114u + + 0x214u);
    }
L_000fa110:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fa118u, cpu->r[3], 0, 0);
    }
L_000fa114:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_000fa118:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000fa11c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fa120:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fa124:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fa128:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000fa12c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000fa130:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000fa134:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_000fa138:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000007u, 1, 1);
    }
L_000fa13c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fa208;
        }
    }
L_000fa140:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00006300u, 0, 0);
    }
L_000fa144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000026u, 0, 0);
    }
L_000fa148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000fa14c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_000fa150:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000fa154:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000fa158:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fa15c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fa160:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fa1c0;
        }
    }
L_000fa164:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000460u, 0, 0);
    }
L_000fa168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_000fa16c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000fa170:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_000fa174:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000440u, 0, 0);
    }
L_000fa178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000284u, 0, 0);
    }
L_000fa17c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000fa180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fa184:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000fa188:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000fa18c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fa190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fa194:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa198:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000002d0u, 0, 0);
    }
L_000fa19c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_000fa1a0:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[12]);
    }
L_000fa1a4:;
    {
        wr32(cpu->r[7] + + 0xaacu, cpu->r[0]);
    }
L_000fa1a8:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
    }
L_000fa1ac:;
    {
        wr32(cpu->r[6], cpu->r[12]);
    }
L_000fa1b0:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_000fa1b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fa1b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fa1bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa1c0u)) return;
    }
L_000fa1c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000650u, 0, 0);
    }
L_000fa1c4:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000fa1c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_000fa1cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000fa1d0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000fa1d4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_000fa1d8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_000fa1dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000fa1e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa234;
        }
    }
L_000fa1e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000284u, 0, 0);
    }
L_000fa1e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000002d0u, 0, 0);
    }
L_000fa1ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fa1f0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000fa1f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa1f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fa1fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xaacu);
    }
L_000fa200:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000fa204:;
    {
        goto L_000fa1b4;
    }
L_000fa208:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00006000u, 0, 0);
    }
L_000fa20c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000075u, 0, 0);
    }
L_000fa210:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa214:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000fa218:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fa21c:;
    {
        cpu->r[14] = 0x000fa224u;
    }
L_000fa220:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa224u)) return;
    }
L_000fa224:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000fa228:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000fa22c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000fa230:;
    {
        goto L_000fa150;
    }
L_000fa234:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa238:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fa23c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa2a8;
        }
    }
L_000fa240:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000284u, 0, 0);
    }
L_000fa244:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000fa248:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fa24c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000040u; set_nz(cpu, v); }
    }
L_000fa250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa29c;
        }
    }
L_000fa254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000002a8u, 0, 0);
    }
L_000fa258:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000fa25c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fa260:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000fa264:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000fa268:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000fa26c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x4u);
    }
L_000fa270:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_000fa274:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_000fa278:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa27c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_000fa280:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000002d0u, 0, 0);
    }
L_000fa284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_000fa288:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
        }
    }
L_000fa28c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_000fa290:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
        }
    }
L_000fa294:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000fa298:;
    {
        goto L_000fa200;
    }
L_000fa29c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000fa2a0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xaacu);
    }
L_000fa2a4:;
    {
        goto L_000fa27c;
    }
L_000fa2a8:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_000fa2ac:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00001840u, 0, 0);
    }
L_000fa2b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000014u, 0, 0);
    }
L_000fa2b4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000fa2b8:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[10]);
    }
L_000fa2bc:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000fa2c0:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000fa2c4:;
    {
        uint32_t v = cpu->r[14] & ~ 0x00100000u; cpu->r[14] = v;
    }
L_000fa2c8:;
    {
        wr32(cpu->r[12] + cpu->r[10], cpu->r[14]);
    }
L_000fa2cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fa2d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fa2d4:;
    {
        cpu->r[14] = 0x000fa2d8u; fn_00160820(cpu);
    }
L_000fa2d8:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000fa2dc:;
    {
        cpu->r[3] = 0x00000320u;
    }
L_000fa2e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000034u, 0, 0);
    }
L_000fa2e4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000fa2e8:;
    {
        cpu->r[12] = 0x000000a0u;
    }
L_000fa2ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fa2f0:;
    {
        cpu->r[14] = 0x000fa2f4u; fn_00160820(cpu);
    }
L_000fa2f4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_000fa2f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa2fc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_000fa300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa240;
        }
    }
L_000fa304:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000284u, 0, 0);
    }
L_000fa308:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000fa30c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fa310:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa314:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000fa318:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_000fa31c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa320:;
    {
        goto L_000fa24c;
    }
}

/* _ZN12RaceRecorder17GetReplayPositionEi @ 000fa32c (arm) */
void fn_000fa32c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fa32c:;
    {
        cpu->r[12] = rd32(0x000fa334u + + 0x14cu);
    }
L_000fa330:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fa334:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fa338:;
    {
        cpu->r[6] = rd32(0x000fa340u + + 0x144u);
    }
L_000fa33c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fa344u, cpu->r[12], 0, 0);
    }
L_000fa340:;
    {
        cpu->r[5] = 0x00008c78u;
    }
L_000fa344:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000fa348:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fa34c:;
    {
        cpu->r[6] = rd32(cpu->r[12] + cpu->r[6]);
    }
L_000fa350:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_000fa354:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_000fa358:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000fa35c:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000fa360:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000fa364:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000fa368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fa404;
        }
    }
L_000fa36c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000fa370:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000fa374:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000fa378:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fa37c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fa3c0;
        }
    }
L_000fa380:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000a2u, 0, 0);
    }
L_000fa384:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000092u, 0, 0);
    }
L_000fa388:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000009au, 0, 0);
    }
L_000fa38c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000fa390:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_000fa394:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
    }
L_000fa398:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fa39c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000022u, 0, 0);
    }
L_000fa3a0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa3a4:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_000fa3a8:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_000fa3ac:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000fa3b0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000fa3b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa3b8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_000fa3bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa3c0u)) return;
    }
L_000fa3c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000640u, 0, 0);
    }
L_000fa3c4:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000fa3c8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fa3cc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_000fa3d0:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000fa3d4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000fa3d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa410;
        }
    }
L_000fa3dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000fa3e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000022u, 0, 0);
    }
L_000fa3e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
    }
L_000fa3e8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fa3ec:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fa3f0:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fa3f4:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000fa3f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa3fc:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_000fa400:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa404u)) return;
    }
L_000fa404:;
    {
        cpu->r[14] = 0x000fa408u; fn_000fa0fc(cpu);
    }
L_000fa408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa40c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa410u)) return;
    }
L_000fa410:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000fa414:;
    {
        { uint32_t v = cpu->r[5] & 0x00000080u; set_nz(cpu, v); }
    }
L_000fa418:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
        }
    }
L_000fa41c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
        }
    }
L_000fa420:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
        }
    }
L_000fa424:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_000fa428:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[12] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_000fa42c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
        }
    }
L_000fa430:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
        }
    }
L_000fa434:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_000fa438:;
    {
        { uint32_t v = cpu->r[5] & 0x00000040u; set_nz(cpu, v); }
    }
L_000fa43c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
        }
    }
L_000fa440:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000001au, 0, 0);
        }
    }
L_000fa444:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xau);
        }
    }
L_000fa448:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000022u, 0, 0);
    }
L_000fa44c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_000fa450:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
        }
    }
L_000fa454:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_000fa458:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
        }
    }
L_000fa45c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000fa460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_000fa464:;
    {
        { uint32_t v = cpu->r[5] & 0x00000020u; set_nz(cpu, v); }
    }
L_000fa468:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xcu);
        }
    }
L_000fa46c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_000fa470:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_000fa474:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
        }
    }
L_000fa478:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
        }
    }
L_000fa47c:;
    {
        goto L_000fa3f4;
    }
}

/* _ZN12RaceRecorder9InitFrameEv @ 000fa488 (arm) */
void fn_000fa488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fa488:;
    {
        cpu->r[3] = rd32(0x000fa490u + + 0x258u);
    }
L_000fa48c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000fa490:;
    {
        cpu->r[1] = rd32(0x000fa498u + + 0x254u);
    }
L_000fa494:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000fa498:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fa4a0u, cpu->r[3], 0, 0);
    }
L_000fa49c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fa4a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fa4a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fa4a8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fa4ac:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000fa4b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000fa4b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000fa4b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fa4bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa4c0u)) return;
        }
    }
L_000fa4c0:;
    {
        cpu->r[14] = 0x000fa4c4u; fn_00096b88(cpu);
    }
L_000fa4c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa4c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa4ccu)) return;
        }
    }
L_000fa4cc:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000fa4d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fa4d4:;
    {
        cpu->r[3] = 0x00001a08u;
    }
L_000fa4d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fa4dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fa4e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa4e4u)) return;
        }
    }
L_000fa4e4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fa4e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000fa4ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fa4f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000fa4f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fa4f8:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000fa4fc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fa500:;
    {
        cpu->r[14] = 0x000fa504u; imp_memset(cpu); /* memset */
    }
L_000fa504:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_000fa508:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa4e8;
        }
    }
L_000fa50c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fa510:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000fa514:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000fa518:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000fa51c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000fa520:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000050u, 1, 1);
    }
L_000fa524:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x24u);
    }
L_000fa528:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000fa52c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa530:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa534:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000fa538:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa53c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa540:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa544:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa548:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa54c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa550:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa554:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa558:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa55c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa560:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fa564:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fa568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa514;
        }
    }
L_000fa56c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000fa570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000fa574:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_000fa57c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000094u, 1, 1);
    }
L_000fa580:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x34u);
    }
L_000fa584:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fa588:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa58c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa590:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[5]);
    }
L_000fa594:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa598:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa59c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5a0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5a4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5a8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5ac:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5b0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5b4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5b8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5bc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fa5c0:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_000fa5c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa570;
        }
    }
L_000fa5c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa5cc:;
    {
        cpu->r[14] = 0x000fa5d0u; fn_000f86d0(cpu);
    }
L_000fa5d0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fa5d4:;
    {
        goto L_000fa5e4;
    }
L_000fa5d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa5dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_000fa5e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa608;
        }
    }
L_000fa5e4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000fa5e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fa5ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa5d8;
        }
    }
L_000fa5f0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fa5f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa5f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa5fc:;
    {
        cpu->r[14] = 0x000fa600u; fn_000f88c8(cpu);
    }
L_000fa600:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 1);
    }
L_000fa604:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa5e4;
        }
    }
L_000fa608:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa60c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fa610:;
    {
        cpu->r[14] = 0x000fa614u; fn_000f86d0(cpu);
    }
L_000fa614:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fa618:;
    {
        goto L_000fa628;
    }
L_000fa61c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa620:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000014u, 1, 1);
    }
L_000fa624:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa64c;
        }
    }
L_000fa628:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000fa62c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fa630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa61c;
        }
    }
L_000fa634:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fa638:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa63c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa640:;
    {
        cpu->r[14] = 0x000fa644u; fn_000f8dc0(cpu);
    }
L_000fa644:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000014u, 1, 1);
    }
L_000fa648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa628;
        }
    }
L_000fa64c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa650:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fa654:;
    {
        cpu->r[14] = 0x000fa658u; fn_000f86d0(cpu);
    }
L_000fa658:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fa65c:;
    {
        goto L_000fa66c;
    }
L_000fa660:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa664:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000fa668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa690;
        }
    }
L_000fa66c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000fa670:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fa674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa660;
        }
    }
L_000fa678:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fa67c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa680:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa684:;
    {
        cpu->r[14] = 0x000fa688u; fn_000f8b9c(cpu);
    }
L_000fa688:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000fa68c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa66c;
        }
    }
L_000fa690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa694:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fa698:;
    {
        cpu->r[14] = 0x000fa69cu; fn_000f86d0(cpu);
    }
L_000fa69c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fa6a0:;
    {
        goto L_000fa6b0;
    }
L_000fa6a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa6a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001eu, 1, 1);
    }
L_000fa6ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa6d4;
        }
    }
L_000fa6b0:;
    {
        uint32_t v = shifter(cpu->r[6], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000fa6b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000fa6b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa6a4;
        }
    }
L_000fa6bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000007u, 0, 0);
    }
L_000fa6c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa6c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fa6c8:;
    {
        cpu->r[14] = 0x000fa6ccu; fn_000f8b9c(cpu);
    }
L_000fa6cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000001eu, 1, 1);
    }
L_000fa6d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa6b0;
        }
    }
L_000fa6d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa6d8:;
    {
        cpu->r[14] = 0x000fa6dcu; fn_000f87cc(cpu);
    }
L_000fa6dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa6e0:;
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
L_000fa6e4:;
    {
        return fn_000f8b20(cpu);
    }
}

/* _ZN12RaceRecorder11StartReplayEv @ 000fa6f0 (arm) */
void fn_000fa6f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fa6f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00001a00u, 0, 0);
    }
L_000fa6f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fa6f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_000fa6fc:;
    {
        cpu->r[5] = rd32(0x000fa704u + + 0xd4u);
    }
L_000fa700:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fa704:;
    {
        cpu->r[14] = 0x000fa708u; fn_000f9720(cpu);
    }
L_000fa708:;
    {
        cpu->r[2] = rd32(0x000fa710u + + 0xccu);
    }
L_000fa70c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fa714u, cpu->r[5], 0, 0);
    }
L_000fa710:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa714:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_000fa718:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000fa71c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_000fa720:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000fa724:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_000fa728:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fa72c:;
    {
        cpu->r[14] = 0x000fa730u; fn_00096b88(cpu);
    }
L_000fa730:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_000fa734:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000fa738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa73c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001a0cu;
        }
    }
L_000fa740:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001a0cu;
        }
    }
L_000fa744:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_000fa748:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_000fa74c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000fa750:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000fa754:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa758:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x000017c0u, 0, 0);
    }
L_000fa75c:;
    {
        wr32(cpu->r[1] + + 0x1a8u, cpu->r[3]);
    }
L_000fa760:;
    {
        wr32(cpu->r[1] + + 0x1c8u, cpu->r[3]);
    }
L_000fa764:;
    {
        wr32(cpu->r[1] + + 0x1e8u, cpu->r[3]);
    }
L_000fa768:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000fa76c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000fa770:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[3]);
    }
L_000fa774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa758;
        }
    }
L_000fa778:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa77c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fa780:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa784:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001800u, 0, 0);
    }
L_000fa788:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 1);
    }
L_000fa78c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[1]);
    }
L_000fa790:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa77c;
        }
    }
L_000fa794:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fa798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000fa79c:;
    {
        wr32(cpu->r[2] + + 0x388u, cpu->r[3]);
    }
L_000fa7a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000014u, 1, 1);
    }
L_000fa7a4:;
    {
        wr32(cpu->r[2] + + 0x3d8u, cpu->r[3]);
    }
L_000fa7a8:;
    {
        wr32(cpu->r[2] + + 0x428u, cpu->r[3]);
    }
L_000fa7ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa7b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa798;
        }
    }
L_000fa7b4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa7b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fa7bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fa7c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001840u, 0, 0);
    }
L_000fa7c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000094u, 1, 1);
    }
L_000fa7c8:;
    {
        wr32(cpu->r[2] + + 0x2cu, cpu->r[1]);
    }
L_000fa7cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa7b8;
        }
    }
L_000fa7d0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[1]);
    }
L_000fa7d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fa7d8u)) return;
    }
}

/* _ZN12RaceRecorder14IncrementFrameEv @ 000fa7e0 (arm) */
void fn_000fa7e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fa7e0:;
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
L_000fa7e4:;
    {
        cpu->r[6] = rd32(0x000fa7ecu + + 0x4ccu);
    }
L_000fa7e8:;
    {
        cpu->r[7] = rd32(0x000fa7f0u + + 0x4ccu);
    }
L_000fa7ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fa7f0:;
    {
        cpu->r[6] = add_flags(cpu, 0x000fa7f8u, cpu->r[6], 0, 0);
    }
L_000fa7f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000fa7f8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fa7fc:;
    {
        cpu->r[14] = 0x000fa800u; fn_00096b6c(cpu);
    }
L_000fa800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fab80;
        }
    }
L_000fa808:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001900u, 0, 0);
    }
L_000fa80c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa810:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000fa814:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fa818:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa81c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000fa820:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fa824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa828:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fa82c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa830:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_000fa834:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa838:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000fa83c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa820;
        }
    }
L_000fa840:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa844:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000fa848:;
    {
        cpu->r[14] = 0x000fa84cu; fn_000f7c64(cpu);
    }
L_000fa84c:;
    {
        cpu->r[9] = 0x00001a0cu;
    }
L_000fa850:;
    {
        goto L_000fa864;
    }
L_000fa854:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000fa858:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000fa85c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 1);
    }
L_000fa860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa8a4;
        }
    }
L_000fa864:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000fa868:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa86c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fa870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa854;
        }
    }
L_000fa874:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[9]);
    }
L_000fa878:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000fa87c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa880:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000fa884:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_000fa888:;
    {
        cpu->r[14] = 0x000fa88cu; fn_000f7d84(cpu);
    }
L_000fa88c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + - 0x104u);
    }
L_000fa890:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 1);
    }
L_000fa894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa898:;
    {
        wr32(cpu->r[8] + - 0x104u, cpu->r[3]);
    }
L_000fa89c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000fa8a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa864;
        }
    }
L_000fa8a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_000fa8a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa8ac:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fa8b0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa8b4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000fa8b8:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fa8bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa8c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fa8c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa8c8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_000fa8cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa8d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000014u, 1, 1);
    }
L_000fa8d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa8b8;
        }
    }
L_000fa8d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa8dc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000fa8e0:;
    {
        cpu->r[14] = 0x000fa8e4u; fn_000f7c64(cpu);
    }
L_000fa8e4:;
    {
        cpu->r[10] = 0x00001a0cu;
    }
L_000fa8e8:;
    {
        goto L_000fa8fc;
    }
L_000fa8ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000fa8f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fa8f4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000014u, 1, 1);
    }
L_000fa8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa93c;
        }
    }
L_000fa8fc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000fa900:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa904:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fa908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa8ec;
        }
    }
L_000fa90c:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[10]);
    }
L_000fa910:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000fa914:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa918:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000fa91c:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_000fa920:;
    {
        cpu->r[14] = 0x000fa924u; fn_000f7fc4(cpu);
    }
L_000fa924:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x108u);
    }
L_000fa928:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000014u, 1, 1);
    }
L_000fa92c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa930:;
    {
        wr32(cpu->r[5] + - 0x108u, cpu->r[3]);
    }
L_000fa934:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fa938:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa8fc;
        }
    }
L_000fa93c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001940u, 0, 0);
    }
L_000fa940:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa944:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000034u, 0, 0);
    }
L_000fa948:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa94c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fa950:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000fa954:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fa958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa95c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fa960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fa964:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_000fa968:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa96c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000fa970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa954;
        }
    }
L_000fa974:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa978:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000fa97c:;
    {
        cpu->r[14] = 0x000fa980u; fn_000f7c64(cpu);
    }
L_000fa980:;
    {
        cpu->r[10] = 0x00001a0cu;
    }
L_000fa984:;
    {
        goto L_000fa998;
    }
L_000fa988:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000fa98c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fa990:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000007u, 1, 1);
    }
L_000fa994:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa9d8;
        }
    }
L_000fa998:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000fa99c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000fa9a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fa9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fa988;
        }
    }
L_000fa9a8:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[10]);
    }
L_000fa9ac:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000fa9b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fa9b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000fa9b8:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_000fa9bc:;
    {
        cpu->r[14] = 0x000fa9c0u; fn_000f81e8(cpu);
    }
L_000fa9c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x108u);
    }
L_000fa9c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000007u, 1, 1);
    }
L_000fa9c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fa9cc:;
    {
        wr32(cpu->r[5] + - 0x108u, cpu->r[3]);
    }
L_000fa9d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fa9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa998;
        }
    }
L_000fa9d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001980u, 0, 0);
    }
L_000fa9dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fa9e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000fa9e4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fa9e8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fa9ec:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000fa9f0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fa9f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fa9f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000fa9fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000faa00:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_000faa04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000faa08:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_000faa0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fa9f0;
        }
    }
L_000faa10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000faa14:;
    {
        cpu->r[8] = 0x00000007u;
    }
L_000faa18:;
    {
        cpu->r[14] = 0x000faa1cu; fn_000f7c64(cpu);
    }
L_000faa1c:;
    {
        cpu->r[10] = 0x00001a0cu;
    }
L_000faa20:;
    {
        goto L_000faa34;
    }
L_000faa24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000faa28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000faa2c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000025u, 1, 1);
    }
L_000faa30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000faa74;
        }
    }
L_000faa34:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000faa38:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000faa3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000faa40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000faa24;
        }
    }
L_000faa44:;
    {
        cpu->r[2] = rd16(cpu->r[4] + cpu->r[10]);
    }
L_000faa48:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000faa4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000faa50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000faa54:;
    {
        wr16(cpu->r[3], cpu->r[2]);
    }
L_000faa58:;
    {
        cpu->r[14] = 0x000faa5cu; fn_000f81e8(cpu);
    }
L_000faa5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x108u);
    }
L_000faa60:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000025u, 1, 1);
    }
L_000faa64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000faa68:;
    {
        wr32(cpu->r[5] + - 0x108u, cpu->r[3]);
    }
L_000faa6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000faa70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000faa34;
        }
    }
L_000faa74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000faa78:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000faa7c:;
    {
        cpu->r[14] = 0x000faa80u; fn_000f840c(cpu);
    }
L_000faa80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000faa84:;
    {
        cpu->r[14] = 0x000faa88u; fn_000f8514(cpu);
    }
L_000faa88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000faa8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000faa90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000faa94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000faa98:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000faa9c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000faaa0:;
    {
        cpu->r[14] = 0x000faaa4u; imp_memset(cpu); /* memset */
    }
L_000faaa4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_000faaa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000faa88;
        }
    }
L_000faaac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000faab0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000faab4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000faab8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000faabc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000faac0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000050u, 1, 1);
    }
L_000faac4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x24u);
    }
L_000faac8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000faacc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faad0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000faad4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000faad8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faadc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faae0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faae4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faae8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faaec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faaf0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faaf4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faaf8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faafc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab00:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab04:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fab08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000faab4;
        }
    }
L_000fab0c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000fab10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000fab14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000fab18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_000fab1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000094u, 1, 1);
    }
L_000fab20:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x34u);
    }
L_000fab24:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000fab28:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fab30:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000fab34:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab38:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab3c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab40:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab44:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab48:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab4c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab50:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab54:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab58:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab5c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fab60:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fab64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fab10;
        }
    }
L_000fab68:;
    {
        cpu->r[3] = 0x000017f8u;
    }
L_000fab6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_000fab70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fab74:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00032000u, cpu->r[3], 1, 0);
    }
L_000fab78:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fab7c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000facac;
        }
    }
L_000fab80:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000fab84:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fab88:;
    {
        cpu->r[14] = 0x000fab8cu; fn_00096b88(cpu);
    }
L_000fab8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fab90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fac4c;
        }
    }
L_000fab94:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000fab98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001900u, 0, 0);
    }
L_000fab9c:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000faba0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000faba4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000faba8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000020u, 0, 0);
    }
L_000fabac:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000fabb0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_000fabb4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000fabb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[2] + - 0x104u);
        }
    }
L_000fabbc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
        }
    }
L_000fabc0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000fabc4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + - 0x104u, cpu->r[1]);
        }
    }
L_000fabc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fabcc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000fabd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fabac;
        }
    }
L_000fabd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00001940u, 0, 0);
    }
L_000fabd8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_000fabdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000fabe0:;
    {
        cpu->r[1] = 0x00001a0cu;
    }
L_000fabe4:;
    {
        goto L_000fabec;
    }
L_000fabe8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000fabec:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000fabf0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000fabf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fabf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[5] + - 0x108u);
        }
    }
L_000fabfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000fac00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000fac04:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + - 0x108u, cpu->r[2]);
        }
    }
L_000fac08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fac0c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000fac10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fabe8;
        }
    }
L_000fac14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00001a00u, 0, 0);
    }
L_000fac18:;
    {
        cpu->r[0] = 0x00001a0cu;
    }
L_000fac1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000fac20:;
    {
        goto L_000fac28;
    }
L_000fac24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000fac28:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000fac2c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_000fac30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000fac34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + - 0x108u);
        }
    }
L_000fac38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_000fac3c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + - 0x108u, cpu->r[3]);
        }
    }
L_000fac40:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fac44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_000fac48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fac24;
        }
    }
L_000fac4c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000fac50:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000fac54:;
    {
        cpu->r[14] = 0x000fac58u; fn_00096b6c(cpu);
    }
L_000fac58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fac5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fac7c;
        }
    }
L_000fac60:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000fac64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_000fac68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fac6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000fac70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000fac74:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000fac78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fac7cu)) return;
    }
L_000fac7c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000fac80:;
    {
        cpu->r[14] = 0x000fac84u; fn_00096b88(cpu);
    }
L_000fac84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fac88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fac8cu)) return;
        }
    }
L_000fac8c:;
    {
        cpu->r[2] = 0x00001a08u;
    }
L_000fac90:;
    {
        cpu->r[3] = 0x00001a0cu;
    }
L_000fac94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000fac98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fac9c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000faca0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_000faca4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000faca8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000facacu)) return;
    }
L_000facac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000facb0:;
    {
        cpu->r[14] = 0x000facb4u; fn_000f8fe4(cpu);
    }
L_000facb4:;
    {
        goto L_000fab80;
    }
}

/* _ZN12RaceRecorder14RecordSettingsEv @ 000facc0 (arm) */
void fn_000facc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000facc0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x3cu);
    }
L_000facc4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000facc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000faccc:;
    {
        cpu->r[5] = rd32(0x000facd4u + + 0xccu);
    }
L_000facd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000facd4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000facd8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000face0u, cpu->r[5], 0, 0);
    }
L_000facdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fad34;
        }
    }
L_000face0:;
    {
        cpu->r[3] = rd32(0x000face8u + + 0xbcu);
    }
L_000face4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000face8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000facec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000facf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fad64;
        }
    }
L_000facf4:;
    {
        cpu->r[7] = rd32(0x000facfcu + + 0xacu);
    }
L_000facf8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000facfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_000fad00:;
    {
        cpu->r[14] = 0x000fad04u; fn_00094090(cpu);
    }
L_000fad04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000fad08:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000fad0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fad3c;
        }
    }
L_000fad10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_000fad14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fad18:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fad1c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000fad20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fad8c;
        }
    }
L_000fad24:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007eu, 1, 1);
    }
L_000fad28:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000fad2c:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[4] + + 0x3cu, cpu->r[3]);
        }
    }
L_000fad30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fad44;
        }
    }
L_000fad34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fad38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fad3cu)) return;
    }
L_000fad3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000fad40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_000fad44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000fad48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fad4c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_000fad50:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000fad54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000fad58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_000fad5c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000fad60:;
    {
        goto L_000fad34;
    }
L_000fad64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fad68:;
    {
        cpu->r[14] = 0x000fad6cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000fad6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fad70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000facf4;
        }
    }
L_000fad74:;
    {
        cpu->r[7] = rd32(0x000fad7cu + + 0x2cu);
    }
L_000fad78:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000fad7c:;
    {
        cpu->r[14] = 0x000fad80u; fn_00094228(cpu);
    }
L_000fad80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fad84:;
    {
        cpu->r[14] = 0x000fad88u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000fad88:;
    {
        goto L_000facf8;
    }
L_000fad8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fad90:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fad94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000fad98:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[1]);
    }
L_000fad9c:;
    {
        goto L_000fad34;
    }
}

/* _ZN12RaceRecorder15StartRecordRaceEv @ 000fadac (arm) */
void fn_000fadac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fadac:;
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
L_000fadb0:;
    {
        cpu->r[8] = rd32(0x000fadb8u + + 0x294u);
    }
L_000fadb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000fadb8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fadbc:;
    {
        cpu->r[14] = 0x000fadc0u; fn_000f9fa4(cpu);
    }
L_000fadc0:;
    {
        cpu->r[3] = rd32(0x000fadc8u + + 0x288u);
    }
L_000fadc4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000fadccu, cpu->r[8], 0, 0);
    }
L_000fadc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000fadcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fadd0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fadd4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000fadd8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000faddc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000fade0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000fade4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00001900u, 0, 0);
    }
L_000fade8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fadec:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_000fadf0:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_000fadf4:;
    {
        cpu->r[14] = 0x000fadf8u; imp_memset(cpu); /* memset */
    }
L_000fadf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000fadfc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fae00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fae04:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000fae08:;
    {
        cpu->r[14] = 0x000fae0cu; imp_memset(cpu); /* memset */
    }
L_000fae0c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fae10:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000fae14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_000fae18:;
    {
        cpu->r[14] = 0x000fae1cu; imp_memset(cpu); /* memset */
    }
L_000fae1c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fae20:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000fae24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fae28:;
    {
        cpu->r[14] = 0x000fae2cu; imp_memset(cpu); /* memset */
    }
L_000fae2c:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_000fae30:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fae34:;
    {
        cpu->r[2] = 0x000000f4u;
    }
L_000fae38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fae3c:;
    {
        cpu->r[14] = 0x000fae40u; imp_memset(cpu); /* memset */
    }
L_000fae40:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000fae44:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000fae48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fae4c:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000fae50:;
    {
        cpu->r[14] = 0x000fae54u; imp_memset(cpu); /* memset */
    }
L_000fae54:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000fae58:;
    {
        wr32(cpu->r[5] + - 0x104u, cpu->r[7]);
    }
L_000fae5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fae60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fae40;
        }
    }
L_000fae64:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000024u, 0, 0);
    }
L_000fae68:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000fae6c:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000fae70:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000fae74:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000014u, 1, 1);
    }
L_000fae78:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fae7c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fae84:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_000fae88:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae8c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae90:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae94:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae98:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fae9c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faea0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faea4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faea8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faeac:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faeb0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000faeb4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000faeb8:;
    {
        wr32(cpu->r[10] + - 0x108u, cpu->r[2]);
    }
L_000faebc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_000faec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fae6c;
        }
    }
L_000faec4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00001940u, 0, 0);
    }
L_000faec8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000faecc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_000faed0:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000faed4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000faed8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000025u, 1, 1);
    }
L_000faedc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000faee0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000faee8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[6]);
    }
L_000faeec:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faef0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faef4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faef8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faefc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf00:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf04:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf08:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf0c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf10:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf14:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[6]);
        cpu->r[3] = wb_tmp;
    }
L_000faf18:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_000faf1c:;
    {
        wr32(cpu->r[1] + - 0x108u, cpu->r[6]);
    }
L_000faf20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000faf24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000faed0;
        }
    }
L_000faf28:;
    {
        cpu->r[2] = rd32(0x000faf30u + + 0x124u);
    }
L_000faf2c:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000faf30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000faf34:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_000faf38:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[6]);
    }
L_000faf3c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000faf40:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000faf44:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_000faf48:;
    {
        cpu->r[8] = 0x0000163cu;
    }
L_000faf4c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_000faf50:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000faf54:;
    {
        cpu->r[7] = rd32(cpu->r[1]);
    }
L_000faf58:;
    {
        wr8(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_000faf5c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000faf60:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000faf64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000faf68:;
    {
        wr8(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000faf6c:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000faf70:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000faf74:;
    {
        cpu->r[3] = 0x00001640u;
    }
L_000faf78:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000faf7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fafd0;
        }
    }
L_000faf80:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000faf84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_000faf88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_000faf8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000019c0u, 0, 0);
    }
L_000faf90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001640u, 0, 0);
    }
L_000faf94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_000faf98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_000faf9c:;
    {
        cpu->r[12] = rd8(cpu->r[2] + + 0x35u);
    }
L_000fafa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000fafa4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000019c0u, 0, 0);
    }
L_000fafa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000fafac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003du, 0, 0);
    }
L_000fafb0:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000fafb4:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_000fafb8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fafbc:;
    {
        cpu->r[14] = 0x000fafc0u; imp_memcpy(cpu); /* memcpy */
    }
L_000fafc0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[8]);
    }
L_000fafc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000032u, 0, 0);
    }
L_000fafc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000fafcc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000faf84;
        }
    }
L_000fafd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fafd4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00001a00u, 0, 0);
    }
L_000fafd8:;
    {
        cpu->r[14] = 0x000fafdcu; fn_00096b88(cpu);
    }
L_000fafdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000fafe0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000fafe4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[12]);
    }
L_000fafe8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fafec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_000faff0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000faff4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001a0cu;
        }
    }
L_000faff8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001a0cu;
        }
    }
L_000faffc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_000fb000:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_000fb004:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000fb008:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000fb00c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000fb010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000fb014:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fb018:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fb01c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000fb020:;
    {
        cpu->r[14] = 0x000fb024u; fn_0009287c(cpu);
    }
L_000fb024:;
    {
        cpu->r[1] = rd32(0x000fb02cu + + 0x2cu);
    }
L_000fb028:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fb02c:;
    {
        cpu->r[2] = 0x0000000bu;
    }
L_000fb030:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fb038u, cpu->r[1], 0, 0);
    }
L_000fb034:;
    {
        cpu->r[14] = 0x000fb038u; imp_memcpy(cpu); /* memcpy */
    }
L_000fb038:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb03c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb040:;
    {
        cpu->r[14] = 0x000fb044u; fn_000f9edc(cpu);
    }
L_000fb044:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000fb048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb04cu)) return;
    }
}

/* _ZN12RaceRecorder19ActivateFrameEventsEv @ 000fb05c (arm) */
void fn_000fb05c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb05c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fb060:;
    {
        cpu->r[5] = rd32(0x000fb068u + + 0x74u);
    }
L_000fb064:;
    {
        cpu->r[6] = rd32(0x000fb06cu + + 0x74u);
    }
L_000fb068:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fb06c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000fb074u, cpu->r[5], 0, 0);
    }
L_000fb070:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000fb074:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000fb078:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fb07c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fb080:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000fb084:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000fb088:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fb08c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fb090:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb094u)) return;
        }
    }
L_000fb094:;
    {
        cpu->r[8] = 0x00001920u;
    }
L_000fb098:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000fb09c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_000fb0a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fb0a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb0a8u)) return;
        }
    }
L_000fb0a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000fb0ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_000fb0b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000fb0b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000fb0b8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x4u);
    }
L_000fb0bc:;
    {
        cpu->r[14] = 0x000fb0c0u; fn_0009933c(cpu);
    }
L_000fb0c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000fb0c4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_000fb0c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000fb0cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb0d0u)) return;
        }
    }
L_000fb0d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000fb0d4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000fb0d8:;
    {
        goto L_000fb0ac;
    }
}

/* _ZN12RaceRecorder4InitEibPc @ 000fb0e4 (arm) */
void fn_000fb0e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb0e4:;
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
L_000fb0e8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fb0ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000fb0f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fb0f4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000fb0f8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000fb0fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fb418;
        }
    }
L_000fb100:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[7] = v;
    }
L_000fb104:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[6]);
    }
L_000fb108:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fb10c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fb110:;
    {
        cpu->r[14] = 0x000fb114u; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb114:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_000fb118:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fb11c:;
    {
        cpu->r[14] = 0x000fb120u; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb120:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_000fb124:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_000fb128:;
    {
        cpu->r[14] = 0x000fb12cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb12c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_000fb130:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_000fb134:;
    {
        cpu->r[14] = 0x000fb138u; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb138:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_000fb13c:;
    {
        cpu->r[0] = 0x00000040u;
    }
L_000fb140:;
    {
        cpu->r[14] = 0x000fb144u; fn_0018ba6c(cpu);
    }
L_000fb144:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_000fb148:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000fb14c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000fb150:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000020u, 1, 1);
    }
L_000fb154:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_000fb158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb13c;
        }
    }
L_000fb15c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fb160:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_000fb164:;
    {
        cpu->r[14] = 0x000fb168u; fn_0018ba6c(cpu);
    }
L_000fb168:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_000fb16c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000fb170:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001900u, 0, 0);
    }
L_000fb174:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000050u, 1, 1);
    }
L_000fb178:;
    {
        wr32(cpu->r[3] + + 0x24u, cpu->r[0]);
    }
L_000fb17c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb160;
        }
    }
L_000fb180:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fb184:;
    {
        cpu->r[0] = 0x00000038u;
    }
L_000fb188:;
    {
        cpu->r[14] = 0x000fb18cu; fn_0018ba6c(cpu);
    }
L_000fb18c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_000fb190:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000fb194:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001940u, 0, 0);
    }
L_000fb198:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000094u, 1, 1);
    }
L_000fb19c:;
    {
        wr32(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_000fb1a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb184;
        }
    }
L_000fb1a4:;
    {
        cpu->r[0] = 0x000000f4u;
    }
L_000fb1a8:;
    {
        cpu->r[10] = 0x00001920u;
    }
L_000fb1ac:;
    {
        cpu->r[14] = 0x000fb1b0u; fn_0018ba6c(cpu);
    }
L_000fb1b0:;
    {
        cpu->r[3] = 0x000017e0u;
    }
L_000fb1b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000fb1b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb1bc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1c0:;
    {
        cpu->r[3] = 0x000017e4u;
    }
L_000fb1c4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_000fb1c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1cc:;
    {
        cpu->r[3] = 0x000017e8u;
    }
L_000fb1d0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_000fb1d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1d8:;
    {
        cpu->r[3] = 0x000017ecu;
    }
L_000fb1dc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000fb1e0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1e4:;
    {
        cpu->r[3] = 0x000017f0u;
    }
L_000fb1e8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_000fb1ec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1f0:;
    {
        cpu->r[3] = 0x000017f4u;
    }
L_000fb1f4:;
    {
        wr8(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_000fb1f8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb1fc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[0]);
    }
L_000fb200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb20c;
        }
    }
L_000fb204:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000fb208:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb20cu)) return;
    }
L_000fb20c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000fb210:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb214:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fb218:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00001900u, 0, 0);
    }
L_000fb21c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000fb220:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000fb224:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000fb228:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_000fb22c:;
    {
        cpu->r[14] = 0x000fb230u; imp_memset(cpu); /* memset */
    }
L_000fb230:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_000fb234:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb238:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fb23c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000fb240:;
    {
        cpu->r[14] = 0x000fb244u; imp_memset(cpu); /* memset */
    }
L_000fb244:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb248:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000fb24c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_000fb250:;
    {
        cpu->r[14] = 0x000fb254u; imp_memset(cpu); /* memset */
    }
L_000fb254:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb258:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_000fb25c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_000fb260:;
    {
        cpu->r[14] = 0x000fb264u; imp_memset(cpu); /* memset */
    }
L_000fb264:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000fb268:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000fb26c:;
    {
        cpu->r[2] = 0x000000f4u;
    }
L_000fb270:;
    {
        cpu->r[14] = 0x000fb274u; imp_memset(cpu); /* memset */
    }
L_000fb274:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000fb278:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000fb27c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000fb280:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_000fb284:;
    {
        cpu->r[14] = 0x000fb288u; imp_memset(cpu); /* memset */
    }
L_000fb288:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_000fb28c:;
    {
        wr32(cpu->r[6] + - 0x104u, cpu->r[8]);
    }
L_000fb290:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000fb294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb274;
        }
    }
L_000fb298:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000024u, 0, 0);
    }
L_000fb29c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000fb2a0:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_000fb2a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000fb2a8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000014u, 1, 1);
    }
L_000fb2ac:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fb2b0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb2b8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[2]);
    }
L_000fb2bc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2c0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2c4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2c8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2cc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2d0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2d4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2d8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2dc:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2e0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2e4:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_000fb2e8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000fb2ec:;
    {
        wr32(cpu->r[11] + - 0x108u, cpu->r[2]);
    }
L_000fb2f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000fb2f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb2a0;
        }
    }
L_000fb2f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00001940u, 0, 0);
    }
L_000fb2fc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000fb300:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_000fb304:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000fb308:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000fb30c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000025u, 1, 1);
    }
L_000fb310:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000fb314:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb318:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb31c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_000fb320:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb324:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb328:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb32c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb330:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb334:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb338:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb33c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb340:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb344:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb348:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[5]);
        cpu->r[3] = wb_tmp;
    }
L_000fb34c:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_000fb350:;
    {
        wr32(cpu->r[1] + - 0x108u, cpu->r[5]);
    }
L_000fb354:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000fb358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb304;
        }
    }
L_000fb35c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00001a00u, 0, 0);
    }
L_000fb360:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000fb364:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_000fb368:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000fb36c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000fb370:;
    {
        cpu->r[14] = 0x000fb374u; imp_strncpy(cpu); /* strncpy */
    }
L_000fb374:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000fb378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb37c:;
    {
        cpu->r[14] = 0x000fb380u; fn_000f9720(cpu);
    }
L_000fb380:;
    {
        cpu->r[1] = 0x00001a0cu;
    }
L_000fb384:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fb388:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fb38c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_000fb390:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000fb394:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_000fb398:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_000fb39c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_000fb3a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000fb3a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fb3a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000017c0u, 0, 0);
    }
L_000fb3ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000fb3b0:;
    {
        wr32(cpu->r[1] + + 0x3cu, cpu->r[3]);
    }
L_000fb3b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb3a0;
        }
    }
L_000fb3b8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fb3bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb3c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb3c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001800u, 0, 0);
    }
L_000fb3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000050u, 1, 1);
    }
L_000fb3cc:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[1]);
    }
L_000fb3d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb3bc;
        }
    }
L_000fb3d4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000fb3d8:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000fb3dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000fb3e0:;
    {
        wr32(cpu->r[2] + + 0x388u, cpu->r[3]);
    }
L_000fb3e4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000014u, 1, 1);
    }
L_000fb3e8:;
    {
        wr32(cpu->r[2] + + 0x3d8u, cpu->r[3]);
    }
L_000fb3ec:;
    {
        wr32(cpu->r[2] + + 0x428u, cpu->r[3]);
    }
L_000fb3f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fb3f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb3dc;
        }
    }
L_000fb3f8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fb3fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb404:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001840u, 0, 0);
    }
L_000fb408:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000094u, 1, 1);
    }
L_000fb40c:;
    {
        wr32(cpu->r[2] + + 0x2cu, cpu->r[1]);
    }
L_000fb410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb3fc;
        }
    }
L_000fb414:;
    {
        goto L_000fb204;
    }
L_000fb418:;
    {
        cpu->r[1] = rd32(0x000fb420u + + 0x30u);
    }
L_000fb41c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fb420:;
    {
        cpu->r[2] = rd32(0x000fb428u + + 0x2cu);
    }
L_000fb424:;
    {
        cpu->r[14] = 0x00000070u;
    }
L_000fb428:;
    {
        cpu->r[3] = rd32(0x000fb430u + + 0x28u);
    }
L_000fb42c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fb434u, cpu->r[1], 0, 0);
    }
L_000fb430:;
    {
        cpu->r[12] = rd32(0x000fb438u + + 0x24u);
    }
L_000fb434:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fb43cu, cpu->r[2], 0, 0);
    }
L_000fb438:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fb440u, cpu->r[3], 0, 0);
    }
L_000fb43c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_000fb440:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fb448u, cpu->r[12], 0, 0);
    }
L_000fb444:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fb448:;
    {
        cpu->r[14] = 0x000fb44cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fb44c:;
    {
        goto L_000fb100;
    }
}

/* _ZN12RaceRecorder9GetCameraEi @ 000fb460 (arm) */
void fn_000fb460(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb460:;
    {
        cpu->r[3] = rd32(0x000fb468u + + 0x4cu);
    }
L_000fb464:;
    {
        cpu->r[12] = 0x0000432cu;
    }
L_000fb468:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fb46c:;
    {
        cpu->r[14] = rd32(0x000fb474u + + 0x44u);
    }
L_000fb470:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fb478u, cpu->r[3], 0, 0);
    }
L_000fb474:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000fb478:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fb47c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_000fb480:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000fb484:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000fb488:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_000fb48c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000fb490:;
    {
        cpu->r[12] = 0x000017dcu;
    }
L_000fb494:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fb498:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00001a0cu;
        }
    }
L_000fb49c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_000fb4a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_000fb4a4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000fb4a8:;
    {
        cpu->r[14] = 0x000fb4acu; fn_000f56b4(cpu);
    }
L_000fb4ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb4b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb4b4u)) return;
    }
}

/* _ZN12RaceRecorder12RecordCameraEifff @ 000fb4bc (arm) */
void fn_000fb4bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb4bc:;
    {
        cpu->r[12] = rd32(0x000fb4c4u + + 0x80u);
    }
L_000fb4c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000fb4c4:;
    {
        cpu->r[4] = rd32(0x000fb4ccu + + 0x7cu);
    }
L_000fb4c8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fb4d0u, cpu->r[12], 0, 0);
    }
L_000fb4cc:;
    {
        cpu->r[14] = 0x0000432cu;
    }
L_000fb4d0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000fb4d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fb4d8:;
    {
        cpu->r[4] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_000fb4dc:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_000fb4e0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000fb4e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_000fb4e8:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_000fb4ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000fb4f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_000fb4f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000fb4f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fb520;
        }
    }
L_000fb4fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fb500:;
    {
        cpu->r[12] = 0x000017dcu;
    }
L_000fb504:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fb508:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000fb50c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000fb510:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fb514:;
    {
        cpu->r[14] = 0x000fb518u; fn_000f58d0(cpu);
    }
L_000fb518:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fb51c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb520u)) return;
    }
L_000fb520:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000fb524:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fb528:;
    {
        cpu->r[12] = 0x000017dcu;
    }
L_000fb52c:;
    {
        cpu->r[2] = 0x00001a0cu;
    }
L_000fb530:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000fb534:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000fb538:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000fb53c:;
    {
        cpu->r[14] = 0x000fb540u; fn_000f58d0(cpu);
    }
L_000fb540:;
    {
        goto L_000fb518;
    }
}

/* _ZN12RaceRecorderD1Ev @ 000fb54c (arm) */
void fn_000fb54c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb54c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fb550:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fb554:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fb558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb55c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb56c;
        }
    }
L_000fb560:;
    {
        cpu->r[14] = 0x000fb564u; fn_0018ba60(cpu);
    }
L_000fb564:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb568:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000fb56c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
    }
L_000fb570:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb584;
        }
    }
L_000fb578:;
    {
        cpu->r[14] = 0x000fb57cu; fn_0018ba60(cpu);
    }
L_000fb57c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb580:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_000fb584:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_000fb588:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb58c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb59c;
        }
    }
L_000fb590:;
    {
        cpu->r[14] = 0x000fb594u; fn_0018ba60(cpu);
    }
L_000fb594:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb598:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_000fb59c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_000fb5a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb5a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb5b4;
        }
    }
L_000fb5a8:;
    {
        cpu->r[14] = 0x000fb5acu; fn_0018ba60(cpu);
    }
L_000fb5ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb5b0:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_000fb5b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x44u);
    }
L_000fb5b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb5cc;
        }
    }
L_000fb5c0:;
    {
        cpu->r[14] = 0x000fb5c4u; fn_0018ba60(cpu);
    }
L_000fb5c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb5c8:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[3]);
    }
L_000fb5cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00001900u, 0, 0);
    }
L_000fb5d0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fb5d4:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000fb5d8:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_000fb5dc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000fb5e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000fb5e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb5e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb5f4;
        }
    }
L_000fb5ec:;
    {
        cpu->r[14] = 0x000fb5f0u; fn_0018ba20(cpu);
    }
L_000fb5f0:;
    {
        wr32(cpu->r[5], cpu->r[8]);
    }
L_000fb5f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000fb5f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fb5fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb5dc;
        }
    }
L_000fb600:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb604:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000fb608:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000fb60c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fb610:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fb614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb624;
        }
    }
L_000fb61c:;
    {
        cpu->r[14] = 0x000fb620u; fn_0018ba20(cpu);
    }
L_000fb620:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000fb624:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000015u, 1, 1);
    }
L_000fb628:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000fb62c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb60c;
        }
    }
L_000fb630:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00001940u, 0, 0);
    }
L_000fb634:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb638:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000fb63c:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000fb640:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fb644:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fb648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb658;
        }
    }
L_000fb650:;
    {
        cpu->r[14] = 0x000fb654u; fn_0018ba20(cpu);
    }
L_000fb654:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000fb658:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000026u, 1, 1);
    }
L_000fb65c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000fb660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb640;
        }
    }
L_000fb664:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000fb668:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000fb66c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fb670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb68c;
        }
    }
L_000fb674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb678:;
    {
        cpu->r[14] = 0x000fb67cu; fn_000f5b60(cpu);
    }
L_000fb67c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb680:;
    {
        cpu->r[14] = 0x000fb684u; fn_0018ba20(cpu);
    }
L_000fb684:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb688:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[3]);
    }
L_000fb68c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fb690:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb694u)) return;
    }
}

/* _ZN12RaceRecorderD2Ev @ 000fb694 (arm) */
void fn_000fb694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb694:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fb698:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000fb69c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000fb6a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb6a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb6b4;
        }
    }
L_000fb6a8:;
    {
        cpu->r[14] = 0x000fb6acu; fn_0018ba60(cpu);
    }
L_000fb6ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb6b0:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000fb6b4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
    }
L_000fb6b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb6bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb6cc;
        }
    }
L_000fb6c0:;
    {
        cpu->r[14] = 0x000fb6c4u; fn_0018ba60(cpu);
    }
L_000fb6c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb6c8:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_000fb6cc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_000fb6d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb6d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb6e4;
        }
    }
L_000fb6d8:;
    {
        cpu->r[14] = 0x000fb6dcu; fn_0018ba60(cpu);
    }
L_000fb6dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb6e0:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_000fb6e4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_000fb6e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb6ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb6fc;
        }
    }
L_000fb6f0:;
    {
        cpu->r[14] = 0x000fb6f4u; fn_0018ba60(cpu);
    }
L_000fb6f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb6f8:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_000fb6fc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x44u);
    }
L_000fb700:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb704:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb714;
        }
    }
L_000fb708:;
    {
        cpu->r[14] = 0x000fb70cu; fn_0018ba60(cpu);
    }
L_000fb70c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb710:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[3]);
    }
L_000fb714:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00001900u, 0, 0);
    }
L_000fb718:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000fb71c:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000fb720:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_000fb724:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000fb728:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000fb72c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb73c;
        }
    }
L_000fb734:;
    {
        cpu->r[14] = 0x000fb738u; fn_0018ba20(cpu);
    }
L_000fb738:;
    {
        wr32(cpu->r[5], cpu->r[8]);
    }
L_000fb73c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000fb740:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000fb744:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb724;
        }
    }
L_000fb748:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb74c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000fb750:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000fb754:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fb758:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fb75c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb76c;
        }
    }
L_000fb764:;
    {
        cpu->r[14] = 0x000fb768u; fn_0018ba20(cpu);
    }
L_000fb768:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000fb76c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000015u, 1, 1);
    }
L_000fb770:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000fb774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb754;
        }
    }
L_000fb778:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], 0x00001940u, 0, 0);
    }
L_000fb77c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb780:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000034u, 0, 0);
    }
L_000fb784:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000fb788:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000fb78c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000fb790:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000fb794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb7a0;
        }
    }
L_000fb798:;
    {
        cpu->r[14] = 0x000fb79cu; fn_0018ba20(cpu);
    }
L_000fb79c:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_000fb7a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000026u, 1, 1);
    }
L_000fb7a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000fb7a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb788;
        }
    }
L_000fb7ac:;
    {
        cpu->r[5] = 0x000017dcu;
    }
L_000fb7b0:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[5]);
    }
L_000fb7b4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fb7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fb7d4;
        }
    }
L_000fb7bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb7c0:;
    {
        cpu->r[14] = 0x000fb7c4u; fn_000f5b60(cpu);
    }
L_000fb7c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb7c8:;
    {
        cpu->r[14] = 0x000fb7ccu; fn_0018ba20(cpu);
    }
L_000fb7cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fb7d0:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[3]);
    }
L_000fb7d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000fb7d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb7dcu)) return;
    }
}

/* _ZN12RaceRecorderC1Ev @ 000fb7dc (arm) */
void fn_000fb7dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb7dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fb7e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000fb7e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fb7e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb7ec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000fb7f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000fb7f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000032u, 0, 0);
    }
L_000fb7f8:;
    {
        cpu->r[14] = 0x000fb7fcu; fn_000931e4(cpu);
    }
L_000fb7fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000190u, 1, 1);
    }
L_000fb800:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb7f0;
        }
    }
L_000fb804:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_000fb808:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb80c:;
    {
        cpu->r[14] = 0x000fb810u; fn_0018ba6c(cpu);
    }
L_000fb810:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fb814:;
    {
        cpu->r[14] = 0x000fb818u; fn_000f5bb0(cpu);
    }
L_000fb818:;
    {
        cpu->r[3] = 0x000017dcu;
    }
L_000fb81c:;
    {
        cpu->r[0] = 0x00032000u;
    }
L_000fb820:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_000fb824:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000fb828:;
    {
        cpu->r[3] = 0x00001a08u;
    }
L_000fb82c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000fb830:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb834:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000fb838:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_000fb83c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb840:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_000fb844:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_000fb848:;
    {
        cpu->r[14] = 0x000fb84cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb84c:;
    {
        cpu->r[1] = 0x000017f8u;
    }
L_000fb850:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fb854:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fb858:;
    {
        cpu->r[12] = 0x00000fa8u;
    }
L_000fb85c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000fb860:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000fb864:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb868:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb86c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001900u, 0, 0);
    }
L_000fb870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000fb874:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_000fb878:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb864;
        }
    }
L_000fb87c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fb880:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000fb884:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fb888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001900u, 0, 0);
    }
L_000fb88c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000050u, 1, 1);
    }
L_000fb890:;
    {
        wr32(cpu->r[1] + + 0x24u, cpu->r[3]);
    }
L_000fb894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb880;
        }
    }
L_000fb898:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fb89c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb8a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb8a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001940u, 0, 0);
    }
L_000fb8a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000094u, 1, 1);
    }
L_000fb8ac:;
    {
        wr32(cpu->r[2] + + 0x34u, cpu->r[1]);
    }
L_000fb8b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb89c;
        }
    }
L_000fb8b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb8b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb8bcu)) return;
    }
}

/* _ZN12RaceRecorderC2Ev @ 000fb8bc (arm) */
void fn_000fb8bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb8bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000fb8c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000fb8c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000fb8c8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb8cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_000fb8d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000fb8d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000032u, 0, 0);
    }
L_000fb8d8:;
    {
        cpu->r[14] = 0x000fb8dcu; fn_000931e4(cpu);
    }
L_000fb8dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000190u, 1, 1);
    }
L_000fb8e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb8d0;
        }
    }
L_000fb8e4:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_000fb8e8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000fb8ec:;
    {
        cpu->r[14] = 0x000fb8f0u; fn_0018ba6c(cpu);
    }
L_000fb8f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000fb8f4:;
    {
        cpu->r[14] = 0x000fb8f8u; fn_000f5bb0(cpu);
    }
L_000fb8f8:;
    {
        cpu->r[3] = 0x000017dcu;
    }
L_000fb8fc:;
    {
        cpu->r[0] = 0x00032000u;
    }
L_000fb900:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_000fb904:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000fb908:;
    {
        cpu->r[3] = 0x00001a08u;
    }
L_000fb90c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000fb910:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb914:;
    {
        cpu->r[3] = 0x00001a14u;
    }
L_000fb918:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_000fb91c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000fb920:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_000fb924:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_000fb928:;
    {
        cpu->r[14] = 0x000fb92cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000fb92c:;
    {
        cpu->r[1] = 0x000017f8u;
    }
L_000fb930:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000fb934:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000fb938:;
    {
        cpu->r[12] = 0x00000fa8u;
    }
L_000fb93c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000fb940:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_000fb944:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb948:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb94c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001900u, 0, 0);
    }
L_000fb950:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000fb954:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_000fb958:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb944;
        }
    }
L_000fb95c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000fb960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_000fb964:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000fb968:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001900u, 0, 0);
    }
L_000fb96c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000050u, 1, 1);
    }
L_000fb970:;
    {
        wr32(cpu->r[1] + + 0x24u, cpu->r[3]);
    }
L_000fb974:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb960;
        }
    }
L_000fb978:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000fb97c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000fb980:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000fb984:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00001940u, 0, 0);
    }
L_000fb988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000094u, 1, 1);
    }
L_000fb98c:;
    {
        wr32(cpu->r[2] + + 0x34u, cpu->r[1]);
    }
L_000fb990:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fb97c;
        }
    }
L_000fb994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000fb998:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fb99cu)) return;
    }
}

/* _ZN12RaceRecorder13SaveCrashQuatEib @ 000fb99c (arm) */
void fn_000fb99c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fb99c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000fb9a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fb9a4:;
    {
        cpu->r[6] = rd32(0x000fb9acu + + 0x174u);
    }
L_000fb9a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_000fb9ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fb9b0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000fb9b4:;
    {
        cpu->r[6] = add_flags(cpu, 0x000fb9bcu, cpu->r[6], 0, 0);
    }
L_000fb9b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fba90;
        }
    }
L_000fb9bc:;
    {
        cpu->r[8] = rd32(0x000fb9c4u + + 0x160u);
    }
L_000fb9c0:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000fb9c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fb9c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fb9cc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000fb9d0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000fb9d4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000fb9d8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000fb9dc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fb9e0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fb9e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000fb9e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008cc0u;
        }
    }
L_000fb9ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000fb9f0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000fb9f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_000fb9f8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_000fb9fc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
        }
    }
L_000fba00:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fba04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000fba08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000fba0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000fba10:;
    {
        cpu->r[14] = 0x000fba14u; fn_001685f8(cpu);
    }
L_000fba14:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000fba18:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000fba1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fba20:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000fba24:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000fba28:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000fba2c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fba30:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fba34:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fba68;
        }
    }
L_000fba38:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000fba3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000650u, 0, 0);
    }
L_000fba40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_000fba44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000fba48:;
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
    }
L_000fba4c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fba50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_000fba54:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fba58:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000fba5c:;
    {
        uint32_t v = cpu->r[5] | 0x00004000u; cpu->r[5] = v;
    }
L_000fba60:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000fba64:;
    {
        goto L_000fba88;
    }
L_000fba68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fba6c:;
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
    }
L_000fba70:;
    {
        cpu->r[4] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000fba74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000020u, 0, 0);
    }
L_000fba78:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x4u);
    }
L_000fba7c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_000fba80:;
    {
        uint32_t v = cpu->r[5] | 0x00004000u; cpu->r[5] = v;
    }
L_000fba84:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_000fba88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000fba8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fba90u)) return;
    }
L_000fba90:;
    {
        cpu->r[3] = rd32(0x000fba98u + + 0x8cu);
    }
L_000fba94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000fba98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fba9c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000fbaa0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000fbaa4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000fbaa8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbac0;
        }
    }
L_000fbaac:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbab0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbab4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbab8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000fbabc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbaf4;
        }
    }
L_000fbac0:;
    {
        cpu->r[1] = rd32(0x000fbac8u + + 0x60u);
    }
L_000fbac4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbac8:;
    {
        cpu->r[12] = rd32(0x000fbad0u + + 0x5cu);
    }
L_000fbacc:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbad0:;
    {
        cpu->r[2] = rd32(0x000fbad8u + + 0x58u);
    }
L_000fbad4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbadcu, cpu->r[1], 0, 0);
    }
L_000fbad8:;
    {
        cpu->r[3] = rd32(0x000fbae0u + + 0x54u);
    }
L_000fbadc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbae4u, cpu->r[12], 0, 0);
    }
L_000fbae0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbae8u, cpu->r[2], 0, 0);
    }
L_000fbae4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbae8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbaf0u, cpu->r[3], 0, 0);
    }
L_000fbaec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbaf0:;
    {
        cpu->r[14] = 0x000fbaf4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbaf4:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000fbaf8:;
    {
        cpu->r[0] = 0x00000680u;
    }
L_000fbafc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbb00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fbb04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000fbb08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000fbb0c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4] + cpu->r[3]; cpu->r[0] = v;
    }
L_000fbb10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fbb14:;
    {
        cpu->r[14] = 0x000fbb18u; fn_0018498c(cpu);
    }
L_000fbb18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_000fbb1c:;
    {
        goto L_000fba44;
    }
}

/* _ZN12RaceRecorder24GetTrafficReplayPositionEi @ 000fbb38 (arm) */
void fn_000fbb38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000fbb38:;
    {
        cpu->r[3] = rd32(0x000fbb40u + + 0x2d8u);
    }
L_000fbb3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000013u, 1, 1);
    }
L_000fbb40:;
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
L_000fbb44:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbb4cu, cpu->r[3], 0, 0);
    }
L_000fbb48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000fbb4c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000fbb50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000fbb54:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000fbb58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000fbcf0;
        }
    }
L_000fbb5c:;
    {
        cpu->r[1] = rd32(0x000fbb64u + + 0x2b8u);
    }
L_000fbb60:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000fbb64:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000fbb68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fbb6c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000fbb70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000fbb74:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fbb78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000fbb7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000fbb80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000fbc24;
        }
    }
L_000fbb84:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fbb88:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbba0;
        }
    }
L_000fbb8c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbb90:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbb94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000fbb98:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fbb9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbbd4;
        }
    }
L_000fbba0:;
    {
        cpu->r[1] = rd32(0x000fbba8u + + 0x278u);
    }
L_000fbba4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbba8:;
    {
        cpu->r[12] = rd32(0x000fbbb0u + + 0x274u);
    }
L_000fbbac:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbbb0:;
    {
        cpu->r[2] = rd32(0x000fbbb8u + + 0x270u);
    }
L_000fbbb4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbbbcu, cpu->r[1], 0, 0);
    }
L_000fbbb8:;
    {
        cpu->r[3] = rd32(0x000fbbc0u + + 0x26cu);
    }
L_000fbbbc:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbbc4u, cpu->r[12], 0, 0);
    }
L_000fbbc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbbc8u, cpu->r[2], 0, 0);
    }
L_000fbbc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbbc8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbbd0u, cpu->r[3], 0, 0);
    }
L_000fbbcc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbbd0:;
    {
        cpu->r[14] = 0x000fbbd4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbbd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000001e4u, 0, 0);
    }
L_000fbbd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000001bcu, 0, 0);
    }
L_000fbbdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000001d0u, 0, 0);
    }
L_000fbbe0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fbbe4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_000fbbe8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fbbec:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fbbf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fbbf4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fbbf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
    }
L_000fbbfc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fbc00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fbc04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
    }
L_000fbc08:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[0]);
    }
L_000fbc0c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_000fbc10:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[1]);
    }
L_000fbc14:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000fbc18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000fbc1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000fbc20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000fbc24u)) return;
    }
L_000fbc24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000640u, 0, 0);
    }
L_000fbc28:;
    {
        cpu->r[1] = 0x00001a0cu;
    }
L_000fbc2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000fbc30:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_000fbc34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000fbc38:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000fbc3c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_000fbc40:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_000fbc44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fbd80;
        }
    }
L_000fbc48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fbc4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
    }
L_000fbc50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000fbc54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
    }
L_000fbc58:;
    {
        cpu->r[8] = rd32(cpu->r[6] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000fbc5c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000fbc60:;
    {
        cpu->r[10] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fbc64:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000fbc68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fbc74;
        }
    }
L_000fbc6c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000fbc70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fbd04;
        }
    }
L_000fbc74:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fbc78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbc90;
        }
    }
L_000fbc7c:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbc80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbc84:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000fbc88:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fbc8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbcc4;
        }
    }
L_000fbc90:;
    {
        cpu->r[1] = rd32(0x000fbc98u + + 0x198u);
    }
L_000fbc94:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbc98:;
    {
        cpu->r[12] = rd32(0x000fbca0u + + 0x194u);
    }
L_000fbc9c:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbca0:;
    {
        cpu->r[2] = rd32(0x000fbca8u + + 0x190u);
    }
L_000fbca4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbcacu, cpu->r[1], 0, 0);
    }
L_000fbca8:;
    {
        cpu->r[3] = rd32(0x000fbcb0u + + 0x18cu);
    }
L_000fbcac:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbcb4u, cpu->r[12], 0, 0);
    }
L_000fbcb0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbcb8u, cpu->r[2], 0, 0);
    }
L_000fbcb4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbcb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbcc0u, cpu->r[3], 0, 0);
    }
L_000fbcbc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbcc0:;
    {
        cpu->r[14] = 0x000fbcc4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbcc4:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000fbcc8:;
    {
        cpu->r[2] = 0x00000680u;
    }
L_000fbccc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbcd0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000fbcd4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4] + cpu->r[3]; cpu->r[4] = v;
    }
L_000fbcd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_000fbcdc:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000001u; cpu->r[3] = v;
    }
L_000fbce0:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_000fbce4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_000fbce8:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
    }
L_000fbcec:;
    {
        goto L_000fbc18;
    }
L_000fbcf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000fbcf4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_000fbcf8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000fbcfc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_000fbd00:;
    {
        goto L_000fbc18;
    }
L_000fbd04:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000fbd08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000fbc74;
        }
    }
L_000fbd0c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000fbd10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbd28;
        }
    }
L_000fbd14:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000fbd18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbd1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000fbd20:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000fbd24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000fbd5c;
        }
    }
L_000fbd28:;
    {
        cpu->r[1] = rd32(0x000fbd30u + + 0x110u);
    }
L_000fbd2c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000fbd30:;
    {
        cpu->r[12] = rd32(0x000fbd38u + + 0x10cu);
    }
L_000fbd34:;
    {
        cpu->r[14] = 0x0000000du;
    }
L_000fbd38:;
    {
        cpu->r[2] = rd32(0x000fbd40u + + 0x108u);
    }
L_000fbd3c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000fbd44u, cpu->r[1], 0, 0);
    }
L_000fbd40:;
    {
        cpu->r[3] = rd32(0x000fbd48u + + 0x104u);
    }
L_000fbd44:;
    {
        cpu->r[12] = add_flags(cpu, 0x000fbd4cu, cpu->r[12], 0, 0);
    }
L_000fbd48:;
    {
        cpu->r[2] = add_flags(cpu, 0x000fbd50u, cpu->r[2], 0, 0);
    }
L_000fbd4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_000fbd50:;
    {
        cpu->r[3] = add_flags(cpu, 0x000fbd58u, cpu->r[3], 0, 0);
    }
L_000fbd54:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000fbd58:;
    {
        cpu->r[14] = 0x000fbd5cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000fbd5c:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000fbd60:;
    {
        cpu->r[2] = 0x00000680u;
    }
L_000fbd64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000fbd68:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000fbd6c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4] + cpu->r[3]; cpu->r[4] = v;
    }
L_000fbd70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_000fbd74:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_000fbd78:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_000fbd7c:;
    {
        goto L_000fbce4;
    }
L_000fbd80:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_000fbd84:;
    {
        { uint32_t v = cpu->r[0] & 0x00000080u; set_nz(cpu, v); }
    }
L_000fbd88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
        }
    }
L_000fbd8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x000000e2u, 0, 0);
        }
    }
L_000fbd90:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
        }
    }
L_000fbd94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_000fbd98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[6] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_000fbd9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
        }
    }
L_000fbda0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[8]);
        }
    }
L_000fbda4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
        }
    }
L_000fbda8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000040u; set_nz(cpu, v); }
    }
L_000fbdac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
        }
    }
L_000fbdb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000fbdb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
        }
    }
L_000fbdb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000f6u, 0, 0);
        }
    }
L_000fbdbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = rd32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_000fbdc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
        }
    }
L_000fbdc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
        }
    }
L_000fbdc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
        }
    }
L_000fbdcc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + shifter(cpu->r[0], 2, 2u, &shc), cpu->r[10]);
        }
    }
L_000fbdd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
        }
    }
L_000fbdd4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000020u; set_nz(cpu, v); }
    }
L_000fbdd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000fbe00;
        }
    }
L_000fbddc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fbde0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x10u);
    }
L_000fbde4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fbde8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_000fbdec:;
    {
        cpu->r[9] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fbdf0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000fbdf4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_000fbdf8:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[9]);
    }
L_000fbdfc:;
    {
        goto L_000fbc64;
    }
L_000fbe00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000108u, 0, 0);
    }
L_000fbe04:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000fbe08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000fbe0c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000fbe10:;
    {
        cpu->r[9] = rd32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000fbe14:;
    {
        goto L_000fbc64;
    }
}
