@echo off

echo.
echo Updating PhoneticEngine DLL...

copy /Y "..\x64\Debug\PhoneticEngine.dll" "PhoneticEngine.dll" >nul

if %errorlevel%==0 (
    echo Success!
) else (
    echo ERROR: Could not copy DLL
)

echo.