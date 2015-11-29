#include <fstream>
#include <iostream>
#include "scientist.h"
#include "database.h"
#include <vector>
#include "information.h"
using namespace std;

int main(){
    Information info;
    /*info.displayOpening();
    info.instructions();

    vector<Scientist> SClist;

    //readScientist(SClist);

    readScientist(SClist);*/

    info.addScientist();
    info.displayScientist(0);


   return 0;
}
