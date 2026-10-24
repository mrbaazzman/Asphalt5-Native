"""Apply the hand patches that autotrans.py does not emit.

Run after every `autotrans.py --gen`:

    python analysis/tools/autotrans.py --gen <elf> <list.txt> \
        <host>/src/host/autogens.inc
    python analysis/tools/postgen.py

Patches:
  1. native-coverage counter at the top of auto_dispatch
  2. content-hash output cache around the LZMA decode case
  3. direct calls to the LZMA inner helpers inside auto_<decompress>
     (removes probe_dispatch/auto_enabled from the per-pixel path)
  4. Scene::UpdateCars native entries run the same tick/latch entry work as
     the emulated entry (a5_updatecars_entry)

The anchor addresses come from the engine build.  Set A5_ANCHORS to a JSON
file produced by `vermap.py anchors` to patch another build of the engine;
without it the original 3.4.1 addresses are used.

The script is idempotent: running it twice changes nothing.
"""
import io
import json
import os
import re
import sys

P = sys.argv[1] if len(sys.argv) > 1 else 'port/a5host/src/host/autogens.inc'

DEFAULTS = {
    "decompress": 0x14690C,
    "helper_twiddle": 0x146898,
    "helper_interp": 0x146528,
    "helper_modulation": 0x14670C,
    "updatecars": 0x9EF18,
    "updatekeys": 0x178FDC,
    "main_game": 0x1FA798,
    "car_tick": 0x9F1E4,
}

A = dict(DEFAULTS)
if os.environ.get('A5_ANCHORS'):
    with open(os.environ['A5_ANCHORS'], encoding='utf-8') as f:
        A.update(json.load(f))

DEC = A['decompress']
UPD = A['updatecars']
UPD_LABEL = A['car_tick']
KEYS = A['updatekeys']
MAIN = A['main_game']
HELPERS = ['0x%x' % A['helper_twiddle'],
           '0x%x' % A['helper_interp'],
           '0x%x' % A['helper_modulation']]

REPORT_NEEDLE = (
    'static int auto_dispatch(uint32_t a, uint32_t* R, float* S, uint32_t sp) {\n'
    '    switch (a - BASE) {'
)
REPORT_REPL = (
    'static int auto_dispatch(uint32_t a, uint32_t* R, float* S, uint32_t sp) {\n'
    '    if (g_native_report) g_nat_native++;\n'
    '    switch (a - BASE) {'
)

CACHE_NEEDLE = '    case 0x%x: return auto_%x(R, S, sp);' % (DEC, DEC)
CACHE_BLOCK = r'''    case 0x%x: {
        // Engine PVRTC mip decoder (src, bpp, w, h, flag, dst).  It is exact
        // but expensive; the same mips are decoded again on later races.
        // Cache its own output by compressed-content hash: a repeat is a
        // memcpy with bit-identical pixels (A5_FAST_PVRTC stays separate).
        uint32_t src = R[0], w = R[2], h = R[3];
        uint32_t dst = rd32(R[13] + 4);
        int is2 = R[1] != 0;
        if (dst && w > 0 && h > 0 && w <= 2048 && h <= 2048) {
            uint8_t* s = (uint8_t*)mem_host(src);
            uint8_t* d = (uint8_t*)mem_host(dst);
            if (s && d) {
                uint32_t cs = (uint32_t)(((long)w * h) >> (is2 ? 2 : 1));
                if (cs < 8) cs = 8;
                uint64_t key = 1469598103934665603ULL;
                for (uint32_t i = 0; i < cs; i++) { key ^= s[i]; key *= 1099511628211ULL; }
                key ^= ((uint64_t)w << 40) ^ ((uint64_t)h << 20) ^ (uint32_t)(is2 ? 0x5a5a : 0);
                static struct { uint64_t key; uint32_t w, h; int is2; uint8_t* rgba;
                                uint32_t r0, r1, r2, r3, r12, r14; } pc[256];
                static int pcn = 0;
                static long long pcb = 0;
                for (int i = 0; i < pcn; i++)
                    if (pc[i].key == key && pc[i].w == w && pc[i].h == h && pc[i].is2 == is2) {
                        memcpy(d, pc[i].rgba, (size_t)w * h * 4);
                        R[0] = pc[i].r0; R[1] = pc[i].r1; R[2] = pc[i].r2;
                        R[3] = pc[i].r3; R[12] = pc[i].r12; R[14] = pc[i].r14;
                        return 1;
                    }
                int rr = auto_%x(R, S, sp);
                size_t n = (size_t)w * h * 4;
                if (pcn < 256 && pcb + (long long)n < (128LL << 20)) {
                    uint8_t* cp = (uint8_t*)malloc(n);
                    if (cp) {
                        memcpy(cp, d, n);
                        pc[pcn].key = key; pc[pcn].w = w; pc[pcn].h = h; pc[pcn].is2 = is2;
                        pc[pcn].rgba = cp;
                        pc[pcn].r0 = R[0]; pc[pcn].r1 = R[1]; pc[pcn].r2 = R[2];
                        pc[pcn].r3 = R[3]; pc[pcn].r12 = R[12]; pc[pcn].r14 = R[14];
                        pcn++; pcb += (long long)n;
                    }
                }
                return rr;
            }
        }
        return auto_%x(R, S, sp);
    }''' % (DEC, DEC, DEC)

TICK_NEEDLE = '    case 0x%x: return auto_%x(R, S, sp);' % (UPD, UPD)
TICK_REPL = '    case 0x%x: a5_updatecars_entry(); return auto_%x(R, S, sp);' % (UPD, UPD)

LATCH_NEEDLE = '    case 0x%x: return auto_%x(R, S, sp);' % (KEYS, KEYS)
LATCH_REPL = (
    '    case 0x%x: { uint32_t _pmgr = R[0]; int _pr = auto_%x(R, S, sp);\n'
    '        a5_press_latch_update(rd32(BASE + %#x), _pmgr); return _pr; }'
    % (KEYS, KEYS, MAIN)
)


def patch_updatecars_latch(s):
    """Latch after the native UpdateKeys; consume it at the car tick label."""
    n = 0
    if LATCH_NEEDLE in s:
        s = s.replace(LATCH_NEEDLE, LATCH_REPL, 1)
        n += 1
    start = s.find('static int auto_%x(uint32_t* R, float* S, uint32_t sp_entry) {' % UPD)
    if start >= 0:
        end = s.find('static int auto_', start + 30)
        if end < 0:
            end = len(s)
        seg = s[start:end]
        label = 'L_%x:;' % UPD_LABEL
        if label in seg and 'g_press_latch = 0;' not in seg:
            seg = seg.replace(label + '\n',
                              label + '\n    g_press_latch = 0;   // car tick consumed the pressed edge\n', 1)
            s = s[:start] + seg + s[end:]
            n += 1
    return s, n


def patch_direct_helpers(s):
    start = s.find('static int auto_%x(uint32_t* R, float* S, uint32_t sp_entry) {' % DEC)
    if start < 0:
        return s, 0
    end = s.find('static int auto_', start + 20)
    if end < 0:
        end = len(s)
    seg = s[start:end]
    out = []
    i = 0
    n = 0
    while True:
        j = seg.find('if (probe_dispatch(BASE + ', i)
        if j < 0:
            out.append(seg[i:])
            break
        a = seg[j + len('if (probe_dispatch(BASE + '):]
        addr = a[:a.find(',')].strip()
        if addr not in HELPERS:
            out.append(seg[i:j + 4])
            i = j + 4
            continue
        k = seg.find('if (_R[14] == LR_SENTINEL) _R[14] = BASE + ', j)
        if k < 0:
            out.append(seg[i:j + 4])
            i = j + 4
            continue
        e = seg.find('\n    }\n', k)
        if e < 0:
            out.append(seg[i:j + 4])
            i = j + 4
            continue
        out.append(seg[i:j])
        out.append('auto_%s(_R, S, sp);\n' % addr[2:])
        i = e + len('\n    }\n')
        n += 1
    return s[:start] + ''.join(out) + s[end:], n


def main():
    s = io.open(P, encoding='utf-8', errors='ignore').read()
    if not re.search(r'static int auto_[0-9a-f]+\(uint32_t\* R', s):
        print('postgen: no translation functions (already split) - nothing to do')
        return 0
    changed = 0

    if REPORT_NEEDLE in s:
        s = s.replace(REPORT_NEEDLE, REPORT_REPL, 1)
        changed += 1
    elif 'if (g_native_report) g_nat_native++;' not in s:
        print('postgen: ERROR native-report counter anchor missing', file=sys.stderr)
        return 1

    if CACHE_NEEDLE in s:
        s = s.replace(CACHE_NEEDLE, CACHE_BLOCK, 1)
        changed += 1
    elif 'case 0x%x: {' % DEC not in s:
        print('postgen: ERROR LZMA cache anchor missing', file=sys.stderr)
        return 1

    if TICK_NEEDLE in s:
        s = s.replace(TICK_NEEDLE, TICK_REPL, 1)
        changed += 1
    elif 'case 0x%x: a5_updatecars_entry();' % UPD not in s:
        print('postgen: ERROR UpdateCars tick anchor missing', file=sys.stderr)
        return 1

    s, nl = patch_updatecars_latch(s)
    if nl:
        changed += nl
    elif ('case 0x%x: return auto_%x' % (KEYS, KEYS) in s or
          'g_press_latch = 0;   // car tick consumed' not in s):
        print('postgen: ERROR UpdateCars latch anchors missing', file=sys.stderr)
        return 1

    s, nh = patch_direct_helpers(s)
    if nh:
        changed += nh
    elif 'auto_%x(_R, S, sp);' % A['helper_twiddle'] not in s:
        print('postgen: ERROR direct-helper anchor missing', file=sys.stderr)
        return 1

    io.open(P, 'w', encoding='utf-8', newline='').write(s)
    print('postgen: %d patch(es) applied (%d direct helper calls)' % (changed, nh))
    return 0


if __name__ == '__main__':
    sys.exit(main())
