#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <vector>
#include "scientist.h"
#include <fstream>
#include <cstdlib>
#include <QCoreApplication>
#include <QtSql>
#include "computer.h"

class database
{
public:
    database();
    bool getDatabase();
    vector<Scientist> createSciVec(QString command);
    vector<Computer> createCompVec(QString command);
    void editData(string name, string yob, string yod, string gender);
    void editDataComp(string name, string buildYear, string builtOrNot, string type);
    vector<Scientist> sortSci(char number);
    vector<Computer> sortCom(char number);
    vector<Scientist> searchSci(string searchStr ,char number);
    vector<Computer> searchCom(string searchStr ,char number);
    void deleteSC(char number, string name);
    bool closeDatabase();
    void addDeleteLink(string scientist, string computer, char number);
    void linkChoice();
    vector<string> getRelations();
};

#endif // DATABASE_H
