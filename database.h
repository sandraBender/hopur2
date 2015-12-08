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
    void createSciVec(vector<Scientist>& vec, string command);
    void createCompVec(vector<Computer>& vec, string command);
    void editData(string command);
    void closeData();
};

#endif // DATABASE_H