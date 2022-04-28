#pragma once

#include "Branch.h"

class Instructions : public Branch
{
protected:
	double seconds = 0;
	double minutes = 0;
public:
	void GetInstructions() override;
	void GameEnded(int k) override;
	void GameEnded(double k) override;
	void ScoreandCondition(int r, int e, int y);
	void ScoreandCondition(int r);
	void GoodScore(int score);
};