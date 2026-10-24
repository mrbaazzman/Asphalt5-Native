"""Split the monolithic autogens.inc into 12 parallel compilation units.

Run AFTER autotrans.py --gen and postgen.py:

    python analysis/tools/split_autogens.py

Outputs (under $A5_HOST, default port/a5host):
  src/host/autogen_api.h       (shared helpers + prototypes)
  src/host/autogen_part_00.c .._11.c
  src/host/autogens.inc        (dispatch + tables only)

The generated functions become non-static; the header declares them for the
dispatch table and for cross-function calls.
"""
import io
import os
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parents[2]
HOST = pathlib.Path(os.environ.get('A5_HOST', ROOT / 'port' / 'a5host'))
SRC = HOST / 'src' / 'host' / 'autogens.inc'
HDR = HOST / 'src' / 'host' / 'autogen_api.h'
TEMPLATE = ROOT / 'analysis' / 'tools' / 'autogen_api_template.h'
NCHUNKS = 12

lines = io.open(SRC, encoding='utf-8', errors='ignore').read().splitlines(True)

funcs = []
i = 0
while i < len(lines):
    m = re.match(r'static int auto_([0-9a-f]+)\(uint32_t\* R, float\* S, uint32_t sp_entry\) \{', lines[i])
    if not m:
        i += 1
        continue
    name = m.group(1)
    j = i + 1
    while j < len(lines) and lines[j].rstrip('\r\n') != '}':
        j += 1
    if j >= len(lines):
        raise SystemExit('unterminated function auto_%s' % name)
    funcs.append((name, ''.join(lines[i:j + 1])))
    i = j + 1

footer_at = next((k for k, l in enumerate(lines) if l.startswith('static int auto_is_auto(uint32_t a) {')), None)
if footer_at is None:
    raise SystemExit('footer (auto_is_auto) not found')

footer = ''.join(lines[footer_at:])
footer = footer.replace('static int auto_dispatch(', 'int auto_dispatch(', 1)
footer = footer.replace('static int auto_is_auto(', 'static int auto_is_auto(', 1)

# balanced partition by source size
order = sorted(funcs, key=lambda f: len(f[1]), reverse=True)
bins = [[] for _ in range(NCHUNKS)]
sizes = [0] * NCHUNKS
for name, body in order:
    k = min(range(NCHUNKS), key=lambda x: sizes[x])
    bins[k].append((name, body))
    sizes[k] += len(body)

# header = template + prototypes
proto = []
for name, _ in funcs:
    proto.append('int auto_%s(uint32_t* R, float* S, uint32_t sp);' % name)
hdr = io.open(TEMPLATE, encoding='utf-8').read()
hdr += '\n// ---- translated function prototypes ----\n' + '\n'.join(proto) + '\n'
io.open(HDR, 'w', encoding='utf-8', newline='').write(hdr)

# chunks
for k in range(NCHUNKS):
    path = HOST / 'src' / 'host' / ('autogen_part_%02d.c' % k)
    with io.open(path, 'w', encoding='utf-8', newline='') as f:
        f.write('// generated chunk %d/%d - see analysis/tools/split_autogens.py\n' % (k, NCHUNKS))
        f.write('#include "autogen_api.h"\n\n')
        for name, body in bins[k]:
            body = body.replace('static int auto_%s(' % name, 'int auto_%s(' % name, 1)
            f.write(body)
            f.write('\n\n')

# footer-only autogens.inc
with io.open(SRC, 'w', encoding='utf-8', newline='') as f:
    f.write('// auto-generated dispatch/tables (functions live in autogen_part_*.c)\n')
    f.write('#include "autogen_api.h"\n\n')
    f.write(footer)

print('split %d functions into %d chunks' % (len(funcs), NCHUNKS))
print('chunk sizes (bytes):', sizes)
