//
// Created by Daniel on 29.04.2023.
//

#ifndef _GAME_H_
#define _GAME_H_

#include "../interfaces/IRendered.h"
#include "../interfaces/IUpdatable.h"
#include "../main_window/MainWindow.h"

#define FPS 144
#define TICK 700

class Game : public IUpdatable
{
private:
	std::unique_ptr<MainWindow> mainWindow;
	sf::Clock deltaClock{};
	float deltaTime{};

	void update() override;

	void updateEvents();

	void updateDeltaTime();
public:
	Game();

	~Game() = default;

	void run();
};

#endif //_GAME_H_
