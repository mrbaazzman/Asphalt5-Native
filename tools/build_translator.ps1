#!/usr/bin/env pwsh
# Build the standalone ARM -> C translator (PyInstaller one-file exe).
# The installer bundles this so end users do not need Python.

param(
    [string]$Out = "build/armrecomp.exe"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $src = Join-Path $root 'tools/armrecomp.py'
    if (-not (Test-Path $src)) { throw "translator source not found: $src" }

    & python -m PyInstaller --noconfirm --onefile --clean `
        --name armrecomp `
        --distpath (Join-Path $root 'build/pyi-dist') `
        --workpath (Join-Path $root 'build/pyi-work') `
        --specpath (Join-Path $root 'build/pyi-spec') `
        $src
    if ($LASTEXITCODE -ne 0) { throw "PyInstaller failed" }

    $outPath = Join-Path $root $Out
    New-Item -ItemType Directory -Force (Split-Path -Parent $outPath) | Out-Null
    Copy-Item (Join-Path $root 'build/pyi-dist/armrecomp.exe') $outPath -Force
    Write-Host ("translator: {0:N1} MB -> {1}" -f ((Get-Item $outPath).Length / 1MB), $outPath)
}
finally {
    Pop-Location
}
