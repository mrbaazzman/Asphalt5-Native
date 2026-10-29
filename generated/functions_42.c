#include "functions.h"

/* _ZN20GS_IngameOptionsMenu6UpdateEv @ 0010cde4 (arm) */
void fn_0010cde4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010cde4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010cde8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010cdec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010cdf0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010cdf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010cdf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0010cdfc:;
    {
        cpu->r[5] = rd32(0x0010ce04u + + 0x3d0u);
    }
L_0010ce00:;
    {
        cpu->r[14] = 0x0010ce08u;
    }
L_0010ce04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ce08u)) return;
    }
L_0010ce08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ce0c:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010ce14u, cpu->r[5], 0, 0);
    }
L_0010ce10:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x480u);
    }
L_0010ce14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010ce18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce44;
        }
    }
L_0010ce1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0010ce20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010ce24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce68;
        }
    }
L_0010ce28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010ce2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ceec;
        }
    }
L_0010ce30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010ce34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0010ce38:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
        }
    }
L_0010ce3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010ce40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ce44u)) return;
    }
L_0010ce44:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_0010ce48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ce4c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ce50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_0010ce54:;
    {
        cpu->r[14] = 0x0010ce5cu;
    }
L_0010ce58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xd4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ce5cu)) return;
    }
L_0010ce5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0010ce60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010ce64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ce28;
        }
    }
L_0010ce68:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010ce6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ce70:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0010ce74:;
    {
        cpu->r[14] = 0x0010ce78u; fn_000eb59c(cpu);
    }
L_0010ce78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ce7c:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_0010ce80:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010ce84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010ce88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce3c;
        }
    }
L_0010ce8c:;
    {
        cpu->r[2] = 0x00005f53u;
    }
L_0010ce90:;
    {
        cpu->r[5] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010ce94:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0010ce98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ce3c;
        }
    }
L_0010ce9c:;
    {
        cpu->r[2] = 0x00006737u;
    }
L_0010cea0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0010cea4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010cea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce3c;
        }
    }
L_0010ceac:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_0010ceb0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0010ceb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ceb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce3c;
        }
    }
L_0010cebc:;
    {
        cpu->r[14] = 0x0010cec0u; fn_000c1cd8(cpu);
    }
L_0010cec0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010cec4:;
    {
        cpu->r[3] = 0x00004bf8u;
    }
L_0010cec8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0010cecc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0010ced0:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_0010ced4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010ced8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ce3c;
        }
    }
L_0010cedc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[5]);
    }
L_0010cee0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010cee4:;
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
L_0010cee8:;
    {
        return fn_000bd908(cpu);
    }
L_0010ceec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f4u);
    }
L_0010cef0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010cef4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0010cef8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
        }
    }
L_0010cefc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010ce3c;
        }
    }
L_0010cf00:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0010cf04:;
    {
        cpu->r[3] = 0x000004f7u;
    }
L_0010cf08:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010cf0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d000;
        }
    }
L_0010cf10:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010cf8c;
        }
    }
L_0010cf14:;
    {
        cpu->r[3] = 0x000005a7u;
    }
L_0010cf18:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010cf1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d160;
        }
    }
L_0010cf20:;
    {
        cpu->r[3] = 0x000005b8u;
    }
L_0010cf24:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010cf28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d07c;
        }
    }
L_0010cf2c:;
    {
        cpu->r[3] = 0x000004f8u;
    }
L_0010cf30:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010cf34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ce3c;
        }
    }
L_0010cf38:;
    {
        cpu->r[0] = rd32(0x0010cf40u + + 0x298u);
    }
L_0010cf3c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010cf40:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010cf44:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010cf48:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010cf4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010cf50:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010cf54:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010cf58:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010cf5c:;
    {
        cpu->r[14] = 0x0010cf60u; fn_000fd248(cpu);
    }
L_0010cf60:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010cf64:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010cf68:;
    {
        cpu->r[14] = 0x0010cf6cu; fn_0018ba6c(cpu);
    }
L_0010cf6c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010cf70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010cf74:;
    {
        cpu->r[14] = 0x0010cf78u; fn_001038b0(cpu);
    }
L_0010cf78:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010cf7c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010cf80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010cf84:;
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
L_0010cf88:;
    {
        return fn_000f361c(cpu);
    }
L_0010cf8c:;
    {
        cpu->r[3] = 0x000004bdu;
    }
L_0010cf90:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0010cf94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d124;
        }
    }
L_0010cf98:;
    {
        sub_flags(cpu, cpu->r[6], 0x000004e0u, 1, 1);
    }
L_0010cf9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d0d0;
        }
    }
L_0010cfa0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0010cfa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ce3c;
        }
    }
L_0010cfa8:;
    {
        cpu->r[0] = rd32(0x0010cfb0u + + 0x228u);
    }
L_0010cfac:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010cfb0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010cfb4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010cfb8:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010cfbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010cfc0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010cfc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010cfc8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010cfcc:;
    {
        cpu->r[14] = 0x0010cfd0u; fn_000fd248(cpu);
    }
L_0010cfd0:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0010cfd4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010cfd8:;
    {
        cpu->r[14] = 0x0010cfdcu; fn_0018ba6c(cpu);
    }
L_0010cfdc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010cfe0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010cfe4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010cfe8:;
    {
        cpu->r[14] = 0x0010cfecu; fn_0012234c(cpu);
    }
L_0010cfec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010cff0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010cff4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010cff8:;
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
L_0010cffc:;
    {
        return fn_000f361c(cpu);
    }
L_0010d000:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010d004:;
    {
        cpu->r[14] = 0x0010d008u; fn_00096b88(cpu);
    }
L_0010d008:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d00c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ce3c;
        }
    }
L_0010d010:;
    {
        cpu->r[14] = 0x0010d014u; fn_000979a0(cpu);
    }
L_0010d014:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010d018:;
    {
        cpu->r[14] = 0x0010d01cu; fn_000979a0(cpu);
    }
L_0010d01c:;
    {
        cpu->r[14] = 0x0010d020u; fn_00093f78(cpu);
    }
L_0010d020:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010d024:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010d028:;
    {
        cpu->r[14] = 0x0010d02cu; fn_00093f70(cpu);
    }
L_0010d02c:;
    {
        cpu->r[14] = 0x0010d030u; fn_000979a0(cpu);
    }
L_0010d030:;
    {
        cpu->r[14] = 0x0010d034u; fn_00093f78(cpu);
    }
L_0010d034:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_0010d038:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010d1c4;
        }
    }
L_0010d03c:;
    {
        cpu->r[0] = rd32(0x0010d044u + + 0x194u);
    }
L_0010d040:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010d044:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010d048:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010d04c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010d050:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010d054:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010d058:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010d05c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010d060:;
    {
        cpu->r[14] = 0x0010d064u; fn_000fd248(cpu);
    }
L_0010d064:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010d068:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010d06c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0010d070:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0010d074:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[3]);
    }
L_0010d078:;
    {
        goto L_0010ce3c;
    }
L_0010d07c:;
    {
        cpu->r[0] = rd32(0x0010d084u + + 0x154u);
    }
L_0010d080:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010d084:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010d088:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010d08c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010d090:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010d094:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010d098:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010d09c:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010d0a0:;
    {
        cpu->r[14] = 0x0010d0a4u; fn_000fd248(cpu);
    }
L_0010d0a4:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010d0a8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010d0ac:;
    {
        cpu->r[14] = 0x0010d0b0u; fn_0018ba6c(cpu);
    }
L_0010d0b0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010d0b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d0b8:;
    {
        cpu->r[14] = 0x0010d0bcu; fn_00124ea8(cpu);
    }
L_0010d0bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d0c0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010d0c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010d0c8:;
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
L_0010d0cc:;
    {
        return fn_000f361c(cpu);
    }
L_0010d0d0:;
    {
        cpu->r[0] = rd32(0x0010d0d8u + + 0x100u);
    }
L_0010d0d4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0010d0d8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010d0dc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0010d0e0:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010d0e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010d0e8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010d0ec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010d0f0:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0010d0f4:;
    {
        cpu->r[14] = 0x0010d0f8u; fn_000fd248(cpu);
    }
L_0010d0f8:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010d0fc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010d100:;
    {
        cpu->r[14] = 0x0010d104u; fn_0018ba6c(cpu);
    }
L_0010d104:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010d108:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d10c:;
    {
        cpu->r[14] = 0x0010d110u; fn_00127fd8(cpu);
    }
L_0010d110:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d114:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010d118:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010d11c:;
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
L_0010d120:;
    {
        return fn_000f361c(cpu);
    }
L_0010d124:;
    {
        cpu->r[0] = rd32(0x0010d12cu + + 0xacu);
    }
L_0010d128:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010d12c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010d130:;
    {
        cpu->r[1] = 0x00000094u;
    }
L_0010d134:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010d138:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010d13c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010d140:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010d144:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010d148:;
    {
        cpu->r[14] = 0x0010d14cu; fn_000fd248(cpu);
    }
L_0010d14c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010d150:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010d154:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010d158:;
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
L_0010d15c:;
    {
        return fn_000f34e8(cpu);
    }
L_0010d160:;
    {
        cpu->r[0] = rd32(0x0010d168u + + 0x70u);
    }
L_0010d164:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010d168:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010d16c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010d170:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010d174:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_0010d178:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010d17c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010d180:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010d184:;
    {
        cpu->r[14] = 0x0010d188u; fn_000fd248(cpu);
    }
L_0010d188:;
    {
        cpu->r[0] = 0x00000964u;
    }
L_0010d18c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010d190:;
    {
        cpu->r[14] = 0x0010d194u; fn_0018ba6c(cpu);
    }
L_0010d194:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010d198:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_0010d19c:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_0010d1a0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0010d1a4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010d1a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d1ac:;
    {
        cpu->r[14] = 0x0010d1b0u; fn_001187b0(cpu);
    }
L_0010d1b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d1b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010d1b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010d1bc:;
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
L_0010d1c0:;
    {
        return fn_000f361c(cpu);
    }
L_0010d1c4:;
    {
        cpu->r[14] = 0x0010d1c8u; fn_000979a0(cpu);
    }
L_0010d1c8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0010d1cc:;
    {
        cpu->r[14] = 0x0010d1d0u; fn_00093f70(cpu);
    }
L_0010d1d0:;
    {
        goto L_0010d03c;
    }
}

/* _ZN20GS_IngameOptionsMenu6RenderEv @ 0010d1dc (arm) */
void fn_0010d1dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d1dc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0010d1e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0010d1e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d1e8:;
    {
        cpu->r[14] = 0x0010d1ecu; fn_0010de00(cpu);
    }
L_0010d1ec:;
    {
        cpu->r[2] = rd32(0x0010d1f4u + + 0x8cu);
    }
L_0010d1f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010d1f8u, cpu->r[2], 0, 0);
    }
L_0010d1f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d1f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010d204;
        }
    }
L_0010d1fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010d200:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d204u)) return;
    }
L_0010d204:;
    {
        cpu->r[12] = rd32(0x0010d20cu + + 0x78u);
    }
L_0010d208:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010d20c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010d210:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010d214:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010d218:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_0010d21c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0010d220:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010d224:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010d228:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0010d22c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010d230:;
    {
        cpu->r[14] = 0x0010d234u; fn_000ad8a0(cpu);
    }
L_0010d234:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010d238:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0010d23c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010d268;
        }
    }
L_0010d240:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010d244:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010d248:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d24c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d250:;
    {
        cpu->r[14] = 0x0010d258u;
    }
L_0010d254:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d258u)) return;
    }
L_0010d258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0010d25c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010d260:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0010d264:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010d240;
        }
    }
L_0010d268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d26c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010d270:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d274:;
    {
        cpu->r[14] = 0x0010d27cu;
    }
L_0010d278:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x88u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d27cu)) return;
    }
L_0010d27c:;
    {
        goto L_0010d1fc;
    }
}

/* _ZN20GS_IngameOptionsMenuD1Ev @ 0010d288 (arm) */
void fn_0010d288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d288:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010d28c:;
    {
        cpu->r[4] = rd32(0x0010d294u + + 0x48u);
    }
L_0010d290:;
    {
        cpu->r[2] = rd32(0x0010d298u + + 0x48u);
    }
L_0010d294:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010d298:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010d2a0u, cpu->r[4], 0, 0);
    }
L_0010d29c:;
    {
        cpu->r[3] = rd32(0x0010d2a4u + + 0x40u);
    }
L_0010d2a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010d2a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010d2a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d2ac:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0010d2b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010d2b4:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010d2b8:;
    {
        cpu->r[14] = 0x0010d2bcu; fn_0009e9e8(cpu);
    }
L_0010d2bc:;
    {
        cpu->r[3] = rd32(0x0010d2c4u + + 0x24u);
    }
L_0010d2c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d2c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d2c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010d2cc:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010d2d0:;
    {
        cpu->r[14] = 0x0010d2d4u; fn_000ec21c(cpu);
    }
L_0010d2d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d2d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d2dcu)) return;
    }
}

/* _ZN20GS_IngameOptionsMenuD0Ev @ 0010d2ec (arm) */
void fn_0010d2ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d2ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010d2f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d2f4:;
    {
        cpu->r[14] = 0x0010d2f8u; fn_0010d288(cpu);
    }
L_0010d2f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d2fc:;
    {
        cpu->r[14] = 0x0010d300u; fn_0018ba20(cpu);
    }
L_0010d300:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d304:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d308u)) return;
    }
}

/* _ZN20GS_IngameOptionsMenuD2Ev @ 0010d308 (arm) */
void fn_0010d308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d308:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010d30c:;
    {
        cpu->r[4] = rd32(0x0010d314u + + 0x48u);
    }
L_0010d310:;
    {
        cpu->r[2] = rd32(0x0010d318u + + 0x48u);
    }
L_0010d314:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010d318:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010d320u, cpu->r[4], 0, 0);
    }
L_0010d31c:;
    {
        cpu->r[3] = rd32(0x0010d324u + + 0x40u);
    }
L_0010d320:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010d324:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010d328:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d32c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0010d330:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010d334:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010d338:;
    {
        cpu->r[14] = 0x0010d33cu; fn_0009e9e8(cpu);
    }
L_0010d33c:;
    {
        cpu->r[3] = rd32(0x0010d344u + + 0x24u);
    }
L_0010d340:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d348:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0010d34c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0010d350:;
    {
        cpu->r[14] = 0x0010d354u; fn_000ec21c(cpu);
    }
L_0010d354:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010d358:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d35cu)) return;
    }
}

/* _ZN20GS_IngameOptionsMenu11InitSpritesEv @ 0010d36c (arm) */
void fn_0010d36c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d36c:;
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
L_0010d370:;
    {
        cpu->r[4] = rd32(0x0010d378u + + 0x2b0u);
    }
L_0010d374:;
    {
        cpu->r[7] = rd32(0x0010d37cu + + 0x2b0u);
    }
L_0010d378:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010d37c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010d384u, cpu->r[4], 0, 0);
    }
L_0010d380:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d384:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0010d388:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d38c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d4a4;
        }
    }
L_0010d390:;
    {
        cpu->r[6] = rd32(0x0010d398u + + 0x298u);
    }
L_0010d394:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010d398:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010d39c:;
    {
        cpu->r[14] = 0x0010d3a0u; fn_00096a08(cpu);
    }
L_0010d3a0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d3a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d3a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010d3ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d3b0:;
    {
        cpu->r[14] = 0x0010d3b4u; fn_0018aa44(cpu);
    }
L_0010d3b4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d3b8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010d3bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d3c0:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[0]);
    }
L_0010d3c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d5ec;
        }
    }
L_0010d3c8:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_0010d3cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010d3d0:;
    {
        cpu->r[14] = 0x0010d3d4u; fn_00096a08(cpu);
    }
L_0010d3d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d3d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d3dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010d3e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d3e4:;
    {
        cpu->r[14] = 0x0010d3e8u; fn_0018aa44(cpu);
    }
L_0010d3e8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d3ec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010d3f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d3f4:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[0]);
    }
L_0010d3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d5b0;
        }
    }
L_0010d3fc:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0010d400:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010d404:;
    {
        cpu->r[14] = 0x0010d408u; fn_00096a08(cpu);
    }
L_0010d408:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d40c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d410:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010d414:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d418:;
    {
        cpu->r[14] = 0x0010d41cu; fn_0018aa44(cpu);
    }
L_0010d41c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d420:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010d424:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d428:;
    {
        wr32(cpu->r[5] + + 0xa8u, cpu->r[0]);
    }
L_0010d42c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d574;
        }
    }
L_0010d430:;
    {
        cpu->r[1] = 0x0000003eu;
    }
L_0010d434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010d438:;
    {
        cpu->r[14] = 0x0010d43cu; fn_00096a08(cpu);
    }
L_0010d43c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d440:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d444:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010d448:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d44c:;
    {
        cpu->r[14] = 0x0010d450u; fn_0018aa44(cpu);
    }
L_0010d450:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d454:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0010d458:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d45c:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[0]);
    }
L_0010d460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d538;
        }
    }
L_0010d464:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d468:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0010d46c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d470:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d474:;
    {
        cpu->r[14] = 0x0010d478u; fn_0018aa44(cpu);
    }
L_0010d478:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010d47c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010d480:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d484:;
    {
        wr32(cpu->r[5] + + 0xb0u, cpu->r[0]);
    }
L_0010d488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d4e8;
        }
    }
L_0010d48c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d490:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d494:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010d498:;
    {
        cpu->r[14] = 0x0010d49cu; fn_0018aa44(cpu);
    }
L_0010d49c:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010d4a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d4a4u)) return;
    }
L_0010d4a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d4a8:;
    {
        cpu->r[14] = 0x0010d4acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d4ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d390;
        }
    }
L_0010d4b4:;
    {
        cpu->r[6] = rd32(0x0010d4bcu + + 0x174u);
    }
L_0010d4b8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d4bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d4c0:;
    {
        cpu->r[14] = 0x0010d4c4u; fn_0018aa20(cpu);
    }
L_0010d4c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d4c8:;
    {
        cpu->r[14] = 0x0010d4ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d4cc:;
    {
        cpu->r[3] = rd32(0x0010d4d4u + + 0x160u);
    }
L_0010d4d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d4d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d4d8:;
    {
        cpu->r[3] = rd32(0x0010d4e0u + + 0x158u);
    }
L_0010d4dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d4e0:;
    {
        cpu->r[14] = 0x0010d4e4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d4e4:;
    {
        goto L_0010d394;
    }
L_0010d4e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d4ec:;
    {
        cpu->r[14] = 0x0010d4f0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d4f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d4f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d48c;
        }
    }
L_0010d4f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d4fc:;
    {
        cpu->r[14] = 0x0010d500u; fn_0018aa20(cpu);
    }
L_0010d500:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d504:;
    {
        cpu->r[14] = 0x0010d508u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d508:;
    {
        cpu->r[3] = rd32(0x0010d510u + + 0x124u);
    }
L_0010d50c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d510:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d514:;
    {
        cpu->r[3] = rd32(0x0010d51cu + + 0x11cu);
    }
L_0010d518:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d51c:;
    {
        cpu->r[14] = 0x0010d520u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d520:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d524:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010d528:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010d52c:;
    {
        cpu->r[14] = 0x0010d530u; fn_0018aa44(cpu);
    }
L_0010d530:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[0]);
    }
L_0010d534:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d538u)) return;
    }
L_0010d538:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d53c:;
    {
        cpu->r[14] = 0x0010d540u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d540:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d464;
        }
    }
L_0010d548:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d54c:;
    {
        cpu->r[14] = 0x0010d550u; fn_0018aa20(cpu);
    }
L_0010d550:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d554:;
    {
        cpu->r[14] = 0x0010d558u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d558:;
    {
        cpu->r[3] = rd32(0x0010d560u + + 0xd4u);
    }
L_0010d55c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d560:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d564:;
    {
        cpu->r[3] = rd32(0x0010d56cu + + 0xccu);
    }
L_0010d568:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d56c:;
    {
        cpu->r[14] = 0x0010d570u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d570:;
    {
        goto L_0010d464;
    }
L_0010d574:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d578:;
    {
        cpu->r[14] = 0x0010d57cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d57c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d580:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d430;
        }
    }
L_0010d584:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d588:;
    {
        cpu->r[14] = 0x0010d58cu; fn_0018aa20(cpu);
    }
L_0010d58c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d590:;
    {
        cpu->r[14] = 0x0010d594u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d594:;
    {
        cpu->r[3] = rd32(0x0010d59cu + + 0x98u);
    }
L_0010d598:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d59c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d5a0:;
    {
        cpu->r[3] = rd32(0x0010d5a8u + + 0x90u);
    }
L_0010d5a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d5a8:;
    {
        cpu->r[14] = 0x0010d5acu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d5ac:;
    {
        goto L_0010d430;
    }
L_0010d5b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d5b4:;
    {
        cpu->r[14] = 0x0010d5b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d5b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d5bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d3fc;
        }
    }
L_0010d5c0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d5c4:;
    {
        cpu->r[14] = 0x0010d5c8u; fn_0018aa20(cpu);
    }
L_0010d5c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d5cc:;
    {
        cpu->r[14] = 0x0010d5d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d5d0:;
    {
        cpu->r[3] = rd32(0x0010d5d8u + + 0x5cu);
    }
L_0010d5d4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d5d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d5dc:;
    {
        cpu->r[3] = rd32(0x0010d5e4u + + 0x54u);
    }
L_0010d5e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d5e4:;
    {
        cpu->r[14] = 0x0010d5e8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d5e8:;
    {
        goto L_0010d3fc;
    }
L_0010d5ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d5f0:;
    {
        cpu->r[14] = 0x0010d5f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d5f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d5f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d3c8;
        }
    }
L_0010d5fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d600:;
    {
        cpu->r[14] = 0x0010d604u; fn_0018aa20(cpu);
    }
L_0010d604:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010d608:;
    {
        cpu->r[14] = 0x0010d60cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d60c:;
    {
        cpu->r[3] = rd32(0x0010d614u + + 0x20u);
    }
L_0010d610:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010d614:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d618:;
    {
        cpu->r[3] = rd32(0x0010d620u + + 0x18u);
    }
L_0010d61c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d620:;
    {
        cpu->r[14] = 0x0010d624u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0010d624:;
    {
        goto L_0010d3c8;
    }
}

/* _ZN20GS_IngameOptionsMenu13GetMenuStringEi @ 0010d63c (arm) */
void fn_0010d63c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d63c:;
    {
        cpu->r[3] = 0x000004f7u;
    }
L_0010d640:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0010d644:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010d648:;
    {
        cpu->r[5] = rd32(0x0010d650u + + 0x1a4u);
    }
L_0010d64c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0010d650:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0010d654:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010d658:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010d660u, cpu->r[5], 0, 0);
    }
L_0010d65c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d75c;
        }
    }
L_0010d660:;
    {
        cpu->r[3] = 0x000004e2u;
    }
L_0010d664:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010d668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d6ec;
        }
    }
L_0010d66c:;
    {
        cpu->r[3] = 0x000004ecu;
    }
L_0010d670:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010d674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d7b0;
        }
    }
L_0010d678:;
    {
        cpu->r[3] = 0x000004e3u;
    }
L_0010d67c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0010d680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d690;
        }
    }
L_0010d684:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010d688:;
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
L_0010d68c:;
    {
        return fn_0010e02c(cpu);
    }
L_0010d690:;
    {
        cpu->r[3] = rd32(0x0010d698u + + 0x160u);
    }
L_0010d694:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010d698:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010d69c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d6a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d6c4;
        }
    }
L_0010d6a4:;
    {
        cpu->r[6] = rd32(0x0010d6acu + + 0x150u);
    }
L_0010d6a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010d6ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d6b0:;
    {
        cpu->r[1] = 0x000004e3u;
    }
L_0010d6b4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x38u);
    }
L_0010d6b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010d6bc:;
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
L_0010d6c0:;
    {
        return fn_0010ed78(cpu);
    }
L_0010d6c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d6c8:;
    {
        cpu->r[14] = 0x0010d6ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d6cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d6a4;
        }
    }
L_0010d6d4:;
    {
        cpu->r[6] = rd32(0x0010d6dcu + + 0x120u);
    }
L_0010d6d8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010d6dc:;
    {
        cpu->r[14] = 0x0010d6e0u; fn_00094228(cpu);
    }
L_0010d6e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d6e4:;
    {
        cpu->r[14] = 0x0010d6e8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d6e8:;
    {
        goto L_0010d6a8;
    }
L_0010d6ec:;
    {
        cpu->r[3] = rd32(0x0010d6f4u + + 0x104u);
    }
L_0010d6f0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010d6f4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0010d6f8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0010d6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d7cc;
        }
    }
L_0010d700:;
    {
        cpu->r[6] = rd32(0x0010d708u + + 0xf4u);
    }
L_0010d704:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010d708:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010d70c:;
    {
        cpu->r[14] = 0x0010d710u; fn_00093fa8(cpu);
    }
L_0010d710:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d714:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0010d718:;
    {
        cpu->r[0] = 0x000004e2u;
    }
L_0010d71c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000018u;
        }
    }
L_0010d720:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000019u;
        }
    }
L_0010d724:;
    {
        cpu->r[14] = 0x0010d728u; fn_000aeb28(cpu);
    }
L_0010d728:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d72c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010d730:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010d734:;
    {
        cpu->r[14] = 0x0010d738u; fn_000aeb58(cpu);
    }
L_0010d738:;
    {
        cpu->r[1] = rd32(0x0010d740u + + 0xc0u);
    }
L_0010d73c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010d740:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010d748u, cpu->r[1], 0, 0);
    }
L_0010d744:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010d748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d74c:;
    {
        cpu->r[14] = 0x0010d750u; fn_000ae830(cpu);
    }
L_0010d750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d754:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010d758:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d75cu)) return;
    }
L_0010d75c:;
    {
        cpu->r[2] = rd32(0x0010d764u + + 0xa0u);
    }
L_0010d760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0010d764:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010d76cu, cpu->r[2], 0, 0);
    }
L_0010d768:;
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
L_0010d76c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0010d770:;
    {
        cpu->r[14] = 0x0010d774u; fn_000979a0(cpu);
    }
L_0010d774:;
    {
        cpu->r[14] = 0x0010d778u; fn_00093f78(cpu);
    }
L_0010d778:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_0010d77c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_0010d780:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d784:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_0010d788:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0010d78c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0010d790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0010d794:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0010d798:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0010d79c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0010d7a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + - 0xcu);
    }
L_0010d7a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010d7a8:;
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
L_0010d7ac:;
    {
        return fn_000aeb58(cpu);
    }
L_0010d7b0:;
    {
        cpu->r[14] = 0x0010d7b4u; fn_000979a0(cpu);
    }
L_0010d7b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010d7b8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xcu);
    }
L_0010d7bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010d7c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010d7c4:;
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
L_0010d7c8:;
    {
        return fn_0010ed78(cpu);
    }
L_0010d7cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d7d0:;
    {
        cpu->r[14] = 0x0010d7d4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0010d7d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010d700;
        }
    }
L_0010d7dc:;
    {
        cpu->r[6] = rd32(0x0010d7e4u + + 0x18u);
    }
L_0010d7e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0010d7e4:;
    {
        cpu->r[14] = 0x0010d7e8u; fn_00094228(cpu);
    }
L_0010d7e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010d7ec:;
    {
        cpu->r[14] = 0x0010d7f0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0010d7f0:;
    {
        goto L_0010d704;
    }
}

/* _ZN11GS_MainMenu11RenderTitleEi @ 0010d808 (arm) */
void fn_0010d808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d808:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010d80c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010d810:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010d814:;
    {
        cpu->r[14] = 0x0010d81cu;
    }
L_0010d818:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x84u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d81cu)) return;
    }
L_0010d81c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d820u)) return;
    }
}

/* _ZN11GS_MainMenu17GetRenderBarWidthEv @ 0010d820 (arm) */
void fn_0010d820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d820:;
    {
        cpu->r[0] = 0x00000082u;
    }
L_0010d824:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu26ComputeMenuViewportExtentsEv @ 0010d828 (arm) */
void fn_0010d828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d828:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8cau);
    }
L_0010d82c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010d830:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d834:;
    {
        cpu->r[4] = rd32(0x0010d83cu + + 0x60u);
    }
L_0010d838:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010d83c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010d844u, cpu->r[4], 0, 0);
    }
L_0010d840:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010d868;
        }
    }
L_0010d844:;
    {
        cpu->r[3] = rd32(0x0010d84cu + + 0x54u);
    }
L_0010d848:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d84c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010d850:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0010d854:;
    {
        cpu->r[3] = rd32(0x0010d85cu + + 0x48u);
    }
L_0010d858:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d85c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010d860:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0010d864:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d868u)) return;
    }
L_0010d868:;
    {
        cpu->r[2] = rd32(0x0010d870u + + 0x30u);
    }
L_0010d86c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010d870:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0010d874:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_0010d878:;
    {
        cpu->r[14] = 0x0010d880u;
    }
L_0010d87c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d880u)) return;
    }
L_0010d880:;
    {
        cpu->r[3] = rd32(0x0010d888u + + 0x1cu);
    }
L_0010d884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010d888:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0010d88c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_0010d890:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010d894:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0010d898:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d89cu)) return;
    }
}

/* _ZN11GS_MainMenu9RenderBarEv @ 0010d8a8 (arm) */
void fn_0010d8a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d8a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010d8ac:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010d8b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010d8b4:;
    {
        cpu->r[14] = 0x0010d8bcu;
    }
L_0010d8b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x9cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d8bcu)) return;
    }
L_0010d8bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010d8c0u)) return;
    }
}

/* _ZN11GS_MainMenu6OnBackEv @ 0010d8c0 (arm) */
void fn_0010d8c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d8c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu12OnMouseEnterEib @ 0010d8c4 (arm) */
void fn_0010d8c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d8c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu12OnMouseLeaveEi @ 0010d8c8 (arm) */
void fn_0010d8c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d8c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu16UpdateCheckBoxesEi @ 0010d8cc (arm) */
void fn_0010d8cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d8cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010d8d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010d8d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0010d8d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8e8u);
    }
L_0010d8dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0010d8e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010d8e4:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_0010d8e8:;
    {
        uint32_t v = cpu->r[12] & 0x00800000u; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_0010d8ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_0010d8f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 3u, &shc));
        }
    }
L_0010d8f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010d8f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_0010d8fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000900u, 0, 0);
        }
    }
L_0010d900:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
        }
    }
L_0010d904:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + + 0x5u);
        }
    }
L_0010d908:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] ^ cpu->r[0]; cpu->r[2] = v;
        }
    }
L_0010d90c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x5u, cpu->r[2]);
        }
    }
L_0010d910:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu8isKindOfEi @ 0010d914 (arm) */
void fn_0010d914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d914:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0010d918:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010d91c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010d920:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu15RenderScrollBarEiiiiRi @ 0010d924 (arm) */
void fn_0010d924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d924:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu18RenderScrollArrowsEv @ 0010d928 (arm) */
void fn_0010d928(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d928:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu11DisableRectEi @ 0010d92c (arm) */
void fn_0010d92c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d92c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_0010d930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d934:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010d938:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010d93c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010d940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0010d944:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0010d948:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_0010d94c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
        }
    }
L_0010d950:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0010d954:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x02000000u; cpu->r[2] = v;
        }
    }
L_0010d958:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
        }
    }
L_0010d95c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu10EnableRectEi @ 0010d960 (arm) */
void fn_0010d960(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d960:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_0010d964:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d968:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010d96c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010d970:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010d974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0010d978:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0010d97c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_0010d980:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
        }
    }
L_0010d984:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0010d988:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] & ~ 0x02000000u; cpu->r[2] = v;
        }
    }
L_0010d98c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
        }
    }
L_0010d990:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu14IsRectDisabledEi @ 0010d994 (arm) */
void fn_0010d994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d994:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x88u);
    }
L_0010d998:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d99c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010d9a0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010d9a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010d9a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010d9ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0010d9b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0010d9b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_0010d9b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010d9bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
        }
    }
L_0010d9c0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
        }
    }
L_0010d9c4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (cpu->r[0] >> 25) & 0x1u;
        }
    }
L_0010d9c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu18IsFadeEffectActiveEv @ 0010d9cc (arm) */
void fn_0010d9cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010d9cc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8fcu);
    }
L_0010d9d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d9d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010da04;
        }
    }
L_0010d9d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010d9dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010d9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010da0c;
        }
    }
L_0010d9e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0010d9e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010d9ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010da04;
        }
    }
L_0010d9f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8f8u);
    }
L_0010d9f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010d9f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010d9fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010da00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0010da04:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0010da08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0010da0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0010da10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010da14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010da04;
        }
    }
L_0010da18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8f8u);
    }
L_0010da1c:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_0010da20:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_0010da24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu11UpdateOutroEv @ 0010da28 (arm) */
void fn_0010da28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010da28:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0010da2c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010da30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010da34:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0010da38:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8f4u, cpu->r[2]);
        }
    }
L_0010da3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010da40:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010da44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8f8u);
    }
L_0010da48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010da4c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0010da50:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010da54:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x8f8u, cpu->r[2]);
        }
    }
L_0010da58:;
    {
        if (cond_test(cpu, 13)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010da5c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x8cau);
    }
L_0010da60:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0010da64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010da68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_0010da6c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x7cu, cpu->r[2]);
        }
    }
L_0010da70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu20RenderTitleExtraInfoEv @ 0010da74 (arm) */
void fn_0010da74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010da74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13StringReversePKcPc @ 0010da78 (arm) */
void fn_0010da78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010da78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010da7c:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_0010da80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010da84:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0010da88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010da8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010da90u)) return;
        }
    }
L_0010da90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010da94:;
    {
        cpu->r[14] = 0x0010da98u; fn_0010da78(cpu);
    }
L_0010da98:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_0010da9c:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_0010daa0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010daa4u)) return;
    }
}

/* _ZN11GS_MainMenu8CanBlinkEv @ 0010daa4 (arm) */
void fn_0010daa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010daa4:;
    {
        cpu->r[3] = rd32(0x0010daacu + + 0x48u);
    }
L_0010daa8:;
    {
        cpu->r[2] = rd32(0x0010dab0u + + 0x48u);
    }
L_0010daac:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010dab4u, cpu->r[3], 0, 0);
    }
L_0010dab0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010dab4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010dab8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4d8u);
    }
L_0010dabc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010dac0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010dac4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010dac8:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_0010dacc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0010dad0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_0010dad4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[0] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0010dad8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 3u, &shc), cpu->r[1], 1, 0);
    }
L_0010dadc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0010dae0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0010dae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0010dae8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010daec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010daf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu9MustBlinkEv @ 0010dafc (arm) */
void fn_0010dafc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010dafc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8f4u);
    }
L_0010db00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010db04:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010db08:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0010db0c:;
    {
        uint32_t v = cpu->r[0] & 0x00000003u; cpu->r[0] = v;
    }
L_0010db10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0010db14:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010db18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0010db1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu15SetSelectedItemEi @ 0010db20 (arm) */
void fn_0010db20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010db20:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_0010db24:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenu21initTransparentBGAnimEv @ 0010db28 (arm) */
void fn_0010db28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010db28:;
    {
        cpu->r[3] = rd32(0x0010db30u + + 0x14u);
    }
L_0010db2c:;
    {
        cpu->r[2] = rd32(0x0010db34u + + 0x14u);
    }
L_0010db30:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010db38u, cpu->r[3], 0, 0);
    }
L_0010db34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010db38:;
    {
        cpu->r[2] = 0x0000002cu;
    }
L_0010db3c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0010db40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_28 @ 0010db4c (arm) */
void fn_0010db4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010db4c:;
    {
        cpu->r[0] = rd32(0x0010db54u + + 0x208u);
    }
L_0010db50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010db58u + + 0x1b4u);
    }
L_0010db54:;
    {
        cpu->r[2] = rd32(0x0010db5cu + + 0x204u);
    }
L_0010db58:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010db60u + + 0x1b0u);
    }
L_0010db5c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0010db64u, cpu->r[0], 0, 0);
    }
L_0010db60:;
    {
        cpu->r[1] = rd32(0x0010db68u + + 0x1fcu);
    }
L_0010db64:;
    {
        cpu->r[3] = rd32(0x0010db6cu + + 0x1fcu);
    }
L_0010db68:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010db70u + + 0x1a4u);
    }
L_0010db6c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0010db70:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0010db78u + + 0x1a0u);
    }
L_0010db74:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0010db78:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010db80u, cpu->r[3], 0, 0);
    }
L_0010db7c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010db80:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010db84:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010db88:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010db8c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010db90:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010db98u + + 0x184u);
    }
L_0010db94:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x00000034u, 1, 0);
    }
L_0010db98:;
    {
        wr32(cpu->r[1] + + 0x58u, cpu->r[12]);
    }
L_0010db9c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_0010dba0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
    }
L_0010dba4:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_0010dba8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_0010dbac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000078u, 1, 0);
    }
L_0010dbb0:;
    {
        wr32(cpu->r[1] + + 0x28u, cpu->r[2]);
    }
L_0010dbb4:;
    {
        cpu->r[2] = rd32(0x0010dbbcu + + 0x1b0u);
    }
L_0010dbb8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbbc:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[12]);
    }
L_0010dbc0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbc4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0010dbc8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dbd0u + + 0x150u);
    }
L_0010dbcc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dbd0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbd4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbd8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0010dbdc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dbe4u + + 0x140u);
    }
L_0010dbe0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0010dbe4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbe8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbec:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dbf0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dbf8u + + 0x130u);
    }
L_0010dbf4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dbf8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dbfc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dc00:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc04:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dc0cu + + 0x120u);
    }
L_0010dc08:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc0c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dc10:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dc1cu + + 0x114u);
    }
L_0010dc18:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dc1c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dc24u + + 0x110u);
    }
L_0010dc20:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dc24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010dc2cu + + 0x10cu);
    }
L_0010dc28:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010dc2c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0010dc34:;
    {
        cpu->r[1] = rd32(0x0010dc3cu + + 0x134u);
    }
L_0010dc38:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000168u, 0, 0);
    }
L_0010dc40:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc44:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dc50u + + 0xecu);
    }
L_0010dc4c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0010dc50:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc54:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc58:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc5c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc60:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc64:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc68:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc6c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc70:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc74:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc78:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc7c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc80:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc84:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dc8cu + + 0xb4u);
    }
L_0010dc88:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dc8c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc90:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc94:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc98:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dc9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dca4u + + 0xa0u);
    }
L_0010dca0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dca4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dca8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dcb0u + + 0x98u);
    }
L_0010dcac:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dcb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dcb8u + + 0x94u);
    }
L_0010dcb4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dcb8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dcc0u + + 0x90u);
    }
L_0010dcbc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dcc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dcc8u + + 0x8cu);
    }
L_0010dcc4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dcc8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010dcd0u + + 0x88u);
    }
L_0010dccc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010dcd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000003cu, 0, 0);
    }
L_0010dcd4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0010dcd8:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dcdc:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dce0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dce4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dce8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dcec:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010dcf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_0010dcf4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010dcf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010dce4;
        }
    }
L_0010dcfc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0010dd00:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0010dd04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010dcd0;
        }
    }
L_0010dd08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11GS_MainMenuD1Ev @ 0010dd74 (arm) */
void fn_0010dd74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010dd74:;
    {
        cpu->r[3] = rd32(0x0010dd7cu + + 0x24u);
    }
L_0010dd78:;
    {
        cpu->r[2] = rd32(0x0010dd80u + + 0x24u);
    }
L_0010dd7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010dd84u, cpu->r[3], 0, 0);
    }
L_0010dd80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010dd84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010dd88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010dd8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010dd90:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0010dd94:;
    {
        cpu->r[14] = 0x0010dd98u; fn_000ec21c(cpu);
    }
L_0010dd98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010dd9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010dda0u)) return;
    }
}

/* _ZN11GS_MainMenu15RenderAlphaMaskEii @ 0010dda8 (arm) */
void fn_0010dda8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010dda8:;
    {
        cpu->r[3] = rd32(0x0010ddb0u + + 0x48u);
    }
L_0010ddac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010ddb0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010ddb4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0010ddb8:;
    {
        cpu->r[2] = rd32(0x0010ddc0u + + 0x3cu);
    }
L_0010ddbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010ddc4u, cpu->r[3], 0, 0);
    }
L_0010ddc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ddc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010ddc8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ddcc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010ddd0:;
    {
        cpu->r[14] = 0x0010ddd4u; fn_0012dd58(cpu);
    }
L_0010ddd4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0010ddd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0010dddc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010dde0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010dde4:;
    {
        cpu->r[12] = 0x000000dbu;
    }
L_0010dde8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ddec:;
    {
        cpu->r[14] = 0x0010ddf0u; fn_00130908(cpu);
    }
L_0010ddf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010ddf4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ddf8u)) return;
    }
}

/* _ZN11GS_MainMenu19RenderTransparentBGEv @ 0010de00 (arm) */
void fn_0010de00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010de00:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010de04:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0010de08:;
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
L_0010de0c:;
    {
        cpu->r[6] = rd32(0x0010de14u + + 0x144u);
    }
L_0010de10:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010de14:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010de18:;
    {
        cpu->r[6] = add_flags(cpu, 0x0010de20u, cpu->r[6], 0, 0);
    }
L_0010de1c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0010de20:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0010de24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010df28;
        }
    }
L_0010de28:;
    {
        cpu->r[3] = rd32(0x0010de30u + + 0x12cu);
    }
L_0010de2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0010de30:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0010de34:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0010de38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[8];
        }
    }
L_0010de3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010df08;
        }
    }
L_0010de40:;
    {
        cpu->r[3] = rd32(0x0010de48u + + 0x118u);
    }
L_0010de44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010de48:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010de4c:;
    {
        cpu->r[4] = 0x00001bc8u;
    }
L_0010de50:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0010de54:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0010de58:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000a9u, 1, 1);
    }
L_0010de5c:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[3], 2, 24u, &shc); cpu->r[9] = v;
        }
    }
L_0010de60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
        }
    }
L_0010de64:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[2], cpu->r[3]);
        }
    }
L_0010de68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0xaa000000u;
        }
    }
L_0010de6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_0010de70:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0010de74:;
    {
        cpu->r[14] = 0x0010de78u; fn_000cdeb8(cpu);
    }
L_0010de78:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0010de7c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010de80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0010de84:;
    {
        cpu->r[14] = 0x0010de88u; fn_000e56e0(cpu);
    }
L_0010de88:;
    {
        cpu->r[3] = rd32(0x0010de90u + + 0xd4u);
    }
L_0010de8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0010de90:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0010de94:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_0010de98:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_0010de9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010dea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010df14;
        }
    }
L_0010dea4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0010dea8:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_0010deac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0010deb0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0010deb4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010deb8:;
    {
        wr8(cpu->r[3] + + 0x10cu, cpu->r[4]);
    }
L_0010debc:;
    {
        cpu->r[14] = 0x0010dec0u; fn_000dbe60(cpu);
    }
L_0010dec0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0010dec4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010dec8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0010decc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010ded0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0010ded4:;
    {
        wr8(cpu->r[3] + + 0x10cu, cpu->r[2]);
    }
L_0010ded8:;
    {
        cpu->r[14] = 0x0010dedcu; fn_0012dd58(cpu);
    }
L_0010dedc:;
    {
        cpu->r[12] = rd32(0x0010dee4u + + 0x84u);
    }
L_0010dee0:;
    {
        cpu->r[3] = rd32(0x0010dee8u + + 0x84u);
    }
L_0010dee4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010dee8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010deec:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010def0:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_0010def4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0010def8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_0010defc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010df00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010df04:;
    {
        cpu->r[14] = 0x0010df08u; fn_00130908(cpu);
    }
L_0010df08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010df0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010df10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010df14u)) return;
    }
L_0010df14:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0010df18:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010df1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0010df20:;
    {
        cpu->r[14] = 0x0010df24u; fn_000de340(cpu);
    }
L_0010df24:;
    {
        goto L_0010dea4;
    }
L_0010df28:;
    {
        cpu->r[14] = 0x0010df2cu; fn_00097ad0(cpu);
    }
L_0010df2c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010df30:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_0010df34:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0010df38:;
    {
        cpu->r[14] = 0x0010df3cu; fn_0018aa44(cpu);
    }
L_0010df3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010df40:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010df44:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0010df48:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0010df4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_0010df50:;
    {
        cpu->r[14] = 0x0010df54u; fn_000ad8a0(cpu);
    }
L_0010df54:;
    {
        goto L_0010df08;
    }
}

/* _ZN11GS_MainMenu23ActivateDefaultMenuExitEv @ 0010df70 (arm) */
void fn_0010df70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010df70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010df74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010df78:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0010df7c:;
    {
        cpu->r[14] = 0x0010df80u; fn_00093f34(cpu);
    }
L_0010df80:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_0010df84:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0010df88:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[2]);
    }
L_0010df8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010df90:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010df94:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010df98:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010df9c:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0010dfa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010dfa4u)) return;
        }
    }
L_0010dfa4:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010dfa8:;
    {
        cpu->r[14] = 0x0010dfacu; fn_00093f34(cpu);
    }
L_0010dfac:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010dfb0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010dfb4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010dfb8:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_0010dfbc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010dfc0u)) return;
    }
}

/* _ZN11GS_MainMenu19GetIconForEventTypeEi @ 0010dfc0 (arm) */
void fn_0010dfc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010dfc0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0010dfc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000bu, 1, 1);
    }
L_0010dfc8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010dfcc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0010dfd0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010dfd4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0010e00c;
        }
    }
L_0010dfd8:;
    {
        cpu->r[1] = rd32(0x0010dfe0u + + 0x3cu);
    }
L_0010dfdc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0010dfe0:;
    {
        cpu->r[2] = rd32(0x0010dfe8u + + 0x38u);
    }
L_0010dfe4:;
    {
        cpu->r[14] = 0x00000bb7u;
    }
L_0010dfe8:;
    {
        cpu->r[3] = rd32(0x0010dff0u + + 0x34u);
    }
L_0010dfec:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010dff4u, cpu->r[1], 0, 0);
    }
L_0010dff0:;
    {
        cpu->r[12] = rd32(0x0010dff8u + + 0x30u);
    }
L_0010dff4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0010dffcu, cpu->r[2], 0, 0);
    }
L_0010dff8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010e000u, cpu->r[3], 0, 0);
    }
L_0010dffc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0010e000:;
    {
        cpu->r[12] = add_flags(cpu, 0x0010e008u, cpu->r[12], 0, 0);
    }
L_0010e004:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010e008:;
    {
        cpu->r[14] = 0x0010e00cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0010e00c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_0010e010:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_0010e014:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010e018:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e01cu)) return;
    }
}

/* _ZN11GS_MainMenu13GetMenuStringEi @ 0010e02c (arm) */
void fn_0010e02c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e02c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010e030:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x000000cau, 0, 0);
    }
L_0010e034:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0010e038:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010e03c:;
    {
        cpu->r[14] = 0x0010e040u; fn_000aeb58(cpu);
    }
L_0010e040:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010e044:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e048:;
    {
        cpu->r[14] = 0x0010e04cu; fn_000ae160(cpu);
    }
L_0010e04c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e050:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e054u)) return;
    }
}

/* _ZN11GS_MainMenu11RenderLevelEv @ 0010e054 (arm) */
void fn_0010e054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e054:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0010e058:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010e05c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000114u, 1, 0);
    }
L_0010e060:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010e064:;
    {
        cpu->r[0] = 0x00000039u;
    }
L_0010e068:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_0010e06c:;
    {
        cpu->r[14] = 0x0010e070u; fn_000aeb58(cpu);
    }
L_0010e070:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010e074:;
    {
        cpu->r[5] = rd32(0x0010e07cu + + 0x98u);
    }
L_0010e078:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010e080u, cpu->r[5], 0, 0);
    }
L_0010e07c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010e080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e084:;
    {
        cpu->r[14] = 0x0010e088u; fn_000ae160(cpu);
    }
L_0010e088:;
    {
        cpu->r[1] = rd32(0x0010e090u + + 0x88u);
    }
L_0010e08c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e090:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010e098u, cpu->r[1], 0, 0);
    }
L_0010e094:;
    {
        cpu->r[14] = 0x0010e098u; fn_000ae248(cpu);
    }
L_0010e098:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0010e09c:;
    {
        cpu->r[14] = 0x0010e0a0u; fn_000a04f8(cpu);
    }
L_0010e0a0:;
    {
        cpu->r[1] = rd32(0x0010e0a8u + + 0x74u);
    }
L_0010e0a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010e0acu, cpu->r[1], 0, 0);
    }
L_0010e0a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0010e0ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010e0b0:;
    {
        cpu->r[14] = 0x0010e0b4u; fn_000ae830(cpu);
    }
L_0010e0b4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010e0b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e0bc:;
    {
        cpu->r[14] = 0x0010e0c0u; fn_000ae228(cpu);
    }
L_0010e0c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xc0u);
    }
L_0010e0c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010e0c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_0010e0cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_0010e0d0:;
    {
        cpu->r[14] = 0x0010e0d4u; fn_000aa404(cpu);
    }
L_0010e0d4:;
    {
        cpu->r[2] = rd32(0x0010e0dcu + + 0x44u);
    }
L_0010e0d8:;
    {
        cpu->r[3] = rd32(0x0010e0e0u + + 0x44u);
    }
L_0010e0dc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010e0e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xc0u);
    }
L_0010e0e4:;
    {
        cpu->r[12] = 0x00000022u;
    }
L_0010e0e8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010e0ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010e0f4u, cpu->r[3], 0, 0);
    }
L_0010e0f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010e0f4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010e0f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010e0fc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010e100:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000008cu, 1, 0);
    }
L_0010e104:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010e108:;
    {
        cpu->r[14] = 0x0010e10cu; fn_000ad19c(cpu);
    }
L_0010e10c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_0010e110:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e114u)) return;
    }
}

/* _ZN11GS_MainMenu23UpdateMenuListPositionsEPjii @ 0010e128 (arm) */
void fn_0010e128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e128:;
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
L_0010e12c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0010e130:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0010e134:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0010e138:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_0010e13c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0010e140:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0010e144:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0010e148:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010e14c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0010e150:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_0010e154:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0010e158:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000014u;
        }
    }
L_0010e15c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0010e160:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_0010e164:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0010e168:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0010e16c:;
    {
        cpu->r[14] = 0x0010e170u; fn_000a8a2c(cpu);
    }
L_0010e170:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010e174:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0010e178:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010e17c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010e180:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0010e184:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010e188:;
    {
        cpu->r[0] = rd32(0x0010e190u + + 0xd4u);
    }
L_0010e18c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0010e190:;
    {
        cpu->r[0] = add_flags(cpu, 0x0010e198u, cpu->r[0], 0, 0);
    }
L_0010e194:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
        }
    }
L_0010e198:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010e1c8;
        }
    }
L_0010e19c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0010e1a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010e1a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_0010e1a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010e1ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0010e1b0:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0010e1b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0010e1b8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0010e1bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e1a4;
        }
    }
L_0010e1c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_0010e1c4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[5] = v;
    }
L_0010e1c8:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x8cau);
    }
L_0010e1cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010e1d0:;
    {
        cpu->r[3] = rd32(0x0010e1d8u + + 0x90u);
    }
L_0010e1d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010e1d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010e1dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000082u, 1, 0);
        }
    }
L_0010e1e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0010e1e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8e0u);
    }
L_0010e1e8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0010e1ec:;
    {
        cpu->r[3] = rd32(0x0010e1f4u + + 0x78u);
    }
L_0010e1f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_0010e1f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010e1f8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0010e1fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_0010e200:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[3]);
        }
    }
L_0010e204:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000026u, 1, 0);
        }
    }
L_0010e208:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
        }
    }
L_0010e20c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
        }
    }
L_0010e210:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
        }
    }
L_0010e214:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
        }
    }
L_0010e218:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[0] = v;
        }
    }
L_0010e21c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[0] = v;
        }
    }
L_0010e220:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000026u, 0, 0);
        }
    }
L_0010e224:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0010e228:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010e25c;
        }
    }
L_0010e22c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010e230:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0010e234:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_0010e238:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0010e23c:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0010e240:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0xcu, cpu->r[12]);
        }
    }
L_0010e244:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[1] + cpu->r[0]; cpu->r[2] = v;
        }
    }
L_0010e248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0010e24c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x10u, cpu->r[2]);
        }
    }
L_0010e250:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0010e254:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_0010e258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e234;
        }
    }
L_0010e25c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0010e260:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e264u)) return;
    }
}

/* _ZN11GS_MainMenu19ProcessOnMousePinchEv @ 0010e270 (arm) */
void fn_0010e270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e270:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010e274:;
    {
        cpu->r[4] = rd32(0x0010e27cu + + 0xd0u);
    }
L_0010e278:;
    {
        cpu->r[7] = rd32(0x0010e280u + + 0xd0u);
    }
L_0010e27c:;
    {
        cpu->r[6] = rd32(0x0010e284u + + 0xd0u);
    }
L_0010e280:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010e288u, cpu->r[4], 0, 0);
    }
L_0010e284:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0010e288:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_0010e28c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010e290:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_0010e294:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0010e298:;
    {
        vfp_sync_flags(cpu);
    }
L_0010e29c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e2a0u)) return;
        }
    }
L_0010e2a0:;
    {
        cpu->r[3] = rd32(0x0010e2a8u + + 0xb0u);
    }
L_0010e2a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010e2acu + + 0x8cu);
    }
L_0010e2a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010e2ac:;
    {
        cpu->r[3] = rd32(0x0010e2b4u + + 0xa8u);
    }
L_0010e2b0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_0010e2b4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0010e2b8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0010e2bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0010e2c0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0010e2c4:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_0010e2c8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010e2cc:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0010e2d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010e2d4:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010e2d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e32c;
        }
    }
L_0010e2dc:;
    {
        cpu->r[14] = 0x0010e2e0u; fn_000b09ac(cpu);
    }
L_0010e2e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010e2e4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
        }
    }
L_0010e2e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e32c;
        }
    }
L_0010e2ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_0010e2f0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010e2f8u + + 0x44u);
    }
L_0010e2f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010e2fcu + + 0x44u);
    }
L_0010e2f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010e2fc:;
    {
        vfp_sync_flags(cpu);
    }
L_0010e300:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_0010e304:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_0010e308:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0010e30c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_0010e310:;
    {
        vfp_sync_flags(cpu);
    }
L_0010e314:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
        }
    }
L_0010e318:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_0010e31c:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_0010e320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010e324:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0010e328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e32cu)) return;
    }
L_0010e32c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0010e334u + + 0x10u);
    }
L_0010e330:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010e338u + + 0x10u);
    }
L_0010e334:;
    {
        goto L_0010e2f8;
    }
}

/* _ZN11GS_MainMenu11DoBarActionEii @ 0010e360 (arm) */
void fn_0010e360(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e360:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_0010e364:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010e368:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010e36c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010e370:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010e374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e400;
        }
    }
L_0010e378:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0010e37c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0010e380:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[1]);
    }
L_0010e384:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010e388:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0010e38c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0010e390:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0010e394:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010e398:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010e39c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010e3a0:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[3]);
    }
L_0010e3a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000094u;
        }
    }
L_0010e3a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010e3ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000096u;
        }
    }
L_0010e3b0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010e3b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010e3b8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010e3bc:;
    {
        cpu->r[14] = 0x0010e3c0u; fn_000fd248(cpu);
    }
L_0010e3c0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0010e3c4:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0010e3c8:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_0010e3cc:;
    {
        cpu->r[14] = 0x0010e3d0u; fn_00093f34(cpu);
    }
L_0010e3d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xc4u);
    }
L_0010e3d4:;
    {
        cpu->r[2] = 0x000004b3u;
    }
L_0010e3d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010e3dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010e3e0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010e3e4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010e3e8:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_0010e3ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e418;
        }
    }
L_0010e3f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010e408;
        }
    }
L_0010e3f4:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010e3f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010e3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e418;
        }
    }
L_0010e400:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010e404:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e408u)) return;
    }
L_0010e408:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 0);
    }
L_0010e40c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0010e410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010e414:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0010e400;
        }
    }
L_0010e418:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_0010e41c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010e420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e400;
        }
    }
L_0010e424:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010e428:;
    {
        cpu->r[14] = 0x0010e42cu; fn_00093f34(cpu);
    }
L_0010e42c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010e430:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010e434:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010e438:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[2]);
    }
L_0010e43c:;
    {
        goto L_0010e400;
    }
}

/* _ZN11GS_MainMenu8DoActionEii @ 0010e440 (arm) */
void fn_0010e440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e440:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010e444:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0010e448:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010e44c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_0010e450:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010e454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e460;
        }
    }
L_0010e458:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0010e45c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e460u)) return;
    }
L_0010e460:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010e464:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0010e468:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010e540;
        }
    }
L_0010e46c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010e470:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0010e474:;
    {
        cpu->r[3] = 0x00000409u;
    }
L_0010e478:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0010e47c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
        }
    }
L_0010e480:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8e8u);
        }
    }
L_0010e484:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[12] = v;
        }
    }
L_0010e488:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_0010e48c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
        }
    }
L_0010e490:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010e494:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0010e498:;
    {
        wr32(cpu->r[0] + + 0xc4u, cpu->r[12]);
    }
L_0010e49c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[3]);
    }
L_0010e4a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e4c0;
        }
    }
L_0010e4a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010e4ec;
        }
    }
L_0010e4a8:;
    {
        cpu->r[3] = 0x0000040eu;
    }
L_0010e4ac:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010e4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e550;
        }
    }
L_0010e4b4:;
    {
        cpu->r[3] = 0x000006a5u;
    }
L_0010e4b8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010e4bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e458;
        }
    }
L_0010e4c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010e4c4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010e4c8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010e4cc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010e4d0:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[1]);
    }
L_0010e4d4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010e4d8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0010e4dc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010e4e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010e4e4:;
    {
        cpu->r[14] = 0x0010e4e8u; fn_000fd248(cpu);
    }
L_0010e4e8:;
    {
        goto L_0010e458;
    }
L_0010e4ec:;
    {
        cpu->r[3] = 0x00000404u;
    }
L_0010e4f0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0010e4f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e458;
        }
    }
L_0010e4f8:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_0010e4fc:;
    {
        cpu->r[14] = 0x0010e500u; fn_00093f34(cpu);
    }
L_0010e500:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8fcu);
    }
L_0010e504:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010e508:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010e50c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010e510:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010e514:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[2]);
    }
L_0010e518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e59c;
        }
    }
L_0010e51c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010e520:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010e524:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010e528:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010e52c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010e530:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010e534:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010e538:;
    {
        cpu->r[14] = 0x0010e53cu; fn_000fd248(cpu);
    }
L_0010e53c:;
    {
        goto L_0010e458;
    }
L_0010e540:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010e544:;
    {
        cpu->r[14] = 0x0010e54cu;
    }
L_0010e548:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xbcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e54cu)) return;
    }
L_0010e54c:;
    {
        goto L_0010e458;
    }
L_0010e550:;
    {
        cpu->r[14] = 0x0010e554u; fn_000a622c(cpu);
    }
L_0010e554:;
    {
        cpu->r[14] = rd32(0x0010e55cu + + 0x5cu);
    }
L_0010e558:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010e55c:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_0010e560:;
    {
        cpu->r[14] = add_flags(cpu, 0x0010e568u, cpu->r[14], 0, 0);
    }
L_0010e564:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010e568:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000014u, 0, 0);
    }
L_0010e56c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[14] = base + 16u;
    }
L_0010e570:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_0010e574:;
    {
        uint32_t base = cpu->r[14];
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
L_0010e578:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
    }
L_0010e57c:;
    {
        cpu->r[14] = 0x0010e580u; fn_000979a0(cpu);
    }
L_0010e580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0010e584:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010e588:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0010e58c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x20u);
    }
L_0010e590:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0010e594:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0010e598:;
    {
        return fn_0007232c(cpu);
    }
L_0010e59c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010e5a0:;
    {
        cpu->r[14] = 0x0010e5a4u; fn_00093f34(cpu);
    }
L_0010e5a4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0010e5a8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0010e5ac:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010e5b0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[2]);
    }
L_0010e5b4:;
    {
        goto L_0010e51c;
    }
}

/* _ZN11GS_MainMenu13OnMouseActionEi @ 0010e5bc (arm) */
void fn_0010e5bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e5bc:;
    {
        cpu->r[3] = rd32(0x0010e5c4u + + 0x64u);
    }
L_0010e5c0:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010e5c4:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0010e5c8:;
    {
        cpu->r[4] = rd32(0x0010e5d0u + + 0x5cu);
    }
L_0010e5cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010e5d4u, cpu->r[3], 0, 0);
    }
L_0010e5d0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010e5d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0010e5d8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0010e5dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010e5e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010e618;
        }
    }
L_0010e5e4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8d4u);
    }
L_0010e5e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_0010e5ec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0010e5f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0010e600;
        }
    }
L_0010e5f4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0010e5f8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_0010e5fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e614;
        }
    }
L_0010e600:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0010e604:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010e608:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010e60c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0010e610:;
    {
        return fn_00096990(cpu);
    }
L_0010e614:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[1]);
    }
L_0010e618:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010e61c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010e620:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0010e624:;
    {
        return fn_00096990(cpu);
    }
}

/* _ZN11GS_MainMenu10RenderItemEii @ 0010e630 (arm) */
void fn_0010e630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010e630:;
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
L_0010e634:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0010e638:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0010e63c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8e8u);
    }
L_0010e640:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_0010e644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0010e648:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x88u);
    }
L_0010e64c:;
    {
        cpu->r[10] = rd32(0x0010e654u + + 0x3cu);
    }
L_0010e650:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_0010e654:;
    {
        cpu->r[6] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0010e658:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[9] = v;
    }
L_0010e65c:;
    {
        cpu->r[10] = add_flags(cpu, 0x0010e664u, cpu->r[10], 0, 0);
    }
L_0010e660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010e664:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0010e668:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0010e66c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010e670:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0010e674:;
    {
        { uint32_t v = cpu->r[3] & 0x10000000u; set_nz(cpu, v); }
    }
L_0010e678:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e6a4;
        }
    }
L_0010e67c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010e680:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010e6a4;
        }
    }
L_0010e684:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_0010e688:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0010e68c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010e690u)) return;
    }
L_0010e6a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010e6a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010e6ac:;
    {
        cpu->r[14] = 0x0010e6b0u; fn_000ec44c(cpu);
    }
L_0010e6b0:;
    {
        cpu->r[3] = rd32(0x0010e6b8u + - 0x24u);
    }
L_0010e6b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010e6bcu + - 0x1cu);
    }
L_0010e6b8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0010e6bc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0010e6c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0010e6c4:;
    {
        vfp_vsub(cpu, 14, 14, 18);
    }
L_0010e6c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010e6cc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0010e6d0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0]);
    }
L_0010e6d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010e6d8:;
    {
        vfp_vmla(cpu, 18, 14, 15);
    }
L_0010e6dc:;
    {
        cpu->r[14] = 0x0010e6e0u; fn_000962d0(cpu);
    }
L_0010e6e0:;
    {
        cpu->r[3] = rd32(0x0010e6e8u + - 0x50u);
    }
L_0010e6e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_0010e6e8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0010e6ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0010e6f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010e6f4:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_0010e6f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_0010e6fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010e700:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
        }
    }
L_0010e704:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
        }
    }
L_0010e708:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
        }
    }
L_0010e70c:;
    {
        vfp_sync_flags(cpu);
    }
L_0010e710:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010e684;
        }
    }
L_0010e714:;
    {
        cpu->r[3] = rd32(0x0010e71cu + - 0x80u);
    }
L_0010e718:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_0010e71c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0010e720:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0010e724:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010e728:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010e72c:;
    {
        vfp_sync_flags(cpu);
    }
L_0010e730:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010e684;
        }
    }
L_0010e734:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010e738:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000014u, 0, 0);
    }
L_0010e73c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010e740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_0010e744:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0010e748:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0010e74c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010e750:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0010e754:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010e758:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 23u, &shc); cpu->r[1] = v;
    }
L_0010e75c:;
    {
        uint32_t v = cpu->r[3] ^ 0x08000000u; cpu->r[12] = v;
    }
L_0010e760:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
    }
L_0010e764:;
    {
        cpu->r[12] = (cpu->r[12] >> 27) & 0x1u;
    }
L_0010e768:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0010e76c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0010e770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e78c;
        }
    }
L_0010e774:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x34u);
    }
L_0010e778:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0010e77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e78c;
        }
    }
L_0010e780:;
    {
        cpu->r[12] = rd8(cpu->r[5] + + 0x40u);
    }
L_0010e784:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0010e788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e7b0;
        }
    }
L_0010e78c:;
    {
        { uint32_t v = cpu->r[3] & 0x02000000u; set_nz(cpu, v); }
    }
L_0010e790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010e794:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = (cpu->r[10] >> 9) & 0x7fu;
        }
    }
L_0010e798:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
        }
    }
L_0010e79c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
        }
    }
L_0010e7a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010e7a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ec10;
        }
    }
L_0010e7a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0010e7ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010e7b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00800000u; set_nz(cpu, v); }
    }
L_0010e7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e7ec;
        }
    }
L_0010e7b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0010e7bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010e7c0:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x90du);
    }
L_0010e7c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010e7c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010e7cc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0010e7d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (cpu->r[1] >> 9) & 0x7fu;
        }
    }
L_0010e7d4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_0010e7d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 23u, &shc); cpu->r[1] = v;
        }
    }
L_0010e7dc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_0010e7e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 3, 23u, &shc); cpu->r[1] = v;
        }
    }
L_0010e7e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
        }
    }
L_0010e7e8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0010e7ec:;
    {
        uint32_t v = cpu->r[3] & 0x00040000u; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_0010e7f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e84c;
        }
    }
L_0010e7f4:;
    {
        uint32_t v = cpu->r[3] & 0x00010000u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0010e7f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010eba8;
        }
    }
L_0010e7fc:;
    {
        uint32_t v = cpu->r[3] & 0x00020000u; cpu->r[12] = v;
        set_nz(cpu, v);
    }
L_0010e800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ec28;
        }
    }
L_0010e804:;
    {
        cpu->r[14] = 0x0010e808u; fn_00097ad0(cpu);
    }
L_0010e808:;
    {
        cpu->r[1] = 0x00000039u;
    }
L_0010e80c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0010e810:;
    {
        cpu->r[14] = 0x0010e814u; fn_0018aa44(cpu);
    }
L_0010e814:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010e818:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x908u);
    }
L_0010e81c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0010e820:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010e824:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0010e828:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0xcu);
    }
L_0010e82c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010e830:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0010e834:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010e838:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0010e83c:;
    {
        cpu->r[14] = 0x0010e840u; fn_000ad8a0(cpu);
    }
L_0010e840:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010e844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010e848:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010e84c:;
    {
        { uint32_t v = cpu->r[3] & 0x00200000u; set_nz(cpu, v); }
    }
L_0010e850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e9d8;
        }
    }
L_0010e854:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x78u);
    }
L_0010e858:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010e85c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010e860:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0010e864:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0010e868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e880;
        }
    }
L_0010e86c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x34u);
    }
L_0010e870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010e874:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = (cpu->r[10] >> 16) & 0xffu;
        }
    }
L_0010e878:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
        }
    }
L_0010e87c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e894;
        }
    }
L_0010e880:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010e884:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010e888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ec8c;
        }
    }
L_0010e88c:;
    {
        uint32_t v = shifter(cpu->r[10], 3, 24u, &shc); cpu->r[0] = v;
    }
L_0010e890:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0010e894:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 23u, &shc); cpu->r[2] = v;
    }
L_0010e898:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0010e89c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0010e8a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010e8a4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0010e8a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0010e8ac:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 23u, &shc); cpu->r[2] = v;
    }
L_0010e8b0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0010e8b4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0010e8b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0010e8bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0010e8c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0010e8c4:;
    {
        cpu->r[14] = 0x0010e8c8u; fn_000a8a2c(cpu);
    }
L_0010e8c8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xbcu);
    }
L_0010e8cc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0010e8d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010e8d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_0010e8d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_0010e8dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010e8e0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_0010e8e4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0010e8e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0010e8ec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0010e8f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ebe8;
        }
    }
L_0010e8f4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0010e8f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010e8fc:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0010e900:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010e904:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0010e908:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_0010e90c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0010e910:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0010e914:;
    {
        cpu->r[14] = 0x0010e918u; fn_000a8a2c(cpu);
    }
L_0010e918:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010e91c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0010e920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010e924:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010e928:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_0010e92c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010e930:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010e934:;
    {
        uint32_t v = cpu->r[0] & 0x00010000u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_0010e938:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0010e93c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e9d8;
        }
    }
L_0010e940:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010e944:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0010e948:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xbcu);
    }
L_0010e94c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_0010e950:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0010e954:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010e958:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0010e95c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010e960:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0010e964:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010e968:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_0010e96c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0010e970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ed30;
        }
    }
L_0010e974:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010e978:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5]);
    }
L_0010e97c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010e980:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_0010e984:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0010e988:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0010e98c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0010e990:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0010e994:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0010e998:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0010e99c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0010e9a0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0010e9a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010e9a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010e9ac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0010e9b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010e9b4:;
    {
        vfp_vadd(cpu, 14, 12, 14);
    }
L_0010e9b8:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0010e9bc:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0010e9c0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0010e9c4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0010e9c8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010e9cc:;
    {
        cpu->r[14] = 0x0010e9d0u; fn_000ad8a0(cpu);
    }
L_0010e9d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010e9d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010e9d8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0010e9dc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0010e9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e684;
        }
    }
L_0010e9e4:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_0010e9e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010e9f0u + - 0x350u);
    }
L_0010e9ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010e9f0:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_0010e9f4:;
    {
        vfp_vmla(cpu, 16, 17, 15);
    }
L_0010e9f8:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_0010e9fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010eac0;
        }
    }
L_0010ea00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010ea04:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0010e684;
        }
    }
L_0010ea08:;
    {
        { uint32_t v = cpu->r[3] & 0x02000000u; set_nz(cpu, v); }
    }
L_0010ea0c:;
    {
        cpu->r[10] = (cpu->r[3] >> 7) & 0x7fu;
    }
L_0010ea10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x0000007fu; cpu->r[9] = v;
        }
    }
L_0010ea14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_0010ea18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = cpu->r[10];
        }
    }
L_0010ea1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010ea20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ea30;
        }
    }
L_0010ea24:;
    {
        cpu->r[5] = rd8(cpu->r[5] + + 0x34u);
    }
L_0010ea28:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0010ea2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ecdc;
        }
    }
L_0010ea30:;
    {
        cpu->r[14] = 0x0010ea34u; fn_00097ad0(cpu);
    }
L_0010ea34:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0010ea38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ea3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ea40:;
    {
        cpu->r[14] = 0x0010ea44u; fn_00096a08(cpu);
    }
L_0010ea44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010ea48:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ea4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010ea50:;
    {
        cpu->r[14] = 0x0010ea54u; fn_0018aa44(cpu);
    }
L_0010ea54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ea58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010ea5c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 0);
    }
L_0010ea60:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x50u);
    }
L_0010ea64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0010ea68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0010ea6c:;
    {
        { uint32_t v = cpu->r[3] & 0x40000000u; set_nz(cpu, v); }
    }
L_0010ea70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0010ea74:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x50u, cpu->r[3]);
        }
    }
L_0010ea78:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_0010ea7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0010ed08;
        }
    }
L_0010ea80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0010ea84:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ea88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ea8c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0010ea90:;
    {
        cpu->r[14] = 0x0010ea98u;
    }
L_0010ea94:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ea98u)) return;
    }
L_0010ea98:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0010ea9c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,18);
    }
L_0010eaa0:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0010eaa4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0010eaa8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010eaac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010eab0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010eab4:;
    {
        cpu->r[14] = 0x0010eab8u; fn_000ad19c(cpu);
    }
L_0010eab8:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[6]);
    }
L_0010eabc:;
    {
        goto L_0010e684;
    }
L_0010eac0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010eac4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010ea08;
        }
    }
L_0010eac8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_0010eacc:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_0010ead0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ead4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ead8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0010eadc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0010eae0:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x48u);
    }
L_0010eae4:;
    {
        wr32(cpu->r[2] + + 0x48u, cpu->r[14]);
    }
L_0010eae8:;
    {
        wr32(cpu->r[2] + + 0x4cu, cpu->r[12]);
    }
L_0010eaec:;
    {
        cpu->r[14] = 0x0010eaf4u;
    }
L_0010eaf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010eaf4u)) return;
    }
L_0010eaf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010eaf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010eca0;
        }
    }
L_0010eafc:;
    {
        cpu->r[14] = 0x0010eb00u; fn_00097ad0(cpu);
    }
L_0010eb00:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0010eb04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010eb08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010eb0c:;
    {
        cpu->r[14] = 0x0010eb10u; fn_00096a08(cpu);
    }
L_0010eb10:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010eb14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010eb18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010eb1c:;
    {
        cpu->r[14] = 0x0010eb20u; fn_0018aa44(cpu);
    }
L_0010eb20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010eb24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010eb28:;
    {
        cpu->r[6] = rd8(cpu->r[5] + + 0x50u);
    }
L_0010eb2c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0010eb30:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_0010eb34:;
    {
        { uint32_t v = cpu->r[3] & 0x40000000u; set_nz(cpu, v); }
    }
L_0010eb38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0010eb3c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x50u, cpu->r[2]);
        }
    }
L_0010eb40:;
    {
        { uint32_t v = cpu->r[3] & 0x00800000u; set_nz(cpu, v); }
    }
L_0010eb44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ec54;
        }
    }
L_0010eb48:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0010eb4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010eb50:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010eb54:;
    {
        cpu->r[14] = 0x0010eb5cu;
    }
L_0010eb58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010eb5cu)) return;
    }
L_0010eb5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010eb60:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,18);
    }
L_0010eb64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], 0x00000002u, 1, 0);
    }
L_0010eb68:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_0010eb6c:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_0010eb70:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0xcu);
    }
L_0010eb74:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010eb78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_0010eb7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0010eb80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010eb84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010eb88:;
    {
        cpu->r[14] = 0x0010eb8cu; fn_000ad19c(cpu);
    }
L_0010eb8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa0u);
    }
L_0010eb90:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010eb94:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[6]);
    }
L_0010eb98:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_0010eb9c:;
    {
        wr32(cpu->r[3] + + 0x48u, cpu->r[1]);
    }
L_0010eba0:;
    {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[2]);
    }
L_0010eba4:;
    {
        goto L_0010e684;
    }
L_0010eba8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010ebac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x908u);
    }
L_0010ebb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0010ebb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010ebb8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_0010ebbc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0010ebc0:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0xcu);
    }
L_0010ebc4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0010ebc8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0010ebcc:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0010ebd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010ebd4:;
    {
        cpu->r[14] = 0x0010ebd8u; fn_000ad8a0(cpu);
    }
L_0010ebd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010ebdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010ebe0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010ebe4:;
    {
        goto L_0010e84c;
    }
L_0010ebe8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010ebec:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010ebf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0010ebf4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010ebf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ebfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010ec00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0010ec04:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0010ec08:;
    {
        cpu->r[14] = 0x0010ec0cu; fn_000a8a2c(cpu);
    }
L_0010ec0c:;
    {
        goto L_0010e918;
    }
L_0010ec10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ec14:;
    {
        cpu->r[14] = 0x0010ec18u; fn_0010dafc(cpu);
    }
L_0010ec18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ec1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x88u);
        }
    }
L_0010ec20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010e7a8;
        }
    }
L_0010ec24:;
    {
        goto L_0010e684;
    }
L_0010ec28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_0010ec2c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8e4u);
    }
L_0010ec30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_0010ec34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010ec38:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010ec3c:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x10u);
    }
L_0010ec40:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_0010ec44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_0010ec48:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x908u);
    }
L_0010ec4c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0010ec50:;
    {
        goto L_0010ebd0;
    }
L_0010ec54:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_0010ec58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ec5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ec60:;
    {
        cpu->r[14] = 0x0010ec68u;
    }
L_0010ec64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ec68u)) return;
    }
L_0010ec68:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0010ec6c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,18);
    }
L_0010ec70:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_0010ec74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0010ec78:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010ec7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ec80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010ec84:;
    {
        cpu->r[14] = 0x0010ec88u; fn_000ad19c(cpu);
    }
L_0010ec88:;
    {
        goto L_0010eb8c;
    }
L_0010ec8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ec90:;
    {
        cpu->r[14] = 0x0010ec94u; fn_0010dafc(cpu);
    }
L_0010ec94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ec98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010e684;
        }
    }
L_0010ec9c:;
    {
        goto L_0010e88c;
    }
L_0010eca0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010eca4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010eca8:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0010ecac:;
    {
        cpu->r[14] = 0x0010ecb4u;
    }
L_0010ecb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ecb4u)) return;
    }
L_0010ecb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ecb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010eafc;
        }
    }
L_0010ecbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ecc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ecc4:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_0010ecc8:;
    {
        cpu->r[14] = 0x0010ecd0u;
    }
L_0010eccc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ecd0u)) return;
    }
L_0010ecd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ecd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010eb24;
        }
    }
L_0010ecd8:;
    {
        goto L_0010eafc;
    }
L_0010ecdc:;
    {
        cpu->r[14] = 0x0010ece0u; fn_00097ad0(cpu);
    }
L_0010ece0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0010ece4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010ece8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010ecec:;
    {
        cpu->r[14] = 0x0010ecf0u; fn_00096a08(cpu);
    }
L_0010ecf0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010ecf4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ecf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010ecfc:;
    {
        cpu->r[14] = 0x0010ed00u; fn_0018aa44(cpu);
    }
L_0010ed00:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ed04:;
    {
        goto L_0010ea58;
    }
L_0010ed08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010ed0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ed10:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_0010ed14:;
    {
        cpu->r[14] = 0x0010ed1cu;
    }
L_0010ed18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ed1cu)) return;
    }
L_0010ed1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010ed20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x88u);
        }
    }
L_0010ed24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ea80;
        }
    }
L_0010ed28:;
    {
        wr8(cpu->r[5] + + 0x50u, cpu->r[6]);
    }
L_0010ed2c:;
    {
        goto L_0010e684;
    }
L_0010ed30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010ed34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_0010ed38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010ed3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_0010ed40:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0010ed44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_0010ed48:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_0010ed4c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0010ed50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010ed54:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_0010ed58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0010ed5c:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0010ed60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010ed64:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0010ed68:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0010ed6c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0010ed70:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0010ed74:;
    {
        goto L_0010e9b4;
    }
}

/* _ZN11GS_MainMenu13GetMenuStringEib @ 0010ed78 (arm) */
void fn_0010ed78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010ed78:;
    {
        cpu->r[3] = rd32(0x0010ed80u + + 0x144u);
    }
L_0010ed7c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0010ed80:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0010ed84:;
    {
        cpu->r[2] = rd32(0x0010ed8cu + + 0x13cu);
    }
L_0010ed88:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010ed90u, cpu->r[3], 0, 0);
    }
L_0010ed8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010ed90:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0010ed94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ed98:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010ed9c:;
    {
        cpu->r[14] = 0x0010eda0u; fn_000962d0(cpu);
    }
L_0010eda0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0010eda4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0010eda8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_0010edac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0010edb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010edfc;
        }
    }
L_0010edb4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0010edb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010ee44;
        }
    }
L_0010edbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010edc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010edc4:;
    {
        cpu->r[14] = 0x0010edc8u; fn_000aeb28(cpu);
    }
L_0010edc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010edcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010edd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010edd4:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0010edd8:;
    {
        cpu->r[14] = 0x0010eddcu; fn_000aeb28(cpu);
    }
L_0010eddc:;
    {
        cpu->r[1] = rd32(0x0010ede4u + + 0xe8u);
    }
L_0010ede0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010ede4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010edecu, cpu->r[1], 0, 0);
    }
L_0010ede8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010edec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010edf0:;
    {
        cpu->r[14] = 0x0010edf4u; fn_000ae830(cpu);
    }
L_0010edf4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010edf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010edfcu)) return;
    }
L_0010edfc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0010ee00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010ee84;
        }
    }
L_0010ee04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ee08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010ee0c:;
    {
        cpu->r[14] = 0x0010ee10u; fn_000aeb28(cpu);
    }
L_0010ee10:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ee14:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010ee18:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010ee1c:;
    {
        cpu->r[0] = 0x0000000du;
    }
L_0010ee20:;
    {
        cpu->r[14] = 0x0010ee24u; fn_000aeb28(cpu);
    }
L_0010ee24:;
    {
        cpu->r[1] = rd32(0x0010ee2cu + + 0xa4u);
    }
L_0010ee28:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010ee2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010ee34u, cpu->r[1], 0, 0);
    }
L_0010ee30:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010ee34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ee38:;
    {
        cpu->r[14] = 0x0010ee3cu; fn_000ae830(cpu);
    }
L_0010ee3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ee40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ee44u)) return;
    }
L_0010ee44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ee48:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010ee4c:;
    {
        cpu->r[14] = 0x0010ee50u; fn_000aeb28(cpu);
    }
L_0010ee50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010ee54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010ee58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010ee5c:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0010ee60:;
    {
        cpu->r[14] = 0x0010ee64u; fn_000aeb28(cpu);
    }
L_0010ee64:;
    {
        cpu->r[1] = rd32(0x0010ee6cu + + 0x68u);
    }
L_0010ee68:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0010ee6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010ee74u, cpu->r[1], 0, 0);
    }
L_0010ee70:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010ee74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ee78:;
    {
        cpu->r[14] = 0x0010ee7cu; fn_000ae830(cpu);
    }
L_0010ee7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ee80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ee84u)) return;
    }
L_0010ee84:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010ee88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010ee8c:;
    {
        cpu->r[14] = 0x0010ee90u; fn_000aeb28(cpu);
    }
L_0010ee90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010ee94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_0010ee98:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010ee9c:;
    {
        cpu->r[0] = 0x0000000du;
    }
L_0010eea0:;
    {
        cpu->r[14] = 0x0010eea4u; fn_000aeb28(cpu);
    }
L_0010eea4:;
    {
        cpu->r[1] = rd32(0x0010eeacu + + 0x2cu);
    }
L_0010eea8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010eeac:;
    {
        cpu->r[1] = add_flags(cpu, 0x0010eeb4u, cpu->r[1], 0, 0);
    }
L_0010eeb0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010eeb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010eeb8:;
    {
        cpu->r[14] = 0x0010eebcu; fn_000ae830(cpu);
    }
L_0010eebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010eec0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010eec4u)) return;
    }
}

/* _ZN11GS_MainMenu17ApplyMenuSettingsEv @ 0010eedc (arm) */
void fn_0010eedc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010eedc:;
    {
        cpu->r[3] = rd32(0x0010eee4u + + 0xdcu);
    }
L_0010eee0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010eee8u + + 0xc8u);
    }
L_0010eee4:;
    {
        cpu->r[1] = rd32(0x0010eeecu + + 0xd8u);
    }
L_0010eee8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010eef0u + + 0xc4u);
    }
L_0010eeec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0010eef4u, cpu->r[3], 0, 0);
    }
L_0010eef0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0010eef4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010eef8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010eefc:;
    {
        cpu->r[1] = rd32(0x0010ef04u + + 0xc4u);
    }
L_0010ef00:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0010ef04:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[4]);
    }
L_0010ef08:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0010ef0c:;
    {
        wr32(cpu->r[0] + + 0x8e8u, cpu->r[14]);
    }
L_0010ef10:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0010ef14:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0010ef18:;
    {
        wr32(cpu->r[0] + + 0x8d4u, cpu->r[1]);
    }
L_0010ef1c:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0010ef20:;
    {
        wr32(cpu->r[0] + + 0x8d8u, cpu->r[1]);
    }
L_0010ef24:;
    {
        cpu->r[1] = 0x00000584u;
    }
L_0010ef28:;
    {
        wr32(cpu->r[0] + + 0x8ecu, cpu->r[12]);
    }
L_0010ef2c:;
    {
        cpu->r[12] = 0x0000150du;
    }
L_0010ef30:;
    {
        wr32(cpu->r[0] + + 0x8e0u, cpu->r[1]);
    }
L_0010ef34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010ef38:;
    {
        cpu->r[14] = rd8(cpu->r[2] + cpu->r[12]);
    }
L_0010ef3c:;
    {
        cpu->r[12] = 0x00001c4cu;
    }
L_0010ef40:;
    {
        cpu->r[4] = rd32(0x0010ef48u + + 0x84u);
    }
L_0010ef44:;
    {
        wr8(cpu->r[0] + + 0x8d0u, cpu->r[5]);
    }
L_0010ef48:;
    {
        wr32(cpu->r[2] + cpu->r[12], cpu->r[14]);
    }
L_0010ef4c:;
    {
        cpu->r[2] = rd32(0x0010ef54u + + 0x7cu);
    }
L_0010ef50:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0010ef54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ef58:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010ef5c:;
    {
        cpu->r[2] = rd32(0x0010ef64u + + 0x70u);
    }
L_0010ef60:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0010ef68u + + 0x50u);
    }
L_0010ef64:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010ef68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ef6c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0010ef70:;
    {
        cpu->r[2] = rd32(0x0010ef78u + + 0x60u);
    }
L_0010ef74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ef78:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010ef7c:;
    {
        cpu->r[2] = rd32(0x0010ef84u + + 0x58u);
    }
L_0010ef80:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ef84:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010ef88:;
    {
        cpu->r[2] = rd32(0x0010ef90u + + 0x50u);
    }
L_0010ef8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010ef94u + + 0x28u);
    }
L_0010ef90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010ef94:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010ef98:;
    {
        cpu->r[14] = 0x0010ef9cu; fn_00099b28(cpu);
    }
L_0010ef9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0010efa0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0010efa4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0010efa8:;
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
L_0010efac:;
    {
        return fn_000a2764(cpu);
    }
}

/* _ZN11GS_MainMenu6UpdateEv @ 0010efe4 (arm) */
void fn_0010efe4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010efe4:;
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
L_0010efe8:;
    {
        cpu->r[4] = rd32(0x0010eff0u + + 0x508u);
    }
L_0010efec:;
    {
        cpu->r[6] = rd32(0x0010eff4u + + 0x508u);
    }
L_0010eff0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010eff4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0010effcu, cpu->r[4], 0, 0);
    }
L_0010eff8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0010effc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010f000:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0010f004:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_0010f008:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f00c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f050;
        }
    }
L_0010f010:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f014:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010f018:;
    {
        cpu->r[14] = 0x0010f01cu; fn_000a2764(cpu);
    }
L_0010f01c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_0010f020:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010f024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f074;
        }
    }
L_0010f028:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010f02c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f0c0;
        }
    }
L_0010f030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f048;
        }
    }
L_0010f038:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f03c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0010f040:;
    {
        cpu->r[14] = 0x0010f048u;
    }
L_0010f044:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f048u)) return;
    }
L_0010f048:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f04c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f050u)) return;
    }
L_0010f050:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f054:;
    {
        cpu->r[14] = 0x0010f058u; fn_00099b28(cpu);
    }
L_0010f058:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f05c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0010f060:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0010f064:;
    {
        cpu->r[14] = 0x0010f068u; fn_000a2764(cpu);
    }
L_0010f068:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x94u);
    }
L_0010f06c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0010f070:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f028;
        }
    }
L_0010f074:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f078:;
    {
        cpu->r[2] = 0x00001c4cu;
    }
L_0010f07c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010f080:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010f084:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0010f088:;
    {
        cpu->r[14] = 0x0010f090u;
    }
L_0010f08c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f090u)) return;
    }
L_0010f090:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f094:;
    {
        cpu->r[14] = 0x0010f098u; fn_00128a5c(cpu);
    }
L_0010f098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f09c:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_0010f0a0:;
    {
        cpu->r[14] = 0x0010f0a4u; fn_000eb59c(cpu);
    }
L_0010f0a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x900u);
    }
L_0010f0a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010f0ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f048;
        }
    }
L_0010f0b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f0b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f0b8:;
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
L_0010f0bc:;
    {
        return fn_00097a04(cpu);
    }
L_0010f0c0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0010f0c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f0c8:;
    {
        cpu->r[14] = 0x0010f0d0u;
    }
L_0010f0cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xc4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f0d0u)) return;
    }
L_0010f0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f048;
        }
    }
L_0010f0d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
    }
L_0010f0dc:;
    {
        cpu->r[2] = 0x00000408u;
    }
L_0010f0e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f0e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f394;
        }
    }
L_0010f0e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010f260;
        }
    }
L_0010f0ec:;
    {
        cpu->r[2] = 0x00000401u;
    }
L_0010f0f0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f294;
        }
    }
L_0010f0f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010f2fc;
        }
    }
L_0010f0fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000008cu, 1, 1);
    }
L_0010f100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f288;
        }
    }
L_0010f104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0010f108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f288;
        }
    }
L_0010f10c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f110:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0010f114:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f118:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0010f11c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010f120:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0010f124:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0010f128:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0010f12c:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010f130:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_0010f134:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0010f138:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0010f13c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010f140:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0010f144:;
    {
        cpu->r[14] = 0x0010f148u; fn_000fd248(cpu);
    }
L_0010f148:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f14c:;
    {
        cpu->r[14] = 0x0010f150u; fn_000a4480(cpu);
    }
L_0010f150:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0010f154:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010f158:;
    {
        cpu->r[14] = 0x0010f15cu; fn_000964c8(cpu);
    }
L_0010f15c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f160:;
    {
        cpu->r[14] = 0x0010f164u; fn_00096d08(cpu);
    }
L_0010f164:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0010f168:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010f16c:;
    {
        cpu->r[14] = 0x0010f170u; fn_000964c8(cpu);
    }
L_0010f170:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0010f174:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0010f178:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f17c:;
    {
        cpu->r[14] = 0x0010f180u; fn_00096bb8(cpu);
    }
L_0010f180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f184:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f194;
        }
    }
L_0010f188:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_0010f18c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0010f190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f484;
        }
    }
L_0010f194:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0010f198:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000000cu, 1, 1);
    }
L_0010f19c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f174;
        }
    }
L_0010f1a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f1a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010f1a8:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_0010f1ac:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0010f1b0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0010f1b4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0010f1b8:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0010f1bc:;
    {
        cpu->r[14] = 0x0010f1c0u; fn_00096d84(cpu);
    }
L_0010f1c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0010f1c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0010f1c8:;
    {
        cpu->r[14] = 0x0010f1ccu; fn_000964c8(cpu);
    }
L_0010f1cc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0010f1d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f1d4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0010f1d8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_0010f1dc:;
    {
        cpu->r[14] = 0x0010f1e0u; fn_00096d54(cpu);
    }
L_0010f1e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f1e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f1f4;
        }
    }
L_0010f1e8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_0010f1ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0010f1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f4c8;
        }
    }
L_0010f1f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0010f1f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 1);
    }
L_0010f1fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f1d0;
        }
    }
L_0010f200:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f204:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_0010f208:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f20c:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_0010f210:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010f214:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0010f218:;
    {
        cpu->r[2] = 0x00001be8u;
    }
L_0010f21c:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_0010f220:;
    {
        cpu->r[2] = 0x00001be4u;
    }
L_0010f224:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_0010f228:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[12]);
    }
L_0010f22c:;
    {
        cpu->r[14] = 0x0010f230u; fn_000f35e4(cpu);
    }
L_0010f230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010f234:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_0010f238:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0010f23c:;
    {
        cpu->r[14] = 0x0010f240u; fn_0018ba6c(cpu);
    }
L_0010f240:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f244:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f248:;
    {
        cpu->r[14] = 0x0010f24cu; fn_000f22d4(cpu);
    }
L_0010f24c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f250:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f254:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f258:;
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
L_0010f25c:;
    {
        return fn_000f361c(cpu);
    }
L_0010f260:;
    {
        cpu->r[2] = 0x000004b3u;
    }
L_0010f264:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f2c0;
        }
    }
L_0010f26c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010f340;
        }
    }
L_0010f270:;
    {
        cpu->r[2] = 0x00000409u;
    }
L_0010f274:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f378;
        }
    }
L_0010f27c:;
    {
        cpu->r[2] = 0x0000040eu;
    }
L_0010f280:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f284:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f3f8;
        }
    }
L_0010f288:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010f28c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0010f290:;
    {
        goto L_0010f048;
    }
L_0010f294:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010f298:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f29c:;
    {
        cpu->r[14] = 0x0010f2a0u; fn_0018ba6c(cpu);
    }
L_0010f2a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f2a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f2a8:;
    {
        cpu->r[14] = 0x0010f2acu; fn_001014a0(cpu);
    }
L_0010f2ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f2b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f2b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f2b8:;
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
L_0010f2bc:;
    {
        return fn_000f361c(cpu);
    }
L_0010f2c0:;
    {
        cpu->r[0] = 0x00000970u;
    }
L_0010f2c4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f2c8:;
    {
        cpu->r[14] = 0x0010f2ccu; fn_0018ba6c(cpu);
    }
L_0010f2cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f2d0:;
    {
        cpu->r[2] = 0x000004c0u;
    }
L_0010f2d4:;
    {
        cpu->r[3] = 0x00000415u;
    }
L_0010f2d8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010f2dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010f2e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f2e4:;
    {
        cpu->r[14] = 0x0010f2e8u; fn_00101900(cpu);
    }
L_0010f2e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f2ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f2f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f2f4:;
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
L_0010f2f8:;
    {
        return fn_000f361c(cpu);
    }
L_0010f2fc:;
    {
        cpu->r[2] = 0x00000403u;
    }
L_0010f300:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f458;
        }
    }
L_0010f308:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0010f42c;
        }
    }
L_0010f30c:;
    {
        cpu->r[2] = 0x00000404u;
    }
L_0010f310:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f314:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f288;
        }
    }
L_0010f318:;
    {
        cpu->r[0] = 0x00000954u;
    }
L_0010f31c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f320:;
    {
        cpu->r[14] = 0x0010f324u; fn_0018ba6c(cpu);
    }
L_0010f324:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f328:;
    {
        cpu->r[14] = 0x0010f32cu; fn_0010b754(cpu);
    }
L_0010f32c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f330:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f334:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f338:;
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
L_0010f33c:;
    {
        return fn_000f361c(cpu);
    }
L_0010f340:;
    {
        cpu->r[2] = 0x000004bau;
    }
L_0010f344:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f4b4;
        }
    }
L_0010f34c:;
    {
        cpu->r[2] = 0x000006a5u;
    }
L_0010f350:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f378;
        }
    }
L_0010f358:;
    {
        cpu->r[2] = 0x000004b9u;
    }
L_0010f35c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0010f360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f288;
        }
    }
L_0010f364:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f368:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f36c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f370:;
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
L_0010f374:;
    {
        return fn_000f34e8(cpu);
    }
L_0010f378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010f37c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010f380:;
    {
        cpu->r[14] = 0x0010f384u; fn_000962d0(cpu);
    }
L_0010f384:;
    {
        cpu->r[14] = 0x0010f388u; fn_00072508(cpu);
    }
L_0010f388:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010f38c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0010f390:;
    {
        goto L_0010f048;
    }
L_0010f394:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f398:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0010f39c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0010f3a0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0010f3a4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_0010f3a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010f3ac:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0010f3b0:;
    {
        cpu->r[14] = 0x0010f3b4u; fn_000fd248(cpu);
    }
L_0010f3b4:;
    {
        cpu->r[0] = 0x000009dcu;
    }
L_0010f3b8:;
    {
        cpu->r[14] = 0x0010f3bcu; fn_0018ba6c(cpu);
    }
L_0010f3bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0010f3c0:;
    {
        cpu->r[14] = 0x0010f3c4u; fn_000a7570(cpu);
    }
L_0010f3c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f3c8:;
    {
        cpu->r[0] = 0x000006a4u;
    }
L_0010f3cc:;
    {
        cpu->r[14] = 0x0010f3d0u; fn_000aeb58(cpu);
    }
L_0010f3d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000900u, 0, 0);
    }
L_0010f3d8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0010f3dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0010f3e0:;
    {
        cpu->r[14] = 0x0010f3e4u; fn_000a7bb0(cpu);
    }
L_0010f3e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f3e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010f3ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f3f0:;
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
L_0010f3f4:;
    {
        return fn_000f361c(cpu);
    }
L_0010f3f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f3fc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010f400:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0010f404:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0010f408:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_0010f40c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0010f410:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010f414:;
    {
        cpu->r[14] = 0x0010f418u; fn_000fd248(cpu);
    }
L_0010f418:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0010f41c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[3]);
    }
L_0010f420:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0010f424:;
    {
        wr32(cpu->r[5] + + 0xc4u, cpu->r[3]);
    }
L_0010f428:;
    {
        goto L_0010f048;
    }
L_0010f42c:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_0010f430:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f434:;
    {
        cpu->r[14] = 0x0010f438u; fn_0018ba6c(cpu);
    }
L_0010f438:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f43c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f440:;
    {
        cpu->r[14] = 0x0010f444u; fn_001ade44(cpu);
    }
L_0010f444:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f448:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f44c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f450:;
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
L_0010f454:;
    {
        return fn_000f361c(cpu);
    }
L_0010f458:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_0010f45c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f460:;
    {
        cpu->r[14] = 0x0010f464u; fn_0018ba6c(cpu);
    }
L_0010f464:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f468:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f46c:;
    {
        cpu->r[14] = 0x0010f470u; fn_001038b0(cpu);
    }
L_0010f470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0010f474:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0010f478:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010f47c:;
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
L_0010f480:;
    {
        return fn_000f361c(cpu);
    }
L_0010f484:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0010f488:;
    {
        cpu->r[1] = 0x00001c50u;
    }
L_0010f48c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f490:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010f494:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[7]);
    }
L_0010f498:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_0010f49c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_0010f4a0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[2]; cpu->r[7] = v;
    }
L_0010f4a4:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_0010f4a8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x34u);
    }
L_0010f4ac:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0010f4b0:;
    {
        goto L_0010f1a4;
    }
L_0010f4b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f4b8:;
    {
        cpu->r[3] = 0x00001c9cu;
    }
L_0010f4bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0010f4c0:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_0010f4c4:;
    {
        goto L_0010f11c;
    }
L_0010f4c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_0010f4cc:;
    {
        cpu->r[2] = 0x00001c50u;
    }
L_0010f4d0:;
    {
        cpu->r[0] = 0x0000009cu;
    }
L_0010f4d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0010f4d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x438u);
    }
L_0010f4dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0010f4e0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_0010f4e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_0010f4e8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x6cu);
    }
L_0010f4ec:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_0010f4f0:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0010f4f4:;
    {
        goto L_0010f204;
    }
}

/* _ZN11GS_MainMenu9RenderBarEb @ 0010f500 (arm) */
void fn_0010f500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010f500:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010f504:;
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
L_0010f508:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0010f50c:;
    {
        cpu->r[9] = rd32(0x0010f514u + + 0x57cu);
    }
L_0010f510:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_0010f514:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f518:;
    {
        cpu->r[9] = add_flags(cpu, 0x0010f520u, cpu->r[9], 0, 0);
    }
L_0010f51c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010f520:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0010f524:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010f668;
        }
    }
L_0010f528:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8ecu);
    }
L_0010f52c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0010f530:;
    {
        cpu->r[14] = 0x0010f534u; fn_000ec44c(cpu);
    }
L_0010f534:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010f538:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f9a8;
        }
    }
L_0010f540:;
    {
        cpu->r[0] = 0x00000047u;
    }
L_0010f544:;
    {
        cpu->r[14] = 0x0010f548u; fn_00093f34(cpu);
    }
L_0010f548:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010f54c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f550:;
    {
        cpu->r[14] = 0x0010f554u; fn_0010d9cc(cpu);
    }
L_0010f554:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f558:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f674;
        }
    }
L_0010f55c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010f560:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0010f564:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_0010f568:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_0010f56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f570:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010f668;
        }
    }
L_0010f574:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0010f578:;
    {
        cpu->r[11] = 0x00006667u;
    }
L_0010f57c:;
    {
        cpu->r[0] = rd32(0x0010f584u + + 0x510u);
    }
L_0010f580:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x6666u << 16);
    }
L_0010f584:;
    {
        cpu->r[1] = rd32(0x0010f58cu + + 0x50cu);
    }
L_0010f588:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[12], 1, 0);
    }
L_0010f58c:;
    {
        cpu->r[2] = rd32(0x0010f594u + + 0x508u);
    }
L_0010f590:;
    {
        cpu->r[7] = 0x00000014u;
    }
L_0010f594:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0010f598:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0010f59c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_0010f5a0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000bu, 1, 0);
    }
L_0010f5a4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0010f5a8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0010f5ac:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_0010f5b0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_0010f5b4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[11]);
    }
L_0010f5b8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_0010f5bc:;
    {
        goto L_0010f5d0;
    }
L_0010f5c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0010f5c4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010f5c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_0010f5cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010f668;
        }
    }
L_0010f5d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0010f5d4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0010f5d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010f5dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_0010f5e0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + - 0x14u);
    }
L_0010f5e4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0010f5e8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0010f5ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_0010f5f0:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x8u);
    }
L_0010f5f4:;
    {
        uint32_t v = cpu->r[10] & 0x13000000u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0010f5f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[5];
        }
    }
L_0010f5fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f5c0;
        }
    }
L_0010f600:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f604:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010f608:;
    {
        cpu->r[14] = 0x0010f60cu; fn_000ec44c(cpu);
    }
L_0010f60c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010f610:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010f614:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_0010f618:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_0010f61c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0010f620:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010f624:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010f628:;
    {
        vfp_sync_flags(cpu);
    }
L_0010f62c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010f650;
        }
    }
L_0010f630:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010f634:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0010f638:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0010f63c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0010f640:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010f644:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010f648:;
    {
        vfp_sync_flags(cpu);
    }
L_0010f64c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010f6c4;
        }
    }
L_0010f650:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_0010f654:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0010f658:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_0010f65c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0010f660:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0010f664:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010f5d0;
        }
    }
L_0010f668:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0010f66c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0010f670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f674u)) return;
    }
L_0010f674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0010f678:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f67c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f9f0;
        }
    }
L_0010f680:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_0010f684:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010f688:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 8u, &shc), cpu->r[3], 1, 0);
    }
L_0010f68c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0010f690:;
    {
        cpu->r[14] = 0x0010f694u; fn_00093f34(cpu);
    }
L_0010f694:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0010f698:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0010f69c:;
    {
        vfp_vdiv(cpu, 14, 16, 15);
    }
L_0010f6a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0010f6a8u + + 0x3e4u);
    }
L_0010f6a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0010f6a8:;
    {
        vfp_sync_flags(cpu);
    }
L_0010f6ac:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = 0x00ff0000u;
        }
    }
L_0010f6b0:;
    {
        if (cond_test(cpu, 6)) {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
        }
    }
L_0010f6b4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0010fd10;
        }
    }
L_0010f6b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f6bc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_0010f6c0:;
    {
        goto L_0010f568;
    }
L_0010f6c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f6c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0010f6cc:;
    {
        cpu->r[14] = 0x0010f6d0u; fn_0010d9cc(cpu);
    }
L_0010f6d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010f6d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f6d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010fa6c;
        }
    }
L_0010f6dc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0010f6e0:;
    {
        cpu->r[2] = (~0x0000000au);
    }
L_0010f6e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010f6e8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0010f6ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010f6f0:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0010f6f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0010f6f8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0010f6fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0010f700:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010f704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_0010f708:;
    {
        cpu->r[1] = rd32(cpu->r[1] + - 0x10u);
    }
L_0010f70c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[2]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0010f710:;
    {
        cpu->r[14] = 0x000004b9u;
    }
L_0010f714:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0010f718:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0010f71c:;
    {
        cpu->r[12] = 0x00000408u;
    }
L_0010f720:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_0010f724:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
        }
    }
L_0010f728:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0010f72c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0010f730:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010f734:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000004u;
        }
    }
L_0010f738:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[5];
        }
    }
L_0010f73c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000005u;
        }
    }
L_0010f740:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0010f744:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0010f748:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[0], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_0010f74c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_0010f750:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[2] = v;
    }
L_0010f754:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0010f758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f768;
        }
    }
L_0010f75c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x34u);
    }
L_0010f760:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f78c;
        }
    }
L_0010f768:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f76c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0010f770:;
    {
        cpu->r[14] = 0x0010f774u; fn_0010dafc(cpu);
    }
L_0010f774:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010f778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f78c;
        }
    }
L_0010f780:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010f784:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0010f788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fbe4;
        }
    }
L_0010f78c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8cau);
    }
L_0010f790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0010f794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f7a4;
        }
    }
L_0010f798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010f79c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0010f7a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fc4c;
        }
    }
L_0010f7a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_0010f7a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010f7ac:;
    {
        cpu->r[11] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_0010f7b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0010f7b4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0010f7b8:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_0010f7bc:;
    {
        cpu->r[14] = 0x0010f7c0u; fn_000962d0(cpu);
    }
L_0010f7c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0010f7c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010fb94;
        }
    }
L_0010f7c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0010f7cc:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0010f7d0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0010f7d4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0010f7d8:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x48u);
    }
L_0010f7dc:;
    {
        wr32(cpu->r[11] + + 0x48u, cpu->r[2]);
    }
L_0010f7e0:;
    {
        wr32(cpu->r[11] + + 0x4cu, cpu->r[3]);
    }
L_0010f7e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010f7e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010f7ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010faa8;
        }
    }
L_0010f7f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8ccu);
    }
L_0010f7f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0010f7f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010faa0;
        }
    }
L_0010f7fc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x54u);
    }
L_0010f800:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f804:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0010f808:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010f80c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0010f810:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0010f814:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[11] + + 0x54u, cpu->r[3]);
        }
    }
L_0010f818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010f81c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0010f820:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0010f824:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000005u, 0, 0);
        }
    }
L_0010f828:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010f82c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
        }
    }
L_0010f830:;
    {
        cpu->r[14] = 0x0010f834u; fn_000aeb58(cpu);
    }
L_0010f834:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010f838:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010f83c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f840:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0010f844:;
    {
        cpu->r[14] = 0x0010f84cu;
    }
L_0010f848:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f84cu)) return;
    }
L_0010f84c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0010f850:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010f854:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010f858:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010f85c:;
    {
        cpu->r[14] = 0x0010f860u; fn_000a9818(cpu);
    }
L_0010f860:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010f864:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010f868:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0010f86c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0010f870:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010f874:;
    {
        cpu->r[14] = 0x0010f878u; fn_000aeb58(cpu);
    }
L_0010f878:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010f87c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010f880:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0010f884:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_0010f888:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010f88c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010f890:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010f894:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0010f898:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010f89c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010f8a0:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0010f8a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0010f8a8:;
    {
        cpu->r[12] = 0x00000021u;
    }
L_0010f8ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0010f8b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000043u, 1, 0);
    }
L_0010f8b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_0010f8b8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0010f8bc:;
    {
        cpu->r[14] = 0x0010f8c0u; fn_000ac4bc(cpu);
    }
L_0010f8c0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_0010f8c4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0010f8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fb8c;
        }
    }
L_0010f8cc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0010f8d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_0010f8d4:;
    {
        wr32(cpu->r[11] + + 0x54u, cpu->r[0]);
    }
L_0010f8d8:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0xcu);
    }
L_0010f8dc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x58u);
    }
L_0010f8e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010f8e4:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_0010f8e8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0010f8ec:;
    {
        cpu->r[8] = rd32(cpu->r[11] + + 0x54u);
    }
L_0010f8f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0010f8f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[11] = v;
    }
L_0010f8f8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[8] = v;
    }
L_0010f8fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fbc8;
        }
    }
L_0010f900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ccu);
    }
L_0010f904:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010f908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fbc0;
        }
    }
L_0010f90c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0010f910:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0010f914:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 23u, &shc); cpu->r[6] = v;
    }
L_0010f918:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 23u, &shc); cpu->r[6] = v;
    }
L_0010f91c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010f920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f924:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010f928:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010f92c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0010f930:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0010f934:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0010f938:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0010f93c:;
    {
        cpu->r[14] = 0x0010f944u;
    }
L_0010f940:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010f944u)) return;
    }
L_0010f944:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010f948:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0010f94c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0010f950:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010f954:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[14]);
    }
L_0010f958:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0010f95c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010f960:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_0010f964:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0010f968:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010f96c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[14] * (int64_t)(int32_t)cpu->r[3]; cpu->r[14] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_0010f970:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0010f974:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[2], 1, 1u, &shc), cpu->r[3], 1, 0);
    }
L_0010f978:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0010f97c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_0010f980:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_0010f984:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x50u);
    }
L_0010f988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0010f98c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0010f990:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_0010f994:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 1u, &shc), 1, 0);
    }
L_0010f998:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010f99c:;
    {
        cpu->r[14] = 0x0010f9a0u; fn_000ad8a0(cpu);
    }
L_0010f9a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_0010f9a4:;
    {
        goto L_0010f5c0;
    }
L_0010f9a8:;
    {
        cpu->r[2] = rd32(0x0010f9b0u + + 0xe4u);
    }
L_0010f9ac:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_0010f9b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010f9b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010f9b8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0010f9bc:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_0010f9c0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0010f9c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0010f9c8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010f9cc:;
    {
        cpu->r[14] = 0x0010f9d0u; fn_000ad8a0(cpu);
    }
L_0010f9d0:;
    {
        cpu->r[0] = 0x00000047u;
    }
L_0010f9d4:;
    {
        cpu->r[14] = 0x0010f9d8u; fn_00093f34(cpu);
    }
L_0010f9d8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0010f9dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010f9e0:;
    {
        cpu->r[14] = 0x0010f9e4u; fn_0010d9cc(cpu);
    }
L_0010f9e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010f9e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f55c;
        }
    }
L_0010f9ec:;
    {
        goto L_0010f674;
    }
L_0010f9f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0010f9f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f55c;
        }
    }
L_0010f9f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_0010f9fc:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010fa00:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0010fa08u + + 0x84u);
    }
L_0010fa04:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 8u, &shc), cpu->r[3], 1, 0);
    }
L_0010fa08:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0010fa0c:;
    {
        cpu->r[14] = 0x0010fa10u; fn_00093f34(cpu);
    }
L_0010fa10:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0010fa14:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0010fa18:;
    {
        vfp_vdiv(cpu, 15, 16, 13);
    }
L_0010fa1c:;
    {
        vfp_vsub(cpu, 15, 17, 15);
    }
L_0010fa20:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0010fa24:;
    {
        vfp_sync_flags(cpu);
    }
L_0010fa28:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0010fa2c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
        }
    }
L_0010fa30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0010fd48;
        }
    }
L_0010fa34:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010fa38:;
    {
        cpu->r[14] = 0x0010fa3cu; fn_00093f34(cpu);
    }
L_0010fa3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_0010fa40:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0010fa44:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0010fa48:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[5];
    }
L_0010fa4c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_0010fa50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0010fa54:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0010fa58:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_0010fa5c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0010fa60:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0010fa64:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0010fa68:;
    {
        goto L_0010f568;
    }
L_0010fa6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_0010fa70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0010fa74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fccc;
        }
    }
L_0010fa78:;
    {
        cpu->r[12] = (~0x0000000au);
    }
L_0010fa7c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[10]);
    }
L_0010fa80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010fa84:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0010fa88:;
    {
        goto L_0010f6ec;
    }
L_0010faa0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0010faa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f7fc;
        }
    }
L_0010faa8:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0010faac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010fab0:;
    {
        cpu->r[14] = 0x0010fab4u; fn_0009ecc0(cpu);
    }
L_0010fab4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0010fab8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0010fabc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010fac0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x54u);
    }
L_0010fac4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0010fac8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_0010facc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0010fad0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0010fad4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x54u, cpu->r[3]);
        }
    }
L_0010fad8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0010fadc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010fae0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000005u, 0, 0);
        }
    }
L_0010fae4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
        }
    }
L_0010fae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0010faec:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010faf0:;
    {
        cpu->r[14] = 0x0010faf4u; fn_000aeb58(cpu);
    }
L_0010faf4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0010faf8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010fafc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010fb00:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0010fb04:;
    {
        cpu->r[14] = 0x0010fb0cu;
    }
L_0010fb08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010fb0cu)) return;
    }
L_0010fb0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0010fb10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010fb14:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0010fb18:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010fb1c:;
    {
        cpu->r[14] = 0x0010fb20u; fn_000a9818(cpu);
    }
L_0010fb20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0010fb24:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010fb28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0010fb2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010fb30:;
    {
        cpu->r[14] = 0x0010fb34u; fn_000aeb58(cpu);
    }
L_0010fb34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0010fb38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_0010fb3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0010fb40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010fb44:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010fb48:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010fb4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010fb50:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[0]);
    }
L_0010fb54:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0010fb58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010fb5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010fb60:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0010fb64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000043u, 1, 0);
    }
L_0010fb68:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0010fb6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0010fb70:;
    {
        cpu->r[12] = 0x00000021u;
    }
L_0010fb74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0010fb78:;
    {
        cpu->r[14] = 0x0010fb7cu; fn_000ac4bc(cpu);
    }
L_0010fb7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0010fb80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010fb84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
        }
    }
L_0010fb88:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[11] + + 0x54u, cpu->r[1]);
        }
    }
L_0010fb8c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0010fb90:;
    {
        goto L_0010f8d8;
    }
L_0010fb94:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_0010fb98:;
    {
        cpu->r[14] = 0x0010fb9cu; fn_000962d0(cpu);
    }
L_0010fb9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0010fba0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010f7c8;
        }
    }
L_0010fba4:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_0010fba8:;
    {
        cpu->r[14] = 0x0010fbacu; fn_000962d0(cpu);
    }
L_0010fbac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_0010fbb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0010fbb4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
        }
    }
L_0010fbb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f7d0;
        }
    }
L_0010fbbc:;
    {
        goto L_0010f7c8;
    }
L_0010fbc0:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0010fbc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f90c;
        }
    }
L_0010fbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_0010fbcc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0010fbd0:;
    {
        cpu->r[6] = (cpu->r[3] >> 9) & 0x7fu;
    }
L_0010fbd4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 23u, &shc); cpu->r[3] = v;
    }
L_0010fbd8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 23u, &shc); cpu->r[3] = v;
    }
L_0010fbdc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_0010fbe0:;
    {
        goto L_0010f91c;
    }
L_0010fbe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010fbe8:;
    {
        cpu->r[14] = 0x0010fbecu; fn_0010d9cc(cpu);
    }
L_0010fbec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010fbf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010fbf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f78c;
        }
    }
L_0010fbf8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010fbfc:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_0010fc00:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010fc04:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010fc08:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0010fc0c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0010fc10:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_0010fc14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010fc18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010fc1c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010fc20:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0010fc24:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[11] * (int64_t)(int32_t)cpu->r[3]; cpu->r[11] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_0010fc28:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0010fc2c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010fc30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0010fc34:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[14], 1, 2u, &shc), cpu->r[3], 1, 0);
    }
L_0010fc38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_0010fc3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_0010fc40:;
    {
        cpu->r[14] = 0x0010fc44u; fn_000ad8a0(cpu);
    }
L_0010fc44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010fc48:;
    {
        goto L_0010f78c;
    }
L_0010fc4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8ccu);
    }
L_0010fc50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0010fc54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f7a4;
        }
    }
L_0010fc58:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_0010fc5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010fc60:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[6]);
        }
    }
L_0010fc64:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0010fc68:;
    {
        cpu->r[14] = 0x0010fc6cu; fn_0010d9cc(cpu);
    }
L_0010fc6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010fc70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010fc74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f7a4;
        }
    }
L_0010fc78:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010fc7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010fc80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010f7a4;
        }
    }
L_0010fc84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0010fc88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0010fc8c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_0010fc90:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_0010fc94:;
    {
        cpu->r[11] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_0010fc98:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0010fc9c:;
    {
        cpu->r[14] = 0x0010fca0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0010fca0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0010fca4:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_0010fca8:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_0010fcac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x50u);
    }
L_0010fcb0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0010fcb4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0010fcb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0010fcbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_0010fcc0:;
    {
        cpu->r[14] = 0x0010fcc4u; fn_000ad8a0(cpu);
    }
L_0010fcc4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0010fcc8:;
    {
        goto L_0010f7a4;
    }
L_0010fccc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0010fcd0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0010fcd4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0010fcec;
        }
    }
L_0010fcd8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0010fcdc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0010fce0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_0010fce4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_0010fce8:;
    {
        goto L_0010f6ec;
    }
L_0010fcec:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_0010fcf0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = (~0x0000000au);
        }
    }
L_0010fcf4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_0010fcf8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000bu, 1, 0);
        }
    }
L_0010fcfc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[10]);
        }
    }
L_0010fd00:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
        }
    }
L_0010fd04:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
        }
    }
L_0010fd08:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
        }
    }
L_0010fd0c:;
    {
        goto L_0010f6ec;
    }
L_0010fd10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_0010fd14:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010fd18:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 8u, &shc), cpu->r[3], 1, 0);
    }
L_0010fd1c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0010fd20:;
    {
        cpu->r[14] = 0x0010fd24u; fn_00093f34(cpu);
    }
L_0010fd24:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0010fd28:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0010fd2c:;
    {
        vfp_vdiv(cpu, 15, 16, 13);
    }
L_0010fd30:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0010fd34:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010fd38:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[3] = v;
    }
L_0010fd3c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0010fd40:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0010fd44:;
    {
        goto L_0010f6b8;
    }
L_0010fd48:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f8u);
    }
L_0010fd4c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0010fd50:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 8u, &shc), cpu->r[3], 1, 0);
    }
L_0010fd54:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0010fd58:;
    {
        cpu->r[14] = 0x0010fd5cu; fn_00093f34(cpu);
    }
L_0010fd5c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0010fd60:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0010fd64:;
    {
        vfp_vdiv(cpu, 15, 16, 13);
    }
L_0010fd68:;
    {
        vfp_vsub(cpu, 15, 17, 15);
    }
L_0010fd6c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0010fd70:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0010fd74:;
    {
        uint32_t v = cpu->r[0] & 0x000000ffu; cpu->r[3] = v;
    }
L_0010fd78:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0010fd7c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0010fd80:;
    {
        goto L_0010fa34;
    }
}

/* _ZN11GS_MainMenu11RenderTitleEib @ 0010fd84 (arm) */
void fn_0010fd84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010fd84:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8e0u);
    }
L_0010fd88:;
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
L_0010fd8c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0010fd90:;
    {
        cpu->r[5] = rd32(0x0010fd98u + + 0x198u);
    }
L_0010fd94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0010fd98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010fd9c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0010fda0:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010fda8u, cpu->r[5], 0, 0);
    }
L_0010fda4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0010fda8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fef4;
        }
    }
L_0010fdac:;
    {
        cpu->r[2] = rd32(0x0010fdb4u + + 0x180u);
    }
L_0010fdb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010fdb4:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_0010fdb8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0010fdbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fef4;
        }
    }
L_0010fdc0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8d8u);
    }
L_0010fdc4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010fdc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0010fddc;
        }
    }
L_0010fdcc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0010fdd0:;
    {
        cpu->r[14] = 0x0010fdd8u;
    }
L_0010fdd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xa0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010fdd8u)) return;
    }
L_0010fdd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e0u);
    }
L_0010fddc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0010fde0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010fde4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0010fde8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xacu);
    }
L_0010fdec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0010fdf0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0010fdf4:;
    {
        cpu->r[14] = 0x0010fdf8u; fn_000aeb58(cpu);
    }
L_0010fdf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0010fdfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0010fe00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010fe04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010fe08:;
    {
        cpu->r[14] = 0x0010fe0cu; fn_000aa404(cpu);
    }
L_0010fe0c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0010fe10:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xacu);
    }
L_0010fe14:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0010fe18:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010fe1c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x48u);
    }
L_0010fe20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0010fe24:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0010fe28:;
    {
        wr32(cpu->r[10] + + 0x48u, cpu->r[2]);
    }
L_0010fe2c:;
    {
        wr32(cpu->r[10] + + 0x4cu, cpu->r[3]);
    }
L_0010fe30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0010fefc;
        }
    }
L_0010fe34:;
    {
        cpu->r[3] = rd32(0x0010fe3cu + + 0xfcu);
    }
L_0010fe38:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_0010fe3c:;
    {
        cpu->r[8] = rd32(0x0010fe44u + + 0xf8u);
    }
L_0010fe40:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0010fe44:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0010fe48:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_0010fe4c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0010fe50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_0010fe54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_0010fe58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0010fe5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0010fe60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0010fe64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0010fe68:;
    {
        cpu->r[14] = 0x0010fe70u;
    }
L_0010fe6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0010fe70u)) return;
    }
L_0010fe70:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010fe74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0010fe78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0010fe7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x0000001du;
        }
    }
L_0010fe80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
        }
    }
L_0010fe84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_0010fe88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
        }
    }
L_0010fe8c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000001cu;
        }
    }
L_0010fe90:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0010fe94:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_0010fe98:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0010fe9c:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_0010fea0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0010fea4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010fea8:;
    {
        cpu->r[14] = 0x0010feacu; fn_000ad8a0(cpu);
    }
L_0010feac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8e0u);
    }
L_0010feb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0010feb4:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xacu);
    }
L_0010feb8:;
    {
        cpu->r[14] = 0x0010febcu; fn_000aeb58(cpu);
    }
L_0010febc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0010fec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000005u, 0, 0);
    }
L_0010fec4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0010fec8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0010fecc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0010fed0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0010fed4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0010fed8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_0010fedc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_0010fee0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010fee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010fee8:;
    {
        cpu->r[14] = 0x0010feecu; fn_000ad19c(cpu);
    }
L_0010feec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0010fef0:;
    {
        cpu->r[14] = 0x0010fef4u; fn_0012f780(cpu);
    }
L_0010fef4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0010fef8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010fefcu)) return;
    }
L_0010fefc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0010ff00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0010fe34;
        }
    }
L_0010ff04:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0010ff08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8e0u);
    }
L_0010ff0c:;
    {
        cpu->r[14] = 0x0010ff10u; fn_000aeb58(cpu);
    }
L_0010ff10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000005u, 0, 0);
    }
L_0010ff14:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_0010ff18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0010ff1c:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0010ff20:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0010ff24:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0010ff28:;
    {
        cpu->r[14] = 0x0010ff2cu; fn_000ad19c(cpu);
    }
L_0010ff2c:;
    {
        goto L_0010feec;
    }
}

/* _ZN11GS_MainMenuC1Ev @ 0010ff40 (arm) */
void fn_0010ff40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010ff40:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010ff44:;
    {
        cpu->r[5] = rd32(0x0010ff4cu + + 0x54u);
    }
L_0010ff48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010ff4c:;
    {
        cpu->r[14] = 0x0010ff50u; fn_00128adc(cpu);
    }
L_0010ff50:;
    {
        cpu->r[2] = rd32(0x0010ff58u + + 0x4cu);
    }
L_0010ff54:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010ff5cu, cpu->r[5], 0, 0);
    }
L_0010ff58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010ff5c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010ff60:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0010ff64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ff68:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010ff6c:;
    {
        wr32(cpu->r[4] + + 0x8e4u, cpu->r[3]);
    }
L_0010ff70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010ff74:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[1]);
    }
L_0010ff78:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[12]);
    }
L_0010ff7c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0010ff80:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_0010ff84:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[1]);
    }
L_0010ff88:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_0010ff8c:;
    {
        wr8(cpu->r[4] + + 0x8d0u, cpu->r[3]);
    }
L_0010ff90:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[3]);
    }
L_0010ff94:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[3]);
    }
L_0010ff98:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_0010ff9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0010ffa0u)) return;
    }
}

/* _ZN11GS_MainMenuC2Ev @ 0010ffa8 (arm) */
void fn_0010ffa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0010ffa8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0010ffac:;
    {
        cpu->r[5] = rd32(0x0010ffb4u + + 0x54u);
    }
L_0010ffb0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0010ffb4:;
    {
        cpu->r[14] = 0x0010ffb8u; fn_00128adc(cpu);
    }
L_0010ffb8:;
    {
        cpu->r[2] = rd32(0x0010ffc0u + + 0x4cu);
    }
L_0010ffbc:;
    {
        cpu->r[5] = add_flags(cpu, 0x0010ffc4u, cpu->r[5], 0, 0);
    }
L_0010ffc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0010ffc4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_0010ffc8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0010ffcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0010ffd0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0010ffd4:;
    {
        wr32(cpu->r[4] + + 0x8e4u, cpu->r[3]);
    }
L_0010ffd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0010ffdc:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[1]);
    }
L_0010ffe0:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[12]);
    }
L_0010ffe4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0010ffe8:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[3]);
    }
L_0010ffec:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[1]);
    }
L_0010fff0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[3]);
    }
L_0010fff4:;
    {
        wr8(cpu->r[4] + + 0x8d0u, cpu->r[3]);
    }
L_0010fff8:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[3]);
    }
L_0010fffc:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[3]);
    }
L_00110000:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_00110004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00110008u)) return;
    }
}

/* _ZN11GS_MainMenuC1Eb @ 00110010 (arm) */
void fn_00110010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110010:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00110014:;
    {
        cpu->r[5] = rd32(0x0011001cu + + 0x9cu);
    }
L_00110018:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0011001c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00110020:;
    {
        cpu->r[14] = 0x00110024u; fn_00128adc(cpu);
    }
L_00110024:;
    {
        cpu->r[3] = rd32(0x0011002cu + + 0x90u);
    }
L_00110028:;
    {
        cpu->r[5] = add_flags(cpu, 0x00110030u, cpu->r[5], 0, 0);
    }
L_0011002c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00110030:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00110034:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_00110038:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0011003c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00110040:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[6]);
    }
L_00110044:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00110048:;
    {
        wr8(cpu->r[4] + + 0x8fdu, cpu->r[2]);
    }
L_0011004c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00110050:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011009c;
        }
    }
L_00110054:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00110058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000900u, 0, 0);
    }
L_0011005c:;
    {
        wr8(cpu->r[4] + + 0x8d0u, cpu->r[5]);
    }
L_00110060:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00110064:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[5]);
    }
L_00110068:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011006c:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[3]);
    }
L_00110070:;
    {
        cpu->r[2] = 0x00000042u;
    }
L_00110074:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00110078:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[5]);
    }
L_0011007c:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_00110080:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_00110084:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[5]);
    }
L_00110088:;
    {
        cpu->r[14] = 0x0011008cu; imp_memset(cpu); /* memset */
    }
L_0011008c:;
    {
        wr32(cpu->r[4] + + 0x8e4u, cpu->r[5]);
    }
L_00110090:;
    {
        wr32(cpu->r[4] + + 0x900u, cpu->r[5]);
    }
L_00110094:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00110098:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011009cu)) return;
    }
L_0011009c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_001100a0:;
    {
        cpu->r[14] = 0x001100a4u; fn_00093f34(cpu);
    }
L_001100a4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001100a8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_001100ac:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001100b0:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_001100b4:;
    {
        goto L_00110054;
    }
}

/* _ZN11GS_MainMenuC2Eb @ 001100c0 (arm) */
void fn_001100c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001100c0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001100c4:;
    {
        cpu->r[5] = rd32(0x001100ccu + + 0x9cu);
    }
L_001100c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001100cc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001100d0:;
    {
        cpu->r[14] = 0x001100d4u; fn_00128adc(cpu);
    }
L_001100d4:;
    {
        cpu->r[3] = rd32(0x001100dcu + + 0x90u);
    }
L_001100d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001100e0u, cpu->r[5], 0, 0);
    }
L_001100dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001100e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001100e4:;
    {
        wr8(cpu->r[4] + + 0x8cau, cpu->r[2]);
    }
L_001100e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001100ec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001100f0:;
    {
        wr8(cpu->r[4] + + 0x8fcu, cpu->r[6]);
    }
L_001100f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001100f8:;
    {
        wr8(cpu->r[4] + + 0x8fdu, cpu->r[2]);
    }
L_001100fc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00110100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011014c;
        }
    }
L_00110104:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00110108:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000900u, 0, 0);
    }
L_0011010c:;
    {
        wr8(cpu->r[4] + + 0x8d0u, cpu->r[5]);
    }
L_00110110:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00110114:;
    {
        wr8(cpu->r[4] + + 0x904u, cpu->r[5]);
    }
L_00110118:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011011c:;
    {
        wr32(cpu->r[4] + + 0x8ccu, cpu->r[3]);
    }
L_00110120:;
    {
        cpu->r[2] = 0x00000042u;
    }
L_00110124:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00110128:;
    {
        wr32(cpu->r[4] + + 0x908u, cpu->r[5]);
    }
L_0011012c:;
    {
        wr8(cpu->r[4] + + 0x90cu, cpu->r[3]);
    }
L_00110130:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_00110134:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[5]);
    }
L_00110138:;
    {
        cpu->r[14] = 0x0011013cu; imp_memset(cpu); /* memset */
    }
L_0011013c:;
    {
        wr32(cpu->r[4] + + 0x8e4u, cpu->r[5]);
    }
L_00110140:;
    {
        wr32(cpu->r[4] + + 0x900u, cpu->r[5]);
    }
L_00110144:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00110148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011014cu)) return;
    }
L_0011014c:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_00110150:;
    {
        cpu->r[14] = 0x00110154u; fn_00093f34(cpu);
    }
L_00110154:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00110158:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_0011015c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00110160:;
    {
        wr32(cpu->r[4] + + 0x8f8u, cpu->r[3]);
    }
L_00110164:;
    {
        goto L_00110104;
    }
}

/* _ZN11GS_MainMenuD0Ev @ 00110170 (arm) */
void fn_00110170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110170:;
    {
        cpu->r[3] = rd32(0x00110178u + + 0x2cu);
    }
L_00110174:;
    {
        cpu->r[2] = rd32(0x0011017cu + + 0x2cu);
    }
L_00110178:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110180u, cpu->r[3], 0, 0);
    }
L_0011017c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00110180:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00110184:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00110188:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0011018c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00110190:;
    {
        cpu->r[14] = 0x00110194u; fn_000ec21c(cpu);
    }
L_00110194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00110198:;
    {
        cpu->r[14] = 0x0011019cu; fn_0018ba20(cpu);
    }
L_0011019c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001101a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001101a4u)) return;
    }
}

/* _ZN11GS_MainMenu6CreateEv @ 001101ac (arm) */
void fn_001101ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001101ac:;
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
L_001101b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001101b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001101b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001101bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001101c0:;
    {
        wr32(cpu->r[0] + + 0x8f0u, cpu->r[5]);
    }
L_001101c4:;
    {
        wr32(cpu->r[0] + + 0x8dcu, cpu->r[5]);
    }
L_001101c8:;
    {
        cpu->r[14] = 0x001101d0u;
    }
L_001101cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x80u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001101d0u)) return;
    }
L_001101d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001101d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001101d8:;
    {
        cpu->r[14] = 0x001101e0u;
    }
L_001101dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x7cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001101e0u)) return;
    }
L_001101e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_001101e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001101e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001101ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f0u);
    }
L_001101f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001101f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001101f8:;
    {
        cpu->r[14] = 0x001101fcu; fn_000eb8b8(cpu);
    }
L_001101fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00110200:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00110204:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011035c;
        }
    }
L_00110208:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_0011020c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00110210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00110224;
        }
    }
L_00110214:;
    {
        cpu->r[14] = 0x00110218u; fn_0018ba60(cpu);
    }
L_00110218:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_0011021c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00110220:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_00110224:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00110228:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_0011022c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8f0u);
    }
L_00110230:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00110234:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 1);
    }
L_00110238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00110364;
        }
    }
L_0011023c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00110240:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110294;
        }
    }
L_00110244:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8ecu);
    }
L_00110248:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011024c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_00110250:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_00110254:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00110258:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x4u);
    }
L_0011025c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x8u);
    }
L_00110260:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0xcu);
    }
L_00110264:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x10u);
    }
L_00110268:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000018u;
        cpu->r[5] = rd32(cpu->r[2]);
        cpu->r[2] = wb_tmp;
    }
L_0011026c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_00110270:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[6]);
    }
L_00110274:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00110278:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[14]);
    }
L_0011027c:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
    }
L_00110280:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
    }
L_00110284:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_00110288:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_0011028c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00110290:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110250;
        }
    }
L_00110294:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_00110298:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011029c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110300;
        }
    }
L_001102a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x88u);
    }
L_001102a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001102a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8e8u);
    }
L_001102ac:;
    {
        goto L_001102b4;
    }
L_001102b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_001102b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001102b8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x4u);
    }
L_001102bc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001102c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001102c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001102c8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0xcu);
    }
L_001102cc:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x10u);
    }
L_001102d0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x14u);
    }
L_001102d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001102d8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000018u;
        cpu->r[7] = rd32(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_001102dc:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[10]);
    }
L_001102e0:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[8]);
    }
L_001102e4:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[1], 2, 3u, &shc), cpu->r[7]);
    }
L_001102e8:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[6]);
    }
L_001102ec:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[5]);
    }
L_001102f0:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[14]);
    }
L_001102f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001102f8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001102fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001102b0;
        }
    }
L_00110300:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00110304:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00110308:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110340;
        }
    }
L_0011030c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00110310:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_00110314:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00110318:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0011031c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00110320:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00110324:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_00110328:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011032c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00110330:;
    {
        cpu->r[14] = 0x00110334u; fn_000eb71c(cpu);
    }
L_00110334:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00110338:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0011033c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110314;
        }
    }
L_00110340:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00110344:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00110348:;
    {
        cpu->r[14] = 0x00110350u;
    }
L_0011034c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00110350u)) return;
    }
L_00110350:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00110354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00110358:;
    {
        wr32(cpu->r[4] + + 0x8f4u, cpu->r[3]);
    }
L_0011035c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00110360:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00110364u)) return;
    }
L_00110364:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00110368:;
    {
        cpu->r[14] = 0x0011036cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0011036c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00110370:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00110374:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00110378:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
        }
    }
L_0011037c:;
    {
        goto L_0011023c;
    }
}

/* _ZN11GS_MainMenu14ResetSelectionEv @ 00110380 (arm) */
void fn_00110380(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110380:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00110384:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00110388:;
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
L_0011038c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00110390:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00110394:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00110398:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_0011039c:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_001103a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110470;
        }
    }
L_001103a4:;
    {
        cpu->r[10] = rd32(0x001103acu + + 0xccu);
    }
L_001103a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001103ac:;
    {
        cpu->r[9] = rd32(0x001103b4u + + 0xc8u);
    }
L_001103b0:;
    {
        cpu->r[8] = rd32(0x001103b8u + + 0xc8u);
    }
L_001103b4:;
    {
        cpu->r[10] = add_flags(cpu, 0x001103bcu, cpu->r[10], 0, 0);
    }
L_001103b8:;
    {
        cpu->r[9] = add_flags(cpu, 0x001103c0u, cpu->r[9], 0, 0);
    }
L_001103bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001103c0:;
    {
        cpu->r[7] = rd32(0x001103c8u + + 0xbcu);
    }
L_001103c4:;
    {
        cpu->r[8] = add_flags(cpu, 0x001103ccu, cpu->r[8], 0, 0);
    }
L_001103c8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000034u, 0, 0);
    }
L_001103cc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000034u, 0, 0);
    }
L_001103d0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001103d4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001103d8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001103dc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001103e0:;
    {
        wr8(cpu->r[1] + + 0x35u, cpu->r[0]);
    }
L_001103e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110410;
        }
    }
L_001103e8:;
    {
        cpu->r[3] = rd32(0x001103f0u + + 0x98u);
    }
L_001103ec:;
    {
        cpu->r[2] = add_flags(cpu, 0x001103f4u, cpu->r[7], 0, 0);
    }
L_001103f0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001103f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001103f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110400u, cpu->r[3], 0, 0);
    }
L_001103fc:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00110400:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00110404:;
    {
        cpu->r[14] = 0x00110408u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110408:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0011040c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110410:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00110414:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00110418:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011041c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00110420:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
    }
L_00110424:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011045c;
        }
    }
L_00110428:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_0011042c:;
    {
        cpu->r[1] = rd32(0x00110434u + + 0x58u);
    }
L_00110430:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110434:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110438:;
    {
        cpu->r[2] = rd32(0x00110440u + + 0x50u);
    }
L_0011043c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110444u, cpu->r[1], 0, 0);
    }
L_00110440:;
    {
        cpu->r[3] = rd32(0x00110448u + + 0x4cu);
    }
L_00110444:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011044cu, cpu->r[2], 0, 0);
    }
L_00110448:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0011044c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110454u, cpu->r[3], 0, 0);
    }
L_00110450:;
    {
        cpu->r[14] = 0x00110454u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110454:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110458:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0011045c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_00110460:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00110464:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00110468:;
    {
        wr8(cpu->r[1] + + 0x40u, cpu->r[0]);
    }
L_0011046c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001103d0;
        }
    }
L_00110470:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00110474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00110478u)) return;
    }
}

/* _ZN11GS_MainMenu24ProcessOnMouseButtonDownEv @ 00110498 (arm) */
void fn_00110498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110498:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0011049c:;
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
L_001104a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001104a4:;
    {
        cpu->r[9] = rd32(0x001104acu + + 0x304u);
    }
L_001104a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001104ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001104b0:;
    {
        cpu->r[9] = add_flags(cpu, 0x001104b8u, cpu->r[9], 0, 0);
    }
L_001104b4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001104b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001104c8;
        }
    }
L_001104bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001104c0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001104c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001104c8u)) return;
    }
L_001104c8:;
    {
        cpu->r[3] = rd32(0x001104d0u + + 0x2e4u);
    }
L_001104cc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001104d0:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_001104d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000002eu, 1, 0);
    }
L_001104d8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001104dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000015cu, 1, 1);
    }
L_001104e0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001104f8;
        }
    }
L_001104e4:;
    {
        cpu->r[3] = rd32(0x001104ecu + + 0x2ccu);
    }
L_001104e8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001104ec:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_001104f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000e9u, 1, 1);
    }
L_001104f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110798;
        }
    }
L_001104f8:;
    {
        cpu->r[3] = rd32(0x00110500u + + 0x2bcu);
    }
L_001104fc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110500:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110504:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00110508:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_0011050c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00110510:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001104bc;
        }
    }
L_00110514:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00110518:;
    {
        cpu->r[12] = rd32(0x00110520u + + 0x2a0u);
    }
L_0011051c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00110520:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00110524:;
    {
        cpu->r[0] = rd32(0x0011052cu + + 0x298u);
    }
L_00110528:;
    {
        cpu->r[12] = add_flags(cpu, 0x00110530u, cpu->r[12], 0, 0);
    }
L_0011052c:;
    {
        cpu->r[3] = rd32(0x00110534u + + 0x294u);
    }
L_00110530:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00110534:;
    {
        cpu->r[4] = rd32(0x0011053cu + + 0x290u);
    }
L_00110538:;
    {
        cpu->r[0] = add_flags(cpu, 0x00110540u, cpu->r[0], 0, 0);
    }
L_0011053c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110540:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110548u, cpu->r[3], 0, 0);
    }
L_00110544:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_00110548:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_0011054c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_00110550:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00110554:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00110558:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0011055c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00110560:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00110564:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00110568:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0011056c:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[0]);
    }
L_00110570:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001105ac;
        }
    }
L_00110574:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00110578:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011057c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00110580:;
    {
        cpu->r[2] = rd32(0x00110588u + + 0x248u);
    }
L_00110584:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00110588:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110590u, cpu->r[12], 0, 0);
    }
L_0011058c:;
    {
        cpu->r[3] = rd32(0x00110594u + + 0x240u);
    }
L_00110590:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110598u, cpu->r[2], 0, 0);
    }
L_00110594:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00110598:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011059c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001105a4u, cpu->r[3], 0, 0);
    }
L_001105a0:;
    {
        cpu->r[14] = 0x001105a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001105a4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001105a8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_001105ac:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_001105b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_001105b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001105b8:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_001105bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001105fc;
        }
    }
L_001105c0:;
    {
        cpu->r[1] = rd32(0x001105c8u + + 0x210u);
    }
L_001105c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001105c8:;
    {
        cpu->r[12] = rd32(0x001105d0u + + 0x20cu);
    }
L_001105cc:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_001105d0:;
    {
        cpu->r[2] = rd32(0x001105d8u + + 0x208u);
    }
L_001105d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001105dcu, cpu->r[1], 0, 0);
    }
L_001105d8:;
    {
        cpu->r[3] = rd32(0x001105e0u + + 0x204u);
    }
L_001105dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001105e4u, cpu->r[12], 0, 0);
    }
L_001105e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001105e8u, cpu->r[2], 0, 0);
    }
L_001105e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_001105e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001105f0u, cpu->r[3], 0, 0);
    }
L_001105ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001105f0:;
    {
        cpu->r[14] = 0x001105f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001105f4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_001105f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_001105fc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00110600:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00110604:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00110608:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011060c:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[4]);
    }
L_00110610:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110788;
        }
    }
L_00110614:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00110618:;
    {
        cpu->r[10] = 0x0000000cu;
    }
L_0011061c:;
    {
        cpu->r[3] = rd32(0x00110624u + + 0x1c4u);
    }
L_00110620:;
    {
        cpu->r[8] = rd32(0x00110628u + + 0x1c4u);
    }
L_00110624:;
    {
        cpu->r[10] = (uint32_t)((int32_t)(int16_t)(cpu->r[12] & 0xffff) * (int32_t)(int16_t)(cpu->r[10] & 0xffff));
    }
L_00110628:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110630u, cpu->r[3], 0, 0);
    }
L_0011062c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_00110630:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00110634:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[8]);
    }
L_00110638:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0011063c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00110640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00110644:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_00110648:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x4u);
    }
L_0011064c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110688;
        }
    }
L_00110650:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110654:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00110658:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0011065c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110660:;
    {
        cpu->r[1] = rd32(0x00110668u + + 0x188u);
    }
L_00110664:;
    {
        cpu->r[2] = rd32(0x0011066cu + + 0x188u);
    }
L_00110668:;
    {
        cpu->r[3] = rd32(0x00110670u + + 0x188u);
    }
L_0011066c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110674u, cpu->r[1], 0, 0);
    }
L_00110670:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110678u, cpu->r[2], 0, 0);
    }
L_00110674:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110678:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110680u, cpu->r[3], 0, 0);
    }
L_0011067c:;
    {
        cpu->r[14] = 0x00110680u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110680:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110684:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110688:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0011068c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00110690:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00110694:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00110698:;
    {
        vfp_sync_flags(cpu);
    }
L_0011069c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011077c;
        }
    }
L_001106a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001106a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001106a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001106ac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011077c;
        }
    }
L_001106b0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_001106b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001106b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001106bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001106c0:;
    {
        vfp_sync_flags(cpu);
    }
L_001106c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011077c;
        }
    }
L_001106c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001106cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001106d0:;
    {
        vfp_sync_flags(cpu);
    }
L_001106d4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011077c;
        }
    }
L_001106d8:;
    {
        cpu->r[0] = rd8(cpu->r[7] + + 0x64u);
    }
L_001106dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001106e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011077c;
        }
    }
L_001106e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001106e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110728;
        }
    }
L_001106ec:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_001106f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001106f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001106f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001106fc:;
    {
        cpu->r[1] = rd32(0x00110704u + + 0xf8u);
    }
L_00110700:;
    {
        cpu->r[2] = rd32(0x00110708u + + 0xf8u);
    }
L_00110704:;
    {
        cpu->r[3] = rd32(0x0011070cu + + 0xf8u);
    }
L_00110708:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110710u, cpu->r[1], 0, 0);
    }
L_0011070c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110714u, cpu->r[2], 0, 0);
    }
L_00110710:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110714:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011071cu, cpu->r[3], 0, 0);
    }
L_00110718:;
    {
        cpu->r[14] = 0x0011071cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011071c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110720:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110724:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00110728:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0011072c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00110730:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_00110734:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110770;
        }
    }
L_00110738:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_0011073c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00110740:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110744:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110748:;
    {
        cpu->r[1] = rd32(0x00110750u + + 0xb8u);
    }
L_0011074c:;
    {
        cpu->r[2] = rd32(0x00110754u + + 0xb8u);
    }
L_00110750:;
    {
        cpu->r[3] = rd32(0x00110758u + + 0xb8u);
    }
L_00110754:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011075cu, cpu->r[1], 0, 0);
    }
L_00110758:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110760u, cpu->r[2], 0, 0);
    }
L_0011075c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110760:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110768u, cpu->r[3], 0, 0);
    }
L_00110764:;
    {
        cpu->r[14] = 0x00110768u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110768:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0011076c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110770:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[6]);
    }
L_00110774:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00110778:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[0]);
    }
L_0011077c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00110780:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_00110784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00110634;
        }
    }
L_00110788:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0011078c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00110790:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011055c;
        }
    }
L_00110794:;
    {
        goto L_001104bc;
    }
L_00110798:;
    {
        cpu->r[3] = rd32(0x001107a0u + + 0x74u);
    }
L_0011079c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001107a4u + + 0x8u);
    }
L_001107a0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_001107a4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001107a8:;
    {
        goto L_001104f8;
    }
}

/* _ZN11GS_MainMenu18ProcessOnMouseDragEv @ 00110818 (arm) */
void fn_00110818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110818:;
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
L_0011081c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00110820:;
    {
        cpu->r[9] = rd32(0x00110828u + + 0x394u);
    }
L_00110824:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00110828:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0011082c:;
    {
        cpu->r[14] = 0x00110830u; fn_000eb988(cpu);
    }
L_00110830:;
    {
        cpu->r[3] = rd32(0x00110838u + + 0x388u);
    }
L_00110834:;
    {
        cpu->r[9] = add_flags(cpu, 0x0011083cu, cpu->r[9], 0, 0);
    }
L_00110838:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011083c:;
    {
        cpu->r[3] = rd32(0x00110844u + + 0x380u);
    }
L_00110840:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00110844:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110848:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000095u, 1, 0);
    }
L_0011084c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00110850:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00110854:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110860;
        }
    }
L_00110858:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000002du, 1, 1);
    }
L_0011085c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110b04;
        }
    }
L_00110860:;
    {
        cpu->r[3] = rd32(0x00110868u + + 0x360u);
    }
L_00110864:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110868:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0011086c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00110870:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00110874:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00110878:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110af0;
        }
    }
L_0011087c:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00110880:;
    {
        cpu->r[12] = rd32(0x00110888u + + 0x344u);
    }
L_00110884:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00110888:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011088c:;
    {
        cpu->r[0] = rd32(0x00110894u + + 0x33cu);
    }
L_00110890:;
    {
        cpu->r[12] = add_flags(cpu, 0x00110898u, cpu->r[12], 0, 0);
    }
L_00110894:;
    {
        cpu->r[3] = rd32(0x0011089cu + + 0x338u);
    }
L_00110898:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_0011089c:;
    {
        cpu->r[4] = rd32(0x001108a4u + + 0x334u);
    }
L_001108a0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001108a8u, cpu->r[0], 0, 0);
    }
L_001108a4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001108a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001108b0u, cpu->r[3], 0, 0);
    }
L_001108ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_001108b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_001108b4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[4]);
    }
L_001108b8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001108bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001108c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001108c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001108c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001108cc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001108d0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001108d4:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[0]);
    }
L_001108d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110914;
        }
    }
L_001108dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001108e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001108e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001108e8:;
    {
        cpu->r[2] = rd32(0x001108f0u + + 0x2ecu);
    }
L_001108ec:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001108f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001108f8u, cpu->r[12], 0, 0);
    }
L_001108f4:;
    {
        cpu->r[3] = rd32(0x001108fcu + + 0x2e4u);
    }
L_001108f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110900u, cpu->r[2], 0, 0);
    }
L_001108fc:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00110900:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00110904:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011090cu, cpu->r[3], 0, 0);
    }
L_00110908:;
    {
        cpu->r[14] = 0x0011090cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011090c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110910:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110914:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00110918:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0011091c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00110920:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_00110924:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110964;
        }
    }
L_00110928:;
    {
        cpu->r[1] = rd32(0x00110930u + + 0x2b4u);
    }
L_0011092c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110930:;
    {
        cpu->r[12] = rd32(0x00110938u + + 0x2b0u);
    }
L_00110934:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00110938:;
    {
        cpu->r[2] = rd32(0x00110940u + + 0x2acu);
    }
L_0011093c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110944u, cpu->r[1], 0, 0);
    }
L_00110940:;
    {
        cpu->r[3] = rd32(0x00110948u + + 0x2a8u);
    }
L_00110944:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011094cu, cpu->r[12], 0, 0);
    }
L_00110948:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110950u, cpu->r[2], 0, 0);
    }
L_0011094c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00110950:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110958u, cpu->r[3], 0, 0);
    }
L_00110954:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00110958:;
    {
        cpu->r[14] = 0x0011095cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011095c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110960:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110964:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00110968:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0011096c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00110970:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00110974:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[4]);
    }
L_00110978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110ae4;
        }
    }
L_0011097c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00110980:;
    {
        cpu->r[10] = 0x0000000cu;
    }
L_00110984:;
    {
        cpu->r[3] = rd32(0x0011098cu + + 0x268u);
    }
L_00110988:;
    {
        cpu->r[8] = rd32(0x00110990u + + 0x268u);
    }
L_0011098c:;
    {
        cpu->r[10] = (uint32_t)((int32_t)(int16_t)(cpu->r[12] & 0xffff) * (int32_t)(int16_t)(cpu->r[10] & 0xffff));
    }
L_00110990:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110998u, cpu->r[3], 0, 0);
    }
L_00110994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000034u, 0, 0);
    }
L_00110998:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0011099c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[8]);
    }
L_001109a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001109a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001109a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001109ac:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_001109b0:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x4u);
    }
L_001109b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001109f0;
        }
    }
L_001109b8:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_001109bc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001109c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001109c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001109c8:;
    {
        cpu->r[1] = rd32(0x001109d0u + + 0x22cu);
    }
L_001109cc:;
    {
        cpu->r[2] = rd32(0x001109d4u + + 0x22cu);
    }
L_001109d0:;
    {
        cpu->r[3] = rd32(0x001109d8u + + 0x22cu);
    }
L_001109d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001109dcu, cpu->r[1], 0, 0);
    }
L_001109d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001109e0u, cpu->r[2], 0, 0);
    }
L_001109dc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001109e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001109e8u, cpu->r[3], 0, 0);
    }
L_001109e4:;
    {
        cpu->r[14] = 0x001109e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001109e8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_001109ec:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001109f0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001109f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_001109f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001109fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00110a00:;
    {
        vfp_sync_flags(cpu);
    }
L_00110a04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110ad8;
        }
    }
L_00110a08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00110a0c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00110a10:;
    {
        vfp_sync_flags(cpu);
    }
L_00110a14:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110ad8;
        }
    }
L_00110a18:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_00110a1c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00110a20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00110a24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00110a28:;
    {
        vfp_sync_flags(cpu);
    }
L_00110a2c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110ad8;
        }
    }
L_00110a30:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00110a34:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00110a38:;
    {
        vfp_sync_flags(cpu);
    }
L_00110a3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110ad8;
        }
    }
L_00110a40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00110a44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110a84;
        }
    }
L_00110a48:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110a4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00110a50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110a54:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110a58:;
    {
        cpu->r[1] = rd32(0x00110a60u + + 0x1a8u);
    }
L_00110a5c:;
    {
        cpu->r[2] = rd32(0x00110a64u + + 0x1a8u);
    }
L_00110a60:;
    {
        cpu->r[3] = rd32(0x00110a68u + + 0x1a8u);
    }
L_00110a64:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110a6cu, cpu->r[1], 0, 0);
    }
L_00110a68:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110a70u, cpu->r[2], 0, 0);
    }
L_00110a6c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110a70:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110a78u, cpu->r[3], 0, 0);
    }
L_00110a74:;
    {
        cpu->r[14] = 0x00110a78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110a78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110a7c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110a80:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00110a84:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_00110a88:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00110a8c:;
    {
        wr8(cpu->r[3] + + 0x34u, cpu->r[0]);
    }
L_00110a90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110acc;
        }
    }
L_00110a94:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110a98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00110a9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110aa0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110aa4:;
    {
        cpu->r[1] = rd32(0x00110aacu + + 0x168u);
    }
L_00110aa8:;
    {
        cpu->r[2] = rd32(0x00110ab0u + + 0x168u);
    }
L_00110aac:;
    {
        cpu->r[3] = rd32(0x00110ab4u + + 0x168u);
    }
L_00110ab0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110ab8u, cpu->r[1], 0, 0);
    }
L_00110ab4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110abcu, cpu->r[2], 0, 0);
    }
L_00110ab8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110abc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110ac4u, cpu->r[3], 0, 0);
    }
L_00110ac0:;
    {
        cpu->r[14] = 0x00110ac4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110ac4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x18u);
    }
L_00110ac8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00110acc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_00110ad0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00110ad4:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[0]);
    }
L_00110ad8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00110adc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_00110ae0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011099c;
        }
    }
L_00110ae4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00110ae8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_00110aec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001108c4;
        }
    }
L_00110af0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00110af4:;
    {
        wr8(cpu->r[7] + + 0x64u, cpu->r[3]);
    }
L_00110af8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00110afc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00110b00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00110b04u)) return;
    }
L_00110b04:;
    {
        cpu->r[3] = rd32(0x00110b0cu + + 0x114u);
    }
L_00110b08:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b0c:;
    {
        cpu->r[3] = rd32(0x00110b14u + + 0x110u);
    }
L_00110b10:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00110b14:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b18:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000056u, 1, 0);
    }
L_00110b1c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00110b20:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00110b24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110860;
        }
    }
L_00110b28:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x90cu);
    }
L_00110b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00110b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00110860;
        }
    }
L_00110b34:;
    {
        cpu->r[3] = rd32(0x00110b3cu + + 0xecu);
    }
L_00110b38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00110b40u + + 0x74u);
    }
L_00110b3c:;
    {
        cpu->r[1] = rd32(0x00110b44u + + 0xe8u);
    }
L_00110b40:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b44:;
    {
        cpu->r[3] = rd32(0x00110b4cu + + 0xe4u);
    }
L_00110b48:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_00110b4c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_00110b50:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00110b54:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b58:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00110b5c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3]);
    }
L_00110b60:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[3];
    }
L_00110b64:;
    {
        cpu->r[3] = rd32(0x00110b6cu + + 0xc8u);
    }
L_00110b68:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00110b6c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b70:;
    {
        cpu->r[3] = rd32(0x00110b78u + + 0xc0u);
    }
L_00110b74:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_00110b78:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110b7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00110b80:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00110b84:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00110b8cu + + 0x2cu);
    }
L_00110b88:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_00110b8c:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00110b90:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00110b94:;
    {
        vfp_vadd(cpu, 15, 15, 12);
    }
L_00110b98:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00110b9c:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00110ba0:;
    {
        cpu->r[14] = 0x00110ba4u; fn_0009b4d0(cpu);
    }
L_00110ba4:;
    {
        cpu->r[3] = rd32(0x00110bacu + + 0x90u);
    }
L_00110ba8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00110bac:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00110bb0:;
    {
        goto L_00110860;
    }
}

/* _ZN11GS_MainMenu22ProcessOnMouseButtonUpEv @ 00110c40 (arm) */
void fn_00110c40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00110c40:;
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
L_00110c44:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00110c48:;
    {
        cpu->r[10] = rd32(0x00110c50u + + 0x62cu);
    }
L_00110c4c:;
    {
        cpu->r[3] = rd32(0x00110c54u + + 0x62cu);
    }
L_00110c50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_00110c54:;
    {
        cpu->r[10] = add_flags(cpu, 0x00110c5cu, cpu->r[10], 0, 0);
    }
L_00110c58:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00110c5c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00110c60:;
    {
        cpu->r[3] = rd16(cpu->r[3]);
    }
L_00110c64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00110c68:;
    {
        cpu->r[14] = 0x00110c6cu; fn_0009b4d0(cpu);
    }
L_00110c6c:;
    {
        cpu->r[3] = rd32(0x00110c74u + + 0x610u);
    }
L_00110c70:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00110c74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00110c78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00110c7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c7u, 1, 1);
    }
L_00110c80:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110c9c;
        }
    }
L_00110c84:;
    {
        cpu->r[3] = rd32(0x00110c8cu + + 0x5fcu);
    }
L_00110c88:;
    {
        cpu->r[2] = rd32(0x00110c90u + + 0x5fcu);
    }
L_00110c8c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_00110c90:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_00110c94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00110c98:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00110c9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00110ca4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00111034;
        }
    }
L_00110ca8:;
    {
        cpu->r[2] = rd32(0x00110cb0u + + 0x5e0u);
    }
L_00110cac:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00110cb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00110cb4:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_00110cb8:;
    {
        cpu->r[0] = rd32(0x00110cc0u + + 0x5d4u);
    }
L_00110cbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00110cc0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00110cc4:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00110cc8:;
    {
        cpu->r[2] = rd32(0x00110cd0u + + 0x5c8u);
    }
L_00110ccc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00110cd0:;
    {
        cpu->r[0] = add_flags(cpu, 0x00110cd8u, cpu->r[0], 0, 0);
    }
L_00110cd4:;
    {
        cpu->r[1] = rd32(0x00110cdcu + + 0x5c0u);
    }
L_00110cd8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110ce0u, cpu->r[2], 0, 0);
    }
L_00110cdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000034u, 0, 0);
    }
L_00110ce0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_00110ce4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110cecu, cpu->r[1], 0, 0);
    }
L_00110ce8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_00110cec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_00110cf0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00110cf4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00110cf8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00110cfc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110d00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00110d04:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00110d08:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00110d0c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00110d10:;
    {
        wr8(cpu->r[1] + + 0x35u, cpu->r[0]);
    }
L_00110d14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110d50;
        }
    }
L_00110d18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00110d1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110d20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00110d24:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00110d28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00110d2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110d34u, cpu->r[2], 0, 0);
    }
L_00110d30:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00110d34:;
    {
        cpu->r[2] = rd32(0x00110d3cu + + 0x564u);
    }
L_00110d38:;
    {
        cpu->r[3] = rd32(0x00110d40u + + 0x564u);
    }
L_00110d3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110d44u, cpu->r[2], 0, 0);
    }
L_00110d40:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110d48u, cpu->r[3], 0, 0);
    }
L_00110d44:;
    {
        cpu->r[14] = 0x00110d48u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110d48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110d4c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110d50:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_00110d54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00110d58:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00110d5c:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
    }
L_00110d60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110da0;
        }
    }
L_00110d64:;
    {
        cpu->r[1] = rd32(0x00110d6cu + + 0x53cu);
    }
L_00110d68:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110d6c:;
    {
        cpu->r[12] = rd32(0x00110d74u + + 0x538u);
    }
L_00110d70:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00110d74:;
    {
        cpu->r[2] = rd32(0x00110d7cu + + 0x534u);
    }
L_00110d78:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110d80u, cpu->r[1], 0, 0);
    }
L_00110d7c:;
    {
        cpu->r[3] = rd32(0x00110d84u + + 0x530u);
    }
L_00110d80:;
    {
        cpu->r[12] = add_flags(cpu, 0x00110d88u, cpu->r[12], 0, 0);
    }
L_00110d84:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110d8cu, cpu->r[2], 0, 0);
    }
L_00110d88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00110d8c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110d94u, cpu->r[3], 0, 0);
    }
L_00110d90:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00110d94:;
    {
        cpu->r[14] = 0x00110d98u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110d98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110d9c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110da0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00110da4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00110da8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_00110dac:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00110db0:;
    {
        wr8(cpu->r[2] + + 0x40u, cpu->r[4]);
    }
L_00110db4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00110fb4;
        }
    }
L_00110db8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00110dbc:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00110dc0:;
    {
        cpu->r[10] = rd32(0x00110dc8u + + 0x4f0u);
    }
L_00110dc4:;
    {
        cpu->r[2] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_00110dc8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00110dcc:;
    {
        cpu->r[2] = rd32(0x00110dd4u + + 0x4e8u);
    }
L_00110dd0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110dd8u, cpu->r[2], 0, 0);
    }
L_00110dd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_00110dd8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00110ddc:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[10]);
    }
L_00110de0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00110de4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00110de8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00110dec:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00110df0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x4u);
    }
L_00110df4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110e2c;
        }
    }
L_00110df8:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110dfc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00110e00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110e04:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110e08:;
    {
        cpu->r[1] = rd32(0x00110e10u + + 0x4b0u);
    }
L_00110e0c:;
    {
        cpu->r[2] = rd32(0x00110e14u + + 0x4b0u);
    }
L_00110e10:;
    {
        cpu->r[3] = rd32(0x00110e18u + + 0x4b0u);
    }
L_00110e14:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110e1cu, cpu->r[1], 0, 0);
    }
L_00110e18:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110e20u, cpu->r[2], 0, 0);
    }
L_00110e1c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110e20:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110e28u, cpu->r[3], 0, 0);
    }
L_00110e24:;
    {
        cpu->r[14] = 0x00110e28u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110e28:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110e2c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00110e30:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110e34:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00110e38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00110e3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00110e40:;
    {
        vfp_sync_flags(cpu);
    }
L_00110e44:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110fa4;
        }
    }
L_00110e48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00110e4c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_00110e50:;
    {
        vfp_sync_flags(cpu);
    }
L_00110e54:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110fa4;
        }
    }
L_00110e58:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_00110e5c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00110e60:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00110e64:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00110e68:;
    {
        vfp_sync_flags(cpu);
    }
L_00110e6c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110fa4;
        }
    }
L_00110e70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00110e74:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00110e78:;
    {
        vfp_sync_flags(cpu);
    }
L_00110e7c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00110fa4;
        }
    }
L_00110e80:;
    {
        cpu->r[0] = rd8(cpu->r[6] + + 0x64u);
    }
L_00110e84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00110e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00110fa4;
        }
    }
L_00110e8c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00110e90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110ed0;
        }
    }
L_00110e94:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110e98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00110e9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110ea0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110ea4:;
    {
        cpu->r[1] = rd32(0x00110eacu + + 0x420u);
    }
L_00110ea8:;
    {
        cpu->r[2] = rd32(0x00110eb0u + + 0x420u);
    }
L_00110eac:;
    {
        cpu->r[3] = rd32(0x00110eb4u + + 0x420u);
    }
L_00110eb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110eb8u, cpu->r[1], 0, 0);
    }
L_00110eb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110ebcu, cpu->r[2], 0, 0);
    }
L_00110eb8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110ebc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110ec4u, cpu->r[3], 0, 0);
    }
L_00110ec0:;
    {
        cpu->r[14] = 0x00110ec4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110ec4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110ec8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110ecc:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00110ed0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_00110ed4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00110ed8:;
    {
        wr8(cpu->r[2] + + 0x34u, cpu->r[3]);
    }
L_00110edc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110f14;
        }
    }
L_00110ee0:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_00110ee4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00110ee8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00110eec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00110ef0:;
    {
        cpu->r[1] = rd32(0x00110ef8u + + 0x3e0u);
    }
L_00110ef4:;
    {
        cpu->r[2] = rd32(0x00110efcu + + 0x3e0u);
    }
L_00110ef8:;
    {
        cpu->r[3] = rd32(0x00110f00u + + 0x3e0u);
    }
L_00110efc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00110f04u, cpu->r[1], 0, 0);
    }
L_00110f00:;
    {
        cpu->r[2] = add_flags(cpu, 0x00110f08u, cpu->r[2], 0, 0);
    }
L_00110f04:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00110f08:;
    {
        cpu->r[3] = add_flags(cpu, 0x00110f10u, cpu->r[3], 0, 0);
    }
L_00110f0c:;
    {
        cpu->r[14] = 0x00110f10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00110f10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110f14:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00110f18:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[10]);
    }
L_00110f1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00110f20:;
    {
        cpu->r[14] = rd32(cpu->r[11] + + 0x1cu);
    }
L_00110f24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00110f28:;
    {
        cpu->r[0] = rd32(cpu->r[11] + + 0x20u);
    }
L_00110f2c:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x14u);
    }
L_00110f30:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00110f34:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x18u);
    }
L_00110f38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00110f3c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_00110f40:;
    {
        wr32(cpu->r[11] + + 0x18u, cpu->r[3]);
    }
L_00110f44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00110f48:;
    {
        wr32(cpu->r[11] + + 0x14u, cpu->r[2]);
    }
L_00110f4c:;
    {
        wr32(cpu->r[11] + + 0x1cu, cpu->r[12]);
    }
L_00110f50:;
    {
        wr32(cpu->r[11] + + 0x20u, cpu->r[1]);
    }
L_00110f54:;
    {
        cpu->r[14] = 0x00110f58u; fn_0009b4d0(cpu);
    }
L_00110f58:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x28u);
    }
L_00110f5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00110f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00110f9c;
        }
    }
L_00110f64:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x1cu);
    }
L_00110f68:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11] + + 0x20u);
    }
L_00110f6c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00110f70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00110f78u + + 0x300u);
    }
L_00110f74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00110f78:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00110f7c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00110f80:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00110f84:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_00110f88:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00110f8c:;
    {
        vfp_vdiv(cpu, 14, 12, 15);
    }
L_00110f90:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00110f94:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00110f98:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00110f9c:;
    {
        wr32(cpu->r[11] + + 0x28u, cpu->r[0]);
    }
L_00110fa0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00110fa4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00110fa8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00110fac:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00110fb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00110ddc;
        }
    }
L_00110fb4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00110fb8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00111340;
        }
    }
L_00110fbc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00110fc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00110fc8u + + 0x374u);
    }
L_00110fc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00110fc8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_00110fcc:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_00110fd0:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_00110fd4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00110fd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00110fe0u + + 0x35cu);
    }
L_00110fdc:;
    {
        vfp_vadd(cpu, 18, 18, 15);
    }
L_00110fe0:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_00110fe4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00110fe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00110ff0u + + 0x34cu);
    }
L_00110fec:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00110ff0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00110ff4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00110ff8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00111000u + + 0x33cu);
    }
L_00110ffc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00111000:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00111004:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,18);
    }
L_00111008:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0011100c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00111010:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00111014:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00111018:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011101c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00111020:;
    {
        cpu->r[14] = 0x00111024u; fn_000eab24(cpu);
    }
L_00111024:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00111028:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0011102c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00110cfc;
        }
    }
L_00111030:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_00111034:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00111038:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0011103c:;
    {
        wr32(cpu->r[6] + + 0x60u, cpu->r[4]);
    }
L_00111040:;
    {
        wr8(cpu->r[6] + + 0x64u, cpu->r[4]);
    }
L_00111044:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00111128;
        }
    }
L_00111048:;
    {
        cpu->r[11] = rd32(0x00111050u + + 0x294u);
    }
L_0011104c:;
    {
        cpu->r[1] = rd32(0x00111054u + + 0x294u);
    }
L_00111050:;
    {
        cpu->r[2] = rd32(0x00111058u + + 0x294u);
    }
L_00111054:;
    {
        cpu->r[11] = add_flags(cpu, 0x0011105cu, cpu->r[11], 0, 0);
    }
L_00111058:;
    {
        cpu->r[7] = rd32(0x00111060u + + 0x290u);
    }
L_0011105c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111064u, cpu->r[1], 0, 0);
    }
L_00111060:;
    {
        cpu->r[9] = rd32(0x00111068u + + 0x28cu);
    }
L_00111064:;
    {
        cpu->r[2] = add_flags(cpu, 0x0011106cu, cpu->r[2], 0, 0);
    }
L_00111068:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0011106c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_00111070:;
    {
        cpu->r[1] = rd32(0x00111078u + + 0x280u);
    }
L_00111074:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00111078:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111080u, cpu->r[1], 0, 0);
    }
L_0011107c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00111080:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_00111084:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00111088:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0011108c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[7]);
    }
L_00111090:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1]);
    }
L_00111094:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00111098:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0011109c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001110a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001110a4:;
    {
        cpu->r[0] = rd16(cpu->r[0]);
    }
L_001110a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001110ac:;
    {
        vfp_sync_flags(cpu);
    }
L_001110b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011111c;
        }
    }
L_001110b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001110b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001110bc:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_001110c0:;
    {
        vfp_sync_flags(cpu);
    }
L_001110c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011111c;
        }
    }
L_001110c8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001110cc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001110d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001110d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001110d8:;
    {
        vfp_sync_flags(cpu);
    }
L_001110dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011111c;
        }
    }
L_001110e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_001110e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001110e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001110ec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0011111c;
        }
    }
L_001110f0:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_001110f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001110f8:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0xd8u);
    }
L_001110fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00111134;
        }
    }
L_00111100:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_00111104:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00111108:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_0011110c:;
    {
        cpu->r[14] = 0x00111110u; guest_call(cpu, cpu->r[5]);
    }
L_00111110:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00111114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111174;
        }
    }
L_00111118:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0011111c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00111120:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00111124:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00111080;
        }
    }
L_00111128:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_0011112c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00111130:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00111134u)) return;
    }
L_00111134:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00111138:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0011113c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00111140:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111144:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00111148:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0011114c:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00111150:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00111154:;
    {
        cpu->r[14] = 0x00111158u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111158:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0011115c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00111160:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_00111164:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_00111168:;
    {
        cpu->r[14] = 0x0011116cu; guest_call(cpu, cpu->r[5]);
    }
L_0011116c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00111170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00111118;
        }
    }
L_00111174:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00111178:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011117c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00111444;
        }
    }
L_00111180:;
    {
        cpu->r[11] = rd32(0x00111188u + + 0x174u);
    }
L_00111184:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00111188:;
    {
        cpu->r[9] = rd32(0x00111190u + + 0x170u);
    }
L_0011118c:;
    {
        cpu->r[11] = add_flags(cpu, 0x00111194u, cpu->r[11], 0, 0);
    }
L_00111190:;
    {
        cpu->r[1] = rd32(0x00111198u + + 0x16cu);
    }
L_00111194:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00111198:;
    {
        cpu->r[9] = add_flags(cpu, 0x001111a0u, cpu->r[9], 0, 0);
    }
L_0011119c:;
    {
        cpu->r[10] = rd32(0x001111a4u + + 0x164u);
    }
L_001111a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000034u, 0, 0);
    }
L_001111a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001111acu, cpu->r[1], 0, 0);
    }
L_001111a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_001111ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001111b0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001111b4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001111b8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001111bc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[4] = v;
    }
L_001111c0:;
    {
        wr8(cpu->r[1] + + 0x35u, cpu->r[0]);
    }
L_001111c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001111f0;
        }
    }
L_001111c8:;
    {
        cpu->r[3] = rd32(0x001111d0u + + 0x13cu);
    }
L_001111cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001111d4u, cpu->r[10], 0, 0);
    }
L_001111d0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001111d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001111d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001111e0u, cpu->r[3], 0, 0);
    }
L_001111dc:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_001111e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001111e4:;
    {
        cpu->r[14] = 0x001111e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001111e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001111ec:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001111f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_001111f4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001111f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001111fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00111200:;
    {
        wr8(cpu->r[1] + + 0x34u, cpu->r[0]);
    }
L_00111204:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00111240;
        }
    }
L_00111208:;
    {
        cpu->r[3] = 0x0000006au;
    }
L_0011120c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00111210:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00111214:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111218:;
    {
        cpu->r[1] = rd32(0x00111220u + + 0xf0u);
    }
L_0011121c:;
    {
        cpu->r[2] = rd32(0x00111224u + + 0xf0u);
    }
L_00111220:;
    {
        cpu->r[3] = rd32(0x00111228u + + 0xf0u);
    }
L_00111224:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011122cu, cpu->r[1], 0, 0);
    }
L_00111228:;
    {
        cpu->r[2] = add_flags(cpu, 0x00111230u, cpu->r[2], 0, 0);
    }
L_0011122c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00111230:;
    {
        cpu->r[3] = add_flags(cpu, 0x00111238u, cpu->r[3], 0, 0);
    }
L_00111234:;
    {
        cpu->r[14] = 0x00111238u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111238:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0011123c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00111240:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[4]);
    }
L_00111244:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00111248:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0011124c:;
    {
        wr8(cpu->r[1] + + 0x40u, cpu->r[0]);
    }
L_00111250:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001111b0;
        }
    }
L_00111254:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_00111258:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0011125c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x58u);
    }
L_00111260:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0011144c;
        }
    }
L_00111264:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_00111268:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0011126c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_00111270:;
    {
        cpu->r[14] = 0x00111274u; guest_call(cpu, cpu->r[4]);
    }
L_00111274:;
    {
        goto L_00111128;
    }
L_00111340:;
    {
        cpu->r[4] = rd32(0x00111348u + - 0x2cu);
    }
L_00111344:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111348:;
    {
        cpu->r[5] = rd32(0x00111350u + - 0x30u);
    }
L_0011134c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00111354u + - 0x18u);
    }
L_00111350:;
    {
        cpu->r[10] = rd32(0x00111358u + - 0x34u);
    }
L_00111354:;
    {
        cpu->r[4] = add_flags(cpu, 0x0011135cu, cpu->r[4], 0, 0);
    }
L_00111358:;
    {
        cpu->r[12] = rd32(0x00111360u + - 0x38u);
    }
L_0011135c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00111364u, cpu->r[5], 0, 0);
    }
L_00111360:;
    {
        cpu->r[10] = add_flags(cpu, 0x00111368u, cpu->r[10], 0, 0);
    }
L_00111364:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00111368:;
    {
        cpu->r[12] = add_flags(cpu, 0x00111370u, cpu->r[12], 0, 0);
    }
L_0011136c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00111370:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00111374:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00111378:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_0011137c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00111380:;
    {
        cpu->r[14] = 0x00111384u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111384:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00111388:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_0011138c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00111390:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3]);
    }
L_00111394:;
    {
        vfp_vadd(cpu, 17, 17, 16);
    }
L_00111398:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0011139c:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_001113a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110fd4;
        }
    }
L_001113a4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001113a8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001113ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001113b0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001113b4:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_001113b8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001113bc:;
    {
        cpu->r[14] = 0x001113c0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001113c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001113c4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_001113c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001113cc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001113d0:;
    {
        vfp_vadd(cpu, 18, 18, 16);
    }
L_001113d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001113d8:;
    {
        *(int32_t*)vfp_s(cpu,18) = (int32_t)*vfp_s(cpu,18);
    }
L_001113dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110fe4;
        }
    }
L_001113e0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001113e4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001113e8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001113ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001113f0:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_001113f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001113f8:;
    {
        cpu->r[14] = 0x001113fcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001113fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00111400:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_00111404:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00111408:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0011140c:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_00111410:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_00111414:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00111418:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00110ff4;
        }
    }
L_0011141c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00111420:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00111424:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00111428:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0011142c:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00111430:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_00111434:;
    {
        cpu->r[14] = 0x00111438u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111438:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0011143c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00111440:;
    {
        goto L_00110ff4;
    }
L_00111444:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00111448:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x58u);
    }
L_0011144c:;
    {
        cpu->r[1] = rd32(0x00111454u + - 0x128u);
    }
L_00111450:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111454:;
    {
        cpu->r[12] = rd32(0x0011145cu + - 0x12cu);
    }
L_00111458:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_0011145c:;
    {
        cpu->r[2] = rd32(0x00111464u + - 0x130u);
    }
L_00111460:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111468u, cpu->r[1], 0, 0);
    }
L_00111464:;
    {
        cpu->r[3] = rd32(0x0011146cu + - 0x134u);
    }
L_00111468:;
    {
        cpu->r[12] = add_flags(cpu, 0x00111470u, cpu->r[12], 0, 0);
    }
L_0011146c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00111474u, cpu->r[2], 0, 0);
    }
L_00111470:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00111474:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011147cu, cpu->r[3], 0, 0);
    }
L_00111478:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011147c:;
    {
        cpu->r[14] = 0x00111480u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111480:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00111484:;
    {
        goto L_00111264;
    }
}

/* _ZN11GS_MainMenu14RenderSlideBarEibiiiiRi @ 00111488 (arm) */
void fn_00111488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00111488:;
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
L_0011148c:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_00111490:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_00111494:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00111498:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0011149c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001114a0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_001114a4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001114a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001114ac:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001114b0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001114b4:;
    {
        cpu->r[2] = 0x000000b0u;
    }
L_001114b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001114bc:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001114c0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001114c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001114c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001114cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001114d0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xb0u);
    }
L_001114d4:;
    {
        cpu->r[14] = 0x001114d8u; fn_000a8a2c(cpu);
    }
L_001114d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_001114dc:;
    {
        cpu->r[2] = 0x0000004fu;
    }
L_001114e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_001114e4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001114e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001114ec:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_001114f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001114f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_001114f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_001114fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00111500:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00111504:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111508:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0011150c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111510:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00111514:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00111518:;
    {
        cpu->r[14] = 0x0011151cu; fn_000a8a2c(cpu);
    }
L_0011151c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_00111520:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_00111524:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x58u);
    }
L_00111528:;
    {
        cpu->r[2] = 0x0000004eu;
    }
L_0011152c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111530:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00111534:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[14], 1, 0);
    }
L_00111538:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0011153c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[9];
    }
L_00111540:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111544:;
    {
        uint32_t v = shifter(cpu->r[9], 3, 31u, &shc); cpu->r[14] = v;
    }
L_00111548:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[14]);
    }
L_0011154c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_00111550:;
    {
        *vfp_s(cpu,23) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111554:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00111558:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_0011155c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00111560:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00111564:;
    {
        cpu->r[14] = 0x00111568u; fn_000a8a2c(cpu);
    }
L_00111568:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xb4u);
    }
L_0011156c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00111574u + + 0x398u);
    }
L_00111570:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xb8u);
    }
L_00111574:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_00111578:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xbcu);
    }
L_0011157c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00111580:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_00111584:;
    {
        *(uint32_t*)vfp_s(cpu,21) = cpu->r[0];
    }
L_00111588:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0011158c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00111590:;
    {
        *vfp_s(cpu,21) = (float)*(int32_t*)vfp_s(cpu,21);
    }
L_00111594:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00111598:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_0011159c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xb4u);
    }
L_001115a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001115a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001115a8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001115ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_001115b0:;
    {
        cpu->r[10] = rd32(0x001115b8u + + 0x358u);
    }
L_001115b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001115b8:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_001115bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_001115c0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001115c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_001115c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_001115cc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8d4u);
    }
L_001115d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001115d4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[10]);
    }
L_001115d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001115dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001115e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001115e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001115e8:;
    {
        vfp_vsub(cpu, 22, 17, 23);
    }
L_001115ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001115f0:;
    {
        cpu->r[14] = add_flags(cpu, 0x001115f8u, cpu->r[14], 0, 0);
    }
L_001115f4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001115f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001115fc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00111600:;
    {
        vfp_vmul(cpu, 15, 22, 15);
    }
L_00111604:;
    {
        vfp_vdiv(cpu, 15, 15, 21);
    }
L_00111608:;
    {
        vfp_vmul(cpu, 16, 17, 14);
    }
L_0011160c:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111610:;
    {
        vfp_vadd(cpu, 18, 19, 16);
    }
L_00111614:;
    {
        *(int32_t*)vfp_s(cpu,24) = (int32_t)*vfp_s(cpu,18);
    }
L_00111618:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,24);
    }
L_0011161c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00111620:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00111624:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00111628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111b3c;
        }
    }
L_0011162c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00111630:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_00111634:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00111638:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0011163c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00111640:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x3cu);
    }
L_00111644:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 1u, &shc), 1, 0);
    }
L_00111648:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0011164c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00111650:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00111654:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00111658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011165c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 0);
    }
L_00111660:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00111664:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_00111668:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0011166c:;
    {
        *vfp_s(cpu,25) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111670:;
    {
        vfp_vsub(cpu, 20, 18, 25);
    }
L_00111674:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_00111678:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0011167c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00111680:;
    {
        cpu->r[14] = 0x00111684u; fn_000ec75c(cpu);
    }
L_00111684:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0011168cu + + 0x308u);
    }
L_00111688:;
    {
        vfp_vmul(cpu, 17, 17, 15);
    }
L_0011168c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00111694u + + 0x304u);
    }
L_00111690:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00111694:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00111698:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011169c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001116a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001116a4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001116a8:;
    {
        vfp_vadd(cpu, 19, 19, 17);
    }
L_001116ac:;
    {
        vfp_vsub(cpu, 25, 19, 25);
    }
L_001116b0:;
    {
        vfp_vadd(cpu, 25, 25, 15);
    }
L_001116b4:;
    {
        *(int32_t*)vfp_s(cpu,25) = (int32_t)*vfp_s(cpu,25);
    }
L_001116b8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,25);
    }
L_001116bc:;
    {
        cpu->r[14] = 0x001116c0u; fn_000ec75c(cpu);
    }
L_001116c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001116c4:;
    {
        cpu->r[3] = 0x0000fff1u;
    }
L_001116c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001116cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001116d0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001116d4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001116d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001116dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001116e0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001116e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001116e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_001116ec:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001116f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x0000001eu, 0, 0);
    }
L_001116f4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001116f8:;
    {
        cpu->r[14] = 0x001116fcu; fn_000ec75c(cpu);
    }
L_001116fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00111700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111704:;
    {
        cpu->r[14] = 0x00111708u; fn_000ec44c(cpu);
    }
L_00111708:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0011170c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x34u);
    }
L_00111710:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00111714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111718:;
    {
        cpu->r[14] = 0x0011171cu; fn_000ec44c(cpu);
    }
L_0011171c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xc4u);
    }
L_00111720:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8d8u);
    }
L_00111724:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00111728:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0011172c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x34u);
    }
L_00111730:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00111734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111c88;
        }
    }
L_00111738:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0011173c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111cfc;
        }
    }
L_00111740:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00111744:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00111748:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00111780;
        }
    }
L_0011174c:;
    {
        cpu->r[1] = rd32(0x00111754u + + 0x1c0u);
    }
L_00111750:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111754:;
    {
        cpu->r[12] = rd32(0x0011175cu + + 0x1bcu);
    }
L_00111758:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_0011175c:;
    {
        cpu->r[2] = rd32(0x00111764u + + 0x1b8u);
    }
L_00111760:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111768u, cpu->r[1], 0, 0);
    }
L_00111764:;
    {
        cpu->r[3] = rd32(0x0011176cu + + 0x1b4u);
    }
L_00111768:;
    {
        cpu->r[12] = add_flags(cpu, 0x00111770u, cpu->r[12], 0, 0);
    }
L_0011176c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00111774u, cpu->r[2], 0, 0);
    }
L_00111770:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00111774:;
    {
        cpu->r[3] = add_flags(cpu, 0x0011177cu, cpu->r[3], 0, 0);
    }
L_00111778:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0011177c:;
    {
        cpu->r[14] = 0x00111780u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00111784:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00111788:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x34u);
    }
L_0011178c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00111790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111c24;
        }
    }
L_00111794:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111798:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_0011179c:;
    {
        cpu->r[14] = 0x001117a0u; fn_000f3430(cpu);
    }
L_001117a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001117a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111bec;
        }
    }
L_001117a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001117ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001117b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_001117b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001120cc;
        }
    }
L_001117b8:;
    {
        cpu->r[10] = rd32(0x001117c0u + + 0x164u);
    }
L_001117bc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001117c0:;
    {
        cpu->r[3] = rd32(0x001117c8u + + 0x160u);
    }
L_001117c4:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001117c8:;
    {
        cpu->r[2] = rd32(0x001117d0u + + 0x15cu);
    }
L_001117cc:;
    {
        cpu->r[10] = add_flags(cpu, 0x001117d4u, cpu->r[10], 0, 0);
    }
L_001117d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001117d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001117dcu, cpu->r[3], 0, 0);
    }
L_001117d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001117dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001117e4u, cpu->r[2], 0, 0);
    }
L_001117e0:;
    {
        cpu->r[3] = rd32(0x001117e8u + + 0x148u);
    }
L_001117e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000034u, 0, 0);
    }
L_001117e8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001117ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001117f4u, cpu->r[3], 0, 0);
    }
L_001117f0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001117f4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001117f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00111828;
        }
    }
L_001117fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00111800:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00111804:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111808:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0011180c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00111810:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00111814:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00111818:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0011181c:;
    {
        cpu->r[14] = 0x00111820u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111820:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00111824:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_00111828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0011182c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00111830:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00111834:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x40u);
    }
L_00111838:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0011183c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00111840:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00111844:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001117f4;
        }
    }
L_00111848:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0011184c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001120cc;
        }
    }
L_00111850:;
    {
        cpu->r[2] = rd32(0x00111858u + + 0xdcu);
    }
L_00111854:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_00111858:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0011185c:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[2]);
    }
L_00111860:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_00111864:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001118a0;
        }
    }
L_00111868:;
    {
        cpu->r[1] = rd32(0x00111870u + + 0xc8u);
    }
L_0011186c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111870:;
    {
        cpu->r[12] = rd32(0x00111878u + + 0xc4u);
    }
L_00111874:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00111878:;
    {
        cpu->r[2] = rd32(0x00111880u + + 0xc0u);
    }
L_0011187c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111884u, cpu->r[1], 0, 0);
    }
L_00111880:;
    {
        cpu->r[3] = rd32(0x00111888u + + 0xbcu);
    }
L_00111884:;
    {
        cpu->r[12] = add_flags(cpu, 0x0011188cu, cpu->r[12], 0, 0);
    }
L_00111888:;
    {
        cpu->r[2] = add_flags(cpu, 0x00111890u, cpu->r[2], 0, 0);
    }
L_0011188c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00111890:;
    {
        cpu->r[3] = add_flags(cpu, 0x00111898u, cpu->r[3], 0, 0);
    }
L_00111894:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00111898:;
    {
        cpu->r[14] = 0x0011189cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0011189c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001118a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_001118a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_001118a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_001118ac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_001118b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001118b4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001118b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,18), *vfp_s(cpu,15));
    }
L_001118bc:;
    {
        vfp_sync_flags(cpu);
    }
L_001118c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00111ce0;
        }
    }
L_001118c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,24);
    }
L_001118c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 24);
    }
L_001118cc:;
    {
        vfp_vsub(cpu, 15, 15, 18);
    }
L_001118d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001118d8u + + 0xbcu);
    }
L_001118d4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_001118d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xbcu);
    }
L_001118dc:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001118e0:;
    {
        vfp_vmul(cpu, 15, 21, 15);
    }
L_001118e4:;
    {
        vfp_vdiv(cpu, 15, 15, 22);
    }
L_001118e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001118ec:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001118f0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001118f4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001118f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001118fc:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00111900:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = 0x00000050u;
        }
    }
L_00111904:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011218c;
        }
    }
L_00111908:;
    {
        goto L_0011199c;
    }
L_0011199c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001119a0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001119a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001119a8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001119ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[14], 0x000000b0u, 0, 0);
    }
L_001119b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001119b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001119b8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001119bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x000000b2u, 0, 0);
    }
L_001119c0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001119c4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001119c8:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_s(cpu,20);
    }
L_001119cc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001119d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_001119d4:;
    {
        cpu->r[14] = 0x001119d8u; fn_000a8a2c(cpu);
    }
L_001119d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001119dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001119e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_001119e4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[14], cpu->r[9], 0, 0);
    }
L_001119e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_001119ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_001119f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[9], 1, 1u, &shc), 1, 0);
    }
L_001119f4:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_001119f8:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_001119fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00111a00:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00111a04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00111a08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_00111a0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111a10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00111a14:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111a18:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00111a1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_00111a20:;
    {
        vfp_vadd(cpu, 16, 16, 18);
    }
L_00111a24:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00111a28:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00111a2c:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00111a30:;
    {
        vfp_vadd(cpu, 17, 17, 18);
    }
L_00111a34:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00111a38:;
    {
        cpu->r[14] = 0x00111a3cu; fn_000ad8a0(cpu);
    }
L_00111a3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111a40:;
    {
        cpu->r[1] = 0x0000004eu;
    }
L_00111a44:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00111a48:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,20);
    }
L_00111a4c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111a50:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00111a54:;
    {
        cpu->r[14] = 0x00111a58u; fn_000ad8a0(cpu);
    }
L_00111a58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111a5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00111a60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00111a64:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00111a68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111a6c:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00111a70:;
    {
        cpu->r[14] = 0x00111a74u; fn_000ad8a0(cpu);
    }
L_00111a74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111a78:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00111a7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00111a80:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00111a84:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111a88:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111a8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00111a90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[5]);
    }
L_00111a94:;
    {
        cpu->r[14] = 0x00111a98u; fn_000a8a2c(cpu);
    }
L_00111a98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00111aa0u + - 0x108u);
    }
L_00111a9c:;
    {
        vfp_vadd(cpu, 17, 17, 15);
    }
L_00111aa0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00111aa4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00111aa8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_00111aac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb0u);
    }
L_00111ab0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00111ab4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111ab8:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00111abc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
    }
L_00111ac0:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_00111ac4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00111ac8:;
    {
        cpu->r[14] = 0x00111accu; fn_000ad8a0(cpu);
    }
L_00111acc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111ad0:;
    {
        cpu->r[1] = 0x0000000du;
    }
L_00111ad4:;
    {
        cpu->r[14] = 0x00111ad8u; fn_0009ecc0(cpu);
    }
L_00111ad8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00111adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112120;
        }
    }
L_00111ae0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_00111ae4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000cau, 0, 0);
    }
L_00111ae8:;
    {
        cpu->r[1] = rd32(0x00111af0u + - 0x1a8u);
    }
L_00111aec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111af0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00111af4:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[2]);
    }
L_00111af8:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_00111afc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111b04u, cpu->r[1], 0, 0);
    }
L_00111b00:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00111b04:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00111b08:;
    {
        cpu->r[14] = 0x00111b0cu; fn_000ae830(cpu);
    }
L_00111b0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00111b10:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00111b14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00111b18:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00111b1c:;
    {
        cpu->r[12] = 0x00000011u;
    }
L_00111b20:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00111b24:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00111b28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00111b2c:;
    {
        cpu->r[14] = 0x00111b30u; fn_000ad19c(cpu);
    }
L_00111b30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00111b34:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_00111b38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00111b3cu)) return;
    }
L_00111b3c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00111b40:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00111b44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00111b48:;
    {
        *vfp_s(cpu,25) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00111b4c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00111b50:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 1u, &shc), 1, 0);
    }
L_00111b54:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00111b58:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00111b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111b60:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00111b64:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00111b68:;
    {
        cpu->r[11] = 0x00800000u;
    }
L_00111b6c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111b70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111b74:;
    {
        vfp_vsub(cpu, 20, 18, 25);
    }
L_00111b78:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111b7c:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_00111b80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00111b84:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00111b88:;
    {
        cpu->r[14] = 0x00111b8cu; fn_000ec75c(cpu);
    }
L_00111b8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00111b94u + - 0x200u);
    }
L_00111b90:;
    {
        vfp_vmul(cpu, 17, 17, 15);
    }
L_00111b94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00111b9cu + - 0x204u);
    }
L_00111b98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00111b9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00111ba0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111ba4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111ba8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00111bac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111bb0:;
    {
        vfp_vadd(cpu, 19, 19, 17);
    }
L_00111bb4:;
    {
        vfp_vsub(cpu, 25, 19, 25);
    }
L_00111bb8:;
    {
        vfp_vadd(cpu, 25, 25, 15);
    }
L_00111bbc:;
    {
        *(int32_t*)vfp_s(cpu,25) = (int32_t)*vfp_s(cpu,25);
    }
L_00111bc0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,25);
    }
L_00111bc4:;
    {
        cpu->r[14] = 0x00111bc8u; fn_000ec75c(cpu);
    }
L_00111bc8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00111bcc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00111bd0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00111bd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00111bd8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00111bdc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111be0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00111be4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00111be8:;
    {
        goto L_001116f8;
    }
L_00111bec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111bf0:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_00111bf4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00111bf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00111bfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x0000003eu;
        }
    }
L_00111c00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00111d84;
        }
    }
L_00111c04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00111c08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00111c0c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00111dd4;
        case 1: goto L_0011204c;
        case 2: goto L_00111fb8;
        case 3: goto L_00111f28;
        default: guest_unimplemented(cpu, 0x00111c0cu); return; }
        }
    }
L_00111c10:;
    {
        goto L_001117a8;
    }
L_00111c24:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00111c28:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00111c2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00111d38;
        }
    }
L_00111c30:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_00111c34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00111c38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00111794;
        }
    }
L_00111c3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111c40:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00111c44:;
    {
        cpu->r[14] = 0x00111c48u; fn_000f3430(cpu);
    }
L_00111c48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00111c4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00111dcc;
        }
    }
L_00111c50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111c54:;
    {
        cpu->r[2] = 0x00001c0cu;
    }
L_00111c58:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00111c5c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00111c60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x0000003eu;
        }
    }
L_00111c64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112158;
        }
    }
L_00111c68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00111c6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_00111c70:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00111eac;
        case 1: goto L_00111e68;
        case 2: goto L_00111db8;
        case 3: goto L_00111edc;
        default: guest_unimplemented(cpu, 0x00111c70u); return; }
        }
    }
L_00111c74:;
    {
        goto L_00111dcc;
    }
L_00111c88:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00111c8c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00111c90:;
    {
        cpu->r[3] = rd32(0x00111c98u + - 0x308u);
    }
L_00111c94:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00111c98:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111c9c:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00111ca0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00111ca4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb4u);
    }
L_00111ca8:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00111cac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00111cb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00111cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00111cb8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_00111cbc:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0], cpu->r[10]);
        }
    }
L_00111cc0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00111cc4:;
    {
        wr32(cpu->r[4] + + 0xc4u, cpu->r[0]);
    }
L_00111cc8:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_00111ccc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00111cd0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111cd4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00111cd8:;
    {
        cpu->r[14] = 0x00111cdcu; fn_000fd248(cpu);
    }
L_00111cdc:;
    {
        goto L_00111740;
    }
L_00111ce0:;
    {
        vfp_vsub(cpu, 19, 19, 23);
    }
L_00111ce4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,19));
    }
L_00111ce8:;
    {
        vfp_sync_flags(cpu);
    }
L_00111cec:;
    {
        if (cond_test(cpu, 13)) {
        *(int32_t*)vfp_s(cpu,19) = (int32_t)*vfp_s(cpu,19);
        }
    }
L_00111cf0:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 19);
        }
    }
L_00111cf4:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,19);
        }
    }
L_00111cf8:;
    {
        goto L_001118cc;
    }
L_00111cfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00111d00:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00111d04:;
    {
        cpu->r[3] = rd32(0x00111d0cu + - 0x37cu);
    }
L_00111d08:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00111d0c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111d10:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00111d14:;
    {
        cpu->r[1] = 0x00000095u;
    }
L_00111d18:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb8u);
    }
L_00111d1c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00111d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00111d24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00111d28:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00111d2c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_00111d30:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0], cpu->r[10]);
        }
    }
L_00111d34:;
    {
        goto L_00111cc0;
    }
L_00111d38:;
    {
        cpu->r[1] = rd32(0x00111d40u + - 0x3f4u);
    }
L_00111d3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00111d40:;
    {
        cpu->r[12] = rd32(0x00111d48u + - 0x3f8u);
    }
L_00111d44:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00111d48:;
    {
        cpu->r[2] = rd32(0x00111d50u + - 0x3fcu);
    }
L_00111d4c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00111d54u, cpu->r[1], 0, 0);
    }
L_00111d50:;
    {
        cpu->r[3] = rd32(0x00111d58u + - 0x400u);
    }
L_00111d54:;
    {
        cpu->r[12] = add_flags(cpu, 0x00111d5cu, cpu->r[12], 0, 0);
    }
L_00111d58:;
    {
        cpu->r[2] = add_flags(cpu, 0x00111d60u, cpu->r[2], 0, 0);
    }
L_00111d5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00111d60:;
    {
        cpu->r[3] = add_flags(cpu, 0x00111d68u, cpu->r[3], 0, 0);
    }
L_00111d64:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00111d68:;
    {
        cpu->r[14] = 0x00111d6cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00111d6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00111d70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00111d74:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_00111d78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00111d7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111c3c;
        }
    }
L_00111d80:;
    {
        goto L_00111794;
    }
L_00111d84:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00111d88:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00111d8c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00111d90:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00111d94:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00111d98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00111d9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00111da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00111da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00111da8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00111dac:;
    {
        cpu->r[14] = 0x00111db0u; fn_001604cc(cpu);
    }
L_00111db0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00111db4:;
    {
        goto L_00111c04;
    }
L_00111db8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111dbc:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00111dc0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00111dc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00111dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112288;
        }
    }
L_00111dcc:;
    {
        cpu->r[10] = 0x0000004fu;
    }
L_00111dd0:;
    {
        goto L_0011199c;
    }
L_00111dd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111dd8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00111ddc:;
    {
        cpu->r[3] = rd32(0x00111de4u + - 0x454u);
    }
L_00111de0:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00111de4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00111de8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_00111dec:;
    {
        cpu->r[14] = 0x00111df0u; fn_000979a0(cpu);
    }
L_00111df0:;
    {
        cpu->r[14] = 0x00111df4u; fn_00093f98(cpu);
    }
L_00111df4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111df8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00111dfc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111e00:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00111e04:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111e08:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00111e0c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00111e10:;
    {
        cpu->r[14] = 0x00111e14u; fn_000fd200(cpu);
    }
L_00111e14:;
    {
        cpu->r[0] = rd32(0x00111e1cu + - 0x4c0u);
    }
L_00111e18:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111e1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111e20:;
    {
        cpu->r[14] = rd32(cpu->r[7]);
    }
L_00111e24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00111e28:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00111e2c:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_00111e30:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x490u);
    }
L_00111e34:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00111e38:;
    {
        wr8(cpu->r[12], cpu->r[14]);
    }
L_00111e3c:;
    {
        cpu->r[14] = 0x00111e40u; fn_000fd224(cpu);
    }
L_00111e40:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00111e44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001117a8;
        }
    }
L_00111e48:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00111e4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111e50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00111e54:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00111e58:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111e5c:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111e60:;
    {
        cpu->r[14] = 0x00111e64u; fn_000fd248(cpu);
    }
L_00111e64:;
    {
        goto L_001117a8;
    }
L_00111e68:;
    {
        cpu->r[0] = rd32(0x00111e70u + - 0x4e0u);
    }
L_00111e6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00111e70:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111e74:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00111e78:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00111e7c:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[0]);
    }
L_00111e80:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00111e84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111e88:;
    {
        cpu->r[14] = 0x00111e8cu; fn_000fd224(cpu);
    }
L_00111e8c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00111e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111dcc;
        }
    }
L_00111e94:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00111e98:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00111e9c:;
    {
        cpu->r[10] = 0x0000004fu;
    }
L_00111ea0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00111ea4:;
    {
        cpu->r[14] = 0x00111ea8u; fn_000fd218(cpu);
    }
L_00111ea8:;
    {
        goto L_0011199c;
    }
L_00111eac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111eb0:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00111eb4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00111eb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00111ebc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112248;
        }
    }
L_00111ec0:;
    {
        cpu->r[3] = rd32(0x00111ec8u + - 0x56cu);
    }
L_00111ec4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00111ec8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111ecc:;
    {
        cpu->r[10] = 0x0000004fu;
    }
L_00111ed0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00111ed4:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_00111ed8:;
    {
        goto L_0011199c;
    }
L_00111edc:;
    {
        cpu->r[0] = rd32(0x00111ee4u + - 0x554u);
    }
L_00111ee0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00111ee4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111ee8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111eec:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00111ef0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00111ef4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00111ef8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111efc:;
    {
        cpu->r[14] = 0x00111f00u; fn_000fd224(cpu);
    }
L_00111f00:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00111f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111f18;
        }
    }
L_00111f08:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00111f0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111f10:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00111f14:;
    {
        cpu->r[14] = 0x00111f18u; fn_000fd218(cpu);
    }
L_00111f18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00111f1c:;
    {
        cpu->r[10] = 0x0000004fu;
    }
L_00111f20:;
    {
        wr8(cpu->r[4] + + 0x8feu, cpu->r[3]);
    }
L_00111f24:;
    {
        goto L_0011199c;
    }
L_00111f28:;
    {
        cpu->r[3] = rd32(0x00111f30u + - 0x5a0u);
    }
L_00111f2c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00111f30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111f34:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00111f38:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00111f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00111f40:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00111f44:;
    {
        cpu->r[14] = 0x00111f48u; fn_000979a0(cpu);
    }
L_00111f48:;
    {
        cpu->r[14] = 0x00111f4cu; fn_00093f88(cpu);
    }
L_00111f4c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00111f50:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111f54:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00111f58:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_00111f5c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00111f60:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00111f64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00111f68:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00111f6c:;
    {
        cpu->r[14] = 0x00111f70u; fn_000fd200(cpu);
    }
L_00111f70:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00111f74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00111f78:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00111f7c:;
    {
        wr8(cpu->r[4] + + 0x8feu, cpu->r[1]);
    }
L_00111f80:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00111f84:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111f88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111f8c:;
    {
        cpu->r[14] = 0x00111f90u; fn_000fd224(cpu);
    }
L_00111f90:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00111f94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001117a8;
        }
    }
L_00111f98:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00111f9c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00111fa0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00111fa4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00111fa8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00111fac:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_00111fb0:;
    {
        cpu->r[14] = 0x00111fb4u; fn_000fd248(cpu);
    }
L_00111fb4:;
    {
        goto L_001117a8;
    }
L_00111fb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00111fbc:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_00111fc0:;
    {
        cpu->r[5] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00111fc4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00111fc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001121cc;
        }
    }
L_00111fcc:;
    {
        cpu->r[3] = rd32(0x00111fd4u + - 0x644u);
    }
L_00111fd0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00111fd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00111fd8:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00111fdc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00111fe0:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_00111fe4:;
    {
        cpu->r[14] = 0x00111fe8u; fn_000979a0(cpu);
    }
L_00111fe8:;
    {
        cpu->r[14] = 0x00111fecu; fn_00093fb8(cpu);
    }
L_00111fec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00111ff0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00111ff4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00111ff8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00111ffc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00112000:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112004:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112008:;
    {
        cpu->r[14] = 0x0011200cu; fn_000fd200(cpu);
    }
L_0011200c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00112010:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00112014:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00112018:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011201c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00112020:;
    {
        cpu->r[14] = 0x00112024u; fn_000fd224(cpu);
    }
L_00112024:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00112028:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001117a8;
        }
    }
L_0011202c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00112030:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00112034:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00112038:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011203c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00112040:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00112044:;
    {
        cpu->r[14] = 0x00112048u; fn_000fd248(cpu);
    }
L_00112048:;
    {
        goto L_001117a8;
    }
L_0011204c:;
    {
        cpu->r[3] = rd32(0x00112054u + - 0x6c4u);
    }
L_00112050:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00112054:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00112058:;
    {
        cpu->r[5] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0011205c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00112060:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_00112064:;
    {
        cpu->r[14] = 0x00112068u; fn_000979a0(cpu);
    }
L_00112068:;
    {
        cpu->r[14] = 0x0011206cu; fn_00093fc8(cpu);
    }
L_0011206c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00112070:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00112074:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_00112078:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0011207c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00112080:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112084:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112088:;
    {
        cpu->r[14] = 0x0011208cu; fn_000fd200(cpu);
    }
L_0011208c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00112090:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00112094:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00112098:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0011209c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001120a0:;
    {
        cpu->r[14] = 0x001120a4u; fn_000fd224(cpu);
    }
L_001120a4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001120a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001117a8;
        }
    }
L_001120ac:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001120b0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001120b4:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001120b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001120bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001120c0:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001120c4:;
    {
        cpu->r[14] = 0x001120c8u; fn_000fd248(cpu);
    }
L_001120c8:;
    {
        goto L_001117a8;
    }
L_001120cc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 1);
    }
L_001120d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0011210c;
        }
    }
L_001120d4:;
    {
        cpu->r[1] = rd32(0x001120dcu + - 0x77cu);
    }
L_001120d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001120dc:;
    {
        cpu->r[12] = rd32(0x001120e4u + - 0x780u);
    }
L_001120e0:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_001120e4:;
    {
        cpu->r[2] = rd32(0x001120ecu + - 0x784u);
    }
L_001120e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001120f0u, cpu->r[1], 0, 0);
    }
L_001120ec:;
    {
        cpu->r[3] = rd32(0x001120f4u + - 0x788u);
    }
L_001120f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001120f8u, cpu->r[12], 0, 0);
    }
L_001120f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001120fcu, cpu->r[2], 0, 0);
    }
L_001120f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_001120fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00112104u, cpu->r[3], 0, 0);
    }
L_00112100:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00112104:;
    {
        cpu->r[14] = 0x00112108u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00112108:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_0011210c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00112110:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00112114:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00112118:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_0011211c:;
    {
        goto L_00111850;
    }
L_00112120:;
    {
        cpu->r[1] = rd32(0x00112128u + - 0x7b8u);
    }
L_00112124:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00112128:;
    {
        cpu->r[12] = rd32(0x00112130u + - 0x7bcu);
    }
L_0011212c:;
    {
        cpu->r[14] = 0x0000086fu;
    }
L_00112130:;
    {
        cpu->r[2] = rd32(0x00112138u + - 0x7c0u);
    }
L_00112134:;
    {
        cpu->r[1] = add_flags(cpu, 0x0011213cu, cpu->r[1], 0, 0);
    }
L_00112138:;
    {
        cpu->r[3] = rd32(0x00112140u + - 0x7c4u);
    }
L_0011213c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00112144u, cpu->r[12], 0, 0);
    }
L_00112140:;
    {
        cpu->r[2] = add_flags(cpu, 0x00112148u, cpu->r[2], 0, 0);
    }
L_00112144:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_00112148:;
    {
        cpu->r[3] = add_flags(cpu, 0x00112150u, cpu->r[3], 0, 0);
    }
L_0011214c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00112150:;
    {
        cpu->r[14] = 0x00112154u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00112154:;
    {
        goto L_00111ae0;
    }
L_00112158:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0011215c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00112160:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00112164:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00112168:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0011216c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00112170:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00112174:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00112178:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0011217c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00112180:;
    {
        cpu->r[14] = 0x00112184u; fn_001604cc(cpu);
    }
L_00112184:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00112188:;
    {
        goto L_00111c68;
    }
L_0011218c:;
    {
        cpu->r[1] = rd32(0x00112194u + - 0x814u);
    }
L_00112190:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00112194:;
    {
        cpu->r[12] = rd32(0x0011219cu + - 0x818u);
    }
L_00112198:;
    {
        cpu->r[14] = 0x0000081cu;
    }
L_0011219c:;
    {
        cpu->r[2] = rd32(0x001121a4u + - 0x81cu);
    }
L_001121a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001121a8u, cpu->r[1], 0, 0);
    }
L_001121a4:;
    {
        cpu->r[3] = rd32(0x001121acu + - 0x820u);
    }
L_001121a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001121b0u, cpu->r[12], 0, 0);
    }
L_001121ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x001121b4u, cpu->r[2], 0, 0);
    }
L_001121b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000040u, 0, 0);
    }
L_001121b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001121bcu, cpu->r[3], 0, 0);
    }
L_001121b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001121bc:;
    {
        cpu->r[10] = 0x00000050u;
    }
L_001121c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001121c4:;
    {
        cpu->r[14] = 0x001121c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001121c8:;
    {
        goto L_0011199c;
    }
L_001121cc:;
    {
        cpu->r[3] = rd32(0x001121d4u + - 0x844u);
    }
L_001121d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001121d4:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001121d8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001121dc:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_001121e0:;
    {
        cpu->r[14] = 0x001121e4u; fn_000979a0(cpu);
    }
L_001121e4:;
    {
        cpu->r[14] = 0x001121e8u; fn_00093fb8(cpu);
    }
L_001121e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001121ec:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001121f0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001121f4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001121f8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001121fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00112200:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112204:;
    {
        cpu->r[14] = 0x00112208u; fn_000fd200(cpu);
    }
L_00112208:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0011220c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00112210:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00112214:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00112218:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0011221c:;
    {
        cpu->r[14] = 0x00112220u; fn_000fd224(cpu);
    }
L_00112220:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00112224:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001117a8;
        }
    }
L_00112228:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0011222c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00112230:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00112234:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00112238:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0011223c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00112240:;
    {
        cpu->r[14] = 0x00112244u; fn_000fd248(cpu);
    }
L_00112244:;
    {
        goto L_001117a8;
    }
L_00112248:;
    {
        cpu->r[0] = rd32(0x00112250u + - 0x8c0u);
    }
L_0011224c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00112250:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_00112254:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00112258:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0011225c:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_00112260:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00112264:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00112268:;
    {
        cpu->r[14] = 0x0011226cu; fn_000fd224(cpu);
    }
L_0011226c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00112270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111ec0;
        }
    }
L_00112274:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00112278:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0011227c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00112280:;
    {
        cpu->r[14] = 0x00112284u; fn_000fd218(cpu);
    }
L_00112284:;
    {
        goto L_00111ec0;
    }
L_00112288:;
    {
        cpu->r[0] = rd32(0x00112290u + - 0x900u);
    }
L_0011228c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00112290:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_00112294:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00112298:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0011229c:;
    {
        cpu->r[5] = rd32(cpu->r[10] + cpu->r[0]);
    }
L_001122a0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001122a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001122a8:;
    {
        cpu->r[14] = 0x001122acu; fn_000fd224(cpu);
    }
L_001122ac:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001122b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00111dcc;
        }
    }
L_001122b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001122b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001122bc:;
    {
        cpu->r[10] = 0x0000004fu;
    }
L_001122c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001122c4:;
    {
        cpu->r[14] = 0x001122c8u; fn_000fd218(cpu);
    }
L_001122c8:;
    {
        goto L_0011199c;
    }
}

/* _Z18FindProjectedPointP9AniMgr_v4P7CMatrixi @ 001122cc (arm) */
void fn_001122cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001122cc:;
    {
        cpu->r[12] = rd32(0x001122d4u + + 0x114u);
    }
L_001122d0:;
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
L_001122d4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001122d8:;
    {
        cpu->r[3] = rd32(0x001122e0u + + 0x10cu);
    }
L_001122dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001122e4u, cpu->r[12], 0, 0);
    }
L_001122e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001122e4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001122e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001122ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001122f0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001122f4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001122f8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_001122fc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00112300:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 3u, &shc), 0, 0);
    }
L_00112304:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00112308:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0011230c:;
    {
        cpu->r[10] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00112310:;
    {
        cpu->r[14] = 0x00112314u; fn_001535e0(cpu);
    }
L_00112314:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00112318:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0011231c:;
    {
        cpu->r[14] = 0x00112320u; fn_00153624(cpu);
    }
L_00112320:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00112324:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00112328:;
    {
        cpu->r[14] = 0x0011232cu; fn_00153478(cpu);
    }
L_0011232c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_00112330:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_00112334:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00112338:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0011233c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00112340:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00112344:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0xcu);
    }
L_00112348:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x8u);
    }
L_0011234c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00112350:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0xcu;
        wr32(cpu->r[1] + - 0xcu, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_00112354:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00112358:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0011235c:;
    {
        cpu->r[14] = 0x00112360u; fn_00153c38(cpu);
    }
L_00112360:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00112368u + + 0x68u);
    }
L_00112364:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x4cu);
    }
L_00112368:;
    {
        vfp_vadd(cpu, 13, 13, 14);
    }
L_0011236c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00112374u + + 0x60u);
    }
L_00112370:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00112374:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x44u);
    }
L_00112378:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00112380u + + 0x58u);
    }
L_0011237c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00112384u + + 0x58u);
    }
L_00112380:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_00112384:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00112388:;
    {
        vfp_vneg(cpu, 12, 12);
    }
L_0011238c:;
    {
        vfp_vdiv(cpu, 11, 12, 13);
    }
L_00112390:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_00112394:;
    {
        vfp_vdiv(cpu, 12, 12, 13);
    }
L_00112398:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001123a0u + + 0x40u);
    }
L_0011239c:;
    {
        vfp_vmla(cpu, 14, 11, 13);
    }
L_001123a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001123a8u + + 0x3cu);
    }
L_001123a4:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_001123a8:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001123ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001123b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001123c4;
        }
    }
L_001123b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001123b8:;
    {
        cpu->r[14] = 0x001123bcu; fn_000b2bc8(cpu);
    }
L_001123bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001123c0:;
    {
        cpu->r[14] = 0x001123c4u; fn_0018ba20(cpu);
    }
L_001123c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001123c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001123cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001123d0u)) return;
    }
}

/* _ZN11GS_MainMenu18RenderTuningLabelsEibP8Vector3d @ 001123f0 (arm) */
void fn_001123f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001123f0:;
    {
        cpu->r[12] = rd32(0x001123f8u + + 0x244u);
    }
L_001123f4:;
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
L_001123f8:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_001123fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001acu, 1, 0);
    }
L_00112400:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x00112408u + + 0x224u);
    }
L_00112404:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00112408:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000014cu, 0, 0);
    }
L_0011240c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00112410:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00112414:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00112418:;
    {
        cpu->r[4] = 0x00001c44u;
    }
L_0011241c:;
    {
        cpu->r[12] = rd32(0x00112424u + + 0x21cu);
    }
L_00112420:;
    {
        cpu->r[8] = 0x000011e8u;
    }
L_00112424:;
    {
        cpu->r[0] = add_flags(cpu, 0x0011242cu, cpu->r[0], 0, 0);
    }
L_00112428:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0011242c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00112430:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112434:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00112438:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x00112440u + + 0x1f0u);
    }
L_0011243c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00112440:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x00112448u + + 0x1ecu);
    }
L_00112444:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_00112448:;
    {
        *vfp_s(cpu, 24) = *(float*)G(0x00112450u + + 0x1e8u);
    }
L_0011244c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00112450:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_00112454:;
    {
        wr32(cpu->r[13] + + 0x18cu, cpu->r[6]);
    }
L_00112458:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0011245c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00112460:;
    {
        cpu->r[14] = 0x00112464u; fn_001535e0(cpu);
    }
L_00112464:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112468:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_0011246c:;
    {
        cpu->r[14] = 0x00112470u; fn_00153600(cpu);
    }
L_00112470:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00112474:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00112478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011247c:;
    {
        cpu->r[2] = rd32(0x00112484u + + 0x1c0u);
    }
L_00112480:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00112484:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00112488:;
    {
        cpu->r[3] = rd32(0x00112490u + + 0x1b8u);
    }
L_0011248c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00112490:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00112494:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00112498:;
    {
        cpu->r[10] = rd32(cpu->r[13]);
    }
L_0011249c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001124a0:;
    {
        cpu->r[14] = 0x001124a4u; fn_00154734(cpu);
    }
L_001124a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001124a8:;
    {
        cpu->r[3] = rd32(0x001124b0u + + 0x19cu);
    }
L_001124ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001124b0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001124b4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001124b8:;
    {
        cpu->r[14] = 0x001124bcu; fn_00154350(cpu);
    }
L_001124bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001124c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001124c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001124c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001124cc:;
    {
        cpu->r[14] = 0x001124d0u; fn_00153624(cpu);
    }
L_001124d0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001124d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001124d8:;
    {
        cpu->r[14] = 0x001124dcu; fn_000ea4dc(cpu);
    }
L_001124dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001124e0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_001124e4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001124e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_001124ec:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_001124f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001124f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000134u, 0, 0);
    }
L_001124f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001124fc:;
    {
        cpu->r[14] = 0x00112504u;
    }
L_00112500:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112504u)) return;
    }
L_00112504:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00112508:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0011250c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_00112510:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00112514:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112518:;
    {
        cpu->r[14] = 0x00112520u;
    }
L_0011251c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112520u)) return;
    }
L_00112520:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00112524:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00112528:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_0011252c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00112530:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112534:;
    {
        cpu->r[14] = 0x0011253cu;
    }
L_00112538:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011253cu)) return;
    }
L_0011253c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00112540:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00112544:;
    {
        cpu->r[8] = rd32(0x0011254cu + + 0x104u);
    }
L_00112548:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011254c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112550:;
    {
        cpu->r[8] = add_flags(cpu, 0x00112558u, cpu->r[8], 0, 0);
    }
L_00112554:;
    {
        cpu->r[14] = 0x0011255cu;
    }
L_00112558:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011255cu)) return;
    }
L_0011255c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00112560:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00112564:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_00112568:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0011256c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00112570:;
    {
        cpu->r[14] = 0x00112578u;
    }
L_00112574:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x64u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112578u)) return;
    }
L_00112578:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011257c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00112580:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00112584:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00112588:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_0011258c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_00112590:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00112594:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00112598:;
    {
        cpu->r[14] = 0x001125a0u;
    }
L_0011259c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001125a0u)) return;
    }
L_001125a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_001125a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000050u, 0, 0);
    }
L_001125a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000010u, 0, 0);
    }
L_001125ac:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001125b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_001125b4:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x17cu);
    }
L_001125b8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_001125bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112664;
        }
    }
L_001125c0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000005u, 1, 1);
    }
L_001125c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011268c;
        }
    }
L_001125c8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_001125cc:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_001125d0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001125d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x17cu);
    }
L_001125d8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001125dc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001125e0:;
    {
        cpu->r[14] = 0x001125e8u;
    }
L_001125e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001125e8u)) return;
    }
L_001125e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001125ec:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_001125f0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001125f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001125f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001125fc:;
    {
        cpu->r[14] = 0x00112604u;
    }
L_00112600:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00112604u)) return;
    }
L_00112604:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18cu);
    }
L_00112608:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0011260c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112620;
        }
    }
L_00112610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00112614:;
    {
        cpu->r[14] = 0x00112618u; fn_000b2bc8(cpu);
    }
L_00112618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011261c:;
    {
        cpu->r[14] = 0x00112620u; fn_0018ba20(cpu);
    }
L_00112620:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001acu, 0, 0);
    }
L_00112624:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_00112628:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0011262cu)) return;
    }
L_00112664:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00112668:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0011266c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00112670:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00112674:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_00112678:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011267c:;
    {
        cpu->r[3] = 0x0000193cu;
    }
L_00112680:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00112684:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00112688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001129e4;
        }
    }
L_0011268c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_00112690:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00112694:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00112698:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0011269c:;
    {
        wr32(cpu->r[13] + + 0x148u, cpu->r[5]);
    }
L_001126a0:;
    {
        cpu->r[14] = 0x001126a4u; fn_001535e0(cpu);
    }
L_001126a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001126a8:;
    {
        cpu->r[11] = 0x0000004cu;
    }
L_001126ac:;
    {
        cpu->r[14] = 0x001126b0u; fn_00153600(cpu);
    }
L_001126b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001126b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001126b8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x001126c0u + - 0x64u);
    }
L_001126bc:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x001126c4u + - 0x70u);
    }
L_001126c0:;
    {
        *vfp_s(cpu,16) = *vfp_s(cpu,17);
    }
L_001126c4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_001126c8:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x001126d0u + - 0x78u);
    }
L_001126cc:;
    {
        cpu->r[14] = 0x001126d0u; fn_0015429c(cpu);
    }
L_001126d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001126d4:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[5]);
    }
L_001126d8:;
    {
        cpu->r[14] = 0x001126dcu; fn_001535e0(cpu);
    }
L_001126dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001126e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_001126e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001126e8:;
    {
        cpu->r[14] = 0x001126ecu; fn_00153600(cpu);
    }
L_001126ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001126f0:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[5]);
    }
L_001126f4:;
    {
        cpu->r[14] = 0x001126f8u; fn_001535e0(cpu);
    }
L_001126f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001126fc:;
    {
        cpu->r[14] = 0x00112700u; fn_00153600(cpu);
    }
L_00112700:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00112704:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[8]);
    }
L_00112708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011270c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_00112710:;
    {
        cpu->r[1] = rd32(cpu->r[8] + - 0x8u);
    }
L_00112714:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,20);
        }
    }
L_00112718:;
    {
        cpu->r[2] = rd32(cpu->r[8] + - 0x4u);
    }
L_0011271c:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vneg(cpu, 15, 20);
        }
    }
L_00112720:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00112724:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00112728:;
    {
        cpu->r[14] = 0x0011272cu; fn_001538ec(cpu);
    }
L_0011272c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_00112730:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00112734:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00112738:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0011273c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000190u, 0, 0);
    }
L_00112740:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00112744:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00112748:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0011274c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00112750:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12] + cpu->r[3]; cpu->r[11] = v;
    }
L_00112754:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00112758:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0011275c:;
    {
        cpu->r[14] = 0x00112760u; fn_00153624(cpu);
    }
L_00112760:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00112764:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00112768:;
    {
        cpu->r[14] = 0x0011276cu; fn_001534f0(cpu);
    }
L_0011276c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00112770:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00112774:;
    {
        cpu->r[14] = 0x00112778u; fn_001534f0(cpu);
    }
L_00112778:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_0011277c:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_00112780:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00112784:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00112788:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000134u, 0, 0);
    }
L_0011278c:;
    {
        cpu->r[14] = 0x00112790u; fn_001534f0(cpu);
    }
L_00112790:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_00112794:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00112798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000019cu, 0, 0);
    }
L_0011279c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x19cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001127a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1a0u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001127a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_001127a8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001127ac:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[12] = v;
    }
L_001127b0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001127b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1a4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001127b8:;
    {
        cpu->r[14] = rd32(cpu->r[2]);
    }
L_001127bc:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001127c0:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001127c4:;
    {
        cpu->r[14] = 0x001127c8u; fn_0015365c(cpu);
    }
L_001127c8:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x8u);
    }
L_001127cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001127d0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001127d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001127d8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_001127dc:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x3cu);
    }
L_001127e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_001127e4:;
    {
        cpu->r[14] = 0x001127e8u; fn_001535e0(cpu);
    }
L_001127e8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_001127ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112a5c;
        }
    }
L_001127f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001127f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112a20;
        }
    }
L_001127f8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001127fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112a98;
        }
    }
L_00112800:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_00112804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112ac0;
        }
    }
L_00112808:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00112810u + - 0x1b4u);
    }
L_0011280c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112810:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00112814:;
    {
        cpu->r[14] = 0x00112818u; fn_001534f0(cpu);
    }
L_00112818:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0011281c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00112820:;
    {
        cpu->r[14] = 0x00112824u; fn_001534f0(cpu);
    }
L_00112824:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_00112828:;
    {
        cpu->r[3] = 0x00001c44u;
    }
L_0011282c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112830:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00112834:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000134u, 0, 0);
    }
L_00112838:;
    {
        cpu->r[14] = 0x0011283cu; fn_001534f0(cpu);
    }
L_0011283c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112840:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00112844:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x190u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112848:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x194u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0011284c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x198u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00112850:;
    {
        cpu->r[14] = 0x00112854u; fn_0015365c(cpu);
    }
L_00112854:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00112858:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x190u);
    }
L_0011285c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x198u);
    }
L_00112860:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00112864:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x194u);
    }
L_00112868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001128dc;
        }
    }
L_0011286c:;
    {
        vfp_vadd(cpu, 12, 14, 21);
    }
L_00112870:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00112874:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00112878:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0011287c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00112880:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_00112884:;
    {
        vfp_vdiv(cpu, 10, 15, 12);
    }
L_00112888:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0011288c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_00112890:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_00112894:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0xc0u);
    }
L_00112898:;
    {
        vfp_vsub(cpu, 15, 15, 8);
    }
L_0011289c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_001128a0:;
    {
        vfp_vneg(cpu, 8, 13);
    }
L_001128a4:;
    {
        vfp_vsub(cpu, 13, 13, 9);
    }
L_001128a8:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_001128ac:;
    {
        vfp_vdiv(cpu, 12, 8, 12);
    }
L_001128b0:;
    {
        vfp_vsub(cpu, 14, 14, 11);
    }
L_001128b4:;
    {
        *vfp_s(cpu,13) = *vfp_s(cpu,18);
    }
L_001128b8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001128bc:;
    {
        vfp_vmla(cpu, 13, 10, 24);
    }
L_001128c0:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001128c4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,23);
    }
L_001128c8:;
    {
        vfp_vmla(cpu, 14, 12, 22);
    }
L_001128cc:;
    {
        vfp_vadd(cpu, 15, 13, 19);
    }
L_001128d0:;
    {
        *(uint32_t*)G(cpu->r[6] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001128d4:;
    {
        vfp_vadd(cpu, 17, 15, 17);
    }
L_001128d8:;
    {
        *(uint32_t*)G(cpu->r[6] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001128dc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001128e0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001128e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112900;
        }
    }
L_001128e8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001128ec:;
    {
        cpu->r[14] = 0x001128f0u; fn_000b2bc8(cpu);
    }
L_001128f0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001128f4:;
    {
        cpu->r[14] = 0x001128f8u; fn_0018ba20(cpu);
    }
L_001128f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001128fc:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_00112900:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00112904:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00112908:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_0011290c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001127c8;
        }
    }
L_00112910:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x94u);
    }
L_00112914:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_00112918:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_0011291c:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
        }
    }
L_00112920:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00112940;
        }
    }
L_00112924:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8f4u);
    }
L_00112928:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0011292c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00112940;
        }
    }
L_00112930:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00112934:;
    {
        cpu->r[14] = 0x00112938u; fn_0010dafc(cpu);
    }
L_00112938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0011293c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0011296c;
        }
    }
L_00112940:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_00112944:;
    {
        cpu->r[0] = 0x00001c44u;
    }
L_00112948:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0011294c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00112950:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00112954:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00112958:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x17cu);
    }
L_0011295c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00112960:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00112964:;
    {
        cpu->r[14] = 0x0011296cu;
    }
L_00112968:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0011296cu)) return;
    }
L_0011296c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc0u);
    }
L_00112970:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00112974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00112990;
        }
    }
L_00112978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0011297c:;
    {
        cpu->r[14] = 0x00112980u; fn_000b2bc8(cpu);
    }
L_00112980:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00112984:;
    {
        cpu->r[14] = 0x00112988u; fn_0018ba20(cpu);
    }
L_00112988:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0011298c:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_00112990:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x104u);
    }
L_00112994:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00112998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001129b4;
        }
    }
L_0011299c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001129a0:;
    {
        cpu->r[14] = 0x001129a4u; fn_000b2bc8(cpu);
    }
L_001129a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001129a8:;
    {
        cpu->r[14] = 0x001129acu; fn_0018ba20(cpu);
    }
L_001129ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001129b0:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001129b4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x148u);
    }
L_001129b8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001129bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001129d8;
        }
    }
L_001129c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001129c4:;
    {
        cpu->r[14] = 0x001129c8u; fn_000b2bc8(cpu);
    }
L_001129c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001129cc:;
    {
        cpu->r[14] = 0x001129d0u; fn_0018ba20(cpu);
    }
L_001129d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001129d4:;
    {
        wr32(cpu->r[13] + + 0x148u, cpu->r[3]);
    }
L_001129d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001129dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001129e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001125c8;
        }
    }
L_001129e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001129e8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001129ec:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001129f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_001129f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001129f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001129fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00112a00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_00112a04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00112a08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00112a0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00112a10:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00112a14:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00112a18:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00112a1c:;
    {
        goto L_001125b8;
    }
L_00112a20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_00112a24:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_00112a28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112a2c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[8] + - 0x8u);
    }
L_00112a30:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00112a34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + - 0x4u);
    }
L_00112a38:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00112a40u + - 0x3e0u);
    }
L_00112a3c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112a40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_00112a44:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_00112a48:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00112a4c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00112a50:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112a54:;
    {
        cpu->r[14] = 0x00112a58u; fn_001538ec(cpu);
    }
L_00112a58:;
    {
        goto L_0011280c;
    }
L_00112a5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_00112a60:;
    {
        vfp_vadd(cpu, 15, 20, 15);
    }
L_00112a64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112a68:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[8] + - 0x8u);
    }
L_00112a6c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00112a70:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + - 0x4u);
    }
L_00112a74:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00112a7cu + + 0x6cu);
    }
L_00112a78:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112a7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_00112a80:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_00112a84:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00112a88:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00112a8c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112a90:;
    {
        cpu->r[14] = 0x00112a94u; fn_001538ec(cpu);
    }
L_00112a94:;
    {
        goto L_0011280c;
    }
L_00112a98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_00112a9c:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_00112aa0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[8] + - 0x8u);
    }
L_00112aa4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00112aa8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + - 0x4u);
    }
L_00112aac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112ab0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00112ab8u + + 0x34u);
    }
L_00112ab4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112ab8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_00112abc:;
    {
        goto L_00112a80;
    }
L_00112ac0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_00112ac4:;
    {
        vfp_vadd(cpu, 15, 20, 15);
    }
L_00112ac8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[8] + - 0x8u);
    }
L_00112acc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_00112ad0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[8] + - 0x4u);
    }
L_00112ad4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00112ad8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00112ae0u + + 0x8u);
    }
L_00112adc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00112ae0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_00112ae4:;
    {
        goto L_00112a44;
    }
}
