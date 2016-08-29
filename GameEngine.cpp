#include "GameEngine.h"
#include <iostream>

GameEngine::GameEngine()
{

}

GameEngine::~GameEngine()
{

}
GameEngine* GameEngine::_instance = 0;
GameEngine* GameEngine::getInstance()
{
    if (_instance == 0)
    {
        _instance = new GameEngine();
    }
    return _instance;
}

const char* GameEngine::getVersionCode()
{
    return this->_versionCode;
}

int main(int argc, char argv[])
{
    std::cout<<"Jerry's GameEngine VersionCode: "<<GameEngine::getInstance()->getVersionCode()<<std::endl;
    return 0;
}