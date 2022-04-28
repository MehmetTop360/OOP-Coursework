#include "Game.h"

using namespace std;

void Game::WarningMessage(int m_chance)
{
	cout << "Wrong answer! Be careful your remainning chances are " << m_chance << "!" << endl << endl;
	//warning the player about their remaining chances
};

int Game::CorrectAnswer()
{
	cout << "Correct answer!" << endl;
	score = score + 1;
	return score;
	//storing and recording the score
};

int Game::MadeaMistake()
{	
	chance = chance - 1;
	WarningMessage(chance);
	return chance;
	//storing and recording the amount of chances left
};