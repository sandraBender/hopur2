#include "information.h"
#include <iostream>
using namespace std;

Information::Information()
{

}
void Information::displayOpening(){
        cout << "Welcome to the amazing program!" << endl;
}
void Information::instructions(){
    cout << "What do you want to do? " << endl
         << "If you press 1 you can make changes to the list " << endl
         << "If you press 2 you can see the list " << endl;
}
void Information::choices(){
    int number;
    cin >> number;
    switch (number) {
    case 1:
        choiceChange();
        break;
    case 2:
       choiceSort();
        break;
    default:
        cout << "This is invalid choice!! " << endl;
        choices();
        break;
    }

}
void Information::choiceChange(){
    cout << "You can add a computer scientist to the list, make changes or delete." << endl
         << "What do you want to do?? " << endl
         << "press 1 for adding a person " << endl
         << "press 2 if you want to delete " << endl
         << "press 3 if you want to make any changes " << endl;
}
void Information::choiceSort(){
    cout << "How do you want to display?" << endl
         << "press 1 alphabet order A-Z " << endl
         << "press 2 alphabet order Z-A " << endl
         << "press 3 year order ascending " << endl
         << "press 4 year order descending " << endl
         << "press 5 if you want to arrange by sex" << endl;
}

