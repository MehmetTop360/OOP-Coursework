#pragma once

#include "Branch.h"

class Instructions : public Branch
{
protected:
	double seconds = 0;
	double minutes = 0;
public:
	void GetInstructions() override;
	void GameEnded(int r, int k, int y, int e) override;
	void GameEnded(int r, double k, int y, int e) override;
};