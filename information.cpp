#include "information.h"
#include <iostream>
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
         << "   You can change the order in which the list is diplayed" << endl
         << "              And you can search through the list  " << endl;
}
void Information::instructions(){
    cout << endl << "What do you want to do? " << endl
         << "Press 1 to make changes to the list " << endl
         << "Press 2 to display the list " << endl
         << "Press 3 to search" << endl;

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
    cout << "Here you can add to the list and edit/delete existing information." << endl
         << "What do you want to do? " << endl
         << "Press 1 to add a person " << endl
         << "Press 2 to delete " << endl
         << "Press 3 to edit" << endl
         << "Press 4 to go back" << endl;
    addDeleCha();
}
void Information::choiceSort(){
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for alphabetical order A-Z " << endl
         << "Press 2 for reverse alphabetical order Z-A " << endl
         << "Press 3 to order by bithyear (ascending)" << endl
         << "Press 4 to order by bithyear (descending)" << endl
         << "Press 5 to arrange by gender" << endl
         << "Press 6 to go back "  << endl;
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
    case 1:{
        Service serv;
        addScientist(serv);
        //hér þarf að skrifa í skrá database
        cout << "Scientist added to database" << endl;
        instructions();
        break;}
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

void Information::addScientist(Service& serv){
    string tempYod, tempName, tempAge, tempYob, tempGender;
    string alive = "x";
    string veryalive = "X";


    Scientist temp;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in ‘x’ in 'Year of death'" << endl;

    cout << "Name: ";
    cin.ignore();
    getline(cin, tempName);

    cout << "Year of birth: ";
    cin >> tempYob;

    cout << "Year of death: ";
    cin >> tempYod;
        if(tempYod == alive || tempYod == veryalive)
            tempYod = "Alive";

    cout << "Gender: ";
    cin >> tempGender;

    cout << "Age: ";
    cin >> tempAge;

    temp.setScientist(tempName, tempAge, tempYob, tempYod, tempGender);

    serv.addScientist(temp);
}


void Information::display(Service serv){
    for(unsigned int i = 0; i < serv.SciVec.size(); i++)
        cout << serv.SciVec[i];
}

void Information::displaySearch(Service serv){
    for(unsigned int i = 0; i < serv.SearchVec.size(); i++)
        cout << serv.SearchVec[i];
}

