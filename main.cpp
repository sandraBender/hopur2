#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    database dataguymanstuff;
    vector<Scientist> vec;
    dataguymanstuff.readFile(vec);

    //Scientist sc("asd", "100", "100", "M");
   // vec.push_back(sc);
    Information info;
    info.displayOpening();
    info.instructions(vec);
    dataguymanstuff.writeFile(vec);





    //Service serv;
    //info.addScientist(serv);
    //cout << serv;

   return 0;
}
