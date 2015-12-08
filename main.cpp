#include "information.h"

int main()
{
    database data;
    data.getDatabase();
    Information info;
    info.displayOpening();
    data.closeData();
   return 0;
}
