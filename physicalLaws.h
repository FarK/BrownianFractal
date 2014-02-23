#ifndef PHYSICAL_LAWS_H
#define PHYSICAL_LAWS_H

#include "world.h"
#include "random.h"
#include "particle.h"
#include "vector.h"

const int PL_NORMAL		= 0x01;	//Simulate normal brownian motion
const int PL_GRAVITY		= 0x02;	//Simulate constant aceleration
const int PL_WIND		= 0x04;	//Simulate constant velocity
const int PL_COLLISIONS		= 0x08;	//Simulate collisions between free particles

class PhysicalLaws{
	private:
		World* world;
		Random* random;

	public:
		int physicalMode;
		Vector<float> gravity;
		Vector<float> wind;

		PhysicalLaws(World* world, Random* random);

		//Moves the particle according the setted physic. Does not
		//check if it break out outside world limits
		void move(Particle& particle);
};

#endif
