#include <SDL.h>

class GameStudio
{
private:
    static GameStudio* _instance;
    GameStudio();
    ~GameStudio();
    void init();
    void run();
    bool mQuit;
    SDL_Event mSDLEvent;    

public:
    GameStudio* GetInstance();
};
