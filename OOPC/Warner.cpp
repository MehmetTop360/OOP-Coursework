#include "Warner.h"

void Warner::TimerStarted()
{
    cout << endl << "Warning! Your timer has started!" << endl;
    cout << "__________________________________________________________________________________________" << endl << endl;
};

void Warner::TimerWarner()
{
    cout << endl << "Warning! Your timer is still on!" << endl;
};