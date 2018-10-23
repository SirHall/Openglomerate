#include <iostream>
#include <ncurses.h>
//#include "SDL2/SDL.h"
#include "Game.hpp"
#include "Clock.hpp"
#include "ncurseEZ.h"

using namespace std;

Game *game = NULL;
Clock *gameClock = NULL;

int main() {
    
    StartNCurses();
    
    game = new Game();
    gameClock = new Clock();

    //game->Init(SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_TIMER);

    gameClock->SetTPS(30);
    gameClock->StartLoop();

    cout << "Program ended\n";

    game->Clean();
    StopNCurses();
    cout << "Program ran\n";    
    return 0;
}
