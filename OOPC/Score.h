#pragma once

#include "Game.h"

class Score : public Game
{
private:
	int chance = 3;
public:
	int MadeaMistake() override;
	int WarningMessage(int m) override;
};