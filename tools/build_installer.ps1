#!/usr/bin/env pwsh
# Build the WinForms installer with the .NET Framework compiler that ships
# with Windows.  Embeds only the pre-built engine binaries (build/engines.zip)
# and README.txt; no MinGW toolchain, Python runtime, PyInstaller, or XOR
# obfuscation is used.
#
# Usage: powershell -ExecutionPolicy Bypass -File tools/build_installer.ps1

param(
    [string]$Out = "build/Asphalt5Setup.exe"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$src = Join-Path $root 'installer/Asphalt5Setup.cs'
if (-not (Test-Path $src)) { throw "installer source not found: $src" }
$csFiles = @(Get-ChildItem (Join-Path $root 'installer') -Filter *.cs | ForEach-Object { $_.FullName })
if ($csFiles.Count -eq 0) { throw "no installer sources found" }

$csc = Join-Path $env:WINDIR 'Microsoft.NET\Framework64\v4.0.30319\csc.exe'
if (-not (Test-Path $csc)) {
    $csc = Join-Path $env:WINDIR 'Microsoft.NET\Framework\v4.0.30319\csc.exe'
}
if (-not (Test-Path $csc)) {
    throw "csc.exe (.NET Framework 4.x) not found; it is part of Windows."
}

$outPath = Join-Path $root $Out
New-Item -ItemType Directory -Force (Split-Path -Parent $outPath) | Out-Null
if (Test-Path $outPath) { Remove-Item $outPath -Force }

$enginesZip = Join-Path $root 'build/engines.zip'
if (-not (Test-Path $enginesZip)) {
    throw "build/engines.zip not found; run tools/build_engines.ps1 first."
}

$resArgs = @("/resource:$enginesZip,engines.zip")
$readme = Join-Path $root 'installer/README.txt'
if (Test-Path $readme) { $resArgs += "/resource:$readme,readme.txt" }

$manifest = Join-Path $root 'installer/app.manifest'
$manifestArgs = @()
if (Test-Path $manifest) { $manifestArgs += "/win32manifest:$manifest" }

$icon = Join-Path $root 'installer/asphalt5.ico'
$iconArgs = @()
if (Test-Path $icon) { $iconArgs += "/win32icon:$icon" }

& $csc /nologo /target:winexe /platform:anycpu /optimize+ /out:$outPath `
    /r:System.Windows.Forms.dll /r:System.Drawing.dll `
    /r:System.IO.Compression.dll /r:System.IO.Compression.FileSystem.dll `
    $manifestArgs $iconArgs $resArgs $csFiles

if ($LASTEXITCODE -ne 0) { throw "installer build failed" }
Write-Host ("built {0} ({1:N1} MB)" -f $outPath, ((Get-Item $outPath).Length / 1MB))
