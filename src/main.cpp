#include <iostream>
#include <ncurses.h>
#include "SDL2/SDL.h"

#include "Game.hpp"

using namespace std;
// using namespace Openglomerate;

Game *game = NULL;

int main() {

    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);

    // game = new Game();
    // game->Init(SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_TIMER);

    // //Game loop!
    // while(game->IsRunning()){
    //     game->Update();
    //     game->Render();
    // }

    // game->Clean();
    endwin();
    cout << "Program ran\n";    
    return 0;
}