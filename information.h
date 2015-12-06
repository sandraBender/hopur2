#ifndef INFORMATION_H
#define INFORMATION_H
#include "scientist.h"
#include "Service.h"
#include <string>
#include <iostream>

using namespace std;

class Information
{
public:
    Information();
    void displayOpening();
    void instructions();
    void compSciOrLink();
    void compSciOrLinkChoice();
    void choices();
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
    void matchGender(vector<Scientist> sc, vector<string> str, int sortORfind);
    void matchAge(vector<Scientist> sc, vector<string> str);
    void readFile(vector<Scientist>& vec);
    void writeFile(vector<Scientist> vec);
};

#endif // INFORMATION_H
