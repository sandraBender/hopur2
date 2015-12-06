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
    //void printList(QString command);
    void createSciVec(vector<Scientist>& vec, QString command);
    void createCompVec(vector<Computer>& vec, QString command);
    void editData(QString command);
    /*void readFile(vector<Scientist>& vec);
    void writeFile(vector<Scientist> vec);
    void writeFileApp(Scientist temp);*/
};

#endif // DATABASE_H