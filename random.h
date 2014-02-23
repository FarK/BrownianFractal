#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include "vector.h"

class Random{
	private:
		std::default_random_engine pseudoGenerator;
		std::random_device generator;
		std::uniform_int_distribution<int> distribution;
		std::seed_seq seed;
	public:
		bool trueRandom;

		Random(std::string seed);
		Random();

		void randomMove(Vector<int>& position);
		Vector<int> randomPosition(int width, int height);

		void setSeed(std::string seed);
};

#endif
