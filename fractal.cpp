#include "fractal.h"

#include "vector.h"

Fractal::Fractal(int width, int height) :
	world(width, height),
	random("al hfjpo234r arfkqj dfeasf"),
	physicalLaws(&world,&random),
	freeParticles(&world, &random),
	unfreeParticles(&world)
{
	freeParticles.addRandomParticles(1000);
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

	//Generate particles from sources and deletes which are blocked
	std::list<ParticleSource>::iterator it = particleSources.begin();
	while(it != particleSources.end()){
		it->createParticles(freeParticles);

		if(unfreeParticles.checkCollision(Particle(it->position)))
			particleSources.erase(it++);
		else
			++it;
	}

	return freeParticles.empty();
}


void Fractal::resize(int width, int height){
	world.width = width;
	world.height = height;
	unfreeParticles.resize();
	freeParticles.resize();
}

void Fractal::addFreeParticleSource(int x, int y, double particlesPerIteration){
	particleSources.push_back(ParticleSource(Vector<int>(x,y), particlesPerIteration));
}

void Fractal::reset(){
	particleSources.clear();
	freeParticles.clear();
	unfreeParticles.clear();
}
