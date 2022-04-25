#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "Anumber.h"

using namespace std;

class Element : public Anumber
{
private:

public:
    string name;
    int anumb;

    vector<string> elementsvec{ "hydrogen" , "helium" , "lithium" , "beryllium" , "boron" , "carbon" , "nitrogen" , "oxygen" , "flourine" , "neon" , "sodium" , "magnesium" , "aluminium" , "silicon" , "phosphorus" , "sulfur" , "chlorine" , "argon" , "potassium" , "calcium" };
};