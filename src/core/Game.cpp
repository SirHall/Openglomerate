#include "Game.hpp"

// using namespace Openglomerate;

// namespace Openglomerate{

	Game::Game() {}

	Game::~Game() {}

	void Game::Init(unsigned int SDLInitParameters)
	{

		if (SDL_Init(SDLInitParameters) == 0)
		{
			std::cout << "SDL initialization complete!\n";
			this->isRunning = true;
		}else{
			this->isRunning = false;
		}
	}

	void Game::HandleEvents() {}

	void Game::Update() {}

	void Game::Render() {}

	void Game::Clean() {
		// SDL_Quit();
		this->isRunning = false;
	}
// }