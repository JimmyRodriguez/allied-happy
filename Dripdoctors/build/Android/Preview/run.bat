:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Targets\Android\run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files\Fuse\uno.exe" open -a"Android Studio" "%~dp0Dripdoctors"
    exit /b %ERRORLEVEL%
)

"C:\Program Files\Fuse\uno.exe" launch-apk "%~dp0Dripdoctors.apk" ^
    --package=Fuse.Preview ^
    --activity=Dripdoctors ^
    --sym-dir="%~dp0Dripdoctors\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
