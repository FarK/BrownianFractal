#include "particle.h"

Particle::Particle(Vector<int> position, ParticleState particleState) :
	position(position),
	particleState(particleState)
{}

Particle::Particle(int x, int y, ParticleState particleState) :
	particleState(particleState)
{
	position.x = x;
	position.y = y;
}
