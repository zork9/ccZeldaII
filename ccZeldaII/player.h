#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <SDL.h>
#include <vector>

class Room;

class Player
{
	public:
		Player();
		~Player();

		void moveLeft(Room const& r);
		void moveRight(Room const& r);
		bool movedToMiddle();
		int getMove();

		void draw(SDL_Surface *screen);

	private:
		int x,y,dx,index;
		std::vector<SDL_Surface *> _images;
};


#endif
