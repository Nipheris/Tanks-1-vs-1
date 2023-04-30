#include <vector>

#include "game/Game.h"

int main()
{
	auto game = std::make_unique<Game>();
	game->run();
}
