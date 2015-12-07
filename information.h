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
    void choiceChange();
    void choiceSort();
    void addDelete();
    void choiceSearch();
    void order();
    void search();
    void addScientist();
    void displayScientist(int num, vector<Scientist> vec);
    void displayAll(vector<Scientist> vec);
    void displaySearch(vector<Scientist> vec);

private:
    QString command;
};

#endif // INFORMATION_H
