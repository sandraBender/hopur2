#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include "scientist.h"
#include <fstream>
#include <cstdlib>


class database
{
public:
    database();
    vector<Scientist> readFile();
   // void useInfo(vector<string> v);
};

#endif // DATABASE_H
