#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "Randomizer.h"
#include "Element.h"

using namespace std;

int Randomizer::GetRandom()
{
    int random = 0;
    srand((unsigned)time(0));
    random = 1 + (rand() % 118);
    return random;
}

int Randomizer::GetNumber()
{
    int something = 0;
    srand((unsigned)time(0));
    something = 1 + (rand() % 30);
    return something;
}