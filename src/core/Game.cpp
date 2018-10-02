#include "Game.hpp"
// using namespace Openglomerate;

// namespace Openglomerate{

	Game::Game() {}

	Game::~Game() {}

	void Game::Init(unsigned int SDLInitParameters)
	{
		this->cTick++; //Assuming 30fps, this should take 4.5 years to overflow
		this->isRunning = SDL_Init(SDLInitParameters) == 0;
		std::cout << (
			this->isRunning ? 
			"SDL initialized successfully\n" : 
			"SDL failed to initialize\n");

	}

	void Game::HandleEvents() {}

	void Game::Update() {}

	void Game::Render() {}

	void Game::Clean() {
		SDL_Quit();
		this->isRunning = false;
	}
//}