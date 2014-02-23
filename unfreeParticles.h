#ifndef UNFREE_PARTICLES_H
#define UNFREE_PARTICLES_H

#include <vector>
#include <list>
#include "world.h"
#include "particle.h"

typedef enum{
	EIGHT_NEIGHBORS,
	FOUR_NEIGHBORS
} Adjacency;

const int EIGHT_NEIGHBORS_MATRIX[3][3] = {
	{1,1,1},
	{1,1,1},
	{1,1,1}
};

const int FOUR_NEIGHBORS_MATRIX[3][3] = {
	{0,1,0},
	{1,1,1},
	{0,1,0}
};

class UnfreeParticles{
	private:
		World* world;
		std::vector<std::vector<ParticleState>> collisionMask;
		std::list<Particle> particles;

	public:
		typedef std::list<Particle>::iterator iterator;
		typedef std::list<Particle>::const_iterator const_iterator;

		UnfreeParticles(World* world);

		//Returns true if the particle is collisioning now
		bool checkCollision(const Particle& particle, const int adyacenceMatrix[3][3] = EIGHT_NEIGHBORS_MATRIX);

		void resize();

		//Adds particle to the list and the collision mask
		void addParticle(const Particle& p);
		//void removeParticle(const Particle& p);

		//List control methods
		iterator begin();
		const_iterator cbegin() const;
		iterator end();
		const_iterator cend() const;
};

#endif
