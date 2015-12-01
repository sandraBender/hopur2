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
    void displayOpening();
    void instructions(vector<Scientist>& vec);
    void choices(vector<Scientist>& vec);
    void choiceChange(vector<Scientist>& vec);
    void choiceSort(vector<Scientist>& vec);
    void addDelete(vector<Scientist>& vec);
    void choiceSearch(vector<Scientist>& vec);
    void order(vector<Scientist> vec);
    void search(vector<Scientist> vec);
    void addScientist(vector<Scientist>& vec);
    void displayScientist(int num, vector<Scientist> vec);
    void displayAll(vector<Scientist> vec);
    void displaySearch(vector<Scientist> vec);
    void matchName(vector<Scientist> sc, vector<string> str);
    void matchYob(vector<Scientist> sc, vector<string> str);
    void matchGender(vector<Scientist> sc, vector<string> str);
    void matchAge(vector<Scientist> sc, vector<string> str);
    void contYN(vector<Scientist> vec);
};

#endif // INFORMATION_H
