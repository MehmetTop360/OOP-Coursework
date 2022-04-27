#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Game
{
private:

protected:
	int random = 0;
	int chance = 1;
public:
	virtual int MadeaMistake() = 0;

	int WarningMessage(int m);
};