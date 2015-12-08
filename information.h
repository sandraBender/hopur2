#ifndef INFORMATION_H
#define INFORMATION_H
#include "scientist.h"
#include "Service.h"
#include <string>
#include <iostream>
#include "computer.h"

using namespace std;

class Information
{
public:
    Information();
    void displayOpening();
    void instructions();
    void compSciOrLink();
    void compSciOrLinkChoice();
    void choices(char num);
    void choiceChangeSci();
    void choiceChangeComp();
    void choiceSort(char number);
    void addDeleteSci();
    void addDeleteComp();
    void choiceSearch(char number);
    void orderSci();
    void orderComp();
    void searchSci();
    void searchComp();
    void addScientist();
    void addComputer();
    void displayScientist(int num, vector<Scientist> vec);
    void displayAll(vector<Scientist> vec);
    void displayAll(vector<Computer> vec);
    void displaySearch(vector<Scientist> vec);
    string typeOfComputer(char choice);
    void deleteStuff(string table);

private:
    string command;
};

#endif // INFORMATION_H
