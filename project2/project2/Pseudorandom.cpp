#include <iostream>
#include "Pseudorandom.h"
using namespace std;
Pseudorandom::Pseudorandom(unsigned int seed, unsigned int multiplier,    unsigned int increment, unsigned int modulus)
{
    this->seed = seed;
    this->multiplier = multiplier;
    this->increment = increment;
    this->modulus = modulus;
}

void Pseudorandom::setSeed(unsigned int newSeed)
{
    seed = newSeed;
}

unsigned int Pseudorandom::next()
{
    seed = (multiplier * seed + increment) % modulus;

    return seed;
}

double Pseudorandom::nextDouble()
{
    seed = (multiplier * seed + increment) % modulus;

    return static_cast<double>(seed) / static_cast<double>(modulus);
}