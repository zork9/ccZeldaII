#include <SDL.h>

#include "player.h"
#include "room.h"

int main(int argc, char *argv[])
{

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Surface *screen = SDL_SetVideoMode(640,480,32,NULL);


	Player player;
	Room room;
	room.loadRoomCastle();

	SDL_EnableKeyRepeat(1000, 1000);

	SDL_Event e;
	while (SDL_WaitEvent(&e)) {
		if (e.type == SDL_QUIT) {
			return 0;
		}

		if (e.type == SDL_KEYDOWN) {
			if (e.key.keysym.sym == SDLK_LEFT)
				player.moveLeft(room);
			if (e.key.keysym.sym == SDLK_RIGHT)
				player.moveRight(room);
		}
		room.draw(screen);
		player.draw(screen);
		SDL_Flip(screen);

	}

	return 0;
}
