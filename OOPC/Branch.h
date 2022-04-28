#pragma once

#include "Game.h"

using namespace std;

class Branch : public Game
{
private:

public:
	virtual void GetInstructions() = 0;
	virtual void TimerStarted() = 0;
	virtual void TimerWarner() = 0;
	virtual void GameEnded(int k) = 0;
	virtual void GameEnded(double k) = 0;
	//the abstract class which holds all the abstract childs
};