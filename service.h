#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>


class Service
{
public:
    Service();
    void search();
    void addScientist(Scientist newSci);
    Scientist getScientist(int num);
private:
    vector<Scientist> SciVec;
};

#endif // SERVICE_H
