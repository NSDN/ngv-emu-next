@echo off

if exist .\Output\ (
    rmdir /S /Q .\Output\
)
mkdir .\Output\

echo Compiling binary...
g++ -std=c++11 -static-libstdc++ -static-libgcc -g -B ./ -DNGV_SYS_VERSION="""%date:~2,2%%date:~5,2%%date:~8,2%""" ./Drivers/NGV/*.c ./Drivers/NSASM/*.cpp ./Drivers/NSGDX/*.cpp *.cpp -LDrivers/SDL2/Lib -LDrivers/SDL2_mixer/lib -lm -lpthread -lmingw32 -lSDL2_mixer -lSDL2main -lSDL2 -o ./Output/ngv-emu-next
echo Done

echo Copying library...
copy /Y .\Drivers\SDL2\SDL2.dll .\Output\SDL2.dll
xcopy /Y /E /Q /I .\Drivers\SDL2_mixer\bin Output

echo Copying assets...
xcopy /Y /E /Q /I Assets Output\Assets

pause
