#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    //char contYN;
    database dataguymanstuff;
    vector<Scientist> vec;
    dataguymanstuff.readFile(vec);
    Information info;
    info.displayOpening();
    info.instructions(vec);


    dataguymanstuff.writeFile(vec);

   return 0;
}
