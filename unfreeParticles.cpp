#include "unfreeParticles.h"

#include <iostream>

#include <vector>
#include "particle.h"
#include "world.h"

UnfreeParticles::UnfreeParticles(World* world) :
	world(world),
	collisionMask(world->width)
{
	for(int i=world->width-1 ; i>=0 ; --i)
		collisionMask[i].resize(world->height, PS_EMPTY);

	collisionMask[world->width/2][world->height/2] = PS_UNFREE;
}

bool UnfreeParticles::checkCollision(const Particle& particle, const int adyacenceMatrix[3][3]){
	bool collision = false;

	//We calculate the surrounding coordinates and correct them, if them is
	//outside limits
	int x = particle.position.x;
	int y = particle.position.y;
	int _x = world->correctXCoord(particle.position.x-1);
	int x_ = world->correctXCoord(particle.position.x+1);
	int _y = world->correctYCoord(particle.position.y-1);
	int y_ = world->correctYCoord(particle.position.y+1);
	
	//Corners
	collision =              (adyacenceMatrix[2][0]		&& collisionMask[_x][_y]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[2][2]		&& collisionMask[x_][_y]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[0][2]		&& collisionMask[x_][y_]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[0][0]		&& collisionMask[_x][y_]	== PS_UNFREE);

	//Cross
	collision = collision || (adyacenceMatrix[2][1]		&& collisionMask[x ][_y]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[1][2]		&& collisionMask[x_][y ]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[0][1]		&& collisionMask[x ][y_]	== PS_UNFREE);
	collision = collision || (adyacenceMatrix[1][0]		&& collisionMask[_x][y ]	== PS_UNFREE);

	return collision;
}

void UnfreeParticles::resize(){
	//Adapt vector size to screen size
	collisionMask.resize(world->width);
	//collisionMask.shrink_to_fit(); Don't work :(
	std::vector<std::vector<ParticleState>>(collisionMask).swap(collisionMask);

	for(int i=world->width-1 ; i>=0 ; --i){
		collisionMask[i].resize(world->height, PS_EMPTY);
		collisionMask[i].shrink_to_fit();
	}

	//Remove outside particles
	iterator it = particles.begin();
	iterator end = particles.end();
	while(it != end){
		if((*it).position.x >= world->width ||
		   (*it).position.y >= world->height
		  ){
			particles.erase(it++);
		}
		else	++it;

	}
}

void UnfreeParticles::addParticle(const Particle& p){
	collisionMask[p.position.x][p.position.y] = PS_UNFREE;
	particles.push_back(p);

}

//void UnfreeParticles::removeParticle(const Particle& p){
//	collisionMask[p.position.x][p.position.y] = PS_EMPTY;
//	particles.remove(p);
//}

UnfreeParticles::iterator UnfreeParticles::begin(){
	return particles.begin();
}

UnfreeParticles::const_iterator UnfreeParticles::cbegin() const{
	return particles.cbegin();
}

UnfreeParticles::iterator UnfreeParticles::end(){
	return particles.end();
}

UnfreeParticles::const_iterator UnfreeParticles::cend() const{
	return particles.cend();
}
