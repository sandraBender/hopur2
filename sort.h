#ifndef SORT_H
#define SORT_H
#include "scientist.h"

class Sort
{
    public:
         Sort();
         ~Sort();
         void sortByName(vector<Scientist> a);
         void sortByAge(vector<Scientist> a);
         void sortByGender(vector<Scientist> a);
         void sortByDateOfBirth(vector<Scientist> a);
         void sortByDateOfDeath(vector<Scientist> a);
         void displayVector(vector<string> temp, vector<Scientist> a);

};

#endif // SORT_H
