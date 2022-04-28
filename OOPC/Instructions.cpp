#include "Instructions.h"

using namespace std;

void Instructions::GetInstructions()
{
    cout << "Hello! Welcome to Chemistry element word game!" << endl;
    cout << "The questions will ask you the elements, and you will answer with their atomic numbers." << endl;
    cout << "Be careful because you have 3 mistake chances." << endl;
    cout << "Also your time will be recorded while you answer to each question as well." << endl;
    cout << "Type the number of questions you want to play." << endl;
    cout << endl;
    //Giving the instructions to the player
};

void Instructions::GameEnded(int k)
{   
    cout << "Your time is " << k << " minutes" << endl;
    //If the time was a whole number then the player is going to get this ending.
};

void Instructions::GameEnded(double k)
{   
    minutes = k / 60;
    seconds = minutes - (int)minutes;
    seconds = seconds * 60;

    if ((int)minutes >0) {
        cout << "Your time is " << (int)minutes << " minutes" << " and " << seconds <<" seconds!" << endl;
    }
    else {
        cout << "Your time is " << seconds << " seconds!" << endl;
    }
    //If the timer was not a whole number then the player is going to get this ending.
};

void Instructions::ScoreandCondition(int r, int e, int y)
{
    cout << "Good Job! The game has ended and you didn't lose!" << endl << "Your remaining chances were " << e << "!" << endl;

    if (r > 0) {
        cout << "Your score is " << r << "! Great!" << endl;
    }
    else {
        cout << "Your score is " << r << ". You will make it next time!" << endl;
    }
    //If the player finished without losing their all chances then the player will get this ending
};

void Instructions::ScoreandCondition(int r, int e)
{
    cout << "Your 3 chances have run out! So, the game has ended and you lost!" << endl;

    if (r > 0) {
        cout << "Your score is " << r << "! Good job!" << endl;
    }
    else {
        cout << "Your score is " << r << ". You will make it next time!" << endl;
    }
    //If the player finished by losing their all chances then the player will get this ending
};