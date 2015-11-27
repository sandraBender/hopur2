#include <QCoreApplication>
#include <fstream>
#include "scientists.h"
#include <vector>

void readScientists(vector<Scientists> vec);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   // freopen("input.txt", "r", stdin);

    vector<Scientists> SClist;

    readScientists(SClist);

    return a.exec();
}

void readScientists(vector<Scientists> vec)
{
    /*while (cin != ';')
    {

    }*/
}
