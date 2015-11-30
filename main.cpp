#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    Information info;
    info.displayOpening();
    info.instructions();
    //Service serv;
    //info.addScientist(serv);
    //cout << serv;

   return 0;
}
