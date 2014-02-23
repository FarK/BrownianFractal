#include "physicalLaws.h"

PhysicalLaws::PhysicalLaws(World* world, Random* random) :
	world(world),
	random(random),
	physicalMode(PL_NORMAL)
{
	gravity.x = 0;
	gravity.y = 0;
	wind.x = 0;
	wind.y = 0;
}

void PhysicalLaws::move(Particle& particle){
	if(physicalMode & PL_NORMAL){
		random->randomMove(particle.position);
	}
	//TODO: Implement remaining physical laws

	world->correctCoord(particle.position);
}
