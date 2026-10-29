#!/usr/bin/env pwsh
# Run every playable race scene through Quick Race, capture a frame and check
# for crashes.  This is a developer/regression tool; it does not rebuild the
# installer and does not distribute any game data.
#
# Usage:
#   powershell -ExecutionPolicy Bypass -File tools/scene_coverage.ps1
#   ... -Scenes 1,2,3 -Seconds 18
#   ... -NoContactSheet

param(
    [string]$Exe = "build/asphalt5.exe",
    [string]$OutDir = "work/scene-coverage",
    [int]$Seconds = 26,
    [int]$CaptureFrame = 6000,
    [int[]]$Scenes = 1..12,
    [switch]$NoContactSheet
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $exePath = (Resolve-Path $Exe).Path
    New-Item -ItemType Directory -Force $OutDir | Out-Null
    $outPath = (Resolve-Path $OutDir).Path
    $vars = @(
        'RECOMP_FORCE_SPLASH', 'RECOMP_OFFSCREEN', 'RECOMP_NO_VSYNC',
        'RECOMP_FORCE_SCENE', 'RECOMP_TAP', 'RECOMP_INPUT_LOG',
        'RECOMP_CAPTURE', 'RECOMP_CAPTURE_FRAMES'
    )
    $saved = @{}
    foreach ($v in $vars) {
        $saved[$v] = [Environment]::GetEnvironmentVariable($v, 'Process')
    }

    $results = @()
    try {
        foreach ($n in $Scenes) {
            $capture = Join-Path $outPath "scene${n}_%d.ppm"
            $captureFile = Join-Path $outPath "scene${n}_${CaptureFrame}.ppm"
            $stdout = Join-Path $outPath "scene$n.out"
            $stderr = Join-Path $outPath "scene$n.err"
            Remove-Item $captureFile, $stdout, $stderr -ErrorAction SilentlyContinue

            $env:RECOMP_FORCE_SPLASH = '1'
            $env:RECOMP_OFFSCREEN = '1'
            $env:RECOMP_NO_VSYNC = '1'
            $env:RECOMP_FORCE_SCENE = "$n"
            $env:RECOMP_TAP = '368,438,600;427,435,2500;427,435,3500;427,435,4500;427,435,5500'
            $env:RECOMP_INPUT_LOG = '1'
            $env:RECOMP_CAPTURE = $capture
            $env:RECOMP_CAPTURE_FRAMES = "$CaptureFrame"

            $p = Start-Process -FilePath $exePath -ArgumentList 'boot','-q' `
                 -WorkingDirectory $root -PassThru `
                 -RedirectStandardOutput $stdout -RedirectStandardError $stderr
            Start-Sleep -Seconds $Seconds
            if (-not $p.HasExited) {
                Stop-Process -Id $p.Id -Force
                $p.WaitForExit()
            }

            $race = (Select-String -Path $stderr -Pattern '\[input\] race entered' -ErrorAction SilentlyContinue | Measure-Object).Count
            $fatal = (Select-String -Path $stderr -Pattern 'FATAL|\[crash\]' -ErrorAction SilentlyContinue | Measure-Object).Count
            $captured = Test-Path $captureFile
            $last = (Select-String -Path $stderr -Pattern '\[boot\] frame' -ErrorAction SilentlyContinue | Select-Object -Last 1).Line
            $ok = ($race -gt 0) -and $captured -and ($fatal -eq 0)
            $results += [pscustomobject]@{
                Scene = $n; Race = $race; Capture = $captured; Fatal = $fatal; OK = $ok; Last = $last
            }
            Write-Host ("scene {0,2}: race={1} capture={2} fatal={3} {4}" -f
                        $n, $race, $captured, $fatal, $(if ($ok) { 'OK' } else { 'FAIL' }))
        }
    }
    finally {
        foreach ($v in $vars) {
            [Environment]::SetEnvironmentVariable($v, $saved[$v], 'Process')
        }
    }

    Write-Host ''
    $results | Format-Table Scene, Race, Capture, Fatal, OK, Last -AutoSize

    $python = Get-Command python -ErrorAction SilentlyContinue
    $probeOk = $true
    if ($python) {
        & $python.Source tools/pixel_probe.py check --kind scene-dir `
            --dir $outPath --frame $CaptureFrame --scenes ($Scenes -join ',')
        if ($LASTEXITCODE -ne 0) {
            $probeOk = $false
            Write-Warning "scene pixel probes failed"
        }
    }
    else {
        Write-Warning "python not found; skipping scene pixel probes"
    }

    if (-not $NoContactSheet -and $results.Count -gt 0 -and $python) {
        & $python.Source tools/scene_contact_sheet.py $outPath `
            (Join-Path $outPath 'contact.png') $CaptureFrame
        if ($LASTEXITCODE -ne 0) {
            Write-Warning "contact sheet generation failed (Pillow installed?)"
        }
    }

    if (($results | Where-Object { -not $_.OK }).Count -gt 0 -or -not $probeOk) {
        exit 1
    }
}
finally {
    Pop-Location
}
