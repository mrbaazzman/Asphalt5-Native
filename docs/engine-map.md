# Engine Map — Asphalt 5 HD (libasphalt5.so)

Consolidated from REA/Ghidra sessions (addresses = ELF address + 0x10000).
Companion docs: `formats.md` (data layout), `lab.md` (tooling), `symbols_demangled.txt` (5,894 symbols).

## Boot chain (Java → native)

```
GameInstaller (download/validate)  →  Asphalt5 activity
  → Asphalt5GLSurfaceView + Asphalt5Renderer (GLES1, 20 fps cap)
    → nativeInit(device flags) → Lib3D main loop
      → GS_* game states (GS_LoadGame, GS_MainMenu, GS_GetFullGame, ...)
```

JNI surface (23 exports): `Asphalt5_native*` (touch/tilt/lifecycle), `Asphalt5Renderer_native*`
(init/render/resize), `GLMediaPlayer_native*` (SoundPool mixer), `GLResLoader_nativeInit`.

## Platform layer

- **`IFileReadI`** — virtual file reader. For `package_general` it pages
  `package_general.bar_%03d.cnk` in **1 MB pages** (`pos >> 20`), chunk names built by
  `%s0%d%s` / `%s%d%s`; otherwise plain file/memory reader.
- **`CPackage` / `CGamePackage` / `GamePackageMgr`** — container system:
  `u16 count` + `u32 offsets[count]` (cumulative, first 0), data at `2+4*count`;
  `GetLibOffset(i)` = dataStart + Σ sizes; `GetLZMAFile(pkg, i)` = per-lib reader.
- **`FileHeader`** — per-section `u16 count` + `u32 offsets` table (same math, different base).
- Allocator blocks: `{u32 elemSize, u32 count}` prefix then `count` records.
- `LZMAFile` is a **passthrough** in this build (legacy name; no compression).

## The 16 package libraries (`package_general`, 97,432,470 B)

| lib | owner / loader | content |
| --- | --- | --- |
| 0 | `Game` config | small struct tables |
| 1 | `BaseSoundManager` | 207 WAVs (nested container) |
| 2 | `CCar::InitCar` → `CCarBase::LoadMesh` (Physics/CarBase.cpp) | **collision meshes**, 53 cars, int16 tris |
| 3 | `COverlay::Load` | HUD overlays (45) |
| 4 | `Scene::LoadLightmap` | lightmaps |
| 5 | `ObjectsLibrary` | **object/mesh pool, 3,004 objects** (props + car bodies/parts) — AniObj_v4 |
| 6 | `CGameResource::Load` | scripts, waypoints, cutscenes, categories |
| 7 | `SpriteManager` | 89 sprite defs (header `u16 0x03df, u32 0x00050531, u16 count`) |
| 8 | `TexturesLibrary` | 1,347 textures (`u16 w,h,fmt,extra` + PVR v2 / RGBA / 4444 / JPG) |
| 9 | `Scene::LoadScene` | 14 scene files (objects, nav, splines, powerups) |
| 10 | `Scene::LoadParticleEmitters` | 15 particle emitter sets |
| 11 | ? | UTF-16 heavy (TBD) |
| 12 | audio (MP3) | TBD — sound bank |
| 13 | `CGameObjectAnimLib::Init/Open` | per-scene object **animations** (45 records) |
| 14 | `CarSceneObject::LoadCar` → `StaticSceneObject::Load` | 89 car slots (5,469 B each, id-keyed tables) |
| 15 | localization | 8 languages |

## ID spaces (observed)

- objects (lib 5): props `<1000` (146), `1000..19999` (2,841), cars `20000+` (16), parts `40000+`
- car slots (lib 14): ids `20010 → 50440` (89 records)
- car parts (scene objects): `40000 + slot*3 + i` (wheels etc.)
- shared car texture id: `21000`; animation ids: `101+` (lib 13)

## Object / mesh system

```
StaticSceneObject::Load(id, pkg)
  → ObjectsLibrary::GetObjAnim(id)  (cache)
  → miss: ObjectsLibrary::LoadObject(id) → LoadObjectIndex → CAniObj (AniObj_v4)
  → CAniMgr::LoadAni(obj) → render instance
CarSceneObject::LoadCar(...) → StaticSceneObject::Load(carId) + parts (40000+…)
```

`AniObj_v4::Load(file, ...)` (vtable-dispatched) sequence:

1. **GX vertex-format list**: 4-byte records `{attr, type, comps, bias}` until `0xff` byte → `RegisterVtxFmt`
2. **Materials** (`LoadMaterials`): `u16 count` + count × `gxAniMtl::load` (0x28-byte structs)
3. `u8 meshCount` → `gxAniMesh[0x5c]`
4. Per mesh → `LoadTopologies` → `gxAniMesh::loadTopology` (groups) → `gxAniGroup::loadTopology`
   (`u16 groupCount`, flags byte, floats, then `gxAniDList` (0x38) display lists via `gxAniDList::load`)
5. `LoadGeomBuffers`: `u16 n` + `n×12B` vertex descriptors; `u16 n` + `n×3B`; 16×`u16`;
   up to 2 vertex buffers (`n×8B`); then index buffers (`u16,u16` counts → `(a+b)*3` bytes…)
6. `LoadAnimations` (`gxAnimation::load`: `u16 count; u32 n; n×u32; u16 m; m×4B; m×u8 types; …`),
   pivots, placeholders, animatables

## Scene pipeline — **lib 9 SOLVED** (validated on all 13 scenes)

`Scene::LoadScene(i)`: `CGameObjectAnimLib::Init(scene)` (lib 13) → `LoadPhysicsMap` →
lib 9 record → `LoadSceneFromFile` (spawns StaticSceneObjects) → `LoadLightmap` (4) →
particles (10) → `LoadSceneScripts` (`CGameResource::Load` (6)).

lib 9 = `u16 count` + `{u32 startOffset, u16 id}` table (id = scene index).

Scene record (`Scene::LoadSceneFromFile`):

```
u16 objectCount
per object:
  u16 objectId
  f32 tx, ty, tz          translation
  f32 qx, qy, qz, qw      quaternion (w=-1 == identity)
  u8  flags               (hi nibble -> +0x185, lo nibble -> +0x186)
  s16 propLen + bytes     attribute string ("jump_object=true\r\njump_angle=30.2", ...)
u8 lightCount
per light: u8 type (0=omni: 16B {u32, f32x3}; 1=spot: 0x40; 2=specular: 0x20)
u16 navCurveCount
per curve: 48 bytes (4 x float3 bezier control points)
```

Scenes 2..13 resolve 100% against the package object table (scene 1 = demo scene,
59 unique ids missing). Object ids are scene-scoped through
`ObjectsLibrary::Package_Register(pkg)`: lib5's own `{u32 start, u16 id}` table
(binary searched by id; record = [start .. next start]).

## Object library (lib 5) — two classes

- **class 0x65** = `AniObj_v4` (cars + complex props; see walk below).
- **class 0x61** = `CAniObjDLists` (props/road segments):

```
u16 nvert; u16 n2; u16 ngroups; f32 x4 (bounds)
u8 first
  [if first == 0xff: f32 x10 (pivot: pos3 + scale3 + quat4) + u8 first]
vtxfmt list: (attr, f1, f2, f3) x4B records; 0xff terminator + 3 bytes
positions: nvert x float3        (direct, no indices)
  [if attr 10 present: u16 n + n x float3 normals]
  [if attr 0x19 present: u16 n + n x float3 other]
per texunit: u16 n + n x float2 UVs
  [if attr 11 present: u16 n + n x color (3B if f1==0 else 4B)]
u8 tableCount; tableCount x {u8 attr, u8 type}
per group: u8 shader; u8 ntex; ntex x {u16 texid, u16 x}; u32 size; size x dlist bytes
```

Display-list records follow the attr/type table order; **width = 1 byte when
type == 2 else 2 bytes** (same rule as InitObj). Validated byte-exact on
multiple objects (all lists consume exactly, all indices in range).

## Animations (rest pose) + wheel placement — SOLVED

Object blob tail = animations: `u16 count`; per animation (`gxAnimation::load`):

```
u16 a
u32 n + n x f32        data array (all curve payloads concatenated)
u16 m + m type bytes   curve types (car 1: all type 1)
per curve 4B header    A(u8), B(u8), C(u16)
```

Car 1: 1 animation, 76 curves = 37 pivots x 2 (translation B=3, quat B=4) +
2 extras. Data sum = 263 floats exactly. `C=1` = single keyframe, so the data
IS the rest pose:

| pivot | translation |
| --- | --- |
| 3 Wheel_FL | (38.37, -73.25, 18.85) |
| 4 Wheel_FR | (-38.37, -73.25, 18.85) |
| 5 Wheel_BL | (40.95, 70.54, 18.85) |
| 6 Wheel_BR | (-40.95, 70.54, 18.85) |
| 7..10 planes | same spots as wheels |

Mesh binding: each mesh's first local pivot `{u16 globalPivotIndex, f32x7}`
(identity transforms in-file) + one mesh-pivot `{idx, w=1.0}` = rigid single-bone
binding. `a5engine` now uses these rest transforms for all meshes (wheels,
planes, lights) and steers/spins the wheels on top.

## Road network (lib 12) — SOLVED (CMap sections)

`CMap::Init` reads lib 0xc: per-scene record = 10-byte header
(`u16 version, u16 groups, u32 size, u16 mainCount`; **section count = size/9**)
then **283 sections x 54 bytes** = 27 x s16 (RAM expands each field `<<3`):

```
fields[0..2]   center point (x, height, planar-z)
fields[3..26]  9 points x 3 (road edge samples, alternating sides)
```

`CMap::GetLanePosition(out, section, lane)`: lane position = midpoint of two
consecutive edge points (lane < 8). `RoadStruct::SearchNearestSection` works in
`world<<3` fixed point.

**Physics space is y-up**: engine (x, z) = render (x, y). Fitting the section
centerline to the lightmap gives the transform to render space:
`render = rotate(f0, f2 by -12 deg) * 7.5 + (-22, -444)` (verified visually and
by autopilot: the car follows the racing line around the whole circuit).

`a5engine` builds the path (2264 points) from lib 12 and uses it for the
autopilot (`--auto`): nearest-point tracking + lookahead steering; the car
drives the complete Monaco lap.

## Lightmaps (lib 4) + car paint tint — SOLVED

lib 4 = `u16 count` + `{u32 start, u16 id}` (id = scene index). Per-scene record:

```
u32 magic 'RLEM' (0x4d454c52)
u16 width, u16 height
u32 dataSize
u8 palette[1024]       256 x RGBX
u8 rle[dataSize]       per-row RLE: token bit7 set = run (count = tok&0x7f, one value byte),
                       else literal (count value bytes)
u32 rowOffsets[height] offsets into rle (rows may be height-1 entries; clamp)
```

`Scene::GetLightmapColor(x, y)`: walk the row's RLE to column x -> palette index.

World -> lightmap mapping (`Scene::UpdateCarColor`, `Game::LoadConfig_MapOffsets`):
lib 0 after the scene configs: `u16 count` + per scene 4 x i32/10 =
`{scaleX, scaleZ, minX, minZ}`; then

```
lmX = width  * ((-worldX - minX) / scaleX + 0.5)
lmY = height * (( worldZ - minZ) / scaleZ + 0.5)
```

Car paint tint: `Shader::staticForcedRGB = palette[GetLightmapColor(car)]/255 + 0.2`
(cars are lit by the local lightmap cell; tunnels/shade darken them, headlights
turn on when the cell is dark). Implemented in `a5engine` for the driven car.
The decoded lightmap is a picture of the circuit (bright track ribbon, black
tunnel zones, gray outside) — `analysis/shots/lightmap_scene2.png`.

## Sky

`Scene::ResetScene` sets the skybox object id to **999** and
`InitSkyboxAndRoadReflection` also loads object **900** (road reflection).
In this data build id 999 is absent from package_general (the engine tolerates
the failure); `a5engine` uses a daylight clear color instead. Object 900 exists
(class 0x61, 204 B — a reflection quad with a sky-gradient texture).

## The track

Track = scene objects: class 0x61 road segments + props (buildings, signs,
lights) placed by lib 9. `a5engine --scene N` renders the full circuit
(verified: Monaco waterfront + full circuit overview).

## Audio

`BaseSoundManager` builds 187 `SoundPack` entries (`CSoundInfo`); WAV source data = lib 1
(nested container);
`GLMediaPlayer` (Java SoundPool) + native mixer for playback; `.glsnd` = Ogg Vorbis on SD.

## AniObj_v4 — section walk (validated byte-exact on car id 1)

`analysis/tools/aniobj_walk.py` walks an object blob end-to-end; car id 1 (75,763 B)
closes perfectly: sections end at EOF minus the animation block. Verified sections:

| section | content |
| --- | --- |
| vtxfmt | 4-byte GX attr records until `0xff` |
| materials | `u16 n` + n × (flags, shader, f32 alpha, optional u16 fields) |
| meshes | `u8 count` (car id 1: 35 meshes) |
| topology | per mesh: groups; per group: texture-ID list + f32 + display lists |
| animatables | `u16 a,b,c; 7×u16; u16 d,e` + (sum)×4B records |
| global pivots | `u8 n` + per: name (`u8 len` + `len+1` bytes) + 2×u8 — car id 1: 37 bones (`0001_body`, `0003_Wheel_FL`, …) |
| placeholders | `u8 n` + per: name + u16 + 28 B — car id 1: 16 emitters (`01_smoke_L`, `02_trail_FL`, …) |
| pivots | per mesh: local pivots (`u16 idx + 7×f32`) and mesh pivots (`u8 k + k×(u16+f32)`) |
| geometry | see below |
| animations | `gxAnimation::load` records (final block) |

### Display lists — SOLVED (triangle extraction works)

`gxAniDList` bytecode = draw-command stream (SetupDList patches, GetDListInfo counts):

```
repeat:
  op u8:  0x90-0x97 = triangles | 0x98-0x9F = strip | 0x00-0x07 = padding
  u16 count (LE)
  count x vertex records (record size varies per mesh: 8 or 10 bytes here)
```

Vertex record layout (fixed attribute order, sizes 1/2B per descriptor; `readIdx`
is plain little-endian):

```
[1B attr0][u16 LE POS][u16 LE NRM][1B][u16][u16]   (10B)
[1B attr0][u16 LE POS][u16 LE NRM][1B]             (8B, final indices via 2B field)
```

- **POS = u16 LE at record offset 1 — indices are GLOBAL** across meshes
  (car 1: mesh ranges partition the 1,238-vertex array; wheels at 1089+, tail 1237).
- Engine renders via GLES `glDrawElements(GL_TRIANGLES, …)` from a shared index
  buffer; `AniObj_v4::InitObj` rebuilds it with the same layout (28 KB function).
- `AniObj_v4::SendBuffersToGPU` binds client arrays: positions/normals float3,
  texcoords float2 (up to 2), colors u8x4, skinning via MatrixIndex/Weight OES.

**Validated:** car 1 body renders as a clean car (front/top views); all 44 cars
exported to OBJ (`export_cars.py`): 1.1k-1.9k triangles each, 0 failures.
`shaded_render.py` produces a flat-shaded 3D view (painter's + lambert) —
the first true render of a car from pure decode.

### Textures for cars — **SOLVED** (UV mapping + native textured render)

- Texture table field #2 = **texture ID** (verified): `20010 → #967` (paint),
  `20011/12` (lights), `20802..20805` (variants), `21000 → #1134` (shared) —
  all resolved to decoded PNGs.
- **Display-list record layout (validated against `AniObj_v4::InitObj`: all 38
  car-1 lists consume exactly, all indices in range):**

  ```
  mesh byte +0x50 = texcoord unit count (1 or 2)
  record (engine read order):
    u8  a0            (PNMTXIDX; 0 for cars)
    u16 POS           index into positions  (float3)
    u16 NRM           index into normals    (float3)
    u8  CLR           index into colors     (u8x3)
    u16 TEX0          index into uv array 0 (float2)
   [u16 TEX1]         only when texunits == 2 (10-byte record; 8-byte otherwise)
  ```
- The old "scrambled UVs" bug: 8-byte records were read with a bogus TEX1
  taken from the next record's bytes. The per-mesh `texunits` byte gates it.
- `AniObj_v4::InitObj` dedups (pos,nrm,clr,uv0,uv1) combos into interleaved
  vertices; texcoords are float2 (8 B/entry) per unit.
- **Verified**: `render_car_textured.py` renders car 1 textured (paint atlas
  coherent: pink paint mask, yellow hood stripe, black windows) and
  **`port/a5engine/a5engine.exe` renders it natively from the raw package**
  (lib5 object → dlist decode → lib8 RGBA textures → OpenGL).

**Export pipeline tools:** `a5obj.py` (engine-faithful parser),
`render_car_textured.py`, `aniobj_dlist_validate.py`, `aniobj_layout_brute.py`,
`aniobj_walk.py`, `car_extract.py`, `export_cars.py`, `shaded_render.py`,
`dlist_render.py`, `textured_render.py`.

## Open worklist

1. **GX display-list interpreter** — decode `gxAniDList` bytecode → triangle strips with
   array indices → full wireframe/OBJ of the car models.
2. Car/CRecord id resolution (`20000+` aspects vs lib-5 objects 1..44) + lib 14 semantics.
3. lib 9 scene record internals (object placement, splines).
4. lib 11/12 ownership; audio bank mapping (sound id → WAV/MP3 entry).
