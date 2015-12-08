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
    void getDatabase();
    void createSciVec(vector<Scientist>& vec, QString command);
    void createCompVec(vector<Computer>& vec, QString command);
    void editData(string name, string yob, string yod, string gender);
    void editDataComp(string name, string buildYear, string builtOrNot, string type);
    void sortSci(vector<Scientist> &vec, char number);
    void sortCom(vector<Computer>& vec, char number);
    void searchSci(vector<Scientist>& vec, string searchStr ,char number);
    void searchCom(vector<Computer>& vec, string searchStr ,char number);
    void deleteSC(char number, string name);

    void closeData();
};

#endif // DATABASE_H