#include <fstream>
#include <iostream>
#include "scientists.h"
#include "database.h"
#include <vector>
#include "information.h"
using namespace std;

void readScientists(vector<Scientists> vec);

int main()
{
    Information info;
    info.displayOpening();
    info.instructions();

    vector<Scientists> SClist;

    //readScientists(SClist);

    readScientists(SClist);


   return 0;
}

void readScientists(vector<Scientists> vec)
{
    /*while (cin != ';')
    {

    }*/
}
