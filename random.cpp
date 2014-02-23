#include "random.h"

#include <random>

Random::Random() :
	pseudoGenerator(),
	generator(),
	distribution(-1,1),
	seed()
{
	//TODO: use generator for seed
}

Random::Random(std::string strSeed) :
	pseudoGenerator(),
	generator(),
	distribution(-1,1),
	seed()
{
	setSeed(strSeed);
}

void Random::randomMove(Vector<int>& position){
	//'distribution' is an uniform distribution between -1 and 1
	position.x += distribution(pseudoGenerator);
	position.y += distribution(pseudoGenerator);
}

Vector<int> Random::randomPosition(int width, int height){
	std::uniform_int_distribution<int> widthDistribution(0,width-1);
	std::uniform_int_distribution<int> heightDistribution(0,height-1);

	Vector<int> pos;
	pos.x = widthDistribution(pseudoGenerator);
	pos.y = heightDistribution(pseudoGenerator);

	return pos;
}

void Random::setSeed(std::string strSeed){
	seed = std::seed_seq(strSeed.begin(), strSeed.end());
}
