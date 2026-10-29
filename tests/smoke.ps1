#!/usr/bin/env pwsh
# Smoke test for the recompiled game.
#
#   pwsh tests/smoke.ps1            # CRC + matrix tests + menu/race captures
#   pwsh tests/smoke.ps1 -SkipVisual
#
# Visual captures require the user-supplied game data:
#   assets/GloftA5HD/...
#   original/apk/lib/armeabi-v7a/libasphalt5.so

param(
    [int]$TimeoutSeconds = 240,
    [switch]$SkipVisual
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root

function Assert-Ppm([string]$path) {
    if (-not (Test-Path $path)) { throw "missing capture: $path" }
    $fs = [IO.File]::OpenRead($path)
    $buf = New-Object byte[] 64
    $n = $fs.Read($buf, 0, 64)
    $fs.Close()
    $head = [Text.Encoding]::ASCII.GetString($buf, 0, $n)
    if (-not $head.StartsWith('P6')) { throw "not a PPM file: $path" }
    if ((Get-Item $path).Length -lt 50000) { throw "capture looks empty: $path" }
}

function Invoke-PixelProbe([string]$kind, [string]$image) {
    $python = Get-Command python -ErrorAction SilentlyContinue
    if (-not $python) {
        Write-Warning "python not found; skipping $kind pixel probe"
        return
    }
    $probe = Join-Path $root 'tools/pixel_probe.py'
    if (-not (Test-Path $probe)) { throw "pixel probe missing: $probe" }
    & $python.Source $probe check --kind $kind --image $image
    if ($LASTEXITCODE -ne 0) { throw "$kind pixel probe failed" }
}

function Run-Capture([string]$name, [int]$frame, [string]$taps, [string]$scene) {
    $capDir = Join-Path $root 'work/captures'
    $logDir = Join-Path $root 'work/logs'
    New-Item -ItemType Directory -Force $capDir | Out-Null
    New-Item -ItemType Directory -Force $logDir | Out-Null

    $out = Join-Path $capDir "$name.ppm"
    Remove-Item $out -ErrorAction SilentlyContinue

    $env:RECOMP_FORCE_SPLASH = '1'
    $env:RECOMP_OFFSCREEN = '1'
    $env:RECOMP_NO_VSYNC = '1'
    $env:RECOMP_CAPTURE = $out
    $env:RECOMP_CAPTURE_FRAME = "$frame"
    if ($scene) { $env:RECOMP_FORCE_SCENE = $scene }
    if ($taps) { $env:RECOMP_TAP = $taps }

    $err = Join-Path $logDir "$name.err"
    $p = Start-Process -FilePath $tool -ArgumentList 'boot', '-q' -PassThru `
        -RedirectStandardOutput (Join-Path $logDir "$name.out") `
        -RedirectStandardError $err

    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while ((Get-Date) -lt $deadline -and -not (Test-Path $out) -and -not $p.HasExited) {
        Start-Sleep -Milliseconds 500
    }
    # Wait for the capture writer to close the file and log completion.
    if (Test-Path $out) {
        $capDeadline = (Get-Date).AddSeconds(15)
        while ((Get-Date) -lt $capDeadline -and
               -not (Select-String -Path $err -Pattern '\[gl\] captured' -Quiet -ErrorAction SilentlyContinue)) {
            Start-Sleep -Milliseconds 200
        }
    }
    if (-not $p.HasExited) { Stop-Process -Id $p.Id -Force -ErrorAction SilentlyContinue }

    $env:RECOMP_CAPTURE = ''
    $env:RECOMP_CAPTURE_FRAME = ''
    $env:RECOMP_FORCE_SCENE = ''
    $env:RECOMP_TAP = ''
    $env:RECOMP_FORCE_SPLASH = ''
    $env:RECOMP_OFFSCREEN = ''
    $env:RECOMP_NO_VSYNC = ''

    if (-not (Test-Path $out)) { throw "capture '$name' not produced (see work/logs/$name.err)" }
    Assert-Ppm $out
    Write-Host ("  {0}: {1:N0} bytes" -f $name, (Get-Item $out).Length)
}

try {
    $tool = Join-Path $root 'build/asphalt5.exe'
    if (-not (Test-Path $tool)) {
        throw "build/asphalt5.exe not found. Build first: cmake -S . -B build -G Ninja; cmake --build build"
    }

    $logDir = Join-Path $root 'work/logs'
    New-Item -ItemType Directory -Force $logDir | Out-Null

    Write-Host '== CRC oracle =='
    $crcLog = Join-Path $logDir 'crc.log'
    $oldEap = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'   # PS 5.1 turns native stderr into an error record
    & $tool crc *> $crcLog
    $crcCode = $LASTEXITCODE
    $ErrorActionPreference = $oldEap
    Get-Content $crcLog | Write-Host
    if ($crcCode -ne 0 -or ((Get-Content $crcLog -Raw) -notmatch 'cbf43926')) {
        throw 'CRC oracle failed'
    }

    Write-Host '== CMatrix tests =='
    $mtxLog = Join-Path $logDir 'mtxtest.log'
    $ErrorActionPreference = 'Continue'
    & $tool mtxtest *> $mtxLog
    $mtxCode = $LASTEXITCODE
    $ErrorActionPreference = $oldEap
    Get-Content $mtxLog | Write-Host
    if ($mtxCode -ne 0) { throw 'mtxtest failed' }

    if ($SkipVisual) { Write-Host 'OK: headless tests passed'; return }

    $hasAssets = Test-Path (Join-Path $root 'assets/GloftA5HD')
    $hasElf = Test-Path (Join-Path $root 'original/apk/lib/armeabi-v7a/libasphalt5.so')
    if (-not ($hasAssets -and $hasElf)) {
        Write-Warning 'game data missing (assets/GloftA5HD and original/apk) - skipping visual captures'
        Write-Host 'OK: headless tests passed'
        return
    }

    Write-Host '== menu capture (frame 300) =='
    Run-Capture 'smoke_menu' 300 $null $null
    Invoke-PixelProbe 'menu' (Join-Path $root 'work/captures/smoke_menu.ppm')
    Write-Host '== race capture (scene 2, frame 13000) =='
    $taps = '368,438,600;427,435,2500;427,435,3500;427,435,4500;427,435,5500'
    Run-Capture 'smoke_race' 13000 $taps '2'
    Invoke-PixelProbe 'race' (Join-Path $root 'work/captures/smoke_race.ppm')

    Write-Host 'OK: all smoke tests passed'
}
finally {
    Pop-Location
}
