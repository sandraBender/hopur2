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
    void sort(vector<Computer>& vec, char number);
    void sort(vector<Scientist>& vec, char number);
    void search(vector<Scientist>& vec, string searchStr ,char number);
    void search(vector<Computer>& vec, string searchStr ,char number);
    void deleteData(char number, string name);
    bool connect();
    bool disconnect();
};

#endif // SERVICE_H
