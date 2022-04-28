#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Game
{
private:
	int chance = 3;
protected:
	int random = 0;
public:
	int MadeaMistake();
	int WarningMessage(int m);
};