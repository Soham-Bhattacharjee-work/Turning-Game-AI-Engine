#include <memory>
#include <engine/engine.h>
class Application {
    private:
        std::unique_ptr<Engine> m_engine;

    public: 
        Application();
};