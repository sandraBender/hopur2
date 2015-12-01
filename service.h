#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include "Information.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <ctype.h>
#include <cctype>

class Service
{
public:
    Service();
    void addScientist(vector<Scientist>& vec);
    //Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);
    vector<string> sortVector(vector<Scientist> vec, bool desc, int typeOfSort);
    void deleteScientist(vector<Scientist>& vec, string nameToDelete);
    vector<string> search(vector<Scientist> vec, string searchStr, int typeOfSearch);
    string enterName();
    string enterYear();
    string enterGender();
};

#endif // SERVICE_H
