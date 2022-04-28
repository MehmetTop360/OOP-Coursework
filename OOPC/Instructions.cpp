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
};

void Instructions::GameEnded(int r, int k, int y, int e)
{   
    cout << endl;

    if (y == 0) 
    {
        cout << "Good job! The game has ended and you didn't lose!" << endl << "Your remaining chances were " << e << "!" << endl;
    }

    cout << "test this is int only" << endl;
    cout << "Your score is " << r << endl;
    cout << "Your time is " << k << " minutes" << endl;
    cout << endl;
};

void Instructions::GameEnded(int r, double k, int y, int e)
{   
    cout << endl;

    if (y == 0)
    {
        cout << "Good job! The game has ended and you didn't lose!" << endl << "Your remaining chances were " << e << "!" << endl;
    }
       
    minutes = (int)k;
    seconds = minutes - (int)minutes;

    cout << "test this is float only" << endl;
    cout << "Your score is " << r << endl;
    if ((int)minutes >0) {
        cout << "Your time is " << (int)minutes << "minutes " << " and " << seconds <<" seconds!" << endl;
    }
    else {
        cout << "Your time is " << seconds << " seconds!" << endl;
    }
    cout << endl;
};