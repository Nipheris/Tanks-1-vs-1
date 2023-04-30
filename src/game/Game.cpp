//
// Created by Daniel on 29.04.2023.
//

#include "Game.h"

Game::Game()
{
	this->mainWindow = std::make_unique<MainWindow>(FPS, true);
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
void Game::run()
{

}
