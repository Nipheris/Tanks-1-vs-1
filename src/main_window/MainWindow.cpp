//
// Created by Daniel on 29.04.2023.
//

#include "MainWindow.h"

MainWindow* MainWindow::_instance = nullptr;
MainWindow::MainWindow(const unsigned short fps, const bool verticalSync)
{
	window = new sf::RenderWindow(videoMode, TITLE);
	window->setVerticalSyncEnabled(verticalSync);
	window->setFramerateLimit(fps);
}
MainWindow* MainWindow::instance(const unsigned short fps, const bool verticalSync)
{
	if (MainWindow::_instance == nullptr)
		MainWindow::_instance = new MainWindow(fps, verticalSync);
	return _instance;
}
MainWindow::~MainWindow()
{
	delete _instance;
	delete window;
}
