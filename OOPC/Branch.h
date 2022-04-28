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
	virtual void TimerStarted() = 0;
	virtual void TimerWarner() = 0;
	virtual void GameEnded(int r, int k , int y, int e) = 0;
	virtual void GameEnded(int r, double k, int y, int e) = 0;
};