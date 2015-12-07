#ifndef SERVICE_H
#define SERVICE_H
#include "scientist.h"
#include <iostream>
#include <vector>
#include "database.h"
#include <algorithm>
#include <string>
#include <sstream>
#include <ctype.h>
#include <cctype>

class Service
{
public:
    Service();
    void addScientist(string name, string yob, string yod, string gender);
    //Scientist getScientist(int num);
    void displayAll(vector<Scientist> vec);
    void sort(vector<Scientist>& vec, string command);
    void deleteScientist(string table, string name);
    //vector<string> search(vector<Scientist> vec, string searchStr, int typeOfSearch);
    //void readFile(vector<Scientist>& vec);
    //void writeFile(vector<Scientist> vec);
};

#endif // SERVICE_H
