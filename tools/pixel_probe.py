#!/usr/bin/env python3
"""Cheap deterministic pixel probes for the recompiled game captures.

No third-party modules are needed: the probes read binary PPM (P6) files and
check that a capture is not blank/black/white, that HUD/car regions have real
detail, and that the 12 scene captures are visually distinct.  A local
baseline of scene signatures can be recorded/replayed to detect drift.

Examples:
    python tools/pixel_probe.py probe --image work/scene-coverage/scene2_6000.ppm
    python tools/pixel_probe.py check --kind menu --image work/captures/smoke_menu.ppm
    python tools/pixel_probe.py check --kind race --image work/captures/smoke_race.ppm
    python tools/pixel_probe.py check --kind scene-dir --dir work/scene-coverage
    python tools/pixel_probe.py check --kind scene-dir --dir work/scene-coverage ^
        --record-baseline work/scene-coverage/baseline.json
    python tools/pixel_probe.py check --kind scene-dir --dir work/scene-coverage ^
        --baseline work/scene-coverage/baseline.json
"""
from __future__ import annotations

import argparse
import json
import math
import os
import re
import sys

SIG_W, SIG_H = 16, 12


def read_ppm(path: str):
    data = open(path, "rb").read()
    parts = data.split(b"\n", 3)
    if len(parts) != 4 or parts[0].strip() != b"P6":
        raise ValueError("not a binary PPM (P6): " + path)
    try:
        w, h = (int(x) for x in parts[1].split())
        maxval = int(parts[2].strip())
    except ValueError as exc:
        raise ValueError("bad PPM header: " + path) from exc
    px = parts[3]
    if maxval != 255 or w <= 0 or h <= 0 or len(px) != w * h * 3:
        raise ValueError("unexpected PPM geometry/data: " + path)
    return w, h, px


def region_stats(w: int, h: int, px: bytes, x0: int, y0: int, x1: int, y1: int):
    """Return (mean luma, stddev luma, nonblack fraction) for a rectangle."""
    x0 = max(0, min(w, x0)); x1 = max(x0, min(w, x1))
    y0 = max(0, min(h, y0)); y1 = max(y0, min(h, y1))
    n = 0
    s = ss = 0
    nb = 0
    for y in range(y0, y1):
        base = (y * w + x0) * 3
        for x in range(x0, x1):
            i = base + (x - x0) * 3
            r, g, b = px[i], px[i + 1], px[i + 2]
            lum = (r * 299 + g * 587 + b * 114) // 1000
            s += lum; ss += lum * lum; n += 1
            if r or g or b:
                nb += 1
    if n == 0:
        return 0.0, 0.0, 0.0
    mean = s / n
    var = max(0.0, ss / n - mean * mean)
    return mean, math.sqrt(var), nb / n


def metrics(path: str):
    w, h, px = read_ppm(path)
    n = w * h
    sr = sg = sb = 0
    sl = sl2 = 0
    nb = 0
    colors = set()
    # Full-image luma/nonblack statistics.  Sample the colour histogram every
    # fourth pixel; enough to distinguish blank frames from real art.
    for i in range(0, len(px), 3):
        r, g, b = px[i], px[i + 1], px[i + 2]
        sr += r; sg += g; sb += b
        lum = (r * 299 + g * 587 + b * 114) // 1000
        sl += lum; sl2 += lum * lum
        if r or g or b:
            nb += 1
    for i in range(0, len(px), 12):
        colors.add(((px[i] >> 4) << 8) | ((px[i + 1] >> 4) << 4) | (px[i + 2] >> 4))
    lmean = sl / n
    lstd = math.sqrt(max(0.0, sl2 / n - lmean * lmean))
    tr = region_stats(w, h, px, int(w * 0.76), 0, w, int(h * 0.21))
    tl = region_stats(w, h, px, 0, 0, int(w * 0.20), int(h * 0.13))
    bc = region_stats(w, h, px, int(w * 0.35), int(h * 0.63), int(w * 0.65), h)
    mid = region_stats(w, h, px, int(w * 0.18), int(h * 0.31), int(w * 0.82), int(h * 0.94))

    # The lower part of a race frame is road/scenery.  A missing road in the
    # original bug produced a large black band here while the HUD and car
    # remained visible; reject those frames without penalising the night
    # track (which legitimately has ~10% very dark pixels).
    lower_black = lower_dark = lower_n = 0
    for y in range(int(h * 0.55), h):
        base = y * w * 3
        for x in range(w):
            i = base + x * 3
            lum = (px[i] * 299 + px[i + 1] * 587 + px[i + 2] * 114) // 1000
            lower_n += 1
            if lum < 10: lower_black += 1
            if lum < 30: lower_dark += 1
    return {
        "file": os.path.basename(path),
        "width": w, "height": h,
        "mean_rgb": [round(sr / n, 1), round(sg / n, 1), round(sb / n, 1)],
        "luma_mean": round(lmean, 1),
        "luma_std": round(lstd, 1),
        "nonblack_pct": round(100.0 * nb / n, 1),
        "unique_q": len(colors),
        "region_top_right_std": round(tr[1], 1),
        "region_top_left_std": round(tl[1], 1),
        "region_bottom_center_std": round(bc[1], 1),
        "region_mid_std": round(mid[1], 1),
        "lower_black_pct": round(100.0 * lower_black / max(1, lower_n), 1),
        "lower_dark_pct": round(100.0 * lower_dark / max(1, lower_n), 1),
    }


def signature(w: int, h: int, px: bytes):
    """16x12 block-average RGB signature."""
    bw, bh = SIG_W, SIG_H
    sums = [[0, 0, 0, 0] for _ in range(bw * bh)]
    for y in range(h):
        by = min(bh - 1, y * bh // h)
        row = y * w * 3
        for x in range(w):
            bx = min(bw - 1, x * bw // w)
            i = row + x * 3
            b = sums[by * bw + bx]
            b[0] += px[i]; b[1] += px[i + 1]; b[2] += px[i + 2]; b[3] += 1
    out = []
    for s in sums:
        c = s[3] or 1
        out.extend((s[0] / c, s[1] / c, s[2] / c))
    return out


def sig_distance(a, b):
    return sum(abs(x - y) for x, y in zip(a, b)) / len(a)


def check_common(m, kind):
    fail = []
    if kind == "menu":
        if m["nonblack_pct"] < 30: fail.append("nonblack %.1f%% < 30%%" % m["nonblack_pct"])
        if m["unique_q"] < 40: fail.append("unique colours %d < 40" % m["unique_q"])
        if m["luma_std"] < 20: fail.append("luma std %.1f < 20" % m["luma_std"])
        if m["region_top_left_std"] < 15: fail.append("logo region std %.1f < 15" % m["region_top_left_std"])
        if m["region_top_right_std"] < 12: fail.append("menu region std %.1f < 12" % m["region_top_right_std"])
        if m["region_mid_std"] < 15: fail.append("showroom region std %.1f < 15" % m["region_mid_std"])
    else:
        if m["width"] < 854 or m["height"] < 480:
            fail.append("capture too small %dx%d (want at least 854x480)"
                        % (m["width"], m["height"]))
        elif abs(m["width"] / m["height"] - 16.0 / 9.0) > 0.02:
            fail.append("unexpected aspect %.3f (want 16:9)" %
                        (m["width"] / m["height"]))
        if m["nonblack_pct"] < 50: fail.append("nonblack %.1f%% < 50%%" % m["nonblack_pct"])
        if m["unique_q"] < 80: fail.append("unique colours %d < 80" % m["unique_q"])
        if m["luma_std"] < 25: fail.append("luma std %.1f < 25" % m["luma_std"])
        if m["region_top_right_std"] < 10: fail.append("speedometer region std %.1f < 10" % m["region_top_right_std"])
        if m["region_top_left_std"] < 8: fail.append("HUD region std %.1f < 8" % m["region_top_left_std"])
        if m["region_bottom_center_std"] < 10: fail.append("car region std %.1f < 10" % m["region_bottom_center_std"])
        if m["lower_black_pct"] > 20: fail.append("lower black %.1f%% > 20%%" % m["lower_black_pct"])
        if m["lower_dark_pct"] > 45: fail.append("lower dark %.1f%% > 45%%" % m["lower_dark_pct"])
    return fail


def print_metrics(m):
    print("  %s: %dx%d mean=%s nonblack=%.1f%% colours=%d luma=%.1f/%.1f "
          "regions[tl=%.1f tr=%.1f bc=%.1f mid=%.1f] lower[black=%.1f%% dark=%.1f%%]" %
          (m["file"], m["width"], m["height"], m["mean_rgb"],
           m["nonblack_pct"], m["unique_q"], m["luma_mean"], m["luma_std"],
           m["region_top_left_std"], m["region_top_right_std"],
           m["region_bottom_center_std"], m["region_mid_std"],
           m["lower_black_pct"], m["lower_dark_pct"]))


def parse_scenes(text):
    if not text:
        return list(range(1, 13))
    out = set()
    for part in text.split(","):
        part = part.strip()
        if "-" in part:
            a, b = part.split("-", 1)
            out.update(range(int(a), int(b) + 1))
        elif part:
            out.add(int(part))
    return sorted(out)


def check_scene_dir(args):
    frame = args.frame
    scenes = parse_scenes(args.scenes)
    failures = []
    sigs = {}
    for n in scenes:
        path = os.path.join(args.dir, "scene%d_%d.ppm" % (n, frame))
        if not os.path.isfile(path):
            failures.append("scene %d: missing %s" % (n, os.path.basename(path)))
            continue
        m = metrics(path)
        print_metrics(m)
        why = check_common(m, "race")
        if why:
            failures.append("scene %d: %s" % (n, "; ".join(why)))
        w, h, px = read_ppm(path)
        sigs[n] = signature(w, h, px)

    if len(sigs) > 1:
        best = None
        keys = sorted(sigs)
        for i in range(len(keys)):
            for j in range(i + 1, len(keys)):
                d = sig_distance(sigs[keys[i]], sigs[keys[j]])
                if best is None or d < best[0]:
                    best = (d, keys[i], keys[j])
        if best:
            print("  scene signature minimum distance: %.2f (scenes %d/%d)" % best)
            if best[0] < args.min_distinct:
                failures.append("scenes %d and %d look identical (distance %.2f < %.2f)"
                                % (best[1], best[2], best[0], args.min_distinct))

    baseline = None
    if args.baseline and os.path.isfile(args.baseline):
        baseline = json.load(open(args.baseline, encoding="utf-8"))
    elif args.baseline:
        print("  baseline %s not found; skipping signature comparison" % args.baseline)

    if baseline:
        base_sigs = baseline.get("signatures", {})
        for n in scenes:
            if n not in sigs or str(n) not in base_sigs:
                continue
            d = sig_distance(sigs[n], base_sigs[str(n)])
            print("  scene %d baseline distance: %.2f" % (n, d))
            if d > args.baseline_tolerance:
                failures.append("scene %d drifted from baseline (%.2f > %.2f)"
                                % (n, d, args.baseline_tolerance))

    if args.record_baseline:
        obj = {
            "frame": frame,
            "scenes": scenes,
            "signatures": {str(n): sigs[n] for n in sorted(sigs)},
        }
        with open(args.record_baseline, "w", encoding="utf-8") as f:
            json.dump(obj, f)
        print("  recorded baseline: %s" % args.record_baseline)

    if failures:
        print("FAIL")
        for f in failures:
            print("  - " + f)
        return 1
    print("PASS: %d scene capture(s)" % len(sigs))
    return 0


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="command", required=True)

    p = sub.add_parser("probe", help="print metrics for one PPM")
    p.add_argument("--image", required=True)

    c = sub.add_parser("check", help="check one capture or a scene directory")
    c.add_argument("--kind", choices=("menu", "race", "scene-dir"), required=True)
    c.add_argument("--image")
    c.add_argument("--dir")
    c.add_argument("--frame", type=int, default=6000)
    c.add_argument("--scenes", default="1-12")
    c.add_argument("--min-distinct", type=float, default=8.0)
    c.add_argument("--baseline")
    c.add_argument("--baseline-tolerance", type=float, default=40.0)
    c.add_argument("--record-baseline")

    args = ap.parse_args(argv)
    if args.command == "probe":
        print_metrics(metrics(args.image))
        return 0
    if args.kind == "scene-dir":
        if not args.dir:
            ap.error("--dir is required for scene-dir")
        return check_scene_dir(args)
    if not args.image:
        ap.error("--image is required")
    m = metrics(args.image)
    print_metrics(m)
    why = check_common(m, args.kind)
    if why:
        print("FAIL")
        for f in why:
            print("  - " + f)
        return 1
    print("PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv[1:]))
