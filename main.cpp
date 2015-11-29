#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"

int main()
{
    Information info;
    //info.displayOpening();
    //info.instructions();

    info.addScientist();
    info.displayScientist(0);
   return 0;
}
