#include "particleSource.h"


ParticleSource::ParticleSource(Vector<int> position, double particlesPerIteration) :
	position(position),
	particlesPerIteration(particlesPerIteration),
	iterations(0)

{}

void ParticleSource::createParticles(FreeParticles& freeParticles){
	int particlesToAdd = (int)(particlesPerIteration*iterations++);

	//If there particles to add, add all of them and reset the iteration
	//counter
	if(particlesToAdd){
		for(int i = particlesToAdd; i >= 0; --i){
			freeParticles.add(Particle(position));
		}

		iterations = 0;
	}
}
