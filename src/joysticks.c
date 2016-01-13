#include "defs.h"

int		detect_game_controllers(void)
{
	int		num_game_controllers;

	num_game_controllers = SDL_NumJoysticks();
	printf("SDL2 detects %i game controller(s).\n", num_game_controllers);
	return (num_game_controllers);
}
