#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    database data;
    vector<Scientist> vec;
    data.readFile(vec);
    Information info;
    info.displayOpening();
    info.instructions(vec);


    data.writeFile(vec);

   return 0;
}
