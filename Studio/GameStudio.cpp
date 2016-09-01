#include "GameStudio.h"
#include <GL/glew.h>
#include "nanovg.h"
#define NANOVG_GL3_IMPLEMENTATION
#include "nanovg_gl.h"
#include "nanovg_gl_utils.h"

GameStudio* GameStudio::_instance = 0;

GameStudio::GameStudio()
{

}

GameStudio::~GameStudio()
{

}

void GameStudio::init() {
    SDL_Init(SDL_INIT_EVERYTHING);
    mQuit = false;
    mMainWindow = SDL_CreateWindow(
        "Jerry's GameStudio", 
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        512,
        512,
        SDL_WINDOW_OPENGL
    );

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    mGLContext = SDL_GL_CreateContext(mMainWindow);
    glewInit();
    vg = nvgCreateGL3(NVG_ANTIALIAS | NVG_STENCIL_STROKES | NVG_DEBUG);
}

void GameStudio::Run() {
    while(!mQuit) {
        SDL_PollEvent(&mSDLEvent);
        if (mSDLEvent.type == SDL_QUIT)
        {
            mQuit = true;
        }
        else {
            glClearColor ( 0.0, 0.0, 0.0, 1.0 );
            glClear ( GL_COLOR_BUFFER_BIT );
            nvgBeginFrame(vg, 512, 512, 1);
            nvgBeginPath(vg);
            nvgRect(vg, 100,100, 120,30);
            nvgFillColor(vg, nvgRGBA(255,192,0,255));
            nvgFill(vg);
            nvgEndFrame(vg);
            SDL_GL_SwapWindow(mMainWindow);
        }
    }
}

GameStudio* GameStudio::GetInstance()
{
    if (_instance == 0) {
        _instance = new GameStudio();
    }
    return _instance;
}