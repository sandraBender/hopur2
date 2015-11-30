#ifndef INFORMATION_H
#define INFORMATION_H
#include "scientist.h"
#include "Service.h"
#include <string>
#include <iostream>


class Information
{
public:
    Information();
    void displayOpening(); // This prints out the opening display
    void instructions(vector<Scientist>& vec);  // This prints out the instuctions
    void choices(vector<Scientist>& vec);
    void choiceChange(vector<Scientist>& vec);
    void choiceSort(vector<Scientist>& vec);
    void addDeleCha(vector<Scientist>& vec);
    void choiceSearch(vector<Scientist>& vec);
    void order(vector<Scientist> vec);
    void search(vector<Scientist>& vec);
    void addScientist(vector<Scientist>& vec);
    void displayScientist(int num, vector<Scientist> vec);
    void displayAll(vector<Scientist> vec);
    void displaySearch(vector<Scientist> vec);
};

#endif // INFORMATION_H
