#ifndef INFORMATION_H
#define INFORMATION_H
#include "scientist.h"
#include "service.h"
#include <string>
#include <iostream>


class Information
{
public:
    Information();
    void displayOpening(); // This prints out the opening display
    void instructions();  // This prints out the instuctions
    void choices();
    void choiceChange();
    void choiceSort();
    void addDeleCha();
    void choiceSearch();
    void order();
    void search();
    void addScientist(Service& serv);
    void displayScientist(int num, Service serv);
};

#endif // INFORMATION_H
