:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.32.2\Targets\Android\build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0Dripdoctors\app\src\main"
set ANT_DIR=C:\Users\rodriguez\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_101
set SUPPORT_JAR="C:/Users/rodriguez/AppData/Local/Fusetools/Fuse/Android/AndroidSDK\extras\android\support\v4\android-support-v4.jar"

echo ## 1/2: libDripdoctors.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
if exist %SUPPORT_JAR%  (
   "C:\Program Files\Fuse\uno.exe" cp %SUPPORT_JAR% libs\android-support-v4.jar || goto ERROR
) else (
    echo ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build
    echo ERROR: expected jar at %SUPPORT_JAR%
    goto ERROR
)

echo.
echo ## 2/2: Dripdoctors.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
"C:\Program Files\Fuse\uno.exe" cp Dripdoctors/app/src/main/bin/Dripdoctors-debug.apk Dripdoctors.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
