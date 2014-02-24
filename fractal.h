#ifndef FRACTAL_H
#define FRACTAL_H

#include "world.h"
#include "freeParticles.h"
#include "unfreeParticles.h"
#include "physicalLaws.h"
#include "particleSource.h"

class Fractal{
	private:
		World world;
		Random random;
		PhysicalLaws physicalLaws;
		std::list<ParticleSource> particleSources;
	public:
		FreeParticles freeParticles;
		UnfreeParticles unfreeParticles;

		Fractal(int width, int height);

		//It resizes world, reserves or liberates memory and deletes
		//particles who are outside limits
		void resize(int width, int height);

		//It executes an iteration: Move all free particles and check
		//collisions
		bool iterate();

		void addFreeParticleSource(int x, int y, double particlesPerIteration);

		void reset();
};

#endif
