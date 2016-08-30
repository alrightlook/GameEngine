#include "GameStudio.h"

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
}

void GameStudio::run() {
    while(!mQuit) {
        SDL_PollEvent(&mSDLEvent);
        if (mSDLEvent.type == SDL_QUIT)
        {
            mQuit = true;
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