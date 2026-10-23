@echo off
setlocal
cd /d "%~dp0"
python build_from_apk.py %*
if errorlevel 1 pause
endlocal
