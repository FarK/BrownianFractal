#ifndef WORLD_H
#define WORLD_H

#include "vector.h"

class World{
	public:
		int width;
		int height;

		World(int width, int height);

		//Those methods implements the toroidal world. Corrects the
		//coordinates if it are outside limits
		int correctXCoord(int x);
		int correctYCoord(int y);
		void correctCoord(Vector<int>& coord);
};

#endif
