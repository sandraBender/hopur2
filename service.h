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
#include "computer.h"

class Service
{
public:
    Service();
    void addScientist(string name, string yob, string yod, string gender);
    void addComputer(string name, string buildYear, string builtOrNot, string type);
    vector<Computer> sortCom(char number);
    vector<Scientist> sortSci(char number);
    vector<Scientist> searchSci(string searchStr, char number);
    vector<Computer> searchCom(string searchStr, char number);
    void deleteData(char number, string name);
    bool connect();
    bool disconnect();
    void addDeleteLink(string scientist, string computer, char number);
    vector<string> getRelations();

};

#endif // SERVICE_H
