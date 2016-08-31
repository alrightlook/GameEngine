DXSDKCFLAG = /I"D:/dxsdk/Include"
DXLIBPATH = /LIBPATH:"D:/dxsdk/Lib/x86"
SDLCFLAG = /I"D:\SDL2-2.0.4\include"
SDLLIBPATH = /LIBPATH:"D:\SDL2-2.0.4\lib\x86"
LIBS = SDL2.lib d3d9.lib
SRC = *.cpp
GameSRC = ./GameApp/*.cpp
GameEngine:$(SRC)
    cl /DLIBRARY_EXPORTS /LD /EHsc $(SRC) $(SDLCFLAG) $(LIBS) $(DXSDKCFLAG) /link $(SDLLIBPATH) $(DXLIBPATH) /out:GameEngine.dll /IMPLIB:"GameEngine.lib" 
    del *.obj

Game:$(GameSRC)
    cl /EHsc $(GameSRC) /link GameEngine.lib /out:GameApp.exe /SUBSYSTEM:CONSOLE
    del *.obj 

clean:
    del *.obj
    del *.exe
    del *.dll
    del *.lib
    del *.exp