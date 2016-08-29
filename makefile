DXSDKCFLAG = /I"D:/dxsdk/Include"
DXLIBPATH = /LIBPATH:"D:/dxsdk/Lib/x86"
SDLCFLAG = /I"D:\SDL2-2.0.4\include"
SDLLIBPATH = /LIBPATH:"D:\SDL2-2.0.4\lib\x86"
LIBS = SDL2.lib SDL2main.lib d3d9.lib
SRC = *.cpp
GameEngine:$(SRC)
    cl /EHsc $(SRC) $(SDLCFLAG) $(LIBS) $(DXSDKCFLAG) /link $(SDLLIBPATH) $(DXLIBPATH)  /out:GameEngine.exe
    del *.obj

clean:
    del *.obj
    del *.exe