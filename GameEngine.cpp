#include "GameEngine.h"
#include <iostream>

GameEngine::GameEngine()
{
    _renderMethod = OpenGL;
}

GameEngine::~GameEngine()
{

}
GameEngine* GameEngine::_instance = 0;
GameEngine* GameEngine::GetInstance()
{
    if (_instance == 0)
    {
        _instance = new GameEngine();
    }
    return _instance;
}

const char* GameEngine::GetRenderMethod()
{
    if (_renderMethod == OpenGL)
    {
        return "OpenGL";
    }
    else if (_renderMethod == DirectX)
    {
        return "DirectX";
    }
    return "OpenGL";
}

const char* GameEngine::GetVersionCode()
{
    return this->_versionCode;
}

void GameEngine::Init()
{

    std::cout<<"Jerry's Game Engine Version:"<<GetInstance()->GetVersionCode()<<std::endl;
    std::cout<<"--------------------------------------"<<std::endl;
    std::cout<<"Render Method:"<<GetInstance()->GetRenderMethod()<<std::endl;
}
