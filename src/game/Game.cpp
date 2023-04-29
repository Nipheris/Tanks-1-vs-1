//
// Created by Daniel on 29.04.2023.
//

#include "Game.h"

Game* Game::_instance = nullptr;
Game::Game()
{
	mainWindow = new MainWindow(FPS, true);
}
void Game::update()
{

}
void Game::updateEvents()
{

}
void Game::updateDeltaTime()
{
	this->deltaTime = this->deltaClock.restart().asSeconds() / TICK;
}
Game* Game::instance()
{
	if (_instance == nullptr)
		_instance = new Game();
	return _instance;
}
Game::~Game()
{
	delete mainWindow;
	//delete _instance;
}
void Game::run()
{

}
