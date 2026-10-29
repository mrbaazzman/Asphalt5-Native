#!/usr/bin/env python3
"""Build a labelled contact sheet from scene_coverage.ps1 PPM captures.

Usage:
    python tools/scene_contact_sheet.py work/scene-coverage work/scene-coverage/contact.png 6000
"""
import glob
import os
import re
import sys

from PIL import Image, ImageDraw

if len(sys.argv) < 3:
    raise SystemExit("usage: scene_contact_sheet.py <capture-dir> <out.png> [frame]")

capture_dir, out_path = sys.argv[1], sys.argv[2]
frame = sys.argv[3] if len(sys.argv) > 3 else None
pattern = os.path.join(capture_dir, "scene*_*.ppm")
files = []
for path in glob.glob(pattern):
    name = os.path.basename(path)
    m = re.match(r"scene(\d+)_(\d+)\.ppm$", name)
    if not m:
        continue
    if frame is not None and m.group(2) != frame:
        continue
    files.append((int(m.group(1)), path))
files.sort()
if not files:
    raise SystemExit("no scene captures found in " + capture_dir)

cols = 3
tw, th = 427, 240
rows = (len(files) + cols - 1) // cols
sheet = Image.new("RGB", (cols * tw, rows * th), (20, 20, 20))
draw = ImageDraw.Draw(sheet)
for i, (scene, path) in enumerate(files):
    image = Image.open(path).convert("RGB").resize((tw, th))
    x = (i % cols) * tw
    y = (i // cols) * th
    sheet.paste(image, (x, y))
    draw.rectangle([x, y, x + tw - 1, y + th - 1], outline=(255, 255, 255))
    draw.text((x + 8, y + 8), "scene %d" % scene, fill=(255, 255, 0))
sheet.save(out_path)
print("contact sheet: %s (%d scenes)" % (out_path, len(files)))
