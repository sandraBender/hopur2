#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include "information.h"
#include <algorithm>

class Service
{
public:
    Service();
    void search(string searchCondition);
    void addScientist(vector<Scientist>& vec);
    Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);
    vector<string> sortNameAsc(vector<Scientist> vec, bool desc);
    vector<Scientist> SearchVec;
};

#endif // SERVICE_H
