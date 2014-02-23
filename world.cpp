#include "world.h"

World::World(int width, int height) :
	width(width),
	height(height)
{}

int World::correctXCoord(int x){
	//TODO: Implement the case in which the coordinate are outside more
	//than one unit
	if(x >= width)	x = 0;
	else if(x < 0)	x = width-1;

	return x;
}

int World::correctYCoord(int y){
	//TODO: Implement the case in which the coordinate are outside more
	//than one unit
	if(y >= height)	y = 0;
	else if(y < 0)	y = height-1;

	return y;
}

void World::correctCoord(Vector<int>& coord){
	coord.x = correctXCoord(coord.x);
	coord.y = correctYCoord(coord.y);
}
