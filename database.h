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


class database
{
public:
    database();
    void getDatabase();
    /*void readFile(vector<Scientist>& vec);
    void writeFile(vector<Scientist> vec);
    void writeFileApp(Scientist temp);*/
};

#endif // DATABASE_H
