#ifndef GAMESTUDIO_HEADER
#define GAMESTUDIO_HEADER
#include <SDL.h>

class GameStudio
{
private:
    static GameStudio* _instance;
    GameStudio();
    ~GameStudio();
    bool mQuit;
    SDL_Event mSDLEvent;    
    SDL_Window* mMainWindow;
    SDL_GLContext mGLContext;
    struct NVGcontext* vg;
public:
    static GameStudio* GetInstance();
    void init();
    void Run();
};
#endif