#include "fractal.h"

Fractal::Fractal(int width, int height) :
	world(width, height),
	random("al hfjpo234r arfkqj dfeasf"),
	physicalLaws(&world,&random),
	freeParticles(&world, &random),
	unfreeParticles(&world)
{
	freeParticles.randomInit(1000);
}

bool Fractal::iterate(){
	/* We do double collision check, one after move and another before it.
	 * It guarantees an deterministic behavior, independently of the orther
	 * in which we check the particles
	 *
	 * If a collision is detected, the free particle is eliminated from its
	 * list and added to the unfree particles collection
	 */
	FreeParticles::iterator particleIt = freeParticles.begin();
	while(particleIt != freeParticles.end()){
		if(unfreeParticles.checkCollision(*particleIt)){
			unfreeParticles.addParticle(*particleIt);
			freeParticles.erase(particleIt++);
		}
		else{
			physicalLaws.move(*particleIt);

			if(unfreeParticles.checkCollision(*particleIt)){
				unfreeParticles.addParticle(*particleIt);
				freeParticles.erase(particleIt++);
			}
			else
				++particleIt;
		}
	}

	return freeParticles.empty();
}


void Fractal::resize(int width, int height){
	world.width = width;
	world.height = height;
	unfreeParticles.resize();
	freeParticles.resize();
}
