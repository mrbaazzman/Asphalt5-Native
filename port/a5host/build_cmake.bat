@echo off
rem Build the host.
rem   build_cmake.bat            -> dev build  (-O1, faster compile)
rem   build_cmake.bat release    -> shipping build (-O2)
rem   build_cmake.bat fast       -> same as no argument
rem
rem a5host.c is one huge translation unit (it includes autogens.inc), so its
rem compile is inherently single-threaded; --parallel still uses every core
rem for the other source files, and ccache (if installed) caches both
rem optimization variants so switching between them is nearly free.
setlocal
cd /d "%~dp0"

set FAST=ON
if /i "%~1"=="release" set FAST=OFF
if /i "%~1"=="fast"    set FAST=ON

cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DA5_FASTBUILD=%FAST% || exit /b 1
if not defined NUMBER_OF_PROCESSORS set NUMBER_OF_PROCESSORS=4
cmake --build build --parallel %NUMBER_OF_PROCESSORS% || exit /b 1
echo Built %~dp0a5host.exe (%FAST% fast mode)
