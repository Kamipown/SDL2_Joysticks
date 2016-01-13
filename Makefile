NAME =	SDL2_Joysticks

FLG =	-Wall -Wextra -Werror

SRC =	src/main.c \
		src/initialization.c \
		src/window.c \
		src/events.c \
		src/joysticks.c

INC =	-I./include

all: $(NAME)

$(NAME):
	gcc $(FLG) $(SRC) $(INC) -lSDL2 -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
