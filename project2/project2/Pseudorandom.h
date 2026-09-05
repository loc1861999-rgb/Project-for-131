#pragma once
#ifndef PSEUDORANDOM_H
#define PSEUDORANDOM_H

class Pseudorandom
{
private:
    unsigned int seed;
    unsigned int multiplier;
    unsigned int increment;
    unsigned int modulus;

public:
    // Constructor
    Pseudorandom(unsigned int seed,  unsigned int multiplier, unsigned int increment, unsigned int modulus);

    // Change the seed
    void setSeed(unsigned int newSeed);

    // Generate and return the next pseudorandom number
    unsigned int next();
    //
    double nextDouble();
};

#endif
