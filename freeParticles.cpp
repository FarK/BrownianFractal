#include "freeParticles.h"

FreeParticles::FreeParticles(World* world, Random* random) :
	world(world),
	random(random)
{}

void FreeParticles::addRandomParticle(){
	particles.push_back(random->randomPosition(world->width,world->height));
}

void FreeParticles::addRandomParticles(int number){
	for(int i=number ; i>=0 ; --i)
		addRandomParticle();
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

void FreeParticles::add(const Particle& p){
	particles.push_back(p);
}

void FreeParticles::clear(){
	particles.clear();
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
