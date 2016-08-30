#include "GameStudio.h"
#include <SDL.h>

GameStudio* GameStudio::_instance = 0;

GameStudio::GameStudio()
{

}

GameStudio::~GameStudio()
{

}

GameStudio* GameStudio::GetInstance()
{
    if (_instance == 0) {
        _instance = new GameStudio();
    }
    return _instance;
}