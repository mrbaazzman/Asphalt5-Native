#!/usr/bin/env pwsh
# Assemble the end-user distribution: one self-contained installer.
#
#   dist/
#     Asphalt5Setup.exe   GUI installer with the builder embedded (~48 MB)
#
# The installer contains the translator, minimal toolchain and runtime
# sources.  It builds the game from the user's APK on their PC; no game binary
# is shipped.
#
# Usage:
#   powershell -ExecutionPolicy Bypass -File tools/make_dist.ps1
#   ... -SkipBuilder   reuse build/builder.zip
#   ... -Zip           also produce Asphalt5-Windows.zip

param(
    [switch]$SkipBuilder,
    [switch]$Zip
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    if (-not $SkipBuilder) {
        & (Join-Path $PSScriptRoot 'make_builder.ps1') -Out 'build'
        if ($LASTEXITCODE -ne 0) { throw "builder build failed" }
    }
    if (-not (Test-Path 'build/builder.zip')) {
        throw "build/builder.zip missing; run without -SkipBuilder"
    }

    # Built after the builder so it can be embedded as a resource.
    & (Join-Path $PSScriptRoot 'build_installer.ps1') -Out 'build/Asphalt5Setup.exe'
    if ($LASTEXITCODE -ne 0) { throw "installer build failed" }

    if (Test-Path dist) { Remove-Item dist -Recurse -Force }
    New-Item -ItemType Directory -Force dist | Out-Null
    Copy-Item build\Asphalt5Setup.exe dist\Asphalt5Setup.exe

    Write-Host ''
    Write-Host 'dist/ ready (single file):'
    Get-ChildItem dist -Recurse -File |
        ForEach-Object { '  {0,-38} {1,10:N0} bytes' -f $_.FullName.Substring($root.Length + 1), $_.Length }

    if ($Zip) {
        $zipPath = Join-Path $root 'Asphalt5-Windows.zip'
        if (Test-Path $zipPath) { Remove-Item $zipPath -Force }
        Compress-Archive -Path 'dist\Asphalt5Setup.exe' -DestinationPath $zipPath -Force
        Write-Host ''
        Write-Host ("packaged {0} ({1:N0} bytes)" -f $zipPath, (Get-Item $zipPath).Length)
    }
}
finally {
    Pop-Location
}
