#include "CommonDefine.h"
class LIBRARY_API GameEngine
{
    private:
        static GameEngine* _instance;
        const char* _versionCode = "v0.1";
        int _renderMethod;
        GameEngine();
        ~GameEngine();
    public:
        void Init();
        enum EnumRenderMethod {
            OpenGL = 1, 
            DirectX = 2
        };
        const char* GetVersionCode();
        const char* GetRenderMethod();
        static GameEngine* GetInstance();
};