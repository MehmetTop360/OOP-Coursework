#pragma once

#include <iostream>

#include "Game.h"
#include "Randomizer.h"

using namespace std;

class Randomizer : public Game
{
private:
public:
	int GetRandom();
	int GetNumber();
};