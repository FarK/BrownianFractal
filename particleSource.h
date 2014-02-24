#ifndef PARTICLE_SOURCE_H
#define PARTICLE_SOURCE_H

#include "vector.h"
#include "freeParticles.h"

class ParticleSource{
	public:
		Vector<int> position;
		double particlesPerIteration;
		int iterations;

		ParticleSource(Vector<int> position, double particlesPerIteration = 0.1);

		void createParticles(FreeParticles& freeParticles);
};

#endif
