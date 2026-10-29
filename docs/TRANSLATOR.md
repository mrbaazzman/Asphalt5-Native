# Static recompiler

`tools/armrecomp.py` translates the ARMv7 library to C. The output is ordinary
C compiled by MinGW; there is no interpreter in the executable.

## Inputs and outputs

```
libasphalt5.so
  -> pyelftools: sections, .dynsym, relocations, .init_array, .plt
  -> function discovery: symbols, init arrays, PLT stubs, literal pools
  -> Capstone recursive decode (ARM + Thumb-2 + VFPv2)
  -> generated/functions_*.c, table.c, imports_gen.c, plt_table.c
```

The translator uses 500 KB chunks. The current 3.2.4 library produces 89
files, which keeps individual files under about 27k lines and lets Ninja
compile them in parallel.

## Generated function shape

```c
/* _ZN5Scene6RenderEv @ 000dbe60 (arm) */
void fn_000dbe60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dbe60:;
    /* one block per guest instruction */
}
```

- direct branch: label or tail call
- indirect branch: `guest_pc_write` and `guest_call`
- dynamic import: `imp_<name>` veneer
- unresolved PC-relative literal: guest address

## Regeneration

```powershell
python tools/armrecomp.py --so original/apk/lib/armeabi-v7a/libasphalt5.so --out generated
python tools/apply_runtime_patches.py generated
```

The patch step is not optional. It installs eight runtime fixes:

| Function | Address | Fix |
|---|---|---|
| `CMatrix::Mult` | `00153478` | scalar C multiply |
| `CMatrix::PreMult` | `001534f0` | scalar C multiply |
| `CMatrix::SetMult` | `00153568` | scalar C multiply |
| `CMatrix::GetQuaternion` | `00154e38` | largest-diagonal extraction |
| `CCamera::update` | `00151c40` | host view filter hook |
| `CCar::UpdateNitro` | `0016e384` | host nitro input bit |
| `Scene::ProcessPhoneRotationAngle` | `000d15b8` | disable tilt assist in buttons mode |
| `Game::Exit` | `00097a04` | host process exit |

`apply_runtime_patches.py` scans every `functions_*.c`, applies the fix
wherever the function landed, and fails if any target is missing.

## Known limits

- `ldrd` / `strd` are not emitted for the four instructions that use them in
  this library; those paths are not reached by the supported build.
- Runtime-only callbacks need an address in `DEFAULT_EXTRA` or `--extra`.
- The translation is tied to the 3.2.4 Sony Ericsson library. Other builds
  need a fresh symbol inventory and validation.
