#include "functions.h"

/* _ZN4CCar15InitV8Z06SoundsEv @ 0015ee44 (arm) */
void fn_0015ee44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015ee44:;
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
L_0015ee48:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015ee4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_0015ee50:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015ee58u + + 0x33cu);
    }
L_0015ee54:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015ee58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015ee5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015ee60:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_0015ee64:;
    {
        cpu->r[14] = 0x0015ee68u; fn_0018eac0(cpu);
    }
L_0015ee68:;
    {
        cpu->r[1] = 0x00001e20u;
    }
L_0015ee6c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015ee70:;
    {
        cpu->r[9] = 0x0000030cu;
    }
L_0015ee74:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[9]);
    }
L_0015ee78:;
    {
        cpu->r[1] = 0x00001e28u;
    }
L_0015ee7c:;
    {
        cpu->r[3] = 0x00001bbcu;
    }
L_0015ee80:;
    {
        cpu->r[0] = 0x000018b0u;
    }
L_0015ee84:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0015ee88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015ee8c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0015ee90:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0015ee94:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0015ee98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0015ee9c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0015eea0:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015eea4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015eea8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0015eeac:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0015eeb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015eeb8u + + 0x2e0u);
    }
L_0015eeb4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0015eeb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015eebc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0015eec0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015eec8u + + 0x2d4u);
    }
L_0015eec4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0015eec8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015eecc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0015eed0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015eed4:;
    {
        wr8(cpu->r[13] + + 0xe0u, cpu->r[7]);
    }
L_0015eed8:;
    {
        cpu->r[14] = 0x0015eedcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015eedc:;
    {
        cpu->r[10] = 0x0000006au;
    }
L_0015eee0:;
    {
        cpu->r[2] = 0x00000065u;
    }
L_0015eee4:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_0015eee8:;
    {
        cpu->r[11] = 0x00001842u;
    }
L_0015eeec:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0015eef0:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015eef4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_0015eef8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_0015eefc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015ef00:;
    {
        cpu->r[1] = 0x00000068u;
    }
L_0015ef04:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015ef08:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0015ef0c:;
    {
        cpu->r[1] = 0x00000069u;
    }
L_0015ef10:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0015ef14:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015ef18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015ef1c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015ef20:;
    {
        cpu->r[14] = 0x0015ef24u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015ef24:;
    {
        cpu->r[2] = 0x000005dcu;
    }
L_0015ef28:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[11]);
    }
L_0015ef2c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015ef30:;
    {
        cpu->r[2] = 0x0000090au;
    }
L_0015ef34:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015ef38:;
    {
        cpu->r[2] = 0x00000d20u;
    }
L_0015ef3c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015ef40:;
    {
        cpu->r[2] = 0x00001430u;
    }
L_0015ef44:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015ef48:;
    {
        cpu->r[2] = 0x000016ecu;
    }
L_0015ef4c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015ef50:;
    {
        cpu->r[2] = 0x00001840u;
    }
L_0015ef54:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015ef58:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0015ef5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015ef60:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015ef64:;
    {
        cpu->r[14] = 0x0015ef68u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015ef68:;
    {
        cpu->r[2] = 0x00000696u;
    }
L_0015ef6c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015ef70:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015ef74:;
    {
        cpu->r[2] = 0x00000a7cu;
    }
L_0015ef78:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015ef7c:;
    {
        cpu->r[2] = 0x00000e75u;
    }
L_0015ef80:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015ef84:;
    {
        cpu->r[2] = 0x000012edu;
    }
L_0015ef88:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015ef8c:;
    {
        cpu->r[2] = 0x0000168au;
    }
L_0015ef90:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015ef94:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015ef98:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0015ef9c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_0015efa0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0015efa4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015efa8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015efac:;
    {
        cpu->r[14] = 0x0015efb0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015efb0:;
    {
        cpu->r[1] = 0x000008d8u;
    }
L_0015efb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015efb8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015efbc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015efc0:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015efc4:;
    {
        cpu->r[1] = 0x00000cbfu;
    }
L_0015efc8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0015efcc:;
    {
        cpu->r[1] = 0x000010e1u;
    }
L_0015efd0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015efd4:;
    {
        cpu->r[1] = 0x00001480u;
    }
L_0015efd8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0015efdc:;
    {
        cpu->r[1] = 0x00001859u;
    }
L_0015efe0:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_0015efe4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015efe8:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0015efec:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0015eff0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 0);
    }
L_0015eff4:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[1]);
    }
L_0015eff8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015effc:;
    {
        wr32(cpu->r[2] + + 0x18u, cpu->r[1]);
    }
L_0015f000:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0015f004:;
    {
        cpu->r[14] = 0x0015f008u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f008:;
    {
        cpu->r[3] = 0x00000063u;
    }
L_0015f00c:;
    {
        cpu->r[2] = 0x0000005du;
    }
L_0015f010:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015f014:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f018:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_0015f01c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f020:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f024:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_0015f028:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f02c:;
    {
        cpu->r[2] = 0x00000060u;
    }
L_0015f030:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f034:;
    {
        cpu->r[2] = 0x00000061u;
    }
L_0015f038:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f03c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0015f040:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f044:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f048:;
    {
        cpu->r[14] = 0x0015f04cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f04c:;
    {
        cpu->r[3] = 0x00000bb8u;
    }
L_0015f050:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[11]);
    }
L_0015f054:;
    {
        wr32(cpu->r[0], cpu->r[9]);
    }
L_0015f058:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f05c:;
    {
        cpu->r[3] = 0x00000f24u;
    }
L_0015f060:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015f064:;
    {
        cpu->r[3] = 0x00001224u;
    }
L_0015f068:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f06c:;
    {
        cpu->r[3] = 0x00001500u;
    }
L_0015f070:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f074:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0015f078:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f07c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0015f080:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f084:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f088:;
    {
        cpu->r[14] = 0x0015f08cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f08c:;
    {
        cpu->r[3] = 0x000004f2u;
    }
L_0015f090:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015f094:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f098:;
    {
        cpu->r[3] = 0x000009a7u;
    }
L_0015f09c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015f0a0:;
    {
        cpu->r[3] = 0x00000e2bu;
    }
L_0015f0a4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f0a8:;
    {
        cpu->r[3] = 0x000011dfu;
    }
L_0015f0ac:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f0b0:;
    {
        cpu->r[3] = 0x000015a5u;
    }
L_0015f0b4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f0b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f0bc:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_0015f0c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015f0c4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015f0c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f0cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f0d0:;
    {
        cpu->r[14] = 0x0015f0d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f0d4:;
    {
        cpu->r[2] = 0x000006dfu;
    }
L_0015f0d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015f0dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f0e4u + + 0xbcu);
    }
L_0015f0e0:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[7]);
    }
L_0015f0e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f0e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f0ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f0f4u + + 0xb0u);
    }
L_0015f0f0:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_0015f0f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f0f8:;
    {
        wr8(cpu->r[13] + + 0x58u, cpu->r[7]);
    }
L_0015f0fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f104u + + 0xa4u);
    }
L_0015f100:;
    {
        wr8(cpu->r[13] + + 0x59u, cpu->r[7]);
    }
L_0015f104:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f108:;
    {
        wr8(cpu->r[13] + + 0x5au, cpu->r[5]);
    }
L_0015f10c:;
    {
        wr8(cpu->r[13] + + 0x88u, cpu->r[5]);
    }
L_0015f110:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f114:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015f118:;
    {
        cpu->r[2] = 0x00000c2fu;
    }
L_0015f11c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f120:;
    {
        cpu->r[2] = 0x00000fbfu;
    }
L_0015f124:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f128:;
    {
        cpu->r[2] = 0x0000137fu;
    }
L_0015f12c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f130:;
    {
        cpu->r[2] = 0x000017b9u;
    }
L_0015f134:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f138:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f13c:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0015f140:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0015f144:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015f148:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015f14c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f150:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015f154:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0015f158:;
    {
        cpu->r[2] = 0x00000062u;
    }
L_0015f15c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[10]);
    }
L_0015f160:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_0015f164:;
    {
        cpu->r[2] = 0x00000e74u;
    }
L_0015f168:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_0015f16c:;
    {
        cpu->r[2] = 0x00000bbbu;
    }
L_0015f170:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_0015f174:;
    {
        cpu->r[2] = 0x00001b67u;
    }
L_0015f178:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_0015f17c:;
    {
        cpu->r[14] = 0x0015f180u; fn_00190b44(cpu);
    }
L_0015f180:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015f184:;
    {
        cpu->r[14] = 0x0015f188u; fn_001908d0(cpu);
    }
L_0015f188:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_0015f18c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015f190:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015f194u)) return;
    }
}

/* _ZN4CCar17InitV6TurboSoundsEv @ 0015f1ac (arm) */
void fn_0015f1ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015f1ac:;
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
L_0015f1b0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015f1b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_0015f1b8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015f1c0u + + 0x33cu);
    }
L_0015f1bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015f1c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015f1c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015f1c8:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_0015f1cc:;
    {
        cpu->r[14] = 0x0015f1d0u; fn_0018eac0(cpu);
    }
L_0015f1d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015f1d4:;
    {
        cpu->r[1] = 0x00001e28u;
    }
L_0015f1d8:;
    {
        cpu->r[3] = 0x00001e20u;
    }
L_0015f1dc:;
    {
        cpu->r[9] = 0x00000320u;
    }
L_0015f1e0:;
    {
        cpu->r[10] = 0x00001964u;
    }
L_0015f1e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_0015f1e8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015f1ec:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[10]);
    }
L_0015f1f0:;
    {
        cpu->r[3] = 0x00001c84u;
    }
L_0015f1f4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0015f1f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f200u + + 0x300u);
    }
L_0015f1fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015f200:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f204:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0015f208:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0015f20c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0015f210:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0015f214:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0015f21cu + + 0x2e8u);
    }
L_0015f218:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0015f21c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0015f220:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015f224:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_0015f228:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0015f22c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0015f230:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f234:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[9]);
    }
L_0015f238:;
    {
        cpu->r[11] = 0x00000bb8u;
    }
L_0015f23c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_0015f240:;
    {
        wr8(cpu->r[13] + + 0xe0u, cpu->r[7]);
    }
L_0015f244:;
    {
        cpu->r[14] = 0x0015f248u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f248:;
    {
        cpu->r[2] = 0x00000057u;
    }
L_0015f24c:;
    {
        cpu->r[1] = 0x00000058u;
    }
L_0015f250:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f254:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015f258:;
    {
        cpu->r[1] = 0x0000005bu;
    }
L_0015f25c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f260:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0015f264:;
    {
        cpu->r[1] = 0x00000059u;
    }
L_0015f268:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015f26c:;
    {
        cpu->r[1] = 0x0000005au;
    }
L_0015f270:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0015f274:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015f278:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f27c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f280:;
    {
        cpu->r[14] = 0x0015f284u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f284:;
    {
        cpu->r[2] = 0x00000f68u;
    }
L_0015f288:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[11]);
    }
L_0015f28c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f290:;
    {
        cpu->r[2] = 0x000019b4u;
    }
L_0015f294:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_0015f298:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f29c:;
    {
        cpu->r[2] = 0x000007d0u;
    }
L_0015f2a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f2a4:;
    {
        cpu->r[2] = 0x00001388u;
    }
L_0015f2a8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f2ac:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0015f2b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f2b4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f2b8:;
    {
        cpu->r[14] = 0x0015f2bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f2bc:;
    {
        cpu->r[2] = 0x0000080cu;
    }
L_0015f2c0:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015f2c4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f2c8:;
    {
        cpu->r[2] = 0x00000c3cu;
    }
L_0015f2cc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f2d0:;
    {
        cpu->r[2] = 0x000010d7u;
    }
L_0015f2d4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f2d8:;
    {
        cpu->r[2] = 0x0000168fu;
    }
L_0015f2dc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f2e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f2e4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0015f2e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_0015f2ec:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f2f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f2f4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f2f8:;
    {
        cpu->r[14] = 0x0015f2fcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f2fc:;
    {
        cpu->r[1] = 0x00000a66u;
    }
L_0015f300:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015f304:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f308:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015f30c:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015f310:;
    {
        cpu->r[1] = 0x00000ecbu;
    }
L_0015f314:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0015f318:;
    {
        cpu->r[1] = 0x00001375u;
    }
L_0015f31c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015f320:;
    {
        cpu->r[1] = 0x00001a2fu;
    }
L_0015f324:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[1]);
    }
L_0015f328:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f32c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015f330:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0015f334:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 0);
    }
L_0015f338:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_0015f33c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f340:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[1]);
    }
L_0015f344:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0015f348:;
    {
        cpu->r[14] = 0x0015f34cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f34c:;
    {
        cpu->r[3] = 0x00000052u;
    }
L_0015f350:;
    {
        cpu->r[2] = 0x00000050u;
    }
L_0015f354:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f358:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f35c:;
    {
        cpu->r[2] = 0x00000056u;
    }
L_0015f360:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f364:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f368:;
    {
        cpu->r[2] = 0x00000053u;
    }
L_0015f36c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f370:;
    {
        cpu->r[2] = 0x00000054u;
    }
L_0015f374:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f378:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0015f37c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f380:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f384:;
    {
        cpu->r[14] = 0x0015f388u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f388:;
    {
        cpu->r[2] = 0x00001388u;
    }
L_0015f38c:;
    {
        cpu->r[3] = 0x000019b4u;
    }
L_0015f390:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f394:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f398:;
    {
        cpu->r[3] = 0x000005afu;
    }
L_0015f39c:;
    {
        wr32(cpu->r[0], cpu->r[9]);
    }
L_0015f3a0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_0015f3a4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_0015f3a8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0015f3ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f3b0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f3b4:;
    {
        cpu->r[14] = 0x0015f3b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f3b8:;
    {
        cpu->r[3] = 0x00000354u;
    }
L_0015f3bc:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015f3c0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f3c4:;
    {
        cpu->r[3] = 0x000007d0u;
    }
L_0015f3c8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015f3cc:;
    {
        cpu->r[3] = 0x00000d48u;
    }
L_0015f3d0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f3d4:;
    {
        cpu->r[3] = 0x000014f3u;
    }
L_0015f3d8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f3e0:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_0015f3e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015f3e8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f3ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f3f0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f3f4:;
    {
        cpu->r[14] = 0x0015f3f8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f3f8:;
    {
        cpu->r[2] = 0x00000640u;
    }
L_0015f3fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015f404u + + 0x104u);
    }
L_0015f400:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015f404:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015f408:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0015f410u + + 0xfcu);
    }
L_0015f40c:;
    {
        cpu->r[12] = 0x00000055u;
    }
L_0015f410:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015f414:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f418:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[7]);
    }
L_0015f41c:;
    {
        wr8(cpu->r[13] + + 0xbcu, cpu->r[5]);
    }
L_0015f420:;
    {
        wr8(cpu->r[13] + + 0x58u, cpu->r[7]);
    }
L_0015f424:;
    {
        wr8(cpu->r[13] + + 0x59u, cpu->r[7]);
    }
L_0015f428:;
    {
        wr8(cpu->r[13] + + 0x5au, cpu->r[7]);
    }
L_0015f42c:;
    {
        wr8(cpu->r[13] + + 0x88u, cpu->r[5]);
    }
L_0015f430:;
    {
        wr8(cpu->r[13] + + 0x95u, cpu->r[5]);
    }
L_0015f434:;
    {
        wr8(cpu->r[13] + + 0x9cu, cpu->r[5]);
    }
L_0015f438:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f43c:;
    {
        cpu->r[2] = 0x00000a28u;
    }
L_0015f440:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f444:;
    {
        cpu->r[2] = 0x00001130u;
    }
L_0015f448:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f44c:;
    {
        cpu->r[2] = 0x0000181cu;
    }
L_0015f450:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f454:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015f458:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f45c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0015f460:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015f464:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f468:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f46c:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0015f470:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015f474:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015f478:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f47c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0015f480:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015f484:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0015f48cu + + 0x84u);
    }
L_0015f488:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015f48c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0015f494u + + 0x80u);
    }
L_0015f490:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015f494:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_0015f498:;
    {
        cpu->r[12] = 0x0000123du;
    }
L_0015f49c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0015f4a0:;
    {
        cpu->r[12] = 0x00001e2cu;
    }
L_0015f4a4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_0015f4a8:;
    {
        cpu->r[12] = 0x00001101u;
    }
L_0015f4ac:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_0015f4b0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_0015f4b4:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_0015f4b8:;
    {
        cpu->r[12] = 0x00000ad7u;
    }
L_0015f4bc:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_0015f4c0:;
    {
        cpu->r[12] = 0x0000005cu;
    }
L_0015f4c4:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[12]);
    }
L_0015f4c8:;
    {
        cpu->r[12] = 0x00000750u;
    }
L_0015f4cc:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[12]);
    }
L_0015f4d0:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0015f4d4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,13);
    }
L_0015f4d8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0015f4dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015f4e0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f4e4:;
    {
        cpu->r[14] = 0x0015f4e8u; fn_00190b44(cpu);
    }
L_0015f4e8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015f4ec:;
    {
        cpu->r[14] = 0x0015f4f0u; fn_001908d0(cpu);
    }
L_0015f4f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_0015f4f4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015f4f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015f4fcu)) return;
    }
}

/* _ZN4CCar14InitV6naSoundsEv @ 0015f518 (arm) */
void fn_0015f518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015f518:;
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
L_0015f51c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015f520:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_0015f524:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015f52cu + + 0x300u);
    }
L_0015f528:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0015f52c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015f530:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015f534:;
    {
        cpu->r[5] = 0x00001e24u;
    }
L_0015f538:;
    {
        cpu->r[14] = 0x0015f53cu; fn_0018eac0(cpu);
    }
L_0015f53c:;
    {
        cpu->r[1] = 0x00001e20u;
    }
L_0015f540:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015f544:;
    {
        cpu->r[10] = 0x00000384u;
    }
L_0015f548:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[10]);
    }
L_0015f54c:;
    {
        cpu->r[1] = 0x00001e28u;
    }
L_0015f550:;
    {
        cpu->r[3] = 0x00001c2au;
    }
L_0015f554:;
    {
        cpu->r[0] = 0x000018a6u;
    }
L_0015f558:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_0015f55c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0015f560:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0015f564:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015f568:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0015f56c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0015f570:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0015f574:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0015f578:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015f57c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0015f580:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0015f584:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f58cu + + 0x2a4u);
    }
L_0015f588:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0015f58c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f590:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_0015f594:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f59cu + + 0x298u);
    }
L_0015f598:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0015f59c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f5a0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[6]);
    }
L_0015f5a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f5a8:;
    {
        wr8(cpu->r[13] + + 0xe0u, cpu->r[7]);
    }
L_0015f5ac:;
    {
        cpu->r[14] = 0x0015f5b0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f5b0:;
    {
        cpu->r[2] = 0x0000003eu;
    }
L_0015f5b4:;
    {
        cpu->r[1] = 0x0000003fu;
    }
L_0015f5b8:;
    {
        cpu->r[11] = 0x00000bb8u;
    }
L_0015f5bc:;
    {
        cpu->r[9] = 0x00001194u;
    }
L_0015f5c0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f5c4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015f5c8:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_0015f5cc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f5d0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015f5d4:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_0015f5d8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_0015f5dc:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_0015f5e0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0015f5e4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015f5e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f5ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f5f0:;
    {
        cpu->r[14] = 0x0015f5f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f5f4:;
    {
        cpu->r[1] = 0x00001770u;
    }
L_0015f5f8:;
    {
        cpu->r[2] = 0x0000042eu;
    }
L_0015f5fc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0015f600:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f604:;
    {
        cpu->r[2] = 0x000007d0u;
    }
L_0015f608:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_0015f60c:;
    {
        cpu->r[2] = 0x000019b4u;
    }
L_0015f610:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[9]);
    }
L_0015f614:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f618:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0015f61c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f620:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f624:;
    {
        cpu->r[14] = 0x0015f628u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f628:;
    {
        cpu->r[2] = 0x0000061eu;
    }
L_0015f62c:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_0015f630:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f634:;
    {
        cpu->r[2] = 0x00000ad9u;
    }
L_0015f638:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f63c:;
    {
        cpu->r[2] = 0x00000ff0u;
    }
L_0015f640:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f644:;
    {
        cpu->r[2] = 0x000015fbu;
    }
L_0015f648:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015f64c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f650:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0015f654:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_0015f658:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f65c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0015f660:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f664:;
    {
        cpu->r[14] = 0x0015f668u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f668:;
    {
        cpu->r[1] = 0x000008b2u;
    }
L_0015f66c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015f670:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f674:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0015f678:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0015f67c:;
    {
        cpu->r[1] = 0x00000d18u;
    }
L_0015f680:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0015f684:;
    {
        cpu->r[1] = 0x000012cdu;
    }
L_0015f688:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0015f68c:;
    {
        cpu->r[1] = 0x00001910u;
    }
L_0015f690:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[1]);
    }
L_0015f694:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f698:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015f69c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_0015f6a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000019u, 1, 0);
    }
L_0015f6a4:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_0015f6a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f6ac:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[1]);
    }
L_0015f6b0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_0015f6b4:;
    {
        cpu->r[14] = 0x0015f6b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f6b8:;
    {
        cpu->r[3] = 0x00000039u;
    }
L_0015f6bc:;
    {
        cpu->r[2] = 0x00000037u;
    }
L_0015f6c0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f6c4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f6c8:;
    {
        cpu->r[2] = 0x0000003du;
    }
L_0015f6cc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f6d0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f6d4:;
    {
        cpu->r[2] = 0x0000003au;
    }
L_0015f6d8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f6dc:;
    {
        cpu->r[2] = 0x0000003bu;
    }
L_0015f6e0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f6e4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0015f6e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f6ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f6f0:;
    {
        cpu->r[14] = 0x0015f6f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f6f4:;
    {
        cpu->r[2] = 0x000019b4u;
    }
L_0015f6f8:;
    {
        cpu->r[3] = 0x00000960u;
    }
L_0015f6fc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0015f700:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_0015f704:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f708:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_0015f70c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[11]);
    }
L_0015f710:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[9]);
    }
L_0015f714:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f718:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0015f71c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f720:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f724:;
    {
        cpu->r[14] = 0x0015f728u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f728:;
    {
        cpu->r[3] = 0x00000478u;
    }
L_0015f72c:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_0015f730:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f734:;
    {
        cpu->r[3] = 0x00000951u;
    }
L_0015f738:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015f73c:;
    {
        cpu->r[3] = 0x00000d4fu;
    }
L_0015f740:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f744:;
    {
        cpu->r[3] = 0x00001412u;
    }
L_0015f748:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f74c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f750:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_0015f754:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015f758:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f75c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0015f760:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f764:;
    {
        cpu->r[14] = 0x0015f768u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f768:;
    {
        cpu->r[2] = 0x00000661u;
    }
L_0015f76c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015f770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f778u + + 0xc0u);
    }
L_0015f774:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[7]);
    }
L_0015f778:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f77c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f780:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f788u + + 0xb4u);
    }
L_0015f784:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[6]);
    }
L_0015f788:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f78c:;
    {
        wr8(cpu->r[13] + + 0x58u, cpu->r[7]);
    }
L_0015f790:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f798u + + 0xa8u);
    }
L_0015f794:;
    {
        wr8(cpu->r[13] + + 0x59u, cpu->r[7]);
    }
L_0015f798:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f79c:;
    {
        wr8(cpu->r[13] + + 0x5au, cpu->r[7]);
    }
L_0015f7a0:;
    {
        wr8(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_0015f7a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f7a8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015f7ac:;
    {
        cpu->r[2] = 0x00000b8au;
    }
L_0015f7b0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f7b4:;
    {
        cpu->r[2] = 0x00001014u;
    }
L_0015f7b8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f7bc:;
    {
        cpu->r[2] = 0x00001758u;
    }
L_0015f7c0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f7c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f7c8:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0015f7cc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0015f7d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015f7d4:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0015f7d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0015f7dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015f7e0:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015f7e4:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0015f7e8:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_0015f7ec:;
    {
        cpu->r[2] = 0x00001a0eu;
    }
L_0015f7f0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_0015f7f4:;
    {
        cpu->r[2] = 0x00000ef5u;
    }
L_0015f7f8:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_0015f7fc:;
    {
        cpu->r[2] = 0x00000bbbu;
    }
L_0015f800:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_0015f804:;
    {
        cpu->r[2] = 0x00001ae1u;
    }
L_0015f808:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_0015f80c:;
    {
        cpu->r[2] = 0x00000042u;
    }
L_0015f810:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[2]);
    }
L_0015f814:;
    {
        cpu->r[14] = 0x0015f818u; fn_00190b44(cpu);
    }
L_0015f818:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015f81c:;
    {
        cpu->r[14] = 0x0015f820u; fn_001908d0(cpu);
    }
L_0015f820:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_0015f824:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015f828:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015f82cu)) return;
    }
}

/* _ZN4CCar24InitV12LamborghiniSoundsEv @ 0015f844 (arm) */
void fn_0015f844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015f844:;
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
L_0015f848:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015f84c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_0015f850:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015f858u + + 0x31cu);
    }
L_0015f854:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015f858:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015f85c:;
    {
        cpu->r[14] = 0x0015f860u; fn_0018eac0(cpu);
    }
L_0015f860:;
    {
        cpu->r[2] = 0x00001e3cu;
    }
L_0015f864:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015f868:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015f86c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0015f870:;
    {
        cpu->r[2] = 0x00001e20u;
    }
L_0015f874:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_0015f878:;
    {
        cpu->r[9] = 0x000003e8u;
    }
L_0015f87c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[9]);
    }
L_0015f880:;
    {
        cpu->r[2] = 0x00001e28u;
    }
L_0015f884:;
    {
        cpu->r[1] = 0x00001b58u;
    }
L_0015f888:;
    {
        cpu->r[10] = 0x00001f40u;
    }
L_0015f88c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0015f890:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015f894:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[10]);
    }
L_0015f898:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0015f89c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0015f8a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f8a8u + + 0x2d0u);
    }
L_0015f8a4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0015f8a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f8ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0015f8b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015f8b8u + + 0x2c4u);
    }
L_0015f8b4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0015f8b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015f8bc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0015f8c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f8c4:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0015f8c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0015f8cc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0015f8d0:;
    {
        cpu->r[11] = 0x00001194u;
    }
L_0015f8d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0015f8d8:;
    {
        cpu->r[8] = cpu->r[13];
    }
L_0015f8dc:;
    {
        wr8(cpu->r[13] + + 0xd8u, cpu->r[7]);
    }
L_0015f8e0:;
    {
        cpu->r[14] = 0x0015f8e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f8e4:;
    {
        cpu->r[3] = 0x0000004bu;
    }
L_0015f8e8:;
    {
        cpu->r[2] = 0x0000004cu;
    }
L_0015f8ec:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f8f0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f8f4:;
    {
        cpu->r[2] = 0x0000004du;
    }
L_0015f8f8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f8fc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f900:;
    {
        cpu->r[2] = 0x0000004eu;
    }
L_0015f904:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015f908:;
    {
        cpu->r[2] = 0x0000004fu;
    }
L_0015f90c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f910:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0015f914:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015f918:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f91c:;
    {
        cpu->r[14] = 0x0015f920u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f920:;
    {
        cpu->r[2] = 0x00000bb8u;
    }
L_0015f924:;
    {
        cpu->r[3] = 0x000007d0u;
    }
L_0015f928:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f92c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0015f930:;
    {
        cpu->r[3] = 0x00001d62u;
    }
L_0015f934:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[11]);
    }
L_0015f938:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f93c:;
    {
        cpu->r[3] = 0x00001964u;
    }
L_0015f940:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_0015f944:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f948:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015f94c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015f950:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f954:;
    {
        cpu->r[14] = 0x0015f958u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f958:;
    {
        cpu->r[3] = 0x0000074du;
    }
L_0015f95c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015f960:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015f964:;
    {
        cpu->r[3] = 0x00000cd7u;
    }
L_0015f968:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015f96c:;
    {
        cpu->r[3] = 0x00001212u;
    }
L_0015f970:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015f974:;
    {
        cpu->r[3] = 0x00001815u;
    }
L_0015f978:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015f97c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f980:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_0015f984:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015f988:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015f98c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015f990:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015f994:;
    {
        cpu->r[14] = 0x0015f998u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f998:;
    {
        cpu->r[2] = 0x0000094cu;
    }
L_0015f99c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015f9a0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015f9a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f9a8:;
    {
        cpu->r[2] = 0x00000e8du;
    }
L_0015f9ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015f9b0:;
    {
        cpu->r[2] = 0x000014ceu;
    }
L_0015f9b4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015f9b8:;
    {
        cpu->r[2] = 0x00001b02u;
    }
L_0015f9bc:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0015f9c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f9c4:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0015f9c8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0015f9cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015f9d0:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0015f9d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015f9d8:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015f9dc:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015f9e0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0015f9e4:;
    {
        cpu->r[14] = 0x0015f9e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015f9e8:;
    {
        cpu->r[3] = 0x00000045u;
    }
L_0015f9ec:;
    {
        cpu->r[2] = 0x00000043u;
    }
L_0015f9f0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015f9f4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015f9f8:;
    {
        cpu->r[2] = 0x00000046u;
    }
L_0015f9fc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fa00:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fa04:;
    {
        cpu->r[2] = 0x0000004au;
    }
L_0015fa08:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fa0c:;
    {
        cpu->r[2] = 0x00000047u;
    }
L_0015fa10:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015fa14:;
    {
        cpu->r[2] = 0x00000048u;
    }
L_0015fa18:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015fa1c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0015fa20:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015fa24:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fa28:;
    {
        cpu->r[14] = 0x0015fa2cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fa2c:;
    {
        cpu->r[2] = 0x00001d62u;
    }
L_0015fa30:;
    {
        cpu->r[3] = 0x0000091fu;
    }
L_0015fa34:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0015fa38:;
    {
        cpu->r[2] = 0x00001964u;
    }
L_0015fa3c:;
    {
        wr32(cpu->r[0], cpu->r[9]);
    }
L_0015fa40:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015fa44:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fa48:;
    {
        cpu->r[3] = 0x00000bb8u;
    }
L_0015fa4c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[11]);
    }
L_0015fa50:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015fa54:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0015fa58:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0015fa5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015fa60:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fa64:;
    {
        cpu->r[14] = 0x0015fa68u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fa68:;
    {
        cpu->r[3] = 0x000004ecu;
    }
L_0015fa6c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015fa70:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fa74:;
    {
        cpu->r[3] = 0x00000a34u;
    }
L_0015fa78:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015fa7c:;
    {
        cpu->r[3] = 0x00000d36u;
    }
L_0015fa80:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015fa84:;
    {
        cpu->r[3] = 0x000011a4u;
    }
L_0015fa88:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015fa8c:;
    {
        cpu->r[3] = 0x000017a1u;
    }
L_0015fa90:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fa94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fa98:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0015fa9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015faa0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015faa4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015faa8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015faac:;
    {
        cpu->r[14] = 0x0015fab0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fab0:;
    {
        cpu->r[2] = 0x0000069eu;
    }
L_0015fab4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0015fab8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fac0u + + 0xc0u);
    }
L_0015fabc:;
    {
        wr8(cpu->r[13] + + 0x74u, cpu->r[7]);
    }
L_0015fac0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fac4:;
    {
        cpu->r[12] = 0x00000049u;
    }
L_0015fac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fad0u + + 0xb4u);
    }
L_0015facc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015fad0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fad4:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[5]);
    }
L_0015fad8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fae0u + + 0xa8u);
    }
L_0015fadc:;
    {
        wr8(cpu->r[13] + + 0x50u, cpu->r[7]);
    }
L_0015fae0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fae4:;
    {
        wr8(cpu->r[13] + + 0x51u, cpu->r[7]);
    }
L_0015fae8:;
    {
        wr8(cpu->r[13] + + 0x52u, cpu->r[5]);
    }
L_0015faec:;
    {
        wr8(cpu->r[13] + + 0x80u, cpu->r[5]);
    }
L_0015faf0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015faf4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015faf8:;
    {
        cpu->r[2] = 0x00000ba3u;
    }
L_0015fafc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fb00:;
    {
        cpu->r[2] = 0x00000eb8u;
    }
L_0015fb04:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fb08:;
    {
        cpu->r[2] = 0x00001412u;
    }
L_0015fb0c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015fb10:;
    {
        cpu->r[2] = 0x00001a52u;
    }
L_0015fb14:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015fb18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fb1c:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0015fb20:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0015fb24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015fb28:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015fb2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fb30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015fb34:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0015fb38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fb3c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0015fb40:;
    {
        cpu->r[12] = 0x000011a2u;
    }
L_0015fb44:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_0015fb48:;
    {
        cpu->r[12] = 0x00000ba9u;
    }
L_0015fb4c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_0015fb50:;
    {
        cpu->r[2] = 0x0000004fu;
    }
L_0015fb54:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0015fb58:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_0015fb5c:;
    {
        cpu->r[14] = 0x0015fb60u; fn_00190b44(cpu);
    }
L_0015fb60:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015fb64:;
    {
        cpu->r[14] = 0x0015fb68u; fn_001908d0(cpu);
    }
L_0015fb68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_0015fb6c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015fb70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015fb74u)) return;
    }
}

/* _ZN4CCar19InitSuperbikeSoundsEv @ 0015fb8c (arm) */
void fn_0015fb8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015fb8c:;
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
L_0015fb90:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015fb94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_0015fb98:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015fba0u + + 0x304u);
    }
L_0015fb9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015fba0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015fba4:;
    {
        cpu->r[14] = 0x0015fba8u; fn_0018eac0(cpu);
    }
L_0015fba8:;
    {
        cpu->r[3] = 0x00001e3cu;
    }
L_0015fbac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015fbb0:;
    {
        cpu->r[1] = 0x00001e28u;
    }
L_0015fbb4:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_0015fbb8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015fbbc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0015fbc0:;
    {
        cpu->r[3] = 0x00001e20u;
    }
L_0015fbc4:;
    {
        cpu->r[9] = 0x000004e2u;
    }
L_0015fbc8:;
    {
        cpu->r[0] = 0x00002de6u;
    }
L_0015fbcc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_0015fbd0:;
    {
        cpu->r[3] = 0x000032c8u;
    }
L_0015fbd4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0015fbd8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0015fbdc:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0015fbe0:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0015fbe4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0015fbe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fbf0u + + 0x2b8u);
    }
L_0015fbec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0015fbf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fbf4:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0015fbf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fc00u + + 0x2acu);
    }
L_0015fbfc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0015fc00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fc04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0015fc08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015fc0c:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0015fc10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0015fc14:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0015fc18:;
    {
        cpu->r[10] = 0x00002cecu;
    }
L_0015fc1c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0015fc20:;
    {
        cpu->r[11] = 0x0000157cu;
    }
L_0015fc24:;
    {
        wr8(cpu->r[13] + + 0xd8u, cpu->r[8]);
    }
L_0015fc28:;
    {
        cpu->r[14] = 0x0015fc2cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fc2c:;
    {
        cpu->r[3] = 0x00000032u;
    }
L_0015fc30:;
    {
        cpu->r[2] = 0x00000033u;
    }
L_0015fc34:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_0015fc38:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fc3c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015fc40:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_0015fc44:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015fc48:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fc4c:;
    {
        cpu->r[2] = 0x00000034u;
    }
L_0015fc50:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fc54:;
    {
        cpu->r[2] = 0x00000035u;
    }
L_0015fc58:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015fc5c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0015fc60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015fc64:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fc68:;
    {
        cpu->r[14] = 0x0015fc6cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fc6c:;
    {
        cpu->r[3] = 0x00000bb8u;
    }
L_0015fc70:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0015fc74:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0015fc78:;
    {
        cpu->r[3] = 0x00000fa0u;
    }
L_0015fc7c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_0015fc80:;
    {
        cpu->r[3] = 0x00002134u;
    }
L_0015fc84:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[10]);
    }
L_0015fc88:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015fc8c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015fc90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015fc94:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fc98:;
    {
        cpu->r[14] = 0x0015fc9cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fc9c:;
    {
        cpu->r[3] = 0x00000b8au;
    }
L_0015fca0:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015fca4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fca8:;
    {
        cpu->r[3] = 0x0000117du;
    }
L_0015fcac:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015fcb0:;
    {
        cpu->r[3] = 0x000019a9u;
    }
L_0015fcb4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015fcb8:;
    {
        cpu->r[3] = 0x00002371u;
    }
L_0015fcbc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015fcc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fcc4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_0015fcc8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015fccc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fcd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015fcd4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fcd8:;
    {
        cpu->r[14] = 0x0015fcdcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fcdc:;
    {
        cpu->r[2] = 0x00000f03u;
    }
L_0015fce0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015fce4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015fce8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015fcec:;
    {
        cpu->r[2] = 0x000014b7u;
    }
L_0015fcf0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fcf4:;
    {
        cpu->r[2] = 0x00001e6du;
    }
L_0015fcf8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fcfc:;
    {
        cpu->r[2] = 0x0000289au;
    }
L_0015fd00:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_0015fd04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fd08:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0015fd0c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0015fd10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015fd14:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0015fd18:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fd1c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015fd20:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015fd24:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0015fd28:;
    {
        cpu->r[14] = 0x0015fd2cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fd2c:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_0015fd30:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_0015fd34:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015fd38:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015fd3c:;
    {
        cpu->r[2] = 0x0000002du;
    }
L_0015fd40:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fd44:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fd48:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_0015fd4c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fd50:;
    {
        cpu->r[2] = 0x0000002eu;
    }
L_0015fd54:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015fd58:;
    {
        cpu->r[2] = 0x0000002fu;
    }
L_0015fd5c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015fd60:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_0015fd64:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015fd68:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fd6c:;
    {
        cpu->r[14] = 0x0015fd70u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fd70:;
    {
        cpu->r[3] = 0x00000bb8u;
    }
L_0015fd74:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[10]);
    }
L_0015fd78:;
    {
        wr32(cpu->r[0], cpu->r[9]);
    }
L_0015fd7c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fd80:;
    {
        cpu->r[3] = 0x00000fa0u;
    }
L_0015fd84:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[11]);
    }
L_0015fd88:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015fd8c:;
    {
        cpu->r[3] = 0x00002134u;
    }
L_0015fd90:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[10]);
    }
L_0015fd94:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015fd98:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0015fd9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015fda0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fda4:;
    {
        cpu->r[14] = 0x0015fda8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fda8:;
    {
        cpu->r[3] = 0x00000605u;
    }
L_0015fdac:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015fdb0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fdb4:;
    {
        cpu->r[3] = 0x00000c95u;
    }
L_0015fdb8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0015fdbc:;
    {
        cpu->r[3] = 0x00001287u;
    }
L_0015fdc0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015fdc4:;
    {
        cpu->r[3] = 0x00001a12u;
    }
L_0015fdc8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015fdcc:;
    {
        cpu->r[3] = 0x000020cbu;
    }
L_0015fdd0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015fdd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fdd8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0015fddc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0015fde0:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015fde4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_0015fde8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015fdec:;
    {
        cpu->r[14] = 0x0015fdf0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015fdf0:;
    {
        cpu->r[2] = 0x00000832u;
    }
L_0015fdf4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0015fdf8:;
    {
        wr8(cpu->r[13] + + 0x51u, cpu->r[8]);
    }
L_0015fdfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fe04u + + 0xacu);
    }
L_0015fe00:;
    {
        cpu->r[12] = 0x00000030u;
    }
L_0015fe04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fe08:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[5]);
    }
L_0015fe0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fe14u + + 0xa0u);
    }
L_0015fe10:;
    {
        wr8(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_0015fe14:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fe18:;
    {
        wr8(cpu->r[13] + + 0x52u, cpu->r[5]);
    }
L_0015fe1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015fe24u + + 0x94u);
    }
L_0015fe20:;
    {
        wr8(cpu->r[13] + + 0x80u, cpu->r[5]);
    }
L_0015fe24:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015fe28:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015fe2c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0015fe30:;
    {
        cpu->r[2] = 0x00000f60u;
    }
L_0015fe34:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015fe38:;
    {
        cpu->r[2] = 0x0000159cu;
    }
L_0015fe3c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015fe40:;
    {
        cpu->r[2] = 0x00001e34u;
    }
L_0015fe44:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015fe48:;
    {
        cpu->r[2] = 0x0000264au;
    }
L_0015fe4c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015fe50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fe54:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0015fe58:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0015fe5c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0015fe60:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0015fe64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fe68:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_0015fe6c:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_0015fe70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0015fe74:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_0015fe78:;
    {
        cpu->r[12] = 0x00001146u;
    }
L_0015fe7c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_0015fe80:;
    {
        cpu->r[12] = 0x00000bc1u;
    }
L_0015fe84:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_0015fe88:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_0015fe8c:;
    {
        cpu->r[14] = 0x0015fe90u; fn_00190b44(cpu);
    }
L_0015fe90:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015fe94:;
    {
        cpu->r[14] = 0x0015fe98u; fn_001908d0(cpu);
    }
L_0015fe98:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_0015fe9c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015fea0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015fea4u)) return;
    }
}

/* _ZN4CCar19Init4CylTurboSoundsEv @ 0015febc (arm) */
void fn_0015febc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015febc:;
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
L_0015fec0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0015fec4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_0015fec8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015fed0u + + 0x30cu);
    }
L_0015fecc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015fed0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015fed4:;
    {
        cpu->r[14] = 0x0015fed8u; fn_0018eac0(cpu);
    }
L_0015fed8:;
    {
        cpu->r[3] = 0x00001e3cu;
    }
L_0015fedc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0015fee0:;
    {
        cpu->r[1] = 0x00001e28u;
    }
L_0015fee4:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_0015fee8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015feec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0015fef0:;
    {
        cpu->r[3] = 0x00001e20u;
    }
L_0015fef4:;
    {
        cpu->r[10] = 0x000003e8u;
    }
L_0015fef8:;
    {
        cpu->r[0] = 0x00001964u;
    }
L_0015fefc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[10]);
    }
L_0015ff00:;
    {
        cpu->r[3] = 0x00001d4cu;
    }
L_0015ff04:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0015ff08:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_0015ff0c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_0015ff10:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0015ff14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0015ff18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015ff20u + + 0x2c0u);
    }
L_0015ff1c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0015ff20:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ff24:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0015ff28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015ff30u + + 0x2b4u);
    }
L_0015ff2c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0015ff30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015ff34:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0015ff38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0015ff3c:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_0015ff40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0015ff44:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0015ff48:;
    {
        cpu->r[11] = 0x00000bb8u;
    }
L_0015ff4c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_0015ff50:;
    {
        cpu->r[9] = 0x00000d08u;
    }
L_0015ff54:;
    {
        wr8(cpu->r[13] + + 0xd8u, cpu->r[8]);
    }
L_0015ff58:;
    {
        cpu->r[14] = 0x0015ff5cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015ff5c:;
    {
        cpu->r[3] = 0x00000023u;
    }
L_0015ff60:;
    {
        cpu->r[2] = 0x00000024u;
    }
L_0015ff64:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_0015ff68:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015ff6c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0015ff70:;
    {
        cpu->r[2] = 0x00000029u;
    }
L_0015ff74:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015ff78:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0015ff7c:;
    {
        cpu->r[2] = 0x00000026u;
    }
L_0015ff80:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015ff84:;
    {
        cpu->r[2] = 0x00000027u;
    }
L_0015ff88:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0015ff8c:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_0015ff90:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015ff94:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0015ff98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015ff9c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015ffa0:;
    {
        cpu->r[14] = 0x0015ffa4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015ffa4:;
    {
        cpu->r[3] = 0x000005dcu;
    }
L_0015ffa8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[11]);
    }
L_0015ffac:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0015ffb0:;
    {
        cpu->r[3] = 0x0000091cu;
    }
L_0015ffb4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015ffb8:;
    {
        cpu->r[3] = 0x00000fa0u;
    }
L_0015ffbc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_0015ffc0:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_0015ffc4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0015ffc8:;
    {
        cpu->r[3] = 0x00001b6cu;
    }
L_0015ffcc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0015ffd0:;
    {
        cpu->r[3] = 0x00001a90u;
    }
L_0015ffd4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0015ffd8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0015ffdc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0015ffe0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015ffe4:;
    {
        cpu->r[14] = 0x0015ffe8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0015ffe8:;
    {
        cpu->r[3] = 0x000005b8u;
    }
L_0015ffec:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0015fff0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0015fff4:;
    {
        cpu->r[3] = 0x00000965u;
    }
L_0015fff8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[9]);
    }
L_0015fffc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00160000:;
    {
        cpu->r[3] = 0x0000118cu;
    }
L_00160004:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00160008:;
    {
        cpu->r[3] = 0x000015c3u;
    }
L_0016000c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00160010:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160014:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_00160018:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0016001c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00160020:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00160024:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00160028:;
    {
        cpu->r[14] = 0x0016002cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0016002c:;
    {
        cpu->r[2] = 0x00000750u;
    }
L_00160030:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00160034:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00160038:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0016003c:;
    {
        cpu->r[2] = 0x00000b18u;
    }
L_00160040:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00160044:;
    {
        cpu->r[2] = 0x00000f29u;
    }
L_00160048:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0016004c:;
    {
        cpu->r[2] = 0x0000136eu;
    }
L_00160050:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00160054:;
    {
        cpu->r[2] = 0x00001768u;
    }
L_00160058:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0016005c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160060:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00160064:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_00160068:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_0016006c:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_00160070:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160074:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
    }
L_00160078:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_0016007c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00160080:;
    {
        cpu->r[14] = 0x00160084u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160084:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_00160088:;
    {
        cpu->r[2] = 0x0000001du;
    }
L_0016008c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00160090:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00160094:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_00160098:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0016009c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001600a0:;
    {
        cpu->r[2] = 0x0000001fu;
    }
L_001600a4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001600a8:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001600ac:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001600b0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_001600b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_001600b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001600bc:;
    {
        cpu->r[14] = 0x001600c0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001600c0:;
    {
        cpu->r[3] = 0x00001a90u;
    }
L_001600c4:;
    {
        wr32(cpu->r[0], cpu->r[10]);
    }
L_001600c8:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_001600cc:;
    {
        cpu->r[3] = 0x00000514u;
    }
L_001600d0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_001600d4:;
    {
        cpu->r[3] = 0x00001388u;
    }
L_001600d8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_001600dc:;
    {
        cpu->r[3] = 0x00001b58u;
    }
L_001600e0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001600e4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_001600e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_001600ec:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001600f0:;
    {
        cpu->r[14] = 0x001600f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001600f4:;
    {
        cpu->r[3] = 0x00000405u;
    }
L_001600f8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[9]);
    }
L_001600fc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00160100:;
    {
        cpu->r[3] = 0x0000070eu;
    }
L_00160104:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00160108:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0016010c:;
    {
        cpu->r[3] = 0x00001496u;
    }
L_00160110:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00160114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160118:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0016011c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_00160120:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00160124:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_00160128:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0016012c:;
    {
        cpu->r[14] = 0x00160130u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160130:;
    {
        cpu->r[2] = 0x00000545u;
    }
L_00160134:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00160138:;
    {
        wr8(cpu->r[13] + + 0x51u, cpu->r[8]);
    }
L_0016013c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00160144u + + 0xa4u);
    }
L_00160140:;
    {
        cpu->r[12] = 0x00000021u;
    }
L_00160144:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00160148:;
    {
        wr8(cpu->r[13] + + 0x8cu, cpu->r[5]);
    }
L_0016014c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00160154u + + 0x98u);
    }
L_00160150:;
    {
        wr8(cpu->r[13] + + 0x50u, cpu->r[8]);
    }
L_00160154:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00160158:;
    {
        wr8(cpu->r[13] + + 0x52u, cpu->r[5]);
    }
L_0016015c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00160164u + + 0x8cu);
    }
L_00160160:;
    {
        wr8(cpu->r[13] + + 0x80u, cpu->r[5]);
    }
L_00160164:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00160168:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0016016c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00160170:;
    {
        cpu->r[2] = 0x0000083cu;
    }
L_00160174:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00160178:;
    {
        cpu->r[2] = 0x0000106eu;
    }
L_0016017c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00160180:;
    {
        cpu->r[2] = 0x0000175eu;
    }
L_00160184:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00160188:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0016018c:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_00160190:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00160194:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_00160198:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_0016019c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001601a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001601a4:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_001601a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001601ac:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_001601b0:;
    {
        cpu->r[12] = 0x00001403u;
    }
L_001601b4:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_001601b8:;
    {
        cpu->r[12] = 0x000010cbu;
    }
L_001601bc:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_001601c0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_001601c4:;
    {
        cpu->r[14] = 0x001601c8u; fn_00190b44(cpu);
    }
L_001601c8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001601cc:;
    {
        cpu->r[14] = 0x001601d0u; fn_001908d0(cpu);
    }
L_001601d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_001601d4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001601d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001601dcu)) return;
    }
}

/* _ZN4CCar16Init4CylNaSoundsEv @ 001601f4 (arm) */
void fn_001601f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001601f4:;
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
L_001601f8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001601fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000ecu, 1, 0);
    }
L_00160200:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00160208u + + 0x2bcu);
    }
L_00160204:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00160208:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016020c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00160210:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00160214:;
    {
        cpu->r[14] = 0x00160218u; fn_0018eac0(cpu);
    }
L_00160218:;
    {
        cpu->r[2] = 0x00001e3cu;
    }
L_0016021c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_00160220:;
    {
        cpu->r[6] = 0x00001e24u;
    }
L_00160224:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_00160228:;
    {
        cpu->r[2] = 0x00001e20u;
    }
L_0016022c:;
    {
        cpu->r[10] = 0x000003e8u;
    }
L_00160230:;
    {
        cpu->r[1] = 0x00001e2du;
    }
L_00160234:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[10]);
    }
L_00160238:;
    {
        cpu->r[2] = 0x00001e28u;
    }
L_0016023c:;
    {
        cpu->r[8] = 0x00002215u;
    }
L_00160240:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00160244:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00160248:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0016024c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[8]);
    }
L_00160250:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00160258u + + 0x270u);
    }
L_00160254:;
    {
        wr8(cpu->r[13] + + 0xe0u, cpu->r[12]);
    }
L_00160258:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016025c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00160260:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00160264:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00160268:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0016026c:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00160270:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00160274:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00160278:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0016027c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00160280:;
    {
        cpu->r[11] = 0x00000bb8u;
    }
L_00160284:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_00160288:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_0016028c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00160290:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00160294:;
    {
        cpu->r[14] = 0x00160298u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160298:;
    {
        cpu->r[2] = 0x00000019u;
    }
L_0016029c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[9]);
    }
L_001602a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001602a4:;
    {
        cpu->r[2] = 0x0000001au;
    }
L_001602a8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[9]);
    }
L_001602ac:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001602b0:;
    {
        cpu->r[2] = 0x0000001cu;
    }
L_001602b4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001602b8:;
    {
        cpu->r[2] = 0x0000001bu;
    }
L_001602bc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001602c0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_001602c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001602c8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001602cc:;
    {
        cpu->r[14] = 0x001602d0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001602d0:;
    {
        cpu->r[2] = 0x000007d0u;
    }
L_001602d4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[8]);
    }
L_001602d8:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001602dc:;
    {
        cpu->r[2] = 0x00001f52u;
    }
L_001602e0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[11]);
    }
L_001602e4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001602e8:;
    {
        cpu->r[2] = 0x00001194u;
    }
L_001602ec:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001602f0:;
    {
        cpu->r[2] = 0x00001964u;
    }
L_001602f4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001602f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_001602fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00160300:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00160304:;
    {
        cpu->r[14] = 0x00160308u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160308:;
    {
        cpu->r[2] = 0x00000887u;
    }
L_0016030c:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_00160310:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00160314:;
    {
        cpu->r[2] = 0x00000d9eu;
    }
L_00160318:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0016031c:;
    {
        cpu->r[2] = 0x00001360u;
    }
L_00160320:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00160324:;
    {
        cpu->r[2] = 0x0000191cu;
    }
L_00160328:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0016032c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160330:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_00160334:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 0);
    }
L_00160338:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0016033c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00160340:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00160344:;
    {
        cpu->r[14] = 0x00160348u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160348:;
    {
        cpu->r[1] = 0x00000af3u;
    }
L_0016034c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00160350:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00160354:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00160358:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0016035c:;
    {
        cpu->r[1] = 0x00001027u;
    }
L_00160360:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00160364:;
    {
        cpu->r[1] = 0x00001644u;
    }
L_00160368:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0016036c:;
    {
        cpu->r[1] = 0x00001b49u;
    }
L_00160370:;
    {
        wr32(cpu->r[2] + + 0xcu, cpu->r[1]);
    }
L_00160374:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160378:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016037c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00160380:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 0);
    }
L_00160384:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_00160388:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0016038c:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[1]);
    }
L_00160390:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_00160394:;
    {
        cpu->r[14] = 0x00160398u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160398:;
    {
        cpu->r[3] = 0x00000014u;
    }
L_0016039c:;
    {
        cpu->r[2] = 0x00000012u;
    }
L_001603a0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_001603a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001603a8:;
    {
        cpu->r[2] = 0x00000017u;
    }
L_001603ac:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001603b0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001603b4:;
    {
        cpu->r[2] = 0x00000015u;
    }
L_001603b8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001603bc:;
    {
        cpu->r[2] = 0x0000001bu;
    }
L_001603c0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001603c4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_001603c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001603cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001603d0:;
    {
        cpu->r[14] = 0x001603d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001603d4:;
    {
        cpu->r[2] = 0x00001964u;
    }
L_001603d8:;
    {
        cpu->r[3] = 0x00001194u;
    }
L_001603dc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001603e0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[8]);
    }
L_001603e4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[11]);
    }
L_001603e8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001603ec:;
    {
        cpu->r[3] = 0x00001f40u;
    }
L_001603f0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001603f4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_001603f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001603fc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00160400:;
    {
        cpu->r[14] = 0x00160404u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160404:;
    {
        cpu->r[3] = 0x0000051du;
    }
L_00160408:;
    {
        wr32(cpu->r[0], cpu->r[5]);
    }
L_0016040c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00160410:;
    {
        cpu->r[3] = 0x00000b96u;
    }
L_00160414:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00160418:;
    {
        cpu->r[3] = 0x00000f07u;
    }
L_0016041c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00160420:;
    {
        cpu->r[3] = 0x000013ffu;
    }
L_00160424:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00160428:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0016042c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_00160430:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_00160434:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00160438:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_0016043c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00160440:;
    {
        cpu->r[14] = 0x00160444u; imp__Znaj(cpu); /* _Znaj */
    }
L_00160444:;
    {
        cpu->r[2] = 0x00000774u;
    }
L_00160448:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0016044c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00160450:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00160454:;
    {
        wr8(cpu->r[13] + + 0x94u, cpu->r[5]);
    }
L_00160458:;
    {
        wr8(cpu->r[13] + + 0x58u, cpu->r[5]);
    }
L_0016045c:;
    {
        wr8(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_00160460:;
    {
        wr8(cpu->r[13] + + 0x88u, cpu->r[5]);
    }
L_00160464:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00160468:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0016046c:;
    {
        cpu->r[2] = 0x00000d80u;
    }
L_00160470:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00160474:;
    {
        cpu->r[2] = 0x000010adu;
    }
L_00160478:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0016047c:;
    {
        cpu->r[2] = 0x000016e3u;
    }
L_00160480:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00160484:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00160488:;
    {
        cpu->r[0] = 0x00001e10u;
    }
L_0016048c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_00160490:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000019u, 1, 0);
    }
L_00160494:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_00160498:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0016049c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001604a0:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_001604a4:;
    {
        cpu->r[2] = 0x0000001cu;
    }
L_001604a8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[2]);
    }
L_001604ac:;
    {
        cpu->r[14] = 0x001604b0u; fn_00190b44(cpu);
    }
L_001604b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001604b4:;
    {
        cpu->r[14] = 0x001604b8u; fn_001908d0(cpu);
    }
L_001604b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_001604bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001604c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001604c4u)) return;
    }
}

/* _ZN4CCar20GetCarHighRPMSoundIdEv @ 001604cc (arm) */
void fn_001604cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001604cc:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_001604d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001604d4:;
    {
        return fn_0018eddc(cpu);
    }
}

/* _ZN4CCar16setPitchCallbackEiif @ 001604d8 (arm) */
void fn_001604d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001604d8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001604dc:;
    {
        cpu->r[12] = rd32(0x001604e4u + + 0x3cu);
    }
L_001604e0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001604e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001604e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001604ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x001604f4u, cpu->r[12], 0, 0);
    }
L_001604f0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00160518;
        }
    }
L_001604f4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001604f8:;
    {
        cpu->r[0] = rd32(0x00160500u + + 0x24u);
    }
L_001604fc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00160500:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00160504:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00160508:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016050c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160510:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00160514:;
    {
        cpu->r[14] = 0x00160518u; fn_0018bf2c(cpu);
    }
L_00160518:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016051c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160520u)) return;
    }
}

/* _ZN4CCar17setVolumeCallbackEiif @ 00160528 (arm) */
void fn_00160528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160528:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0016052c:;
    {
        cpu->r[12] = rd32(0x00160534u + + 0x3cu);
    }
L_00160530:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00160534:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00160538:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016053c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00160544u, cpu->r[12], 0, 0);
    }
L_00160540:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00160568;
        }
    }
L_00160544:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00160548:;
    {
        cpu->r[0] = rd32(0x00160550u + + 0x24u);
    }
L_0016054c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00160550:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00160554:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00160558:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016055c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160560:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00160564:;
    {
        cpu->r[14] = 0x00160568u; fn_0018bfec(cpu);
    }
L_00160568:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016056c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160570u)) return;
    }
}

/* _ZN4CCar17stopSoundCallbackEii @ 00160578 (arm) */
void fn_00160578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160578:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0016057c:;
    {
        cpu->r[12] = rd32(0x00160584u + + 0x5cu);
    }
L_00160580:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00160584:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00160588:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016058c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00160594u, cpu->r[12], 0, 0);
    }
L_00160590:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001605d8;
        }
    }
L_00160594:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00160598:;
    {
        cpu->r[0] = rd32(0x001605a0u + + 0x44u);
    }
L_0016059c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001605a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001605a4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001605a8:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001605ac:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001605b0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001605b4:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001605b8:;
    {
        cpu->r[14] = 0x001605bcu; fn_0018bfec(cpu);
    }
L_001605bc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001605c0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001605c4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001605c8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001605cc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001605d0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001605d4:;
    {
        cpu->r[14] = 0x001605d8u; fn_0018cd24(cpu);
    }
L_001605d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001605dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001605e0u)) return;
    }
}

/* _ZN4CCar22isSoundPlayingCallbackEii @ 001605e8 (arm) */
void fn_001605e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001605e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001605ec:;
    {
        cpu->r[12] = rd32(0x001605f4u + + 0x28u);
    }
L_001605f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001605f8u, cpu->r[12], 0, 0);
    }
L_001605f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00160614;
        }
    }
L_001605f8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001605fc:;
    {
        cpu->r[0] = rd32(0x00160604u + + 0x1cu);
    }
L_00160600:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00160604:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00160608:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016060c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160610:;
    {
        return fn_0018c1bc(cpu);
    }
L_00160614:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00160618:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CCar19IsNitroSoundPlayingEv @ 00160624 (arm) */
void fn_00160624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160624:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00160628:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016062c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00160630:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00160634:;
    {
        cpu->r[1] = 0x0000006fu;
    }
L_00160638:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016063c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160640:;
    {
        cpu->r[14] = 0x00160644u; fn_000fd224(cpu);
    }
L_00160644:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00160648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160654;
        }
    }
L_0016064c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00160650:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160654u)) return;
    }
L_00160654:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00160658:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016065c:;
    {
        cpu->r[1] = 0x00000070u;
    }
L_00160660:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00160664:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160668:;
    {
        cpu->r[14] = 0x0016066cu; fn_000fd224(cpu);
    }
L_0016066c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00160670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016064c;
        }
    }
L_00160674:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00160678:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016067c:;
    {
        cpu->r[1] = 0x00000071u;
    }
L_00160680:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00160684:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160688:;
    {
        cpu->r[14] = 0x0016068cu; fn_000fd224(cpu);
    }
L_0016068c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00160690:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00160694:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160698u)) return;
    }
}

/* _ZN4CCar24UpdateCarDestroyedSoundsEv @ 00160698 (arm) */
void fn_00160698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160698:;
    {
        cpu->r[3] = 0x000018c8u;
    }
L_0016069c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001606a0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001606a4:;
    {
        cpu->r[4] = rd32(0x001606acu + + 0xa0u);
    }
L_001606a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001606ac:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_001606b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001606b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001606bcu, cpu->r[4], 0, 0);
    }
L_001606b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001606e0;
        }
    }
L_001606bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_001606c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001606c4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001606c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001606cc:;
    {
        cpu->r[14] = 0x001606d0u; fn_000fd224(cpu);
    }
L_001606d0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001606d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001606e0;
        }
    }
L_001606d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001606dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001606e0u)) return;
    }
L_001606e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001606e4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001606e8:;
    {
        cpu->r[14] = 0x001606ecu; fn_000964c8(cpu);
    }
L_001606ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_001606f0:;
    {
        cpu->r[6] = 0x000018c8u;
    }
L_001606f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001606f8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001606fc:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x490u);
    }
L_00160700:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00160704:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00160708:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x0000007eu, 0, 0);
    }
L_0016070c:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_00160710:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00160714:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[12]);
    }
L_00160718:;
    {
        cpu->r[14] = 0x0016071cu; fn_000fd248(cpu);
    }
L_0016071c:;
    {
        cpu->r[3] = rd32(0x00160724u + + 0x2cu);
    }
L_00160720:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00160724:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00160728:;
    {
        cpu->r[14] = 0x0016072cu; fn_00096b6c(cpu);
    }
L_0016072c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00160730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001606d8;
        }
    }
L_00160734:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00160738:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_0016073c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00160740:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00160744:;
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
L_00160748:;
    {
        return fn_00099454(cpu);
    }
}

/* _ZN7CStrobe12UpdateStrobeEv @ 00160754 (arm) */
void fn_00160754(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160754:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_00160758:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0016075c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160760:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00160764:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160768u)) return;
        }
    }
L_00160768:;
    {
        cpu->r[14] = 0x0016076cu; fn_0009b4d0(cpu);
    }
L_0016076c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00160770:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00160774:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00160778:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0016077c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001607dc;
        }
    }
L_00160780:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00160784:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001607ac;
        }
    }
L_00160788:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016078c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00160790:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_00160794:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160798u)) return;
        }
    }
L_00160798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0016079c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001607a0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001607a4:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_001607a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001607acu)) return;
    }
L_001607ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001607b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001607b4:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001607b8u)) return;
        }
    }
L_001607b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001607bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001607c0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001607c4:;
    {
        wr8(cpu->r[4], cpu->r[2]);
    }
L_001607c8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001607cc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001607d0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001607d4:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[3]);
    }
L_001607d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001607dcu)) return;
    }
L_001607dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001607e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001607e4:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001607e8u)) return;
        }
    }
L_001607e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001607ec:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x10u);
    }
L_001607f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001607f4:;
    {
        cpu->r[2] = rd8(cpu->r[4]);
    }
L_001607f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001607fc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00160800:;
    {
        uint32_t v = cpu->r[2] ^ 0x00000001u; cpu->r[2] = v;
    }
L_00160804:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00160808:;
    {
        wr8(cpu->r[4], cpu->r[2]);
    }
L_0016080c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00160810:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[4], cpu->r[3]);
        }
    }
L_00160814:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_00160818:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_0016081c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160820u)) return;
    }
}

/* _ZN7CStrobe5StartEhjjj @ 00160820 (arm) */
void fn_00160820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160820:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00160824:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00160828:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016082c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00160830:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00160834:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00160838:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_0016083c:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_00160840:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00160844:;
    {
        wr8(cpu->r[4], cpu->r[0]);
    }
L_00160848:;
    {
        cpu->r[14] = 0x0016084cu; fn_0009b4d0(cpu);
    }
L_0016084c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00160850:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00160854:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_00160858:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_0016085c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00160860:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00160864:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00160868u)) return;
    }
}

/* _ZN4CCar17GetNitroTimeTotalEv @ 00160868 (arm) */
void fn_00160868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160868:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_0016086c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00160870:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00160874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00160878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001608c0;
        }
    }
L_0016087c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00160880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001608a8;
        }
    }
L_00160884:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00160888:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0016088c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160890u)) return;
        }
    }
L_00160890:;
    {
        cpu->r[0] = 0x00000009u;
    }
L_00160894:;
    {
        cpu->r[14] = 0x00160898u; fn_00093f34(cpu);
    }
L_00160898:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016089c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001608a0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001608a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001608a8u)) return;
    }
L_001608a8:;
    {
        cpu->r[0] = 0x00000013u;
    }
L_001608ac:;
    {
        cpu->r[14] = 0x001608b0u; fn_00093f34(cpu);
    }
L_001608b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001608b4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001608b8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001608bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001608c0u)) return;
    }
L_001608c0:;
    {
        cpu->r[0] = 0x0000000eu;
    }
L_001608c4:;
    {
        cpu->r[14] = 0x001608c8u; fn_00093f34(cpu);
    }
L_001608c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001608cc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001608d0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001608d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001608d8u)) return;
    }
}

/* _ZN4CCar30UpdateFrontalCollisionVelocityEPK10RoadStructR11CMultiArrayIPS_E @ 001608d8 (arm) */
void fn_001608d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001608d8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1a4u);
    }
L_001608dc:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_001608e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001608e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_001608e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001608ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001608f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x19cu);
    }
L_001608f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001608f8:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[2]);
    }
L_001608fc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00160900:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00160904:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000005f0u, 0, 0);
    }
L_00160908:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0016090c:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 2u, &shc), cpu->r[1], 1, 0);
    }
L_00160910:;
    {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[3]);
    }
L_00160914:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160918:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0016091c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[3]);
        }
    }
L_00160920:;
    {
        cpu->r[14] = 0x00160924u; fn_0018572c(cpu);
    }
L_00160924:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5fcu);
    }
L_00160928:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016092c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
        }
    }
L_00160930:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00160938u + + 0x98u);
        }
    }
L_00160934:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_00160938:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x19cu);
        }
    }
L_0016093c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
        }
    }
L_00160940:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x19cu);
        }
    }
L_00160944:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_00160948:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_0016094c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x600u);
    }
L_00160950:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00160954:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x604u);
    }
L_00160958:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vdiv(cpu, 15, 14, 15);
        }
    }
L_0016095c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00160960:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1a0u);
    }
L_00160964:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00160968:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0016096c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00160970:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00160974:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_00160978:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0016097c:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00160980:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00160984:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00160988:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0016098c:;
    {
        wr32(cpu->r[4] + + 0x5fcu, cpu->r[3]);
    }
L_00160990:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00160994:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00160998:;
    {
        wr32(cpu->r[4] + + 0x600u, cpu->r[2]);
    }
L_0016099c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001609a0:;
    {
        wr32(cpu->r[4] + + 0x604u, cpu->r[1]);
    }
L_001609a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001609c0;
        }
    }
L_001609a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001609ac:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001609b0u)) return;
        }
    }
L_001609b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001609b4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001609b8u)) return;
        }
    }
L_001609b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001609bc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001609c0u)) return;
        }
    }
L_001609c0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001609c4:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[3]);
    }
L_001609c8:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[3]);
    }
L_001609cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001609d0u)) return;
    }
}

/* _ZN4CCar24DEBUG_OUT_COP_STATE_NAMEEPw @ 001609d4 (arm) */
void fn_001609d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001609d4:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_001609d8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001609dc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001609e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001609e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001609e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001609ec:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001609f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160a44;
        }
    }
L_001609f4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001609f8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001609fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00160a00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160a44;
        }
    }
L_00160a04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00160a08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160a80;
        }
    }
L_00160a0c:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00160a10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00160a14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00160a18:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00160ac0;
        case 1: goto L_00160adc;
        case 2: goto L_00160af8;
        case 3: goto L_00160b14;
        case 4: goto L_00160b30;
        case 5: goto L_00160b4c;
        case 6: goto L_00160b68;
        case 7: goto L_00160b84;
        case 8: goto L_00160a88;
        default: guest_unimplemented(cpu, 0x00160a18u); return; }
        }
    }
L_00160a1c:;
    {
        goto L_00160aa4;
    }
L_00160a44:;
    {
        cpu->r[1] = rd32(0x00160a4cu + + 0x154u);
    }
L_00160a48:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00160a4c:;
    {
        cpu->r[2] = rd32(0x00160a54u + + 0x150u);
    }
L_00160a50:;
    {
        cpu->r[14] = 0x00002bd0u;
    }
L_00160a54:;
    {
        cpu->r[3] = rd32(0x00160a5cu + + 0x14cu);
    }
L_00160a58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00160a60u, cpu->r[1], 0, 0);
    }
L_00160a5c:;
    {
        cpu->r[12] = rd32(0x00160a64u + + 0x148u);
    }
L_00160a60:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160a68u, cpu->r[2], 0, 0);
    }
L_00160a64:;
    {
        cpu->r[3] = add_flags(cpu, 0x00160a6cu, cpu->r[3], 0, 0);
    }
L_00160a68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00160a6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00160a74u, cpu->r[12], 0, 0);
    }
L_00160a70:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00160a74:;
    {
        cpu->r[14] = 0x00160a78u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00160a78:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00160a7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160a0c;
        }
    }
L_00160a80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160a84:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00160a88u)) return;
    }
L_00160a88:;
    {
        cpu->r[2] = rd32(0x00160a90u + + 0x120u);
    }
L_00160a8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160a90:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160a94:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160a9cu, cpu->r[2], 0, 0);
    }
L_00160a98:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160a9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160aa0:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160aa4:;
    {
        cpu->r[2] = rd32(0x00160aacu + + 0x108u);
    }
L_00160aa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160aac:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160ab0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160ab8u, cpu->r[2], 0, 0);
    }
L_00160ab4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160ab8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160abc:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160ac0:;
    {
        cpu->r[2] = rd32(0x00160ac8u + + 0xf0u);
    }
L_00160ac4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160ac8:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160acc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160ad4u, cpu->r[2], 0, 0);
    }
L_00160ad0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160ad4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160ad8:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160adc:;
    {
        cpu->r[2] = rd32(0x00160ae4u + + 0xd8u);
    }
L_00160ae0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160ae4:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160ae8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160af0u, cpu->r[2], 0, 0);
    }
L_00160aec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160af0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160af4:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160af8:;
    {
        cpu->r[2] = rd32(0x00160b00u + + 0xc0u);
    }
L_00160afc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b00:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b04:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b0cu, cpu->r[2], 0, 0);
    }
L_00160b08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b10:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160b14:;
    {
        cpu->r[2] = rd32(0x00160b1cu + + 0xa8u);
    }
L_00160b18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b1c:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b20:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b28u, cpu->r[2], 0, 0);
    }
L_00160b24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b2c:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160b30:;
    {
        cpu->r[2] = rd32(0x00160b38u + + 0x90u);
    }
L_00160b34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b38:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b44u, cpu->r[2], 0, 0);
    }
L_00160b40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b48:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160b4c:;
    {
        cpu->r[2] = rd32(0x00160b54u + + 0x78u);
    }
L_00160b50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b54:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b58:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b60u, cpu->r[2], 0, 0);
    }
L_00160b5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b60:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b64:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160b68:;
    {
        cpu->r[2] = rd32(0x00160b70u + + 0x60u);
    }
L_00160b6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b70:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b74:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b7cu, cpu->r[2], 0, 0);
    }
L_00160b78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b80:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
L_00160b84:;
    {
        cpu->r[2] = rd32(0x00160b8cu + + 0x48u);
    }
L_00160b88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00160b8c:;
    {
        cpu->r[1] = 0x00000064u;
    }
L_00160b90:;
    {
        cpu->r[2] = add_flags(cpu, 0x00160b98u, cpu->r[2], 0, 0);
    }
L_00160b94:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160b98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00160b9c:;
    {
        imp_swprintf(cpu); /* tail swprintf */ return;
    }
}

/* _ZN4CCar13CleanEmittersEv @ 00160bd8 (arm) */
void fn_00160bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160bd8:;
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
L_00160bdc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00160be0:;
    {
        cpu->r[6] = rd32(0x00160be8u + + 0x64u);
    }
L_00160be4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00160be8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00160bec:;
    {
        cpu->r[7] = 0x00008c4cu;
    }
L_00160bf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00160bf4:;
    {
        cpu->r[11] = rd32(0x00160bfcu + + 0x54u);
    }
L_00160bf8:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_00160bfc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_00160c00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00160c04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000002u;
        }
    }
L_00160c08:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_00160c0c:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_00160c10:;
    {
        cpu->r[6] = add_flags(cpu, 0x00160c18u, cpu->r[6], 0, 0);
    }
L_00160c14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x56cu);
    }
L_00160c18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00160c1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00160c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160c3c;
        }
    }
L_00160c24:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_00160c28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00160c2c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00160c30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00160c34:;
    {
        cpu->r[14] = 0x00160c38u; fn_00158fe8(cpu);
    }
L_00160c38:;
    {
        wr32(cpu->r[4] + + 0x56cu, cpu->r[10]);
    }
L_00160c3c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_00160c40:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00160c44:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00160c14;
        }
    }
L_00160c48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00160c4cu)) return;
    }
}

/* _ZN4CCar19UpdateNitroEmittersEv @ 00160c54 (arm) */
void fn_00160c54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160c54:;
    {
        cpu->r[3] = rd32(0x00160c5cu + + 0x148u);
    }
L_00160c58:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_00160c5c:;
    {
        cpu->r[1] = rd32(0x00160c64u + + 0x144u);
    }
L_00160c60:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00160c64:;
    {
        cpu->r[3] = add_flags(cpu, 0x00160c6cu, cpu->r[3], 0, 0);
    }
L_00160c68:;
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
L_00160c6c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00160c70:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00160c74:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00160c78:;
    {
        cpu->r[0] = 0x00001788u;
    }
L_00160c7c:;
    {
        cpu->r[10] = 0x00008c4cu;
    }
L_00160c80:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00160c84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00160c88:;
    {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00160c8c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00160c90:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[0]);
    }
L_00160c94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00160c98:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00160c9c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00160ca0:;
    {
        { uint32_t v = cpu->r[0] & 0x04000000u; set_nz(cpu, v); }
    }
L_00160ca4:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_00160ca8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_00160cac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000002u;
        }
    }
L_00160cb0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_00160cb4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_00160cb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160cbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000018f0u;
        }
    }
L_00160cc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = rd32(cpu->r[7] + cpu->r[3]);
        }
    }
L_00160cc4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00007800u, 0, 0);
    }
L_00160cc8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000052u, 0, 0);
    }
L_00160ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x568u);
    }
L_00160cd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00160cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160d44;
        }
    }
L_00160cd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x56cu);
    }
L_00160cdc:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 1);
    }
L_00160ce0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00160ce4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00160ce8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00160cec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160d5c;
        }
    }
L_00160cf4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00160cf8:;
    {
        wr32(cpu->r[4] + + 0x568u, cpu->r[6]);
    }
L_00160cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160d44;
        }
    }
L_00160d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00160d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160d78;
        }
    }
L_00160d08:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00160d0c:;
    {
        cpu->r[14] = 0x00160d10u; fn_00158868(cpu);
    }
L_00160d10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x56cu);
    }
L_00160d14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00160d18:;
    {
        goto L_00160d20;
    }
L_00160d1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x56cu);
    }
L_00160d20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00160d24:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00160d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00160d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160d3c;
        }
    }
L_00160d30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00160d34:;
    {
        cpu->r[14] = 0x00160d38u; fn_001584cc(cpu);
    }
L_00160d38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00160d3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00160d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160d1c;
        }
    }
L_00160d44:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00160d48:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00160d4c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[5], 1, 1);
    }
L_00160d50:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00160ccc;
        }
    }
L_00160d54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00160d58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00160d5cu)) return;
    }
L_00160d5c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00160d60:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_00160d64:;
    {
        cpu->r[14] = 0x00160d68u; fn_00158fe8(cpu);
    }
L_00160d68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00160d6c:;
    {
        wr32(cpu->r[4] + + 0x56cu, cpu->r[3]);
    }
L_00160d70:;
    {
        wr32(cpu->r[4] + + 0x568u, cpu->r[3]);
    }
L_00160d74:;
    {
        goto L_00160d44;
    }
L_00160d78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x58cu);
    }
L_00160d7c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00160d80:;
    {
        cpu->r[0] = rd32(cpu->r[11] + cpu->r[10]);
    }
L_00160d84:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00160d88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00004700u, 0, 0);
    }
L_00160d8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002au, 0, 0);
    }
L_00160d90:;
    {
        cpu->r[2] = rd32(cpu->r[11] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00160d94:;
    {
        cpu->r[14] = 0x00160d98u; fn_00159698(cpu);
    }
L_00160d98:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00160d9c:;
    {
        wr32(cpu->r[4] + + 0x56cu, cpu->r[0]);
    }
L_00160da0:;
    {
        goto L_00160d14;
    }
}

/* _ZN4CCar14StopNitroAudioEv @ 00160dac (arm) */
void fn_00160dac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160dac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00160db0:;
    {
        cpu->r[3] = 0x000018e0u;
    }
L_00160db4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00160db8:;
    {
        cpu->r[4] = 0x0000006fu;
    }
L_00160dbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00160dc0:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00160dc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00160dc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00160dcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00160dd0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00160dd4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00160dd8:;
    {
        cpu->r[14] = 0x00160ddcu; fn_000fd224(cpu);
    }
L_00160ddc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00160de0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00160de4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00160de8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160df8;
        }
    }
L_00160dec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00160df0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00160df4:;
    {
        cpu->r[14] = 0x00160df8u; fn_000fd218(cpu);
    }
L_00160df8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000072u, 1, 1);
    }
L_00160dfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160dc4;
        }
    }
L_00160e00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00160e04u)) return;
    }
}

/* _ZN4CCar11AddRotationERK8Vector4s @ 00160e04 (arm) */
void fn_00160e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160e04:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00160e08:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00160e0c:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_00160e10:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00160e14:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x84u);
    }
L_00160e18:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x88u);
    }
L_00160e1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8cu);
    }
L_00160e20:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_00160e24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00160e28:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[4]);
    }
L_00160e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00160e30:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[2]);
    }
L_00160e34:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[1]);
    }
L_00160e38:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00160e3c:;
    {
        return fn_00174970(cpu);
    }
}

/* _ZN4CCar33UpdateMultiplayerBeforeCollisionsEPK10RoadStruct @ 00160e40 (arm) */
void fn_00160e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00160e40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x33cu);
    }
L_00160e44:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00160e48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160e4c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00160e54u + + 0x248u);
        }
    }
L_00160e50:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_00160e54:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00160e58:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00160e5c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x33cu, cpu->r[3]);
        }
    }
L_00160e60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_00160e64:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00160e68:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00160e6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00160e70:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[2] & ~ 0x02000000u; cpu->r[2] = v;
        }
    }
L_00160e74:;
    {
        cpu->r[5] = rd32(0x00160e7cu + + 0x224u);
    }
L_00160e78:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_00160e7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00160e80:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00160e84:;
    {
        cpu->r[14] = 0x00160e88u; fn_00160c54(cpu);
    }
L_00160e88:;
    {
        cpu->r[3] = rd32(0x00160e90u + + 0x214u);
    }
L_00160e8c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00160e94u, cpu->r[5], 0, 0);
    }
L_00160e90:;
    {
        cpu->r[2] = 0x000063e8u;
    }
L_00160e94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58cu);
    }
L_00160e98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00160e9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000078u, 0, 0);
    }
L_00160ea0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00160ea4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00160ea8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4dcu);
    }
L_00160eac:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00160eb0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00160eb4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00160eb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00160f68;
        }
    }
L_00160ebc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00160ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00160f68;
        }
    }
L_00160ec4:;
    {
        cpu->r[2] = 0x00001cedu;
    }
L_00160ec8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00160ecc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00160ed0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160ef4;
        }
    }
L_00160ed4:;
    {
        cpu->r[2] = 0x00001740u;
    }
L_00160ed8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00160edc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00160ee0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160ef4;
        }
    }
L_00160ee4:;
    {
        cpu->r[2] = 0x00005f68u;
    }
L_00160ee8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00160eec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00160ef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161040;
        }
    }
L_00160ef4:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_00160ef8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00160efc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00160f00:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00160f04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161028;
        }
    }
L_00160f08:;
    {
        cpu->r[3] = 0x00001cf4u;
    }
L_00160f0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00160f10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00160f14:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_00160f18:;
    {
        cpu->r[14] = 0x00160f1cu; fn_00174970(cpu);
    }
L_00160f1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00160f20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00160f24:;
    {
        cpu->r[14] = 0x00160f28u; fn_001745cc(cpu);
    }
L_00160f28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00160f2c:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[3]);
    }
L_00160f30:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00160f34:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00160f38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00160f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00160f60;
        }
    }
L_00160f40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00160f44:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00160f48:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_00160f4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00160f50:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00160f54:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00160f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00160f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161004;
        }
    }
L_00160f60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00160f64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00160f68u)) return;
    }
L_00160f68:;
    {
        cpu->r[3] = 0x00001cccu;
    }
L_00160f6c:;
    {
        cpu->r[2] = 0x00001cd0u;
    }
L_00160f70:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00160f74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00160f78:;
    {
        cpu->r[3] = 0x00001cc8u;
    }
L_00160f7c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00160f80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00160f84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00160f88:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
    }
L_00160f8c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00160f90:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00160f94:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00160f98:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_00160f9c:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00160fa0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00160fa4:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 0);
    }
L_00160fa8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00160fac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_00160fb0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[2];
        }
    }
L_00160fb4:;
    {
        uint32_t v = cpu->r[14] ^ shifter(cpu->r[14], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00160fb8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_00160fbc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00160fc0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_00160fc4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000190u, 1, 1);
    }
L_00160fc8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[0]);
        }
    }
L_00160fcc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[1]);
        }
    }
L_00160fd0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[3]);
        }
    }
L_00160fd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00160f08;
        }
    }
L_00160fd8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00160fdc:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[0]);
    }
L_00160fe0:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[1]);
    }
L_00160fe4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00160fe8:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0x3d4u;
        wr32(cpu->r[2] + + 0x3d4u, cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_00160fec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00160ff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000001b0u, 0, 0);
    }
L_00160ff4:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00160ff8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00160ffc:;
    {
        cpu->r[14] = 0x00161000u; fn_0017c2c4(cpu);
    }
L_00161000:;
    {
        goto L_00160f08;
    }
L_00161004:;
    {
        cpu->r[2] = 0x00001674u;
    }
L_00161008:;
    {
        cpu->r[3] = 0x0000167cu;
    }
L_0016100c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00161010:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00161014:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00161018:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_0016101c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00161020:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00161024:;
    {
        goto L_00160f60;
    }
L_00161028:;
    {
        cpu->r[3] = rd32(0x00161030u + + 0x78u);
    }
L_0016102c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00161030:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00161034:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00161038:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0016103c:;
    {
        goto L_00160f08;
    }
L_00161040:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00161044:;
    {
        cpu->r[12] = 0x00000640u;
    }
L_00161048:;
    {
        cpu->r[8] = 0x00001d2cu;
    }
L_0016104c:;
    {
        cpu->r[2] = 0x000021d8u;
    }
L_00161050:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00161054:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00161058:;
    {
        cpu->r[3] = 0x00001d28u;
    }
L_0016105c:;
    {
        cpu->r[7] = 0x00001d30u;
    }
L_00161060:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00161064:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00161068:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[12] = v;
    }
L_0016106c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_00161070:;
    {
        cpu->r[14] = 0x00001cecu;
    }
L_00161074:;
    {
        cpu->r[14] = rd8(cpu->r[4] + cpu->r[14]);
    }
L_00161078:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[8]);
    }
L_0016107c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00161080:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00161084:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_00161088:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[7]);
    }
L_0016108c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00161090:;
    {
        cpu->r[14] = 0x00161094u; fn_000c7f18(cpu);
    }
L_00161094:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58cu);
    }
L_00161098:;
    {
        goto L_00160ef4;
    }
}

/* _ZN4CCar20IsShortcutEdgeAroundEv @ 001610ac (arm) */
void fn_001610ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001610ac:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001610b0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001610b4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001610b8:;
    {
        cpu->r[7] = 0x000001c2u;
    }
L_001610bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1acu);
    }
L_001610c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1b0u);
    }
L_001610c4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001610c8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_001610cc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_001610d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001610d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001610e8;
        }
    }
L_001610d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001610dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
        }
    }
L_001610e0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001610e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_001610e8:;
    {
        cpu->r[14] = 0x001610ecu; fn_00180c78(cpu);
    }
L_001610ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001610f0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001610f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1acu);
    }
L_001610f8:;
    {
        cpu->r[14] = 0x001610fcu; fn_00180c78(cpu);
    }
L_001610fc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[8] + cpu->r[7]);
    }
L_00161100:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00161104:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161140;
        }
    }
L_00161108:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1c4u);
    }
L_0016110c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00161110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161140;
        }
    }
L_00161114:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[7]);
    }
L_00161118:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016111c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161140;
        }
    }
L_00161120:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1c4u);
    }
L_00161124:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00161128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161140;
        }
    }
L_0016112c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00161130:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_00161134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001610bc;
        }
    }
L_00161138:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0016113c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161140u)) return;
    }
L_00161140:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00161144:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161148u)) return;
    }
}

/* _ZN4CCar12EnterAIStateEv @ 00161148 (arm) */
void fn_00161148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161148:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_0016114c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00161150:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00161154:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00161158:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016115c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00161160u)) return;
        }
    }
L_00161160:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00161164:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00161168:;
    {
        cpu->r[14] = 0x0016116cu; fn_000965cc(cpu);
    }
L_0016116c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00161170:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00161174:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00161178:;
    {
        wr32(cpu->r[4] + + 0x54cu, cpu->r[0]);
    }
L_0016117c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00161180u)) return;
    }
}

/* _ZNK4CCar29ImpactNeededToTakeDownTrafficERK11CTrafficCari @ 00161180 (arm) */
void fn_00161180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161180:;
    {
        uint32_t v = cpu->r[2] & 0x00000100u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00161184:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00161188:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0016118c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00161190:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001611b4;
        }
    }
L_00161194:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00161198:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016119c:;
    {
        cpu->r[14] = 0x001611a0u; fn_000965cc(cpu);
    }
L_001611a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001611a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000064u;
        }
    }
L_001611a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001611acu)) return;
        }
    }
L_001611ac:;
    {
        cpu->r[0] = (~0x80000000u);
    }
L_001611b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001611b4u)) return;
    }
L_001611b4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001611b8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001611bc:;
    {
        cpu->r[14] = 0x001611c4u;
    }
L_001611c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001611c4u)) return;
    }
L_001611c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001611c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001611cc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001611d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001611d4:;
    {
        cpu->r[14] = 0x001611dcu;
    }
L_001611d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001611dcu)) return;
    }
L_001611dc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001611e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161220;
        }
    }
L_001611e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001611e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001611ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001611f0:;
    {
        cpu->r[14] = 0x001611f8u;
    }
L_001611f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001611f8u)) return;
    }
L_001611f8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001611fc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00161200:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00161204:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161208:;
    {
        cpu->r[14] = 0x00161210u;
    }
L_0016120c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161210u)) return;
    }
L_00161210:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00161214:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001611ac;
        }
    }
L_00161218:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_0016121c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161220u)) return;
    }
L_00161220:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00161224:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00161228:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016122c:;
    {
        cpu->r[14] = 0x00161234u;
    }
L_00161230:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161234u)) return;
    }
L_00161234:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00161238:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016123c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00161240:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161244:;
    {
        cpu->r[14] = 0x0016124cu;
    }
L_00161248:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016124cu)) return;
    }
L_0016124c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00161250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016128c;
        }
    }
L_00161254:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00161258:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016125c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00161260:;
    {
        cpu->r[14] = 0x00161268u;
    }
L_00161264:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161268u)) return;
    }
L_00161268:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016126c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00161270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00161274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161278:;
    {
        cpu->r[14] = 0x00161280u;
    }
L_0016127c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161280u)) return;
    }
L_00161280:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00161284:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001611ac;
        }
    }
L_00161288:;
    {
        goto L_00161218;
    }
L_0016128c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00161290:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00161294:;
    {
        cpu->r[14] = 0x00161298u; fn_000964c8(cpu);
    }
L_00161298:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 31u, &shc), cpu->r[0], 1, 0);
    }
L_0016129c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003bu, 1, 1);
    }
L_001612a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161218;
        }
    }
L_001612a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001612a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001612ac:;
    {
        cpu->r[14] = 0x001612b0u; fn_000964c8(cpu);
    }
L_001612b0:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 31u, &shc), cpu->r[0], 1, 0);
    }
L_001612b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001612b8u)) return;
    }
}

/* _ZNK4CCar22ImpactNeededToTakeDownERK8CCarBasei @ 001612b8 (arm) */
void fn_001612b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001612b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001612bc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001612c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_001612c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001612c8:;
    {
        cpu->r[3] = rd32(0x001612d0u + + 0x1ccu);
    }
L_001612cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001612d0:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001612d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001612d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001612e0u, cpu->r[3], 0, 0);
    }
L_001612dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001612e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161368;
        }
    }
L_001612e4:;
    {
        cpu->r[0] = rd32(0x001612ecu + + 0x1b4u);
    }
L_001612e8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001612ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001612f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001612f4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001612f8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001612fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00161300:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00161304:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00161308:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016130c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00161310:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00161314:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00161318:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0016131c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00161320:;
    {
        { uint32_t v = cpu->r[5] & 0x00000002u; set_nz(cpu, v); }
    }
L_00161324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161330;
        }
    }
L_00161328:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016132c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016133c;
        }
    }
L_00161330:;
    {
        cpu->r[0] = (~0x80000000u);
    }
L_00161334:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00161338:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016133cu)) return;
    }
L_0016133c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00161340:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00161344:;
    {
        cpu->r[14] = 0x0016134cu;
    }
L_00161348:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016134cu)) return;
    }
L_0016134c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161350:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161378;
        }
    }
L_00161354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161358:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0016135c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00161360:;
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
L_00161364:;
    {
        return fn_00161180(cpu);
    }
L_00161368:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x498u);
    }
L_0016136c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00161370:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00161374:;
    {
        goto L_001612e4;
    }
L_00161378:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016137c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00161380:;
    {
        cpu->r[14] = 0x00161388u;
    }
L_00161384:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161388u)) return;
    }
L_00161388:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016138c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161464;
        }
    }
L_00161390:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00161394:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00161398:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0016139c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161330;
        }
    }
L_001613a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001613a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001613a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161330;
        }
    }
L_001613ac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001613b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161330;
        }
    }
L_001613b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001613b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161330;
        }
    }
L_001613bc:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_001613c0:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_001613c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001613c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016140c;
        }
    }
L_001613cc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001613d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001613d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_001613d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016141c;
        }
    }
L_001613dc:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_001613e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001613e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001613e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161330;
        }
    }
L_001613ec:;
    {
        uint32_t v = cpu->r[5] & 0x00000100u; cpu->r[6] = v;
    }
L_001613f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001613f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000003cu;
        }
    }
L_001613f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161334;
        }
    }
L_001613fc:;
    {
        { uint32_t v = cpu->r[5] & 0x00000010u; set_nz(cpu, v); }
    }
L_00161400:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000064u;
        }
    }
L_00161404:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000050u;
        }
    }
L_00161408:;
    {
        goto L_00161334;
    }
L_0016140c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00161410:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00161414:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00161418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001613ec;
        }
    }
L_0016141c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00161420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00161424:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00161428:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[5] & 0x00000100u; cpu->r[6] = v;
        }
    }
L_0016142c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161458;
        }
    }
L_00161430:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161434:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00161438:;
    {
        cpu->r[14] = 0x00161440u;
    }
L_0016143c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161440u)) return;
    }
L_00161440:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001613f0;
        }
    }
L_00161448:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0016144c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001613fc;
        }
    }
L_00161450:;
    {
        cpu->r[0] = 0x00000050u;
    }
L_00161454:;
    {
        goto L_00161334;
    }
L_00161458:;
    {
        uint32_t v = cpu->r[5] & 0x00000100u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_0016145c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161330;
        }
    }
L_00161460:;
    {
        goto L_00161430;
    }
L_00161464:;
    {
        cpu->r[1] = rd32(0x0016146cu + + 0x38u);
    }
L_00161468:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016146c:;
    {
        cpu->r[12] = rd32(0x00161474u + + 0x34u);
    }
L_00161470:;
    {
        cpu->r[14] = 0x000000ceu;
    }
L_00161474:;
    {
        cpu->r[2] = rd32(0x0016147cu + + 0x30u);
    }
L_00161478:;
    {
        cpu->r[1] = add_flags(cpu, 0x00161480u, cpu->r[1], 0, 0);
    }
L_0016147c:;
    {
        cpu->r[3] = rd32(0x00161484u + + 0x2cu);
    }
L_00161480:;
    {
        cpu->r[12] = add_flags(cpu, 0x00161488u, cpu->r[12], 0, 0);
    }
L_00161484:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016148cu, cpu->r[2], 0, 0);
    }
L_00161488:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0016148c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00161494u, cpu->r[3], 0, 0);
    }
L_00161490:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00161494:;
    {
        cpu->r[14] = 0x00161498u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00161498:;
    {
        goto L_00161390;
    }
}

/* _ZN4CCar23GetAbsoluteRacePositionEv @ 001614b4 (arm) */
void fn_001614b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001614b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_001614b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001614bc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001614c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001614c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001614d4;
        }
    }
L_001614c8:;
    {
        cpu->r[3] = 0x00001690u;
    }
L_001614cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001614d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001614d4u)) return;
    }
L_001614d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x498u);
    }
L_001614d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001614dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001614c8;
        }
    }
L_001614e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_001614e4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001614e8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001614ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001614f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001614f4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001614f8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001614fc:;
    {
        cpu->r[14] = 0x00161500u; fn_00173e14(cpu);
    }
L_00161500:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00161504:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00161508:;
    {
        cpu->r[14] = 0x0016150cu; fn_00180968(cpu);
    }
L_0016150c:;
    {
        cpu->r[2] = 0x00001688u;
    }
L_00161510:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_00161514:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00161518:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016151c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 12u, &shc), 0, 0);
    }
L_00161520:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_00161524:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_00161528:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 12u, &shc), 1, 0);
        }
    }
L_0016152c:;
    {
        cpu->r[2] = 0x00001684u;
    }
L_00161530:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00161534:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 12u, &shc); cpu->r[2] = v;
    }
L_00161538:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_0016153c:;
    {
        cpu->r[3] = 0x00001690u;
    }
L_00161540:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00161544:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161548u)) return;
    }
}

/* _ZNK4CCar21GetRoadVectorUnderCarEv @ 00161548 (arm) */
void fn_00161548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161548:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0016154c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00161550:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x5d4u);
    }
L_00161554:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00161558:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016155c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00161560:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00161564:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1b0u);
    }
L_00161568:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016156c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00161570:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00161574:;
    {
        cpu->r[14] = 0x00161578u; fn_00180c78(cpu);
    }
L_00161578:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016157c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00161580:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00161584:;
    {
        cpu->r[14] = 0x00161588u; fn_00173e3c(cpu);
    }
L_00161588:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x30u);
    }
L_0016158c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x34u);
    }
L_00161590:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00161594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161598:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_0016159c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x34u);
    }
L_001615a0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_001615a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_001615a8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x38u);
    }
L_001615ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_001615b0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001615b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001615b8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001615bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001615c0u)) return;
    }
}

/* _ZNK4CCar21GetDistanceAheadOfCarEPKS_ @ 001615c0 (arm) */
void fn_001615c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001615c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001615c4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x3d4u);
    }
L_001615c8:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_001615cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001615d0:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_001615d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001615d8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x3d8u);
    }
L_001615dc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001615e0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x3dcu);
    }
L_001615e4:;
    {
        uint32_t v = cpu->r[8] ^ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001615e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[8], 1, 31u, &shc), 1, 0);
    }
L_001615ec:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x3dcu);
    }
L_001615f0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_001615f4:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001615f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_001615fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00161600:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_00161604:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00161608:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0016160c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00161610:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00161614:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_00161618:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016161c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00161620:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_00161624:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001616d0;
        }
    }
L_00161628:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016162c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00161630:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00161634:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_00161638:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016163c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00161640:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00161644:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00161648:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_0016164c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00161650:;
    {
        cpu->r[14] = 0x00161654u; fn_0018068c(cpu);
    }
L_00161654:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00161658:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0016165c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00161660:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00161664:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_00161668:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00161678;
        }
    }
L_0016166c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00161670:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00161674:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
        }
    }
L_00161678:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_0016167c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00161680:;
    {
        cpu->r[14] = 0x00161684u; fn_00181124(cpu);
    }
L_00161684:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1d8u);
    }
L_00161688:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_0016168c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00161690:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00161694:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_00161698:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016169c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_001616a0:;
    {
        cpu->r[14] = 0x001616a4u; fn_00181124(cpu);
    }
L_001616a4:;
    {
        uint32_t v = cpu->r[4] ^ shifter(cpu->r[4], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001616a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[4], 1, 31u, &shc), 1, 0);
    }
L_001616ac:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_001616b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001616b4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
        }
    }
L_001616b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb8u);
    }
L_001616bc:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[0] * cpu->r[4]; cpu->r[0] = v;
        }
    }
L_001616c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161724;
        }
    }
L_001616c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001616c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001616cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001616d0u)) return;
    }
L_001616d0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8]; cpu->r[2] = v;
    }
L_001616d4:;
    {
        cpu->r[3] = 0x0000d090u;
    }
L_001616d8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[7] + cpu->r[2]; cpu->r[2] = v;
    }
L_001616dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0003u << 16);
    }
L_001616e0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6] + cpu->r[2]; cpu->r[2] = v;
    }
L_001616e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001616e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00161628;
        }
    }
L_001616ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001616f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001616f4:;
    {
        cpu->r[14] = 0x001616f8u; fn_00161548(cpu);
    }
L_001616f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001616fc:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_00161700:;
    {
        cpu->r[14] = 0x00161704u; fn_00185554(cpu);
    }
L_00161704:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00161708:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0016170c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_00161710:;
    {
        uint32_t v = cpu->r[0] * cpu->r[7] + cpu->r[8]; cpu->r[7] = v;
    }
L_00161714:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00161718:;
    {
        uint32_t v = cpu->r[0] * cpu->r[6] + cpu->r[7]; cpu->r[6] = v;
    }
L_0016171c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00161720:;
    {
        goto L_001616c8;
    }
L_00161724:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00161728:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_0016172c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00161730:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00161734:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[0] * cpu->r[4]; cpu->r[0] = v;
        }
    }
L_00161738:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0016173c:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00161740:;
    {
        goto L_001616c4;
    }
}

/* _ZN4CCar11ExitAIStateEv @ 00161744 (arm) */
void fn_00161744(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161744:;
    {
        cpu->r[3] = rd32(0x0016174cu + + 0x1c0u);
    }
L_00161748:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0016174c:;
    {
        cpu->r[1] = rd32(0x00161754u + + 0x1bcu);
    }
L_00161750:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00161754:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016175cu, cpu->r[3], 0, 0);
    }
L_00161758:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016175c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00161760:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00161764:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00161768:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016176c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00161770:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00161774:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00161778:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016177c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00161780:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00161784:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00161788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016178c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00161790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00161794:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00161798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001617a4;
        }
    }
L_0016179c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001617a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001617a4u)) return;
    }
L_001617a4:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_001617a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001617ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001617b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016179c;
        }
    }
L_001617b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001617b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001617bc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x45cu);
    }
L_001617c0:;
    {
        cpu->r[14] = 0x001617c8u;
    }
L_001617c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001617c8u)) return;
    }
L_001617c8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001617cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016179c;
        }
    }
L_001617d0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001617d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001617d8:;
    {
        cpu->r[14] = 0x001617e0u;
    }
L_001617dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001617e0u)) return;
    }
L_001617e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001617e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001617e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001617ec:;
    {
        cpu->r[14] = 0x001617f4u;
    }
L_001617f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001617f4u)) return;
    }
L_001617f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_001617f8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_001617fc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00161800:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001618cc;
        }
    }
L_00161804:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00161808:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x41cu);
    }
L_0016180c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x420u);
    }
L_00161810:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00161814:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00161818:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0016181c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00161820:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x424u);
    }
L_00161824:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[0] = v;
    }
L_00161828:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0016182c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[0]; cpu->r[0] = v;
    }
L_00161830:;
    {
        cpu->r[12] = 0x000017c4u;
    }
L_00161834:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[6]);
    }
L_00161838:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_0016183c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_00161840:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161844:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016179c;
        }
    }
L_00161848:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3c8u);
    }
L_0016184c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00161850:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00161854:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3ccu);
    }
L_00161858:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_0016185c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3d0u);
    }
L_00161860:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_00161864:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00161868:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[7], cpu->r[14], 1, 0);
    }
L_0016186c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00161870:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_00161874:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00161878:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0016187c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00161880:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00161884:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_00161888:;
    {
        cpu->r[14] = 0x0016188cu; fn_0018572c(cpu);
    }
L_0016188c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00161890:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00161894:;
    {
        cpu->r[14] = 0x00161898u; fn_00185554(cpu);
    }
L_00161898:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0016189c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001618a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001618a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001618a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001618ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001618b0:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[3]);
    }
L_001618b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001618b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001618bc:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[2]);
    }
L_001618c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001618c4:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_001618c8:;
    {
        goto L_0016179c;
    }
L_001618cc:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001618d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001618d4:;
    {
        cpu->r[14] = 0x001618dcu;
    }
L_001618d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001618dcu)) return;
    }
L_001618dc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001618e0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[0];
        }
    }
L_001618e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00161804;
        }
    }
L_001618e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_001618ec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001618f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001618f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001618f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001618fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00161900:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00161904:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_00161908:;
    {
        goto L_00161804;
    }
}

/* _ZN4CCar13SwitchAIStateEi @ 00161914 (arm) */
void fn_00161914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161914:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00161918:;
    {
        cpu->r[5] = 0x000017b4u;
    }
L_0016191c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00161920:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00161924:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00161928:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0016192c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161930u)) return;
        }
    }
L_00161930:;
    {
        cpu->r[14] = 0x00161934u; fn_00161744(cpu);
    }
L_00161934:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_00161938:;
    {
        cpu->r[14] = 0x0016193cu; fn_0009b4d0(cpu);
    }
L_0016193c:;
    {
        cpu->r[3] = 0x000017b8u;
    }
L_00161940:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00161944:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161948:;
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
L_0016194c:;
    {
        return fn_00161148(cpu);
    }
}

/* _ZN4CCar19OnCrimeLevelReachedEi @ 00161950 (arm) */
void fn_00161950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161950:;
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
L_00161954:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00161958:;
    {
        cpu->r[4] = rd32(0x00161960u + + 0x164u);
    }
L_0016195c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_00161960:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00161964:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016196cu, cpu->r[4], 0, 0);
    }
L_00161968:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161a8c;
        }
    }
L_0016196c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_00161970:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001619a8;
        }
    }
L_00161974:;
    {
        cpu->r[1] = rd32(0x0016197cu + + 0x14cu);
    }
L_00161978:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016197c:;
    {
        cpu->r[12] = rd32(0x00161984u + + 0x148u);
    }
L_00161980:;
    {
        cpu->r[14] = 0x00002446u;
    }
L_00161984:;
    {
        cpu->r[2] = rd32(0x0016198cu + + 0x144u);
    }
L_00161988:;
    {
        cpu->r[1] = add_flags(cpu, 0x00161990u, cpu->r[1], 0, 0);
    }
L_0016198c:;
    {
        cpu->r[3] = rd32(0x00161994u + + 0x140u);
    }
L_00161990:;
    {
        cpu->r[12] = add_flags(cpu, 0x00161998u, cpu->r[12], 0, 0);
    }
L_00161994:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016199cu, cpu->r[2], 0, 0);
    }
L_00161998:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_0016199c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001619a4u, cpu->r[3], 0, 0);
    }
L_001619a0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001619a4:;
    {
        cpu->r[14] = 0x001619a8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001619a8:;
    {
        cpu->r[3] = rd32(0x001619b0u + + 0x128u);
    }
L_001619ac:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001619b0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001619b4:;
    {
        cpu->r[14] = 0x001619b8u; fn_000a04f8(cpu);
    }
L_001619b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001619bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001619dc;
        }
    }
L_001619c0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001619c4:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_001619c8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001619cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001619d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001619dc;
        }
    }
L_001619d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001619d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001619dcu)) return;
    }
L_001619dc:;
    {
        cpu->r[1] = rd32(0x001619e4u + + 0xf8u);
    }
L_001619e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001619e4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_001619e8:;
    {
        cpu->r[2] = 0x00000050u;
    }
L_001619ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001619f4u, cpu->r[1], 0, 0);
    }
L_001619f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001619f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_001619f8:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 4u, &shc); cpu->r[7] = v;
    }
L_001619fc:;
    {
        cpu->r[14] = 0x00161a00u; imp_memcpy(cpu); /* memcpy */
    }
L_00161a00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_00161a04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00161a08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_00161a0c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00161a10:;
    {
        cpu->r[10] = 0x00001bc8u;
    }
L_00161a14:;
    {
        cpu->r[4] = rd32(cpu->r[3] + - 0x50u);
    }
L_00161a18:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 1);
    }
L_00161a1c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001619d4;
        }
    }
L_00161a20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00161a24:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x5d4u);
    }
L_00161a28:;
    {
        cpu->r[5] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_00161a2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00161a30:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00161a34:;
    {
        cpu->r[14] = 0x00161a38u; fn_000b9c30(cpu);
    }
L_00161a38:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00161a3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00161a40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161a64;
        }
    }
L_00161a44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00161a48:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00161a4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00161a50:;
    {
        cpu->r[2] = rd32(cpu->r[7] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00161a54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00161a58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_00161a5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00161a60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161a4c;
        }
    }
L_00161a64:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00161a68:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00161a18;
        }
    }
L_00161a6c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x5d4u);
    }
L_00161a70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00161a74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00161a78:;
    {
        cpu->r[3] = 0x00000800u;
    }
L_00161a7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_00161a80:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00161a84:;
    {
        cpu->r[14] = 0x00161a88u; fn_000bc808(cpu);
    }
L_00161a88:;
    {
        goto L_00161a18;
    }
L_00161a8c:;
    {
        cpu->r[1] = rd32(0x00161a94u + + 0x4cu);
    }
L_00161a90:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00161a94:;
    {
        cpu->r[12] = rd32(0x00161a9cu + + 0x48u);
    }
L_00161a98:;
    {
        cpu->r[14] = 0x00002445u;
    }
L_00161a9c:;
    {
        cpu->r[2] = rd32(0x00161aa4u + + 0x44u);
    }
L_00161aa0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00161aa8u, cpu->r[1], 0, 0);
    }
L_00161aa4:;
    {
        cpu->r[3] = rd32(0x00161aacu + + 0x40u);
    }
L_00161aa8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00161ab0u, cpu->r[12], 0, 0);
    }
L_00161aac:;
    {
        cpu->r[2] = add_flags(cpu, 0x00161ab4u, cpu->r[2], 0, 0);
    }
L_00161ab0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_00161ab4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00161abcu, cpu->r[3], 0, 0);
    }
L_00161ab8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00161abc:;
    {
        cpu->r[14] = 0x00161ac0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00161ac0:;
    {
        goto L_001619a8;
    }
}

/* _ZN4CCar16UpdateCrimeLevelEv @ 00161af0 (arm) */
void fn_00161af0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161af0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00161af4:;
    {
        cpu->r[3] = rd32(0x00161afcu + + 0xd8u);
    }
L_00161af8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00161afc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00161b00:;
    {
        cpu->r[3] = add_flags(cpu, 0x00161b08u, cpu->r[3], 0, 0);
    }
L_00161b04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00161b08:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_00161b0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00161b10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161b90;
        }
    }
L_00161b14:;
    {
        { uint32_t v = cpu->r[2] & 0x00100000u; set_nz(cpu, v); }
    }
L_00161b18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161b90;
        }
    }
L_00161b1c:;
    {
        cpu->r[2] = rd32(0x00161b24u + + 0xb4u);
    }
L_00161b20:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00161b24:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00161b28:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_00161b2c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00161b30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00161b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161b6c;
        }
    }
L_00161b38:;
    {
        cpu->r[5] = 0x00001d04u;
    }
L_00161b3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00161b40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00161b44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161b90;
        }
    }
L_00161b48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00161b4c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00161b50:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00161b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00161b58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161b98;
        }
    }
L_00161b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161b60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00161b64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00161b68:;
    {
        return fn_00161950(cpu);
    }
L_00161b6c:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_00161b70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001640u, 0, 0);
    }
L_00161b74:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00161b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003cu, 0, 0);
    }
L_00161b7c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00161b80:;
    {
        cpu->r[14] = 0x00161b84u; fn_0015d718(cpu);
    }
L_00161b84:;
    {
        cpu->r[3] = 0x00001387u;
    }
L_00161b88:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00161b8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00161b38;
        }
    }
L_00161b90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00161b94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00161b98u)) return;
    }
L_00161b98:;
    {
        cpu->r[1] = rd32(0x00161ba0u + + 0x3cu);
    }
L_00161b9c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00161ba0:;
    {
        cpu->r[12] = rd32(0x00161ba8u + + 0x38u);
    }
L_00161ba4:;
    {
        cpu->r[14] = 0x00002ae8u;
    }
L_00161ba8:;
    {
        cpu->r[2] = rd32(0x00161bb0u + + 0x34u);
    }
L_00161bac:;
    {
        cpu->r[1] = add_flags(cpu, 0x00161bb4u, cpu->r[1], 0, 0);
    }
L_00161bb0:;
    {
        cpu->r[3] = rd32(0x00161bb8u + + 0x30u);
    }
L_00161bb4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00161bbcu, cpu->r[12], 0, 0);
    }
L_00161bb8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00161bc0u, cpu->r[2], 0, 0);
    }
L_00161bbc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000098u, 0, 0);
    }
L_00161bc0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00161bc8u, cpu->r[3], 0, 0);
    }
L_00161bc4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00161bc8:;
    {
        cpu->r[14] = 0x00161bccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00161bcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00161bd0:;
    {
        goto L_00161b5c;
    }
}

/* _ZN4CCar11NotifyEventEN11PointSystem6EEventEi @ 00161bec (arm) */
void fn_00161bec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161bec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00161bf0:;
    {
        cpu->r[7] = rd32(0x00161bf8u + + 0xd0u);
    }
L_00161bf4:;
    {
        cpu->r[8] = rd32(0x00161bfcu + + 0xd0u);
    }
L_00161bf8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00161bfc:;
    {
        cpu->r[7] = add_flags(cpu, 0x00161c04u, cpu->r[7], 0, 0);
    }
L_00161c00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00161c04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00161c08:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00161c0c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00161c10:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00161c14:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00161c18:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00161c1c:;
    {
        cpu->r[14] = 0x00161c20u; fn_000ba990(cpu);
    }
L_00161c20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161c80;
        }
    }
L_00161c28:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001bu, 1, 1);
    }
L_00161c2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161c48;
        }
    }
L_00161c30:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00161c34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00161c38:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00161c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161c80;
        }
    }
L_00161c40:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 1);
    }
L_00161c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161c78;
        }
    }
L_00161c48:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00161c4c:;
    {
        cpu->r[8] = 0x00008548u;
    }
L_00161c50:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00161c54:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00161c58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161c88;
        }
    }
L_00161c60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00161c64:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00161c68:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00161c6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00161c70:;
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
L_00161c74:;
    {
        return fn_001884ec(cpu);
    }
L_00161c78:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_00161c7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161c48;
        }
    }
L_00161c80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00161c84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161c88u)) return;
    }
L_00161c88:;
    {
        cpu->r[1] = rd32(0x00161c90u + + 0x40u);
    }
L_00161c8c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00161c90:;
    {
        cpu->r[12] = rd32(0x00161c98u + + 0x3cu);
    }
L_00161c94:;
    {
        cpu->r[14] = 0x0000243cu;
    }
L_00161c98:;
    {
        cpu->r[2] = rd32(0x00161ca0u + + 0x38u);
    }
L_00161c9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00161ca4u, cpu->r[1], 0, 0);
    }
L_00161ca0:;
    {
        cpu->r[3] = rd32(0x00161ca8u + + 0x34u);
    }
L_00161ca4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00161cacu, cpu->r[12], 0, 0);
    }
L_00161ca8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00161cb0u, cpu->r[2], 0, 0);
    }
L_00161cac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000acu, 0, 0);
    }
L_00161cb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00161cb8u, cpu->r[3], 0, 0);
    }
L_00161cb4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00161cb8:;
    {
        cpu->r[14] = 0x00161cbcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00161cbc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00161cc0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00161cc4:;
    {
        goto L_00161c60;
    }
}

/* _ZN4CCar24UpdateNearCollisionEventEPS_ @ 00161ce0 (arm) */
void fn_00161ce0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00161ce0:;
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
L_00161ce4:;
    {
        cpu->r[7] = 0x00001788u;
    }
L_00161ce8:;
    {
        cpu->r[6] = rd32(0x00161cf0u + + 0x308u);
    }
L_00161cec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00161cf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00161cf4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00161cf8:;
    {
        cpu->r[6] = add_flags(cpu, 0x00161d00u, cpu->r[6], 0, 0);
    }
L_00161cfc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00161d00:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00161d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161d14;
        }
    }
L_00161d08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_00161d0c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00161d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161d1c;
        }
    }
L_00161d14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00161d18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00161d1cu)) return;
    }
L_00161d1c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1dcu);
    }
L_00161d20:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00161d24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161d14;
        }
    }
L_00161d28:;
    {
        cpu->r[10] = 0x00001750u;
    }
L_00161d2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00161d30:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00161d34:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[10]);
    }
L_00161d38:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00161d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161e78;
        }
    }
L_00161d40:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00161d44:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00161d48:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x544u);
    }
L_00161d4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00161d50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00161d54:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x4dcu, cpu->r[3]);
        }
    }
L_00161d58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00161d60:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[5] + + 0x4ddu, cpu->r[3]);
        }
    }
L_00161d64:;
    {
        cpu->r[14] = 0x00161d68u; fn_0009b4d0(cpu);
    }
L_00161d68:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00161d6c:;
    {
        cpu->r[0] = 0x0000004au;
    }
L_00161d70:;
    {
        cpu->r[14] = 0x00161d74u; fn_00093f34(cpu);
    }
L_00161d74:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_00161d78:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_00161d7c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00161d80:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00161d84:;
    {
        cpu->r[7] = cpu->r[13];
    }
L_00161d88:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00161d8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00161d90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00161d94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00161d98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00161d9c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00161da0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00161da4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00161da8:;
    {
        vfp_sync_flags(cpu);
    }
L_00161dac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00161db0:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[5] + + 0x4ddu, cpu->r[3]);
        }
    }
L_00161db4:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[5] + + 0x4dcu, cpu->r[3]);
        }
    }
L_00161db8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00161dbc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00161dc0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00161dc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00161dc8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00161dcc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00161dd0:;
    {
        cpu->r[14] = 0x00161dd4u; fn_0018572c(cpu);
    }
L_00161dd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161dd8:;
    {
        cpu->r[14] = 0x00161ddcu; fn_0015d920(cpu);
    }
L_00161ddc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161d14;
        }
    }
L_00161de4:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00161de8:;
    {
        cpu->r[14] = 0x00161decu; fn_0018572c(cpu);
    }
L_00161dec:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00161df0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00161df4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00161dfcu + + 0x1f8u);
    }
L_00161df8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00161dfc:;
    {
        vfp_sync_flags(cpu);
    }
L_00161e00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00161d14;
        }
    }
L_00161e04:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x4dcu);
    }
L_00161e08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00161e0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161e5c;
        }
    }
L_00161e10:;
    {
        cpu->r[2] = rd32(0x00161e18u + + 0x1e4u);
    }
L_00161e14:;
    {
        cpu->r[7] = 0x00008548u;
    }
L_00161e18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00161e1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161e20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00161e24:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00161e28:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161e2c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00161e30:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x204u);
    }
L_00161e34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161e38:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x208u);
    }
L_00161e3c:;
    {
        cpu->r[14] = 0x00161e40u; fn_00161bec(cpu);
    }
L_00161e40:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00161e44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00161e48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161e4c:;
    {
        cpu->r[14] = 0x00161e50u; fn_00188284(cpu);
    }
L_00161e50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00161e54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161e58:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[10]);
    }
L_00161e5c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x4ddu);
    }
L_00161e60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00161e64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161ecc;
        }
    }
L_00161e68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00161e6c:;
    {
        wr8(cpu->r[5] + + 0x4ddu, cpu->r[3]);
    }
L_00161e70:;
    {
        wr8(cpu->r[5] + + 0x4dcu, cpu->r[3]);
    }
L_00161e74:;
    {
        goto L_00161d14;
    }
L_00161e78:;
    {
        cpu->r[8] = 0x0000174cu;
    }
L_00161e7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00161e80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00161e84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161d40;
        }
    }
L_00161e88:;
    {
        cpu->r[14] = 0x00161e8cu; fn_001721e4(cpu);
    }
L_00161e8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000003d4u, 0, 0);
    }
L_00161e90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00161e94:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00161e98:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00161e9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00161ea0:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00161ea4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00161ea8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00161eac:;
    {
        cpu->r[14] = 0x00161eb0u; fn_0017a640(cpu);
    }
L_00161eb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00161eb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00161f1c;
        }
    }
L_00161eb8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00161ebc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00161ec0:;
    {
        uint32_t v = cpu->r[7] & 0x00004000u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_00161ec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161d4c;
        }
    }
L_00161ec8:;
    {
        goto L_00161d48;
    }
L_00161ecc:;
    {
        cpu->r[2] = rd32(0x00161ed4u + + 0x128u);
    }
L_00161ed0:;
    {
        cpu->r[7] = 0x00008548u;
    }
L_00161ed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00161ed8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161edc:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00161ee0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00161ee4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161ee8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00161eec:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x204u);
    }
L_00161ef0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161ef4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x358u);
    }
L_00161ef8:;
    {
        cpu->r[14] = 0x00161efcu; fn_00161bec(cpu);
    }
L_00161efc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00161f00:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00161f04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161f08:;
    {
        cpu->r[14] = 0x00161f0cu; fn_00188284(cpu);
    }
L_00161f0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00161f10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_00161f14:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[8]);
    }
L_00161f18:;
    {
        goto L_00161e68;
    }
L_00161f1c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00161f20:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[5]);
    }
L_00161f24:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_00161f28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161f2c:;
    {
        cpu->r[14] = 0x00161f30u; fn_001721e4(cpu);
    }
L_00161f30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00161f34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00161f38:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00161f3c:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00161f40:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00161f44:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00161f48:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00161f4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00161f50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[9];
        }
    }
L_00161f54:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00161eb8;
        }
    }
L_00161f58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00161f5c:;
    {
        cpu->r[14] = 0x00161f60u; fn_00173640(cpu);
    }
L_00161f60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00161f64:;
    {
        { uint32_t v = cpu->r[7] & 0x00000020u; set_nz(cpu, v); }
    }
L_00161f68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161f88;
        }
    }
L_00161f6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00161f70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00161f74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00161f78:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[9]);
        }
    }
L_00161f7c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[9]);
        }
    }
L_00161f80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[9];
        }
    }
L_00161f84:;
    {
        goto L_00161ec0;
    }
L_00161f88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00161f8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00161fb4;
        }
    }
L_00161f90:;
    {
        cpu->r[2] = 0x00001750u;
    }
L_00161f94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00161f98:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00161f9c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00161fa0:;
    {
        cpu->r[2] = 0x0000174cu;
    }
L_00161fa4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00161fa8:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00161fac:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00161fb0:;
    {
        goto L_00161ec0;
    }
L_00161fb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00161fb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00161fbc:;
    {
        cpu->r[14] = 0x00161fc4u;
    }
L_00161fc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161fc4u)) return;
    }
L_00161fc4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00161fc8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00161fcc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00161fd0:;
    {
        cpu->r[14] = 0x00161fd8u;
    }
L_00161fd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00161fd8u)) return;
    }
L_00161fd8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_00161fdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00161f90;
        }
    }
L_00161fe0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00161fe4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00161fe8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00161fec:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00161ff0:;
    {
        goto L_00161ec0;
    }
}

/* _ZN4CCar16UpdateCaromEventEPS_ @ 00162000 (arm) */
void fn_00162000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162000:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00162004:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00162008:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016200c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00162010:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162014:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_00162018:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0016201c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162030;
        }
    }
L_00162020:;
    {
        cpu->r[14] = 0x00162024u; fn_0009b4d0(cpu);
    }
L_00162024:;
    {
        wr32(cpu->r[5] + + 0x544u, cpu->r[0]);
    }
L_00162028:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016202c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00162030u)) return;
    }
L_00162030:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_00162034:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[1]);
    }
L_00162038:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016203c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162020;
        }
    }
L_00162040:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00162044:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00162048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162058;
        }
    }
L_0016204c:;
    {
        cpu->r[14] = 0x00162050u; fn_0009b4d0(cpu);
    }
L_00162050:;
    {
        wr32(cpu->r[4] + + 0x544u, cpu->r[0]);
    }
L_00162054:;
    {
        goto L_00162028;
    }
L_00162058:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[1]);
    }
L_0016205c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00162060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016204c;
        }
    }
L_00162064:;
    {
        uint32_t v = cpu->r[2] | cpu->r[3]; cpu->r[2] = v;
    }
L_00162068:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016206c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001620b4;
        }
    }
L_00162070:;
    {
        cpu->r[14] = 0x00162074u; fn_0009b4d0(cpu);
    }
L_00162074:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x544u);
    }
L_00162078:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_0016207c:;
    {
        cpu->r[14] = 0x00162080u; fn_0009b4d0(cpu);
    }
L_00162080:;
    {
        cpu->r[3] = 0x00000bb7u;
    }
L_00162084:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x544u);
    }
L_00162088:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0016208c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0016209c;
        }
    }
L_00162090:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00162094:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00162098:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00162028;
        }
    }
L_0016209c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001620a0:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_001620a4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001620a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001620ac:;
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
L_001620b0:;
    {
        return fn_00161bec(cpu);
    }
L_001620b4:;
    {
        cpu->r[1] = rd32(0x001620bcu + + 0x30u);
    }
L_001620b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001620bc:;
    {
        cpu->r[12] = rd32(0x001620c4u + + 0x2cu);
    }
L_001620c0:;
    {
        cpu->r[14] = 0x00002c59u;
    }
L_001620c4:;
    {
        cpu->r[2] = rd32(0x001620ccu + + 0x28u);
    }
L_001620c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001620d0u, cpu->r[1], 0, 0);
    }
L_001620cc:;
    {
        cpu->r[3] = rd32(0x001620d4u + + 0x24u);
    }
L_001620d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001620d8u, cpu->r[12], 0, 0);
    }
L_001620d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001620dcu, cpu->r[2], 0, 0);
    }
L_001620d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000b8u, 0, 0);
    }
L_001620dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001620e4u, cpu->r[3], 0, 0);
    }
L_001620e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001620e4:;
    {
        cpu->r[14] = 0x001620e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001620e8:;
    {
        goto L_00162070;
    }
}

/* _ZN4CCar21UpdateNewSectionEventEi @ 001620fc (arm) */
void fn_001620fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001620fc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00162100:;
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
L_00162104:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00162108:;
    {
        cpu->r[6] = rd32(0x00162110u + + 0x12cu);
    }
L_0016210c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00162110:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00162114:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00162118:;
    {
        cpu->r[6] = add_flags(cpu, 0x00162120u, cpu->r[6], 0, 0);
    }
L_0016211c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00162120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001621fc;
        }
    }
L_00162124:;
    {
        cpu->r[9] = rd32(0x0016212cu + + 0x114u);
    }
L_00162128:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016212c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00162130:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_00162134:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00162138:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016213c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00162140:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00162144:;
    {
        add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 1);
    }
L_00162148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162204;
        }
    }
L_0016214c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00162150:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00162154:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001621fc;
        }
    }
L_00162158:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_0016215c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00162160:;
    {
        goto L_00162174;
    }
L_00162164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00162168:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0016216c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00162170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001621fc;
        }
    }
L_00162174:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00162178:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0016217c:;
    {
        cpu->r[14] = 0x00162180u; fn_00097140(cpu);
    }
L_00162180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162184:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162164;
        }
    }
L_00162188:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_0016218c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_00162190:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00162194:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00162198:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016219c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001621a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001621a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001621a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001621ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000004u;
        }
    }
L_001621b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001621b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001621b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001621bc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001621c0:;
    {
        if (cond_test(cpu, 12)) {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
        }
    }
L_001621c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00162164;
        }
    }
L_001621c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001621cc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001621d0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001621d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001621d8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001621dc:;
    {
        cpu->r[14] = 0x001621e0u; fn_000971c8(cpu);
    }
L_001621e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001621e4:;
    {
        cpu->r[1] = 0x0000001au;
    }
L_001621e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001621ec:;
    {
        cpu->r[14] = 0x001621f0u; fn_00161bec(cpu);
    }
L_001621f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001621f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001621f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00162174;
        }
    }
L_001621fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00162200:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00162204u)) return;
    }
L_00162204:;
    {
        cpu->r[1] = rd32(0x0016220cu + + 0x38u);
    }
L_00162208:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016220c:;
    {
        cpu->r[12] = rd32(0x00162214u + + 0x34u);
    }
L_00162210:;
    {
        cpu->r[14] = 0x00002c2du;
    }
L_00162214:;
    {
        cpu->r[2] = rd32(0x0016221cu + + 0x30u);
    }
L_00162218:;
    {
        cpu->r[1] = add_flags(cpu, 0x00162220u, cpu->r[1], 0, 0);
    }
L_0016221c:;
    {
        cpu->r[3] = rd32(0x00162224u + + 0x2cu);
    }
L_00162220:;
    {
        cpu->r[12] = add_flags(cpu, 0x00162228u, cpu->r[12], 0, 0);
    }
L_00162224:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016222cu, cpu->r[2], 0, 0);
    }
L_00162228:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000ccu, 0, 0);
    }
L_0016222c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00162234u, cpu->r[3], 0, 0);
    }
L_00162230:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00162234:;
    {
        cpu->r[14] = 0x00162238u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00162238:;
    {
        goto L_0016214c;
    }
}

/* _ZN4CCar14NotifyDriftEndEv @ 00162254 (arm) */
void fn_00162254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162254:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00162258:;
    {
        cpu->r[12] = 0x00008cb0u;
    }
L_0016225c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00162260:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00162264:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_00162268:;
    {
        cpu->r[12] = 0x00008cacu;
    }
L_0016226c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162270:;
    {
        cpu->r[14] = 0x00000002u;
    }
L_00162274:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00162278:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_0016227c:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00162280:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162284:;
    {
        cpu->r[14] = 0x00162288u; fn_00161bec(cpu);
    }
L_00162288:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016228c:;
    {
        cpu->r[5] = rd32(0x00162294u + + 0x1dcu);
    }
L_00162290:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00162294:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016229cu, cpu->r[5], 0, 0);
    }
L_00162298:;
    {
        uint32_t v = cpu->r[2] & 0x00000008u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0016229c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001623d4;
        }
    }
L_001622a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001622a4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001622a8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001622ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001622b0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001622b4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001622b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001622bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001622c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001622c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001622c8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_001622cc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001622d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162438;
        }
    }
L_001622d4:;
    {
        cpu->r[3] = 0x00001650u;
    }
L_001622d8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001622dc:;
    {
        cpu->r[3] = 0x0000164cu;
    }
L_001622e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001622e4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x0000000bu, 1, 0);
    }
L_001622e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001622ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001622f0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001622f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001622f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001622fc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00162380;
        }
    }
L_00162300:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00162304:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016240c;
        }
    }
L_00162308:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016230c:;
    {
        cpu->r[5] = 0x00008548u;
    }
L_00162310:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00162314:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162318:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0016231c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162320:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00162324:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x204u);
    }
L_00162328:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[12]);
    }
L_0016232c:;
    {
        cpu->r[14] = 0x00162330u; fn_00161bec(cpu);
    }
L_00162330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162334:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00162338:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[6]);
    }
L_0016233c:;
    {
        cpu->r[14] = 0x00162340u; fn_0009b4d0(cpu);
    }
L_00162340:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x638u);
    }
L_00162344:;
    {
        cpu->r[3] = 0x0000c3ffu;
    }
L_00162348:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0009u << 16);
    }
L_0016234c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_00162350:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00162354:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001623a4;
        }
    }
L_00162358:;
    {
        cpu->r[3] = 0x0000abffu;
    }
L_0016235c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x000du << 16);
    }
L_00162360:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00162364:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00162420;
        }
    }
L_00162368:;
    {
        cpu->r[3] = 0x000057ffu;
    }
L_0016236c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x001bu << 16);
    }
L_00162370:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00162374:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001623bc;
        }
    }
L_00162378:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016237c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00162380u)) return;
    }
L_00162380:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00162384:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162308;
        }
    }
L_00162388:;
    {
        cpu->r[14] = 0x0016238cu; fn_0009b4d0(cpu);
    }
L_0016238c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x638u);
    }
L_00162390:;
    {
        cpu->r[3] = 0x0000c3ffu;
    }
L_00162394:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0009u << 16);
    }
L_00162398:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0016239c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001623a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00162358;
        }
    }
L_001623a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001623a8:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001623ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001623b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001623b4:;
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
L_001623b8:;
    {
        return fn_00161bec(cpu);
    }
L_001623bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001623c0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001623c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001623c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001623cc:;
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
L_001623d0:;
    {
        return fn_00161bec(cpu);
    }
L_001623d4:;
    {
        cpu->r[0] = rd32(0x001623dcu + + 0x98u);
    }
L_001623d8:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001623dc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001623e0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001623e4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001623e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001623ec:;
    {
        cpu->r[14] = 0x001623f0u; fn_000fd224(cpu);
    }
L_001623f0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001623f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001622a0;
        }
    }
L_001623f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001623fc:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00162400:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00162404:;
    {
        cpu->r[14] = 0x00162408u; fn_000fd218(cpu);
    }
L_00162408:;
    {
        goto L_001622a0;
    }
L_0016240c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162410:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00162414:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162418:;
    {
        cpu->r[14] = 0x0016241cu; fn_00161bec(cpu);
    }
L_0016241c:;
    {
        goto L_0016233c;
    }
L_00162420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162424:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00162428:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016242c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00162430:;
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
L_00162434:;
    {
        return fn_00161bec(cpu);
    }
L_00162438:;
    {
        cpu->r[1] = rd32(0x00162440u + + 0x38u);
    }
L_0016243c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00162440:;
    {
        cpu->r[12] = rd32(0x00162448u + + 0x34u);
    }
L_00162444:;
    {
        cpu->r[14] = 0x00002b59u;
    }
L_00162448:;
    {
        cpu->r[2] = rd32(0x00162450u + + 0x30u);
    }
L_0016244c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00162454u, cpu->r[1], 0, 0);
    }
L_00162450:;
    {
        cpu->r[3] = rd32(0x00162458u + + 0x2cu);
    }
L_00162454:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016245cu, cpu->r[12], 0, 0);
    }
L_00162458:;
    {
        cpu->r[2] = add_flags(cpu, 0x00162460u, cpu->r[2], 0, 0);
    }
L_0016245c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000e4u, 0, 0);
    }
L_00162460:;
    {
        cpu->r[3] = add_flags(cpu, 0x00162468u, cpu->r[3], 0, 0);
    }
L_00162464:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00162468:;
    {
        cpu->r[14] = 0x0016246cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016246c:;
    {
        goto L_001622d4;
    }
}

/* _ZN4CCar9ExitDriftEv @ 00162488 (arm) */
void fn_00162488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162488:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016248c:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00162490:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00162494:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00162498:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0016249c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_001624a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001624a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001624a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162508;
        }
    }
L_001624ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_001624b0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_001624b4:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_001624b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001624bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001624c0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_001624c4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x630u, cpu->r[3]);
        }
    }
L_001624c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001624cc:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001624d0:;
    {
        cpu->r[0] = 0x00001c98u;
    }
L_001624d4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x80000000u; cpu->r[1] = v;
    }
L_001624d8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000400u; cpu->r[1] = v;
    }
L_001624dc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001624e0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001624e4:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_001624e8:;
    {
        cpu->r[0] = 0x00001c8cu;
    }
L_001624ec:;
    {
        wr32(cpu->r[4] + + 0x628u, cpu->r[3]);
    }
L_001624f0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001624f4:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_001624f8:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[3]);
    }
L_001624fc:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_00162500:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[3]);
    }
L_00162504:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00162508u)) return;
    }
L_00162508:;
    {
        cpu->r[14] = 0x0016250cu; fn_00162254(cpu);
    }
L_0016250c:;
    {
        goto L_001624ac;
    }
}

/* _ZN4CCar17UpdateSkillPointsEv @ 00162510 (arm) */
void fn_00162510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162510:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00162514:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00162518:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0016251c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00162520:;
    {
        cpu->r[5] = rd32(0x00162528u + + 0x1f0u);
    }
L_00162524:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162528:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016252c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00162534u, cpu->r[5], 0, 0);
    }
L_00162530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001625d8;
        }
    }
L_00162534:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_00162538:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016253c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00162540:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00162544:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_00162548:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016254c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162688;
        }
    }
L_00162550:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_00162554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001626a8;
        }
    }
L_00162558:;
    {
        cpu->r[6] = 0x00001c64u;
    }
L_0016255c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_00162560:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00162564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001625e0;
        }
    }
L_00162568:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0016256c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00162570:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00162574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001625b4;
        }
    }
L_00162578:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_0016257c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00162580:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00162584:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001625b4;
        }
    }
L_00162588:;
    {
        cpu->r[0] = rd32(0x00162590u + + 0x18cu);
    }
L_0016258c:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_00162590:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00162594:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00162598:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0016259c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_001625a0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001625a4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001625a8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001625ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001625b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001626d0;
        }
    }
L_001625b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_001625b8:;
    {
        cpu->r[3] = 0x0000b00fu;
    }
L_001625bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0000u << 16);
    }
L_001625c0:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_001625c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001625c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001ca4u;
        }
    }
L_001625cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_001625d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001625d4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001625d8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001625dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001625e0u)) return;
    }
L_001625e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001625e4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_001625e8:;
    {
        cpu->r[14] = 0x001625ecu; fn_001737d8(cpu);
    }
L_001625ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001625f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001625f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001625f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001625fc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00162568;
        }
    }
L_00162600:;
    {
        cpu->r[3] = rd32(0x00162608u + + 0x114u);
    }
L_00162604:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00162608:;
    {
        wr8(cpu->r[4] + cpu->r[6], cpu->r[1]);
    }
L_0016260c:;
    {
        cpu->r[0] = 0x00001c68u;
    }
L_00162610:;
    {
        cpu->r[2] = 0x00008d74u;
    }
L_00162614:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00162618:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016261c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00162620:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00162624:;
    {
        cpu->r[3] = 0x00001c6cu;
    }
L_00162628:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001f4u, 0, 0);
    }
L_0016262c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[6]);
    }
L_00162630:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00162634:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00162638:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0016263c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00162640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00162644:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00162648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016264c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00162650:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00162654:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162568;
        }
    }
L_00162658:;
    {
        cpu->r[3] = 0x00001c40u;
    }
L_0016265c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[1]);
    }
L_00162660:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162664:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00162668:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_0016266c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162670:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00162674:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00162678:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_0016267c:;
    {
        cpu->r[1] = 0x00000015u;
    }
L_00162680:;
    {
        cpu->r[14] = 0x00162684u; fn_00161bec(cpu);
    }
L_00162684:;
    {
        goto L_00162568;
    }
L_00162688:;
    {
        cpu->r[0] = 0x00000017u;
    }
L_0016268c:;
    {
        cpu->r[14] = 0x00162690u; fn_00093f34(cpu);
    }
L_00162690:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00162694:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162698:;
    {
        cpu->r[14] = 0x0016269cu; fn_0015ec14(cpu);
    }
L_0016269c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001626a0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_001626a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162558;
        }
    }
L_001626a8:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_001626ac:;
    {
        cpu->r[6] = 0x00001c64u;
    }
L_001626b0:;
    {
        cpu->r[14] = 0x001626b4u; fn_00093f34(cpu);
    }
L_001626b4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001626b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001626bc:;
    {
        cpu->r[14] = 0x001626c0u; fn_0015ec14(cpu);
    }
L_001626c0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[6]);
    }
L_001626c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001626c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162568;
        }
    }
L_001626cc:;
    {
        goto L_001625e0;
    }
L_001626d0:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_001626d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001626d8:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_001626dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001626e0:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_001626e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00001c74u;
        }
    }
L_001626e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_001626ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001626f0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
        }
    }
L_001626f4:;
    {
        cpu->r[1] = 0x00001c78u;
    }
L_001626f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001626fc:;
    {
        cpu->r[2] = 0x000001f4u;
    }
L_00162700:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00162704:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[12]; cpu->r[3] = v;
    }
L_00162708:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_0016270c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_00162710:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00162714:;
    {
        goto L_001625b4;
    }
}

/* _ZN4CCar9UpdateLapEv @ 00162720 (arm) */
void fn_00162720(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162720:;
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
L_00162724:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00162728:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_0016272c:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_00162730:;
    {
        cpu->r[7] = 0x0000168cu;
    }
L_00162734:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00162738:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0016273c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00162740:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162744:;
    {
        cpu->r[9] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00162748:;
    {
        cpu->r[5] = rd32(0x00162750u + + 0x358u);
    }
L_0016274c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00162750:;
    {
        cpu->r[14] = 0x00162754u; fn_00173e14(cpu);
    }
L_00162754:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016275cu, cpu->r[5], 0, 0);
    }
L_00162758:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016275c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1acu);
    }
L_00162760:;
    {
        cpu->r[14] = 0x00162764u; fn_00180968(cpu);
    }
L_00162764:;
    {
        cpu->r[1] = rd32(cpu->r[10] + + 0x1cu);
    }
L_00162768:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0016276c:;
    {
        cpu->r[14] = 0x00162770u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00162770:;
    {
        cpu->r[2] = 0x00001688u;
    }
L_00162774:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00162778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0016277c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000003u;
        }
    }
L_00162780:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00162784:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00162788:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_0016278c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001627b4;
        }
    }
L_00162790:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_00162794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001627d0;
        }
    }
L_00162798:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016279c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001627a8;
        }
    }
L_001627a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001627a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001627e8;
        }
    }
L_001627a8:;
    {
        cpu->r[3] = 0x00001688u;
    }
L_001627ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001627b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001627b4u)) return;
    }
L_001627b4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000003u, 1, 1);
    }
L_001627b8:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
        }
    }
L_001627bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001627c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001627c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001688u;
        }
    }
L_001627c8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_001627cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001627d0u)) return;
    }
L_001627d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001627d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001627d8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_001627dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001688u;
        }
    }
L_001627e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_001627e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001627e8u)) return;
    }
L_001627e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001627ec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001627f0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001627f4:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_001627f8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001627fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00162800:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162a64;
        }
    }
L_00162804:;
    {
        cpu->r[3] = 0x00001674u;
    }
L_00162808:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00001640u, 0, 0);
    }
L_0016280c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_00162810:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000038u, 0, 0);
    }
L_00162814:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00162818:;
    {
        cpu->r[3] = 0x00001670u;
    }
L_0016281c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00162820:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00162824:;
    {
        cpu->r[14] = 0x00162828u; fn_0015d718(cpu);
    }
L_00162828:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0016282c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00162830:;
    {
        cpu->r[14] = 0x00162834u; fn_0015d718(cpu);
    }
L_00162834:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_00162838:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001629f4;
        }
    }
L_0016283c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162840:;
    {
        cpu->r[9] = 0x00001740u;
    }
L_00162844:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_00162848:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016284c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016296c;
        }
    }
L_00162850:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00162854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016296c;
        }
    }
L_00162858:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016285c:;
    {
        cpu->r[14] = 0x00162860u; fn_0015d920(cpu);
    }
L_00162860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016296c;
        }
    }
L_00162868:;
    {
        cpu->r[3] = 0x00001670u;
    }
L_0016286c:;
    {
        cpu->r[7] = rd32(0x00162874u + + 0x238u);
    }
L_00162870:;
    {
        cpu->r[2] = 0x00001678u;
    }
L_00162874:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00162878:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016287c:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_00162880:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00162884:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00162888:;
    {
        cpu->r[11] = rd32(cpu->r[3]);
    }
L_0016288c:;
    {
        cpu->r[14] = 0x00162890u; fn_0015d718(cpu);
    }
L_00162890:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00162894:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00162898:;
    {
        cpu->r[14] = 0x0016289cu; fn_00097254(cpu);
    }
L_0016289c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001628a0:;
    {
        cpu->r[1] = 0x00001c7cu;
    }
L_001628a4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001628a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001628ac:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001628b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001628b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001628b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000003e8u, 0, 0);
    }
L_001628bc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_001628c0:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_001628c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001628c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_001628cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162970;
        }
    }
L_001628d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001628d4:;
    {
        cpu->r[14] = 0x001628d8u; fn_0015d920(cpu);
    }
L_001628d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001628dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162970;
        }
    }
L_001628e0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001628e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001628e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162970;
        }
    }
L_001628ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001628f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001628f4:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001628f8:;
    {
        cpu->r[14] = 0x001628fcu; fn_0015d718(cpu);
    }
L_001628fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162900:;
    {
        cpu->r[3] = 0x00003e74u;
    }
L_00162904:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00162908:;
    {
        cpu->r[2] = 0x0000e100u;
    }
L_0016290c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00162910:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00043000u, 0, 0);
    }
L_00162914:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00022400u, 0, 0);
    }
L_00162918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000174u, 0, 0);
    }
L_0016291c:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_00162920:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000074u, 0, 0);
    }
L_00162924:;
    {
        cpu->r[14] = 0x00162928u; imp_memcpy(cpu); /* memcpy */
    }
L_00162928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016292c:;
    {
        cpu->r[2] = 0x00012c00u;
    }
L_00162930:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00162934:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00051000u, 0, 0);
    }
L_00162938:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00030400u, 0, 0);
    }
L_0016293c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000274u, 0, 0);
    }
L_00162940:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000174u, 0, 0);
    }
L_00162944:;
    {
        cpu->r[14] = 0x00162948u; imp_memcpy(cpu); /* memcpy */
    }
L_00162948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016294c:;
    {
        cpu->r[2] = 0x00004b00u;
    }
L_00162950:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00162954:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_00162958:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001d800u, 0, 0);
    }
L_0016295c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000174u, 0, 0);
    }
L_00162960:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000274u, 0, 0);
    }
L_00162964:;
    {
        cpu->r[14] = 0x00162968u; imp_memcpy(cpu); /* memcpy */
    }
L_00162968:;
    {
        goto L_00162970;
    }
L_0016296c:;
    {
        cpu->r[7] = rd32(0x00162974u + + 0x138u);
    }
L_00162970:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00162974:;
    {
        cpu->r[2] = 0x00001674u;
    }
L_00162978:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016297c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00162980:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_00162984:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00162988:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0016298c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00162990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001629a4;
        }
    }
L_00162994:;
    {
        cpu->r[2] = 0x00005f58u;
    }
L_00162998:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0016299c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001629a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001629b4;
        }
    }
L_001629a4:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_001629a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001629ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001629b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001629b4:;
    {
        cpu->r[2] = 0x0000173cu;
    }
L_001629b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001629bc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001629c0:;
    {
        cpu->r[2] = 0x000017a4u;
    }
L_001629c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001629c8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001629cc:;
    {
        cpu->r[2] = 0x000017a0u;
    }
L_001629d0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001629d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162a0c;
        }
    }
L_001629d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001629dc:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001629e0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001629e4:;
    {
        cpu->r[14] = 0x001629e8u; fn_000c6958(cpu);
    }
L_001629e8:;
    {
        cpu->r[3] = 0x0000168cu;
    }
L_001629ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001629f0:;
    {
        goto L_001627a8;
    }
L_001629f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001629f8:;
    {
        cpu->r[14] = 0x001629fcu; fn_0015d718(cpu);
    }
L_001629fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162a00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00162a04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162840;
        }
    }
L_00162a08:;
    {
        goto L_0016283c;
    }
L_00162a0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00162a10:;
    {
        cpu->r[14] = 0x00162a14u; fn_0015d718(cpu);
    }
L_00162a14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162a18:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001629d8;
        }
    }
L_00162a1c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00162a20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00162a24:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00162a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162a4c;
        }
    }
L_00162a2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162a30:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x41cu);
    }
L_00162a34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00162a38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162a50;
        }
    }
L_00162a3c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00162a40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162a44:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_00162a48:;
    {
        cpu->r[14] = 0x00162a4cu; fn_00161bec(cpu);
    }
L_00162a4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162a50:;
    {
        cpu->r[2] = 0x0000175cu;
    }
L_00162a54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00162a58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00162a5c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00162a60:;
    {
        goto L_001629dc;
    }
L_00162a64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162a68:;
    {
        cpu->r[14] = 0x00162a6cu; fn_0015d920(cpu);
    }
L_00162a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162804;
        }
    }
L_00162a74:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00162a78:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00162a7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00162a80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162804;
        }
    }
L_00162a84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162a88:;
    {
        cpu->r[2] = 0x00003e78u;
    }
L_00162a8c:;
    {
        cpu->r[1] = 0x00003e7cu;
    }
L_00162a90:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00162a94:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_00162a98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00162a9c:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[3]);
    }
L_00162aa0:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_00162aa4:;
    {
        goto L_00162804;
    }
}

/* _ZN4CCar32UpdateMultiplayerAfterCollisionsEPK10RoadStruct @ 00162ab0 (arm) */
void fn_00162ab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162ab0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00162ab4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162ab8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162abc:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00162ac0:;
    {
        cpu->r[14] = 0x00162ac4u; fn_00177118(cpu);
    }
L_00162ac4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162ac8:;
    {
        cpu->r[14] = 0x00162accu; fn_00179204(cpu);
    }
L_00162acc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162ad0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00162ad4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00162ad8u)) return;
        }
    }
L_00162ad8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162adc:;
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
L_00162ae0:;
    {
        return fn_00162720(cpu);
    }
}

/* _ZN4CCar11SafeRespawnEiPK10RoadStructR11CMultiArrayIPS_E @ 00162ae4 (arm) */
void fn_00162ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00162ae4:;
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
L_00162ae8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00162aec:;
    {
        cpu->r[5] = rd32(0x00162af4u + + 0x610u);
    }
L_00162af0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00162af4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00162af8:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_00162afc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00162b00:;
    {
        cpu->r[5] = add_flags(cpu, 0x00162b08u, cpu->r[5], 0, 0);
    }
L_00162b04:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00162b08:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00162b0c:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_00162b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001630e4;
        }
    }
L_00162b14:;
    {
        cpu->r[11] = rd32(0x00162b1cu + + 0x5ecu);
    }
L_00162b18:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00162b1c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00162b20:;
    {
        cpu->r[3] = 0x00001cecu;
    }
L_00162b24:;
    {
        cpu->r[2] = 0x00001cf4u;
    }
L_00162b28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00162b2c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00162b30:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00162b34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00162b38:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[1]);
    }
L_00162b3c:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[1]);
    }
L_00162b40:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00162b44:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[1]);
    }
L_00162b48:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00162b4c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00162b50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00162b54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00162b58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00162cac;
        }
    }
L_00162b5c:;
    {
        cpu->r[14] = 0x00008cc0u;
    }
L_00162b60:;
    {
        cpu->r[0] = 0x00001ce8u;
    }
L_00162b64:;
    {
        cpu->r[10] = 0x00008cbcu;
    }
L_00162b68:;
    {
        cpu->r[8] = 0x00008cc4u;
    }
L_00162b6c:;
    {
        cpu->r[2] = 0x00008cb8u;
    }
L_00162b70:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_00162b74:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00162b78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00162b7c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00162b80:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00162b84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00162b88:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00162b8c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00162b90:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00162b94:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00162b98:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_00162b9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00162ba0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00162ba4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x00001cf0u;
        }
    }
L_00162ba8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 0);
        }
    }
L_00162bac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00162bb0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00162bb4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[14] = rd32(cpu->r[1] + cpu->r[6]);
        }
    }
L_00162bb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = rd32(cpu->r[1] + cpu->r[0]);
        }
    }
L_00162bbc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_00162bc0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00162bc4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[10]);
    }
L_00162bc8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_00162bcc:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[8]);
    }
L_00162bd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00162bd4:;
    {
        cpu->r[9] = rd32(cpu->r[14]);
    }
L_00162bd8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00162bdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00163098;
        }
    }
L_00162be0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00162be4:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_00162be8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00162bec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_00162bf0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_00162bf4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
        }
    }
L_00162bf8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
        }
    }
L_00162bfc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_00162c00:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00162c04:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00162c08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00162c0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00162c10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00162c14:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00162c18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162c2c;
        }
    }
L_00162c20:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0xd00u);
    }
L_00162c24:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_00162c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162c8c;
        }
    }
L_00162c2c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00162c30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00162c34:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00162c38:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_00162c3c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00162c40:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_00162c44:;
    {
        cpu->r[14] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_00162c48:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_00162c4c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[14], 1, 1);
    }
L_00162c50:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00162be8;
        }
    }
L_00162c54:;
    {
        cpu->r[0] = 0x00001cecu;
    }
L_00162c58:;
    {
        cpu->r[12] = 0x00001cf4u;
    }
L_00162c5c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00162c60:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_00162c64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00162c68:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00162c6c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00162c70:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00162c74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00162c78:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00162c7c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 1);
    }
L_00162c80:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00162ca8;
        }
    }
L_00162c84:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00162c88:;
    {
        goto L_00162b9c;
    }
L_00162c8c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00162c90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00162c94:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00162c98:;
    {
        cpu->r[14] = 0x00162c9cu; fn_000afd70(cpu);
    }
L_00162c9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00162ca0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00162ca4:;
    {
        goto L_00162c2c;
    }
L_00162ca8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_00162cac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162cb0:;
    {
        cpu->r[9] = 0x00008c50u;
    }
L_00162cb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162cb8:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_00162cbc:;
    {
        cpu->r[14] = 0x00162cc0u; fn_00180968(cpu);
    }
L_00162cc0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162cc4:;
    {
        cpu->r[7] = 0x00001788u;
    }
L_00162cc8:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_00162ccc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00162cd0:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[0]);
    }
L_00162cd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162cd8:;
    {
        cpu->r[14] = 0x00162cdcu; fn_00180634(cpu);
    }
L_00162cdc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00162ce0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162ce4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00162ce8:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_00162cec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162cf0:;
    {
        cpu->r[14] = 0x00162cf4u; fn_001805dc(cpu);
    }
L_00162cf4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00162cf8:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[0]);
    }
L_00162cfc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00162d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162d04:;
    {
        cpu->r[14] = 0x00162d08u; fn_00173e14(cpu);
    }
L_00162d08:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00001000u, cpu->r[10], 1, 0);
    }
L_00162d0c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00162d10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162d14:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00162d18:;
    {
        cpu->r[14] = 0x00162d1cu; fn_00181124(cpu);
    }
L_00162d1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00162d20:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00162d24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_00162d28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162d2c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_00162d30:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00162d34:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00162d38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00162d3c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00162d40:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00162d44:;
    {
        cpu->r[14] = 0x00162d48u; fn_00181124(cpu);
    }
L_00162d48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162d4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00162d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00162d54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162d58:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x18u);
    }
L_00162d5c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[9] = v1;
    }
L_00162d60:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00162d64:;
    {
        cpu->r[14] = 0x00162d68u; fn_00181124(cpu);
    }
L_00162d68:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162d6c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[9] = v;
    }
L_00162d70:;
    {
        uint32_t v = cpu->r[5] * cpu->r[10]; cpu->r[5] = v;
    }
L_00162d74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_00162d78:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00162d7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00162d80:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x8u);
    }
L_00162d84:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_00162d88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00162d8c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_00162d90:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00162d94:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00162d98:;
    {
        cpu->r[14] = 0x00162d9cu; fn_00181124(cpu);
    }
L_00162d9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00162da0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_00162da4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[12] = v;
    }
L_00162da8:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00001000u, cpu->r[3], 1, 0);
    }
L_00162dac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00162db0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00162db4:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x8u);
    }
L_00162db8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00162dbc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00162dc0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_00162dc4:;
    {
        uint32_t v = cpu->r[14] * cpu->r[10]; cpu->r[14] = v;
    }
L_00162dc8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8] + cpu->r[9]; cpu->r[9] = v;
    }
L_00162dcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00162dd0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10]; cpu->r[1] = v;
    }
L_00162dd4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8] + cpu->r[5]; cpu->r[5] = v;
    }
L_00162dd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_00162ddc:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_00162de0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8] + cpu->r[12]; cpu->r[12] = v;
    }
L_00162de4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00162de8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00162dec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00162df0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9]; cpu->r[9] = v;
    }
L_00162df4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[10]; cpu->r[0] = v;
    }
L_00162df8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_00162dfc:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00162e00:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8] + cpu->r[14]; cpu->r[14] = v;
    }
L_00162e04:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00162e08:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_00162e0c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8] + cpu->r[1]; cpu->r[1] = v;
    }
L_00162e10:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_00162e14:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_00162e18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00162e1c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00162e20:;
    {
        uint32_t v = cpu->r[5] * cpu->r[8] + cpu->r[0]; cpu->r[0] = v;
    }
L_00162e24:;
    {
        uint32_t v = cpu->r[2] * cpu->r[14]; cpu->r[5] = v;
    }
L_00162e28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00162e2c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_00162e30:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00162e34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[9]; cpu->r[14] = v;
    }
L_00162e38:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[12]; cpu->r[0] = v;
    }
L_00162e3c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[5]; cpu->r[3] = v;
    }
L_00162e40:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_00162e44:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[14]);
    }
L_00162e48:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00162e4c:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[0]);
    }
L_00162e50:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00162e54:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[3]);
    }
L_00162e58:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00162e5c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00162e60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00162e64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00162e68:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00162f2c;
        }
    }
L_00162e6c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_00162e70:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00162e74:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_00162e78:;
    {
        cpu->r[11] = cpu->r[8];
    }
L_00162e7c:;
    {
        goto L_00162e90;
    }
L_00162e80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00162e84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00162e88:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00162e8c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00162f20;
        }
    }
L_00162e90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00162e94:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00162e98:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_00162e9c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[6]);
        }
    }
L_00162ea0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_00162ea4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
        }
    }
L_00162ea8:;
    {
        cpu->r[9] = rd32(cpu->r[2]);
    }
L_00162eac:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00162eb0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
        }
    }
L_00162eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162e80;
        }
    }
L_00162eb8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[7]);
    }
L_00162ebc:;
    {
        { uint32_t v = cpu->r[2] & 0x00100000u; set_nz(cpu, v); }
    }
L_00162ec0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162e80;
        }
    }
L_00162ec4:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x3d4u);
    }
L_00162ec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162ecc:;
    {
        cpu->r[14] = rd32(cpu->r[9] + + 0x3dcu);
    }
L_00162ed0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00162ed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00162ed8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00162edc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00162ee0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00162ee4:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[8] = v;
    }
L_00162ee8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00162eec:;
    {
        cpu->r[14] = 0x00162ef0u; fn_001721e4(cpu);
    }
L_00162ef0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00162ef4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00162ef8:;
    {
        cpu->r[14] = 0x00162efcu; fn_001721e4(cpu);
    }
L_00162efc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00162f00:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00162f04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00162fe8;
        }
    }
L_00162f08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00162f0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00162f10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00162f14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00162f18:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00162f1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00162e90;
        }
    }
L_00162f20:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_00162f24:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_00162f28:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00162f2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00162f30:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00162f34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00162f38:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00162f3c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00162f40:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_00162f44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_00162f48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00162f4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016304c;
        }
    }
L_00162f50:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00162f54:;
    {
        goto L_00162f68;
    }
L_00162f58:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_00162f5c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_00162f60:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00162f64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016304c;
        }
    }
L_00162f68:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x40u);
    }
L_00162f6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00162f70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162f74:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00162f78:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00162f7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00162f80:;
    {
        cpu->r[14] = 0x00162f84u; fn_0017c4f0(cpu);
    }
L_00162f84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00162f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00162f58;
        }
    }
L_00162f8c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00162f90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162f94:;
    {
        cpu->r[14] = 0x00162f98u; fn_00173e14(cpu);
    }
L_00162f98:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00162f9c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00162fa0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00162fa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162fa8:;
    {
        cpu->r[14] = 0x00162facu; fn_00173e14(cpu);
    }
L_00162fac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00162fb0:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[9]);
    }
L_00162fb4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000006u, 1, 1);
    }
L_00162fb8:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[5]);
    }
L_00162fbc:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_00162fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001630a0;
        }
    }
L_00162fc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00162fc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000009u, 1, 1);
    }
L_00162fcc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00163058;
        }
    }
L_00162fd0:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00162fd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00162fd8:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_00162fdc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00162fe0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00162fe4:;
    {
        goto L_00162cfc;
    }
L_00162fe8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00162fec:;
    {
        cpu->r[14] = 0x00162ff0u; fn_001721e4(cpu);
    }
L_00162ff0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00162ff4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00162ff8:;
    {
        cpu->r[14] = 0x00162ffcu; fn_001721e4(cpu);
    }
L_00162ffc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00163000:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00163004:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_00163008:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016300c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00163010:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00163014:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00163018:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00162f08;
        }
    }
L_0016301c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00163020:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00163024:;
    {
        cpu->r[8] = cpu->r[11];
    }
L_00163028:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016302c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00163030:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_00163034:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00163038:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_0016303c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_00163040:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x48u);
    }
L_00163044:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00163048:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00162f50;
        }
    }
L_0016304c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00163050:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163054:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00162f8c;
        }
    }
L_00163058:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016305c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163060:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00163064:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_00163068:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016306c:;
    {
        wr32(cpu->r[4] + + 0x34cu, cpu->r[3]);
    }
L_00163070:;
    {
        wr32(cpu->r[4] + + 0x350u, cpu->r[3]);
    }
L_00163074:;
    {
        cpu->r[14] = 0x00163078u; fn_001745cc(cpu);
    }
L_00163078:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00163080u + + 0x80u);
    }
L_0016307c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163080:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00163084:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00163088:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016308c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00163090:;
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
L_00163094:;
    {
        return fn_00162720(cpu);
    }
L_00163098:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0016309c:;
    {
        goto L_00162c54;
    }
L_001630a0:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_001630a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001630a8:;
    {
        cpu->r[14] = 0x001630acu; fn_00173e58(cpu);
    }
L_001630ac:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001630b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001630b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001630b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001630bc:;
    {
        cpu->r[14] = 0x001630c0u; fn_001805dc(cpu);
    }
L_001630c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001630c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001630c8:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001630cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001630d0:;
    {
        cpu->r[14] = 0x001630d4u; fn_00180634(cpu);
    }
L_001630d4:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[5]);
    }
L_001630d8:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[10]);
    }
L_001630dc:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_001630e0:;
    {
        goto L_00162fd4;
    }
L_001630e4:;
    {
        cpu->r[11] = rd32(0x001630ecu + + 0x1cu);
    }
L_001630e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001630ec:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001630f0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001630f4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001630f8:;
    {
        cpu->r[14] = 0x001630fcu; fn_000c39b0(cpu);
    }
L_001630fc:;
    {
        goto L_00162b18;
    }
}

/* _ZN4CCar16RespawnBehindCarEPS_iiPK10RoadStructR11CMultiArrayIS0_E @ 0016310c (arm) */
void fn_0016310c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016310c:;
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
L_00163110:;
    {
        cpu->r[7] = 0x00001788u;
    }
L_00163114:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_00163118:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0016311c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00163120:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00163124:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00163128:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0016312c:;
    {
        { uint32_t v = cpu->r[2] & 0x00100000u; set_nz(cpu, v); }
    }
L_00163130:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_00163134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001632b8;
        }
    }
L_00163138:;
    {
        cpu->r[11] = 0x00001788u;
    }
L_0016313c:;
    {
        cpu->r[3] = 0x0000f3b7u;
    }
L_00163140:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x7fefu << 16);
    }
L_00163144:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00163148:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016314c:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[3]);
    }
L_00163150:;
    {
        cpu->r[3] = 0x0000182cu;
    }
L_00163154:;
    {
        cpu->r[2] = 0x00001824u;
    }
L_00163158:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_0016315c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163160:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_00163164:;
    {
        cpu->r[3] = 0x00001828u;
    }
L_00163168:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0016316c:;
    {
        cpu->r[2] = 0x000003e8u;
    }
L_00163170:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_00163174:;
    {
        cpu->r[3] = 0x00001830u;
    }
L_00163178:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[9]);
    }
L_0016317c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00163180:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00163184:;
    {
        wr32(cpu->r[4] + + 0x48cu, cpu->r[9]);
    }
L_00163188:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_0016318c:;
    {
        cpu->r[3] = 0x000018b4u;
    }
L_00163190:;
    {
        wr32(cpu->r[4] + + 0x488u, cpu->r[9]);
    }
L_00163194:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_00163198:;
    {
        cpu->r[3] = 0x000018b0u;
    }
L_0016319c:;
    {
        wr32(cpu->r[4] + + 0x4a0u, cpu->r[9]);
    }
L_001631a0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631a4:;
    {
        cpu->r[3] = 0x000018acu;
    }
L_001631a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631ac:;
    {
        cpu->r[3] = 0x00001834u;
    }
L_001631b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631b4:;
    {
        cpu->r[3] = 0x00001844u;
    }
L_001631b8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631bc:;
    {
        cpu->r[3] = 0x0000184cu;
    }
L_001631c0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631c4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001631c8:;
    {
        cpu->r[14] = 0x001631d0u;
    }
L_001631cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001631d0u)) return;
    }
L_001631d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001631d4:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[9]);
    }
L_001631d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_001631dc:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_001631e0:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[9]);
    }
L_001631e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631e8:;
    {
        cpu->r[3] = 0x00001810u;
    }
L_001631ec:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[9]);
    }
L_001631f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_001631f4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001631f8:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[3]);
    }
L_001631fc:;
    {
        cpu->r[3] = 0x000016b4u;
    }
L_00163200:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[9]);
    }
L_00163204:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_00163208:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[9]);
    }
L_0016320c:;
    {
        wr32(cpu->r[4] + + 0x4ccu, cpu->r[9]);
    }
L_00163210:;
    {
        wr32(cpu->r[4] + + 0x4c8u, cpu->r[9]);
    }
L_00163214:;
    {
        wr32(cpu->r[4] + + 0x4c4u, cpu->r[9]);
    }
L_00163218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001632a8;
        }
    }
L_0016321c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00163220:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163224:;
    {
        cpu->r[14] = 0x00163228u; fn_00173e58(cpu);
    }
L_00163228:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016322c:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[0]);
    }
L_00163230:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00163234:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00163238:;
    {
        cpu->r[14] = 0x0016323cu; fn_001805dc(cpu);
    }
L_0016323c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00163240:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00163244:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[0]);
    }
L_00163248:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016324c:;
    {
        cpu->r[14] = 0x00163250u; fn_00180634(cpu);
    }
L_00163250:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x1d8u);
    }
L_00163254:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00163258:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0016325c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_00163260:;
    {
        wr32(cpu->r[4] + + 0x1d8u, cpu->r[12]);
    }
L_00163264:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[0]);
    }
L_00163268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016326c:;
    {
        cpu->r[14] = 0x00163270u; fn_00162ae4(cpu);
    }
L_00163270:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163274:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00163278:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016327c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00163280:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00163284:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00163288:;
    {
        cpu->r[14] = 0x0016328cu; fn_00173920(cpu);
    }
L_0016328c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163290:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000084u, 0, 0);
    }
L_00163294:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00163298:;
    {
        cpu->r[14] = 0x001632a0u;
    }
L_0016329c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001632a0u)) return;
    }
L_001632a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001632a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001632a8u)) return;
    }
L_001632a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001632ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001632b0:;
    {
        cpu->r[14] = 0x001632b4u; fn_00173e14(cpu);
    }
L_001632b4:;
    {
        goto L_00163228;
    }
L_001632b8:;
    {
        cpu->r[1] = rd32(0x001632c0u + + 0x34u);
    }
L_001632bc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001632c0:;
    {
        cpu->r[12] = rd32(0x001632c8u + + 0x30u);
    }
L_001632c4:;
    {
        cpu->r[14] = 0x00002476u;
    }
L_001632c8:;
    {
        cpu->r[2] = rd32(0x001632d0u + + 0x2cu);
    }
L_001632cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001632d4u, cpu->r[1], 0, 0);
    }
L_001632d0:;
    {
        cpu->r[3] = rd32(0x001632d8u + + 0x28u);
    }
L_001632d4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001632dcu, cpu->r[12], 0, 0);
    }
L_001632d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001632e0u, cpu->r[2], 0, 0);
    }
L_001632dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000f4u, 0, 0);
    }
L_001632e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001632e8u, cpu->r[3], 0, 0);
    }
L_001632e4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001632e8:;
    {
        cpu->r[14] = 0x001632ecu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001632ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001632f0:;
    {
        goto L_00163138;
    }
}

/* _ZN4CCar14NotifyTakeDownERS_ @ 00163304 (arm) */
void fn_00163304(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00163304:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00163308:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016330c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00163310:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00163314:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00163318:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0016331c:;
    {
        cpu->r[14] = 0x00163320u; fn_000ba990(cpu);
    }
L_00163320:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163324:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00163328u)) return;
        }
    }
L_00163328:;
    {
        cpu->r[0] = 0x00000019u;
    }
L_0016332c:;
    {
        cpu->r[14] = 0x00163330u; fn_00093f34(cpu);
    }
L_00163330:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00163334:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163338:;
    {
        cpu->r[14] = 0x0016333cu; fn_0015ec14(cpu);
    }
L_0016333c:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_00163340:;
    {
        cpu->r[3] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_00163344:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001633a4;
        }
    }
L_0016334c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163350:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163354:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001633a4;
        }
    }
L_0016335c:;
    {
        cpu->r[3] = 0x00001d54u;
    }
L_00163360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00163364:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00163368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00163418;
        }
    }
L_0016336c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00163370:;
    {
        cpu->r[5] = 0x00008548u;
    }
L_00163374:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00163378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016337c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00163380:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00163384:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00163388:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x204u);
    }
L_0016338c:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[12]);
    }
L_00163390:;
    {
        cpu->r[14] = 0x00163394u; fn_00161bec(cpu);
    }
L_00163394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00163398:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0016339c:;
    {
        wr32(cpu->r[3] + + 0x204u, cpu->r[6]);
    }
L_001633a0:;
    {
        goto L_001633fc;
    }
L_001633a4:;
    {
        cpu->r[5] = 0x0000176cu;
    }
L_001633a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001633ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001633b0:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_001633b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001633b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016342c;
        }
    }
L_001633bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001633c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001633c4:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001633c8:;
    {
        cpu->r[14] = 0x001633ccu; fn_00161bec(cpu);
    }
L_001633cc:;
    {
        cpu->r[14] = 0x001633d0u; fn_0009b4d0(cpu);
    }
L_001633d0:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_001633d4:;
    {
        cpu->r[2] = 0x00004e20u;
    }
L_001633d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001633dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001633e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001633e4:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x0000176cu;
        }
    }
L_001633e8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001633ec:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001633f0:;
    {
        cpu->r[14] = 0x001633f4u; fn_0009b4d0(cpu);
    }
L_001633f4:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_001633f8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001633fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163400:;
    {
        cpu->r[14] = 0x00163404u; fn_0015d920(cpu);
    }
L_00163404:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163408:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016340cu)) return;
        }
    }
L_0016340c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163410:;
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
L_00163414:;
    {
        return fn_00160698(cpu);
    }
L_00163418:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016341c:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_00163420:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00163424:;
    {
        cpu->r[14] = 0x00163428u; fn_00161bec(cpu);
    }
L_00163428:;
    {
        goto L_001633fc;
    }
L_0016342c:;
    {
        cpu->r[14] = 0x00163430u; fn_0009b4d0(cpu);
    }
L_00163430:;
    {
        cpu->r[3] = 0x00001770u;
    }
L_00163434:;
    {
        cpu->r[2] = 0x00004e20u;
    }
L_00163438:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016343c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00163440:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00163444:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001633bc;
        }
    }
L_00163448:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016344c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00163450:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00163454:;
    {
        cpu->r[14] = 0x00163458u; fn_00161bec(cpu);
    }
L_00163458:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016345c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_00163460:;
    {
        goto L_001633f0;
    }
}

/* _ZN4CCar14CollideWithCarEPS_b @ 00163464 (arm) */
void fn_00163464(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00163464:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00163468:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0016346c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00163470:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00163474:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00163478:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0016347c:;
    {
        cpu->r[14] = 0x00163480u; fn_0017c944(cpu);
    }
L_00163480:;
    {
        cpu->r[5] = rd32(0x00163488u + + 0x37cu);
    }
L_00163484:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016348cu, cpu->r[5], 0, 0);
    }
L_00163488:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016348c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163660;
        }
    }
L_00163490:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163494:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00163498:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016349c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001635a8;
        }
    }
L_001634a0:;
    {
        cpu->r[6] = rd32(0x001634a8u + + 0x360u);
    }
L_001634a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001634a8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001634ac:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_001634b0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001634b4:;
    {
        cpu->r[14] = 0x001634b8u; fn_00188158(cpu);
    }
L_001634b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001634bc:;
    {
        cpu->r[14] = 0x001634c0u; fn_00162488(cpu);
    }
L_001634c0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001634c4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001634c8:;
    {
        wr32(cpu->r[4] + + 0x488u, cpu->r[7]);
    }
L_001634cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001634d0:;
    {
        wr32(cpu->r[7] + + 0x488u, cpu->r[4]);
    }
L_001634d4:;
    {
        uint32_t v = cpu->r[2] | 0x00000080u; cpu->r[2] = v;
    }
L_001634d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001634dc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001634e0:;
    {
        uint32_t v = cpu->r[2] | 0x00000080u; cpu->r[2] = v;
    }
L_001634e4:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001634e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163650;
        }
    }
L_001634ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_001634f0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001634f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001635d0;
        }
    }
L_001634f8:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_001634fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00163500:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_00163504:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001635d0;
        }
    }
L_00163508:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016350c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00163510:;
    {
        cpu->r[14] = 0x00163514u; fn_0015e194(cpu);
    }
L_00163514:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00163518:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_0016351c:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_00163520:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[2]);
    }
L_00163524:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163528:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_0016352c:;
    {
        uint32_t v = cpu->r[2] | 0x40000000u; cpu->r[2] = v;
    }
L_00163530:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[2]);
    }
L_00163534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637b4;
        }
    }
L_00163538:;
    {
        cpu->r[2] = 0x00001654u;
    }
L_0016353c:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_00163540:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00163544:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163548:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001635e4;
        }
    }
L_0016354c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00163550:;
    {
        cpu->r[14] = 0x00163554u; fn_0015e220(cpu);
    }
L_00163554:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00163558:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016355c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163750;
        }
    }
L_00163560:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163564:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00163568:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016356c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163640;
        }
    }
L_00163570:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00163574:;
    {
        { uint32_t v = cpu->r[3] & 0x0000000fu; set_nz(cpu, v); }
    }
L_00163578:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001636c0;
        }
    }
L_0016357c:;
    {
        cpu->r[3] = 0x00001684u;
    }
L_00163580:;
    {
        cpu->r[2] = 0x000017acu;
    }
L_00163584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00163588:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016358c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00163590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00163594:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_00163598:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_0016359c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
        }
    }
L_001635a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001635a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001635a8u)) return;
    }
L_001635a8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001635ac:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_001635b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001634b8;
        }
    }
L_001635b4:;
    {
        cpu->r[6] = rd32(0x001635bcu + + 0x24cu);
    }
L_001635b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001635bc:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001635c0:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_001635c4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001635c8:;
    {
        cpu->r[14] = 0x001635ccu; fn_00188158(cpu);
    }
L_001635cc:;
    {
        goto L_001634b8;
    }
L_001635d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001635d4:;
    {
        cpu->r[14] = 0x001635d8u; fn_0015e220(cpu);
    }
L_001635d8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_001635dc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001635e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163674;
        }
    }
L_001635e4:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_001635e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_001635ec:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_001635f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016354c;
        }
    }
L_001635f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001635f8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_001635fc:;
    {
        cpu->r[14] = 0x00163600u; fn_0015e194(cpu);
    }
L_00163600:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[6]);
    }
L_00163604:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00163608:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_0016360c:;
    {
        wr32(cpu->r[7] + cpu->r[6], cpu->r[2]);
    }
L_00163610:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163614:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00163618:;
    {
        uint32_t v = cpu->r[3] | 0x40000000u; cpu->r[3] = v;
    }
L_0016361c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_00163620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637a4;
        }
    }
L_00163624:;
    {
        cpu->r[3] = 0x00001654u;
    }
L_00163628:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_0016362c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_00163630:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163634:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00163638:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016363c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163570;
        }
    }
L_00163640:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00163644:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001635a0;
        }
    }
L_0016364c:;
    {
        goto L_00163570;
    }
L_00163650:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163654:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00163658:;
    {
        cpu->r[14] = 0x0016365cu; fn_00175ea0(cpu);
    }
L_0016365c:;
    {
        goto L_001634ec;
    }
L_00163660:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163664:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00163668:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016366c:;
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
L_00163670:;
    {
        return fn_00161ce0(cpu);
    }
L_00163674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48cu);
    }
L_00163678:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0016367c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637f4;
        }
    }
L_00163680:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00163684:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00163688:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016368c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001636ac;
        }
    }
L_00163690:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_00163694:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_00163698:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016369c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163744;
        }
    }
L_001636a0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_001636a4:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_001636a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163744;
        }
    }
L_001636ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001636b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001636b4:;
    {
        cpu->r[14] = 0x001636b8u; fn_00162000(cpu);
    }
L_001636b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_001636bc:;
    {
        goto L_00163544;
    }
L_001636c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001636c4:;
    {
        cpu->r[14] = 0x001636c8u; fn_0015d920(cpu);
    }
L_001636c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001636cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637d0;
        }
    }
L_001636d0:;
    {
        cpu->r[3] = 0x000018ccu;
    }
L_001636d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001636d8:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_001636dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637c8;
        }
    }
L_001636e0:;
    {
        cpu->r[6] = rd32(0x001636e8u + + 0x120u);
    }
L_001636e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001636e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001636ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001636f0:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001636f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001636f8:;
    {
        cpu->r[14] = 0x001636fcu; fn_000fd224(cpu);
    }
L_001636fc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00163700:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016357c;
        }
    }
L_00163704:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00163708:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0016370c:;
    {
        cpu->r[14] = 0x00163710u; fn_000964c8(cpu);
    }
L_00163710:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00163714:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00163718:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0016371c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00163720:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00163724:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x490u);
    }
L_00163728:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_0016372c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_00163730:;
    {
        cpu->r[0] = 0x000018ccu;
    }
L_00163734:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[1]);
    }
L_00163738:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0016373c:;
    {
        cpu->r[14] = 0x00163740u; fn_000fd248(cpu);
    }
L_00163740:;
    {
        goto L_0016357c;
    }
L_00163744:;
    {
        cpu->r[14] = 0x00163748u; fn_0009b4d0(cpu);
    }
L_00163748:;
    {
        wr32(cpu->r[7] + + 0x544u, cpu->r[0]);
    }
L_0016374c:;
    {
        goto L_001636ac;
    }
L_00163750:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48cu);
    }
L_00163754:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00163758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001637e4;
        }
    }
L_0016375c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00163760:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00163764:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163788;
        }
    }
L_0016376c:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_00163770:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00163774:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163798;
        }
    }
L_0016377c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00163780:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163798;
        }
    }
L_00163788:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016378c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00163790:;
    {
        cpu->r[14] = 0x00163794u; fn_00162000(cpu);
    }
L_00163794:;
    {
        goto L_00163560;
    }
L_00163798:;
    {
        cpu->r[14] = 0x0016379cu; fn_0009b4d0(cpu);
    }
L_0016379c:;
    {
        wr32(cpu->r[7] + + 0x544u, cpu->r[0]);
    }
L_001637a0:;
    {
        goto L_00163788;
    }
L_001637a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001637a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001637ac:;
    {
        cpu->r[14] = 0x001637b0u; fn_00163304(cpu);
    }
L_001637b0:;
    {
        goto L_00163624;
    }
L_001637b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001637b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001637bc:;
    {
        cpu->r[14] = 0x001637c0u; fn_00163304(cpu);
    }
L_001637c0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1dcu);
    }
L_001637c4:;
    {
        goto L_00163538;
    }
L_001637c8:;
    {
        cpu->r[6] = rd32(0x001637d0u + + 0x38u);
    }
L_001637cc:;
    {
        goto L_00163704;
    }
L_001637d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001637d4:;
    {
        cpu->r[14] = 0x001637d8u; fn_0015d920(cpu);
    }
L_001637d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001637dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016357c;
        }
    }
L_001637e0:;
    {
        goto L_001636d0;
    }
L_001637e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4a0u);
    }
L_001637e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001637ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00163560;
        }
    }
L_001637f0:;
    {
        goto L_0016375c;
    }
L_001637f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4a0u);
    }
L_001637f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001637fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016354c;
        }
    }
L_00163800:;
    {
        goto L_00163680;
    }
}

/* _ZN4CCar17CollideWithTraficER11StaticArrayI11CTrafficCarEPK10RoadStructb @ 0016380c (arm) */
void fn_0016380c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016380c:;
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
L_00163810:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00163814:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00163818:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000bcu, 1, 0);
    }
L_0016381c:;
    {
        cpu->r[1] = rd32(0x00163824u + + 0x288u);
    }
L_00163820:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00163824:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00163828:;
    {
        cpu->r[1] = add_flags(cpu, 0x00163830u, cpu->r[1], 0, 0);
    }
L_0016382c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00163830:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00163834:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00163838:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001639f8;
        }
    }
L_0016383c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001639f8;
        }
    }
L_00163840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_00163844:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00163848:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0016384c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00163850:;
    {
        cpu->r[3] = rd32(0x00163858u + + 0x258u);
    }
L_00163854:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00163858:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_0016385c:;
    {
        cpu->r[12] = 0x00006667u;
    }
L_00163860:;
    {
        cpu->r[0] = 0x0000b3d7u;
    }
L_00163864:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x6666u << 16);
    }
L_00163868:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x00ddu << 16);
    }
L_0016386c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000003d4u, 0, 0);
    }
L_00163870:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00163874:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0016387cu + + 0x224u);
    }
L_00163878:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0016387c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00163884u + + 0x220u);
    }
L_00163880:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_00163884:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0016388cu + + 0x21cu);
    }
L_00163888:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0016388c:;
    {
        cpu->r[4] = rd32(cpu->r[8] + + 0x4u);
    }
L_00163890:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_00163894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00163898:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016389c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001639e8;
        }
    }
L_001638a0:;
    {
        cpu->r[10] = 0x00001748u;
    }
L_001638a4:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[3]);
    }
L_001638a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001638ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001638b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001638f8;
        }
    }
L_001638b4:;
    {
        cpu->r[11] = 0x00001744u;
    }
L_001638b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_001638bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001638c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001638f8;
        }
    }
L_001638c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001638c8:;
    {
        cpu->r[14] = 0x001638ccu; fn_001721e4(cpu);
    }
L_001638cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_001638d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001638d4:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_001638d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001638dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001638e0:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_001638e4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001638e8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001638ec:;
    {
        cpu->r[14] = 0x001638f0u; fn_0017a640(cpu);
    }
L_001638f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001638f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163dfc;
        }
    }
L_001638f8:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001638fc:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_00163900:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00163904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163908:;
    {
        cpu->r[14] = 0x00163910u;
    }
L_0016390c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00163910u)) return;
    }
L_00163910:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001639e4;
        }
    }
L_00163918:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1f8u);
    }
L_0016391c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163930;
        }
    }
L_00163924:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00163928:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016392c:;
    {
        cpu->r[14] = 0x00163930u; fn_00174d70(cpu);
    }
L_00163930:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x484u);
    }
L_00163934:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00163938:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[9]);
    }
L_0016393c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00163940:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00163944:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163948:;
    {
        cpu->r[14] = 0x0016394cu; fn_0017c944(cpu);
    }
L_0016394c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163950:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163ab4;
        }
    }
L_00163954:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00163958:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016395c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00163960:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[3]);
        }
    }
L_00163964:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00163968:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0016396c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[3]);
        }
    }
L_00163970:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163974:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[2]);
    }
L_00163978:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016397c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00163980:;
    {
        uint32_t v = cpu->r[10] & 0x00004000u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_00163984:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = rd32(cpu->r[4] + + 0x544u);
        }
    }
L_00163988:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016398c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163f78;
        }
    }
L_00163990:;
    {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[9]);
    }
L_00163994:;
    {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[9]);
    }
L_00163998:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_0016399c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001639a0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_001639a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001639a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001639ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001639b0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001639b4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_001639b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_001639bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001639c0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[12]);
    }
L_001639c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_001639c8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_001639cc:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_001639d0:;
    {
        cpu->r[14] = 0x001639d4u; fn_0018572c(cpu);
    }
L_001639d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001639d8:;
    {
        cpu->r[14] = 0x001639dcu; fn_0015d920(cpu);
    }
L_001639dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001639e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163a04;
        }
    }
L_001639e4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_001639e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001639ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001639f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000680u, 0, 0);
        }
    }
L_001639f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016388c;
        }
    }
L_001639f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_001639fc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00163a00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00163a04u)) return;
    }
L_00163a04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00163a08:;
    {
        cpu->r[14] = 0x00163a0cu; fn_0018572c(cpu);
    }
L_00163a0c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00163a10:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00163a14:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00163a18:;
    {
        vfp_sync_flags(cpu);
    }
L_00163a1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001639e4;
        }
    }
L_00163a20:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4dcu);
    }
L_00163a24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163a28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163a84;
        }
    }
L_00163a2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163a30:;
    {
        cpu->r[10] = 0x00008548u;
    }
L_00163a34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163a38:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163a3c:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00163a40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163a44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00163a48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00163a4c:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163a50:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x204u);
    }
L_00163a54:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163a58:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x208u);
    }
L_00163a5c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00163a60:;
    {
        cpu->r[14] = 0x00163a64u; fn_00161bec(cpu);
    }
L_00163a64:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163a68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00163a6c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163a70:;
    {
        cpu->r[14] = 0x00163a74u; fn_00188284(cpu);
    }
L_00163a74:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163a78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00163a7c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163a80:;
    {
        wr32(cpu->r[2] + + 0x204u, cpu->r[3]);
    }
L_00163a84:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4ddu);
    }
L_00163a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163a8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163f1c;
        }
    }
L_00163a90:;
    {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[9]);
    }
L_00163a94:;
    {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[9]);
    }
L_00163a98:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00163a9c:;
    {
        goto L_001639e8;
    }
L_00163ab4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163ab8:;
    {
        cpu->r[14] = 0x00163abcu; fn_00162488(cpu);
    }
L_00163abc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163ac0:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x484u);
    }
L_00163ac4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163ac8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00163acc:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163ad0:;
    {
        uint32_t v = cpu->r[10] | cpu->r[1]; cpu->r[2] = v;
    }
L_00163ad4:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[2]);
    }
L_00163ad8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163fa8;
        }
    }
L_00163adc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163ae0:;
    {
        cpu->r[14] = 0x00163ae4u; fn_0015d920(cpu);
    }
L_00163ae4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163b24;
        }
    }
L_00163aec:;
    {
        cpu->r[3] = 0x000018ccu;
    }
L_00163af0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163af4:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00163af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164424;
        }
    }
L_00163afc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163b00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163b04:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00163b08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00163b0c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00163b10:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00163b14:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00163b18:;
    {
        cpu->r[14] = 0x00163b1cu; fn_000fd224(cpu);
    }
L_00163b1c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00163b20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164424;
        }
    }
L_00163b24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54cu);
    }
L_00163b28:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00163b2c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00163b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163fc8;
        }
    }
L_00163b34:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163b38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00163b3c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x428u);
    }
L_00163b40:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00163b44:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00163b48:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x430u);
    }
L_00163b4c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163b50:;
    {
        wr32(cpu->r[5] + + 0x488u, cpu->r[4]);
    }
L_00163b54:;
    {
        uint32_t v = cpu->r[2] | 0x00000080u; cpu->r[2] = v;
    }
L_00163b58:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00163b5c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_00163b60:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00163b64:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00163b68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164330;
        }
    }
L_00163b6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_00163b70:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163b74:;
    {
        cpu->r[3] = 0x00001800u;
    }
L_00163b78:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[9]);
    }
L_00163b7c:;
    {
        cpu->r[3] = 0x00001804u;
    }
L_00163b80:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[9]);
    }
L_00163b84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163b98;
        }
    }
L_00163b88:;
    {
        cpu->r[11] = 0x00001788u;
    }
L_00163b8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00163b90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_00163b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163e98;
        }
    }
L_00163b98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163b9c:;
    {
        cpu->r[14] = 0x00163ba0u; fn_0015e220(cpu);
    }
L_00163ba0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163ba4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163ba8:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00163bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163d6c;
        }
    }
L_00163bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00163bb4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016439c;
        }
    }
L_00163bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163bc0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00163bc4:;
    {
        uint32_t v = cpu->r[2] & 0x0000003fu; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00163bc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001642d4;
        }
    }
L_00163bcc:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_00163bd0:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_00163bd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x39cu);
    }
L_00163bd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00163bdc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00163be0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00163be4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00163be8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x39cu, cpu->r[1]);
        }
    }
L_00163bec:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[5] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
        }
    }
L_00163bf0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_00163bf4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_00163bf8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x428u);
    }
L_00163bfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00163c00:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00163c04:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00163c08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00163c0c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 0);
    }
L_00163c10:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_00163c14:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00163c18:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00163c1c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[12]);
    }
L_00163c20:;
    {
        cpu->r[14] = 0x00163c28u;
    }
L_00163c24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00163c28u)) return;
    }
L_00163c28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_00163c2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_00163c30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_00163c34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_00163c38:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00163c3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00163c40:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00163c44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_00163c48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00163c4c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_00163c50:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00163c54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163c58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163c5c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00163c60:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x00000010u; cpu->r[2] = v;
        }
    }
L_00163c64:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[2] | 0x00000020u; cpu->r[2] = v;
        }
    }
L_00163c68:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_00163c6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00163c70:;
    {
        cpu->r[14] = 0x00163c78u;
    }
L_00163c74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00163c78u)) return;
    }
L_00163c78:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_00163c7c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_00163c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_00163c84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_00163c88:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00163c8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00163c90:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00163c94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_00163c98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00163c9c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_00163ca0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_00163ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163cac:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00163cb0:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[9]);
    }
L_00163cb4:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
        }
    }
L_00163cb8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
        }
    }
L_00163cbc:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
    }
L_00163cc0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00163cc4:;
    {
        cpu->r[2] = (cpu->r[2] & ~0xfu) | ((cpu->r[1] & 0xfu) << 0);
    }
L_00163cc8:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00163ccc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163cd0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00163cd4:;
    {
        cpu->r[2] = cpu->r[2] & ~0x10u;
    }
L_00163cd8:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00163cdc:;
    {
        cpu->r[14] = 0x00163ce0u; fn_0018572c(cpu);
    }
L_00163ce0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163ce4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163ce8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163cec:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00163cf0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00163cf4:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00163cf8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00163cfc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_00163d00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_00163d04:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000006eu, 1, 1);
    }
L_00163d08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x0000006eu;
        }
    }
L_00163d0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_00163d10:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_00163d14:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[12] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00163d18:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00163d1c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_00163d20:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 6u, &shc); cpu->r[1] = v;
    }
L_00163d24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_00163d28:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000007u;
        }
    }
L_00163d2c:;
    {
        uint32_t v = cpu->r[1] & ~ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00163d30:;
    {
        cpu->r[2] = (cpu->r[2] & ~0xe0u) | ((cpu->r[1] & 0x7u) << 5);
    }
L_00163d34:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00163d38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x67cu);
    }
L_00163d3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x678u);
    }
L_00163d40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_00163d44:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_00163d48:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_00163d4c:;
    {
        cpu->r[1] = 0x00001804u;
    }
L_00163d50:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00163d54:;
    {
        cpu->r[2] = 0x00001800u;
    }
L_00163d58:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_00163d5c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x2u);
    }
L_00163d60:;
    {
        uint32_t v = cpu->r[1] & 0x0000003fu; cpu->r[1] = v;
    }
L_00163d64:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00163d68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001642a0;
        }
    }
L_00163d6c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00163d70:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00163d74:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00163d78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00163d7c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00163d80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00163d84:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00163d88:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_00163d8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00163d90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00163d94:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_00163d98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_00163d9c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_00163da0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00163da4:;
    {
        cpu->r[14] = 0x00163da8u; fn_0018572c(cpu);
    }
L_00163da8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163dac:;
    {
        cpu->r[14] = 0x00163db0u; fn_0015d920(cpu);
    }
L_00163db0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00163db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001639e4;
        }
    }
L_00163db8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00163dbc:;
    {
        cpu->r[14] = 0x00163dc0u; fn_0018572c(cpu);
    }
L_00163dc0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00163dc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00163dc8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00163dcc:;
    {
        vfp_sync_flags(cpu);
    }
L_00163dd0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001639e4;
        }
    }
L_00163dd4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4dcu);
    }
L_00163dd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163ddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163ec0;
        }
    }
L_00163de0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4ddu);
    }
L_00163de4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00163de8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164340;
        }
    }
L_00163dec:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00163df0:;
    {
        wr8(cpu->r[4] + + 0x4ddu, cpu->r[9]);
    }
L_00163df4:;
    {
        wr8(cpu->r[4] + + 0x4dcu, cpu->r[9]);
    }
L_00163df8:;
    {
        goto L_001639e8;
    }
L_00163dfc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00163e00:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00163e04:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[2]);
    }
L_00163e08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163e0c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163e10:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[6]);
    }
L_00163e14:;
    {
        uint32_t v = cpu->r[2] | 0x00010000u; cpu->r[2] = v;
    }
L_00163e18:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00163e1c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00163e20:;
    {
        cpu->r[14] = 0x00163e24u; fn_001721e4(cpu);
    }
L_00163e24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xb4u);
    }
L_00163e28:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00163e2c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00163e30:;
    {
        vfp_vadd(cpu, 15, 15, 15);
    }
L_00163e34:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00163e38:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00163e3c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00163e40:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00163e44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001638f8;
        }
    }
L_00163e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00163e4c:;
    {
        cpu->r[14] = 0x00163e50u; fn_00173640(cpu);
    }
L_00163e50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00163e54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00163e58:;
    {
        uint32_t v = cpu->r[2] & 0x00000002u; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_00163e5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164468;
        }
    }
L_00163e60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00163e64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_00163e68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001644c8;
        }
    }
L_00163e6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00163e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164540;
        }
    }
L_00163e74:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[1]);
    }
L_00163e78:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00163e7c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[3]);
    }
L_00163e80:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_00163e84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00163e88:;
    {
        uint32_t v = cpu->r[2] | 0x00080000u; cpu->r[2] = v;
    }
L_00163e8c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00163e90:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[2]);
    }
L_00163e94:;
    {
        goto L_00163900;
    }
L_00163e98:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00163e9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163ea0:;
    {
        cpu->r[14] = 0x00163ea4u; fn_0015e194(cpu);
    }
L_00163ea4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00163ea8:;
    {
        cpu->r[2] = 0x00001654u;
    }
L_00163eac:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_00163eb0:;
    {
        uint32_t v = cpu->r[3] | 0x00000040u; cpu->r[3] = v;
    }
L_00163eb4:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[3]);
    }
L_00163eb8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00163ebc:;
    {
        goto L_00163ba8;
    }
L_00163ec0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163ec4:;
    {
        cpu->r[10] = 0x00008548u;
    }
L_00163ec8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163ecc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163ed0:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00163ed4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163ed8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00163edc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00163ee0:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163ee4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x204u);
    }
L_00163ee8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163eec:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x208u);
    }
L_00163ef0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00163ef4:;
    {
        cpu->r[14] = 0x00163ef8u; fn_00161bec(cpu);
    }
L_00163ef8:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163efc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00163f00:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163f04:;
    {
        cpu->r[14] = 0x00163f08u; fn_00188284(cpu);
    }
L_00163f08:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163f0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00163f10:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163f14:;
    {
        wr32(cpu->r[2] + + 0x204u, cpu->r[3]);
    }
L_00163f18:;
    {
        goto L_00163de0;
    }
L_00163f1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163f20:;
    {
        cpu->r[10] = 0x00008548u;
    }
L_00163f24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163f28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163f2c:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00163f30:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00163f34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163f38:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163f3c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00163f40:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163f44:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x204u);
    }
L_00163f48:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x358u);
    }
L_00163f4c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00163f50:;
    {
        cpu->r[14] = 0x00163f54u; fn_00161bec(cpu);
    }
L_00163f54:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00163f58:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00163f5c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163f60:;
    {
        cpu->r[14] = 0x00163f64u; fn_00188284(cpu);
    }
L_00163f64:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_00163f68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00163f6c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00163f70:;
    {
        wr32(cpu->r[2] + + 0x204u, cpu->r[3]);
    }
L_00163f74:;
    {
        goto L_00163a90;
    }
L_00163f78:;
    {
        cpu->r[14] = 0x00163f7cu; fn_0009b4d0(cpu);
    }
L_00163f7c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00163f80:;
    {
        cpu->r[0] = 0x0000004au;
    }
L_00163f84:;
    {
        cpu->r[14] = 0x00163f88u; fn_00093f34(cpu);
    }
L_00163f88:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_00163f8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[11];
    }
L_00163f90:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_00163f94:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00163f98:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_00163f9c:;
    {
        vfp_sync_flags(cpu);
    }
L_00163fa0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00163998;
        }
    }
L_00163fa4:;
    {
        goto L_00163990;
    }
L_00163fa8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00163fac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00163fb0:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00163fb4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00163fb8:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_00163fbc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00163fc0:;
    {
        cpu->r[14] = 0x00163fc4u; fn_00188158(cpu);
    }
L_00163fc4:;
    {
        goto L_00163adc;
    }
L_00163fc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00163fcc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00163fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163b34;
        }
    }
L_00163fd4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00163fd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00163fdc:;
    {
        cpu->r[14] = 0x00163fe4u;
    }
L_00163fe0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00163fe4u)) return;
    }
L_00163fe4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x378u);
    }
L_00163fe8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00163fec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00163b34;
        }
    }
L_00163ff0:;
    {
        { uint32_t v = cpu->r[10] & 0x00000021u; set_nz(cpu, v); }
    }
L_00163ff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163b34;
        }
    }
L_00163ff8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_00163ffc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00164000:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00164004:;
    {
        cpu->r[14] = 0x0016400cu;
    }
L_00164008:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016400cu)) return;
    }
L_0016400c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00164010:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_00164014:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00164018:;
    {
        cpu->r[14] = 0x00164020u;
    }
L_0016401c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164020u)) return;
    }
L_00164020:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x94u);
    }
L_00164024:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00164028:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa4u);
    }
L_0016402c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00164030:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00164034:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_00164038:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0016403c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00164040:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00164044:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[3] = v;
    }
L_00164048:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0016404c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00163b34;
        }
    }
L_00164050:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_00164054:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00164058:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016405c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001639e4;
        }
    }
L_00164060:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000420u, 0, 0);
    }
L_00164064:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_00164068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0016406c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00164070:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[3]);
    }
L_00164074:;
    {
        cpu->r[11] = 0x00000014u;
    }
L_00164078:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_0016407c:;
    {
        cpu->r[14] = 0x00164080u; fn_00180008(cpu);
    }
L_00164080:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8cu);
    }
L_00164084:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_00164088:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x84u);
    }
L_0016408c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00164090:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[12]);
    }
L_00164094:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[2]);
    }
L_00164098:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_0016409c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_001640a0:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[0]);
    }
L_001640a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001640a8:;
    {
        cpu->r[14] = 0x001640acu; guest_call(cpu, cpu->r[3]);
    }
L_001640ac:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x428u);
    }
L_001640b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3c8u);
    }
L_001640b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001640b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x42cu);
    }
L_001640bc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001640c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001640c4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3ccu);
    }
L_001640c8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001640cc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3d0u);
    }
L_001640d0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_001640d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_001640d8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_001640dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001640e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001640e4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_001640e8:;
    {
        cpu->r[14] = 0x001640f0u;
    }
L_001640ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001640f0u)) return;
    }
L_001640f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001640f4:;
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
L_001640f8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001640fc:;
    {
        cpu->r[10] = 0x000016a0u;
    }
L_00164100:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 7u, &shc); cpu->r[14] = v;
    }
L_00164104:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[12] = v;
    }
L_00164108:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[11]);
    }
L_0016410c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 7u, &shc); cpu->r[10] = v;
    }
L_00164110:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00164114:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 3u, &shc), 1, 0);
    }
L_00164118:;
    {
        { uint32_t v = cpu->r[0] & 0x00002000u; set_nz(cpu, v); }
    }
L_0016411c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 3u, &shc), 1, 0);
    }
L_00164120:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164124:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00164128:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_0016412c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 12u, &shc), 0, 0);
    }
L_00164130:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 12u, &shc), 0, 0);
    }
L_00164134:;
    {
        wr32(cpu->r[5] + + 0x3d4u, cpu->r[1]);
    }
L_00164138:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_0016413c:;
    {
        wr32(cpu->r[5] + + 0x3d8u, cpu->r[2]);
    }
L_00164140:;
    {
        wr32(cpu->r[5] + + 0x3dcu, cpu->r[3]);
    }
L_00164144:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164528;
        }
    }
L_00164148:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0016414c:;
    {
        cpu->r[3] = 0x000016a4u;
    }
L_00164150:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00164154:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00164158:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016415c:;
    {
        cpu->r[0] = 0x00001758u;
    }
L_00164160:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[1]);
    }
L_00164164:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00164168:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_0016416c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00164170:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[12]);
    }
L_00164174:;
    {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
    }
L_00164178:;
    {
        cpu->r[12] = 0x00000012u;
    }
L_0016417c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00164180:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00164184:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_00164188:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_0016418c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00164190:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00164194:;
    {
        cpu->r[14] = 0x0016419cu;
    }
L_00164198:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016419cu)) return;
    }
L_0016419c:;
    {
        cpu->r[1] = 0x000016a0u;
    }
L_001641a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_001641a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001641a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x54cu);
    }
L_001641ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x480u);
    }
L_001641b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001641b4:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x4u);
    }
L_001641b8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001641bc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001641c0:;
    {
        cpu->r[12] = 0x000016d4u;
    }
L_001641c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000032u, 0, 0);
        }
    }
L_001641c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001641cc:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[9]);
    }
L_001641d0:;
    {
        cpu->r[12] = 0x000016ccu;
    }
L_001641d4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_001641d8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_001641dc:;
    {
        cpu->r[12] = 0x000016d0u;
    }
L_001641e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xacu);
    }
L_001641e4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
        }
    }
L_001641e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001641ec:;
    {
        wr32(cpu->r[5] + + 0x3d8u, cpu->r[3]);
    }
L_001641f0:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_001641f4:;
    {
        cpu->r[12] = 0x000016b0u;
    }
L_001641f8:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001641fc:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_00164200:;
    {
        cpu->r[14] = 0x00164204u; fn_0018572c(cpu);
    }
L_00164204:;
    {
        cpu->r[3] = 0x000016ccu;
    }
L_00164208:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016420c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00164210:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00164214:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00164218:;
    {
        vfp_vmul(cpu, 14, 15, 18);
    }
L_0016421c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00164224u + + 0x368u);
    }
L_00164220:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_00164224:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[0];
    }
L_00164228:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0016422c:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_00164230:;
    {
        cpu->r[14] = 0x00164234u; imp_tanf(cpu); /* tanf */
    }
L_00164234:;
    {
        cpu->r[3] = 0x000016e4u;
    }
L_00164238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00164240u + + 0x350u);
    }
L_0016423c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00164240:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00164244:;
    {
        cpu->r[2] = 0x0000167cu;
    }
L_00164248:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_0016424c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00164250:;
    {
        cpu->r[2] = 0x000016dcu;
    }
L_00164254:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00164258:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_0016425c:;
    {
        cpu->r[2] = 0x000016e0u;
    }
L_00164260:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_00164264:;
    {
        cpu->r[3] = 0x000016d8u;
    }
L_00164268:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0016426c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00164274u + + 0x320u);
    }
L_00164270:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00164274:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00164278:;
    {
        vfp_vmul(cpu, 13, 19, 12);
    }
L_0016427c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_00164280:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00164284:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_00164288:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0016428c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00164290:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00164294:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00164298:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_0016429c:;
    {
        goto L_001639e8;
    }
L_001642a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x48cu);
    }
L_001642a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001642a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016457c;
        }
    }
L_001642ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001642b0:;
    {
        cpu->r[14] = 0x001642b4u; fn_0015ec54(cpu);
    }
L_001642b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001642b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164548;
        }
    }
L_001642bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001642c0:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001642c4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001642c8:;
    {
        cpu->r[14] = 0x001642ccu; fn_00161bec(cpu);
    }
L_001642cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001642d0:;
    {
        cpu->r[14] = 0x001642d4u; fn_00160698(cpu);
    }
L_001642d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_001642d8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001642dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163d6c;
        }
    }
L_001642e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_001642e4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001642e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001642ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163d6c;
        }
    }
L_001642f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_001642f4:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001642f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00163d6c;
        }
    }
L_001642fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_00164300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00163d6c;
        }
    }
L_00164304:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00164308:;
    {
        cpu->r[1] = 0x0000000bu;
    }
L_0016430c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00164310:;
    {
        cpu->r[14] = 0x00164314u; fn_00161bec(cpu);
    }
L_00164314:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00164318:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016431c:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00164320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016449c;
        }
    }
L_00164324:;
    {
        cpu->r[14] = 0x00164328u; fn_0009b4d0(cpu);
    }
L_00164328:;
    {
        wr32(cpu->r[4] + + 0x544u, cpu->r[0]);
    }
L_0016432c:;
    {
        goto L_00163d6c;
    }
L_00164330:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00164334:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00164338:;
    {
        cpu->r[14] = 0x0016433cu; fn_00175ea0(cpu);
    }
L_0016433c:;
    {
        goto L_00163b6c;
    }
L_00164340:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164344:;
    {
        cpu->r[10] = 0x00008548u;
    }
L_00164348:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0016434c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00164350:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00164354:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00164358:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016435c:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_00164360:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00164364:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00164368:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x204u);
    }
L_0016436c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x358u);
    }
L_00164370:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00164374:;
    {
        cpu->r[14] = 0x00164378u; fn_00161bec(cpu);
    }
L_00164378:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_0016437c:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_00164380:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00164384:;
    {
        cpu->r[14] = 0x00164388u; fn_00188284(cpu);
    }
L_00164388:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x5d4u);
    }
L_0016438c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00164390:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_00164394:;
    {
        wr32(cpu->r[2] + + 0x204u, cpu->r[3]);
    }
L_00164398:;
    {
        goto L_00163dec;
    }
L_0016439c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x674u);
    }
L_001643a0:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_001643a4:;
    {
        uint32_t v = cpu->r[2] & 0x0000003fu; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001643a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001642d4;
        }
    }
L_001643ac:;
    {
        { uint32_t v = cpu->r[10] & 0x00000040u; set_nz(cpu, v); }
    }
L_001643b0:;
    {
        wr32(cpu->r[5] + + 0x39cu, cpu->r[2]);
    }
L_001643b4:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001643b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
        }
    }
L_001643bc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
        }
    }
L_001643c0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
        }
    }
L_001643c4:;
    {
        { uint32_t v = cpu->r[10] & 0x00000080u; set_nz(cpu, v); }
    }
L_001643c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
        }
    }
L_001643cc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
        }
    }
L_001643d0:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
        }
    }
L_001643d4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_001643d8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_001643dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001643fc;
        }
    }
L_001643e0:;
    {
        { uint32_t v = cpu->r[10] & 0x00000020u; set_nz(cpu, v); }
    }
L_001643e4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000028u; cpu->r[2] = v;
        }
    }
L_001643e8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
        }
    }
L_001643ec:;
    {
        { uint32_t v = cpu->r[10] & 0x00000010u; set_nz(cpu, v); }
    }
L_001643f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
        }
    }
L_001643f4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000018u; cpu->r[2] = v;
        }
    }
L_001643f8:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3] + + 0x2u, cpu->r[2]);
        }
    }
L_001643fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x67cu);
    }
L_00164400:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x678u);
    }
L_00164404:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[1] = v;
    }
L_00164408:;
    {
        cpu->r[2] = 0x00001804u;
    }
L_0016440c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00164410:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x2u);
    }
L_00164414:;
    {
        cpu->r[3] = 0x00001800u;
    }
L_00164418:;
    {
        uint32_t v = cpu->r[2] & 0x0000003fu; cpu->r[2] = v;
    }
L_0016441c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00164420:;
    {
        goto L_001642d4;
    }
L_00164424:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00164428:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0016442c:;
    {
        cpu->r[14] = 0x00164430u; fn_000964c8(cpu);
    }
L_00164430:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00164434:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164438:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016443c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00164440:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00164444:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00164448:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x490u);
    }
L_0016444c:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00164450:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_00164454:;
    {
        cpu->r[0] = 0x000018ccu;
    }
L_00164458:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_0016445c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00164460:;
    {
        cpu->r[14] = 0x00164464u; fn_000fd248(cpu);
    }
L_00164464:;
    {
        goto L_00163b24;
    }
L_00164468:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0016446c:;
    {
        uint32_t v = cpu->r[3] & 0x00000020u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00164470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164508;
        }
    }
L_00164474:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00164478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001644d0;
        }
    }
L_0016447c:;
    {
        cpu->r[3] = 0x00001744u;
    }
L_00164480:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00164484:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_00164488:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_0016448c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00164490:;
    {
        cpu->r[3] = 0x00001748u;
    }
L_00164494:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[9]);
    }
L_00164498:;
    {
        goto L_00163900;
    }
L_0016449c:;
    {
        cpu->r[14] = 0x001644a0u; fn_0009b4d0(cpu);
    }
L_001644a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x544u);
    }
L_001644a4:;
    {
        cpu->r[2] = 0x00000bb7u;
    }
L_001644a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001644ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001644b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00163d6c;
        }
    }
L_001644b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001644b8:;
    {
        cpu->r[1] = 0x0000001bu;
    }
L_001644bc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001644c0:;
    {
        cpu->r[14] = 0x001644c4u; fn_00161bec(cpu);
    }
L_001644c4:;
    {
        goto L_00163d6c;
    }
L_001644c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001644cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016447c;
        }
    }
L_001644d0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001644d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001644d8:;
    {
        cpu->r[14] = 0x001644e0u;
    }
L_001644dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001644e0u)) return;
    }
L_001644e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001644e4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001644e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001644ec:;
    {
        cpu->r[14] = 0x001644f4u;
    }
L_001644f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001644f4u)) return;
    }
L_001644f4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_001644f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_001644fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_00164500:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00163900;
        }
    }
L_00164504:;
    {
        goto L_0016447c;
    }
L_00164508:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_0016450c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164540;
        }
    }
L_00164510:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00164514:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[3]);
    }
L_00164518:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[2]);
    }
L_0016451c:;
    {
        cpu->r[11] = cpu->r[3];
    }
L_00164520:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00164524:;
    {
        goto L_00163e88;
    }
L_00164528:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016452c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00164530:;
    {
        cpu->r[14] = 0x00164534u; fn_00173e14(cpu);
    }
L_00164534:;
    {
        cpu->r[3] = 0x000016a4u;
    }
L_00164538:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_0016453c:;
    {
        goto L_00164154;
    }
L_00164540:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_00164544:;
    {
        goto L_00163e88;
    }
L_00164548:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016454c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[5] + + 0x354u);
    }
L_00164550:;
    {
        cpu->r[14] = 0x00164554u; fn_001737d8(cpu);
    }
L_00164554:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00164558:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016455c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,19), *vfp_s(cpu,15));
    }
L_00164560:;
    {
        vfp_sync_flags(cpu);
    }
L_00164564:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001642bc;
        }
    }
L_00164568:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016456c:;
    {
        cpu->r[1] = 0x00000019u;
    }
L_00164570:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00164574:;
    {
        cpu->r[14] = 0x00164578u; fn_00161bec(cpu);
    }
L_00164578:;
    {
        goto L_001642cc;
    }
L_0016457c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4a0u);
    }
L_00164580:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_00164584:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001642e4;
        }
    }
L_00164588:;
    {
        goto L_001642ac;
    }
}

/* _ZN4CCar27UpdateAIPositionConstraintsEPK10RoadStructR11CMultiArrayIPS_E @ 00164598 (arm) */
void fn_00164598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00164598:;
    {
        cpu->r[3] = rd32(0x001645a0u + + 0x1f4u);
    }
L_0016459c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_001645a0:;
    {
        cpu->r[1] = rd32(0x001645a8u + + 0x1f0u);
    }
L_001645a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_001645a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001645b0u, cpu->r[3], 0, 0);
    }
L_001645ac:;
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
L_001645b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001645b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001645b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001645bc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001645c0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001645c4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001645c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001645cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001645d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001645dc;
        }
    }
L_001645d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001645d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001645dcu)) return;
    }
L_001645dc:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001645e0:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x3dcu);
    }
L_001645e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001645e8:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x3d8u);
    }
L_001645ec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x3d4u);
    }
L_001645f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001645f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001645f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001645fc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00164600:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_00164604:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_00164608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016460c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00164610:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00164614:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00164618:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_0016461c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 0);
    }
L_00164620:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00164624:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00164628:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0016462c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00164630:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00164634:;
    {
        cpu->r[14] = 0x00164638u; fn_00185b48(cpu);
    }
L_00164638:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_0016463c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00164640:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00164644:;
    {
        cpu->r[14] = 0x00164648u; fn_00185e10(cpu);
    }
L_00164648:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0016464c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00164650:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00164654:;
    {
        cpu->r[14] = 0x0016465cu;
    }
L_00164658:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016465cu)) return;
    }
L_0016465c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00164660:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00164664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164668:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016466c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00164670:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00164674:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00164678:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_0016467c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164680:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00164684:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[2]; cpu->r[7] = v;
    }
L_00164688:;
    {
        cpu->r[14] = 0x00164690u;
    }
L_0016468c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164690u)) return;
    }
L_00164690:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00164694:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_00164698:;
    {
        uint32_t v = cpu->r[7] & ~ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_0016469c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[7]; cpu->r[7] = v;
    }
L_001646a0:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_001646a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001646a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001646ac:;
    {
        cpu->r[14] = 0x001646b4u;
    }
L_001646b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001646b4u)) return;
    }
L_001646b4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001646b8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001646bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001646c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001646c4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001646c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_001646cc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[6];
        }
    }
L_001646d0:;
    {
        cpu->r[14] = 0x001646d8u;
    }
L_001646d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001646d8u)) return;
    }
L_001646d8:;
    {
        cpu->r[6] = sub_flags(cpu, 0x000003e8u, cpu->r[6], 1, 0);
    }
L_001646dc:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000012cu, 1, 1);
    }
L_001646e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x0000012cu;
        }
    }
L_001646e4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001646e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001646ec:;
    {
        cpu->r[14] = 0x001646f0u; fn_0015e48c(cpu);
    }
L_001646f0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001646f4:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001646f8:;
    {
        cpu->r[14] = 0x001646fcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001646fc:;
    {
        cpu->r[2] = 0x000007d0u;
    }
L_00164700:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[7], 1, 0);
    }
L_00164704:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[7] = v;
    }
L_00164708:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[7]; cpu->r[6] = v;
    }
L_0016470c:;
    {
        cpu->r[3] = 0x00001388u;
    }
L_00164710:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[7] = v;
    }
L_00164714:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00001000u, 1, 0);
    }
L_00164718:;
    {
        uint32_t v = cpu->r[6] & ~ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[6] = v;
    }
L_0016471c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[6] = v;
    }
L_00164720:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_00164724:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_00164728:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001645d4;
        }
    }
L_0016472c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00164730:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000420u, 0, 0);
    }
L_00164734:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164738:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016473c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164740:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00164744:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6]; cpu->r[2] = v;
    }
L_00164748:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[3] = v;
    }
L_0016474c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6]; cpu->r[6] = v;
    }
L_00164750:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_00164754:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00164758:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_0016475c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00164760:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00164764:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00164768:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_0016476c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[6] = v;
    }
L_00164770:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00164774:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00164778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0016477c:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[2]);
    }
L_00164780:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_00164784:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[3]);
    }
L_00164788:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[6]);
    }
L_0016478c:;
    {
        cpu->r[14] = 0x00164790u; fn_00173920(cpu);
    }
L_00164790:;
    {
        goto L_001645d4;
    }
}

/* _ZN4CCar28UpdateCopPositionConstraintsEPK10RoadStructR11CMultiArrayIPS_E @ 0016479c (arm) */
void fn_0016479c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016479c:;
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
L_001647a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001647a4:;
    {
        cpu->r[5] = 0x00001824u;
    }
L_001647a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001647ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001647b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001647b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001647b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001649b8;
        }
    }
L_001647bc:;
    {
        cpu->r[7] = 0x000018b8u;
    }
L_001647c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_001647c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001647c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001649b8;
        }
    }
L_001647cc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001647d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001647d4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_001647d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001647dc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_001647e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_001647e4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001647e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001647ec:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_001647f0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[8], cpu->r[12], 1, 0);
    }
L_001647f4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001647f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001647fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00164800:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00164804:;
    {
        cpu->r[14] = 0x00164808u; fn_00185b48(cpu);
    }
L_00164808:;
    {
        cpu->r[1] = 0x00001000u;
    }
L_0016480c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00164810:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00164814:;
    {
        cpu->r[14] = 0x00164818u; fn_00185e10(cpu);
    }
L_00164818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016481c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00164820:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00164824:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00164828:;
    {
        cpu->r[14] = 0x00164830u;
    }
L_0016482c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164830u)) return;
    }
L_00164830:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00164834:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00164838:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016483c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164840:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_00164844:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00164848:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0016484c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00164850:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164854:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00164858:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1] + cpu->r[2]; cpu->r[8] = v;
    }
L_0016485c:;
    {
        cpu->r[14] = 0x00164864u;
    }
L_00164860:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164864u)) return;
    }
L_00164864:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00164868:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0016486c:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00164870:;
    {
        uint32_t v = cpu->r[8] & ~ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[8] = v;
    }
L_00164874:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8]; cpu->r[8] = v;
    }
L_00164878:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_0016487c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00164880:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00164884:;
    {
        cpu->r[14] = 0x0016488cu;
    }
L_00164888:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016488cu)) return;
    }
L_0016488c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00164890:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00164894:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00164898:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016489c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001648a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001648a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[1];
        }
    }
L_001648a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[6];
        }
    }
L_001648ac:;
    {
        cpu->r[14] = 0x001648b4u;
    }
L_001648b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001648b4u)) return;
    }
L_001648b4:;
    {
        cpu->r[6] = sub_flags(cpu, 0x000003e8u, cpu->r[6], 1, 0);
    }
L_001648b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000012cu, 1, 1);
    }
L_001648bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x0000012cu;
        }
    }
L_001648c0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001648c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001648c8:;
    {
        cpu->r[14] = 0x001648ccu; fn_0015e48c(cpu);
    }
L_001648cc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001648d0:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001648d4:;
    {
        cpu->r[14] = 0x001648d8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001648d8:;
    {
        cpu->r[2] = 0x000007d0u;
    }
L_001648dc:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[8], 1, 0);
    }
L_001648e0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[8] = v;
    }
L_001648e4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[8]; cpu->r[6] = v;
    }
L_001648e8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[8] = v;
    }
L_001648ec:;
    {
        cpu->r[6] = 0x00001388u;
    }
L_001648f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00001000u, 1, 0);
    }
L_001648f4:;
    {
        uint32_t v = cpu->r[0] & ~ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[10] = v;
    }
L_001648f8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[10]; cpu->r[6] = v;
    }
L_001648fc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_00164900:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_00164904:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001649c4;
        }
    }
L_00164908:;
    {
        cpu->r[5] = 0x00001824u;
    }
L_0016490c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00164910:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00164914:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00164918:;
    {
        cpu->r[14] = 0x00164920u;
    }
L_0016491c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164920u)) return;
    }
L_00164920:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00164924:;
    {
        cpu->r[0] = 0x0000001du;
    }
L_00164928:;
    {
        cpu->r[14] = 0x0016492cu; fn_00093f34(cpu);
    }
L_0016492c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00164930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00164934:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_00164938:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0016493c:;
    {
        vfp_vmul(cpu, 13, 16, 15);
    }
L_00164940:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00164948u + + 0x10cu);
    }
L_00164944:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00164948:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016494c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00164950:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00164954:;
    {
        vfp_sync_flags(cpu);
    }
L_00164958:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00001898u;
        }
    }
L_0016495c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00164960:;
    {
        if (cond_test(cpu, 5)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00164964:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001649b8;
        }
    }
L_00164968:;
    {
        cpu->r[3] = 0x00001898u;
    }
L_0016496c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00164970:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00164974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164a3c;
        }
    }
L_00164978:;
    {
        cpu->r[14] = 0x0016497cu; fn_0009b4d0(cpu);
    }
L_0016497c:;
    {
        cpu->r[3] = 0x00001894u;
    }
L_00164980:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00164984:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00164988:;
    {
        cpu->r[0] = 0x0000001eu;
    }
L_0016498c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_00164990:;
    {
        cpu->r[14] = 0x00164994u; fn_00093f34(cpu);
    }
L_00164994:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016499cu + + 0xbcu);
    }
L_00164998:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_0016499c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001649a0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001649a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001649a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001649ac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x000018b8u;
        }
    }
L_001649b0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000007u;
        }
    }
L_001649b4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001649b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001649bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001649c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001649c4u)) return;
    }
L_001649c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_001649c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001649cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001649d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001649d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001649d8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6]; cpu->r[12] = v;
    }
L_001649dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000420u, 0, 0);
    }
L_001649e0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6]; cpu->r[2] = v;
    }
L_001649e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001649e8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[6]; cpu->r[6] = v;
    }
L_001649ec:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_001649f0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001649f4:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_001649f8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_001649fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00164a00:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_00164a04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_00164a08:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[6] = v;
    }
L_00164a0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[6]);
    }
L_00164a10:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_00164a14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00164a18:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[12]);
    }
L_00164a1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00164a20:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[2]);
    }
L_00164a24:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[6]);
    }
L_00164a28:;
    {
        cpu->r[14] = 0x00164a2cu; fn_00173920(cpu);
    }
L_00164a2c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000400u, 1, 1);
    }
L_00164a30:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000007u;
        }
    }
L_00164a34:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
        }
    }
L_00164a38:;
    {
        goto L_00164908;
    }
L_00164a3c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00164a40:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00164a44:;
    {
        cpu->r[14] = 0x00164a48u; fn_0009b4d0(cpu);
    }
L_00164a48:;
    {
        cpu->r[3] = 0x00001894u;
    }
L_00164a4c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00164a50:;
    {
        goto L_001649b8;
    }
}

/* _ZN4CCar7CopBustEv @ 00164a5c (arm) */
void fn_00164a5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00164a5c:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00164a60:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00164a64:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00164a68:;
    {
        cpu->r[5] = rd32(0x00164a70u + + 0xecu);
    }
L_00164a6c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00164a70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00164a74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00164a78:;
    {
        cpu->r[5] = add_flags(cpu, 0x00164a80u, cpu->r[5], 0, 0);
    }
L_00164a7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164b2c;
        }
    }
L_00164a80:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00164a84:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_00164a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00164a8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164b2c;
        }
    }
L_00164a90:;
    {
        cpu->r[6] = rd32(0x00164a98u + + 0xc8u);
    }
L_00164a94:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00164a98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00164a9c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00164aa0:;
    {
        { uint32_t v = cpu->r[3] & 0x20000000u; set_nz(cpu, v); }
    }
L_00164aa4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00164aa8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x418u);
    }
L_00164aac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164b48;
        }
    }
L_00164ab0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00164ab4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00164ab8:;
    {
        cpu->r[0] = 0x000018b8u;
    }
L_00164abc:;
    {
        cpu->r[12] = 0x00000006u;
    }
L_00164ac0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00164ac4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00164ac8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_00164acc:;
    {
        uint32_t v = cpu->r[1] | 0x20000000u; cpu->r[1] = v;
    }
L_00164ad0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00164ad4:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00164ad8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00164adc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00164ae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164b34;
        }
    }
L_00164ae4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00164ae8:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00164aec:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[8]);
    }
L_00164af0:;
    {
        cpu->r[2] = 0x00001be0u;
    }
L_00164af4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00164af8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_00164afc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164b10;
        }
    }
L_00164b00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164b04:;
    {
        cpu->r[14] = 0x00164b08u; fn_0015ed78(cpu);
    }
L_00164b08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00164b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00164b10:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00164b14:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00164b18:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00164b1c:;
    {
        cpu->r[1] = 0x000000b6u;
    }
L_00164b20:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00164b24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00164b28:;
    {
        cpu->r[14] = 0x00164b2cu; fn_000fd288(cpu);
    }
L_00164b2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00164b30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00164b34u)) return;
    }
L_00164b34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x498u);
    }
L_00164b38:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00164b3c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
        }
    }
L_00164b40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164ae8;
        }
    }
L_00164b44:;
    {
        goto L_00164ae4;
    }
L_00164b48:;
    {
        cpu->r[1] = 0x00000011u;
    }
L_00164b4c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00164b50:;
    {
        cpu->r[14] = 0x00164b54u; fn_00161bec(cpu);
    }
L_00164b54:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00164b58:;
    {
        goto L_00164ab0;
    }
}

/* _ZN4CCar14IgnoreCrossingEv @ 00164b64 (arm) */
void fn_00164b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00164b64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00164b68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00164b6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00164b70:;
    {
        cpu->r[14] = 0x00164b74u; fn_00173e84(cpu);
    }
L_00164b74:;
    {
        cpu->r[5] = 0x000001c6u;
    }
L_00164b78:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[5]);
    }
L_00164b7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00164b80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00164b84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00164b88u)) return;
        }
    }
L_00164b88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164b8c:;
    {
        cpu->r[14] = 0x00164b90u; fn_00173e08(cpu);
    }
L_00164b90:;
    {
        cpu->r[0] = rd16(cpu->r[0] + cpu->r[5]);
    }
L_00164b94:;
    {
        uint32_t v = cpu->r[0] ^ 0x00008000u; cpu->r[0] = v;
    }
L_00164b98:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 15u, &shc); cpu->r[0] = v;
    }
L_00164b9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00164ba0u)) return;
    }
}

/* _ZN8Vector4s15DistanceBetweenERKS_S1_ @ 00164ba0 (arm) */
void fn_00164ba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00164ba0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00164ba4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00164ba8:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_00164bac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00164bb0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_00164bb4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 4u, &shc); cpu->r[0] = v;
    }
L_00164bb8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[1], 1, 4u, &shc), cpu->r[3], 1, 0);
    }
L_00164bbc:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_00164bc0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00164bc4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00164bc8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00164bcc:;
    {
        cpu->r[14] = 0x00164bd0u; fn_0017fa74(cpu);
    }
L_00164bd0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00164bd4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00164bd8u)) return;
    }
}
