# Generated translation

This directory is produced by `tools/armrecomp.py` from
`original/apk/lib/armeabi-v7a/libasphalt5.so`.

- 89 translation units, about 500 KB each
- 6,802 functions, 903,832 ARM/Thumb instructions
- `index.tsv` lists the first and last function in every unit
- `table.c`, `imports_gen.c`, `imports_gen.h` and `plt_table.c` are generated
  dispatch and import tables
- `functions.h` declares the translated entry points

Do not edit these files by hand. Regenerate them with:

```powershell
python tools/armrecomp.py --so original/apk/lib/armeabi-v7a/libasphalt5.so --out generated
python tools/apply_runtime_patches.py generated
```

The patch step installs the scalar matrix routines and the camera, nitro,
phone-rotation and exit hooks. It is required after every regeneration.
