#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include "scientist.h"
#include "service.h"
#include <fstream>
#include <cstdlib>


class database
{
public:
    database();
    void readFile(vector<Scientist>& vec);
   //void useInfo(vector<string> v);
    void writeFile(vector<Scientist> vec);
};

#endif // DATABASE_H
