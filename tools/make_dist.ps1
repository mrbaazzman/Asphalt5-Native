#!/usr/bin/env pwsh
# Assemble the end-user distribution: one self-contained installer without
# MinGW, Python, PyInstaller, or XOR obfuscation.
#
#   dist/
#     Asphalt5Setup.exe   GUI installer (~10 MB)
#
# Usage:
#   powershell -ExecutionPolicy Bypass -File tools/make_dist.ps1
#   ... -SkipEngines   reuse build/engines.zip
#   ... -Only324       only bundle the 3.2.4 engine
#   ... -Zip           also produce dist/Asphalt5-Windows.zip

param(
    [switch]$SkipEngines,
    [switch]$Only324,
    [string]$Apk337 = "",
    [string]$Apk341 = "",
    [switch]$Zip
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not $SkipEngines) {
        $engArgs = @{ Out = 'build' }
        if ($Only324) { $engArgs['Only324'] = $true }
        if ($Apk337) { $engArgs['Apk337'] = $Apk337 }
        if ($Apk341) { $engArgs['Apk341'] = $Apk341 }
        & (Join-Path $PSScriptRoot 'build_engines.ps1') @engArgs
        if ($LASTEXITCODE -ne 0) { throw "engine build failed" }
    }
    if (-not (Test-Path 'build/engines.zip')) {
        throw "build/engines.zip missing; run without -SkipEngines"
    }

    & (Join-Path $PSScriptRoot 'build_installer.ps1') -Out 'build/Asphalt5Setup.exe'
    if ($LASTEXITCODE -ne 0) { throw "installer build failed" }

    if (Test-Path dist) { Remove-Item dist -Recurse -Force }
    New-Item -ItemType Directory -Force dist | Out-Null
    Copy-Item build\Asphalt5Setup.exe dist\Asphalt5Setup.exe

    if ($Zip) {
        $zipPath = Join-Path $root 'dist\Asphalt5-Windows.zip'
        Compress-Archive -Path 'dist\Asphalt5Setup.exe' -DestinationPath $zipPath -Force
    }

    Write-Host ''
    Write-Host 'dist/ ready:'
    Get-ChildItem dist -Recurse -File |
        ForEach-Object { '  {0,-38} {1,10:N0} bytes' -f $_.FullName.Substring($root.Length + 1), $_.Length }
}
finally {
    Pop-Location
}
