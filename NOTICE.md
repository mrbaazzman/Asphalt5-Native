# NOTICE

## Not affiliated with Gameloft

Asphalt 5, Asphalt, Gameloft and related marks are trademarks or registered
trademarks of Gameloft SE or its affiliates.  This project is an unofficial,
fan-made interoperability effort.  It is not endorsed by or affiliated with
Gameloft.

## No game code or assets in this repository

This repository contains **host code, reverse-engineering tools and
documentation only**.  It does not contain the Asphalt 5 APK, the original
`libasphalt5.so`, game data packs, textures, audio, video, or generated
translations of the game's code.

You must legally own Asphalt 5 HD 3.4.1 for Android.  The builder
(`build_from_apk.py`) reads **your** APK and generates a local installation.
The resulting folder contains the game's engine image and possibly data
extracted from files you supply; do not redistribute it.

## Generated translations

`autotrans.py` emits C that corresponds to the game's ARM instructions.  That
output is a derivative work of the game engine.  It is generated locally from
the user's own binary and is not part of this repository or its releases.

## Interoperability metadata

`analysis/autogen/list.txt` (function addresses/names), `font_map.h`
(character-to-frame mapping) and `installer_resources.h` (expected data file
names/sizes) are interoperability metadata used to build and validate the
port.  All rights in the underlying game remain with their owners.  If you are
a rights holder and object to this metadata, open an issue and it will be
removed.

## Your responsibilities

Reverse-engineering, circumvention and distribution rules vary by
jurisdiction.  You are responsible for ensuring that your use of this project
complies with the laws that apply to you and with any license terms attached
to the game.  The authors provide no legal advice and no warranty.
