#include <iostream>
#include <vector>
#include <string>

//	g++ *.cpp -o run/

#include "Score.h"
#include "PeriodicTable.h"

using namespace std;

int main()
{
    int i, n, m, temp, random, amountofGames = 0;

    PeriodicTable tempobj;
    tempobj.PrepareVector();

    Score tempobje;
    random=tempobje.Randomizer();

    cout << "Explaining Game bla bla bla";

    cin >> m;

    for (amountofGames = 1; amountofGames < m; amountofGames++)
    {   
        cout << "What is the atomic number of " << vectorofelements.at(random).name;
        //AskQuestion();
        //TorF()
    }

    // Time // auto duration = duration_cast<seconds>(stop - start);

    // cout << "Your score is " << score << endl;
    // cout << "Your time is " << timeTaken;
}