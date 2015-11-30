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
void Information::instructions(vector<Scientist>& vec){
    cout << endl << "What do you want to do? " << endl
         << "Press 1 to make changes to the list " << endl
         << "Press 2 to display the list " << endl
         << "Press 3 to search" << endl;

    choices(vec);
}
void Information::choices(vector<Scientist>& vec){
    int number;
    cin >> number;
    switch (number) {
    case 1:
        choiceChange();
        break;
    case 2:
        choiceSort(vec);
        break;
    case 3:
        choiceSearch();
         break;
    default:
        cout << "This is invalid choice!! " << endl;
        choices(vec);
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
void Information::choiceSort(vector<Scientist>& vec){
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for alphabetical order A-Z " << endl
         << "Press 2 for reverse alphabetical order Z-A " << endl
         << "Press 3 to order by birth year (ascending)" << endl
         << "Press 4 to order by birth year (descending)" << endl
         << "Press 5 to arrange by gender" << endl
         << "Press 6 to go back "  << endl;
    order(vec);
}
void Information::choiceSearch(){
    cout << "What do you want to search for ?" << endl
         << "press 1 if you want to search for name " << endl
         << "Press 2 if you want to search for a certain year" << endl
         << "Press 3 if you want to look for specific achievement" << endl
         << "Press 4 if you want to go back " << endl;
    search();
}

void Information::addDeleCha(){ //Kommentað út í bili
   /* int number;
    cin >> number;
    switch (number) {
        case 1:{
            Scientist temp;
            addScientist(temp);
            //hér þarf að skrifa í skrá database
            cout << endl << "--Scientist added to database!--" << endl;
            instructions();
            break;
        case 2:
            //kalla á delete fallið
            break;
        case 3:
            //kalla á edit fallið
            break;
        case 4:
            instructions();
            break;
        default:
           cout << "This is invalid choice! " << endl;
           addDeleCha();
            break;
        }
    }*/
}
void Information::order(vector<Scientist> vec)
{
    Service serv;
    int number;
    cin >> number;
    switch (number) {
    case 1:
        serv.displayAll(vec);
        break;
    case 2:
       serv.displayAll(vec);
        break;
    case 3:
        serv.displayAll(vec);
         break;
    case 4:
        serv.displayAll(vec);
         break;
    case 5:
        serv.displayAll(vec);
         break;
    case 6:
        instructions(vec);
        break;
    default:
        cout << "This is invalid choice " << endl;
        order(vec);
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
       // instructions(vec);
        break;
    default:
        break;
    }
}

/*void Information::addScientist(vector<Scientist>& vec){
    //Service serv;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in ‘0’ in 'Year of death'" << endl;

    //serv.addScientist(vec);
}*/


/*void Information::displayAll(Service serv){ Kommentað út í bili
    cout << endl;
    for(unsigned int i = 0; i < serv.SciVec.size(); i++){
        cout << serv.SciVec[i];
        cout << endl;}
}

void Information::displaySearch(Service serv){ Kommentað út í bili
    for(unsigned int i = 0; i < serv.SearchVec.size(); i++)
        cout << serv.SearchVec[i];
}
*/
