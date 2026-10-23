# RE Lab — setup record

The static-analysis lab for the recomp project (tracks T2/T4). REA's supported
Android/JADX and Ghidra ARM workflows need Linux, so the lab runs in **WSL2**.

## Host layout

| Piece | Value |
| --- | --- |
| WSL distro | `Ubuntu-24.04` (WSL 3.0.1) |
| Linux user | `baz` (sudo, NOPASSWD) — provisioning script: `scripts/provision_wsl.sh` |
| JDK | OpenJDK 21 (`/usr/lib/jvm/java-21-openjdk-amd64`) |
| Node | 22.x (NodeSource) + `rea-agents` installed globally |
| Ghidra | 12.1.4 PUBLIC → `/opt/tools/ghidra` |
| JADX MCP jar | `jadx-headless-mcp-0.7.1-all.jar` → `/opt/rea/` |
| Env profile | `/etc/profile.d/rea-lab.sh` exports `JAVA_HOME`, `GHIDRA_INSTALL_DIR`, `REA_JADX_MCP_JAR` |

## Path mapping

- Windows project: `C:\Users\Baz\RetroAndroidRepair\Asphalt 5`
- WSL view: `/mnt/c/Users/Baz/RetroAndroidRepair/Asphalt 5`

## OpenCode integration

`~/.config/opencode/opencode.json` registers MCP server `rea`:

```jsonc
"command": ["wsl.exe", "-d", "Ubuntu-24.04", "-u", "baz", "--", "bash", "-lc", "exec rea mcp"]
```

Restart OpenCode to load it; tools appear as `rea_*` (Code Mode group `tools.rea`).
For this first session we drive REA through its CLI instead.

## CLI recipes

From Windows (PowerShell):

```powershell
wsl.exe -d Ubuntu-24.04 -u baz -- bash -lc "rea doctor --json"
wsl.exe -d Ubuntu-24.04 -u baz -- bash -lc "rea analyze '/mnt/c/Users/Baz/RetroAndroidRepair/Asphalt 5/analysis/apk/lib/armeabi/libasphalt5.so' --provider ghidra --snapshot '/mnt/c/Users/Baz/RetroAndroidRepair/Asphalt 5/analysis/rea/libasphalt5.rea.json' --json"
wsl.exe -d Ubuntu-24.04 -u baz -- bash -lc "rea trace '<target>' 'package_general.bar_' --provider ghidra --json"
```

Snapshot = local evidence cache (exact repeat queries reuse it).
Heads-up: distinct queries start a fresh Ghidra import; group questions per run.

## Notes

- Windows-native REA cannot analyze ARM ELF or APK (Windows Ghidra P0 is x86/x64
  PE read-only; Android provider is Linux/macOS-only). Always use the WSL side.
- Ghidra import of `libasphalt5.so` ~2.4 MB → expect a few minutes on first run.
