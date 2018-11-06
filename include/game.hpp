#ifndef Game_hpp
#define Game_hpp

//#include "SDL2/SDL.h"
#include <iostream>

// namespace Openglomerate{

class Game {
    public:
        Game();
        ~Game();

        void Init(unsigned int SDLInitParameters);
        void HandleEvents();
        void Update();
        void Render();
        void Clean();

        bool IsRunning(){return isRunning;}
        unsigned long GetCurrentTick(){return cTick;}
        private:
            bool isRunning = false;
            unsigned long cTick = 0;
    };
// }

#endif //Game.hpp
