#include "Score.h"

int Score::WarningMessage(int m)
{	
	cout << "Wrong answer! Be careful your remaning chances are " << m << endl;
	return m;
};

int Score::MadeaMistake()
{
	chance = chance - 1;
	return chance;
};