#!/usr/bin/env pwsh
# Assemble a minimal MinGW-w64 toolchain (gcc + cc1 + as/ld + headers + libs)
# from the GCC on PATH.  The result is what the installer bundles so end users
# can build the game without installing any tools.
#
# Usage: powershell -ExecutionPolicy Bypass -File tools/build_toolchain.ps1

param(
    [string]$Out = "build/toolchain"
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Push-Location $root
try {
    $gcc = (Get-Command gcc -ErrorAction Stop).Source
    $mingw = Split-Path (Split-Path $gcc)
    $triple = (& $gcc -dumpmachine).Trim()
    $ver = (& $gcc -dumpversion).Trim()
    if (-not $triple -or -not $ver) { throw "could not query gcc target/version" }

    $dest = Join-Path $root $Out
    if (Test-Path $dest) { Remove-Item $dest -Recurse -Force }
    foreach ($d in @(
        "bin",
        "libexec/gcc/$triple/$ver",
        "lib/gcc/$triple/$ver",
        "$triple/lib"
    )) { New-Item -ItemType Directory -Force (Join-Path $dest $d) | Out-Null }

    $binFiles = @(
        'gcc.exe', 'as.exe', 'ld.exe', 'windres.exe',
        'libiconv-2.dll', 'libwinpthread-1.dll', 'libintl-8.dll',
        'zlib1.dll', 'libzstd.dll', 'libgmp-10.dll', 'libisl-23.dll',
        'libmpc-3.dll', 'libmpfr-6.dll', 'libgcc_s_seh-1.dll'
    )
    foreach ($f in $binFiles) {
        $src = Join-Path $mingw "bin/$f"
        if (Test-Path $src) { Copy-Item $src (Join-Path $dest 'bin') -Force }
    }

    $execDir = Join-Path $mingw "libexec/gcc/$triple/$ver"
    foreach ($f in @('cc1.exe', 'collect2.exe', 'liblto_plugin.dll')) {
        $src = Join-Path $execDir $f
        if (-not (Test-Path $src)) {
            if ($f -eq 'cc1.exe') { throw "cc1.exe not found in $execDir" }
            continue
        }
        Copy-Item $src (Join-Path $dest "libexec/gcc/$triple/$ver") -Force
    }

    $gccLib = Join-Path $mingw "lib/gcc/$triple/$ver"
    foreach ($f in @('crtbegin.o', 'crtend.o', 'libgcc.a', 'libgcc_eh.a', 'libgcc_s.a')) {
        $src = Join-Path $gccLib $f
        if (Test-Path $src) { Copy-Item $src (Join-Path $dest "lib/gcc/$triple/$ver") -Force }
    }
    Copy-Item (Join-Path $gccLib 'include') (Join-Path $dest "lib/gcc/$triple/$ver/include") -Recurse -Force

    $sysLib = Join-Path $mingw "$triple/lib"
    $libs = @(
        'crt1.o', 'crt2.o',
        'libmingw32.a', 'libmingwex.a', 'libucrt.a', 'libucrtbase.a', 'libmsvcrt.a',
        'libm.a', 'libkernel32.a', 'libuser32.a', 'libgdi32.a', 'libopengl32.a', 'libwinmm.a',
        'libws2_32.a', 'libadvapi32.a', 'libshell32.a', 'libuuid.a', 'libole32.a',
        'libmfplat.a', 'libmfreadwrite.a', 'libmfuuid.a',
        'libpthread.a', 'libpthread.dll.a',
        'libwininet.a', 'libbcrypt.a', 'libcomctl32.a', 'libcomdlg32.a',
        'libcomdlg32.a', 'libmoldname.a'
    )
    foreach ($f in $libs) {
        $src = Join-Path $sysLib $f
        if (-not (Test-Path $src)) { throw "required library missing: $f" }
        Copy-Item $src (Join-Path $dest "$triple/lib") -Force
    }

    Copy-Item (Join-Path $mingw "$triple/include") (Join-Path $dest "$triple/include") -Recurse -Force

    # Keep the toolchain licence notice with the binaries.
    $lic = Join-Path $dest 'share/licenses'
    New-Item -ItemType Directory -Force $lic | Out-Null
    foreach ($f in @('installer/licenses/GPL-3.0.txt', 'installer/TOOLCHAIN-NOTICE.txt')) {
        $srcLic = Join-Path $root $f
        if (Test-Path $srcLic) { Copy-Item $srcLic $lic -Force }
    }

    $bytes = (Get-ChildItem $dest -Recurse -File | Measure-Object Length -Sum).Sum
    Write-Host ("toolchain: {0} files, {1:N1} MB -> {2}" -f
        (Get-ChildItem $dest -Recurse -File).Count, ($bytes / 1MB), $dest)
}
finally {
    Pop-Location
}
