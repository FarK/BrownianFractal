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

		//Generates particles with random coordinates inside limits
		void addRandomParticle();
		void addRandomParticles(int number);

		//Deletes all particles that are outside limits
		void resize();

		//List control methos
		void add(const Particle& p);
		void clear();
		bool empty();
		iterator begin();
		const_iterator cbegin() const;
		iterator end();
		const_iterator cend() const;
		iterator erase(iterator pos);
};

#endif
