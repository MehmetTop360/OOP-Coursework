#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

#include "Element.h"

using namespace std;

class PeriodicTable : public Element
{
private:

public:
    int i;
    vector<string> vectorofelements = { "Hydrogen", "He - Helium", "Li - Lithium", "Be - Beryllium", "B - Boron", "C - Carbon", "N - Nitrogen,", "O - Oxygen,", "F - Fluorine", "Ne - Neon",
   "Na - Sodium",
   "Mg - Magnesium",
   "Al - Aluminum, Aluminium",
   "Si - Silicon",
   "P - Phosphorus",
   "S - Sulfur",
   "Cl - Chlorine",
   "Ar - Argon",
   "K - Potassium",
   "Ca - Calcium",
   "Sc - Scandium",
   "Ti - Titanium",
   "V - Vanadium",
   "Cr - Chromium",
   "Mn - Manganese",
   "Fe - Iron",
   "Co - Cobalt",
   "Ni - Nickel",
   "Cu - Copper", "Zn - Zinc",
   "Ga - Gallium",
   "Ge - Germanium",
   "As - Arsenic",
   "Se - Selenium",
   "Br - Bromine",
   "Kr - Krypton",
   "Rb - Rubidium",
   "Sr - Strontium",
   "Y - Yttrium",
   "Zr - Zirconium",
   "Nb - Niobium",
   "Mo - Molybdenum",
   "Tc - Technetium",
   "Ru - Ruthenium",
   "Rh - Rhodium",
   "Pd - Palladium",
   "Ag - Silver",
   "Cd - Cadmium",
   "In - Indium",
   "Sn - Tin",
   "Sb - Antimony",
   "Te - Tellurium",
   "I - Iodine",
   "Xe - Xenon",
   "Cs - Cesium",
   "Ba - Barium",
   "La - Lanthanum",
   "Ce - Cerium",
   "Pr - Praseodymium",
   "Nd - Neodymium",
   "Pm - Promethium",
   "Sm - Samarium",
   "Eu - Europium",
   "Gd - Gadolinium",
   "Tb - Terbium",
   "Dy - Dysprosium",
   "Ho - Holmium",
   "Er - Erbium",
   "Tm - Thulium",
   "Yb - Ytterbium",
   "Lu - Lutetium",
   "Hf - Hafnium",
   "Ta - Tantalum",
   "W - Tungsten",
   "Re - Rhenium",
   "Os - Osmium",
   "Ir - Iridium",
   "Pt - Platinum",
   "Au - Gold",
   "Hg - Mercury",
   "Tl - Thallium",
   "Pb - Lead",
   "Bi - Bismuth",
   "Po - Polonium", "At - Astatine",
   "Rn - Radon", "Fr - Francium", "Ra - Radium", "Ac - Actinium",
   "Th - Thorium",
   "Pa - Protactinium",
   "U - Uranium",
   "Np - Neptunium",
   "Pu - Plutonium",
   "Am - Americium",
   "Cm - Curium",
   "Bk - Berkelium",
   "Cf - Californium",
   "Es - Einsteinium",
   "Fm - Fermium",
   "Md - Mendelevium",
   "No - Nobelium",
   "Lr - Lawrencium",
   "Rf - Rutherfordium",
   "Db - Dubnium",
   "Sg - Seaborgium",
   "Bh - Bohrium",
   "Hs - Hassium", "Mt - Meitnerium",
   "Ds - Darmstadtium", "Rg - Roentgenium", "Cn - Copernicium", "Nh - Nihonium", "Fl - Flerovium", "Mc - Moscovium", "Lv - Livermorium", "Ts - Tennessine", "Og - Oganesson" };
    vector<int> vectorofanumber = { 1,2,3,4,5,6,7,8,9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 21, 22, 23, 24, 25, 26, 27, 28, 29,30, 31, 32, 33, 34, 35, 36, 37, 38, 39,40, 41, 42, 43, 44, 45, 46, 47, 48, 49,50, 51, 52, 53, 54, 55, 56, 57, 58, 59,60, 61, 62, 63, 64, 65, 66, 67, 68, 69,70, 71, 72, 73, 74, 75, 76, 77, 78, 79,80, 81, 82, 83, 84, 85, 86, 87, 88, 89,90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111 ,112, 113 , 114, 115, 116, 117, 118 };
    vector<Element> ElementwithANumber;

    void PrepareVector()
    {
        Element anElement;
        for (i = 0; i < 119; i++)
        {
            vectorofelements.at(i) = anElement.name;
            vectorofanumber.at(i) = anElement.anumb;
            ElementwithANumber.push_back(anElement);
        }
    }
};