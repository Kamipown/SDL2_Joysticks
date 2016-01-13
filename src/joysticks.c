#include "defs.h"

int		detect_joysticks(void)
{
	int		num_game_controllers;

	num_game_controllers = SDL_NumJoysticks();
	printf("SDL2 detects %i Game Controller(s).\n\n", num_game_controllers);
	return (num_game_controllers);
}

void	print_joysticks_info(int num_game_controllers)
{
	SDL_Joystick	*joystick;
	int				i;

	i = 0;
	while (i < num_game_controllers)
	{
		if ((joystick = SDL_JoystickOpen(i)))
		{
			printf("Informations of Joysticks %i:\n", i);
			printf("Name: %s\n", SDL_JoystickNameForIndex(i));
			printf("Number of Axes: %i\n", SDL_JoystickNumAxes(joystick));
			printf("Number of Buttons: %i\n", SDL_JoystickNumButtons(joystick));
			printf("Number of Hats: %i\n", SDL_JoystickNumHats(joystick));
			printf("Number of Balls: %i\n", SDL_JoystickNumBalls(joystick));
			SDL_JoystickClose(joystick);
		}
		else
			printf("Couldn't open Game Joysticks %i.\n", i);
		++i;
	}
}