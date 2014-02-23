#include "freeParticles.h"

FreeParticles::FreeParticles(World* world, Random* random) :
	world(world),
	random(random)
{}

void FreeParticles::randomInit(int number){
	for(int i=number ; i>=0 ; --i)
		particles.push_back(random->randomPosition(world->width,world->height));
}

void FreeParticles::resize(){
	iterator it = particles.begin();
	while(it != particles.end()){
		if((*it).position.x >= world->width ||
		   (*it).position.y >= world->height
		){
			particles.erase(it++);
		}
		else	++it;

	}
}

bool FreeParticles::empty(){
	return particles.empty();
}

FreeParticles::iterator FreeParticles::begin(){
	return particles.begin();
}

FreeParticles::const_iterator FreeParticles::cbegin() const{
	return particles.cbegin();
}

FreeParticles::iterator FreeParticles::end(){
	return particles.end();
}

FreeParticles::const_iterator FreeParticles::cend() const{
	return particles.cend();
}

FreeParticles::iterator FreeParticles::erase(iterator pos){
	return particles.erase(pos);
}
