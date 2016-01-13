#ifndef DEFS_H
# define DEFS_H

# include <stdlib.h>
# include <stdio.h>
# define SDL_MAIN_HANDLED
# include <SDL2/SDL.h>

typedef struct	s_inputs
{
	int		run;
}				t_inputs;

void		initialization(Uint32 flags);

SDL_Window	*new_window(int x, int y, int argc, char *argv[]);

void		manage_events(SDL_Event *event, t_inputs *inputs);

int			detect_joysticks(void);

void		print_joysticks_info(int num_game_controllers);

#endif