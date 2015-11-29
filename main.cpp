#include <fstream>
#include <iostream>
#include "scientist.h"
#include "database.h"
#include <vector>
#include "information.h"
using namespace std;

void readScientist(vector<Scientist> vec);

int main()
{
    Information info;
    info.displayOpening();
    info.instructions();

    vector<Scientist> SClist;

    //readScientist(SClist);

    readScientist(SClist);


   return 0;
}

void readScientist(vector<Scientist> vec)
{
    /*while (cin != ';')
    {

    }*/
}
