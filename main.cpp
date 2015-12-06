#include "information.h"

int main()
{

    QString command = "SELECT * FROM Scientists where YearOfBirth > 1900";
    database data;
    data.getDatabase();
    data.printList(command);
    //Information info;
    //info.displayOpening();

   return 0;
}
