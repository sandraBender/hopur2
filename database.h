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
    void readFile(vector<Scientist>& vec);
    void writeFile(vector<Scientist> vec);
    void writeFileApp(Scientist temp);
};

#endif // DATABASE_H
