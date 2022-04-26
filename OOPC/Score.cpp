#include "Score.h"

#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int Score::Randomizer()
{
    int random = 0;
    random = rand() % 119;
    return random;
}
