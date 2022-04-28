#include "Game.h"

using namespace std;

int Game::WarningMessage(int m)
{
	cout << "Wrong answer! Be careful your remaning chances are " << m << endl;
	return m;
};

int Game::MadeaMistake()
{
	chance = chance - 1;
	return chance;
};