#pragma once

#include "Instructions.h"

class Warner : public Instructions
{
public:
	void TimerStarted() override;
	void TimerWarner() override;
};