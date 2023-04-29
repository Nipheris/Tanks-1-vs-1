#include <vector>

#include "src/game/Game.h"

int main()
{
	auto game = Game::instance();
	game->run();
}

