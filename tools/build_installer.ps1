#!/usr/bin/env pwsh
# Build the WinForms installer with the .NET Framework compiler that ships
# with Windows.  No Visual Studio / build tools are needed by end users; this
# script is only for producing dist/Asphalt5Setup.exe.

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

$resArgs = @()
$builderZip = Join-Path $root 'build/builder.zip'
if (Test-Path $builderZip) {
    $resArgs += "/resource:$builderZip,builder.zip"
} else {
    Write-Warning "build/builder.zip not found: the installer will not be self-contained."
}
$readme = Join-Path $root 'installer/README.txt'
if (Test-Path $readme) { $resArgs += "/resource:$readme,readme.txt" }

& $csc /nologo /target:winexe /platform:anycpu /optimize+ /out:$outPath `
    /r:System.Windows.Forms.dll /r:System.Drawing.dll `
    /r:System.IO.Compression.dll /r:System.IO.Compression.FileSystem.dll `
    $resArgs $csFiles

if ($LASTEXITCODE -ne 0) { throw "installer build failed" }
Write-Host "built $outPath"
