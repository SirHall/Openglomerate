#include <iostream>
#include <ncurses.h>
#include "game.hpp"
#include "clock.hpp"
#include "ncurseEZ.h"

using namespace std;

Game *game = NULL;
Clock *gameClock = NULL;

int main() {
	
	StartNCurses();
	
	game = new Game();
	game->Init();

	gameClock = new Clock();
	gameClock->SetTPS(30);
	gameClock->StartLoop();

	cout << "Program ended\n";

	game->Clean();
	StopNCurses();
	cout << "Program ran\n";    
	return 0;
}
