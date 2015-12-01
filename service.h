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
    //Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);
    vector<string> sortVector(vector<Scientist> vec, bool desc, int typeOfSort);
    void deleteScientist(vector<Scientist>& vec, string nameToDelete);
    vector<string> searchByName(vector<Scientist> vec, string searchStr);
};

#endif // SERVICE_H
