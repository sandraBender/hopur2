#ifndef SORT_H
#define SORT_H
#include "scientists.h"

class Sort
{
    public:
         Sort();
         ~Sort();
         void sortByName(vector<Scientists>& a, string s);
         void sortByAge(vector<Scientists> v);
         void sortByGender(vector<Scientists> v);
         void sortByDateOfBirth(vector<Scientists> v);
         void sortByDateOfDeath(vector<Scientists> v);
};

#endif // SORT_H
