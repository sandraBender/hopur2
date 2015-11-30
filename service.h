#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>


class Service
{
public:
    Service();
    void search(string searchCondition);
    void addScientist(Scientist newSci);
    Scientist getScientist(int num);
    vector<Scientist> SciVec;
    vector<Scientist> SearchVec;
    friend ostream& operator <<(ostream& outs, Service& serv);
private:

};

#endif // SERVICE_H

