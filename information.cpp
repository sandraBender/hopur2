#include "information.h"
#include <iostream>
#include "scientist.h"
using namespace std;

Information::Information()
{

}
void Information::displayOpening(){
    cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl
         << "- - - - - - - - - - - - - - Welcome - - - - - - - - - - - - - - -" << endl
         << "  This program keeps information about computer scientists " << endl
         << "         You can add a new scientist to the list " << endl
         << "             You can make changes to the list " << endl
         << "You can arrange the list in alphabetic order, gender og birthyear" << endl
         << "              And you can search in the list  " << endl
         << "   You just press the number in the list and then enter" << endl
         << endl;
}
void Information::instructions(){
    cout << "What do you want to do? " << endl
         << "Press 1 and you can make changes to the list " << endl
         << "Press 2 and you can see the list " << endl
         << "Press 3 and you can search in the list" << endl;

    choices();
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
    case 3:
        choiceSearch();
    default:
        cout << "This is invalid choice!! " << endl;
        choices();
        break;
    }

}
void Information::choiceChange(){
    cout << "You can add a computer scientist to the list, make changes or delete." << endl
         << "What do you want to do?? " << endl
         << "Press 1 for adding a person " << endl
         << "Press 2 if you want to delete " << endl
         << "Press 3 if you want to make any changes " << endl
         << "Press 4 if you want to go back" << endl;
    addDeleCha();
}
void Information::choiceSort(){
    cout << "How do you want to display?" << endl
         << "Press 1 alphabetic order A-Z " << endl
         << "Press 2 alphabetic order Z-A " << endl
         << "Press 3 year order ascending " << endl
         << "Press 4 year order descending " << endl
         << "Press 5 if you want to arrange by sex" << endl
         << "Press 6 if you want to go back "  << endl;
    order();

}
void Information::choiceSearch(){
    cout << "What do you want to search for ?" << endl
         << "press 1 if you want to search for name " << endl
         << "Press 2 if you want to search for a certain year" << endl
         << "Press 3 if you want to look for specific achievement" << endl
         << "Press 4 if you want to go back " << endl;
    search();
}

void Information::addDeleCha(){
    int number;
    cin >> number;
    switch (number) {
    case 1:
        //kalla á change fallið
        break;
    case 2:
        //kalla á change fallið
        break;
    case 3:
        //kalla á change fallið
        break;
    case 4:
        instructions();
        break;
    default:
       cout << "This is invalid choice! " << endl;
       addDeleCha();
        break;
    }
}
void Information::order(){
    int number;
    cin >> number;
    switch (number) {
    case 1:
       //kallar á sort fallið
        break;
    case 2:
       //kallar á sort fallið
        break;
    case 3:
        //kallar á sort fallið
         break;
    case 4:
        //kallar á sort fallið
         break;
    case 5:
        //kallar á sort fallið
         break;
    case 6:
        instructions();
        break;
    default:
        cout << "This is invalid choice " << endl;
        order();
        break;
    }
}
void Information::search(){
    int number;
    cin >> number;
    switch (number) {
    case 1:
        //kalla á search fallið
        break;
    case 2:
        //kalla á search fallið
        break;
    case 3:
        //kalla á search fallið
        break;
    case 4:
        instructions();
        break;
    default:
        break;
    }
}

void Information::addScientist(){
    string tempYod, tempName, tempAge, tempYob, tempGender;
    string alive = "x";
    string veryalive = "X";


    Scientist temp;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in ‘x’ in 'Year of death'";

    cout << "Name: ";
    getline(cin, tempName);

    cout << "Year of birth";
    cin >> tempYob;

    cout << "Year of death";
    cin >> tempYod;
        if(tempYod == alive || tempYod == veryalive)
            tempYod = "Alive";

    cout << "Gender: ";
    cin >> tempGender;

    cout << "Age: ";
    cin >> tempAge;

    temp.getScientist(tempName, tempAge, tempYob, tempYod, tempGender);

    //Service.addScientist(temp);
}
