# Data formats — working notes (M1)

Everything below is established empirically from the preserved packs, the engine's
decompiled loaders (via REA/Ghidra), and the demangled symbol table
(`analysis/rea/symbols_demangled.txt`, 5,894 named functions).

## The container format — SOLVED

Every "package" file (chunked `package_general.bar_*.cnk`, `strings.bar`, and each
nested library) uses one structure, confirmed against `CPackage::Bind`,
`FileHeader::LoadHeader`, `GetLibSize`, `FSeekLibData`:

```
u16  count
u32  offsets[count]          # cumulative, offsets[0] == 0
data begins at 2 + 4*count
lib[i] spans [dataStart + offsets[i], dataStart + offsets[i+1])
the final lib always ends at EOF
```

- Reader: `CPackage::Bind(char*)` → `IFileReadI::Open` → `CPackage::Bind(reader, bool)`.
- Sizes are *not stored* — `GetLibSize(i) = offsets[i+1] - offsets[i]`.
- The engine's `LZMAFile` in this Android build is a **passthrough** (no
  compression): `read/readInt/readShort/...` map straight to `IFileReadI`.
- `package_general.bar_*.cnk` is a **virtual file split into 1 MB pages**;
  `IFileReadI::Read` (`File_CNT.cpp`) loads `package_general.bar_%03d.cnk`
  by page index on demand (`%s0%d%s` / `%s%d%s` / third variant in .rodata).
- Tool: `analysis/tools/bar_extract.py` (recursive-capable).

## `package_general.bar` — 16 top-level libraries (97,432,470 B total)

| lib | size | content |
| --- | --- | --- |
| 000 | 4,282 B | config struct (u16 counts + records) |
| 001 | 174,304 B | **container**: 207 × WAV (842 B each → tiny SFX) |
| 002 | 89,760 B | MP3 audio |
| 003 | 60,256 B | struct tables |
| 004 | 5,362,080 B | mixed (text-heavy: 3,923 ASCII runs) |
| 005 | 13,854,016 B | mixed: MP3 + UTF-16 strings + ASCII |
| 006 | 49,696 B | unknown struct |
| 007 | 93,952 B | **container**: 89 entries, magic `df 03 31 05 05 00` (24 B – 5.4 KB each) |
| 008 | 73,569,940 B | **159,118 MP3 frames** — music bundles + 10k strings |
| 009 | 362,912 B | mostly text |
| 010 | 29,632 B | text |
| 011 | 889,312 B | UTF-16 heavy |
| 012 | 219,360 B | MP3 |
| 013 | 1,264,992 B | MP3 + text |
| 014 | 962,432 B | text (11,855 runs — names/index?) |
| 015 | 445,478 B | **container**: 8 language blocks (54–59 KB each) |

## Library map (from REA call-site analysis)

| lib | size | owner (evidence) |
| --- | --- | --- |
| 0 | 4,282 B | package config struct tables |
| 1 | 174,304 B | sound WAV bank (nested container, 207 files) |
| 2 | 89,760 B | **car resources** — `CCar::InitCar` → `GetLZMAFile(2)` → `CCarBase::LoadMesh`; also `Scene::TraficInit` / `LoadBlockingCarMesh`; 53-entry table |
| 3 | 60,256 B | **HUD overlays** — `COverlay::Load` → 3 (45 entries) |
| 4 | 5,362,080 B | **lightmaps** — `Scene::LoadLightmap` → 4 |
| 5 | 13,854,016 B | **objects/props** — `ObjectsLibrary::Package_Register` → 5 (3,004 entries) |
| 6 | 49,696 B | **game resources** — `CGameResource::Load` → 6 (scripts/waypoints/categories) |
| 7 | 93,952 B | **sprites** — `SpriteManager::Package_Register` → 7 (89 defs) |
| 8 | 73,569,940 B | **textures** — `TexturesLibrary::Package_Register` → 8 (1,347) |
| 9 | 362,912 B | **scenes** — `Scene::LoadScene` → 9 |
| 10 | 29,632 B | **particle emitters** — `Scene::LoadParticleEmitters` → 10 (15 entries) |
| 11 | 889,312 B | TBD (UTF-16 heavy) |
| 12 | 219,360 B | audio bank (MP3) — TBD |
| 13 | 1,264,992 B | audio bank (MP3) — TBD |
| 14 | 962,432 B | **car scene objects** — `CarSceneObject::LoadCar` → 14 |
| 15 | 445,478 B | **localized strings** (8 languages, nested container) |

## Sprite definitions (lib 7)

Loaded by `Sprite::loadSprite_0/1/2`; each entry begins with
`u16 0x03df, u32 0x00050531, u16 count` (`loadSprite_0`), then parallel
frame arrays (u16/u32 × count). `loadSprite_1`/`_2` add `u16 n` + raw
blocks (6-byte and 7-byte records) plus palette/attribute arrays.
`SpritePack` holds 89 `CSpriteInfo` records (8 bytes each in engine memory).

## Object library (lib 5)

`u16 count=3004` + 3,004 × `{u32 offset, u16 flags}`; payloads at
`2 + 6*count + offset`; engine `CObjectInfo` records are 12 bytes.

## `strings.bar` (13,328 B)

14 libs = 7 pairs of *(language text block, 104-byte font-glyph map)*:
EN(1,596 B), DE, ES, IT, JP (kana), PT/BR, PT... block 0 starts at byte 58 with
UTF-16 "Bestsellers…". Localization extracted to `data/extracted/strings_bar/`.

## Loose files

| File | Status |
| --- | --- |
| `gamecfg.bar`, `shaderSettings.bar`, `ia.bar`, `oconf.bar` | raw data files (NOT containers); each has its own struct/stream format; loaders: `Game::LoadConfigFiles`, `Game::Package_LoadConfig`, `Game::LoadConfig_Cars/Scenes/MapOffsets` |
| `window` | 27 concatenated PNGs (UI skins) → `data/extracted/window_pngs/` |
| `textures` | IGP portal promo pack (84 `NAME.IGP` entries, u32 count + 16B name + u32 size) |
| `raw_*.glsnd` | Ogg Vorbis (libVorbis 20070622) |
| `og*.mp4` | H.264 promo/intro videos |
| `missionslib.bar` | referenced by engine strings; **not present** in either pack; `SearchAndResgisterDLCPackages()` is a stub in this build |

## Engine readers already recovered (REA/Ghidra addresses = ELF addr + 0x10000)

- `CPackage::Bind(IFileReadI*, bool)` @0x188348, `Bind(char*)` @0x188454
- `CPackage::GetLibOffset/GetLibSize/FSeekLibData/InitCompressedFile`
- `FileHeader::LoadHeader(IFileReadI*)` @0x7a068, `(LZMAFile*)` @0x74450
- `IFileReadI::Read` @0xd8b14 (1 MB paged chunk reader), `Open/OpenResource`
- `LZMAFile::*` (passthrough) @0xd8e64–0xd9000
- `Game::LoadConfigFiles` @0x744f4, `GamePackageMgr::Init/Register/GetPackage`
- `CGamePackage::Bind/GetLFB/GetTexturesLZMAFile/GetStringsLZMAFile`

## Texture library (lib 8) — extracted

- Table: `u16 count=1347` + records `{u32 offset, u16 flags}`; data at `2+6*count`; last record
  is a sentinel (`flags=0xFFFF`).
- Each texture: `u16 width, u16 height, u16 format, u16 extra`, then format-specific payload:
  - fmt 5/6 → `[u32 size][PVR v2 container]` — headerLen 52, height, width, mipCount,
    flags @0x10 (`0x18`=PVRTC2, `0x19`=PVRTC4), dataSize, bpp
  - fmt 8 → `[u32 size][RGBA32]`
  - fmt 0x400 → `[u32 size][RGBA4444 or RGBA32]`
  - fmt 4 → `[u32 size][JPEG]`
- Extracted: `analysis/tools/texture_extract.py` → `data/extracted/textures/`
  (**1,116 .pvr + 229 .png + texture_index.json**, ~40 MB; PNGs decoded directly).
- PNG samples = UI atlases/HUD; PVRs = the 3D world textures.

## Next format work

1. Sprite + object record parsers (extend `bar_extract` family) — layout notes above.
2. Car resources (lib 2) + car scene objects (lib 14) record layouts (mesh = `AniObj_v4`/`gx*` formats, `CCarBase::LoadMesh`).
3. Audio banks (libs 11/12/13) ownership + `.glsnd` mapping.
4. Raw structs: `gamecfg.bar`, `shaderSettings.bar`, `ia.bar` field layouts.
