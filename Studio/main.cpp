#include "GameStudio.h"

int main(int argc, char* argv[])
{
    GameStudio::GetInstance()->init();
    GameStudio::GetInstance()->Run();
    return 0;
}