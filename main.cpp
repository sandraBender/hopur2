#include <iostream>
#include "scientist.h"
#include "database.h"
#include "information.h"
#include "service.h"

using namespace std;

int main()
{
    char contYN;
    database dataguymanstuff;
    vector<Scientist> vec;
    dataguymanstuff.readFile(vec);
    Information info;
    info.displayOpening();

    do {
        info.instructions(vec);
        cout << "Do you wish to continue? (Y/N)" << endl;
        cin >> contYN;
    } while(contYN == 'Y' || contYN == 'y');

    dataguymanstuff.writeFile(vec);


   return 0;
}
