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
         << "Press 3 to search" << endl
         << "Press 4 to quit"<< endl;

    choices(vec);
}
void Information::choices(vector<Scientist>& vec){
    int number;
    cin >> number;
    switch (number) {
    case 1:
        choiceChange(vec);
        break;
    case 2:
        choiceSort(vec);
        break;
    case 3:
        choiceSearch(vec);
         break;
    case 4:
        return;
    default:
        cout << "This is invalid choice!! " << endl;
        choices(vec);
        break;
    }

}
void Information::choiceChange(vector<Scientist>& vec){
    cout << "Here you can add to the list and edit/delete existing information." << endl
         << "What do you want to do? " << endl
         << "Press 1 to add a person " << endl
         << "Press 2 to delete " << endl
         << "Press 3 to edit" << endl
         << "Press 4 to go back" << endl;
    addDeleCha(vec);
}
void Information::choiceSort(vector<Scientist>& vec){
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for ascending order A-Z " << endl
         << "Press 2 for descending order Z-A " << endl
         << "Press 3 to order by birth year (ascending)" << endl
         << "Press 4 to order by birth year (descending)" << endl
         << "Press 5 to arrange by gender" << endl
         << "Press 6 to go back "  << endl;
    order(vec);
}
void Information::choiceSearch(vector<Scientist>& vec){
    cout << "What do you want to search for ?" << endl
         << "Press 1 if you want to search for name" << endl
         << "Press 2 if you want to search for a certain year" << endl
         << "Press 3 if you want to look for specific achievement" << endl
         << "Press 4 if you want to go back " << endl;
    search(vec);
}

void Information::addDeleCha(vector<Scientist>& vec){
    Service serv;
    int number;
    string nameToDelete = "";
    cin >> number;
    switch (number) {
        case 1:{
            addScientist(vec); //TODO: Eyða þessu og bæta við serv.addScientist(vec)!!
            cout << endl << "--Scientist added to database!--" << endl;
            instructions(vec);
            break;}
        case 2:
            cout << "Enter the full name of a scientist to remove:" << endl;
            cin.ignore(4, '\n');
            getline(cin, nameToDelete);
            serv.deleteScientist(vec, nameToDelete);
            cout << nameToDelete << " has now been removed." << endl;
            break;
        case 3:
            //TODO: kalla á edit fallið
            break;
        case 4:
            instructions(vec);
            break;
        default:
            cout << "This is invalid choice! " << endl;
            addDeleCha(vec);
            break;
        }
    }

void Information::order(vector<Scientist> vec)
{
    Service serv;
    int number;
    vector<string> temp;
    cin >> number;
    switch (number) {
    case 1:
        cout << "List sorted ascendingly by name:" << endl;
        temp = serv.sortVector(vec, false, 1);
        matchName(vec, temp);
        break;
    case 2:
        cout << "List sorted descendingly by name:" << endl;
        temp = serv.sortVector(vec, true, 2);
        matchName(vec, temp);
        break;
    case 3:
        cout << "List sorted ascendingly by year of birth:" << endl;
        temp = serv.sortVector(vec, false, 3);
        matchYob(vec, temp);
        break;
    case 4:
        cout << "List sorted descendingly by year of birth:" << endl;
        temp = serv.sortVector(vec, true, 4);
        matchYob(vec, temp);
        break;
    case 5:
        temp = serv.sortVector(vec, NULL, 5);
        matchGender(vec, temp);
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
void Information::search(vector<Scientist>& vec)
{
    Service serv;
    int number;
    vector<string> temp;
    string searchStr;
    cin >> number;
    switch (number) {
    case 1:
        cout << "Enter a search string: " << endl;
        cin >> searchStr;
        cout << "Search results: " << endl;
        temp = serv.searchByName(vec, searchStr);
        matchName(vec, temp);
        break;
    case 2:
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

void Information::addScientist(vector<Scientist>& vec){
    Service serv;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in ‘0’ in 'Year of death'" << endl;

    serv.addScientist(vec);
}


void Information::displayAll(vector<Scientist> vec){
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i];
        cout << endl;}
}
/*
void Information::displaySearch(Service serv){ Kommentað út í bili
    for(unsigned int i = 0; i < serv.SearchVec.size(); i++)
        cout << serv.SearchVec[i];
}
*/

void Information::matchName(vector<Scientist> sc, vector<string> str)
{
    for(size_t i = 0; i < str.size(); i++)
    {
        for (size_t j = 0; j < sc.size(); j++)
        {
            size_t found = str[i].find(sc[j].getName());
            if (found != -1)
            {
                cout << sc[j] << endl;
            }
        }
    }
}

void Information::matchYob(vector<Scientist> sc, vector<string> str)
{
    for(size_t i = 0; i < str.size(); i++)
    {
        for (size_t j = 0; j < sc.size(); j++)
        {
            size_t found = str[i].find(sc[j].getYob());
            if (found != -1)
            {
                cout << sc[j] << endl;
            }
        }
    }
}

void Information::matchGender(vector<Scientist> sc, vector<string> str)
{
    for(size_t i = 0; i < str.size(); i++)
    {
        for (size_t j = 0; j < sc.size(); j++)
        {
            size_t found = str[i].find(sc[j].getYob());
            if (found != -1)
            {
                cout << sc[j] << endl;
            }
        }
    }
}
