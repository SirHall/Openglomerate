#include "game.hpp"
// using namespace Openglomerate;

// namespace Openglomerate{

	Game::Game() {}

	Game::~Game() {}

	void Game::Init()
	{
		this->isRunning = true;
	}

	void Game::HandleEvents() {}

	void Game::Update() {}

	void Game::Render() {}

	void Game::Clean() {
		//SDL_Quit();
		this->isRunning = false;
	}
//}
