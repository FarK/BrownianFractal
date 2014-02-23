#ifndef PARTICLE_H
#define PARTICLE_H

#include "vector.h"

typedef enum{
	PS_EMPTY,
	PS_FREE,
	PS_UNFREE
} ParticleState;

class Particle{
	public:
		Vector<int> position;
		Vector<int> velocity;
		ParticleState particleState;

		Particle(int x, int y, ParticleState particleState = PS_FREE);
		Particle(Vector<int> position, ParticleState particleState = PS_FREE);
};

#endif
