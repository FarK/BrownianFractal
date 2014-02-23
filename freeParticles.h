#ifndef FREE_PARTICLES_H
#define FREE_PARTICLES_H

#include <list>
#include "world.h"
#include "particle.h"
#include "random.h"

class FreeParticles{
	private:
		std::list<Particle> particles;

	public:
		World* world;
		Random* random;

		typedef std::list<Particle>::iterator iterator;
		typedef std::list<Particle>::const_iterator const_iterator;

		FreeParticles(World* world, Random* random);

		//Generates 'number' particles with random coordinates inside
		//limits
		void randomInit(int number);

		//Deletes all particles that are outside limits
		void resize();

		//List control methos
		bool empty();
		iterator begin();
		const_iterator cbegin() const;
		iterator end();
		const_iterator cend() const;
		iterator erase(iterator pos);
};

#endif
