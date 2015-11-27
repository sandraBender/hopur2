#ifndef SORT_H
#define SORT_H
#include "scientists.h"

class Sort
{
    public:
         Sort();
         ~Sort();
         void sortByName(vector<Scientists> a, string s);
         void sortByAge(vector<Scientists> a);
         void sortByGender(vector<Scientists> a);
         void sortByDateOfBirth(vector<Scientists> a);
         void sortByDateOfDeath(vector<Scientists> a);
         void displayVector(const vector<Scientists> a);
};

#endif // SORT_H
