#include "defs.h"

int					main(int argc, char *argv[])
{
	SDL_Window	*window;
	SDL_Event	event;
	int			num_joysticks;
	t_inputs	inputs;

	initialization(SDL_INIT_VIDEO | SDL_INIT_JOYSTICK);
	window = new_window(800, 600, argc, argv);
	num_joysticks = detect_joysticks();
	print_joysticks_info(num_joysticks);
	inputs.run = 1;
	while (inputs.run)
	{
		manage_events(&event, &inputs);
	}
	SDL_DestroyWindow(window);
	SDL_Quit();
	return (EXIT_SUCCESS);
}