#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include "Information.h"
#include <algorithm>
#include <string>

class Service
{
public:
    Service();
    void addScientist(vector<Scientist>& vec);
    Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);
    void sortByName(vector<Scientist> vec, bool desc);
    void deleteScientist(vector<Scientist>& vec, string nameToDelete);
    void searchByName(vector<Scientist> vec, string searchName);
};

#endif // SERVICE_H
