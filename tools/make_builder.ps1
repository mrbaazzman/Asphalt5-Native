#!/usr/bin/env pwsh
# Assemble the installer's build payload:
#   build/builder/toolchain/     minimal MinGW-w64
#   build/builder/src/           our runtime sources
#   build/builder/armrecomp.exe  ARM -> C translator
#   build/builder.zip
#
# Usage: powershell -ExecutionPolicy Bypass -File tools/make_builder.ps1

param(
    [switch]$SkipToolchain,
    [switch]$SkipTranslator,
    [string]$Out = "build"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $outDir = Join-Path $root $Out
    $toolchain = Join-Path $outDir 'toolchain'
    $translator = Join-Path $outDir 'armrecomp.exe'

    if (-not $SkipToolchain) {
        & (Join-Path $PSScriptRoot 'build_toolchain.ps1') -Out (Join-Path $Out 'toolchain')
        if ($LASTEXITCODE -ne 0) { throw "toolchain build failed" }
    }
    if (-not (Test-Path $toolchain)) { throw "toolchain missing; run without -SkipToolchain" }

    if (-not $SkipTranslator) {
        & (Join-Path $PSScriptRoot 'build_translator.ps1') -Out (Join-Path $Out 'armrecomp.exe')
        if ($LASTEXITCODE -ne 0) { throw "translator build failed" }
    }
    if (-not (Test-Path $translator)) { throw "armrecomp.exe missing; run without -SkipTranslator" }

    $stage = Join-Path $outDir 'builder'
    if (Test-Path $stage) { Remove-Item $stage -Recurse -Force }
    New-Item -ItemType Directory -Force $stage | Out-Null

    Copy-Item $toolchain (Join-Path $stage 'toolchain') -Recurse -Force
    Copy-Item $translator (Join-Path $stage 'armrecomp.exe') -Force
    Copy-Item (Join-Path $root 'src') (Join-Path $stage 'src') -Recurse -Force

    $zipPath = Join-Path $outDir 'builder.zip'
    if (Test-Path $zipPath) { Remove-Item $zipPath -Force }
    $tar = Get-Command tar -ErrorAction SilentlyContinue
    if ($tar) {
        Push-Location $stage
        try { & tar -a -c -f $zipPath * } finally { Pop-Location }
    } else {
        Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zipPath -Force
    }
    if (-not (Test-Path $zipPath)) { throw "builder.zip was not created" }

    Write-Host ("builder.zip: {0:N1} MB" -f ((Get-Item $zipPath).Length / 1MB))
}
finally {
    Pop-Location
}
