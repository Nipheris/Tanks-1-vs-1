//
// Created by Daniel on 29.04.2023.
//

#ifndef COURSE_WORK_SRC_GAME_MAINWINDOW_H
#define COURSE_WORK_SRC_GAME_MAINWINDOW_H

#include <SFML/Graphics.hpp>

#define HEIGHT 948
#define WIDTH 1738
#define TITLE "Tanks 1 vs 1"

class MainWindow
{
 private:
	sf::RenderWindow* window;
	sf::VideoMode videoMode = sf::VideoMode(WIDTH, HEIGHT);

	static MainWindow* _instance;


 public:
	explicit MainWindow(unsigned short fps, bool verticalSync);
	static MainWindow* instance(unsigned short fps = 60, bool verticalSync = true);

	~MainWindow();
};

#endif //COURSE_WORK_SRC_GAME_MAINWINDOW_H
