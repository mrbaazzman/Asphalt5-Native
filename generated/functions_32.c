#include "functions.h"

/* _ZN5Scene22UpdateCarsInSlowMotionEv @ 000d2d4c (arm) */
void fn_000d2d4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d2d4c:;
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
L_000d2d50:;
    {
        cpu->r[8] = 0x00008cbcu;
    }
L_000d2d54:;
    {
        cpu->r[6] = 0x00008cc4u;
    }
L_000d2d58:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d2d5c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d2d60:;
    {
        cpu->r[7] = rd32(0x000d2d68u + + 0x2d0u);
    }
L_000d2d64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000d2d68:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000d2d6c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000d2d70:;
    {
        cpu->r[7] = add_flags(cpu, 0x000d2d78u, cpu->r[7], 0, 0);
    }
L_000d2d74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d2d78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d2d7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d2d80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d2e64;
        }
    }
L_000d2d84:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000d2d88:;
    {
        cpu->r[10] = 0x00008cc0u;
    }
L_000d2d8c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d2d90:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d2d94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d2d98:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000d2d9c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_000d2da0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
        }
    }
L_000d2da4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000d2da8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d2dac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000d2db0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d2db4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d2db8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2e50;
        }
    }
L_000d2dc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2dc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2dc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000d2dcc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_000d2dd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2dd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000d2dd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d2ddc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_000d2de0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_000d2de4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2de8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2dec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000d2df0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2df4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000d2df8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_000d2dfc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000d2e00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000d2e04:;
    {
        vfp_vadd(cpu, 13, 10, 13);
    }
L_000d2e08:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_000d2e0c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2e10:;
    {
        wr32(cpu->r[3] + + 0x404u, cpu->r[1]);
    }
L_000d2e14:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_000d2e18:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2e1c:;
    {
        wr32(cpu->r[3] + + 0x408u, cpu->r[2]);
    }
L_000d2e20:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2e24:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000d2e28:;
    {
        wr32(cpu->r[3] + + 0x40cu, cpu->r[1]);
    }
L_000d2e2c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000d2e30:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2e34:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[2]);
    }
L_000d2e38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d2e3c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2e40:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[1]);
    }
L_000d2e44:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2e48:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[2]);
    }
L_000d2e4c:;
    {
        cpu->r[14] = 0x000d2e50u; fn_00160c54(cpu);
    }
L_000d2e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d2e54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d2e58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d2e5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000d2e60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d2d98;
        }
    }
L_000d2e64:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000d2e68:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2e70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2f9c;
        }
    }
L_000d2e78:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000d2e7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2e80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2e84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2e88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d2f9c;
        }
    }
L_000d2e8c:;
    {
        cpu->r[9] = rd32(0x000d2e94u + + 0x1a8u);
    }
L_000d2e90:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d2e94:;
    {
        cpu->r[8] = rd32(0x000d2e9cu + + 0x1a4u);
    }
L_000d2e98:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000d2e9c:;
    {
        cpu->r[10] = rd32(0x000d2ea4u + + 0x1a0u);
    }
L_000d2ea0:;
    {
        cpu->r[9] = add_flags(cpu, 0x000d2ea8u, cpu->r[9], 0, 0);
    }
L_000d2ea4:;
    {
        cpu->r[11] = rd32(0x000d2eacu + + 0x19cu);
    }
L_000d2ea8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000d2eb0u, cpu->r[8], 0, 0);
    }
L_000d2eac:;
    {
        cpu->r[10] = add_flags(cpu, 0x000d2eb4u, cpu->r[10], 0, 0);
    }
L_000d2eb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000208u, 0, 0);
    }
L_000d2eb4:;
    {
        cpu->r[11] = add_flags(cpu, 0x000d2ebcu, cpu->r[11], 0, 0);
    }
L_000d2eb8:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000d2ebc:;
    {
        cpu->r[2] = 0x000082a4u;
    }
L_000d2ec0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2ec4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d2ec8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d2ecc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2ed0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 1);
    }
L_000d2ed4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000d2ed8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2f68;
        }
    }
L_000d2edc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2ee0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000d2ee4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_000d2ee8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2eec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000d2ef0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_000d2ef4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2ef8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d2efc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_000d2f00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2f04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000d2f08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2f0c:;
    {
        vfp_vadd(cpu, 13, 10, 13);
    }
L_000d2f10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000d2f14:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000d2f18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000410u, 0, 0);
    }
L_000d2f1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000d2f20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000d2f24:;
    {
        vfp_vadd(cpu, 14, 11, 14);
    }
L_000d2f28:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2f2c:;
    {
        wr32(cpu->r[3] + + 0x404u, cpu->r[1]);
    }
L_000d2f30:;
    {
        vfp_vadd(cpu, 15, 12, 15);
    }
L_000d2f34:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2f38:;
    {
        wr32(cpu->r[3] + + 0x408u, cpu->r[1]);
    }
L_000d2f3c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000d2f40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2f44:;
    {
        wr32(cpu->r[3] + + 0x40cu, cpu->r[1]);
    }
L_000d2f48:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000d2f4c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2f50:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[1]);
    }
L_000d2f54:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d2f58:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2f5c:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[1]);
    }
L_000d2f60:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2f64:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[1]);
    }
L_000d2f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d2f6c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000d2f70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d2f9c;
        }
    }
L_000d2f74:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d2f78:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d2eb8;
        }
    }
L_000d2f7c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d2f80:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d2f84:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000d2f88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d2f8c:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000d2f90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d2f94:;
    {
        cpu->r[14] = 0x000d2f98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d2f98:;
    {
        goto L_000d2eb8;
    }
L_000d2f9c:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000d2fa0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2fa4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d2fa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2fac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3010;
        }
    }
L_000d2fb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2fb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2fb8:;
    {
        cpu->r[14] = 0x000d2fbcu; fn_000cdeb8(cpu);
    }
L_000d2fbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2fc0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2fc4:;
    {
        cpu->r[14] = 0x000d2fc8u; fn_000e56e0(cpu);
    }
L_000d2fc8:;
    {
        cpu->r[3] = rd32(0x000d2fd0u + + 0x7cu);
    }
L_000d2fcc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d2fd0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d2fd4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d2fd8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d2fdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d2ff0;
        }
    }
L_000d2fe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2fe8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2fec:;
    {
        cpu->r[14] = 0x000d2ff0u; fn_000de340(cpu);
    }
L_000d2ff0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2ff4:;
    {
        cpu->r[14] = 0x000d2ff8u; fn_000ba724(cpu);
    }
L_000d2ff8:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000d2ffc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d3000:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d3004:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000d3008:;
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
L_000d300c:;
    {
        return fn_0015b9b8(cpu);
    }
L_000d3010:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3014:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d3018:;
    {
        cpu->r[14] = 0x000d301cu; fn_000d1950(cpu);
    }
L_000d301c:;
    {
        cpu->r[3] = rd32(0x000d3024u + + 0x2cu);
    }
L_000d3020:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d3024:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d3028:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000d302c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d3030:;
    {
        cpu->r[14] = 0x000d3034u; fn_00151c40(cpu);
    }
L_000d3034:;
    {
        goto L_000d2fb0;
    }
}

/* _ZN5Scene14RenderCarRanksEv @ 000d3054 (arm) */
void fn_000d3054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d3054:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d3058:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d305c:;
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
L_000d3060:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_000d3064:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d3068:;
    {
        cpu->r[6] = rd32(0x000d3070u + + 0x318u);
    }
L_000d306c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_000d3070:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d3074:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000d3078:;
    {
        cpu->r[6] = add_flags(cpu, 0x000d3080u, cpu->r[6], 0, 0);
    }
L_000d307c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3090;
        }
    }
L_000d3084:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000d3088:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_000d308c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d3090u)) return;
    }
L_000d3090:;
    {
        cpu->r[3] = rd32(0x000d3098u + + 0x2f4u);
    }
L_000d3094:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d3098:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d309c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d30a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d333c;
        }
    }
L_000d30a4:;
    {
        cpu->r[7] = rd32(0x000d30acu + + 0x2e4u);
    }
L_000d30a8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000d30ac:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x3eu);
    }
L_000d30b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d30b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3084;
        }
    }
L_000d30b8:;
    {
        cpu->r[3] = rd32(0x000d30c0u + + 0x2d4u);
    }
L_000d30bc:;
    {
        cpu->r[4] = 0x000011e8u;
    }
L_000d30c0:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_000d30c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d30c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d30cc:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000d30d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d30d4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d30d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d30dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d30e0:;
    {
        cpu->r[14] = 0x000d30e8u;
    }
L_000d30e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d30e8u)) return;
    }
L_000d30e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d30ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d30f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d30f4:;
    {
        cpu->r[14] = 0x000d30fcu;
    }
L_000d30f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d30fcu)) return;
    }
L_000d30fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d3100:;
    {
        cpu->r[14] = 0x000d3104u; fn_000bcec4(cpu);
    }
L_000d3104:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d3108:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000d310c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000d3110:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d3114:;
    {
        cpu->r[14] = 0x000d3118u; fn_0012f12c(cpu);
    }
L_000d3118:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000d311c:;
    {
        cpu->r[2] = 0x0000001du;
    }
L_000d3120:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d3124:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000d3128:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_000d312c:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_000d3130:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d3134:;
    {
        cpu->r[14] = 0x000d3138u; fn_0014814c(cpu);
    }
L_000d3138:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d313c:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000d3140:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d3144:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d3148:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d314c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d3150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d3154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3158:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3318;
        }
    }
L_000d315c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00011c00u, 0, 0);
    }
L_000d3160:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d3164:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_000d3168:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000d3170u + + 0x1f4u);
    }
L_000d316c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000d3174u + + 0x1f4u);
    }
L_000d3170:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000d3178u + + 0x1f4u);
    }
L_000d3174:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x000d317cu + + 0x1f4u);
    }
L_000d3178:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000d3180u + + 0x1f4u);
    }
L_000d317c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000d3184u + + 0x1f4u);
    }
L_000d3180:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x000d3188u + + 0x1f4u);
    }
L_000d3184:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x000d318cu + + 0x1f4u);
    }
L_000d3188:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000d318c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000d3190:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000d3194:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d3198:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d319c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
        }
    }
L_000d31a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000d31a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000d31a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d31ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000d31b0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000d31b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d31b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d32ec;
        }
    }
L_000d31bc:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_000d31c0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d31c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d31c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d31dc;
        }
    }
L_000d31cc:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000d31d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d31d4:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d31d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d32ec;
        }
    }
L_000d31dc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d31e0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x178u);
    }
L_000d31e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d31e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d32ec;
        }
    }
L_000d31ec:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d31f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d31f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d31f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d31fc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000d3200:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d32ec;
        }
    }
L_000d3204:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000d3208:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_000d320c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000d3210:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d3214:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d3218:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d321c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d3220:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d3224:;
    {
        cpu->r[14] = 0x000d3228u; fn_0015365c(cpu);
    }
L_000d3228:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_000d322c:;
    {
        vfp_vadd(cpu, 15, 15, 18);
    }
L_000d3230:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d3234:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d3238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x188u);
    }
L_000d323c:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_000d3240:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_000d3244:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3258;
        }
    }
L_000d324c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d3250:;
    {
        cpu->r[14] = 0x000d3254u; imp_sqrtf(cpu); /* sqrtf */
    }
L_000d3254:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000d3258:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,19));
    }
L_000d325c:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3260:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d32ec;
        }
    }
L_000d3264:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,21));
    }
L_000d3268:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[9];
    }
L_000d326c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000d3270:;
    {
        wr8(cpu->r[13] + + 0x2fu, cpu->r[12]);
    }
L_000d3274:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_000d3278:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d327c:;
    {
        wr8(cpu->r[13] + + 0x2du, cpu->r[12]);
    }
L_000d3280:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d3284:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3288:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 15, 15, 21);
        }
    }
L_000d328c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 14) = *(float*)G(0x000d3294u + + 0xecu);
        }
    }
L_000d3290:;
    {
        wr8(cpu->r[13] + + 0x2eu, cpu->r[12]);
    }
L_000d3294:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d3298:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000d329c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000d32a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d32a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000d32a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d32ac:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 14, 15, 22);
        }
    }
L_000d32b0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000d32b8u + + 0xccu);
        }
    }
L_000d32b4:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_000d32b8:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 15, 15, 17);
        }
    }
L_000d32bc:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 13, 15, 23);
        }
    }
L_000d32c0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d32c4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,13);
        }
    }
L_000d32c8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
        }
    }
L_000d32cc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d32d0:;
    {
        vfp_vsub(cpu, 14, 15, 17);
    }
L_000d32d4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d32d8:;
    {
        vfp_vmul(cpu, 14, 14, 20);
    }
L_000d32dc:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_000d32e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d32e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d32e8:;
    {
        cpu->r[14] = 0x000d32ecu; fn_00130de4(cpu);
    }
L_000d32ec:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d32f0:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000d32f4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d32f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d32fc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000d3300:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000d3304:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d3308:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d330c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d3310:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000d3314:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d3188;
        }
    }
L_000d3318:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_000d331c:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_000d3320:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d3324:;
    {
        wr32(cpu->r[7] + cpu->r[2], cpu->r[8]);
    }
L_000d3328:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d332c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d3330:;
    {
        cpu->r[14] = 0x000d3338u;
    }
L_000d3334:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d3338u)) return;
    }
L_000d3338:;
    {
        goto L_000d3084;
    }
L_000d333c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3340:;
    {
        cpu->r[14] = 0x000d3344u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d3344:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d30a4;
        }
    }
L_000d334c:;
    {
        cpu->r[7] = rd32(0x000d3354u + + 0x3cu);
    }
L_000d3350:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_000d3354:;
    {
        cpu->r[14] = 0x000d3358u; fn_00094228(cpu);
    }
L_000d3358:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d335c:;
    {
        cpu->r[14] = 0x000d3360u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d3360:;
    {
        goto L_000d30a8;
    }
}

/* _ZN5Scene13UpdateAISoundEv @ 000d3398 (arm) */
void fn_000d3398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d3398:;
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
L_000d339c:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000d33a0:;
    {
        cpu->r[4] = 0x00008c50u;
    }
L_000d33a4:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000d33a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d33ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000d33b0:;
    {
        cpu->r[9] = rd32(0x000d33b8u + + 0x3e4u);
    }
L_000d33b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_000d33b8:;
    {
        cpu->r[9] = add_flags(cpu, 0x000d33c0u, cpu->r[9], 0, 0);
    }
L_000d33bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d33c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d33c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d33c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d33cc:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d33d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[7] + + 0x17cu);
    }
L_000d33d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x180u);
    }
L_000d33d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x184u);
    }
L_000d33dc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d33e0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d33e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d33e8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d33ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xf4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d33f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xf8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d33f4:;
    {
        cpu->r[14] = 0x000d33f8u; fn_000c2108(cpu);
    }
L_000d33f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000d33fc:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d3400:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000d3404:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3540;
        }
    }
L_000d3408:;
    {
        cpu->r[1] = rd32(0x000d3410u + + 0x390u);
    }
L_000d340c:;
    {
        cpu->r[8] = 0x00001c90u;
    }
L_000d3410:;
    {
        cpu->r[2] = rd32(0x000d3418u + + 0x38cu);
    }
L_000d3414:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d3418:;
    {
        cpu->r[3] = rd32(0x000d3420u + + 0x388u);
    }
L_000d341c:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000d3420:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_000d3424:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d3428:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000e4u, 0, 0);
    }
L_000d342c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000d3430:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000d3434:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000d343cu + + 0x34cu);
    }
L_000d3438:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000d343c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000d3444u + + 0x348u);
    }
L_000d3440:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000d3448u + + 0x348u);
    }
L_000d3444:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000d344cu + + 0x348u);
    }
L_000d3448:;
    {
        goto L_000d3474;
    }
L_000d344c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3464;
        }
    }
L_000d3454:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d3458:;
    {
        cpu->r[14] = 0x000d345cu; fn_0015ed94(cpu);
    }
L_000d345c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000d3460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d34e8;
        }
    }
L_000d3464:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d3468:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000d346c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_000d3470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3540;
        }
    }
L_000d3474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d3478:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x7cu);
    }
L_000d347c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000d3480:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000d3484:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 1);
    }
L_000d3488:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
        }
    }
L_000d348c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d344c;
        }
    }
L_000d3490:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d3494:;
    {
        cpu->r[14] = 0x000d3498u; fn_0015ed94(cpu);
    }
L_000d3498:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000d349c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3454;
        }
    }
L_000d34a0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x17cu);
    }
L_000d34a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d34acu + + 0x2ecu);
    }
L_000d34a8:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x17cu);
    }
L_000d34ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x184u);
    }
L_000d34b0:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x184u);
    }
L_000d34b4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_000d34b8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_000d34bc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000d34c0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d34c4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000d34c8:;
    {
        vfp_sync_flags(cpu);
    }
L_000d34cc:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[5] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000d34d0:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[5] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000d34d4:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)G(cpu->r[5] + + 0xe8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_000d34d8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d354c;
        }
    }
L_000d34dc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d34e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d34e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d362c;
        }
    }
L_000d34e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_000d34ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d34f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d3464;
        }
    }
L_000d34f4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d34f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d34fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_000d3500:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d3504:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3508:;
    {
        cpu->r[14] = 0x000d350cu; fn_000fd1d0(cpu);
    }
L_000d350c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3510:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_000d3514:;
    {
        cpu->r[3] = 0x00000096u;
    }
L_000d3518:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_000d351c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d3520:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3524:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d3528:;
    {
        cpu->r[14] = 0x000d352cu; fn_0018cd24(cpu);
    }
L_000d352c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_000d3530:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000d3534:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_000d3538:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000d353c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3474;
        }
    }
L_000d3540:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000d3544:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000d3548:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d354cu)) return;
    }
L_000d354c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d3550:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d3554:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d3558:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x430u);
    }
L_000d355c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d3560:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000d3564:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x42cu);
    }
L_000d3568:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d356c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d3570:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d3574:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x428u);
    }
L_000d3578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d357c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x418u);
    }
L_000d3580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d3584:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d3588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_000d358c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000d3590:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d3594:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x42cu);
    }
L_000d3598:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x428u);
    }
L_000d359c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
    }
L_000d35a0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_000d35a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_000d35a8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d35ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x430u);
    }
L_000d35b0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d35b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000d35b8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000d35bc:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000d35c0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d35c4:;
    {
        vfp_vdiv(cpu, 14, 14, 16);
    }
L_000d35c8:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_000d35cc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xe8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d35d0:;
    {
        vfp_vdiv(cpu, 13, 13, 16);
    }
L_000d35d4:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d35d8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d35dc:;
    {
        vfp_vmul(cpu, 15, 15, 12);
    }
L_000d35e0:;
    {
        vfp_vdiv(cpu, 12, 15, 16);
    }
L_000d35e4:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_000d35e8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000d35ec:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_000d35f0:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_000d35f4:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000d35f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_000d35fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d34dc;
        }
    }
L_000d3604:;
    {
        vfp_vdiv(cpu, 15, 17, 15);
    }
L_000d3608:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d360c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d3610:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000d3614:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_000d3618:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xecu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000d361c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d3620:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d3624:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xe8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d3628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d34e8;
        }
    }
L_000d362c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_000d3630:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000d3634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3684;
        }
    }
L_000d3638:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d363c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d3464;
        }
    }
L_000d3640:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000d3648:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_000d364c:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000d3650:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d3654:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000d3658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_000d365c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000d3660:;
    {
        cpu->r[14] = 0x000d3664u; fn_0018beb8(cpu);
    }
L_000d3664:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3668:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_000d366c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_000d3670:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3674:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d3678:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000d367c:;
    {
        cpu->r[14] = 0x000d3680u; fn_0018be5c(cpu);
    }
L_000d3680:;
    {
        goto L_000d3464;
    }
L_000d3684:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d3688:;
    {
        cpu->r[11] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000d368c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000d3690:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d3694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d373c;
        }
    }
L_000d3698:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d369c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000d36a0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000d36a4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000d36a8:;
    {
        cpu->r[14] = 0x000d36acu; fn_00093f98(cpu);
    }
L_000d36ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d36b0:;
    {
        cpu->r[11] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_000d36b4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000d36b8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d36bc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d36c0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d36c4:;
    {
        vfp_vdiv(cpu, 20, 15, 18);
    }
L_000d36c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3764;
        }
    }
L_000d36cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d36d0:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_000d36d4:;
    {
        cpu->r[14] = 0x000d36d8u; fn_00093f88(cpu);
    }
L_000d36d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xc0u);
    }
L_000d36dc:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d36e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_000d36e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_000d36e8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d36ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d36f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d36f4:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x490u);
    }
L_000d36f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
    }
L_000d36fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d3700:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000d3704:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d3708:;
    {
        cpu->r[12] = 0x00000096u;
    }
L_000d370c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d3710:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d3714:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d3718:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000d371c:;
    {
        vfp_vdiv(cpu, 14, 14, 18);
    }
L_000d3720:;
    {
        vfp_vmul(cpu, 14, 14, 20);
    }
L_000d3724:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d3728:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d372c:;
    {
        cpu->r[14] = 0x000d3730u; fn_0018e570(cpu);
    }
L_000d3730:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d3734:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[0]);
    }
L_000d3738:;
    {
        goto L_000d3638;
    }
L_000d373c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d3740:;
    {
        cpu->r[14] = 0x000d3744u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d3744:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3698;
        }
    }
L_000d374c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d3750:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000d3754:;
    {
        cpu->r[14] = 0x000d3758u; fn_00094228(cpu);
    }
L_000d3758:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d375c:;
    {
        cpu->r[14] = 0x000d3760u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d3760:;
    {
        goto L_000d3698;
    }
L_000d3764:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d3768:;
    {
        cpu->r[14] = 0x000d376cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d376c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d36cc;
        }
    }
L_000d3774:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d3778:;
    {
        cpu->r[14] = 0x000d377cu; fn_00094228(cpu);
    }
L_000d377c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d3780:;
    {
        cpu->r[14] = 0x000d3784u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d3784:;
    {
        goto L_000d36cc;
    }
}

/* _ZN5Scene16UpdateCarsReplayEv @ 000d37ac (arm) */
void fn_000d37ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d37ac:;
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
L_000d37b0:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d37b4:;
    {
        cpu->r[7] = 0x00008cc4u;
    }
L_000d37b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d37bc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d37c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000d37c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d37c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d37cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000d37d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000d37d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d37d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00018c00u, 0, 0);
        }
    }
L_000d37dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b8u, 0, 0);
        }
    }
L_000d37e0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
        }
    }
L_000d37e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d38b8;
        }
    }
L_000d37e8:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000d37ec:;
    {
        cpu->r[11] = 0x00008cc0u;
    }
L_000d37f0:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000d37f4:;
    {
        cpu->r[8] = 0x00001c90u;
    }
L_000d37f8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d37fc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d3800:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d3804:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d3808:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d380c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000d3810:;
    {
        cpu->r[12] = 0x00008d78u;
    }
L_000d3814:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000b8u, 0, 0);
    }
L_000d3818:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d381c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000d3820:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000d3824:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000d3828:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
        }
    }
L_000d382c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
        }
    }
L_000d3830:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
        }
    }
L_000d3834:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
        }
    }
L_000d3838:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000d383c:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000d3840:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000d3844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3898;
        }
    }
L_000d3848:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d384c:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[0]);
    }
L_000d3850:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3854:;
    {
        cpu->r[14] = 0x000d3858u; fn_00177c90(cpu);
    }
L_000d3858:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d385c:;
    {
        cpu->r[14] = 0x000d3860u; fn_0015d95c(cpu);
    }
L_000d3860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3864:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d391c;
        }
    }
L_000d3868:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d386c:;
    {
        cpu->r[14] = 0x000d3870u; fn_0015d95c(cpu);
    }
L_000d3870:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3874:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3898;
        }
    }
L_000d3878:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_000d387c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_000d3880:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d38e0;
        }
    }
L_000d3888:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d388c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d3890:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d3894:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d38e0;
        }
    }
L_000d3898:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d389c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d38a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d38a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d38a8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d38ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d38b0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000d38b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d3824;
        }
    }
L_000d38b8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d38bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d38c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d38c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d38c8:;
    {
        cpu->r[14] = 0x000d38ccu; fn_00181518(cpu);
    }
L_000d38cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d38d0:;
    {
        cpu->r[14] = 0x000d38d4u; fn_000c489c(cpu);
    }
L_000d38d4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d38d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d38dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d38e0u)) return;
    }
L_000d38e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d38e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d38e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d38ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d38f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d38f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d38f8:;
    {
        cpu->r[14] = 0x000d38fcu; fn_0016ea5c(cpu);
    }
L_000d38fc:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d3900:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d3904:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d3908:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d390c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d3910:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_000d3914:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d3824;
        }
    }
L_000d3918:;
    {
        goto L_000d38b8;
    }
L_000d391c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3920:;
    {
        cpu->r[14] = 0x000d3924u; fn_0015d920(cpu);
    }
L_000d3924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3868;
        }
    }
L_000d392c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3930:;
    {
        cpu->r[14] = 0x000d3934u; fn_000995b4(cpu);
    }
L_000d3934:;
    {
        uint32_t v = cpu->r[0] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000d3938:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000d393c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3a5c;
        }
    }
L_000d3940:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d3944:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_000d3948:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x57cu);
    }
L_000d394c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3970;
        }
    }
L_000d3954:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x580u);
    }
L_000d3958:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 0);
    }
L_000d395c:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_000d3960:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000d3964:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_000d3968:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_000d396c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d3b90;
        }
    }
L_000d3970:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3974:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3978:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d397c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3980:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3984:;
    {
        cpu->r[14] = 0x000d3988u; fn_000fd224(cpu);
    }
L_000d3988:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d398c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d39a0;
        }
    }
L_000d3990:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3994:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3998:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d399c:;
    {
        cpu->r[14] = 0x000d39a0u; fn_000fd218(cpu);
    }
L_000d39a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d39a4:;
    {
        wr8(cpu->r[4] + + 0x57cu, cpu->r[0]);
    }
L_000d39a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d39ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d39b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d39b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d39b8:;
    {
        cpu->r[14] = 0x000d39bcu; fn_00177118(cpu);
    }
L_000d39bc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d39c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d39c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d39c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d39cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d39d0:;
    {
        cpu->r[14] = 0x000d39d4u; fn_0016ea5c(cpu);
    }
L_000d39d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d39d8:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000d39dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d39e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d39e4:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_000d39e8:;
    {
        cpu->r[14] = 0x000d39ecu; fn_000c2320(cpu);
    }
L_000d39ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d39f0:;
    {
        cpu->r[14] = 0x000d39f4u; fn_000d3398(cpu);
    }
L_000d39f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d39f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d39fc:;
    {
        cpu->r[14] = 0x000d3a00u; fn_000c1dc0(cpu);
    }
L_000d3a00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3a04:;
    {
        cpu->r[14] = 0x000d3a08u; fn_0015d920(cpu);
    }
L_000d3a08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3a0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3898;
        }
    }
L_000d3a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_000d3a14:;
    {
        { uint32_t v = cpu->r[3] & 0x0000b000u; set_nz(cpu, v); }
    }
L_000d3a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3898;
        }
    }
L_000d3a1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3a20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3a24:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_000d3a28:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3a2c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3a30:;
    {
        cpu->r[14] = 0x000d3a34u; fn_000fd224(cpu);
    }
L_000d3a34:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d3a38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3898;
        }
    }
L_000d3a3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3a40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3a44:;
    {
        cpu->r[1] = 0x00000084u;
    }
L_000d3a48:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3a4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3a50:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000d3a54:;
    {
        cpu->r[14] = 0x000d3a58u; fn_000fd248(cpu);
    }
L_000d3a58:;
    {
        goto L_000d3898;
    }
L_000d3a5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_000d3a60:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3a64:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3a68:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000d3af0;
        }
    }
L_000d3a6c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d3a70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000d3a74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3a78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3a8c;
        }
    }
L_000d3a7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d3a80:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000d3a84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3a88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3afc;
        }
    }
L_000d3a8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d3a90:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_000d3a94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000d3a98:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_000d3a9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3948;
        }
    }
L_000d3aa0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3aa4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d3aa8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d3aac:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[1]);
    }
L_000d3ab0:;
    {
        wr8(cpu->r[4] + + 0x57cu, cpu->r[3]);
    }
L_000d3ab4:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3ab8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d3b18;
        }
    }
L_000d3abc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3ac0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3ac4:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3ac8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3acc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3ad0:;
    {
        cpu->r[14] = 0x000d3ad4u; fn_000fd224(cpu);
    }
L_000d3ad4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d3ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d39a8;
        }
    }
L_000d3adc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3ae0:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3ae4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d3ae8:;
    {
        cpu->r[14] = 0x000d3aecu; fn_000fd218(cpu);
    }
L_000d3aec:;
    {
        goto L_000d39a8;
    }
L_000d3af0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d3af4:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_000d3af8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000d3afc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3b00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d3b04:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d3b08:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[1]);
    }
L_000d3b0c:;
    {
        wr8(cpu->r[4] + + 0x57cu, cpu->r[3]);
    }
L_000d3b10:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3b14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3abc;
        }
    }
L_000d3b18:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3b1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3b20:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3b24:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3b28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3b2c:;
    {
        cpu->r[14] = 0x000d3b30u; fn_000fd224(cpu);
    }
L_000d3b30:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d3b34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d39a8;
        }
    }
L_000d3b38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3b3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3b40:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d3b44:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3b48:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3b4c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000d3b50:;
    {
        cpu->r[14] = 0x000d3b54u; fn_000fd248(cpu);
    }
L_000d3b54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d3b58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d3b5c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000d3b60:;
    {
        cpu->r[14] = 0x000d3b64u; fn_000979a0(cpu);
    }
L_000d3b64:;
    {
        cpu->r[14] = 0x000d3b68u; fn_00093fc8(cpu);
    }
L_000d3b68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d3b6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d3b70:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3b74:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000d3b78:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d3b7c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d3b80:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d3b84:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d3b88:;
    {
        cpu->r[14] = 0x000d3b8cu; fn_000fd200(cpu);
    }
L_000d3b8c:;
    {
        goto L_000d39a8;
    }
L_000d3b90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000d3b94:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_000d3b98:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_000d3b9c:;
    {
        goto L_000d3970;
    }
}

/* _ZN5Scene10UpdateCarsEv @ 000d3ba0 (arm) */
void fn_000d3ba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d3ba0:;
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
L_000d3ba4:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000d3ba8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d3bac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d3bb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000044u, 1, 0);
    }
L_000d3bb4:;
    {
        cpu->r[7] = rd32(0x000d3bbcu + + 0xfa4u);
    }
L_000d3bb8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000d3bbc:;
    {
        cpu->r[10] = rd32(0x000d3bc4u + + 0xfa0u);
    }
L_000d3bc0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000d3bc8u, cpu->r[7], 0, 0);
    }
L_000d3bc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000d3bc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d3bcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d3bd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d3bd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d3bd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d3bdc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1b0u);
    }
L_000d3be0:;
    {
        cpu->r[14] = 0x000d3be4u; fn_00180968(cpu);
    }
L_000d3be4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_000d3be8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
        }
    }
L_000d3bec:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
        }
    }
L_000d3bf0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
        }
    }
L_000d3bf4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d3bf8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d3bfc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d3c00:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d3c04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4e30;
        }
    }
L_000d3c0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3c10:;
    {
        cpu->r[14] = 0x000d3c14u; fn_000ba724(cpu);
    }
L_000d3c14:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d3c18:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000d3c1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d3c20:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d3c24:;
    {
        cpu->r[3] = 0x00008d90u;
    }
L_000d3c28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d3c2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d3c30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d3c34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d3c38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_000d3c3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d3c40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000d3c44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000d3c48:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d3c4c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
        }
    }
L_000d3c50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d4220;
        }
    }
L_000d3c54:;
    {
        cpu->r[14] = rd32(0x000d3c5cu + + 0xf0cu);
    }
L_000d3c58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d3c5c:;
    {
        cpu->r[0] = rd32(0x000d3c64u + + 0xf08u);
    }
L_000d3c60:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d3c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000b8u, 0, 0);
    }
L_000d3c68:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000d3c6c:;
    {
        cpu->r[11] = 0x00008cc0u;
    }
L_000d3c70:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000d3c74:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_000d3c78:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000d3c7c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000d3c80:;
    {
        cpu->r[14] = 0x00008d78u;
    }
L_000d3c84:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_000d3c88:;
    {
        cpu->r[0] = 0x0000851fu;
    }
L_000d3c8c:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_000d3c90:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d3c94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d3c98:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d3c9c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x51ebu << 16);
    }
L_000d3ca0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_000d3ca4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d3ca8:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d3cac:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d3cb0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000d3cb4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000d3cb8:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000d3cbc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_000d3cc0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_000d3cc4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_000d3cc8:;
    {
        goto L_000d3d48;
    }
L_000d3ccc:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000d3cd0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d3cd4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000d3cd8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d3cdc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000d3ce0:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d3ce4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d3ce8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d3cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d08;
        }
    }
L_000d3cf0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d3cf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4004;
        }
    }
L_000d3cf8:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000d3cfc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d3d00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3ff4;
        }
    }
L_000d3d08:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000d3d0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d3d10:;
    {
        { uint32_t v = cpu->r[3] & 0x00200000u; set_nz(cpu, v); }
    }
L_000d3d14:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00100000u; cpu->r[3] = v;
        }
    }
L_000d3d18:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000d3d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4b1c;
        }
    }
L_000d3d20:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d3d24:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000d3d28:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d3d2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d3d30:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d3d34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d3d38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d3d3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d3d40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000d3d44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d4218;
        }
    }
L_000d3d48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000d3d4c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000d3d50:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000d3d54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000d3d58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000d3d5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d3d60:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000d3d64:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d3d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d20;
        }
    }
L_000d3d6c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d3d70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d3d74:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d3d78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3dc0;
        }
    }
L_000d3d7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d3d80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d3d84:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000d3d88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3e58;
        }
    }
L_000d3d8c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d3d90:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000d3d94:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d3d98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d3d9c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d3da0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d3da4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3ccc;
        }
    }
L_000d3da8:;
    {
        cpu->r[2] = 0x000063f0u;
    }
L_000d3dac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d3db0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000d3db4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d3db8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000d3dbc:;
    {
        goto L_000d3ce0;
    }
L_000d3dc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d3dc4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d3dc8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d3dcc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d3dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4ab0;
        }
    }
L_000d3dd4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d3dd8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000d3ddc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x10u);
    }
L_000d3de0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3de4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x338u);
    }
L_000d3de8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_000d3dec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 6u, &shc); cpu->r[2] = v;
        }
    }
L_000d3df0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
        }
    }
L_000d3df4:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
        }
    }
L_000d3df8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_000d3dfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[3], 1, 0);
        }
    }
L_000d3e00:;
    {
        wr32(cpu->r[6] + + 0x2b0u, cpu->r[3]);
    }
L_000d3e04:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x584u);
    }
L_000d3e08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d3e0c:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[3]);
    }
L_000d3e10:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_000d3e14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3d7c;
        }
    }
L_000d3e18:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x580u);
    }
L_000d3e1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_000d3e20:;
    {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
    }
L_000d3e24:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000d3e28:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_000d3e2c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
        }
    }
L_000d3e30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3e40;
        }
    }
L_000d3e34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000d3e38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_000d3e3c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
        }
    }
L_000d3e40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d3e44:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[3]);
    }
L_000d3e48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d3e4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d3e50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000d3e54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3d8c;
        }
    }
L_000d3e58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d3e5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d3e60:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000d3e64:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d3e68:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_000d3e6c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d3e70:;
    {
        { uint32_t v = cpu->r[3] & 0x00000200u; set_nz(cpu, v); }
    }
L_000d3e74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4b44;
        }
    }
L_000d3e78:;
    {
        uint32_t v = cpu->r[3] & 0x0000000cu; cpu->r[10] = v;
    }
L_000d3e7c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000008u, 1, 1);
    }
L_000d3e80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000004u;
        }
    }
L_000d3e84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_000d3e88:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d3e8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x00000004u; cpu->r[1] = v;
        }
    }
L_000d3e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3e9c;
        }
    }
L_000d3e94:;
    {
        uint32_t v = cpu->r[3] & 0x00000004u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_000d3e98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] | 0x00000020u; cpu->r[10] = v;
        }
    }
L_000d3e9c:;
    {
        cpu->r[2] = 0x00004004u;
    }
L_000d3ea0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d3ea4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0000u << 16);
    }
L_000d3ea8:;
    {
        uint32_t v = cpu->r[3] & cpu->r[2]; cpu->r[2] = v;
    }
L_000d3eac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00004000u, 1, 1);
    }
L_000d3eb0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000d3eb4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] | 0x00000004u; cpu->r[10] = v;
        }
    }
L_000d3eb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d3ebc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000008u; cpu->r[10] = v;
        }
    }
L_000d3ec0:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000d3ec4:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d3ec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4ae0;
        }
    }
L_000d3ecc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d3ed0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d3ed4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000d3ed8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d3edc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000d3ee0:;
    {
        cpu->r[14] = 0x000d3ee4u; fn_00093fd8(cpu);
    }
L_000d3ee4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d3ee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000d3eec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4054;
        }
    }
L_000d3ef0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d3ef4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000001u; cpu->r[10] = v;
        }
    }
L_000d3ef8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_000d3efc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000002u; cpu->r[10] = v;
        }
    }
L_000d3f00:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000d3f04:;
    {
        cpu->r[14] = 0x000d3f08u; fn_00093f34(cpu);
    }
L_000d3f08:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d3f0c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000d3f10:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3f14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d40f0;
        }
    }
L_000d3f18:;
    {
        uint32_t v = cpu->r[10] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000d3f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4100;
        }
    }
L_000d3f20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x354u);
    }
L_000d3f24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3f28:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3f2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000d4bd0;
        }
    }
L_000d3f30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d3f34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d3f38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3f50;
        }
    }
L_000d3f40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d3f44:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000d3f48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3f4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4bdc;
        }
    }
L_000d3f50:;
    {
        uint32_t v = cpu->r[10] | 0x00000040u; cpu->r[10] = v;
    }
L_000d3f54:;
    {
        { uint32_t v = cpu->r[10] & 0x00000008u; set_nz(cpu, v); }
    }
L_000d3f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4108;
        }
    }
L_000d3f5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3f60:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d3f64:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d3f68:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[12]);
    }
L_000d3f6c:;
    {
        wr8(cpu->r[6] + + 0x57cu, cpu->r[3]);
    }
L_000d3f70:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3f74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d4bf8;
        }
    }
L_000d3f78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d3f7c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d3f80:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d3f84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d3f88:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3f8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d3f90:;
    {
        cpu->r[14] = 0x000d3f94u; fn_000fd224(cpu);
    }
L_000d3f94:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d3f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4170;
        }
    }
L_000d3f9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d3fa0:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d3fa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d3fa8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d3fac:;
    {
        cpu->r[14] = 0x000d3fb0u; fn_000fd218(cpu);
    }
L_000d3fb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x354u);
    }
L_000d3fb4:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d3fb8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d3fbc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000d3fc0:;
    {
        vfp_sync_flags(cpu);
    }
L_000d3fc4:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = cpu->r[10] & ~ 0x00000008u; cpu->r[10] = v;
        }
    }
L_000d3fc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3fcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4190;
        }
    }
L_000d3fd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d3fd4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d3fd8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d3fdc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d3fe0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d3fe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d3fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4cf0;
        }
    }
L_000d3fec:;
    {
        wr32(cpu->r[6] + + 0x5a4u, cpu->r[10]);
    }
L_000d3ff0:;
    {
        goto L_000d3d20;
    }
L_000d3ff4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d3ff8:;
    {
        cpu->r[14] = 0x000d3ffcu; fn_000ba990(cpu);
    }
L_000d3ffc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4000:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3d08;
        }
    }
L_000d4004:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000d4008:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d400c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4010:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d08;
        }
    }
L_000d4018:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d401c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000d4020:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d4024:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000d4028:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d402c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d20;
        }
    }
L_000d4034:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x316u);
    }
L_000d4038:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d403c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d20;
        }
    }
L_000d4040:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d4044:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d4048:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d404c:;
    {
        cpu->r[14] = 0x000d4050u; fn_00160e40(cpu);
    }
L_000d4050:;
    {
        goto L_000d3d20;
    }
L_000d4054:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d4058:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000d405c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000d4060:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d4064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4dfc;
        }
    }
L_000d4068:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d406c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4070:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_000d4074:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000d4078:;
    {
        cpu->r[14] = 0x000d407cu; fn_00093fd8(cpu);
    }
L_000d407c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000d4084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3ef0;
        }
    }
L_000d4088:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d408c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000d4090:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d4094:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d4098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4d0c;
        }
    }
L_000d409c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d40a0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d40a4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000d40a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000d40ac:;
    {
        cpu->r[14] = 0x000d40b0u; fn_00093fd8(cpu);
    }
L_000d40b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000d40b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4e98;
        }
    }
L_000d40b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d40bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000d40c0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d40c4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d40c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4ee0;
        }
    }
L_000d40cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d40d0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d40d4:;
    {
        cpu->r[14] = 0x000d40d8u; fn_00093fd8(cpu);
    }
L_000d40d8:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000d40dc:;
    {
        cpu->r[14] = 0x000d40e0u; fn_00093f34(cpu);
    }
L_000d40e0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d40e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000d40e8:;
    {
        vfp_sync_flags(cpu);
    }
L_000d40ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3f18;
        }
    }
L_000d40f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d40f4:;
    {
        cpu->r[14] = 0x000d40f8u; fn_000d15b8(cpu);
    }
L_000d40f8:;
    {
        uint32_t v = cpu->r[10] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000d40fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3f20;
        }
    }
L_000d4100:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d4104:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d4108:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x57cu);
    }
L_000d410c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4130;
        }
    }
L_000d4114:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x580u);
    }
L_000d4118:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 0);
    }
L_000d411c:;
    {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
    }
L_000d4120:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001du, 1, 1);
    }
L_000d4124:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_000d4128:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
        }
    }
L_000d412c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d4dc8;
        }
    }
L_000d4130:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d4134:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d4138:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d413c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4140:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d4144:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4148:;
    {
        cpu->r[14] = 0x000d414cu; fn_000fd224(cpu);
    }
L_000d414c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d4150:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4168;
        }
    }
L_000d4154:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d4158:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d415c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000d4160:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d4164:;
    {
        cpu->r[14] = 0x000d4168u; fn_000fd218(cpu);
    }
L_000d4168:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d416c:;
    {
        wr8(cpu->r[6] + + 0x57cu, cpu->r[3]);
    }
L_000d4170:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x354u);
    }
L_000d4174:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d4178:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d417c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000d4180:;
    {
        vfp_sync_flags(cpu);
    }
L_000d4184:;
    {
        if (cond_test(cpu, 5)) {
        uint32_t v = cpu->r[10] & ~ 0x00000008u; cpu->r[10] = v;
        }
    }
L_000d4188:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d418c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d3fd0;
        }
    }
L_000d4190:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d4194:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[0]);
    }
L_000d4198:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d419c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000d41a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d41b8;
        }
    }
L_000d41a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d41a8:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000d41ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d41b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000d41b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3fd0;
        }
    }
L_000d41b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d41bc:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000d41c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_000d41c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d41c8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000d41cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d41d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d41fc;
        }
    }
L_000d41d4:;
    {
        cpu->r[1] = 0x00005f68u;
    }
L_000d41d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000d41dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d41e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d41fc;
        }
    }
L_000d41e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d41e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d41ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d41f0:;
    {
        cpu->r[14] = 0x000d41f4u; fn_0017128c(cpu);
    }
L_000d41f4:;
    {
        wr32(cpu->r[6] + + 0x5a4u, cpu->r[10]);
    }
L_000d41f8:;
    {
        goto L_000d3d20;
    }
L_000d41fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d4200:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d4204:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d4208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d420c:;
    {
        cpu->r[14] = 0x000d4210u; fn_0016ed5c(cpu);
    }
L_000d4210:;
    {
        wr32(cpu->r[6] + + 0x5a4u, cpu->r[10]);
    }
L_000d4214:;
    {
        goto L_000d3d20;
    }
L_000d4218:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[10]);
    }
L_000d421c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d4220:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000d4224:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4228:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d422c:;
    {
        cpu->r[14] = 0x000d4230u; fn_000c52a4(cpu);
    }
L_000d4230:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d4234:;
    {
        cpu->r[14] = 0x000d4238u; fn_00096b6c(cpu);
    }
L_000d4238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d423c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4e4c;
        }
    }
L_000d4240:;
    {
        cpu->r[12] = 0x00008cbcu;
    }
L_000d4244:;
    {
        cpu->r[8] = 0x00008cc4u;
    }
L_000d4248:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d424c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d4250:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d4254:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d4258:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d425c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d4260:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d440c;
        }
    }
L_000d4264:;
    {
        cpu->r[9] = 0x00008cb8u;
    }
L_000d4268:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d426c:;
    {
        cpu->r[11] = 0x00008cc0u;
    }
L_000d4270:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_000d4274:;
    {
        cpu->r[1] = 0x00004334u;
    }
L_000d4278:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d427c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000b8u, 0, 0);
    }
L_000d4280:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d4284:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000d4288:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d428c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000d4290:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d4294:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000d4298:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d429c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000d42a0:;
    {
        goto L_000d431c;
    }
L_000d42a4:;
    {
        cpu->r[1] = 0x000063f0u;
    }
L_000d42a8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000d42ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000d42b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000d42b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000d42b8:;
    {
        cpu->r[14] = 0x00005f60u;
    }
L_000d42bc:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[14]);
    }
L_000d42c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d42c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d42e0;
        }
    }
L_000d42c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d42cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d43a0;
        }
    }
L_000d42d0:;
    {
        cpu->r[1] = 0x00005f58u;
    }
L_000d42d4:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000d42d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d42dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4380;
        }
    }
L_000d42e0:;
    {
        cpu->r[0] = 0x00001788u;
    }
L_000d42e4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_000d42e8:;
    {
        { uint32_t v = cpu->r[2] & 0x00200000u; set_nz(cpu, v); }
    }
L_000d42ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00001788u;
        }
    }
L_000d42f0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00100000u; cpu->r[2] = v;
        }
    }
L_000d42f4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[9] + cpu->r[1], cpu->r[2]);
        }
    }
L_000d42f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4304;
        }
    }
L_000d42fc:;
    {
        { uint32_t v = cpu->r[2] & 0x00100000u; set_nz(cpu, v); }
    }
L_000d4300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4b80;
        }
    }
L_000d4304:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d4308:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d430c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d4310:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000d4314:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_000d4318:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d440c;
        }
    }
L_000d431c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000d4320:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_000d4324:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000d4328:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[11]);
        }
    }
L_000d432c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_000d4330:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d4334:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_000d4338:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000d433c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4304;
        }
    }
L_000d4340:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d4344:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4348:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000d434c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d495c;
        }
    }
L_000d4350:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d4354:;
    {
        cpu->r[14] = 0x00005f53u;
    }
L_000d4358:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d435c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[14]);
    }
L_000d4360:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d4364:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d42a4;
        }
    }
L_000d4368:;
    {
        cpu->r[1] = 0x000063f0u;
    }
L_000d436c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000d4370:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000d4374:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000d4378:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000d437c:;
    {
        goto L_000d42b8;
    }
L_000d4380:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4384:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4388:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d438c:;
    {
        cpu->r[14] = 0x000d4390u; fn_000ba990(cpu);
    }
L_000d4390:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4394:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d439c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d42e0;
        }
    }
L_000d43a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d43a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d43a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d43ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d42e0;
        }
    }
L_000d43b0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d43b4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000d43b8:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_000d43bc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000d43c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d43c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4304;
        }
    }
L_000d43c8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x316u);
    }
L_000d43cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d43d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4304;
        }
    }
L_000d43d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d43d8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d43dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d43e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d43e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d43e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d43ec:;
    {
        cpu->r[14] = 0x000d43f0u; fn_00162ab0(cpu);
    }
L_000d43f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d43f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d43f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d43fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d4400:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000d4404:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_000d4408:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d431c;
        }
    }
L_000d440c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d4410:;
    {
        cpu->r[6] = 0x00004080u;
    }
L_000d4414:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4418:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000d441c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d4424:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4428:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d442c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d4430:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d4434:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d4438:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_000d443c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d4440:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d4444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4480;
        }
    }
L_000d4448:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001640u, 0, 0);
    }
L_000d444c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d4450:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d4454:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_000d4458:;
    {
        cpu->r[14] = 0x000d445cu; fn_0015d718(cpu);
    }
L_000d445c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d4460:;
    {
        cpu->r[3] = 0x00004090u;
    }
L_000d4464:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d4468:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d446c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000d4470:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d4474:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00004094u;
        }
    }
L_000d4478:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000d447c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d4480:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d4484:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d4488:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d448c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d4490:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4e8c;
        }
    }
L_000d4498:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000d449c:;
    {
        cpu->r[8] = 0x00008548u;
    }
L_000d44a0:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d44a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d44a8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000d44ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d44b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d50bc;
        }
    }
L_000d44b4:;
    {
        cpu->r[14] = 0x000d44b8u; fn_001882b4(cpu);
    }
L_000d44b8:;
    {
        cpu->r[3] = 0x0000421cu;
    }
L_000d44bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d44c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_000d44c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d44c8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_000d44cc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d44d0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000d44d4:;
    {
        vfp_sync_flags(cpu);
    }
L_000d44d8:;
    {
        if (cond_test(cpu, 13)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_000d44dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000d44e0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_000d44e4:;
    {
        cpu->r[3] = 0x00004224u;
    }
L_000d44e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d44ec:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d44f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d44f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4c88;
        }
    }
L_000d44f8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x620u);
    }
L_000d44fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d4500:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000d4504:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d4508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4c94;
        }
    }
L_000d450c:;
    {
        cpu->r[6] = 0x0000173cu;
    }
L_000d4510:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d4514:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_000d4518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4cb4;
        }
    }
L_000d451c:;
    {
        cpu->r[3] = 0x0000422cu;
    }
L_000d4520:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d4524:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4528:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000d452c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d45e0;
        }
    }
L_000d4530:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000d4534:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
        }
    }
L_000d4538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d45e0;
        }
    }
L_000d453c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000d4540:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d4564;
        }
    }
L_000d4544:;
    {
        cpu->r[3] = 0x00004228u;
    }
L_000d4548:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d454c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000d4554:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_000d4558:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_000d455c:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d4560:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d4564:;
    {
        cpu->r[3] = 0x00008394u;
    }
L_000d4568:;
    {
        cpu->r[2] = 0x0000422cu;
    }
L_000d456c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4570:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d4574:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4578:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[8]);
    }
L_000d457c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d4580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4d38;
        }
    }
L_000d4584:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d4588:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_000d458c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d4590:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d4594:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d4598:;
    {
        cpu->r[1] = 0x00008398u;
    }
L_000d459c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d45a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d45a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d45a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d45ac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d45b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d45b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d45b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000d45bc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00008398u;
        }
    }
L_000d45c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
        }
    }
L_000d45c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d45c8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
        }
    }
L_000d45cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d45d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00008398u;
        }
    }
L_000d45d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000d45d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d45dc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d45e0:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d45e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d45e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d45ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d45f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000d45f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d48f0;
        }
    }
L_000d45f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d45fc:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d4600:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d4604:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d4608:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d460c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4dd8;
        }
    }
L_000d4610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4614:;
    {
        cpu->r[14] = 0x000d4618u; fn_000c248c(cpu);
    }
L_000d4618:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d461c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4620:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4628:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d462c:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000d4630:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_000d4634:;
    {
        cpu->r[14] = 0x000d4638u; fn_000c2320(cpu);
    }
L_000d4638:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d463c:;
    {
        cpu->r[14] = 0x000d4640u; fn_000d3398(cpu);
    }
L_000d4640:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4644:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4648:;
    {
        cpu->r[14] = 0x000d464cu; fn_000c1dc0(cpu);
    }
L_000d464c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d4650:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d4654:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_000d4658:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d465c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d4660:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4664:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_000d4668:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d466c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00001cf0u;
        }
    }
L_000d4670:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00001ce8u;
        }
    }
L_000d4674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d4678:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d467c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d4680:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d4684:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_000d4688:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d468c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000d4690:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d4694:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
        }
    }
L_000d4698:;
    {
        cpu->r[2] = 0x00001748u;
    }
L_000d469c:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000d46a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d46a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d46a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_000d46ac:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000d46b0:;
    {
        cpu->r[2] = 0x00001750u;
    }
L_000d46b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d46b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d46bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_000d46c0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000d46c4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d46c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d46cc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d46d0:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000d46d4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_000d46d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d46dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d46e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d46e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d46e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d46ec:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d46f0:;
    {
        cpu->r[2] = 0x00001740u;
    }
L_000d46f4:;
    {
        cpu->r[12] = rd8(cpu->r[1] + cpu->r[2]);
    }
L_000d46f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4f0c;
        }
    }
L_000d46fc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d4700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_000d4704:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
        }
    }
L_000d4708:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_000d470c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_000d4710:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000d474c;
        }
    }
L_000d4714:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_000d4718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d471c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000d4720:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d4724:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_000d4728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d472c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000d4730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d4734:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_000d4738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d473c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_000d4740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d4744:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000d4748:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4844;
        }
    }
L_000d474c:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_000d4750:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00001700u, 0, 0);
    }
L_000d4754:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d4758:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d475c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003cu, 0, 0);
    }
L_000d4760:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001740u, 0, 0);
    }
L_000d4764:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003fu, 0, 0);
    }
L_000d4768:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d476c:;
    {
        cpu->r[14] = 0x000d4770u; fn_000c057c(cpu);
    }
L_000d4770:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d4774:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d4778:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d477c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4780:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d4784:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_000d4788:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
    }
L_000d478c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d4790:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000d4794:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x4u);
    }
L_000d4798:;
    {
        cpu->r[5] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000d479c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[5]);
    }
L_000d47a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d481c;
        }
    }
L_000d47a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d47a8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d47ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000d47b0:;
    {
        cpu->r[8] = 0x00001684u;
    }
L_000d47b4:;
    {
        cpu->r[11] = 0x000010d4u;
    }
L_000d47b8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d47bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d47c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4800;
        }
    }
L_000d47c4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[11]);
    }
L_000d47c8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000d47cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000d47d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d4800;
        }
    }
L_000d47d4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d47d8:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000d47dc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d47e0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000d47e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d47e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d47f8;
        }
    }
L_000d47ec:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d47f0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d47f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d504c;
        }
    }
L_000d47f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d47fc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000d4800:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d4804:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d4808:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000d480c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d4810:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000d4814:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d47b8;
        }
    }
L_000d4818:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d481c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_000d4820:;
    {
        cpu->r[0] = 0x00001740u;
    }
L_000d4824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d4828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d482c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d4830:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_000d4834:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4fd4;
        }
    }
L_000d483c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d4840:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000d4844:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d4848:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_000d484c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d48d4;
        }
    }
L_000d4854:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_000d4858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d48d4;
        }
    }
L_000d485c:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000d4860:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d4864:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d4868:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d486c:;
    {
        cpu->r[1] = 0x00000089u;
    }
L_000d4870:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d4874:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d4878:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d487c:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000d4880:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x0000009cu, 0, 0);
    }
L_000d4884:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d4888:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000007cu, 0, 0);
    }
L_000d488c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4890:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d4894:;
    {
        cpu->r[14] = 0x000d4898u; fn_000fd248(cpu);
    }
L_000d4898:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d489c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_000d48a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d48a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d48cc;
        }
    }
L_000d48a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d48ac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d48b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d48b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d48b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d48bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d48c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000d48c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d48cc;
        }
    }
L_000d48c8:;
    {
        cpu->r[14] = 0x000d48ccu; fn_0015edb0(cpu);
    }
L_000d48cc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_000d48d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4898;
        }
    }
L_000d48d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d48d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d48f0;
        }
    }
L_000d48dc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d48e0:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000d48e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d48e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d48ec:;
    {
        cpu->r[14] = 0x000d48f0u; fn_00096b6c(cpu);
    }
L_000d48f0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d48f4:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d48f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d48fc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d4900:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d4904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4994;
        }
    }
L_000d4908:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d490c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4aa4;
        }
    }
L_000d4910:;
    {
        cpu->r[6] = 0x00004328u;
    }
L_000d4914:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000d4918:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d491c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000d4920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4aa4;
        }
    }
L_000d4924:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000d4928:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d492c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d4930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5108;
        }
    }
L_000d4934:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000d4938:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d493c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4940:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d5118;
        }
    }
L_000d4944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4948:;
    {
        cpu->r[14] = 0x000d494cu; fn_000bcf58(cpu);
    }
L_000d494c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d4950:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d4954:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4958:;
    {
        goto L_000d49a8;
    }
L_000d495c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d4960:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4964:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d4968:;
    {
        cpu->r[14] = 0x000d496cu; fn_00162510(cpu);
    }
L_000d496c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4970:;
    {
        cpu->r[14] = 0x000d4974u; fn_000bafb4(cpu);
    }
L_000d4974:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d4978:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d497c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d4980:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d4984:;
    {
        cpu->r[14] = 0x000d4988u; fn_0016ba38(cpu);
    }
L_000d4988:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d498c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4990:;
    {
        goto L_000d4304;
    }
L_000d4994:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d4998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4aa4;
        }
    }
L_000d499c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d49a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d49a4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d49a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000d49ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4aa4;
        }
    }
L_000d49b0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d49b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d49b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d49bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d49c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d49c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d49c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d49cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d49d0:;
    {
        cpu->r[14] = 0x000d49d4u; fn_0015edb0(cpu);
    }
L_000d49d4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d49d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d49dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d49e0:;
    {
        cpu->r[14] = 0x000d49e4u; fn_000c2320(cpu);
    }
L_000d49e4:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d49e8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d49ec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d49f0:;
    {
        cpu->r[14] = 0x000d49f4u; fn_0018cbe8(cpu);
    }
L_000d49f4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d49f8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000d49fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d4a00:;
    {
        cpu->r[14] = 0x000d4a04u; fn_0018cb94(cpu);
    }
L_000d4a04:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4a08:;
    {
        cpu->r[14] = 0x000d4a0cu; fn_00097d9c(cpu);
    }
L_000d4a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4a10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4ea4;
        }
    }
L_000d4a14:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4a18:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000d4a1c:;
    {
        cpu->r[14] = 0x000d4a20u; fn_00099b28(cpu);
    }
L_000d4a20:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d4a24:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000d4a28:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4a2c:;
    {
        cpu->r[14] = 0x000d4a30u; fn_000a2764(cpu);
    }
L_000d4a30:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4a34:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d4a38:;
    {
        cpu->r[1] = 0x000000b9u;
    }
L_000d4a3c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000d4a40:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4a44:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000d4a48:;
    {
        cpu->r[14] = 0x000d4a4cu; fn_000fd288(cpu);
    }
L_000d4a4c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d4a50:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d4a54:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d4a58:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d4a5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4a60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4a8c;
        }
    }
L_000d4a64:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000d4a68:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000d4a6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d4a70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018c00u, 0, 0);
    }
L_000d4a74:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_000d4a78:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x9cu);
    }
L_000d4a7c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000d4a80:;
    {
        uint32_t v = cpu->r[0] | 0x00100000u; cpu->r[0] = v;
    }
L_000d4a84:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[0]);
    }
L_000d4a88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4a68;
        }
    }
L_000d4a8c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d4a90:;
    {
        cpu->r[1] = 0x00009fbcu;
    }
L_000d4a94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d4a98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d4a9c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000d4aa0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d4aa4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d4aa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_000d4aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d4ab0u)) return;
    }
L_000d4ab0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4ab4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4ab8:;
    {
        cpu->r[14] = 0x000d4abcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d4abc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3dd4;
        }
    }
L_000d4ac4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d4ac8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_000d4acc:;
    {
        cpu->r[14] = 0x000d4ad0u; fn_00094228(cpu);
    }
L_000d4ad0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4ad4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4ad8:;
    {
        cpu->r[14] = 0x000d4adcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d4adc:;
    {
        goto L_000d3dd4;
    }
L_000d4ae0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d4ae4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4ae8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000d4aec:;
    {
        cpu->r[14] = 0x000d4af0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d4af0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4af4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3ecc;
        }
    }
L_000d4afc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d4b00:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000d4b04:;
    {
        cpu->r[14] = 0x000d4b08u; fn_00094228(cpu);
    }
L_000d4b08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4b0c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d4b10:;
    {
        cpu->r[14] = 0x000d4b14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d4b14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4b18:;
    {
        goto L_000d3ecc;
    }
L_000d4b1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d4b20:;
    {
        cpu->r[14] = 0x000d4b24u; fn_0015d95c(cpu);
    }
L_000d4b24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4b28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d3d20;
        }
    }
L_000d4b2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d4b30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d4b34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d4b38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d4b3c:;
    {
        cpu->r[14] = 0x000d4b40u; fn_0017128c(cpu);
    }
L_000d4b40:;
    {
        goto L_000d3d20;
    }
L_000d4b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4b48:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000d4b4c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4b50:;
    {
        cpu->r[14] = 0x000d4b54u; fn_000be2fc(cpu);
    }
L_000d4b54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4b58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4b5c:;
    {
        goto L_000d3e78;
    }
L_000d4b80:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d4b84:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4b88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d4b8c:;
    {
        cpu->r[14] = 0x000d4b90u; fn_0015d95c(cpu);
    }
L_000d4b90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4b94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4b98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4304;
        }
    }
L_000d4ba0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d4ba4:;
    {
        cpu->r[14] = 0x000d4ba8u; fn_00162510(cpu);
    }
L_000d4ba8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d4bac:;
    {
        cpu->r[14] = 0x000d4bb0u; fn_0015eb58(cpu);
    }
L_000d4bb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d4bb4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d4bb8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d4bbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d4bc0:;
    {
        cpu->r[14] = 0x000d4bc4u; fn_0016ba38(cpu);
    }
L_000d4bc4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4bc8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4bcc:;
    {
        goto L_000d4304;
    }
L_000d4bd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d4bd4:;
    {
        cpu->r[3] = 0x00000012u;
    }
L_000d4bd8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d4bdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d4be0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d4be4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d4be8:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[12]);
    }
L_000d4bec:;
    {
        wr8(cpu->r[6] + + 0x57cu, cpu->r[3]);
    }
L_000d4bf0:;
    {
        vfp_sync_flags(cpu);
    }
L_000d4bf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d3f78;
        }
    }
L_000d4bf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d4bfc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d4c00:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d4c04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d4c08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4c0c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d4c10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4c14:;
    {
        cpu->r[14] = 0x000d4c18u; fn_000fd224(cpu);
    }
L_000d4c18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4c1c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d4c20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4170;
        }
    }
L_000d4c24:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d4c28:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d4c2c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d4c30:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d4c34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000d4c38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4c3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d4c40:;
    {
        cpu->r[14] = 0x000d4c44u; fn_000fd248(cpu);
    }
L_000d4c44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d4c48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d4c4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d4c50:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4c54:;
    {
        cpu->r[14] = 0x000d4c58u; fn_000979a0(cpu);
    }
L_000d4c58:;
    {
        cpu->r[14] = 0x000d4c5cu; fn_00093fc8(cpu);
    }
L_000d4c5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4c60:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4c64:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_000d4c68:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d4c6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d4c70:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d4c74:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d4c78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4c7c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d4c80:;
    {
        cpu->r[14] = 0x000d4c84u; fn_000fd200(cpu);
    }
L_000d4c84:;
    {
        goto L_000d4170;
    }
L_000d4c88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x620u);
    }
L_000d4c8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4c90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d450c;
        }
    }
L_000d4c94:;
    {
        cpu->r[6] = 0x0000173cu;
    }
L_000d4c98:;
    {
        cpu->r[3] = 0x00004224u;
    }
L_000d4c9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d4ca0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d4ca4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d4ca8:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d4cac:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_000d4cb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d451c;
        }
    }
L_000d4cb4:;
    {
        cpu->r[3] = 0x00001d74u;
    }
L_000d4cb8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d4cbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4cc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d451c;
        }
    }
L_000d4cc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001640u, 0, 0);
    }
L_000d4cc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000d4ccc:;
    {
        cpu->r[14] = 0x000d4cd0u; fn_0015d718(cpu);
    }
L_000d4cd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x000007d0u, 1, 1);
    }
L_000d4cd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d4ce8;
        }
    }
L_000d4cd8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000d4cdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d4ce0:;
    {
        cpu->r[1] = 0x00000017u;
    }
L_000d4ce4:;
    {
        cpu->r[14] = 0x000d4ce8u; fn_00161bec(cpu);
    }
L_000d4ce8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d4cec:;
    {
        goto L_000d451c;
    }
L_000d4cf0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d4cf4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d4cf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d4cfc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d4d00:;
    {
        cpu->r[14] = 0x000d4d04u; fn_0017128c(cpu);
    }
L_000d4d04:;
    {
        wr32(cpu->r[6] + + 0x5a4u, cpu->r[10]);
    }
L_000d4d08:;
    {
        goto L_000d3d20;
    }
L_000d4d0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4d10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4d14:;
    {
        cpu->r[14] = 0x000d4d18u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d4d18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4d1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d409c;
        }
    }
L_000d4d20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4d24:;
    {
        cpu->r[14] = 0x000d4d28u; fn_00094228(cpu);
    }
L_000d4d28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4d2c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4d30:;
    {
        cpu->r[14] = 0x000d4d34u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d4d34:;
    {
        goto L_000d409c;
    }
L_000d4d38:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d4d3c:;
    {
        cpu->r[1] = 0x0000006eu;
    }
L_000d4d40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d4d44:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d4d48:;
    {
        cpu->r[1] = 0x00008398u;
    }
L_000d4d4c:;
    {
        cpu->r[12] = 0x0000173cu;
    }
L_000d4d50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d4d54:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d4d58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d4d5c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4d60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_000d4d64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001eu, 0, 0);
    }
L_000d4d68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000d4d6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_000d4d70:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_000d4d74:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000d4d78:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d4d9c;
        }
    }
L_000d4d7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d4d80:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d4d84:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4d88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000d4d8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_000d4d90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000d4d94:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000d4d98:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000d4d9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000d4da0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000d4da4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d45b0;
        }
    }
L_000d4da8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d4dac:;
    {
        cpu->r[1] = 0x00008398u;
    }
L_000d4db0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d4db4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d4db8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d4dbc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d4dc0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d4dc4:;
    {
        goto L_000d45b0;
    }
L_000d4dc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000d4dcc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_000d4dd0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x580u, cpu->r[3]);
        }
    }
L_000d4dd4:;
    {
        goto L_000d4130;
    }
L_000d4dd8:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000d4ddc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d4de0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d4de4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4610;
        }
    }
L_000d4de8:;
    {
        cpu->r[2] = 0x0000672du;
    }
L_000d4dec:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d4df0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4df4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d4618;
        }
    }
L_000d4df8:;
    {
        goto L_000d4610;
    }
L_000d4dfc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d4e00:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000d4e04:;
    {
        cpu->r[14] = 0x000d4e08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d4e08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4068;
        }
    }
L_000d4e14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4e18:;
    {
        cpu->r[14] = 0x000d4e1cu; fn_00094228(cpu);
    }
L_000d4e1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4e20:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d4e24:;
    {
        cpu->r[14] = 0x000d4e28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d4e28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4e2c:;
    {
        goto L_000d4068;
    }
L_000d4e30:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d4e34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4e38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4e3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4e40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d4e44:;
    {
        cpu->r[14] = 0x000d4e48u; fn_000e7220(cpu);
    }
L_000d4e48:;
    {
        goto L_000d3c0c;
    }
L_000d4e4c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d4e50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4e54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4e58:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[2] = v;
    }
L_000d4e5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d4e60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4e64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d4e68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d4e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d4e70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d4e74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d4e78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x588u);
    }
L_000d4e7c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_000d4e80:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_000d4e84:;
    {
        cpu->r[14] = 0x000d4e88u; fn_000996bc(cpu);
    }
L_000d4e88:;
    {
        goto L_000d4240;
    }
L_000d4e8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d4e90:;
    {
        cpu->r[14] = 0x000d4e94u; fn_00161af0(cpu);
    }
L_000d4e94:;
    {
        goto L_000d4498;
    }
L_000d4e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d4e9c:;
    {
        cpu->r[14] = 0x000d4ea0u; fn_000d15b8(cpu);
    }
L_000d4ea0:;
    {
        goto L_000d3f00;
    }
L_000d4ea4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4ea8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d4eac:;
    {
        cpu->r[14] = 0x000d4eb0u; fn_00099b28(cpu);
    }
L_000d4eb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d4eb4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4eb8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000d4ebc:;
    {
        cpu->r[14] = 0x000d4ec0u; fn_000a2764(cpu);
    }
L_000d4ec0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d4ec4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d4ec8:;
    {
        cpu->r[1] = 0x000000bau;
    }
L_000d4ecc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000d4ed0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d4ed4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_000d4ed8:;
    {
        cpu->r[14] = 0x000d4edcu; fn_000fd288(cpu);
    }
L_000d4edc:;
    {
        goto L_000d4a4c;
    }
L_000d4ee0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4ee4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d4ee8:;
    {
        cpu->r[14] = 0x000d4eecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d4eec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4ef0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d40cc;
        }
    }
L_000d4ef4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d4ef8:;
    {
        cpu->r[14] = 0x000d4efcu; fn_00094228(cpu);
    }
L_000d4efc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d4f00:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d4f04:;
    {
        cpu->r[14] = 0x000d4f08u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d4f08:;
    {
        goto L_000d40cc;
    }
L_000d4f0c:;
    {
        cpu->r[3] = 0x000010dcu;
    }
L_000d4f10:;
    {
        cpu->r[14] = 0x00001684u;
    }
L_000d4f14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d4f18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d4f1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d4f20:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d4f24:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14cu);
    }
L_000d4f28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x150u);
    }
L_000d4f2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d4f30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d4f34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d4f38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d4f3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d4f40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d4f44:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d4f48:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d4f4c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000d4f50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_000d4f54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d4f58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d474c;
        }
    }
L_000d4f5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_000d4f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d474c;
        }
    }
L_000d4f64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d4f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d4f78;
        }
    }
L_000d4f6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d4f70:;
    {
        cpu->r[14] = 0x000d4f74u; fn_000b04ec(cpu);
    }
L_000d4f74:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4f78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d4f7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d4f80:;
    {
        cpu->r[14] = 0x000d4f84u; fn_00160bd8(cpu);
    }
L_000d4f84:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d4f88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d4f8c:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_000d4f90:;
    {
        cpu->r[0] = 0x000010dcu;
    }
L_000d4f94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d4f98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d4f9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000d4fa0:;
    {
        uint32_t v = cpu->r[3] | 0x00100000u; cpu->r[3] = v;
    }
L_000d4fa4:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000d4fa8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d4fac:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000d4fb0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_000d4fb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000d4fb8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d4fbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_000d4fc0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000d4fc4:;
    {
        wr32(cpu->r[2] + cpu->r[0], cpu->r[5]);
    }
L_000d4fc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000d4fcc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000d4fd0:;
    {
        goto L_000d46fc;
    }
L_000d4fd4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000d4fd8:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000d4fdc:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d4fe0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_000d4fe4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d4fe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d50fc;
        }
    }
L_000d4fec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d4ff0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d50fc;
        }
    }
L_000d4ff4:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000d4ff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d4ffc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d5000:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d5004:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000007cu, 0, 0);
    }
L_000d5008:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_000d500c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d5010:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_000d5014:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000d5018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d501c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000d5020:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d5024:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[1] + cpu->r[6], cpu->r[5]);
        }
    }
L_000d5028:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000d502c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d5014;
        }
    }
L_000d5030:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_000d5034:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000d5038:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d503c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d5040:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d5044:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d5048:;
    {
        goto L_000d4844;
    }
L_000d504c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d5050:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d5054:;
    {
        cpu->r[14] = 0x000d5058u; fn_0015d920(cpu);
    }
L_000d5058:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d505c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d5064:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5]);
        }
    }
L_000d5068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d47f8;
        }
    }
L_000d506c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d5070:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d5074:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d5078:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d507c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d5080:;
    {
        cpu->r[14] = 0x000d5084u; fn_0015d718(cpu);
    }
L_000d5084:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d5088:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d508c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d5090:;
    {
        cpu->r[14] = 0x000d5094u; fn_0015d718(cpu);
    }
L_000d5094:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d5098:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d509c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d50a0:;
    {
        cpu->r[14] = 0x000d50a4u; fn_000bcf10(cpu);
    }
L_000d50a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d50a8:;
    {
        cpu->r[14] = 0x000d50acu; fn_000bcf58(cpu);
    }
L_000d50ac:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d50b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d50b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d50b8:;
    {
        goto L_000d47f8;
    }
L_000d50bc:;
    {
        cpu->r[1] = rd32(0x000d50c4u + - 0x554u);
    }
L_000d50c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d50c4:;
    {
        cpu->r[12] = rd32(0x000d50ccu + - 0x558u);
    }
L_000d50c8:;
    {
        cpu->r[14] = 0x00001ecfu;
    }
L_000d50cc:;
    {
        cpu->r[2] = rd32(0x000d50d4u + - 0x55cu);
    }
L_000d50d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d50d8u, cpu->r[1], 0, 0);
    }
L_000d50d4:;
    {
        cpu->r[3] = rd32(0x000d50dcu + - 0x560u);
    }
L_000d50d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000d50e0u, cpu->r[12], 0, 0);
    }
L_000d50dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d50e4u, cpu->r[2], 0, 0);
    }
L_000d50e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000298u, 0, 0);
    }
L_000d50e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d50ecu, cpu->r[3], 0, 0);
    }
L_000d50e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d50ec:;
    {
        cpu->r[14] = 0x000d50f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d50f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d50f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_000d50f8:;
    {
        goto L_000d44b4;
    }
L_000d50fc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000d5100:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_000d5104:;
    {
        goto L_000d4844;
    }
L_000d5108:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d510c:;
    {
        cpu->r[14] = 0x000d5110u; fn_000bae3c(cpu);
    }
L_000d5110:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d5114:;
    {
        goto L_000d49a8;
    }
L_000d5118:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d511c:;
    {
        cpu->r[14] = 0x000d5120u; fn_000bae10(cpu);
    }
L_000d5120:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d5124:;
    {
        cpu->r[14] = 0x000d5128u; fn_000bae10(cpu);
    }
L_000d5128:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d512c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d5130:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d5134:;
    {
        cpu->r[14] = 0x000d5138u; fn_000bcf10(cpu);
    }
L_000d5138:;
    {
        goto L_000d4944;
    }
}

/* _ZN5Scene13UpdatePhysicsEv @ 000d513c (arm) */
void fn_000d513c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d513c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000d5140:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d5144:;
    {
        cpu->r[14] = 0x000d5148u; fn_000ddfc0(cpu);
    }
L_000d5148:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d514c:;
    {
        cpu->r[14] = 0x000d5150u; fn_000dd5b4(cpu);
    }
L_000d5150:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d5154:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5158:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d515c:;
    {
        cpu->r[14] = 0x000d5160u; fn_00096b88(cpu);
    }
L_000d5160:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d5164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d5174;
        }
    }
L_000d5168:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d516c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000d5170:;
    {
        return fn_000d3ba0(cpu);
    }
L_000d5174:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d5178:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_000d517c:;
    {
        return fn_000d37ac(cpu);
    }
}

/* _ZN5Scene15UpdateRaceStartEv @ 000d5180 (arm) */
void fn_000d5180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d5180:;
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
L_000d5184:;
    {
        cpu->r[6] = 0x00004334u;
    }
L_000d5188:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000d518c:;
    {
        cpu->r[5] = rd32(0x000d5194u + + 0x3c4u);
    }
L_000d5190:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000d5194:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d5198:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_000d519c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d51a4u, cpu->r[5], 0, 0);
    }
L_000d51a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d51a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d53bc;
        }
    }
L_000d51a8:;
    {
        cpu->r[14] = 0x000d51acu; fn_000bddf0(cpu);
    }
L_000d51ac:;
    {
        cpu->r[7] = 0x00004330u;
    }
L_000d51b0:;
    {
        cpu->r[14] = 0x000d51b4u; fn_0009b4d0(cpu);
    }
L_000d51b4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d51b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d51bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000d51c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003d4u, 1, 1);
    }
L_000d51c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000d5234;
        }
    }
L_000d51c8:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d51cc:;
    {
        cpu->r[6] = rd32(0x000d51d4u + + 0x388u);
    }
L_000d51d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d51d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d51d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d51dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5278;
        }
    }
L_000d51e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d51e4:;
    {
        cpu->r[14] = 0x000d51e8u; fn_000d513c(cpu);
    }
L_000d51e8:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000d51ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d51f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d51f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d51f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d53f8;
        }
    }
L_000d51fc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d5200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d5204:;
    {
        cpu->r[14] = 0x000d5208u; fn_000cdeb8(cpu);
    }
L_000d5208:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d520c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d5210:;
    {
        cpu->r[14] = 0x000d5214u; fn_000e56e0(cpu);
    }
L_000d5214:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d5218:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d521c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d5220:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d5224:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d5228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d53e4;
        }
    }
L_000d522c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d5230:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d5234u)) return;
    }
L_000d5234:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d5238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000d523c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5490;
        }
    }
L_000d5240:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000d5244:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_000d5248:;
    {
        cpu->r[14] = 0x000d524cu; fn_0009b4d0(cpu);
    }
L_000d524c:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d5250:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d5254:;
    {
        cpu->r[2] = 0x00004338u;
    }
L_000d5258:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d525c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d5260:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5264:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d5268:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d526c:;
    {
        cpu->r[6] = rd32(0x000d5274u + + 0x2e8u);
    }
L_000d5270:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000d5274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d51e0;
        }
    }
L_000d5278:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000d527c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d5280:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5284:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000d5288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d51e0;
        }
    }
L_000d528c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d5290:;
    {
        cpu->r[11] = 0x00008cbcu;
    }
L_000d5294:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5298:;
    {
        cpu->r[9] = 0x00008cc4u;
    }
L_000d529c:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d52a0:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d52a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d52a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d52ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d52b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d52b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000d52b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d52bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d52c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d52c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d52c8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d52cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000d52d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d5388;
        }
    }
L_000d52d4:;
    {
        cpu->r[1] = 0x00008cb8u;
    }
L_000d52d8:;
    {
        cpu->r[2] = 0x00008cc0u;
    }
L_000d52dc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000d52e0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d52e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d52e8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[5]);
    }
L_000d52ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_000d52f0:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_000d52f4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000d52f8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000d52fc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000d5300:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_000d5304:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
        }
    }
L_000d5308:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
        }
    }
L_000d530c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d5310:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
        }
    }
L_000d5314:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000d5318:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_000d531c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000d5320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d536c;
        }
    }
L_000d5324:;
    {
        cpu->r[3] = 0x0000167cu;
    }
L_000d5328:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[10]);
    }
L_000d532c:;
    {
        cpu->r[3] = 0x00001674u;
    }
L_000d5330:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[10]);
    }
L_000d5334:;
    {
        cpu->r[3] = 0x0000176cu;
    }
L_000d5338:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[10]);
    }
L_000d533c:;
    {
        cpu->r[14] = 0x000d5340u; fn_0009b4d0(cpu);
    }
L_000d5340:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x364u);
    }
L_000d5344:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d5348:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_000d534c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[0]);
    }
L_000d5350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d536c;
        }
    }
L_000d5354:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x2b0u);
    }
L_000d5358:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_000d535c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d5360:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_000d5364:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000d5368:;
    {
        wr32(cpu->r[7] + + 0x364u, cpu->r[3]);
    }
L_000d536c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d5370:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d5374:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d5378:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000d537c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d52fc;
        }
    }
L_000d5380:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5384:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d5388:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d538c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00001640u, 0, 0);
    }
L_000d5390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d5394:;
    {
        cpu->r[14] = 0x000d5398u; fn_0015d718(cpu);
    }
L_000d5398:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d539c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d53a0:;
    {
        cpu->r[2] = 0x00004090u;
    }
L_000d53a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d53a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d53ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000d53b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d53b4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d53b8:;
    {
        goto L_000d51e0;
    }
L_000d53bc:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000d53c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d53c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d53c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d53cc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_000d53d0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_000d53d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d53d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5408;
        }
    }
L_000d53dc:;
    {
        cpu->r[6] = rd32(0x000d53e4u + + 0x178u);
    }
L_000d53e0:;
    {
        goto L_000d51d8;
    }
L_000d53e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d53e8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d53ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d53f0:;
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
L_000d53f4:;
    {
        return fn_000de340(cpu);
    }
L_000d53f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d53fc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d5400:;
    {
        cpu->r[14] = 0x000d5404u; fn_000d1950(cpu);
    }
L_000d5404:;
    {
        goto L_000d51fc;
    }
L_000d5408:;
    {
        cpu->r[6] = rd32(0x000d5410u + + 0x14cu);
    }
L_000d540c:;
    {
        cpu->r[2] = 0x00004334u;
    }
L_000d5410:;
    {
        cpu->r[1] = 0x00004338u;
    }
L_000d5414:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d5418:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d541c:;
    {
        cpu->r[7] = 0x0000432cu;
    }
L_000d5420:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d5424:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d5428:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d542c:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d5430:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_000d5434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000d5438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d543c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d5440:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x418u);
    }
L_000d5444:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d5448:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d544c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000d5450:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d51d8;
        }
    }
L_000d5454:;
    {
        cpu->r[14] = 0x000d5458u; fn_0009b4d0(cpu);
    }
L_000d5458:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d545c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d5460:;
    {
        cpu->r[3] = 0x00004330u;
    }
L_000d5464:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d5468:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d546c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d5470:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d5474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d5478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d547c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d5480:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d5484:;
    {
        cpu->r[14] = 0x000d5488u; fn_0015eda0(cpu);
    }
L_000d5488:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d548c:;
    {
        goto L_000d51d8;
    }
L_000d5490:;
    {
        cpu->r[1] = 0x0000432cu;
    }
L_000d5494:;
    {
        cpu->r[3] = 0x00004338u;
    }
L_000d5498:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d549c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d54a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d54a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d54a8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000d54ac:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_000d54b0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000d54b4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d54b8:;
    {
        cpu->r[14] = 0x000d54bcu; fn_0009b4d0(cpu);
    }
L_000d54bc:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000d54c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d54c4:;
    {
        cpu->r[14] = 0x000d54c8u; fn_000bddf0(cpu);
    }
L_000d54c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_000d54cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000d54d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_000d54d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x7cu);
    }
L_000d54d8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d54dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d54e4;
        }
    }
L_000d54e0:;
    {
        cpu->r[14] = 0x000d54e4u; fn_0015eda0(cpu);
    }
L_000d54e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000020u, 1, 1);
    }
L_000d54e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d54c8;
        }
    }
L_000d54ec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d54f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d54f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d54f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d54fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d5500:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d5504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d5508:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d550c:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_000d5510:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d5514:;
    {
        cpu->r[3] = 0x000009c4u;
    }
L_000d5518:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d551c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d51c8;
        }
    }
L_000d5520:;
    {
        cpu->r[6] = rd32(0x000d5528u + + 0x34u);
    }
L_000d5524:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d5528:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d552c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d5530:;
    {
        cpu->r[1] = 0x0000007du;
    }
L_000d5534:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d5538:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000d553c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000d5540:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d5544:;
    {
        cpu->r[14] = 0x000d5548u; fn_000fd248(cpu);
    }
L_000d5548:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d554c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d5550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5554:;
    {
        goto L_000d51d8;
    }
}

/* _ZN5Scene27RenderAchievementsInterfaceEv @ 000d5560 (arm) */
void fn_000d5560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d5560:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000d5564:;
    {
        cpu->r[4] = rd32(0x000d556cu + + 0x88u);
    }
L_000d5568:;
    {
        cpu->r[3] = rd32(0x000d5570u + + 0x88u);
    }
L_000d556c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d5570:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d5578u, cpu->r[4], 0, 0);
    }
L_000d5574:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5578:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d557c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d5580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d55b0;
        }
    }
L_000d5584:;
    {
        cpu->r[5] = rd32(0x000d558cu + + 0x70u);
    }
L_000d5588:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d558c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5590:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5594:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d5598:;
    {
        cpu->r[14] = 0x000d559cu; fn_00096a08(cpu);
    }
L_000d559c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d55a0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d55a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d55a8:;
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
L_000d55ac:;
    {
        return fn_0018aa44(cpu);
    }
L_000d55b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d55b4:;
    {
        cpu->r[14] = 0x000d55b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d55b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d55bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5584;
        }
    }
L_000d55c0:;
    {
        cpu->r[5] = rd32(0x000d55c8u + + 0x34u);
    }
L_000d55c4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d55c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d55cc:;
    {
        cpu->r[14] = 0x000d55d0u; fn_0018aa20(cpu);
    }
L_000d55d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d55d4:;
    {
        cpu->r[14] = 0x000d55d8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d55d8:;
    {
        cpu->r[3] = rd32(0x000d55e0u + + 0x20u);
    }
L_000d55dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d55e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d55e4:;
    {
        cpu->r[3] = rd32(0x000d55ecu + + 0x18u);
    }
L_000d55e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d55ec:;
    {
        cpu->r[14] = 0x000d55f0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d55f0:;
    {
        goto L_000d5588;
    }
}

/* _ZN5Scene22RenderMusicBoxElementsEv @ 000d5608 (arm) */
void fn_000d5608(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d5608:;
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
L_000d560c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000d5610:;
    {
        cpu->r[4] = rd32(0x000d5618u + + 0x438u);
    }
L_000d5614:;
    {
        cpu->r[8] = rd32(0x000d561cu + + 0x438u);
    }
L_000d5618:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000134u, 1, 0);
    }
L_000d561c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d5624u, cpu->r[4], 0, 0);
    }
L_000d5620:;
    {
        cpu->r[5] = rd32(0x000d5628u + + 0x430u);
    }
L_000d5624:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d5628:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d562c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d5630:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000d5634:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d5638:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d563c:;
    {
        wr32(cpu->r[13] + + 0x12cu, cpu->r[3]);
    }
L_000d5640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d56f0;
        }
    }
L_000d5644:;
    {
        cpu->r[7] = rd32(0x000d564cu + + 0x410u);
    }
L_000d5648:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d564c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d5650:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d5654:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d5658:;
    {
        cpu->r[14] = 0x000d565cu; fn_0018aa44(cpu);
    }
L_000d565c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d5660:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d5664:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d5668:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_000d566c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5994;
        }
    }
L_000d5670:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d5674:;
    {
        cpu->r[1] = 0x00000043u;
    }
L_000d5678:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d567c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d5680:;
    {
        cpu->r[14] = 0x000d5684u; fn_00096a08(cpu);
    }
L_000d5684:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d5688:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d568c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d5690:;
    {
        cpu->r[14] = 0x000d5694u; fn_0018aa44(cpu);
    }
L_000d5694:;
    {
        cpu->r[3] = rd32(0x000d569cu + + 0x3c4u);
    }
L_000d5698:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d569c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d56a0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d56a4:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000d56a8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d56ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000d56b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000d56b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d56b8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d56bc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d56c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d56c4:;
    {
        cpu->r[14] = 0x000d56c8u; fn_000ec554(cpu);
    }
L_000d56c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d56cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5734;
        }
    }
L_000d56d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d56d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x12cu);
    }
L_000d56d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d56dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d56e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d5a48;
        }
    }
L_000d56e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_000d56e8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000d56ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d56f0u)) return;
    }
L_000d56f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d56f4:;
    {
        cpu->r[14] = 0x000d56f8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d56f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d56fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5644;
        }
    }
L_000d5700:;
    {
        cpu->r[7] = rd32(0x000d5708u + + 0x354u);
    }
L_000d5704:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d5708:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d570c:;
    {
        cpu->r[14] = 0x000d5710u; fn_0018aa20(cpu);
    }
L_000d5710:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d5714:;
    {
        cpu->r[14] = 0x000d5718u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d5718:;
    {
        cpu->r[3] = rd32(0x000d5720u + + 0x344u);
    }
L_000d571c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d5720:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5724:;
    {
        cpu->r[3] = rd32(0x000d572cu + + 0x33cu);
    }
L_000d5728:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d572c:;
    {
        cpu->r[14] = 0x000d5730u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d5730:;
    {
        goto L_000d5648;
    }
L_000d5734:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5738:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d573c:;
    {
        cpu->r[14] = 0x000d5740u; fn_000ec44c(cpu);
    }
L_000d5740:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5744:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0]);
    }
L_000d5748:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d574c:;
    {
        cpu->r[14] = 0x000d5750u; fn_000ec44c(cpu);
    }
L_000d5750:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5754:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000d5758:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d575c:;
    {
        cpu->r[14] = 0x000d5760u; fn_000ec44c(cpu);
    }
L_000d5760:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5764:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_000d5768:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d576c:;
    {
        cpu->r[14] = 0x000d5770u; fn_000ec44c(cpu);
    }
L_000d5770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000d5774:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000d5778:;
    {
        vfp_sync_flags(cpu);
    }
L_000d577c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d59f4;
        }
    }
L_000d5780:;
    {
        vfp_vsub(cpu, 17, 17, 18);
    }
L_000d5784:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000d5788:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000d578c:;
    {
        cpu->r[10] = rd32(0x000d5794u + + 0x2d8u);
    }
L_000d5790:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000d5794:;
    {
        cpu->r[14] = 0x000d5798u; imp_glEnable(cpu); /* glEnable */
    }
L_000d5798:;
    {
        cpu->r[2] = rd32(0x000d57a0u + + 0x2d0u);
    }
L_000d579c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d57a0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000d57a4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d57a8:;
    {
        cpu->r[14] = 0x000d57acu; fn_0012f780(cpu);
    }
L_000d57ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d57b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000174u, 0, 0);
    }
L_000d57b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_000d57b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d57bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d57c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 0);
    }
L_000d57c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d57c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x000000d3u;
        }
    }
L_000d57cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d59d0;
        }
    }
L_000d57d0:;
    {
        cpu->r[14] = rd32(0x000d57d8u + + 0x29cu);
    }
L_000d57d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x000000b9u, 0, 0);
    }
L_000d57d8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d57dc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000d57e0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000d57e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d57e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000d57ec:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000d57f0:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_000d57f4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_000d57f8:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_000d57fc:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000d5800:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d5804:;
    {
        cpu->r[14] = 0x000d5808u; fn_0012fa2c(cpu);
    }
L_000d5808:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000d580c:;
    {
        cpu->r[14] = 0x000d5810u; fn_0012f780(cpu);
    }
L_000d5810:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_000d5814:;
    {
        cpu->r[1] = 0x0000002bu;
    }
L_000d5818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x000000a5u, 0, 0);
    }
L_000d581c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5820:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d5824:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d5828:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d582c:;
    {
        cpu->r[14] = 0x000d5830u; fn_000ad8a0(cpu);
    }
L_000d5830:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000d5834:;
    {
        cpu->r[14] = 0x000d5838u; fn_0012f780(cpu);
    }
L_000d5838:;
    {
        cpu->r[1] = rd32(0x000d5840u + + 0x238u);
    }
L_000d583c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000d5840:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d5844:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d584cu, cpu->r[1], 0, 0);
    }
L_000d5848:;
    {
        cpu->r[14] = 0x000d584cu; imp_strncpy(cpu); /* strncpy */
    }
L_000d584c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d5850:;
    {
        cpu->r[14] = 0x000d5854u; imp_strlen(cpu); /* strlen */
    }
L_000d5854:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000d5858:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d585c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000d5860:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000d5864:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d5868:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000d586c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d5870:;
    {
        cpu->r[14] = 0x000d5874u; fn_000aadd4(cpu);
    }
L_000d5874:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d5878:;
    {
        sub_flags(cpu, cpu->r[1], 0x000000a0u, 1, 1);
    }
L_000d587c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d59e0;
        }
    }
L_000d5880:;
    {
        cpu->r[2] = 0x00001b48u;
    }
L_000d5884:;
    {
        cpu->r[3] = 0x0000ffb0u;
    }
L_000d5888:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d588c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_000d5890:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000d5894:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d5898:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_000d589c:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000d58a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000d58a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000d58a8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
        }
    }
L_000d58ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d58b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000194u, 0, 0);
    }
L_000d58b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d58b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d58bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d58c0:;
    {
        cpu->r[9] = 0x00001b48u;
    }
L_000d58c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d58c8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d58cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000d58d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d58d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d58d8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000d58dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 0);
    }
L_000d58e0:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_000d58e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d58e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d58ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000b9u, 1, 0);
        }
    }
L_000d58f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x000000bfu;
        }
    }
L_000d58f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
        }
    }
L_000d58f8:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000d58fc:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_000d5900:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000000d7u, 0, 0);
    }
L_000d5904:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d5908:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_000d590c:;
    {
        cpu->r[14] = 0x000d5910u; fn_0012fa2c(cpu);
    }
L_000d5910:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d5914:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_000d5918:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000d591c:;
    {
        cpu->r[14] = 0x000d5920u; fn_0012f780(cpu);
    }
L_000d5920:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000d5924:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5928:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d592c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000d5930:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d5934:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d5938:;
    {
        cpu->r[3] = 0x00000013u;
    }
L_000d593c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d5940:;
    {
        cpu->r[14] = 0x000d5944u; fn_000ad83c(cpu);
    }
L_000d5944:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_000d5948:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d594c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d5a18;
        }
    }
L_000d5950:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5954:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d5958:;
    {
        cpu->r[14] = 0x000d595cu; fn_0012f780(cpu);
    }
L_000d595c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d5960:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d5964:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d5968:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000d596c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d5970:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000d5974:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_000d5978:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000d597c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d5980:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d5984:;
    {
        cpu->r[14] = 0x000d5988u; fn_0012fa2c(cpu);
    }
L_000d5988:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000d598c:;
    {
        cpu->r[14] = 0x000d5990u; imp_glDisable(cpu); /* glDisable */
    }
L_000d5990:;
    {
        goto L_000d56d0;
    }
L_000d5994:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d5998:;
    {
        cpu->r[14] = 0x000d599cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d599c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d59a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5670;
        }
    }
L_000d59a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d59a8:;
    {
        cpu->r[14] = 0x000d59acu; fn_0018aa20(cpu);
    }
L_000d59ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d59b0:;
    {
        cpu->r[14] = 0x000d59b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d59b4:;
    {
        cpu->r[3] = rd32(0x000d59bcu + + 0xa8u);
    }
L_000d59b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d59bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d59c0:;
    {
        cpu->r[3] = rd32(0x000d59c8u + + 0xa0u);
    }
L_000d59c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d59c8:;
    {
        cpu->r[14] = 0x000d59ccu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d59cc:;
    {
        goto L_000d5670;
    }
L_000d59d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000c3u, 1, 0);
    }
L_000d59d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000d59d8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000d56d0;
        }
    }
L_000d59dc:;
    {
        goto L_000d57d0;
    }
L_000d59e0:;
    {
        cpu->r[3] = 0x00001b48u;
    }
L_000d59e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d59e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d59ec:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_000d59f0:;
    {
        goto L_000d58ac;
    }
L_000d59f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d59f8:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d59fc:;
    {
        cpu->r[14] = 0x000d5a00u; fn_000ec44c(cpu);
    }
L_000d5a00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d5a08u + + 0x44u);
    }
L_000d5a04:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000d5a08:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000d5a0c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d5a10:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d5a14:;
    {
        goto L_000d578c;
    }
L_000d5a18:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_000d5a1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d5a20:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000d5a24:;
    {
        cpu->r[3] = 0x00000013u;
    }
L_000d5a28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000d5a2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5a30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000050u, 0, 0);
    }
L_000d5a34:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_000d5a38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_000d5a3c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d5a40:;
    {
        cpu->r[14] = 0x000d5a44u; fn_000ad83c(cpu);
    }
L_000d5a44:;
    {
        goto L_000d5950;
    }
L_000d5a48:;
    {
        cpu->r[14] = 0x000d5a4cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
}

/* _ZN5Scene21DrawGame_HUD_CutSceneEiiPtb @ 000d5a7c (arm) */
void fn_000d5a7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d5a7c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d5a80:;
    {
        cpu->r[1] = 0x00001ca0u;
    }
L_000d5a84:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d5a88:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d5a8c:;
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
L_000d5a90:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d5a94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d5a98:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000d5a9c:;
    {
        cpu->r[4] = rd32(0x000d5aa4u + + 0x1c0u);
    }
L_000d5aa0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_000d5aa4:;
    {
        cpu->r[7] = rd32(0x000d5aacu + + 0x1bcu);
    }
L_000d5aa8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000d5aac:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d5ab4u, cpu->r[4], 0, 0);
    }
L_000d5ab0:;
    {
        cpu->r[8] = rd32(0x000d5ab8u + + 0x1b4u);
    }
L_000d5ab4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d5ab8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d5abc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d5ac0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d5ac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d5ac8:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_000d5acc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d5ad0:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000d5ad4:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000d5ad8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d5adc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_000d5ae0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = 0x00000032u;
        }
    }
L_000d5ae4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000023u;
        }
    }
L_000d5ae8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d5aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5bf4;
        }
    }
L_000d5af0:;
    {
        cpu->r[3] = rd32(0x000d5af8u + + 0x178u);
    }
L_000d5af4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5af8:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000d5afc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d5b00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5ba8;
        }
    }
L_000d5b04:;
    {
        cpu->r[10] = rd32(0x000d5b0cu + + 0x168u);
    }
L_000d5b08:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d5b0c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d5b10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5b14:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d5b18:;
    {
        cpu->r[14] = 0x000d5b1cu; fn_00096a08(cpu);
    }
L_000d5b1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d5b20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d5b24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5b28:;
    {
        cpu->r[14] = 0x000d5b2cu; fn_0018aa44(cpu);
    }
L_000d5b2c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d5b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5c2c;
        }
    }
L_000d5b34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d5b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5ba0;
        }
    }
L_000d5b3c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d5b40:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000d5b44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5b48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d5b4c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d5b50:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d5b54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 0);
    }
L_000d5b58:;
    {
        cpu->r[14] = 0x000d5b5cu; fn_000a9818(cpu);
    }
L_000d5b5c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d5b60:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d5b64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5b68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d5b6c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d5b70:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_000d5b74:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d5b78:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d5b7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d5b80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d5b84:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000d5b88:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[9], 3, 1u, &shc), 1, 0);
    }
L_000d5b8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d5b90:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000d5b94:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d5b98:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d5b9c:;
    {
        cpu->r[14] = 0x000d5ba0u; fn_000ac4bc(cpu);
    }
L_000d5ba0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_000d5ba4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d5ba8u)) return;
    }
L_000d5ba8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d5bac:;
    {
        cpu->r[14] = 0x000d5bb0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d5bb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d5bb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5b04;
        }
    }
L_000d5bb8:;
    {
        cpu->r[10] = rd32(0x000d5bc0u + + 0xb4u);
    }
L_000d5bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5bc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d5bc4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000d5bc8:;
    {
        cpu->r[14] = 0x000d5bccu; fn_0018aa20(cpu);
    }
L_000d5bcc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d5bd0:;
    {
        cpu->r[14] = 0x000d5bd4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d5bd4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d5bd8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d5bdc:;
    {
        cpu->r[3] = rd32(0x000d5be4u + + 0x94u);
    }
L_000d5be0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5be4:;
    {
        cpu->r[3] = rd32(0x000d5becu + + 0x90u);
    }
L_000d5be8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5bec:;
    {
        cpu->r[14] = 0x000d5bf0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d5bf0:;
    {
        goto L_000d5b08;
    }
L_000d5bf4:;
    {
        cpu->r[1] = rd32(0x000d5bfcu + + 0x84u);
    }
L_000d5bf8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d5bfc:;
    {
        cpu->r[12] = rd32(0x000d5c04u + + 0x80u);
    }
L_000d5c00:;
    {
        cpu->r[14] = 0x00003fafu;
    }
L_000d5c04:;
    {
        cpu->r[2] = rd32(0x000d5c0cu + + 0x7cu);
    }
L_000d5c08:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d5c10u, cpu->r[1], 0, 0);
    }
L_000d5c0c:;
    {
        cpu->r[3] = rd32(0x000d5c14u + + 0x78u);
    }
L_000d5c10:;
    {
        cpu->r[12] = add_flags(cpu, 0x000d5c18u, cpu->r[12], 0, 0);
    }
L_000d5c14:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d5c1cu, cpu->r[2], 0, 0);
    }
L_000d5c18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_000d5c1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d5c24u, cpu->r[3], 0, 0);
    }
L_000d5c20:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d5c24:;
    {
        cpu->r[14] = 0x000d5c28u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d5c28:;
    {
        goto L_000d5af0;
    }
L_000d5c2c:;
    {
        cpu->r[1] = rd32(0x000d5c34u + + 0x5cu);
    }
L_000d5c30:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d5c34:;
    {
        cpu->r[12] = rd32(0x000d5c3cu + + 0x58u);
    }
L_000d5c38:;
    {
        cpu->r[14] = 0x00003fb1u;
    }
L_000d5c3c:;
    {
        cpu->r[2] = rd32(0x000d5c44u + + 0x54u);
    }
L_000d5c40:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d5c48u, cpu->r[1], 0, 0);
    }
L_000d5c44:;
    {
        cpu->r[3] = rd32(0x000d5c4cu + + 0x50u);
    }
L_000d5c48:;
    {
        cpu->r[12] = add_flags(cpu, 0x000d5c50u, cpu->r[12], 0, 0);
    }
L_000d5c4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d5c54u, cpu->r[2], 0, 0);
    }
L_000d5c50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002a4u, 0, 0);
    }
L_000d5c54:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d5c5cu, cpu->r[3], 0, 0);
    }
L_000d5c58:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d5c5c:;
    {
        cpu->r[14] = 0x000d5c60u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d5c60:;
    {
        goto L_000d5b34;
    }
}

/* _ZN5Scene12DrawNitroBarEb @ 000d5ca0 (arm) */
void fn_000d5ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d5ca0:;
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
L_000d5ca4:;
    {
        cpu->r[4] = rd32(0x000d5cacu + + 0x348u);
    }
L_000d5ca8:;
    {
        cpu->r[3] = rd32(0x000d5cb0u + + 0x348u);
    }
L_000d5cac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000d5cb0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d5cb8u, cpu->r[4], 0, 0);
    }
L_000d5cb4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d5cb8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5cbc:;
    {
        cpu->r[3] = rd32(0x000d5cc4u + + 0x338u);
    }
L_000d5cc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5cc4:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d5cc8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d5ccc:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_000d5cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5f40;
        }
    }
L_000d5cd4:;
    {
        cpu->r[6] = rd32(0x000d5cdcu + + 0x324u);
    }
L_000d5cd8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d5cdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d5ce0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d5ce4:;
    {
        cpu->r[8] = 0x00001b38u;
    }
L_000d5ce8:;
    {
        cpu->r[14] = 0x000d5cecu; fn_0018aa44(cpu);
    }
L_000d5cec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d5cf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5cf4:;
    {
        cpu->r[10] = rd32(0x000d5cfcu + + 0x308u);
    }
L_000d5cf8:;
    {
        cpu->r[11] = rd32(0x000d5d00u + + 0x308u);
    }
L_000d5cfc:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d5d00:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d5d04:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d5d08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d5d0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d5d10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d5d14:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d5d18:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d5d1c:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000d5d20:;
    {
        cpu->r[14] = 0x000d5d24u; imp_glEnable(cpu); /* glEnable */
    }
L_000d5d24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d5d28:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5d2c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d5d30:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000d5d34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5d38:;
    {
        cpu->r[14] = rd32(cpu->r[3]);
    }
L_000d5d3c:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000d5d40:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d5d44:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d5d48:;
    {
        cpu->r[14] = 0x000d5d4cu; fn_0012fa2c(cpu);
    }
L_000d5d4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5d50:;
    {
        cpu->r[14] = 0x000d5d54u; fn_0012f780(cpu);
    }
L_000d5d54:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000d5d58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000d5d5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d5d60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d5d64:;
    {
        cpu->r[14] = 0x000d5d68u; fn_000a8d10(cpu);
    }
L_000d5d68:;
    {
        cpu->r[3] = 0x000018e4u;
    }
L_000d5d6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000d5d70:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3]);
    }
L_000d5d74:;
    {
        cpu->r[3] = 0x000018f8u;
    }
L_000d5d78:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,10);
    }
L_000d5d7c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_000d5d80:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000d5d84:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000d5d88:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000d5d8c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000d5d90:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_000d5d94:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 5) / *vfp_d(cpu, 7);
    }
L_000d5d98:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_000d5d9c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_000d5da0:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000d5da4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d5da8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d5dac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5f84;
        }
    }
L_000d5db0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000d5db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5f9c;
        }
    }
L_000d5db8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d5dbc:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_000d5dc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d5dc4:;
    {
        cpu->r[14] = 0x000d5dc8u; fn_000bab50(cpu);
    }
L_000d5dc8:;
    {
        cpu->r[2] = rd32(0x000d5dd0u + + 0x23cu);
    }
L_000d5dcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d5dd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d5dd4:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[0]);
    }
L_000d5dd8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d5ddc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000d5de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5fe8;
        }
    }
L_000d5de4:;
    {
        cpu->r[9] = rd32(0x000d5decu + + 0x224u);
    }
L_000d5de8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000002u;
        }
    }
L_000d5dec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d5df0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_000d5df4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000d5df8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d5dfc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[1], cpu->r[12]);
        }
    }
L_000d5e00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5e04:;
    {
        cpu->r[2] = 0x0000006eu;
    }
L_000d5e08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d5e0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5e10:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d5e14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d5e18:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 0);
    }
L_000d5e1c:;
    {
        cpu->r[14] = 0x000d5e20u; fn_0012fa2c(cpu);
    }
L_000d5e20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5e24:;
    {
        cpu->r[14] = 0x000d5e28u; fn_0012f780(cpu);
    }
L_000d5e28:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_000d5e2c:;
    {
        cpu->r[3] = 0x00001b38u;
    }
L_000d5e30:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d5e34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000d5e38:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d5e3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d5e40:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d5e44:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000d5e48:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d5e90;
        }
    }
L_000d5e4c:;
    {
        cpu->r[3] = rd32(0x000d5e54u + + 0x1c0u);
    }
L_000d5e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5e54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d5e58:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_000d5e5c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000d5e60:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 30u, &shc); cpu->r[1] = v;
    }
L_000d5e64:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[2] = v;
    }
L_000d5e68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000d5e6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d5e70:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[0] = v;
    }
L_000d5e74:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000d5e78:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000d5e7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000d5e80:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000d5e84:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = sub_flags(cpu, 0x0000000fu, cpu->r[2], 1, 0);
        }
    }
L_000d5e88:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000du, 0, 0);
        }
    }
L_000d5e8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 20u, &shc); cpu->r[2] = v;
    }
L_000d5e90:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d5e94:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_000d5e98:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000d5e9c:;
    {
        cpu->r[3] = 0x0000006eu;
    }
L_000d5ea0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d5ea4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000d5ea8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000d5eac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000d5eb0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000058u, 1, 0);
    }
L_000d5eb4:;
    {
        cpu->r[14] = 0x000d5eb8u; fn_000ad8a0(cpu);
    }
L_000d5eb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5ebc:;
    {
        cpu->r[14] = 0x000d5ec0u; fn_0012f780(cpu);
    }
L_000d5ec0:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x48u);
    }
L_000d5ec4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d5ec8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d5ecc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d5ed0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000d5ed4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_000d5ed8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5edc:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[14]);
    }
L_000d5ee0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d5ee4:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[14]);
    }
L_000d5ee8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d5eec:;
    {
        cpu->r[14] = 0x000d5ef0u; fn_0012fa2c(cpu);
    }
L_000d5ef0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5ef4:;
    {
        cpu->r[14] = 0x000d5ef8u; fn_0012f780(cpu);
    }
L_000d5ef8:;
    {
        cpu->r[0] = 0x00000c11u;
    }
L_000d5efc:;
    {
        cpu->r[14] = 0x000d5f00u; imp_glDisable(cpu); /* glDisable */
    }
L_000d5f00:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d5f04:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d5f08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000d5f0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5f38;
        }
    }
L_000d5f10:;
    {
        cpu->r[3] = rd32(0x000d5f18u + + 0xfcu);
    }
L_000d5f14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5f18:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d5f1c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_000d5f20:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 31u, &shc); cpu->r[3] = v;
    }
L_000d5f24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d5f28:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_000d5f2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000d5f30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000d5f34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d5fb0;
        }
    }
L_000d5f38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d5f3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d5f40u)) return;
    }
L_000d5f40:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d5f44:;
    {
        cpu->r[14] = 0x000d5f48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d5f48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d5f4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d5cd4;
        }
    }
L_000d5f50:;
    {
        cpu->r[6] = rd32(0x000d5f58u + + 0xa8u);
    }
L_000d5f54:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d5f58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d5f5c:;
    {
        cpu->r[14] = 0x000d5f60u; fn_0018aa20(cpu);
    }
L_000d5f60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d5f64:;
    {
        cpu->r[14] = 0x000d5f68u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d5f68:;
    {
        cpu->r[3] = rd32(0x000d5f70u + + 0xa8u);
    }
L_000d5f6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d5f70:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5f74:;
    {
        cpu->r[3] = rd32(0x000d5f7cu + + 0xa0u);
    }
L_000d5f78:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d5f7c:;
    {
        cpu->r[14] = 0x000d5f80u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d5f80:;
    {
        goto L_000d5cd8;
    }
L_000d5f84:;
    {
        cpu->r[2] = rd32(0x000d5f8cu + + 0x80u);
    }
L_000d5f88:;
    {
        wr32(cpu->r[7] + cpu->r[8], cpu->r[3]);
    }
L_000d5f8c:;
    {
        cpu->r[9] = rd32(0x000d5f94u + + 0x7cu);
    }
L_000d5f90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d5f94:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d5f98:;
    {
        goto L_000d5e00;
    }
L_000d5f9c:;
    {
        cpu->r[2] = rd32(0x000d5fa4u + + 0x68u);
    }
L_000d5fa0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d5fa4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d5fa8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d5fac:;
    {
        goto L_000d5ddc;
    }
L_000d5fb0:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000d5fb4:;
    {
        cpu->r[3] = 0x0000006eu;
    }
L_000d5fb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d5fbc:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_000d5fc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000058u, 1, 0);
    }
L_000d5fc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000d5fc8:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000d5fcc:;
    {
        cpu->r[14] = 0x000d5fd0u; fn_000ad8a0(cpu);
    }
L_000d5fd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d5fd4:;
    {
        cpu->r[14] = 0x000d5fd8u; fn_0012f780(cpu);
    }
L_000d5fd8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d5fdc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d5fe0:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_000d5fe4:;
    {
        goto L_000d5f38;
    }
L_000d5fe8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d5fec:;
    {
        cpu->r[9] = rd32(0x000d5ff4u + + 0x1cu);
    }
L_000d5ff0:;
    {
        goto L_000d5e00;
    }
}

/* _ZN5Scene21MP_InitSimulatedPanelEPt @ 000d6020 (arm) */
void fn_000d6020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d6020:;
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
L_000d6024:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d6028:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00064000u, 0, 0);
    }
L_000d602c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000d6030:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000003e8u, 0, 0);
    }
L_000d6034:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_000d6038:;
    {
        cpu->r[14] = 0x000d603cu; fn_000ae160(cpu);
    }
L_000d603c:;
    {
        cpu->r[0] = 0x000043dcu;
    }
L_000d6040:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d6044:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6048:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d604c:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_000d6050:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000d6054:;
    {
        cpu->r[4] = rd32(0x000d605cu + + 0x2acu);
    }
L_000d6058:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d605c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d6060:;
    {
        cpu->r[14] = 0x000d6064u; fn_000eaac4(cpu);
    }
L_000d6064:;
    {
        cpu->r[0] = 0x000043e0u;
    }
L_000d6068:;
    {
        cpu->r[7] = rd32(0x000d6070u + + 0x29cu);
    }
L_000d606c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d6070:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6074:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d607cu, cpu->r[4], 0, 0);
    }
L_000d6078:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d607c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000d6080:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_000d6084:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d6088:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d608c:;
    {
        cpu->r[14] = 0x000d6090u; fn_000eaac4(cpu);
    }
L_000d6090:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d6094:;
    {
        cpu->r[3] = 0x000043e4u;
    }
L_000d6098:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d609c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d60a0:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000d60a4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000d60a8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d60ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6288;
        }
    }
L_000d60b0:;
    {
        cpu->r[6] = rd32(0x000d60b8u + + 0x258u);
    }
L_000d60b4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d60b8:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_000d60bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d60c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000d60c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d60c8:;
    {
        cpu->r[14] = 0x000d60ccu; fn_0018aa44(cpu);
    }
L_000d60cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d60d0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d60d4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d60d8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d60dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d60e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d60e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d60e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d60ec:;
    {
        cpu->r[14] = 0x000d60f0u; fn_000a8a2c(cpu);
    }
L_000d60f0:;
    {
        cpu->r[1] = rd32(0x000d60f8u + + 0x21cu);
    }
L_000d60f4:;
    {
        cpu->r[2] = 0x00004be8u;
    }
L_000d60f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d60fc:;
    {
        cpu->r[3] = 0x00004becu;
    }
L_000d6100:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d6104:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d6108:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d610c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d6110:;
    {
        cpu->r[1] = rd32(0x000d6118u + + 0x200u);
    }
L_000d6114:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d6118:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d611c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d6120:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_000d6124:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d6128:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000d612c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d6130:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_000d6134:;
    {
        cpu->r[12] = rd32(cpu->r[11]);
    }
L_000d6138:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_000d613c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_000d6140:;
    {
        { uint32_t v = cpu->r[12] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6144:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_000d6148:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_000d614c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000d6150:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000d6154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d62cc;
        }
    }
L_000d6158:;
    {
        cpu->r[3] = rd32(0x000d6160u + + 0x1bcu);
    }
L_000d615c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d6160:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6164:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d6168:;
    {
        cpu->r[14] = 0x000d616cu; fn_000f3430(cpu);
    }
L_000d616c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6170:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000d6174:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d6178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000002u;
        }
    }
L_000d617c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000015u;
        }
    }
L_000d6180:;
    {
        cpu->r[14] = 0x000d6184u; fn_0018aa44(cpu);
    }
L_000d6184:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d6188:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d618c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d6190:;
    {
        cpu->r[2] = 0x000000deu;
    }
L_000d6194:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d6198:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d619c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d61a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000d61a4:;
    {
        cpu->r[14] = 0x000d61a8u; fn_000a8a2c(cpu);
    }
L_000d61a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d61ac:;
    {
        cpu->r[2] = 0x00004becu;
    }
L_000d61b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d61b4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d61b8:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_000d61bc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d61c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_000d61c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_000d61c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000d61cc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d61d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_000d61d4:;
    {
        cpu->r[0] = 0x00004be8u;
    }
L_000d61d8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d61dc:;
    {
        cpu->r[2] = 0x000043dcu;
    }
L_000d61e0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[7]; cpu->r[4] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_000d61e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], 0x0000003cu, 1, 0);
    }
L_000d61e8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d61ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_000d61f0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_000d61f4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d61f8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 0);
    }
L_000d61fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000d6200:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_000d6204:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_000d6208:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_000d620c:;
    {
        cpu->r[3] = 0x000043e0u;
    }
L_000d6210:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000d6214:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d6218:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d621c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_000d6220:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_000d6224:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d6228:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d622c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d6230:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000d6234:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d6238:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[4];
    }
L_000d623c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_000d6240:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d6244:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000d6248:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d624c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d6250:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d6254:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d6258:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d625c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d6260:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d6264:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d6268:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_000d626c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d6270:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d6274:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d6278:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d627c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d6280:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000d6284:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d6288u)) return;
    }
L_000d6288:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d628c:;
    {
        cpu->r[14] = 0x000d6290u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d6290:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d6294:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d60b0;
        }
    }
L_000d6298:;
    {
        cpu->r[6] = rd32(0x000d62a0u + + 0x70u);
    }
L_000d629c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d62a0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d62a4:;
    {
        cpu->r[14] = 0x000d62a8u; fn_0018aa20(cpu);
    }
L_000d62a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d62ac:;
    {
        cpu->r[14] = 0x000d62b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d62b0:;
    {
        cpu->r[3] = rd32(0x000d62b8u + + 0x68u);
    }
L_000d62b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d62b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d62bc:;
    {
        cpu->r[3] = rd32(0x000d62c4u + + 0x60u);
    }
L_000d62c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d62c4:;
    {
        cpu->r[14] = 0x000d62c8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d62c8:;
    {
        goto L_000d60b4;
    }
L_000d62cc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d62d0:;
    {
        cpu->r[14] = 0x000d62d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d62d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d62d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6158;
        }
    }
L_000d62dc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d62e0:;
    {
        cpu->r[14] = 0x000d62e4u; fn_0018aa20(cpu);
    }
L_000d62e4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d62e8:;
    {
        cpu->r[14] = 0x000d62ecu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d62ec:;
    {
        cpu->r[3] = rd32(0x000d62f4u + + 0x2cu);
    }
L_000d62f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d62f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d62f8:;
    {
        cpu->r[3] = rd32(0x000d6300u + + 0x24u);
    }
L_000d62fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6300:;
    {
        cpu->r[14] = 0x000d6304u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d6304:;
    {
        goto L_000d6158;
    }
}

/* _ZN5Scene23RenderRaceTypeInterfaceEv @ 000d6328 (arm) */
void fn_000d6328(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d6328:;
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
L_000d632c:;
    {
        cpu->r[5] = rd32(0x000d6334u + + 0x758u);
    }
L_000d6330:;
    {
        cpu->r[3] = rd32(0x000d6338u + + 0x758u);
    }
L_000d6334:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000003f4u, 1, 0);
    }
L_000d6338:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d6340u, cpu->r[5], 0, 0);
    }
L_000d633c:;
    {
        cpu->r[10] = rd32(0x000d6344u + + 0x750u);
    }
L_000d6340:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d6344:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d6348:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d634c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_000d6350:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d6354:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6358:;
    {
        wr32(cpu->r[13] + + 0x3ecu, cpu->r[3]);
    }
L_000d635c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d65d4;
        }
    }
L_000d6360:;
    {
        cpu->r[7] = rd32(0x000d6368u + + 0x730u);
    }
L_000d6364:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d6368:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d636c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d6370:;
    {
        cpu->r[6] = rd32(0x000d6378u + + 0x724u);
    }
L_000d6374:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6378:;
    {
        cpu->r[14] = 0x000d637cu; fn_00096a08(cpu);
    }
L_000d637c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6380:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d6384:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d6388:;
    {
        cpu->r[14] = 0x000d638cu; fn_0018aa44(cpu);
    }
L_000d638c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d6390:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d6394:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d6398:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_000d639c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d63a0:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000d63a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d63a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_000d63ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_000d63b0:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000d6618;
        case 1: goto L_000d65b8;
        case 2: goto L_000d65b8;
        case 3: goto L_000d65b8;
        case 4: goto L_000d6688;
        case 5: goto L_000d672c;
        case 6: goto L_000d67c0;
        case 7: goto L_000d6824;
        case 8: goto L_000d6998;
        case 9: goto L_000d65b8;
        case 10: goto L_000d63e4;
        default: guest_unimplemented(cpu, 0x000d63b0u); return; }
        }
    }
L_000d63b4:;
    {
        goto L_000d65b8;
    }
L_000d63e4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d63e8:;
    {
        cpu->r[8] = 0x0000851fu;
    }
L_000d63ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d63f0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x51ebu << 16);
    }
L_000d63f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000002acu, 0, 0);
    }
L_000d63f8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000001acu, 0, 0);
    }
L_000d63fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6400:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d6404:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d6408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d640c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d6410:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d6414:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d6418:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d641c:;
    {
        cpu->r[14] = 0x000d6420u; fn_0015d718(cpu);
    }
L_000d6420:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d6424:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000d6428:;
    {
        cpu->r[0] = 0x00004dd3u;
    }
L_000d642c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d6430:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x1062u << 16);
    }
L_000d6434:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000d6438:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
        }
    }
L_000d643c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[0] * (int64_t)(int32_t)cpu->r[12]; cpu->r[3] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000d6440:;
    {
        cpu->r[3] = 0x0000b273u;
    }
L_000d6444:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x45e7u << 16);
    }
L_000d6448:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[14] = v;
    }
L_000d644c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_000d6450:;
    {
        cpu->r[14] = 0x00008889u;
    }
L_000d6454:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[0] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_000d6458:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000d645c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d6460:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x8888u << 16);
    }
L_000d6464:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_000d6468:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_000d646c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d6470:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[0], 1, 6u, &shc), cpu->r[6], 1, 0);
    }
L_000d6474:;
    {
        cpu->r[6] = 0x000003e8u;
    }
L_000d6478:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d647c:;
    {
        uint32_t v = cpu->r[12] - cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_000d6480:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000d6484:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[6] = v;
    }
L_000d6488:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[6]);
    }
L_000d648c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[3]; cpu->r[6] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_000d6490:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d6494:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000d6498:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d649c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[14], 1, 14u, &shc), cpu->r[12], 1, 0);
    }
L_000d64a0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000d64a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d64a8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d64ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000d64b0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d64b4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[14] = v;
    }
L_000d64b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_000d64bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d64c0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[12] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000d64c4:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 1, 5u, &shc), cpu->r[14], 1, 0);
    }
L_000d64c8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 6u, &shc); cpu->r[12] = v;
    }
L_000d64cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 2, 2u, &shc), 1, 0);
    }
L_000d64d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d64d4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_000d64d8:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_000d64dc:;
    {
        cpu->r[14] = 0x000d64e0u; imp_memset(cpu); /* memset */
    }
L_000d64e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d64e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d64e8:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_000d64ec:;
    {
        cpu->r[14] = 0x000d64f0u; imp_memset(cpu); /* memset */
    }
L_000d64f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d64f4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000009u, 1, 1);
    }
L_000d64f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d6a70;
        }
    }
L_000d64fc:;
    {
        cpu->r[1] = rd32(0x000d6504u + + 0x59cu);
    }
L_000d6500:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_000d6504:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d6508:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6510u, cpu->r[1], 0, 0);
    }
L_000d650c:;
    {
        cpu->r[14] = 0x000d6510u; imp_sprintf(cpu); /* sprintf */
    }
L_000d6510:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000d6514:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d6a58;
        }
    }
L_000d6518:;
    {
        cpu->r[1] = rd32(0x000d6520u + + 0x584u);
    }
L_000d651c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000d6520:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6524:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d652cu, cpu->r[1], 0, 0);
    }
L_000d6528:;
    {
        cpu->r[14] = 0x000d652cu; imp_sprintf(cpu); /* sprintf */
    }
L_000d652c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000d6530:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d6534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6538:;
    {
        cpu->r[2] = 0x000000ffu;
    }
L_000d653c:;
    {
        cpu->r[14] = 0x000d6540u; imp_memset(cpu); /* memset */
    }
L_000d6540:;
    {
        cpu->r[1] = rd32(0x000d6548u + + 0x560u);
    }
L_000d6544:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000d6548:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000d654c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6554u, cpu->r[1], 0, 0);
    }
L_000d6550:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6554:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000d6558:;
    {
        cpu->r[14] = 0x000d655cu; imp_sprintf(cpu); /* sprintf */
    }
L_000d655c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6560:;
    {
        cpu->r[1] = 0x00000570u;
    }
L_000d6564:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6568:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d656c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000d6570:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000d6574:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000d6578:;
    {
        cpu->r[14] = 0x000d657cu; fn_000ad200(cpu);
    }
L_000d657c:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_000d6580:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000d6584:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d6588:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d658c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000d6590:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d6594:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d6598:;
    {
        cpu->r[14] = 0x000d659cu; fn_000f38e8(cpu);
    }
L_000d659c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d65a0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d65a4:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d65a8:;
    {
        cpu->r[3] = 0x00000073u;
    }
L_000d65ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_000d65b0:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_000d65b4:;
    {
        cpu->r[14] = 0x000d65b8u; fn_000ad19c(cpu);
    }
L_000d65b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d65bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3ecu);
    }
L_000d65c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d65c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000d65c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d6a88;
        }
    }
L_000d65cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000003f4u, 0, 0);
    }
L_000d65d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d65d4u)) return;
    }
L_000d65d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d65d8:;
    {
        cpu->r[14] = 0x000d65dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d65dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d65e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6360;
        }
    }
L_000d65e4:;
    {
        cpu->r[7] = rd32(0x000d65ecu + + 0x4acu);
    }
L_000d65e8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d65ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d65f0:;
    {
        cpu->r[14] = 0x000d65f4u; fn_0018aa20(cpu);
    }
L_000d65f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d65f8:;
    {
        cpu->r[14] = 0x000d65fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d65fc:;
    {
        cpu->r[3] = rd32(0x000d6604u + + 0x4a8u);
    }
L_000d6600:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6604:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d6608:;
    {
        cpu->r[3] = rd32(0x000d6610u + + 0x4a0u);
    }
L_000d660c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d6610:;
    {
        cpu->r[14] = 0x000d6614u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d6614:;
    {
        goto L_000d6364;
    }
L_000d6618:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d661c:;
    {
        cpu->r[1] = rd32(0x000d6624u + + 0x490u);
    }
L_000d6620:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d6624:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000003acu, 0, 0);
    }
L_000d6628:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6630u, cpu->r[1], 0, 0);
    }
L_000d662c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6630:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6634:;
    {
        cpu->r[3] = 0x000010dcu;
    }
L_000d6638:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000002bcu, 0, 0);
    }
L_000d663c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d6640:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d6644:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000d6648:;
    {
        cpu->r[14] = 0x000d664cu; imp_sprintf(cpu); /* sprintf */
    }
L_000d664c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6650:;
    {
        cpu->r[1] = 0x00000073u;
    }
L_000d6654:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6658:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d665c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d6660:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d6664:;
    {
        cpu->r[14] = 0x000d6668u; fn_000ad200(cpu);
    }
L_000d6668:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d666c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d6670:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6674:;
    {
        cpu->r[3] = 0x00000069u;
    }
L_000d6678:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d667c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d6680:;
    {
        cpu->r[14] = 0x000d6684u; fn_000ad83c(cpu);
    }
L_000d6684:;
    {
        goto L_000d65b8;
    }
L_000d6688:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000d668c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x438u);
    }
L_000d6690:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_000d6694:;
    {
        cpu->r[1] = 0x00004220u;
    }
L_000d6698:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d669c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d66a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000d66a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d66a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d66ac:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_000d66b0:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x40u);
    }
L_000d66b4:;
    {
        cpu->r[14] = 0x000d66b8u; fn_00098aec(cpu);
    }
L_000d66b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d66bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d66c0:;
    {
        cpu->r[14] = 0x000d66c4u; fn_000ae1a4(cpu);
    }
L_000d66c4:;
    {
        cpu->r[1] = rd32(0x000d66ccu + + 0x3ecu);
    }
L_000d66c8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d66cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d66d4u, cpu->r[1], 0, 0);
    }
L_000d66d0:;
    {
        cpu->r[14] = 0x000d66d4u; fn_000ae248(cpu);
    }
L_000d66d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d66d8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000d66dc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d66e0:;
    {
        cpu->r[14] = 0x000d66e4u; fn_00098aec(cpu);
    }
L_000d66e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d66e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d66ec:;
    {
        cpu->r[14] = 0x000d66f0u; fn_000ae248(cpu);
    }
L_000d66f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d66f4:;
    {
        cpu->r[1] = 0x00000576u;
    }
L_000d66f8:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d66fc:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d6700:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000d6704:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6708:;
    {
        cpu->r[14] = 0x000d670cu; fn_000ad200(cpu);
    }
L_000d670c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6710:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d6714:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6718:;
    {
        cpu->r[3] = 0x00000069u;
    }
L_000d671c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6720:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000d6724:;
    {
        cpu->r[14] = 0x000d6728u; fn_000ad19c(cpu);
    }
L_000d6728:;
    {
        goto L_000d65b8;
    }
L_000d672c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d6730:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000d6734:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d6738:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x438u);
    }
L_000d673c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d6740:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_000d6744:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6748:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000d674c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d6750:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_000d6754:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d6758:;
    {
        cpu->r[1] = rd32(0x000d6760u + + 0x35cu);
    }
L_000d675c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d6764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d6768:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6770u, cpu->r[1], 0, 0);
    }
L_000d676c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d6770:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4cu);
    }
L_000d6774:;
    {
        cpu->r[2] = 0x00001d10u;
    }
L_000d6778:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000d677c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000d6780:;
    {
        cpu->r[14] = 0x000d6784u; fn_000ae830(cpu);
    }
L_000d6784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6788:;
    {
        cpu->r[1] = 0x00000075u;
    }
L_000d678c:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6790:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d6794:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d6798:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d679c:;
    {
        cpu->r[14] = 0x000d67a0u; fn_000ad200(cpu);
    }
L_000d67a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d67a4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d67a8:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d67ac:;
    {
        cpu->r[3] = 0x00000069u;
    }
L_000d67b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d67b4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d67b8:;
    {
        cpu->r[14] = 0x000d67bcu; fn_000ad19c(cpu);
    }
L_000d67bc:;
    {
        goto L_000d65b8;
    }
L_000d67c0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d67c4:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000d67c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d67cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x438u);
    }
L_000d67d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d67d4:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_000d67d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d67dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000d67e0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d67e4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_000d67e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d67ec:;
    {
        cpu->r[1] = rd32(0x000d67f4u + + 0x2ccu);
    }
L_000d67f0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d67f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d67f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d67fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6804u, cpu->r[1], 0, 0);
    }
L_000d6800:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d6804:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x50u);
    }
L_000d6808:;
    {
        cpu->r[2] = 0x00001d14u;
    }
L_000d680c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_000d6810:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_000d6814:;
    {
        cpu->r[14] = 0x000d6818u; fn_000ae830(cpu);
    }
L_000d6818:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d681c:;
    {
        cpu->r[1] = 0x00000074u;
    }
L_000d6820:;
    {
        goto L_000d678c;
    }
L_000d6824:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d6828:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d682c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6830:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d6834:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d6838:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d683c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d6840:;
    {
        cpu->r[4] = 0x000003e8u;
    }
L_000d6844:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d6848:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d684c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d6850:;
    {
        cpu->r[14] = 0x000d6854u; fn_0015d718(cpu);
    }
L_000d6854:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d6858:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000d685c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d6860:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d6864:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000d6868:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000d686c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[3] = v;
    }
L_000d6870:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x44u);
    }
L_000d6874:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[3] = v;
    }
L_000d6878:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000d687c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000d65b8;
        }
    }
L_000d6880:;
    {
        cpu->r[14] = 0x00004dd3u;
    }
L_000d6884:;
    {
        cpu->r[9] = 0x0000b273u;
    }
L_000d6888:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x1062u << 16);
    }
L_000d688c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000d6890:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x45e7u << 16);
    }
L_000d6894:;
    {
        cpu->r[8] = 0x00008889u;
    }
L_000d6898:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_000d689c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x8888u << 16);
    }
L_000d68a0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[9] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_000d68a4:;
    {
        cpu->r[12] = 0x0000851fu;
    }
L_000d68a8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x51ebu << 16);
    }
L_000d68ac:;
    {
        cpu->r[1] = rd32(0x000d68b4u + + 0x210u);
    }
L_000d68b0:;
    {
        cpu->r[14] = sub_flags(cpu, shifter(cpu->r[14], 1, 6u, &shc), cpu->r[3], 1, 0);
    }
L_000d68b4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000003acu, 0, 0);
    }
L_000d68b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d68c0u, cpu->r[1], 0, 0);
    }
L_000d68bc:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_000d68c0:;
    {
        uint32_t v = cpu->r[0] - cpu->r[4] * cpu->r[14]; cpu->r[4] = v;
    }
L_000d68c4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000d68c8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000d68cc:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[9], 1, 14u, &shc), cpu->r[3], 1, 0);
    }
L_000d68d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[14]; cpu->r[0] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_000d68d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d68d8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000d68dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_000d68e0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_000d68e4:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 31u, &shc); cpu->r[8] = v;
    }
L_000d68e8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_000d68ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[4]; cpu->r[8] = (uint32_t)v; cpu->r[9] = (uint32_t)(v >> 32); }
    }
L_000d68f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000d68f4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d68f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d68fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_000d6900:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_000d6904:;
    {
        cpu->r[9] = sub_flags(cpu, shifter(cpu->r[4], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_000d6908:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d690c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 6u, &shc); cpu->r[12] = v;
    }
L_000d6910:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[9], 2, 2u, &shc), 1, 0);
    }
L_000d6914:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d6918:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_000d691c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[4], 1, 5u, &shc), cpu->r[9], 1, 0);
    }
L_000d6920:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d6924:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d6928:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 0);
    }
L_000d692c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d6930:;
    {
        cpu->r[14] = 0x000d6934u; imp_sprintf(cpu); /* sprintf */
    }
L_000d6934:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6938:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_000d693c:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6940:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d6944:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000d6948:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_000d694c:;
    {
        cpu->r[14] = 0x000d6950u; fn_000ad200(cpu);
    }
L_000d6950:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d6954:;
    {
        cpu->r[2] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_000d6958:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000d695c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6960:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000d6964:;
    {
        wr16(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_000d6968:;
    {
        cpu->r[14] = 0x000d696cu; imp_strlen(cpu); /* strlen */
    }
L_000d696c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000d6970:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000d6954;
        }
    }
L_000d6974:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6978:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d697c:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6980:;
    {
        cpu->r[3] = 0x00000069u;
    }
L_000d6984:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d6988:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d698c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d6990:;
    {
        cpu->r[14] = 0x000d6994u; fn_000ad19c(cpu);
    }
L_000d6994:;
    {
        goto L_000d65b8;
    }
L_000d6998:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d699c:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_000d69a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d69a4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x438u);
    }
L_000d69a8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d69ac:;
    {
        cpu->r[12] = 0x0000009cu;
    }
L_000d69b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d69b4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000d69b8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000d69bc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_000d69c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d69c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d69c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d69cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d69d0:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x48u);
    }
L_000d69d4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d69d8:;
    {
        cpu->r[3] = 0x00001cfcu;
    }
L_000d69dc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d69e0:;
    {
        cpu->r[14] = 0x000d69e4u; fn_00098aec(cpu);
    }
L_000d69e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d69e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d69ec:;
    {
        cpu->r[14] = 0x000d69f0u; fn_000ae1a4(cpu);
    }
L_000d69f0:;
    {
        cpu->r[1] = rd32(0x000d69f8u + + 0xd0u);
    }
L_000d69f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d69f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6a00u, cpu->r[1], 0, 0);
    }
L_000d69fc:;
    {
        cpu->r[14] = 0x000d6a00u; fn_000ae248(cpu);
    }
L_000d6a00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d6a04:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000d6a08:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d6a0c:;
    {
        cpu->r[14] = 0x000d6a10u; fn_00098aec(cpu);
    }
L_000d6a10:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d6a14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6a18:;
    {
        cpu->r[14] = 0x000d6a1cu; fn_000ae248(cpu);
    }
L_000d6a1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6a20:;
    {
        cpu->r[1] = 0x00000072u;
    }
L_000d6a24:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6a28:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_000d6a2c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000d6a30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000d6a34:;
    {
        cpu->r[14] = 0x000d6a38u; fn_000ad200(cpu);
    }
L_000d6a38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6a3c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d6a40:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_000d6a44:;
    {
        cpu->r[3] = 0x00000069u;
    }
L_000d6a48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000d6a4c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_000d6a50:;
    {
        cpu->r[14] = 0x000d6a54u; fn_000ad19c(cpu);
    }
L_000d6a54:;
    {
        goto L_000d65b8;
    }
L_000d6a58:;
    {
        cpu->r[1] = rd32(0x000d6a60u + + 0x6cu);
    }
L_000d6a5c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000d6a60:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6a64:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6a6cu, cpu->r[1], 0, 0);
    }
L_000d6a68:;
    {
        cpu->r[14] = 0x000d6a6cu; imp_sprintf(cpu); /* sprintf */
    }
L_000d6a6c:;
    {
        goto L_000d652c;
    }
L_000d6a70:;
    {
        cpu->r[1] = rd32(0x000d6a78u + + 0x58u);
    }
L_000d6a74:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d6a78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d6a7c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6a84u, cpu->r[1], 0, 0);
    }
L_000d6a80:;
    {
        cpu->r[14] = 0x000d6a84u; imp_sprintf(cpu); /* sprintf */
    }
L_000d6a84:;
    {
        goto L_000d6510;
    }
L_000d6a88:;
    {
        cpu->r[14] = 0x000d6a8cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000d6a8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        cpu->r[4] = (uint32_t)(int32_t)s8(cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_000d6a90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_000d6a94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000d6a98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 9u, &shc); cpu->r[0] = v;
        }
    }
L_000d6a9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
L_000d6aa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 1, 4u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000d6aa4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000d6aa8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[12], 3, 28u, &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_000d6aac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[12]);
        wr16(cpu->r[0], cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_000d6ab0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_000d6ab4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[12], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_000d6ab8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[8]);
        cpu->r[10] = rd16(cpu->r[3]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000d6abc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[0], 3, 24u, &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_000d6ac0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[12], 2, 23u, &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_000d6ac4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + (-cpu->r[0]);
        cpu->r[10] = rd16(cpu->r[3]);
        cpu->r[3] = wb_tmp;
        }
    }
L_000d6ac8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & shifter(cpu->r[12], 2, 19u, &shc); cpu->r[10] = v;
        set_nz(cpu, v);
        }
    }
L_000d6acc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[5] = v;
        set_nz(cpu, v);
        }
    }
L_000d6ad0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 4, (cpu->r[12] & 0xffu), &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN5Scene21RenderTakedownMessageEv @ 000d6ad4 (arm) */
void fn_000d6ad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d6ad4:;
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
L_000d6ad8:;
    {
        cpu->r[10] = rd32(0x000d6ae0u + + 0x2e8u);
    }
L_000d6adc:;
    {
        cpu->r[5] = rd32(0x000d6ae4u + + 0x2e8u);
    }
L_000d6ae0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_000d6ae4:;
    {
        cpu->r[10] = add_flags(cpu, 0x000d6aecu, cpu->r[10], 0, 0);
    }
L_000d6ae8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d6aec:;
    {
        cpu->r[7] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_000d6af0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d6af4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6d30;
        }
    }
L_000d6afc:;
    {
        cpu->r[4] = rd32(0x000d6b04u + + 0x2ccu);
    }
L_000d6b00:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d6b04:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d6b08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d6b0c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d6b10:;
    {
        cpu->r[14] = 0x000d6b14u; fn_00096a08(cpu);
    }
L_000d6b14:;
    {
        cpu->r[6] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000d6b18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6b1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d6b20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6b24:;
    {
        cpu->r[14] = 0x000d6b28u; fn_0018aa44(cpu);
    }
L_000d6b28:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_000d6b2c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d6b30:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6b34:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000d6b38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6d74;
        }
    }
L_000d6b3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6b40:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000d6b44:;
    {
        cpu->r[1] = 0x0000003du;
    }
L_000d6b48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d6b4c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000d6b50:;
    {
        cpu->r[14] = 0x000d6b54u; fn_0018aa44(cpu);
    }
L_000d6b54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d6b58:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d6b5c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000d6b60:;
    {
        cpu->r[0] = 0x000005e1u;
    }
L_000d6b64:;
    {
        cpu->r[14] = 0x000d6b68u; fn_000aeb28(cpu);
    }
L_000d6b68:;
    {
        cpu->r[1] = rd32(0x000d6b70u + + 0x264u);
    }
L_000d6b6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d6b74u, cpu->r[1], 0, 0);
    }
L_000d6b70:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d6b74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d6b78:;
    {
        cpu->r[14] = 0x000d6b7cu; fn_000ae830(cpu);
    }
L_000d6b7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d6b80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d6b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000ccu, 0, 0);
    }
L_000d6b88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_000d6b8c:;
    {
        cpu->r[12] = 0x0000270fu;
    }
L_000d6b90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[4]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d6b94:;
    {
        cpu->r[14] = 0x000d6b98u; fn_000aa0c0(cpu);
    }
L_000d6b98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d6b9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000d6ba0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d6ba4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000d6ba8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6bac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_000d6bb0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000d6bb4:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[12]);
    }
L_000d6bb8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6bbc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000d6bc0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000d6bc4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_000d6bc8:;
    {
        cpu->r[14] = 0x000d6bccu; fn_000a8cb8(cpu);
    }
L_000d6bcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000d6bd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc0u);
    }
L_000d6bd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d6bd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000d6bdc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000d6be0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xc4u);
    }
L_000d6be4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_000d6be8:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[2]);
    }
L_000d6bec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_000d6bf0:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[7]);
    }
L_000d6bf4:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_000d6bf8:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[8]);
    }
L_000d6bfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d6c74;
        }
    }
L_000d6c00:;
    {
        cpu->r[5] = 0x00000004u;
    }
L_000d6c04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x000000a8u, 0, 0);
    }
L_000d6c08:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d6c0c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6c10:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d6c14:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000d6c18:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000d6c1c:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_000d6c20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6c24:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_000d6c28:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000d6c2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000d6c30:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_000d6c34:;
    {
        cpu->r[14] = 0x000d6c38u; fn_000a8cb8(cpu);
    }
L_000d6c38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb0u);
    }
L_000d6c3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa8u);
    }
L_000d6c40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xccu);
    }
L_000d6c44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000d6c48:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_000d6c4c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d6db0;
        }
    }
L_000d6c50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xacu);
    }
L_000d6c54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000010u, 1, 1);
    }
L_000d6c58:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xb4u);
    }
L_000d6c5c:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[2]);
    }
L_000d6c60:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_000d6c64:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[7]);
    }
L_000d6c68:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[8]);
    }
L_000d6c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d6c08;
        }
    }
L_000d6c70:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000d6c74:;
    {
        cpu->r[3] = rd32(0x000d6c7cu + + 0x15cu);
    }
L_000d6c78:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000d6c7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6c80:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6c84:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_000d6c88:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_000d6c8c:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6c90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_000d6c94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_000d6c98:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d6c9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d6ca0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000d6ca4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_000d6ca8:;
    {
        cpu->r[14] = 0x000d6cacu; fn_000a8888(cpu);
    }
L_000d6cac:;
    {
        cpu->r[3] = rd32(0x000d6cb4u + + 0x128u);
    }
L_000d6cb0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6cb4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000d6cb8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_000d6cbc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000d6cc0:;
    {
        cpu->r[10] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6cc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d6cc8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d6ccc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000d6cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d6cd4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d6cd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 0);
    }
L_000d6cdc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[7], 1, 1u, &shc), 1, 0);
    }
L_000d6ce0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000d6ce4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_000d6ce8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d6cec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 1, 1u, &shc), 0, 0);
    }
L_000d6cf0:;
    {
        cpu->r[14] = 0x000d6cf4u; fn_000adb30(cpu);
    }
L_000d6cf4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d6cf8:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000d6cfc:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_000d6d00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d6d04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_000d6d08:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d6d0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_000d6d10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_000d6d14:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d6d18:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d6d1c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_000d6d20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 0);
    }
L_000d6d24:;
    {
        cpu->r[14] = 0x000d6d28u; fn_000ad19c(cpu);
    }
L_000d6d28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000d6d2c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d6d30u)) return;
    }
L_000d6d30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6d34:;
    {
        cpu->r[14] = 0x000d6d38u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d6d38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d6d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6afc;
        }
    }
L_000d6d40:;
    {
        cpu->r[4] = rd32(0x000d6d48u + + 0x88u);
    }
L_000d6d44:;
    {
        cpu->r[8] = rd32(cpu->r[10] + cpu->r[4]);
    }
L_000d6d48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6d4c:;
    {
        cpu->r[14] = 0x000d6d50u; fn_0018aa20(cpu);
    }
L_000d6d50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6d54:;
    {
        cpu->r[14] = 0x000d6d58u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d6d58:;
    {
        cpu->r[3] = rd32(0x000d6d60u + + 0x80u);
    }
L_000d6d5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6d60:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6d64:;
    {
        cpu->r[3] = rd32(0x000d6d6cu + + 0x78u);
    }
L_000d6d68:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6d6c:;
    {
        cpu->r[14] = 0x000d6d70u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d6d70:;
    {
        goto L_000d6b00;
    }
L_000d6d74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d6d78:;
    {
        cpu->r[14] = 0x000d6d7cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d6d7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d6d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6b3c;
        }
    }
L_000d6d84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6d88:;
    {
        cpu->r[14] = 0x000d6d8cu; fn_0018aa20(cpu);
    }
L_000d6d8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d6d90:;
    {
        cpu->r[14] = 0x000d6d94u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d6d94:;
    {
        cpu->r[3] = rd32(0x000d6d9cu + + 0x44u);
    }
L_000d6d98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d6d9c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6da0:;
    {
        cpu->r[3] = rd32(0x000d6da8u + + 0x3cu);
    }
L_000d6da4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d6da8:;
    {
        cpu->r[14] = 0x000d6dacu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d6dac:;
    {
        goto L_000d6b3c;
    }
L_000d6db0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000d6db4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc0u);
    }
L_000d6db8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xc4u);
    }
L_000d6dbc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_000d6dc0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000d6dc4:;
    {
        goto L_000d6c74;
    }
}

/* _ZN5Scene15RenderRaceStartEv @ 000d6de8 (arm) */
void fn_000d6de8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d6de8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000d6dec:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000d6df0:;
    {
        cpu->r[4] = rd32(0x000d6df8u + + 0x1b0u);
    }
L_000d6df4:;
    {
        cpu->r[3] = rd32(0x000d6dfcu + + 0x1b0u);
    }
L_000d6df8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_000d6dfc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d6e04u, cpu->r[4], 0, 0);
    }
L_000d6e00:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d6e04:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6e08:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000d6e0c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6f54;
        }
    }
L_000d6e14:;
    {
        cpu->r[7] = rd32(0x000d6e1cu + + 0x194u);
    }
L_000d6e18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d6e1c:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_000d6e20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d6e24:;
    {
        cpu->r[5] = 0x00004334u;
    }
L_000d6e28:;
    {
        cpu->r[14] = 0x000d6e2cu; fn_0018aa44(cpu);
    }
L_000d6e2c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000d6e30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000d6e34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000d6e38:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d6e3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000d6f48;
        }
    }
L_000d6e40:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d6e44:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000d6e48:;
    {
        { uint32_t v = cpu->r[3] & 0x0000005cu; set_nz(cpu, v); }
    }
L_000d6e4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6f48;
        }
    }
L_000d6e50:;
    {
        cpu->r[3] = 0x00004330u;
    }
L_000d6e54:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000d6e5cu + + 0x13cu);
    }
L_000d6e58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d6e5c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d6e60:;
    {
        cpu->r[14] = 0x000d6e64u; fn_0009b4d0(cpu);
    }
L_000d6e64:;
    {
        cpu->r[3] = rd32(0x000d6e6cu + + 0x148u);
    }
L_000d6e68:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000003e8u, 0, 0);
    }
L_000d6e6c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000d6e70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6e74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 1);
    }
L_000d6e78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000d6e7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d6e80:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d6e84:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d6e88:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_000d6e8c:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000d6e90:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 0);
    }
L_000d6e94:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6e98:;
    {
        uint32_t v = cpu->r[8] & ~ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[8] = v;
    }
L_000d6e9c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_000d6ea0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d6ea4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d6eacu + + 0xf0u);
    }
L_000d6ea8:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_000d6eac:;
    {
        cpu->r[14] = 0x000d6eb0u; fn_000a8df8(cpu);
    }
L_000d6eb0:;
    {
        cpu->r[3] = rd32(0x000d6eb8u + + 0x100u);
    }
L_000d6eb4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d6eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6ebc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d6ec0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_000d6ec4:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[3];
    }
L_000d6ec8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d6ecc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6ed0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d6ed4:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000d6ed8:;
    {
        vfp_vmla(cpu, 18, 15, 17);
    }
L_000d6edc:;
    {
        cpu->r[14] = 0x000d6ee0u; fn_000a8e08(cpu);
    }
L_000d6ee0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d6ee8u + + 0xb8u);
    }
L_000d6ee4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d6eecu + + 0xb8u);
    }
L_000d6ee8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000d6eec:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d6ef0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d6ef4:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_000d6ef8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d6efc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d6f00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d6f04:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_000d6f08:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d6f0c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d6f10:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_000d6f14:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000d6f18:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000d6f1c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000d6f20:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_000d6f24:;
    {
        vfp_vmla(cpu, 19, 15, 17);
    }
L_000d6f28:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_000d6f2c:;
    {
        *(int32_t*)vfp_s(cpu,19) = (int32_t)*vfp_s(cpu,19);
    }
L_000d6f30:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000d6f34:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000d6f38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000d6f3c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,19);
    }
L_000d6f40:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_000d6f44:;
    {
        cpu->r[14] = 0x000d6f48u; fn_000ab104(cpu);
    }
L_000d6f48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d6f4c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000d6f50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d6f54u)) return;
    }
L_000d6f54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d6f58:;
    {
        cpu->r[14] = 0x000d6f5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d6f5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d6f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6e14;
        }
    }
L_000d6f64:;
    {
        cpu->r[7] = rd32(0x000d6f6cu + + 0x44u);
    }
L_000d6f68:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d6f6c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6f70:;
    {
        cpu->r[14] = 0x000d6f74u; fn_0018aa20(cpu);
    }
L_000d6f74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d6f78:;
    {
        cpu->r[14] = 0x000d6f7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d6f7c:;
    {
        cpu->r[3] = rd32(0x000d6f84u + + 0x38u);
    }
L_000d6f80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d6f84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6f88:;
    {
        cpu->r[3] = rd32(0x000d6f90u + + 0x30u);
    }
L_000d6f8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d6f90:;
    {
        cpu->r[14] = 0x000d6f94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d6f94:;
    {
        goto L_000d6e18;
    }
}

/* _ZN5Scene11Message_SetEiii @ 000d6fc4 (arm) */
void fn_000d6fc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d6fc4:;
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
L_000d6fc8:;
    {
        cpu->r[5] = rd32(0x000d6fd0u + + 0x2ecu);
    }
L_000d6fcc:;
    {
        cpu->r[6] = rd32(0x000d6fd4u + + 0x2ecu);
    }
L_000d6fd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_000d6fd4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d6fdcu, cpu->r[5], 0, 0);
    }
L_000d6fd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d6fdc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000d6fe0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000d6fe4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d6fe8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d6fec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d6ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d71a4;
        }
    }
L_000d6ff4:;
    {
        cpu->r[10] = rd32(0x000d6ffcu + + 0x2c8u);
    }
L_000d6ff8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d6ffc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d7000:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7004:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d7008:;
    {
        cpu->r[14] = 0x000d700cu; fn_0018aa44(cpu);
    }
L_000d700c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d7010:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d7014:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d7018:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d701c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d71e8;
        }
    }
L_000d7020:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d7024:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d7028:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d702c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7030:;
    {
        cpu->r[14] = 0x000d7034u; fn_00096a08(cpu);
    }
L_000d7034:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7038:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d703c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d7040:;
    {
        cpu->r[14] = 0x000d7044u; fn_0018aa44(cpu);
    }
L_000d7044:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_000d7048:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_000d704c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7224;
        }
    }
L_000d7050:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x20u);
    }
L_000d7054:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000d7058:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d7284;
        }
    }
L_000d705c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d7060:;
    {
        cpu->r[9] = 0x00004294u;
    }
L_000d7064:;
    {
        cpu->r[2] = 0x00004298u;
    }
L_000d7068:;
    {
        cpu->r[1] = 0x0000429cu;
    }
L_000d706c:;
    {
        cpu->r[3] = 0x00004290u;
    }
L_000d7070:;
    {
        cpu->r[11] = 0x000042b0u;
    }
L_000d7074:;
    {
        cpu->r[10] = 0x000042b1u;
    }
L_000d7078:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d707c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d7080:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7084:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000d7088:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000d708c:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000d7090:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d7094:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000d7098:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d709c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_000d70a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d70a4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d70a8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000d70ac:;
    {
        wr8(cpu->r[4] + cpu->r[11], cpu->r[1]);
    }
L_000d70b0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000d70b4:;
    {
        wr8(cpu->r[4] + cpu->r[10], cpu->r[6]);
    }
L_000d70b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d70bc:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d70c0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000d70c4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d70c8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_000d70cc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[6]);
    }
L_000d70d0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d70d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d70d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_000d70dc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_000d70e0:;
    {
        cpu->r[14] = 0x000d70e4u; fn_000a8a2c(cpu);
    }
L_000d70e4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[10]);
    }
L_000d70e8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d70ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000d70f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d70f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d70f8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_000d70fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7130;
        }
    }
L_000d7100:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d7104:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000d7108:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000d710c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d7110:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_000d7114:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_000d7118:;
    {
        cpu->r[14] = 0x000d711cu; fn_000ab0c0(cpu);
    }
L_000d711c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[11]);
    }
L_000d7120:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7124:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000d7128:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_000d712c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000014u, 0, 0);
        }
    }
L_000d7130:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
    }
L_000d7134:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_000d7138:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_000d713c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_000d7140:;
    {
        cpu->r[12] = rd32(0x000d7148u + + 0x180u);
    }
L_000d7144:;
    {
        cpu->r[3] = 0x000042a0u;
    }
L_000d7148:;
    {
        cpu->r[2] = 0x000042a4u;
    }
L_000d714c:;
    {
        cpu->r[0] = 0x000042a8u;
    }
L_000d7150:;
    {
        cpu->r[1] = 0x000042acu;
    }
L_000d7154:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d7158:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000d715c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7160:;
    {
        cpu->r[12] = rd32(0x000d7168u + + 0x164u);
    }
L_000d7164:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d7168:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d716c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000d7170:;
    {
        cpu->r[5] = rd32(cpu->r[8]);
    }
L_000d7174:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000d7178:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_000d717c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000046u, 1, 0);
    }
L_000d7180:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_000d7184:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000d7188:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000d718c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000d7190:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_000d7194:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000d7198:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d719c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000d71a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d71a4u)) return;
    }
L_000d71a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d71a8:;
    {
        cpu->r[14] = 0x000d71acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d71ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d71b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d6ff4;
        }
    }
L_000d71b4:;
    {
        cpu->r[10] = rd32(0x000d71bcu + + 0x108u);
    }
L_000d71b8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d71bc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d71c0:;
    {
        cpu->r[14] = 0x000d71c4u; fn_0018aa20(cpu);
    }
L_000d71c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d71c8:;
    {
        cpu->r[14] = 0x000d71ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d71cc:;
    {
        cpu->r[3] = rd32(0x000d71d4u + + 0xfcu);
    }
L_000d71d0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d71d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d71d8:;
    {
        cpu->r[3] = rd32(0x000d71e0u + + 0xf4u);
    }
L_000d71dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d71e0:;
    {
        cpu->r[14] = 0x000d71e4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d71e4:;
    {
        goto L_000d6ff8;
    }
L_000d71e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d71ec:;
    {
        cpu->r[14] = 0x000d71f0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d71f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d71f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7020;
        }
    }
L_000d71f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d71fc:;
    {
        cpu->r[14] = 0x000d7200u; fn_0018aa20(cpu);
    }
L_000d7200:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d7204:;
    {
        cpu->r[14] = 0x000d7208u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7208:;
    {
        cpu->r[3] = rd32(0x000d7210u + + 0xc0u);
    }
L_000d720c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d7210:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7214:;
    {
        cpu->r[3] = rd32(0x000d721cu + + 0xb8u);
    }
L_000d7218:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d721c:;
    {
        cpu->r[14] = 0x000d7220u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7220:;
    {
        goto L_000d7020;
    }
L_000d7224:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d7228:;
    {
        cpu->r[12] = 0x00004294u;
    }
L_000d722c:;
    {
        cpu->r[6] = 0x00004298u;
    }
L_000d7230:;
    {
        cpu->r[8] = 0x0000429cu;
    }
L_000d7234:;
    {
        cpu->r[0] = 0x00004290u;
    }
L_000d7238:;
    {
        cpu->r[1] = 0x000042b0u;
    }
L_000d723c:;
    {
        cpu->r[3] = 0x000042b1u;
    }
L_000d7240:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000d7244:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000d7248:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000d724c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d7250:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d7254:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7258:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d725c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000d7260:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000d7264:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000d7268:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000d726c:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[10]);
    }
L_000d7270:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000d7274:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000d7278:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000d727c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d7280:;
    {
        goto L_000d7140;
    }
L_000d7284:;
    {
        cpu->r[1] = rd32(0x000d728cu + + 0x4cu);
    }
L_000d7288:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d728c:;
    {
        cpu->r[12] = rd32(0x000d7294u + + 0x48u);
    }
L_000d7290:;
    {
        cpu->r[14] = 0x0000323bu;
    }
L_000d7294:;
    {
        cpu->r[2] = rd32(0x000d729cu + + 0x44u);
    }
L_000d7298:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d72a0u, cpu->r[1], 0, 0);
    }
L_000d729c:;
    {
        cpu->r[3] = rd32(0x000d72a4u + + 0x40u);
    }
L_000d72a0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000d72a8u, cpu->r[12], 0, 0);
    }
L_000d72a4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d72acu, cpu->r[2], 0, 0);
    }
L_000d72a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002c0u, 0, 0);
    }
L_000d72ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d72b4u, cpu->r[3], 0, 0);
    }
L_000d72b0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d72b4:;
    {
        cpu->r[14] = 0x000d72b8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d72b8:;
    {
        goto L_000d719c;
    }
}

/* _ZN5Scene19RenderThunderEffectEv @ 000d72e8 (arm) */
void fn_000d72e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d72e8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000d72ec:;
    {
        cpu->r[6] = rd32(0x000d72f4u + + 0x154u);
    }
L_000d72f0:;
    {
        cpu->r[3] = rd32(0x000d72f8u + + 0x154u);
    }
L_000d72f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000d72f8:;
    {
        cpu->r[6] = add_flags(cpu, 0x000d7300u, cpu->r[6], 0, 0);
    }
L_000d72fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d7300:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d7304:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d7308:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d730c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7404;
        }
    }
L_000d7310:;
    {
        cpu->r[5] = rd32(0x000d7318u + + 0x138u);
    }
L_000d7314:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000d7318:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d731c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d7320:;
    {
        cpu->r[14] = 0x000d7324u; fn_0018aa44(cpu);
    }
L_000d7324:;
    {
        cpu->r[3] = 0x000042c8u;
    }
L_000d7328:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d732c:;
    {
        cpu->r[2] = rd32(0x000d7334u + + 0x120u);
    }
L_000d7330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7334:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d7338:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d733c:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_000d7340:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d7344:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d7360;
        }
    }
L_000d7348:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_000d734c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000d7368;
        }
    }
L_000d7350:;
    {
        cpu->r[2] = 0x000042c8u;
    }
L_000d7354:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d7358:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d735c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d7360:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000d7364:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d7368u)) return;
    }
L_000d7368:;
    {
        cpu->r[2] = rd32(0x000d7370u + + 0xe8u);
    }
L_000d736c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d7374u, cpu->r[2], 0, 0);
    }
L_000d7370:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d7374:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x2ccu);
    }
L_000d7378:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000d737c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d7350;
        }
    }
L_000d7380:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d7384:;
    {
        cpu->r[14] = 0x000d7388u; fn_0012f780(cpu);
    }
L_000d7388:;
    {
        cpu->r[2] = rd32(0x000d7390u + + 0xccu);
    }
L_000d738c:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000d7390:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_000d7394:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d7398:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d739c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000d73a0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d73a4:;
    {
        cpu->r[14] = 0x000d73a8u; fn_000960f4(cpu);
    }
L_000d73a8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d73ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000d73b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[14] = v;
        }
    }
L_000d73b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000d73b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & 0x000000ffu; cpu->r[14] = v;
        }
    }
L_000d73bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_000d73c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_000d73c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_000d73c8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d73cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000011u;
        }
    }
L_000d73d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000000cu;
        }
    }
L_000d73d4:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 16u, &shc); cpu->r[14] = v;
    }
L_000d73d8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d73dc:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_000d73e0:;
    {
        cpu->r[14] = 0x000d73e4u; fn_000ad8a0(cpu);
    }
L_000d73e4:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_000d73e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d73ec:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000d73f0:;
    {
        cpu->r[14] = 0x000d73f4u; fn_0012f780(cpu);
    }
L_000d73f4:;
    {
        cpu->r[3] = 0x000042c8u;
    }
L_000d73f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d73fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7400:;
    {
        goto L_000d7350;
    }
L_000d7404:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7408:;
    {
        cpu->r[14] = 0x000d740cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d740c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7310;
        }
    }
L_000d7414:;
    {
        cpu->r[5] = rd32(0x000d741cu + + 0x34u);
    }
L_000d7418:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_000d741c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7420:;
    {
        cpu->r[14] = 0x000d7424u; fn_0018aa20(cpu);
    }
L_000d7424:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7428:;
    {
        cpu->r[14] = 0x000d742cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d742c:;
    {
        cpu->r[3] = rd32(0x000d7434u + + 0x2cu);
    }
L_000d7430:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7434:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d7438:;
    {
        cpu->r[3] = rd32(0x000d7440u + + 0x24u);
    }
L_000d743c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d7440:;
    {
        cpu->r[14] = 0x000d7444u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7444:;
    {
        goto L_000d7314;
    }
}

/* _ZN5Scene18DrawIngameRankListEv @ 000d7468 (arm) */
void fn_000d7468(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d7468:;
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
L_000d746c:;
    {
        cpu->r[7] = rd32(0x000d7474u + + 0x53cu);
    }
L_000d7470:;
    {
        cpu->r[11] = rd32(0x000d7478u + + 0x53cu);
    }
L_000d7474:;
    {
        cpu->r[2] = 0x00004dd3u;
    }
L_000d7478:;
    {
        cpu->r[7] = add_flags(cpu, 0x000d7480u, cpu->r[7], 0, 0);
    }
L_000d747c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x1062u << 16);
    }
L_000d7480:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002bcu, 1, 0);
    }
L_000d7484:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d7488:;
    {
        cpu->r[4] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000d748c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d7490:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4dcu);
    }
L_000d7494:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000d7498:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000d749c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_000d74a0:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000d74a4:;
    {
        uint32_t v = cpu->r[3] - cpu->r[1] * cpu->r[2]; cpu->r[3] = v;
    }
L_000d74a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000d74ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d790c;
        }
    }
L_000d74b0:;
    {
        cpu->r[3] = 0x00001b44u;
    }
L_000d74b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d74b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d74bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d74c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d76dc;
        }
    }
L_000d74c4:;
    {
        cpu->r[2] = 0x00008889u;
    }
L_000d74c8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_000d74cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8888u << 16);
    }
L_000d74d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000d74d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d74d8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_000d74dc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[1] = v;
    }
L_000d74e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 1u, &shc), 1, 0);
    }
L_000d74e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_000d74e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d74ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d79a8;
        }
    }
L_000d74f0:;
    {
        cpu->r[4] = rd32(0x000d74f8u + + 0x4c0u);
    }
L_000d74f4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000d74f8:;
    {
        cpu->r[3] = 0x00001b44u;
    }
L_000d74fc:;
    {
        cpu->r[6] = rd32(0x000d7504u + + 0x4b8u);
    }
L_000d7500:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7504:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d7508:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d750c:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000d7510:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7514:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000d7518:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x4dcu);
    }
L_000d751c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_000d7520:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000d7524:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_000d7528:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[12]);
    }
L_000d752c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4dcu);
    }
L_000d7530:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d7534:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_000d7538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7720;
        }
    }
L_000d753c:;
    {
        cpu->r[4] = rd32(0x000d7544u + + 0x47cu);
    }
L_000d7540:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d7544:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000d7548:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d754c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7550:;
    {
        cpu->r[14] = 0x000d7554u; fn_0018aa44(cpu);
    }
L_000d7554:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_000d7558:;
    {
        cpu->r[1] = 0x0000010cu;
    }
L_000d755c:;
    {
        cpu->r[2] = 0x00000104u;
    }
L_000d7560:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d7564:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d7568:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d756c:;
    {
        cpu->r[14] = 0x000d7570u; fn_000ad8a0(cpu);
    }
L_000d7570:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_000d7574:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d7578:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d757c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d76e4;
        }
    }
L_000d7580:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d7584:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000d7588:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d758c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7590:;
    {
        cpu->r[14] = 0x000d7594u; fn_00096a08(cpu);
    }
L_000d7594:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7598:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d759c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d75a0:;
    {
        cpu->r[14] = 0x000d75a4u; fn_0018aa44(cpu);
    }
L_000d75a4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d75a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d75ac:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000d75b0:;
    {
        cpu->r[1] = 0x00008cc4u;
    }
L_000d75b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d75b8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d75bc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000d75c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_000d75c4:;
    {
        wr32(cpu->r[10] + + 0x48u, cpu->r[2]);
    }
L_000d75c8:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d75cc:;
    {
        wr32(cpu->r[10] + + 0x4cu, cpu->r[0]);
    }
L_000d75d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d75d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d75d8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d75dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d75e0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000d75e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d75e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000d75ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d75f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d75f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d75f8:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d75fc:;
    {
        cpu->r[8] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000d7600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d76dc;
        }
    }
L_000d7604:;
    {
        cpu->r[3] = rd32(0x000d760cu + + 0x3b8u);
    }
L_000d7608:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d760c:;
    {
        cpu->r[0] = rd32(0x000d7614u + + 0x3b4u);
    }
L_000d7610:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d7618u, cpu->r[3], 0, 0);
    }
L_000d7614:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d7618:;
    {
        cpu->r[3] = rd32(0x000d7620u + + 0x3acu);
    }
L_000d761c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_000d7620:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d7628u, cpu->r[3], 0, 0);
    }
L_000d7624:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000d7628:;
    {
        cpu->r[3] = rd32(0x000d7630u + + 0x3a0u);
    }
L_000d762c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_000d7630:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d7638u, cpu->r[3], 0, 0);
    }
L_000d7634:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000d7638:;
    {
        cpu->r[3] = rd32(0x000d7640u + + 0x394u);
    }
L_000d763c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d7644u, cpu->r[3], 0, 0);
    }
L_000d7640:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000d7644:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000d7648:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00008cc0u;
        }
    }
L_000d764c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000d7650:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d7654:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d7658:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 0);
        }
    }
L_000d765c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000d7660:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_000d7664:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000d7668:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d766c:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000d7670:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d7674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d76b4;
        }
    }
L_000d7678:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_000d767c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000d7680:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7698;
        }
    }
L_000d7688:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d768c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d7690:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d7694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d76b4;
        }
    }
L_000d7698:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d769c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d76a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_000d76a4:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000d76a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000d76ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000d76b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7764;
        }
    }
L_000d76b4:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_000d76b8:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_000d76bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d76c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d76c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000d76c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d76cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d76d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000d76d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000d76d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d7644;
        }
    }
L_000d76dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002bcu, 0, 0);
    }
L_000d76e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d76e4u)) return;
    }
L_000d76e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d76e8:;
    {
        cpu->r[14] = 0x000d76ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d76ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d76f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7580;
        }
    }
L_000d76f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d76f8:;
    {
        cpu->r[14] = 0x000d76fcu; fn_0018aa20(cpu);
    }
L_000d76fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d7700:;
    {
        cpu->r[14] = 0x000d7704u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7704:;
    {
        cpu->r[3] = rd32(0x000d770cu + + 0x2ccu);
    }
L_000d7708:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d770c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d7710:;
    {
        cpu->r[3] = rd32(0x000d7718u + + 0x2c4u);
    }
L_000d7714:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d7718:;
    {
        cpu->r[14] = 0x000d771cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d771c:;
    {
        goto L_000d7580;
    }
L_000d7720:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7724:;
    {
        cpu->r[14] = 0x000d7728u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d7728:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d772c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d753c;
        }
    }
L_000d7730:;
    {
        cpu->r[4] = rd32(0x000d7738u + + 0x288u);
    }
L_000d7734:;
    {
        cpu->r[10] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d7738:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d773c:;
    {
        cpu->r[14] = 0x000d7740u; fn_0018aa20(cpu);
    }
L_000d7740:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7744:;
    {
        cpu->r[14] = 0x000d7748u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7748:;
    {
        cpu->r[3] = rd32(0x000d7750u + + 0x288u);
    }
L_000d774c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7750:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d7754:;
    {
        cpu->r[3] = rd32(0x000d775cu + + 0x280u);
    }
L_000d7758:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d775c:;
    {
        cpu->r[14] = 0x000d7760u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7760:;
    {
        goto L_000d7540;
    }
L_000d7764:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_000d7768:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d776c:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_000d7770:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7774:;
    {
        cpu->r[14] = 0x000d7778u; imp_memset(cpu); /* memset */
    }
L_000d7778:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d777c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7780:;
    {
        cpu->r[9] = 0x00000066u;
    }
L_000d7784:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7788:;
    {
        uint32_t v = cpu->r[9] * cpu->r[4] + cpu->r[3]; cpu->r[9] = v;
    }
L_000d778c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00006300u, 0, 0);
    }
L_000d7790:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000f4u, 0, 0);
    }
L_000d7794:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d7798:;
    {
        cpu->r[14] = 0x000d779cu; fn_000ae12c(cpu);
    }
L_000d779c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000d77a0:;
    {
        cpu->r[9] = 0x00001c90u;
    }
L_000d77a4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d77a8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_000d77ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d77b0:;
    {
        cpu->r[14] = 0x000d77b4u; imp_memcpy(cpu); /* memcpy */
    }
L_000d77b4:;
    {
        cpu->r[1] = 0x0000007cu;
    }
L_000d77b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d77bc:;
    {
        cpu->r[14] = 0x000d77c0u; fn_000ae3a0(cpu);
    }
L_000d77c0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000d77c4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000d77c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000d77cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000d77d0:;
    {
        cpu->r[12] = 0x00000055u;
    }
L_000d77d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d77d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d77dc:;
    {
        if (cond_test(cpu, 2)) {
        wr16(cpu->r[0], cpu->r[1]);
        }
    }
L_000d77e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000d77e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d77e8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d77ec:;
    {
        cpu->r[14] = 0x000d77f0u; fn_00099114(cpu);
    }
L_000d77f0:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000d77f4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000d77f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d77fc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_000d7800:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d7804:;
    {
        cpu->r[14] = 0x000d7808u; fn_000ae830(cpu);
    }
L_000d7808:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d780c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000d7810:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7940;
        }
    }
L_000d7818:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d781c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x58cu);
    }
L_000d7820:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d7824:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_000d7828:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d782c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_000d7830:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d7834:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d7838:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d783c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d7840:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d7844:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000d7848:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000d784c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d798c;
        }
    }
L_000d7850:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_000d7854:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000d7858:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_000d785c:;
    {
        cpu->r[1] = 0x00004dd3u;
    }
L_000d7860:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x1062u << 16);
    }
L_000d7864:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000d7868:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_000d786c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_000d7870:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_000d7874:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d7878:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000d787c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_000d7880:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[0]; cpu->r[12] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000d7884:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000d7888:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000d788c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000d7890:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000290u, 0, 0);
    }
L_000d7894:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000d7898:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_000d789c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000d78a0:;
    {
        cpu->r[1] = (~0x00000009u);
    }
L_000d78a4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_000d78a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, 0x000d78b0u, cpu->r[12], 0, 0);
        }
    }
L_000d78ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_000d78b0:;
    {
        cpu->r[14] = 0x000d78b4u; fn_000ae830(cpu);
    }
L_000d78b4:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d78b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d78bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d78c0:;
    {
        cpu->r[2] = 0x0000010eu;
    }
L_000d78c4:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d78c8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000d78cc:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000d78d0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_000d78d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000d78d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x0000001cu;
        }
    }
L_000d78dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x0000000cu;
        }
    }
L_000d78e0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000d78e4:;
    {
        cpu->r[14] = 0x000d78e8u; fn_000ad19c(cpu);
    }
L_000d78e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d78ec:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000d78f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d78f4:;
    {
        cpu->r[2] = 0x000001c2u;
    }
L_000d78f8:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000d78fc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000d7900:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d7904:;
    {
        cpu->r[14] = 0x000d7908u; fn_000ad19c(cpu);
    }
L_000d7908:;
    {
        goto L_000d76b4;
    }
L_000d790c:;
    {
        cpu->r[14] = 0x000d7910u; fn_000bc020(cpu);
    }
L_000d7910:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000d7914:;
    {
        cpu->r[3] = 0x00001b44u;
    }
L_000d7918:;
    {
        cpu->r[4] = rd32(0x000d7920u + + 0x98u);
    }
L_000d791c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7920:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_000d7924:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000d7928:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_000d792c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4dcu);
    }
L_000d7930:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000d7934:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d7938:;
    {
        cpu->r[14] = 0x000d793cu; fn_000bc020(cpu);
    }
L_000d793c:;
    {
        goto L_000d74f4;
    }
L_000d7940:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00001640u, 0, 0);
    }
L_000d7944:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000290u, 0, 0);
    }
L_000d7948:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d794c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000d7950:;
    {
        cpu->r[14] = 0x000d7954u; fn_0015d718(cpu);
    }
L_000d7954:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x58cu);
    }
L_000d7958:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d795c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000d7960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000018c0u, 0, 0);
    }
L_000d7964:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000032u, 0, 0);
    }
L_000d7968:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d796c:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_000d7970:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000d7974:;
    {
        cpu->r[1] = rd32(cpu->r[12] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_000d7978:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d797c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_000d7980:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_000d7984:;
    {
        cpu->r[14] = 0x000d7988u; fn_000f38e8(cpu);
    }
L_000d7988:;
    {
        goto L_000d78b4;
    }
L_000d798c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000290u, 0, 0);
    }
L_000d7990:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000d7994:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d7998:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d799c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d79a0:;
    {
        cpu->r[14] = 0x000d79a4u; fn_000ae830(cpu);
    }
L_000d79a4:;
    {
        goto L_000d78b4;
    }
L_000d79a8:;
    {
        cpu->r[4] = rd32(0x000d79b0u + + 0x8u);
    }
L_000d79ac:;
    {
        goto L_000d7934;
    }
}

/* _ZN5Scene25RenderSkillPointsMessagesEv @ 000d79e0 (arm) */
void fn_000d79e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d79e0:;
    {
        cpu->r[3] = 0x00008d74u;
    }
L_000d79e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d79e8:;
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
L_000d79ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d79f0:;
    {
        cpu->r[4] = rd32(0x000d79f8u + + 0x284u);
    }
L_000d79f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_000d79f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d79fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d7a00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d7a04:;
    {
        cpu->r[4] = add_flags(cpu, 0x000d7a0cu, cpu->r[4], 0, 0);
    }
L_000d7a08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d7a0c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d7a10:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000d7a14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7bbc;
        }
    }
L_000d7a18:;
    {
        cpu->r[7] = rd32(0x000d7a20u + + 0x260u);
    }
L_000d7a1c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d7a20:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d7a24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d7a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7c00;
        }
    }
L_000d7a2c:;
    {
        cpu->r[6] = rd32(0x000d7a34u + + 0x250u);
    }
L_000d7a30:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d7a34:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_000d7a38:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7a3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7a40:;
    {
        cpu->r[14] = 0x000d7a44u; fn_00096a08(cpu);
    }
L_000d7a44:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d7a48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7a4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d7a50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7a54:;
    {
        cpu->r[14] = 0x000d7a58u; fn_0018aa44(cpu);
    }
L_000d7a58:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d7a5c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d7a60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d7a64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7bc4;
        }
    }
L_000d7a68:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000d7a6c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_000d7a70:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d7a74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d7a78:;
    {
        cpu->r[14] = 0x000d7a7cu; fn_00096a08(cpu);
    }
L_000d7a7c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7a80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d7a84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d7a88:;
    {
        cpu->r[14] = 0x000d7a8cu; fn_0018aa44(cpu);
    }
L_000d7a8c:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_000d7a90:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000d7a94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7a98:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d7a9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d7ab0;
        }
    }
L_000d7aa0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d7aa4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000d7aa8:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_000d7aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7c44;
        }
    }
L_000d7ab0:;
    {
        cpu->r[3] = 0x00001b4cu;
    }
L_000d7ab4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7ab8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7abc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7ac0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d7bbc;
        }
    }
L_000d7ac4:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d7ac8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7acc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7ad0:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000d7ad4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d7ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000d7adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7bbc;
        }
    }
L_000d7ae0:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_000d7ae4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000d7ae8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_000d7aec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00011800u, 0, 0);
    }
L_000d7af0:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[1]);
    }
L_000d7af4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000350u, 0, 0);
    }
L_000d7af8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000d7afc:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[2]);
    }
L_000d7b00:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_000d7b04:;
    {
        cpu->r[14] = 0x000d7b08u; fn_000960f4(cpu);
    }
L_000d7b08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7b0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7c68;
        }
    }
L_000d7b10:;
    {
        cpu->r[9] = rd32(0x000d7b18u + + 0x170u);
    }
L_000d7b14:;
    {
        cpu->r[3] = 0x000000c8u;
    }
L_000d7b18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000d7b1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d7b20:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d7b24:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d7b28:;
    {
        cpu->r[14] = 0x000d7b2cu; fn_000a9818(cpu);
    }
L_000d7b2c:;
    {
        cpu->r[3] = rd32(0x000d7b34u + + 0x158u);
    }
L_000d7b30:;
    {
        cpu->r[7] = 0x00001b4cu;
    }
L_000d7b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d7b38:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d7b3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7b40:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d7b44:;
    {
        cpu->r[4] = rd32(cpu->r[2]);
    }
L_000d7b48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d7b4c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_000d7b50:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_000d7b54:;
    {
        cpu->r[3] = 0x0000006eu;
    }
L_000d7b58:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000d7b5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d7b60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000d7b64:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000d7b68:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000d7b6c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000d7b70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000d7b74:;
    {
        cpu->r[3] = 0x00000011u;
    }
L_000d7b78:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d7b7c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 8u, &shc), cpu->r[0], 1, 0);
    }
L_000d7b80:;
    {
        cpu->r[14] = 0x000d7b84u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000d7b84:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000d7b88:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d7b8c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d7b90:;
    {
        cpu->r[12] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_000d7b94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d7b98:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 16u, &shc); cpu->r[12] = v;
    }
L_000d7b9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000d7ba0:;
    {
        cpu->r[14] = 0x000d7ba4u; fn_000ac4bc(cpu);
    }
L_000d7ba4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x54u);
    }
L_000d7ba8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_000d7bac:;
    {
        wr32(cpu->r[6] + + 0x54u, cpu->r[3]);
    }
L_000d7bb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d7bb4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000d7bb8:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000d7bbc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_000d7bc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d7bc4u)) return;
    }
L_000d7bc4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7bc8:;
    {
        cpu->r[14] = 0x000d7bccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d7bcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7bd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7a68;
        }
    }
L_000d7bd4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7bd8:;
    {
        cpu->r[14] = 0x000d7bdcu; fn_0018aa20(cpu);
    }
L_000d7bdc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7be0:;
    {
        cpu->r[14] = 0x000d7be4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7be4:;
    {
        cpu->r[3] = rd32(0x000d7becu + + 0xa4u);
    }
L_000d7be8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7bec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7bf0:;
    {
        cpu->r[3] = rd32(0x000d7bf8u + + 0x9cu);
    }
L_000d7bf4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7bf8:;
    {
        cpu->r[14] = 0x000d7bfcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7bfc:;
    {
        goto L_000d7a68;
    }
L_000d7c00:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7c04:;
    {
        cpu->r[14] = 0x000d7c08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d7c08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7a2c;
        }
    }
L_000d7c10:;
    {
        cpu->r[6] = rd32(0x000d7c18u + + 0x6cu);
    }
L_000d7c14:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d7c18:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d7c1c:;
    {
        cpu->r[14] = 0x000d7c20u; fn_0018aa20(cpu);
    }
L_000d7c20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d7c24:;
    {
        cpu->r[14] = 0x000d7c28u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7c28:;
    {
        cpu->r[3] = rd32(0x000d7c30u + + 0x60u);
    }
L_000d7c2c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d7c30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7c34:;
    {
        cpu->r[3] = rd32(0x000d7c3cu + + 0x58u);
    }
L_000d7c38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7c3c:;
    {
        cpu->r[14] = 0x000d7c40u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7c40:;
    {
        goto L_000d7a30;
    }
L_000d7c44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d7c48:;
    {
        cpu->r[2] = 0x00008cacu;
    }
L_000d7c4c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d7c50:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000d7c54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d7c58:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000d7c5c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00008cb0u;
        }
    }
L_000d7c60:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000d7c64:;
    {
        goto L_000d7ab0;
    }
L_000d7c68:;
    {
        cpu->r[9] = rd32(0x000d7c70u + + 0x18u);
    }
L_000d7c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d7c70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d7c74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 0);
    }
L_000d7c78:;
    {
        goto L_000d7b18;
    }
}

/* _ZN5Scene19Zone_Message_UpdateEv @ 000d7c98 (arm) */
void fn_000d7c98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d7c98:;
    {
        cpu->r[3] = 0x00004218u;
    }
L_000d7c9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7ca0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000d7ca4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d7ca8:;
    {
        cpu->r[5] = rd32(0x000d7cb0u + + 0x210u);
    }
L_000d7cac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000d7cb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7cb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d7cb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d7cc0u, cpu->r[5], 0, 0);
    }
L_000d7cbc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d7d5c;
        }
    }
L_000d7cc0:;
    {
        cpu->r[3] = rd32(0x000d7cc8u + + 0x1fcu);
    }
L_000d7cc4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7cc8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d7ccc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d7cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7d64;
        }
    }
L_000d7cd4:;
    {
        cpu->r[6] = rd32(0x000d7cdcu + + 0x1ecu);
    }
L_000d7cd8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d7cdc:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d7ce0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7ce4:;
    {
        cpu->r[14] = 0x000d7ce8u; fn_0018aa44(cpu);
    }
L_000d7ce8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7e88;
        }
    }
L_000d7cf0:;
    {
        cpu->r[2] = 0x00004210u;
    }
L_000d7cf4:;
    {
        cpu->r[3] = 0x00004214u;
    }
L_000d7cf8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d7cfc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7d00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_000d7d04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d7d08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7d0c:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_000d7d10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d7d14:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d7d18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000d7d1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000d7d20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000d7d24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7d28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000d7d2c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d7d30:;
    {
        cpu->r[3] = 0x00004218u;
    }
L_000d7d34:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7d38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7d3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000d7d40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7da8;
        }
    }
L_000d7d44:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000d7d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7e44;
        }
    }
L_000d7d4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d7d50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7d5c;
        }
    }
L_000d7d54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7d58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7e54;
        }
    }
L_000d7d5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000d7d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d7d64u)) return;
    }
L_000d7d64:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7d68:;
    {
        cpu->r[14] = 0x000d7d6cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d7d6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7d70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7cd4;
        }
    }
L_000d7d74:;
    {
        cpu->r[6] = rd32(0x000d7d7cu + + 0x14cu);
    }
L_000d7d78:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d7d7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7d80:;
    {
        cpu->r[14] = 0x000d7d84u; fn_0018aa20(cpu);
    }
L_000d7d84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d7d88:;
    {
        cpu->r[14] = 0x000d7d8cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d7d8c:;
    {
        cpu->r[3] = rd32(0x000d7d94u + + 0x138u);
    }
L_000d7d90:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d7d94:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7d98:;
    {
        cpu->r[3] = rd32(0x000d7da0u + + 0x130u);
    }
L_000d7d9c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7da0:;
    {
        cpu->r[14] = 0x000d7da4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000d7da4:;
    {
        goto L_000d7cd8;
    }
L_000d7da8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d7dac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00004214u;
        }
    }
L_000d7db0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
        }
    }
L_000d7db4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_000d7db8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d7dd4;
        }
    }
L_000d7dbc:;
    {
        cpu->r[5] = 0x00004214u;
    }
L_000d7dc0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000d7dc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d7dc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_000d7dcc:;
    {
        cpu->r[14] = 0x000d7dd0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000d7dd0:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[1]);
    }
L_000d7dd4:;
    {
        cpu->r[14] = 0x000d7dd8u; fn_0009b4d0(cpu);
    }
L_000d7dd8:;
    {
        cpu->r[3] = 0x00004208u;
    }
L_000d7ddc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7de0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7de4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_000d7de8:;
    {
        cpu->r[0] = 0x00000043u;
    }
L_000d7dec:;
    {
        cpu->r[14] = 0x000d7df0u; fn_00093f34(cpu);
    }
L_000d7df0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d7df4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000d7df8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d7dfc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000d7e00:;
    {
        if (cond_test(cpu, 4)) {
        goto L_000d7d5c;
        }
    }
L_000d7e04:;
    {
        cpu->r[2] = 0x0000420cu;
    }
L_000d7e08:;
    {
        cpu->r[0] = 0x00004218u;
    }
L_000d7e0c:;
    {
        cpu->r[1] = 0x00004210u;
    }
L_000d7e10:;
    {
        cpu->r[3] = 0x00004214u;
    }
L_000d7e14:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e18:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e1c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e24:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000d7e28:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000d7e2c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000d7e30:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000d7e34:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d7e38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d7e3c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d7e40:;
    {
        goto L_000d7d5c;
    }
L_000d7e44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d7e48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_000d7e4c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d7e50:;
    {
        goto L_000d7d5c;
    }
L_000d7e54:;
    {
        cpu->r[0] = 0x00004210u;
    }
L_000d7e58:;
    {
        cpu->r[1] = 0x00004214u;
    }
L_000d7e5c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e60:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e64:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000d7e68:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000d7e6c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000d7e70:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000d7e74:;
    {
        cpu->r[14] = 0x000d7e78u; fn_0009b4d0(cpu);
    }
L_000d7e78:;
    {
        cpu->r[3] = 0x00004208u;
    }
L_000d7e7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7e80:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d7e84:;
    {
        goto L_000d7d5c;
    }
L_000d7e88:;
    {
        cpu->r[1] = rd32(0x000d7e90u + + 0x44u);
    }
L_000d7e8c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d7e90:;
    {
        cpu->r[12] = rd32(0x000d7e98u + + 0x40u);
    }
L_000d7e94:;
    {
        cpu->r[14] = 0x00003282u;
    }
L_000d7e98:;
    {
        cpu->r[2] = rd32(0x000d7ea0u + + 0x3cu);
    }
L_000d7e9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000d7ea4u, cpu->r[1], 0, 0);
    }
L_000d7ea0:;
    {
        cpu->r[3] = rd32(0x000d7ea8u + + 0x38u);
    }
L_000d7ea4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000d7eacu, cpu->r[12], 0, 0);
    }
L_000d7ea8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d7eb0u, cpu->r[2], 0, 0);
    }
L_000d7eac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002e8u, 0, 0);
    }
L_000d7eb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000d7eb8u, cpu->r[3], 0, 0);
    }
L_000d7eb4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000d7eb8:;
    {
        cpu->r[14] = 0x000d7ebcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d7ebc:;
    {
        goto L_000d7cf0;
    }
}

/* _ZN5Scene6UpdateEv @ 000d7ee4 (arm) */
void fn_000d7ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d7ee4:;
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
L_000d7ee8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000d7eec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d7ef0:;
    {
        cpu->r[14] = 0x000d7ef4u; fn_000a607c(cpu);
    }
L_000d7ef4:;
    {
        cpu->r[3] = 0x0000434cu;
    }
L_000d7ef8:;
    {
        cpu->r[5] = rd32(0x000d7f00u + + 0xf44u);
    }
L_000d7efc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7f00:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d7f08u, cpu->r[5], 0, 0);
    }
L_000d7f04:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d7f08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7f0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8134;
        }
    }
L_000d7f10:;
    {
        cpu->r[6] = rd32(0x000d7f18u + + 0xf30u);
    }
L_000d7f14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d7f18:;
    {
        cpu->r[14] = 0x000d7f1cu; fn_000c6904(cpu);
    }
L_000d7f1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d7f20:;
    {
        cpu->r[14] = 0x000d7f24u; fn_000b981c(cpu);
    }
L_000d7f24:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000d7f28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d7f2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d7f30:;
    {
        cpu->r[14] = 0x000d7f34u; fn_0015b9b8(cpu);
    }
L_000d7f34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d7f38:;
    {
        cpu->r[14] = 0x000d7f3cu; fn_000cdfd0(cpu);
    }
L_000d7f3c:;
    {
        cpu->r[3] = 0x000042fcu;
    }
L_000d7f40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d7f44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d7f48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d7f4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d7f50:;
    {
        vfp_sync_flags(cpu);
    }
L_000d7f54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d7f6c;
        }
    }
L_000d7f58:;
    {
        cpu->r[3] = rd32(0x000d7f60u + + 0xeecu);
    }
L_000d7f5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7f60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d7f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d84b8;
        }
    }
L_000d7f6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d7f70:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d7f74:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d7f78:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d7f7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d83ac;
        }
    }
L_000d7f84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d7f88:;
    {
        cpu->r[14] = 0x000d7f8cu; fn_000bc2fc(cpu);
    }
L_000d7f8c:;
    {
        cpu->r[3] = rd32(0x000d7f94u + + 0xebcu);
    }
L_000d7f90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d7f94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d7f98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d7f9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d839c;
        }
    }
L_000d7fa0:;
    {
        cpu->r[7] = 0x00004258u;
    }
L_000d7fa4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d7fa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d7fac:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000d7fb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8018;
        }
    }
L_000d7fb4:;
    {
        cpu->r[8] = 0x00008c50u;
    }
L_000d7fb8:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d7fbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d7fc0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d7fc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d7fc8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d7fcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d7fd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d7fd4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d7fd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d7fdc:;
    {
        cpu->r[14] = 0x000d7fe4u;
    }
L_000d7fe0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d7fe4u)) return;
    }
L_000d7fe4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d7fe8:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_000d7fec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d7ff0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_000d7ff4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d7ff8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_000d7ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_000d8000:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[2] = v;
    }
L_000d8004:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[0] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000d8008:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000d800c:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 6u, &shc), cpu->r[2], 1, 0);
    }
L_000d8010:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000d8014:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d8464;
        }
    }
L_000d8018:;
    {
        cpu->r[3] = 0x00004260u;
    }
L_000d801c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8020:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8024:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000d8028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8058;
        }
    }
L_000d802c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d8030:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000d8034:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d8038:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d803c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d8040:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d804c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8050:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8054:;
    {
        cpu->r[14] = 0x000d8058u; fn_00165670(cpu);
    }
L_000d8058:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d805c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d8060:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8064:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8068:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d806c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8084;
        }
    }
L_000d8070:;
    {
        cpu->r[2] = 0x00004334u;
    }
L_000d8074:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d8078:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d807c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d8080:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d82e0;
        }
    }
L_000d8084:;
    {
        cpu->r[7] = 0x00001c90u;
    }
L_000d8088:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d808c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d8090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_000d8094:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000d8098:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d885c;
        }
    }
L_000d809c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d80a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d80a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d80a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d80ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8444;
        }
    }
L_000d80b0:;
    {
        cpu->r[3] = rd32(0x000d80b8u + + 0xd9cu);
    }
L_000d80b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d80b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d80bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d80c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d83e4;
        }
    }
L_000d80c4:;
    {
        cpu->r[3] = rd32(0x000d80ccu + + 0xd8cu);
    }
L_000d80c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d80cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d80d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d80d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8408;
        }
    }
L_000d80d8:;
    {
        cpu->r[3] = rd32(0x000d80e0u + + 0xd7cu);
    }
L_000d80dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d80e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d80e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d80e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8424;
        }
    }
L_000d80ec:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d80f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d80f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d80f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d80fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d81a0;
        }
    }
L_000d8100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8104:;
    {
        cpu->r[14] = 0x000d8108u; fn_000d5180(cpu);
    }
L_000d8108:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d810c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8110:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d8114:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d8118:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d811c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8634;
        }
    }
L_000d8120:;
    {
        cpu->r[14] = 0x000d8124u; fn_00096b88(cpu);
    }
L_000d8124:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8650;
        }
    }
L_000d812c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d8130:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d8134u)) return;
    }
L_000d8134:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d8138:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d813c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8140:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8144:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d814c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8150:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8154:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d8158:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d815c:;
    {
        uint32_t v = cpu->r[12] & 0x04000000u; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_000d8160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d835c;
        }
    }
L_000d8164:;
    {
        cpu->r[6] = rd32(0x000d816cu + + 0xcdcu);
    }
L_000d8168:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_000d816c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8170:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8174:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8178:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000004du, 0, 0);
    }
L_000d817c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000d8180:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x0000009bu, 1, 0);
    }
L_000d8184:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000016u, 1, 1);
    }
L_000d8188:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000d85cc;
        }
    }
L_000d818c:;
    {
        cpu->r[3] = 0x0000434cu;
    }
L_000d8190:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d8194:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8198:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d819c:;
    {
        goto L_000d7f14;
    }
L_000d81a0:;
    {
        cpu->r[2] = rd32(0x000d81a8u + + 0xcb8u);
    }
L_000d81a4:;
    {
        cpu->r[3] = 0x000082dcu;
    }
L_000d81a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d81ac:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d81b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d81b4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d81b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000100u, 0, 0);
    }
L_000d81bc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d81c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d81c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d87f4;
        }
    }
L_000d81c8:;
    {
        cpu->r[3] = rd32(0x000d81d0u + + 0xc94u);
    }
L_000d81cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d81d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d81d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d81d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d87e8;
        }
    }
L_000d81dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d81e0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d81e4:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000d81e8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d81ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d81f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_000d81f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8800;
        }
    }
L_000d81f8:;
    {
        cpu->r[3] = rd32(0x000d8200u + + 0xc68u);
    }
L_000d81fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8200:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d84c4;
        }
    }
L_000d820c:;
    {
        cpu->r[3] = rd32(0x000d8214u + + 0xc58u);
    }
L_000d8210:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8214:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d821c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d884c;
        }
    }
L_000d8220:;
    {
        cpu->r[3] = rd32(0x000d8228u + + 0xc48u);
    }
L_000d8224:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8228:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d822c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8230:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d883c;
        }
    }
L_000d8234:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8238:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d823c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d8240:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d8244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d882c;
        }
    }
L_000d824c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d8250:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000d8254:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d825c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8260:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000d8264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8890;
        }
    }
L_000d8268:;
    {
        cpu->r[3] = rd32(0x000d8270u + + 0xc04u);
    }
L_000d826c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8270:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8274:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8820;
        }
    }
L_000d827c:;
    {
        cpu->r[3] = rd32(0x000d8284u + + 0xbf4u);
    }
L_000d8280:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8284:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d828c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d84e8;
        }
    }
L_000d8290:;
    {
        cpu->r[3] = rd32(0x000d8298u + + 0xbe4u);
    }
L_000d8294:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8298:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d829c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d82a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d880c;
        }
    }
L_000d82a4:;
    {
        cpu->r[3] = rd32(0x000d82acu + + 0xbd4u);
    }
L_000d82a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d82ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d82b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d82b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d87dc;
        }
    }
L_000d82b8:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d82bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d82c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d82c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000d82c8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000d870c;
        case 1: goto L_000d86bc;
        case 2: goto L_000d85e8;
        case 3: goto L_000d8734;
        default: guest_unimplemented(cpu, 0x000d82c8u); return; }
        }
    }
L_000d82cc:;
    {
        goto L_000d861c;
    }
L_000d82e0:;
    {
        cpu->r[2] = 0x0000672du;
    }
L_000d82e4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d82e8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d82ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d84f8;
        }
    }
L_000d82f0:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_000d82f4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d82f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d82fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d83b8;
        }
    }
L_000d8300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8304:;
    {
        cpu->r[14] = 0x000d8308u; fn_000c1cd8(cpu);
    }
L_000d8308:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d830c:;
    {
        cpu->r[14] = 0x000d8310u; fn_000f34a0(cpu);
    }
L_000d8310:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000d8314:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000d8318:;
    {
        cpu->r[14] = 0x000d8320u;
    }
L_000d831c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d8320u)) return;
    }
L_000d8320:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d812c;
        }
    }
L_000d8328:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d832c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000d8330:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8334:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d8338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8348;
        }
    }
L_000d833c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8340:;
    {
        cpu->r[14] = 0x000d8344u; fn_000bda4c(cpu);
    }
L_000d8344:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8348:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d834c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000d8350:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d8354:;
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
L_000d8358:;
    {
        return fn_0018cbb0(cpu);
    }
L_000d835c:;
    {
        cpu->r[6] = rd32(0x000d8364u + + 0xae4u);
    }
L_000d8360:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_000d8364:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8368:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d836c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8370:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_000d8374:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000d8378:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000016u, 1, 1);
    }
L_000d837c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000009bu, 0, 0);
    }
L_000d8380:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000d818c;
        }
    }
L_000d8384:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d8388:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d838c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d8390:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d8394:;
    {
        cpu->r[14] = 0x000d8398u; fn_000fd248(cpu);
    }
L_000d8398:;
    {
        goto L_000d818c;
    }
L_000d839c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00009f00u, 0, 0);
    }
L_000d83a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000d83a4:;
    {
        cpu->r[14] = 0x000d83a8u; fn_00146dd0(cpu);
    }
L_000d83a8:;
    {
        goto L_000d7fa0;
    }
L_000d83ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d83b0:;
    {
        cpu->r[14] = 0x000d83b4u; fn_000df074(cpu);
    }
L_000d83b4:;
    {
        goto L_000d7f84;
    }
L_000d83b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d83bc:;
    {
        cpu->r[14] = 0x000d83c0u; fn_000c1cd8(cpu);
    }
L_000d83c0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d83c4:;
    {
        cpu->r[14] = 0x000d83c8u; fn_000f34a0(cpu);
    }
L_000d83c8:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000d83cc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000d83d0:;
    {
        cpu->r[14] = 0x000d83d8u;
    }
L_000d83d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d83d8u)) return;
    }
L_000d83d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d83dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8084;
        }
    }
L_000d83e0:;
    {
        goto L_000d812c;
    }
L_000d83e4:;
    {
        cpu->r[3] = 0x000042d0u;
    }
L_000d83e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d83ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d83f0:;
    {
        cpu->r[14] = 0x000d83f4u; fn_00186b78(cpu);
    }
L_000d83f4:;
    {
        cpu->r[3] = rd32(0x000d83fcu + + 0xa5cu);
    }
L_000d83f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d83fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8400:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d80d8;
        }
    }
L_000d8408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d840c:;
    {
        cpu->r[14] = 0x000d8410u; fn_000bdab8(cpu);
    }
L_000d8410:;
    {
        cpu->r[3] = rd32(0x000d8418u + + 0xa44u);
    }
L_000d8414:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8418:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d841c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d80ec;
        }
    }
L_000d8424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8428:;
    {
        cpu->r[14] = 0x000d842cu; fn_000c3dfc(cpu);
    }
L_000d842c:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d8430:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8438:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d843c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d8100;
        }
    }
L_000d8440:;
    {
        goto L_000d81a0;
    }
L_000d8444:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d8448:;
    {
        cpu->r[14] = 0x000d844cu; fn_000a2764(cpu);
    }
L_000d844c:;
    {
        cpu->r[3] = rd32(0x000d8454u + + 0xa00u);
    }
L_000d8450:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d8454:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d8458:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d845c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d80c4;
        }
    }
L_000d8460:;
    {
        goto L_000d83e4;
    }
L_000d8464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d8468:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d846c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8478:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d847c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d8480:;
    {
        cpu->r[14] = 0x000d8484u; fn_00175128(cpu);
    }
L_000d8484:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000d8488:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000d848c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8490:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8494:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d849c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d84a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d84a4:;
    {
        uint32_t v = cpu->r[1] | 0x00000040u; cpu->r[1] = v;
    }
L_000d84a8:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000d84ac:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000d84b0:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000d84b4:;
    {
        goto L_000d8018;
    }
L_000d84b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d84bc:;
    {
        cpu->r[14] = 0x000d84c0u; fn_000c4c34(cpu);
    }
L_000d84c0:;
    {
        goto L_000d7f6c;
    }
L_000d84c4:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000d84c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d84cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d84d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d84d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d820c;
        }
    }
L_000d84d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d84dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d84e0:;
    {
        cpu->r[14] = 0x000d84e4u; fn_000d1950(cpu);
    }
L_000d84e4:;
    {
        goto L_000d820c;
    }
L_000d84e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d84ec:;
    {
        cpu->r[14] = 0x000d84f0u; fn_00097924(cpu);
    }
L_000d84f0:;
    {
        cpu->r[14] = 0x000d84f4u; fn_00157444(cpu);
    }
L_000d84f4:;
    {
        goto L_000d8290;
    }
L_000d84f8:;
    {
        cpu->r[0] = rd32(0x000d8500u + + 0x984u);
    }
L_000d84fc:;
    {
        cpu->r[0] = add_flags(cpu, 0x000d8504u, cpu->r[0], 0, 0);
    }
L_000d8500:;
    {
        cpu->r[14] = 0x000d8504u; fn_001d0ac4(cpu);
    }
L_000d8504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8508:;
    {
        cpu->r[14] = 0x000d850cu; fn_000c1cd8(cpu);
    }
L_000d850c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8510:;
    {
        cpu->r[14] = 0x000d8514u; fn_000f34a0(cpu);
    }
L_000d8514:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000d8518:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000d851c:;
    {
        cpu->r[14] = 0x000d8524u;
    }
L_000d8520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d8524u)) return;
    }
L_000d8524:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8528:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d812c;
        }
    }
L_000d852c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8530:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_000d8534:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8538:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d853c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8c84;
        }
    }
L_000d8540:;
    {
        cpu->r[2] = 0x0000672eu;
    }
L_000d8544:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8548:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d854c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8588;
        }
    }
L_000d8550:;
    {
        cpu->r[1] = 0x000063e8u;
    }
L_000d8554:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000d8558:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d855c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8588;
        }
    }
L_000d8560:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x316u);
    }
L_000d8564:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d8568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8588;
        }
    }
L_000d856c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8570:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8574:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000d8578:;
    {
        cpu->r[14] = 0x000d857cu; fn_000bd20c(cpu);
    }
L_000d857c:;
    {
        cpu->r[0] = rd32(0x000d8584u + + 0x904u);
    }
L_000d8580:;
    {
        cpu->r[0] = add_flags(cpu, 0x000d8588u, cpu->r[0], 0, 0);
    }
L_000d8584:;
    {
        cpu->r[14] = 0x000d8588u; fn_001d0ac4(cpu);
    }
L_000d8588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d858c:;
    {
        cpu->r[14] = 0x000d8590u; fn_000c0da4(cpu);
    }
L_000d8590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8594:;
    {
        cpu->r[14] = 0x000d8598u; fn_000d513c(cpu);
    }
L_000d8598:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000d859c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d85a0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d85a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d85a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d85b8;
        }
    }
L_000d85ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d85b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d85b4:;
    {
        cpu->r[14] = 0x000d85b8u; fn_000d1950(cpu);
    }
L_000d85b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d85bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d85c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d85c4:;
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
L_000d85c8:;
    {
        return fn_000cdeb8(cpu);
    }
L_000d85cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d85d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d85d4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000d85d8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d85dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d85e0:;
    {
        cpu->r[14] = 0x000d85e4u; fn_000fd248(cpu);
    }
L_000d85e4:;
    {
        goto L_000d818c;
    }
L_000d85e8:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000d85ec:;
    {
        cpu->r[3] = 0x00004324u;
    }
L_000d85f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d85f4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d85f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d85fc:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_000d8600:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8604:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d8608:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000d860c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d8610:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_000d8614:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000d8618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d89f8;
        }
    }
L_000d861c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8620:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8624:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d8628:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d862c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8120;
        }
    }
L_000d8634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8638:;
    {
        cpu->r[14] = 0x000d863cu; fn_000c116c(cpu);
    }
L_000d863c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8640:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8644:;
    {
        cpu->r[14] = 0x000d8648u; fn_00096b88(cpu);
    }
L_000d8648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d864c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d812c;
        }
    }
L_000d8650:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8654:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000d8658:;
    {
        cpu->r[14] = 0x000d865cu; fn_000995c0(cpu);
    }
L_000d865c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d812c;
        }
    }
L_000d8664:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d8668:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000d866c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8670:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000d8674:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8678:;
    {
        cpu->r[14] = 0x000d867cu; fn_000c0d80(cpu);
    }
L_000d867c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000d8680:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d8684:;
    {
        cpu->r[14] = 0x000d8688u; fn_0018cbe8(cpu);
    }
L_000d8688:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000d868c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8690:;
    {
        cpu->r[14] = 0x000d8694u; fn_00099b14(cpu);
    }
L_000d8694:;
    {
        cpu->r[5] = rd32(cpu->r[4]);
    }
L_000d8698:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_000d869c:;
    {
        cpu->r[14] = 0x000d86a0u; fn_0018ba6c(cpu);
    }
L_000d86a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d86a4:;
    {
        cpu->r[14] = 0x000d86a8u; fn_00108b6c(cpu);
    }
L_000d86a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d86ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000d86b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d86b4:;
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
L_000d86b8:;
    {
        return fn_000f361c(cpu);
    }
L_000d86bc:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d86c0:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000d86c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d86c8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000d86cc:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d86d0:;
    {
        cpu->r[14] = 0x000d86d4u; fn_000c0d80(cpu);
    }
L_000d86d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d86d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d86dc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000d86e0:;
    {
        cpu->r[14] = 0x000d86e4u; fn_000c2320(cpu);
    }
L_000d86e4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d86e8:;
    {
        cpu->r[14] = 0x000d86ecu; fn_00096b88(cpu);
    }
L_000d86ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d86f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8b54;
        }
    }
L_000d86f4:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d86f8:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000d86fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8700:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8704:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d8708:;
    {
        goto L_000d8110;
    }
L_000d870c:;
    {
        cpu->r[2] = 0x00004324u;
    }
L_000d8710:;
    {
        cpu->r[3] = 0x00004348u;
    }
L_000d8714:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8718:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d871c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8720:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d8724:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d8728:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d872c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000d8730:;
    {
        goto L_000d8110;
    }
L_000d8734:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d8738:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_000d873c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8744:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8748:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000d874c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8c64;
        }
    }
L_000d8750:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8754:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000d8758:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d875c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8760:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d8764:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d8768:;
    {
        cpu->r[8] = rd8(cpu->r[3] + cpu->r[1]);
    }
L_000d876c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d8770:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000d8774:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d8778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8a18;
        }
    }
L_000d877c:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_000d8780:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_000d8784:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000d8788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8d08;
        }
    }
L_000d878c:;
    {
        cpu->r[2] = 0x00001c34u;
    }
L_000d8790:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8794:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000d8798:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d879c:;
    {
        cpu->r[8] = rd32(cpu->r[12]);
    }
L_000d87a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000d87a4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000d87a8:;
    {
        cpu->r[14] = 0x000d87acu; fn_0018ba6c(cpu);
    }
L_000d87ac:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000d87b0:;
    {
        cpu->r[14] = 0x000d87b4u; fn_001acb30(cpu);
    }
L_000d87b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d87b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d87bc:;
    {
        cpu->r[14] = 0x000d87c0u; fn_000f361c(cpu);
    }
L_000d87c0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d87c4:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d87c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d87cc:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d87d0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_000d87d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d87d8:;
    {
        goto L_000d8110;
    }
L_000d87dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d87e0:;
    {
        cpu->r[14] = 0x000d87e4u; fn_000be36c(cpu);
    }
L_000d87e4:;
    {
        goto L_000d82b8;
    }
L_000d87e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d87ec:;
    {
        cpu->r[14] = 0x000d87f0u; fn_000e4f90(cpu);
    }
L_000d87f0:;
    {
        goto L_000d81dc;
    }
L_000d87f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d87f8:;
    {
        cpu->r[14] = 0x000d87fcu; fn_000d513c(cpu);
    }
L_000d87fc:;
    {
        goto L_000d81c8;
    }
L_000d8800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8804:;
    {
        cpu->r[14] = 0x000d8808u; fn_000b9ad8(cpu);
    }
L_000d8808:;
    {
        goto L_000d81f8;
    }
L_000d880c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8810:;
    {
        cpu->r[14] = 0x000d8814u; fn_000b9ea0(cpu);
    }
L_000d8814:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8818:;
    {
        cpu->r[14] = 0x000d881cu; fn_000d7c98(cpu);
    }
L_000d881c:;
    {
        goto L_000d82a4;
    }
L_000d8820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8824:;
    {
        cpu->r[14] = 0x000d8828u; fn_000df874(cpu);
    }
L_000d8828:;
    {
        goto L_000d827c;
    }
L_000d882c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8830:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8834:;
    {
        cpu->r[14] = 0x000d8838u; fn_000de340(cpu);
    }
L_000d8838:;
    {
        goto L_000d824c;
    }
L_000d883c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8840:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8844:;
    {
        cpu->r[14] = 0x000d8848u; fn_000e56e0(cpu);
    }
L_000d8848:;
    {
        goto L_000d8234;
    }
L_000d884c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8850:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8854:;
    {
        cpu->r[14] = 0x000d8858u; fn_000cdeb8(cpu);
    }
L_000d8858:;
    {
        goto L_000d8220;
    }
L_000d885c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8860:;
    {
        cpu->r[3] = 0x00001bd0u;
    }
L_000d8864:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000d8868:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d886c:;
    {
        cpu->r[14] = 0x000d8870u; fn_00096b5c(cpu);
    }
L_000d8870:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000d8874:;
    {
        cpu->r[2] = 0x0000009cu;
    }
L_000d8878:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x438u);
    }
L_000d887c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[3]; cpu->r[3] = v;
    }
L_000d8880:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d8884:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_000d8888:;
    {
        cpu->r[14] = 0x000d888cu; fn_00099b28(cpu);
    }
L_000d888c:;
    {
        goto L_000d80b0;
    }
L_000d8890:;
    {
        cpu->r[2] = 0x00003e80u;
    }
L_000d8894:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d8898:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000d889c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d88a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d88e8;
        }
    }
L_000d88a4:;
    {
        cpu->r[1] = 0x00003e78u;
    }
L_000d88a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d88ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d88b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d88b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8268;
        }
    }
L_000d88b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d88bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d88c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d88c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d88c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d88cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1b0u);
    }
L_000d88d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d88d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8268;
        }
    }
L_000d88d8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000d88dc:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d88e0:;
    {
        cpu->r[2] = 0x00001674u;
    }
L_000d88e4:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000d88e8:;
    {
        cpu->r[3] = 0x00003e78u;
    }
L_000d88ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d88f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d88f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x000012c0u, 1, 1);
    }
L_000d88f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d8268;
        }
    }
L_000d88fc:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000d8900:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000d8904:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8908:;
    {
        cpu->r[7] = 0x00003e78u;
    }
L_000d890c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000d8910:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d8914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00043000u, 0, 0);
    }
L_000d891c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_000d8920:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8924:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008ddcu;
        }
    }
L_000d8928:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008dd4u;
        }
    }
L_000d892c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d8930:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d8934:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000d8938:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000d893c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
        }
    }
L_000d8940:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8944:;
    {
        cpu->r[14] = 0x000d8948u; fn_0015365c(cpu);
    }
L_000d8948:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000d894c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8950:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8954:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8958:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008ddcu;
        }
    }
L_000d895c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008dd4u;
        }
    }
L_000d8960:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d8964:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000d8968:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d896c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000d8970:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
        }
    }
L_000d8974:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d897c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00005100u, 0, 0);
    }
L_000d8980:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000027u, 0, 0);
    }
L_000d8984:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000d8988:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d898c:;
    {
        cpu->r[14] = 0x000d8990u; fn_00154e38(cpu);
    }
L_000d8990:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000d8994:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8998:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d899c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d89a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00006300u, 0, 0);
    }
L_000d89a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000009cu, 0, 0);
    }
L_000d89a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d89ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000d89b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000d89b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d89b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_000d89bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000d89c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d89c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_000d89c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
        }
    }
L_000d89cc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d89d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d89d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_000d89d8:;
    {
        cpu->r[14] = 0x000d89dcu; fn_0015d718(cpu);
    }
L_000d89dc:;
    {
        cpu->r[3] = 0x00003e78u;
    }
L_000d89e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d89e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d89e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d89ec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d89f0:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_000d89f4:;
    {
        goto L_000d8268;
    }
L_000d89f8:;
    {
        cpu->r[14] = 0x000d89fcu; fn_0015ca98(cpu);
    }
L_000d89fc:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d8a00:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8a04:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8a08:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d8a0c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d8a10:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d8a14:;
    {
        goto L_000d8110;
    }
L_000d8a18:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000d8a1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8a20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8a24:;
    {
        cpu->r[14] = 0x000d8a28u; fn_0015b8ec(cpu);
    }
L_000d8a28:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8a2c:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000d8a30:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8a34:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000d8a38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8a3c:;
    {
        cpu->r[14] = 0x000d8a40u; fn_000c0d80(cpu);
    }
L_000d8a40:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8a44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000d8a48:;
    {
        cpu->r[14] = 0x000d8a4cu; fn_0018cbe8(cpu);
    }
L_000d8a4c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8a50:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8a54:;
    {
        cpu->r[14] = 0x000d8a58u; fn_00099b14(cpu);
    }
L_000d8a58:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8a5c:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000d8a60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d8a64:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_000d8a68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8d28;
        }
    }
L_000d8a6c:;
    {
        cpu->r[9] = 0x00001c94u;
    }
L_000d8a70:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000d8a74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8a78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d8f88;
        }
    }
L_000d8a7c:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000d8a80:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d8a84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d8a88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8a90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8a94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8a98:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8a9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d8aa0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d8aa4:;
    {
        cpu->r[14] = 0x000d8aa8u; fn_0015d718(cpu);
    }
L_000d8aa8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8aac:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_000d8ab0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000d8ab4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d8e30;
        }
    }
L_000d8ab8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d8abc:;
    {
        cpu->r[1] = 0x0000677cu;
    }
L_000d8ac0:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_000d8ac4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d8ac8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8acc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8ad0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8ad4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8ad8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d8adc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d8ae0:;
    {
        cpu->r[14] = 0x000d8ae4u; fn_0015d718(cpu);
    }
L_000d8ae4:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000d8ae8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d8aec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d8af0:;
    {
        cpu->r[14] = 0x000d8af4u; fn_001c1268(cpu);
    }
L_000d8af4:;
    {
        cpu->r[14] = 0x000d8af8u; fn_000979a0(cpu);
    }
L_000d8af8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d8afc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8b00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8b04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8b0c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000d8b10:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8b14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d8b18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d8b1c:;
    {
        cpu->r[14] = 0x000d8b20u; fn_0015d718(cpu);
    }
L_000d8b20:;
    {
        wr32(cpu->r[9] + + 0x88u, cpu->r[0]);
    }
L_000d8b24:;
    {
        cpu->r[14] = 0x000d8b28u; fn_000979a0(cpu);
    }
L_000d8b28:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d8b2c:;
    {
        cpu->r[2] = 0x00001c74u;
    }
L_000d8b30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d8b34:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000d8b38:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_000d8b3c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d8b40:;
    {
        cpu->r[14] = 0x000d8b44u; fn_0009e9e8(cpu);
    }
L_000d8b44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8b48:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_000d8b4c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_000d8b50:;
    {
        goto L_000d869c;
    }
L_000d8b54:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_000d8b58:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d8b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d8b60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8b64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d8b68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d8b6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d8b70:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d8b74:;
    {
        cpu->r[14] = 0x000d8b78u; fn_00160bd8(cpu);
    }
L_000d8b78:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8b7c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000d8b80:;
    {
        cpu->r[3] = 0x00004324u;
    }
L_000d8b84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8b88:;
    {
        cpu->r[1] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000d8b8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8b90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d8b94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d8b98:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d8b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8bcc;
        }
    }
L_000d8ba0:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000d8ba4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d8ba8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8ec8;
        }
    }
L_000d8bb0:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000d8bb4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8bb8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d8bbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8bc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8e90;
        }
    }
L_000d8bc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8bc8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8bcc:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d8bd0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d8bd4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8bd8:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000d8bdc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d8be0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_000d8be4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_000d8be8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8d7c;
        }
    }
L_000d8bec:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000d8bf0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d8bf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8dd0;
        }
    }
L_000d8bfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8c00:;
    {
        cpu->r[14] = 0x000d8c04u; fn_000ba990(cpu);
    }
L_000d8c04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8c08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8dd0;
        }
    }
L_000d8c0c:;
    {
        cpu->r[3] = 0x00004bfcu;
    }
L_000d8c10:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8c14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d8c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8dd0;
        }
    }
L_000d8c20:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000d8c24:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8c28:;
    {
        cpu->r[7] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d8c2c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000d8c30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d861c;
        }
    }
L_000d8c34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d8c38:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d8c3c:;
    {
        cpu->r[14] = 0x000d8c40u; fn_0015ca98(cpu);
    }
L_000d8c40:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d8c44:;
    {
        cpu->r[0] = 0x00000457u;
    }
L_000d8c48:;
    {
        cpu->r[14] = 0x000d8c4cu; fn_000aeb58(cpu);
    }
L_000d8c4c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d8c50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8c54:;
    {
        cpu->r[14] = 0x000d8c58u; fn_000d6020(cpu);
    }
L_000d8c58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8c5c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d8c60:;
    {
        goto L_000d8110;
    }
L_000d8c64:;
    {
        cpu->r[2] = 0x00003e78u;
    }
L_000d8c68:;
    {
        cpu->r[1] = 0x00003e7cu;
    }
L_000d8c6c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d8c70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d8c74:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000d8c78:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000d8c7c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d8c80:;
    {
        goto L_000d8750;
    }
L_000d8c84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d8c88:;
    {
        cpu->r[14] = 0x000d8c8cu; fn_00096838(cpu);
    }
L_000d8c8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8588;
        }
    }
L_000d8c94:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000d8c98:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000d8c9c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d8ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8588;
        }
    }
L_000d8ca8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x316u);
    }
L_000d8cac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8cb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8588;
        }
    }
L_000d8cb4:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_000d8cb8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000d8cbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8cc0:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_000d8cc4:;
    {
        cpu->r[14] = 0x000d8cc8u; fn_000bd2a0(cpu);
    }
L_000d8cc8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000018u, 1, 1);
    }
L_000d8ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8cb8;
        }
    }
L_000d8cd0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8cd4:;
    {
        cpu->r[3] = 0x0000672du;
    }
L_000d8cd8:;
    {
        cpu->r[0] = rd32(0x000d8ce0u + + 0x1acu);
    }
L_000d8cdc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8ce0:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000d8ce4:;
    {
        cpu->r[0] = add_flags(cpu, 0x000d8cecu, cpu->r[0], 0, 0);
    }
L_000d8ce8:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000d8cec:;
    {
        cpu->r[14] = 0x000d8cf0u; fn_001d0ac4(cpu);
    }
L_000d8cf0:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000d8cf4:;
    {
        cpu->r[14] = 0x000d8cf8u; fn_0009b4d0(cpu);
    }
L_000d8cf8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000d8cfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d8d00:;
    {
        cpu->r[14] = 0x000d8d04u; fn_000967dc(cpu);
    }
L_000d8d04:;
    {
        goto L_000d8588;
    }
L_000d8d08:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_000d8d0c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d8d10:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d8d14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00001c30u;
        }
    }
L_000d8d18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_000d8d1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_000d8d20:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
        }
    }
L_000d8d24:;
    {
        goto L_000d878c;
    }
L_000d8d28:;
    {
        cpu->r[14] = 0x000d8d2cu; fn_00097d9c(cpu);
    }
L_000d8d2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8d30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[7]);
        }
    }
L_000d8d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8e10;
        }
    }
L_000d8d38:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_000d8d3c:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_000d8d40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d8d44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8e10;
        }
    }
L_000d8d4c:;
    {
        cpu->r[0] = 0x00000bb0u;
    }
L_000d8d50:;
    {
        cpu->r[14] = 0x000d8d54u; fn_0018ba6c(cpu);
    }
L_000d8d54:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_000d8d58:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d8d5c:;
    {
        cpu->r[3] = 0x00001678u;
    }
L_000d8d60:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000d8d64:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d8d68:;
    {
        cpu->r[14] = 0x000d8d6cu; fn_0011ad54(cpu);
    }
L_000d8d6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d8d70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d8d74:;
    {
        cpu->r[14] = 0x000d8d78u; fn_000f361c(cpu);
    }
L_000d8d78:;
    {
        goto L_000d87c0;
    }
L_000d8d7c:;
    {
        cpu->r[3] = 0x00004324u;
    }
L_000d8d80:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x418u);
    }
L_000d8d84:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8d88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d8d8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8d90:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_000d8d94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d8db8;
        }
    }
L_000d8d98:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d8d9c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d8da0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8da4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8bec;
        }
    }
L_000d8da8:;
    {
        cpu->r[3] = 0x00005f58u;
    }
L_000d8dac:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000d8db0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8dd0;
        }
    }
L_000d8db8:;
    {
        cpu->r[3] = 0x00004bfcu;
    }
L_000d8dbc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d8dc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000d8dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8110;
        }
    }
L_000d8dcc:;
    {
        goto L_000d8bec;
    }
L_000d8dd0:;
    {
        cpu->r[3] = 0x00004c00u;
    }
L_000d8dd4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8dd8:;
    {
        cpu->r[7] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d8ddc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000d8de0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d861c;
        }
    }
L_000d8de4:;
    {
        cpu->r[14] = 0x000d8de8u; fn_0015ca98(cpu);
    }
L_000d8de8:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000d8dec:;
    {
        cpu->r[2] = 0x00004324u;
    }
L_000d8df0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8df4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d8df8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8dfc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_000d8e00:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000d8e04:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_000d8e08:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d8e0c:;
    {
        goto L_000d8110;
    }
L_000d8e10:;
    {
        cpu->r[0] = 0x0000095cu;
    }
L_000d8e14:;
    {
        cpu->r[14] = 0x000d8e18u; fn_0018ba6c(cpu);
    }
L_000d8e18:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d8e1c:;
    {
        cpu->r[14] = 0x000d8e20u; fn_00108b6c(cpu);
    }
L_000d8e20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d8e24:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d8e28:;
    {
        cpu->r[14] = 0x000d8e2cu; fn_000f361c(cpu);
    }
L_000d8e2c:;
    {
        goto L_000d87c0;
    }
L_000d8e30:;
    {
        cpu->r[0] = 0x0000677cu;
    }
L_000d8e34:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000d8e38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000d8e3c:;
    {
        cpu->r[14] = 0x000d8e40u; fn_001c1268(cpu);
    }
L_000d8e40:;
    {
        goto L_000d8b44;
    }
L_000d8e90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8e94:;
    {
        cpu->r[14] = 0x000d8e98u; fn_000bdba8(cpu);
    }
L_000d8e98:;
    {
        cpu->r[3] = 0x00004bfcu;
    }
L_000d8e9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d8ea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8ea4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d8ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d8bc4;
        }
    }
L_000d8eac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000d8eb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8bc4;
        }
    }
L_000d8eb4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d8eb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000d8ebc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d8ec0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d8ec4:;
    {
        goto L_000d8bcc;
    }
L_000d8ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8ecc:;
    {
        cpu->r[14] = 0x000d8ed0u; fn_000ba990(cpu);
    }
L_000d8ed0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d8ed4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8bb0;
        }
    }
L_000d8ed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8edc:;
    {
        cpu->r[14] = 0x000d8ee0u; fn_000c248c(cpu);
    }
L_000d8ee0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d8ee4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_000d8ee8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d8eec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d8bb0;
        }
    }
L_000d8ef0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d8ef4:;
    {
        cpu->r[10] = 0x00001684u;
    }
L_000d8ef8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000007cu, 0, 0);
    }
L_000d8efc:;
    {
        cpu->r[11] = 0x000010d4u;
    }
L_000d8f00:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_000d8f04:;
    {
        goto L_000d8f20;
    }
L_000d8f08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000d8f0c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000d8f10:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_000d8f14:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_000d8f18:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_000d8f1c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d8bb0;
        }
    }
L_000d8f20:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000d8f24:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_000d8f28:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_000d8f2c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000d8f30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d8f08;
        }
    }
L_000d8f34:;
    {
        cpu->r[1] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d8f38:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d8f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d8f08;
        }
    }
L_000d8f40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00001640u, 0, 0);
    }
L_000d8f44:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d8f48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d8f4c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000d8f50:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000d8f54:;
    {
        cpu->r[14] = 0x000d8f58u; fn_0015d718(cpu);
    }
L_000d8f58:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000d8f5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_000d8f60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_000d8f64:;
    {
        cpu->r[14] = 0x000d8f68u; fn_0015d718(cpu);
    }
L_000d8f68:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d8f6c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d8f70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8f74:;
    {
        cpu->r[14] = 0x000d8f78u; fn_000bcf10(cpu);
    }
L_000d8f78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d8f7c:;
    {
        cpu->r[14] = 0x000d8f80u; fn_000bcf58(cpu);
    }
L_000d8f80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d8f84:;
    {
        goto L_000d8f08;
    }
L_000d8f88:;
    {
        cpu->r[10] = 0x00008c50u;
    }
L_000d8f8c:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_000d8f90:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d8f94:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d8f98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d8f9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d8fa0:;
    {
        goto L_000d8ac8;
    }
}
