class GameEngine
{
    private:
        static GameEngine* _instance;
        const char* _versionCode = "v0.1";
        GameEngine();
        ~GameEngine();
    public:
        const char* getVersionCode();
        static GameEngine* getInstance();
};