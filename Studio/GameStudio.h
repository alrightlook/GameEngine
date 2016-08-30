class GameStudio
{
private:
    static GameStudio* _instance;
    GameStudio();
    ~GameStudio();
    void init();
    void run();

public:
    GameStudio* GetInstance();
};
