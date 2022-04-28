#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "Game.h"
using namespace std;

class Branch : public Game
{
private:

public:
	virtual void GetInstructions() = 0;
};