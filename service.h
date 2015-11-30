#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include "information.h"


class Service
{
public:
    Service();
    void search(string searchCondition);
    void addScientist(Scientist newSci);
    Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);

    vector<Scientist> SearchVec;
};

#endif // SERVICE_H
