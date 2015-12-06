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
    void addScientist();
    void displayScientist(int num, vector<Scientist> vec);
    void displayAll(vector<Scientist> vec);
    void displaySearch(vector<Scientist> vec);

private:
    QString command;
};

#endif // INFORMATION_H
