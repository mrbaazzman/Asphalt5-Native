#!/usr/bin/env pwsh
# Pre-compile the stripped Windows host+recompiler engine binaries (without
# libasphalt5.so, APK resources, or game data) so the end-user installer needs
# no MinGW toolchain, Python runtime, or PyInstaller payload.
#
# Outputs:
#   build/engines/Asphalt5_324.exe
#   build/engines/Asphalt5_337.exe  (if 3.3.7 APK found or -Apk337 provided)
#   build/engines/Asphalt5_341.exe  (if 3.4.1 APK found or -Apk341 provided)
#   build/engines.zip

param(
    [string]$Apk337 = "",
    [string]$Apk341 = "",
    [switch]$Only324,
    [string]$Out = "build"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $gcc = (Get-Command gcc -ErrorAction Stop).Source
    $windres = (Get-Command windres -ErrorAction SilentlyContinue)
    $python = (Get-Command python -ErrorAction Stop).Source
    Add-Type -AssemblyName System.IO.Compression.FileSystem

    $outDir = Join-Path $root $Out
    $engDir = Join-Path $outDir 'engines'
    $workDir = Join-Path $outDir 'eng_work'
    if (Test-Path $engDir) { Remove-Item $engDir -Recurse -Force }
    if (Test-Path $workDir) { Remove-Item $workDir -Recurse -Force }
    New-Item -ItemType Directory -Force $engDir | Out-Null
    New-Item -ItemType Directory -Force $workDir | Out-Null

    $engRes = ""
    $rcFile = Join-Path $root 'installer/engine.rc'
    if ($windres -and (Test-Path $rcFile)) {
        $engRes = Join-Path $workDir 'engine.res'
        & $windres.Source $rcFile -O coff -o $engRes
        if ($LASTEXITCODE -ne 0) { $engRes = "" }
    }

    function Find-ApkBySha([string]$entry, [string]$expectedSha) {
        $searchDirs = @((Join-Path $root 'original'), $root, (Split-Path -Parent $root))
        foreach ($d in $searchDirs) {
            if (-not (Test-Path $d)) { continue }
            foreach ($f in (Get-ChildItem $d -Filter '*.apk' -File)) {
                try {
                    $z = [IO.Compression.ZipFile]::OpenRead($f.FullName)
                    try {
                        $e = $z.GetEntry($entry)
                        if ($null -ne $e) {
                            $s = $e.Open()
                            try {
                                $sha = [Security.Cryptography.SHA256]::Create()
                                try {
                                    $hex = ([BitConverter]::ToString($sha.ComputeHash($s)) -replace '-', '').ToLowerInvariant()
                                    if ($hex -eq $expectedSha) { return $f.FullName }
                                } finally { $sha.Dispose() }
                            } finally { $s.Dispose() }
                        }
                    } finally { $z.Dispose() }
                } catch { }
            }
        }
        return ""
    }

    function Compile-Engine([string]$ver, [string]$genDir, [string]$outExe, [bool]$usesInstaller) {
        $srcDir = Join-Path $root 'src'
        $objDir = Join-Path $workDir "obj_$ver"
        New-Item -ItemType Directory -Force $objDir | Out-Null

        $cFiles = New-Object 'System.Collections.Generic.List[string]'
        foreach ($f in Get-ChildItem $srcDir -Filter '*.c') { $cFiles.Add($f.FullName) }
        foreach ($sub in @('core', 'platform', 'gl')) {
            foreach ($f in Get-ChildItem (Join-Path $srcDir $sub) -Filter '*.c') { $cFiles.Add($f.FullName) }
        }
        if ($usesInstaller) {
            foreach ($f in Get-ChildItem (Join-Path $srcDir 'third_party/miniz') -Filter '*.c') { $cFiles.Add($f.FullName) }
        }
        foreach ($f in Get-ChildItem $genDir -Filter '*.c') { $cFiles.Add($f.FullName) }

        $flags = @(
            '-c', '-O1', '-s', '-fno-strict-aliasing', '-fwrapv', '-fno-use-linker-plugin',
            '-DNDEBUG', '-DRECOMP_GUI', '-D_CRT_SECURE_NO_WARNINGS'
        )
        if ($ver -eq '3.3.7') { $flags += '-DRECOMP_TARGET_337' }
        if ($ver -eq '3.4.1') { $flags += '-DRECOMP_TARGET_341' }
        $flags += "-I$srcDir"
        $flags += "-I$(Join-Path $srcDir 'core')"
        $flags += "-I$(Join-Path $srcDir 'gl')"
        $flags += "-I$genDir"

        Write-Host "[$ver] Compiling $($cFiles.Count) C units..."
        $jobs = New-Object 'System.Collections.Generic.List[object]'
        $objFiles = New-Object 'System.Collections.Generic.List[string]'
        $maxWorkers = [Math]::Max(1, [Math]::Min([Environment]::ProcessorCount, 8))

        $idx = 0
        $active = New-Object 'System.Collections.Generic.List[System.Diagnostics.Process]'
        while ($idx -lt $cFiles.Count -or $active.Count -gt 0) {
            while ($active.Count -lt $maxWorkers -and $idx -lt $cFiles.Count) {
                $cf = $cFiles[$idx]
                $obj = Join-Path $objDir ("u_{0:D4}.o" -f $idx)
                $objFiles.Add($obj)
                $idx++

                $psi = New-Object System.Diagnostics.ProcessStartInfo
                $psi.FileName = $gcc
                $psi.UseShellExecute = $false
                $psi.CreateNoWindow = $true
                $psi.RedirectStandardError = $true
                $psi.RedirectStandardOutput = $true
                $argStr = ($flags | ForEach-Object { if ($_ -match '\s') { '"' + $_ + '"' } else { $_ } }) -join ' '
                $psi.Arguments = "$argStr `"$cf`" -o `"$obj`""
                $p = [System.Diagnostics.Process]::Start($psi)
                $active.Add($p)
            }
            Start-Sleep -Milliseconds 30
            for ($i = $active.Count - 1; $i -ge 0; $i--) {
                if ($active[$i].HasExited) {
                    $p = $active[$i]
                    $err = $p.StandardError.ReadToEnd()
                    $rc = $p.ExitCode
                    $p.Dispose()
                    $active.RemoveAt($i)
                    if ($rc -ne 0) { throw "gcc failed ($rc): $err" }
                }
            }
        }

        $rsp = Join-Path $workDir "link_$ver.rsp"
        ($objFiles | ForEach-Object { '"' + ($_ -replace '\\', '/') + '"' }) | Set-Content $rsp -Encoding ASCII

        $linkArgs = @("@$rsp")
        if ($engRes -and (Test-Path $engRes)) { $linkArgs += $engRes }
        $linkArgs += @(
            '-o', $outExe, '-s', '-fno-use-linker-plugin',
            '-lopengl32', '-lgdi32', '-luser32', '-lwinmm', '-lws2_32', '-lm',
            '-ldinput8', '-ldxguid', '-lmfreadwrite', '-lmfplat', '-lmfuuid', '-lole32', '-luuid'
        )
        if ($usesInstaller) {
            $linkArgs += @('-lwininet', '-lbcrypt', '-lcomctl32', '-lcomdlg32')
        }
        $linkArgs += @('-static', '-mwindows')

        & $gcc @linkArgs
        if ($LASTEXITCODE -ne 0 -or -not (Test-Path $outExe)) {
            throw "link failed for $ver"
        }
        Write-Host ("[$ver] Built {0} ({1:N1} MB)" -f (Split-Path -Leaf $outExe), ((Get-Item $outExe).Length / 1MB))
    }

    # 1. 3.2.4 (always available from repo's generated/)
    $gen324 = Join-Path $workDir 'gen_324'
    Copy-Item (Join-Path $root 'generated') $gen324 -Recurse -Force
    & $python (Join-Path $root 'tools/apply_runtime_patches.py') --version 3.2.4 $gen324
    if ($LASTEXITCODE -ne 0) { throw "runtime patch failed for 3.2.4" }
    Compile-Engine '3.2.4' $gen324 (Join-Path $engDir 'Asphalt5_324.exe') $false

    if (-not $Only324) {
        $sha337 = 'c4c4a804ccbc827f709c09b998a19b56984f02718f438da2138858fbbfdc5d5d'
        $sha341 = '2966c986c73e71e7d2fa791a2f3a371749c7db183d7c40ff6641a57f01b78206'
        if (-not $Apk337) { $Apk337 = Find-ApkBySha 'lib/armeabi/libasphalt5.so' $sha337 }
        if (-not $Apk341) { $Apk341 = Find-ApkBySha 'lib/armeabi/libasphalt5.so' $sha341 }

        foreach ($item in @(
            @{ Ver = '3.3.7'; Apk = $Apk337; Out = 'Asphalt5_337.exe' },
            @{ Ver = '3.4.1'; Apk = $Apk341; Out = 'Asphalt5_341.exe' }
        )) {
            if (-not $item.Apk -or -not (Test-Path $item.Apk)) {
                Write-Warning "$($item.Ver) APK not found; skipping $($item.Out)"
                continue
            }
            $soOut = Join-Path $workDir "lib_$($item.Ver).so"
            $genOut = Join-Path $workDir "gen_$($item.Ver)"
            $z = [IO.Compression.ZipFile]::OpenRead($item.Apk)
            try {
                $e = $z.GetEntry('lib/armeabi/libasphalt5.so')
                [IO.Compression.ZipFileExtensions]::ExtractToFile($e, $soOut, $true)
            } finally { $z.Dispose() }

            Write-Host "[$($item.Ver)] Translating $($item.Apk)..."
            & $python (Join-Path $root 'tools/armrecomp.py') --so $soOut --out $genOut
            if ($LASTEXITCODE -ne 0) { throw "armrecomp failed for $($item.Ver)" }
            & $python (Join-Path $root 'tools/apply_runtime_patches.py') --version $item.Ver $genOut
            if ($LASTEXITCODE -ne 0) { throw "runtime patch failed for $($item.Ver)" }
            Compile-Engine $item.Ver $genOut (Join-Path $engDir $item.Out) $true
        }
    }

    $zipPath = Join-Path $outDir 'engines.zip'
    if (Test-Path $zipPath) { Remove-Item $zipPath -Force }
    [IO.Compression.ZipFile]::CreateFromDirectory($engDir, $zipPath, [IO.Compression.CompressionLevel]::NoCompression, $false)
    Remove-Item $workDir -Recurse -Force
    Write-Host ("engines.zip: {0:N1} MB" -f ((Get-Item $zipPath).Length / 1MB))
}
finally {
    Pop-Location
}
