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
public:
	virtual int MadeaMistake() = 0;
	virtual int GetRandom() = 0;
	virtual int WarningMessage(int m) = 0;
};