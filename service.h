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
    void addComputer(string name, string buildYear, string builtOrNot, string type);
    void sortCom(vector<Computer>& vec, string command);
    void sort(vector<Scientist>& vec, string command);
    void deleteData(string table, string name);
};

#endif // SERVICE_H
