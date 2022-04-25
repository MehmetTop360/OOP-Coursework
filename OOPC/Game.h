#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "Element.h"
#include "PeriodicTable.h"

using namespace std;

class Game : public Element
{
private:
    int i, n = 21;

public:

    void PrepareVector()
    {
        vector<PeriodicTable> ElementwithANumber;
        PeriodicTable oneElement;

        for (i = 0; i < n; i++)
        {
            elementsvec.at(i) = oneElement.name;
            atomicNumvec.at(i) = oneElement.anumb;
            ElementwithANumber.push_back(oneElement);
            cout << "Periodic Table created!";
        }
    }
};