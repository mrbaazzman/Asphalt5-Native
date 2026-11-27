#!/usr/bin/env python3
"""Apply the runtime fixes to the generated ARM-to-C output.

Run after every armrecomp.py regeneration:

    python tools/apply_runtime_patches.py generated
    python tools/apply_runtime_patches.py --version 3.3.7 generated337

The script scans every chunk, patches the target functions wherever they
landed, and fails if any target is missing.
"""

import argparse
import glob
import os
import sys

# Per-build function addresses.  The 3.2.4 library is stripped, so these were
# recovered from its symbol-free generated tree; 3.3.7 still has full symbols.
VERSIONS = {
    "3.2.4": {
        "cmatrix": {
            "fn_00153478": 0,
            "fn_001534f0": 1,
            "fn_00153568": 2,
            "fn_00154e38": None,
        },
        "camera": {
            "fn": "fn_00151c40",
            "note": "label",
            "label": "L_00151c7c:;\n",
            "note_reg": 4,
            "tail": "        return fn_00151be0(cpu);\n",
            "update": "fn_00151be0",
        },
        "nitro": "fn_0016e384",
        "rotation": "fn_000d15b8",
        "exit": "fn_00097a04",
        "hooks": [
            ("fn_00104524", "if (guest_control_menu_label(cpu)) return;", "Input mapper Controls row label.", "guest_control_menu_label"),
            ("fn_00103698", "if (guest_control_menu_click(cpu)) return;", "Input mapper Controls row click.", "guest_control_menu_click"),
            ("fn_0010359c", "if (guest_control_menu_action(cpu)) return;", "Input mapper Controls row action guard.", "guest_control_menu_action"),
            ("fn_00093fd0", "guest_force_control_mode(cpu);", "Force accelerometer control scheme.", "guest_force_control_mode"),
            ("fn_001287c8", "if (guest_video_menu_label(cpu)) return;", "Display settings entry in the Video menu.", "guest_video_menu_label"),
        ],
    },
    "3.3.7": {
        "cmatrix": {
            "fn_0013ef5c": 0,
            "fn_0013efd4": 1,
            "fn_0013f04c": 2,
            "fn_0013f9d4": None,
        },
        "camera": {
            "fn": "fn_0013d8c8",
            "note": "entry",
            "note_reg": 0,
            "tail": "        return fn_0013d760(cpu);\n",
            "update": "fn_0013d760",
        },
        "nitro": "fn_0015704c",
        "rotation": "fn_000bde00",
        "exit": "fn_00082b08",
        "hooks": [
            ("fn_000ef450", "if (guest_control_menu_label(cpu)) return;", "Input mapper Controls row label.", "guest_control_menu_label"),
            ("fn_000eeebc", "if (guest_control_menu_click(cpu)) return;", "Input mapper Controls row click.", "guest_control_menu_click"),
            ("fn_000eed80", "if (guest_control_menu_action(cpu)) return;", "Input mapper Controls row action guard.", "guest_control_menu_action"),
            ("fn_0007f988", "guest_force_control_mode(cpu);", "Force accelerometer control scheme.", "guest_force_control_mode"),
            ("fn_00115268", "if (guest_video_menu_label(cpu)) return;", "Display settings entry in the Video menu.", "guest_video_menu_label"),
        ],
    },
    "3.4.1": {
        "cmatrix": {
            "fn_0013e1ac": 0,
            "fn_0013e224": 1,
            "fn_0013e29c": 2,
            "fn_0013ec24": None,
        },
        "camera": {
            "fn": "fn_0013cb18",
            "note": "entry",
            "note_reg": 0,
            "tail": "        return fn_0013c9b0(cpu);\n",
            "update": "fn_0013c9b0",
        },
        "nitro": "fn_0015688c",
        "rotation": "fn_0009a118",
        "exit": "fn_00063bf4",
        "hooks": [
            ("fn_000eecc8", "if (guest_control_menu_label(cpu)) return;", "Input mapper Controls row label.", "guest_control_menu_label"),
            ("fn_000ee734", "if (guest_control_menu_click(cpu)) return;", "Input mapper Controls row click.", "guest_control_menu_click"),
            ("fn_000ee5fc", "if (guest_control_menu_action(cpu)) return;", "Input mapper Controls row action guard.", "guest_control_menu_action"),
            ("fn_00060a50", "guest_force_control_mode(cpu);", "Force accelerometer control scheme.", "guest_force_control_mode"),
            ("fn_00114428", "if (guest_video_menu_label(cpu)) return;", "Display settings entry in the Video menu.", "guest_video_menu_label"),
        ],
    },
}


def prologue(fn):
    return (
        f"void {fn}(CPU *cpu)\n{{\n"
        "    const uint32_t entry_lr = cpu->r[14];\n"
        "    uint32_t shc = 0; (void)shc; (void)entry_lr;\n"
    )


def patch_simple(src, fn, call, why, sentinel):
    """None = function not in this file, False = already patched, True = changed."""
    marker = f"void {fn}(CPU *cpu)"
    start = src.find(marker)
    if start < 0:
        return src, None
    if sentinel in src[start:start + 500]:
        return src, False
    old = prologue(fn)
    if old not in src:
        raise SystemExit(f"WARNING: {fn} prologue not found")
    return src.replace(old, old + f"    /* {why} */\n    {call}\n", 1), True


def patch_cmatrix(src, fn, op):
    """None = function not in this file, False = already patched, True = changed."""
    why = ("CMatrix::GetQuaternion robust extraction." if op is None
           else "CMatrix multiply scalar replacement.")
    call = ("guest_cmatrix_get_quaternion(cpu); return;" if op is None
            else f"guest_cmatrix_mul(cpu, {op}); return;")
    return patch_simple(src, fn, call, why, "guest_cmatrix")


def patch_camera(src, spec):
    """Hook CCamera::update into the host view-matrix filter.

    None = function not in this file, False = already patched, True = changed."""
    fn = spec["fn"]
    marker = f"void {fn}(CPU *cpu)"
    start = src.find(marker)
    if start < 0:
        return src, None
    if "camera_filter_last" in src[start:start + 5000]:
        return src, False

    old = prologue(fn)
    if old not in src:
        raise SystemExit(f"WARNING: {fn} prologue not found")
    new = ("extern void camera_note_cam(uint32_t cam);\n"
           "extern void camera_filter_last(void);\n" + old)
    src = src.replace(old, new, 1)

    note = f"    camera_note_cam(cpu->r[{spec['note_reg']}]);\n"
    if spec["note"] == "entry":
        pos = src.find(old, src.find(marker)) + len(old)
        src = src[:pos] + note + src[pos:]
    else:
        label = spec["label"]
        pos = src.find(label, src.find(marker))
        if pos < 0:
            raise SystemExit(f"WARNING: {fn} camera label not found")
        src = src[:pos] + label + note + src[pos + len(label):]

    tail_old = spec["tail"]
    tail_new = (f"        {spec['update']}(cpu);\n"
                "        camera_filter_last();\n"
                "        return;\n")
    pos = src.find(tail_old, src.find(marker))
    if pos < 0:
        raise SystemExit(f"WARNING: {fn} matrix-build tail not found")
    src = src[:pos] + tail_new + src[pos + len(tail_old):]
    return src, True


def patch_nitro(src, fn):
    return patch_simple(
        src, fn,
        "if (platform_nitro_held_for_car(cpu->r[0])) cpu->r[1] |= 0x20u;",
        "Host nitro tap: feed the player car's nitro input bit.",
        "platform_nitro_held_for_car",
    )


def patch_rotation(src, fn):
    return patch_simple(
        src, fn,
        "if (platform_buttons_mode()) return;",
        "No phone-rotation steering in forced buttons mode.",
        "platform_buttons_mode",
    )


def patch_exit(src, fn):
    return patch_simple(
        src, fn,
        "platform_request_exit(); return;",
        "Host exit for the in-game Exit item.",
        "platform_request_exit",
    )


def patch_files(paths, version, strict=True):
    spec = VERSIONS[version]
    missing = set(spec["cmatrix"])
    camera_found = nitro_found = rotation_found = exit_found = False
    hooks_found = {fn: False for fn, _, _, _ in spec["hooks"]}
    changed = 0
    for path in paths:
        src = open(path, encoding="utf-8").read()
        file_changed = 0
        for fn, op in spec["cmatrix"].items():
            if fn not in missing:
                continue
            src, did = patch_cmatrix(src, fn, op)
            if did is None:
                continue
            missing.discard(fn)
            if did:
                file_changed += 1
        src, did = patch_camera(src, spec["camera"])
        if did is not None:
            camera_found = True
            if did:
                file_changed += 1
        src, did = patch_nitro(src, spec["nitro"])
        if did is not None:
            nitro_found = True
            if did:
                file_changed += 1
        src, did = patch_rotation(src, spec["rotation"])
        if did is not None:
            rotation_found = True
            if did:
                file_changed += 1
        src, did = patch_exit(src, spec["exit"])
        if did is not None:
            exit_found = True
            if did:
                file_changed += 1
        for fn, call, why, sentinel in spec["hooks"]:
            src, did = patch_simple(src, fn, call, why, sentinel)
            if did is not None:
                hooks_found[fn] = True
                if did:
                    file_changed += 1
        if file_changed:
            open(path, "w", encoding="utf-8").write(src)
            changed += file_changed

    if missing:
        if strict:
            print("WARNING: patch targets not found: " + ", ".join(sorted(missing)),
                  file=sys.stderr)
            return 1
        print("not in this file: " + ", ".join(sorted(missing)))
    if not camera_found:
        print(f"WARNING: CCamera::update ({spec['camera']['fn']}) not found", file=sys.stderr)
        return 1
    if not nitro_found:
        print(f"WARNING: CCar::UpdateNitro ({spec['nitro']}) not found", file=sys.stderr)
        return 1
    if not rotation_found:
        print(f"WARNING: Scene::ProcessPhoneRotationAngle ({spec['rotation']}) not found",
              file=sys.stderr)
        return 1
    if not exit_found:
        print(f"WARNING: Game::Exit ({spec['exit']}) not found", file=sys.stderr)
        return 1
    for fn, ok in hooks_found.items():
        if not ok:
            print(f"WARNING: runtime hook ({fn}) not found", file=sys.stderr)
            return 1
    print(f"patched {changed} runtime function(s) in {len(paths)} file(s)")
    return 0


def main(argv):
    ap = argparse.ArgumentParser()
    ap.add_argument("target", nargs="?", default="generated")
    ap.add_argument("--version", choices=sorted(VERSIONS), default="3.2.4")
    args = ap.parse_args(argv[1:])
    target = args.target
    strict = os.path.isdir(target)
    if strict:
        paths = sorted(glob.glob(os.path.join(target, "functions_*.c")))
        if not paths:
            paths = [os.path.join(target, "functions.c")]
    else:
        paths = sorted(glob.glob(target)) or [target]
    paths = [p for p in paths if os.path.isfile(p)]
    if not paths:
        print("no generated translation units found", file=sys.stderr)
        return 1
    return patch_files(paths, args.version, strict)


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
