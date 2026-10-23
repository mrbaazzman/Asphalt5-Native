@echo off
setlocal
cd /d "%~dp0"
if not defined NUMBER_OF_PROCESSORS set NUMBER_OF_PROCESSORS=4
cmake -S . -B build_gui -G Ninja -DCMAKE_BUILD_TYPE=Release -DA5_FASTBUILD=ON -DA5_GUI=ON || exit /b 1
cmake --build build_gui --parallel %NUMBER_OF_PROCESSORS% || exit /b 1
echo Built %CD%\a5host_gui.exe (GUI subsystem, no console)
endlocal
