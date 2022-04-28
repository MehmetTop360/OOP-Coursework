#include "Randomizer.h"

using namespace std;

int Randomizer::GetRandom()
{
    srand((unsigned)time(0));
    //seeds the random number generator used by the function rand.
    random = 1 + (rand() % 118);
    //makes the random generator take a number between 1 and 118
    return random;
}