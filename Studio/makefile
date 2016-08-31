DXSDKCFLAG = /I"D:/dxsdk/Include"
DXLIBPATH = /LIBPATH:"D:/dxsdk/Lib/x86"
SDLCFLAG = /I"D:\SDL2-2.0.4\include"
SDLLIBPATH = /LIBPATH:"D:\SDL2-2.0.4\lib\x86"
LIBS = SDL2.lib SDL2main.lib d3d9.lib
SRC = *.cpp

GameStudio:$(SRC)
    cl $(SDLCFLAG) /EHsc $(SRC) /link $(SDLLIBPATH) $(LIBS) /out:GameStudio.exe /SUBSYSTEM:CONSOLE
    del *.obj

clean:
    del *.obj
    del *.exe
    del *.dll
    del *.lib
    del *.exp