#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    Information info;
    vector<Scientist> vec;

    info.readFile(vec);
    info.displayOpening();
    info.instructions(vec);
    info.writeFile(vec);

   return 0;
}
