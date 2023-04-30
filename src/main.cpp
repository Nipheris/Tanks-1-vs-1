#include <vector>

#include "game/Game.h"

int main()
{
	auto game = Game::instance();
	game->run();
}

