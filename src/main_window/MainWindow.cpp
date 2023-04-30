//
// Created by Daniel on 29.04.2023.
//

#include "MainWindow.h"

MainWindow::MainWindow(const unsigned short fps, const bool verticalSync)
{
	this->window = std::make_unique<sf::RenderWindow>(videoMode, TITLE);
	this->window->setVerticalSyncEnabled(verticalSync);
	this->window->setFramerateLimit(fps);
}
