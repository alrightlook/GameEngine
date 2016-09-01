DXSDKCFLAG = /I"D:/dxsdk/Include"
DXLIBPATH = /LIBPATH:"D:/dxsdk/Lib/x86"
SDLCFLAG = /I"D:\SDL2-2.0.4\include"
SDLLIBPATH = /LIBPATH:"D:\SDL2-2.0.4\lib\x86"
GLEWCFLAG = /I"D:\glew-2.0.0-win32\glew-2.0.0\include"
GLEWLIBPATH = /LIBPATH:"D:\glew-2.0.0-win32\glew-2.0.0\lib\Release\Win32"
LIBS = SDL2.lib SDL2main.lib d3d9.lib glew32.lib opengl32.lib
SRC = *.cpp *.c

GameStudio:$(SRC)
    cl $(SDLCFLAG) $(GLEWCFLAG) /EHsc $(SRC) /link $(SDLLIBPATH) $(GLEWLIBPATH) $(LIBS) /out:GameStudio.exe /SUBSYSTEM:CONSOLE
    del *.obj

clean:
    del *.obj
    del *.exe
    del *.dll
    del *.lib
    del *.exp