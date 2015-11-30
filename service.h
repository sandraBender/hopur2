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
    friend ostream& operator <<(ostream& outs, Service& serv);
    vector<Scientist> SearchVec;
private:

};

#endif // SERVICE_H

