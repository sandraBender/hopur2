#ifndef SORT_H
#define SORT_H
#include "scientists.h"

class Sort
{
    public:
         Sort();
         ~Sort();
         vector<Scientists> sortByName(vector<Scientists>& a, string s);
         vector<Scientists> sortByAge(vector<Scientists> v);
         vector<Scientists> sortByGender(vector<Scientists> v);
         vector<Scientists> sortByDateOfBirth(vector<Scientists> v);
         vector<Scientists> sortByDateOfDeath(vector<Scientists> v);
    private:
        //vector<Scientists> vec;
};

#endif // SORT_H
