#pragma once

#include <iostream>     /* cin, cout */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      /* setprecision */

using namespace std;

class Game
{
private:
	int chance = 3;
	int score = 0;
	void WarningMessage(int m_chance);
protected:
	int random = 0;
	//letting Randomizer.h take it's value from parent class.
public:
	int MadeaMistake();
	int CorrectAnswer();
};