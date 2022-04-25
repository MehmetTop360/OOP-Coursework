#include <iostream>
#include <vector>
#include <string>

//	g++ *.cpp -o run/

#include "Game.h"

using namespace std;

int main()
{
    int i, n, m, temp, amountofGames = 0;

    cout << "Explaining Game bla bla bla";
    Game tempobj;
    tempobj.PrepareVector();

    cin >> m;

    for (amountofGames = 1; amountofGames < m; amountofGames++)
    {
        //AskQuestion();
        //TorF()
    }

    // Time // auto duration = duration_cast<seconds>(stop - start);

    // cout << "Your score is " << score << endl;
    // cout << "Your time is " << timeTaken;
}