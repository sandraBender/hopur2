#include "information.h"

Information::Information()
{

}
//This function print out the opening instructions
void Information::displayOpening()
{
    cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl
         << "- - - - - - - - - - - - - - Welcome - - - - - - - - - - - - - - -" << endl
         << "  This program keeps information about computers or  scientists " << endl
         << "              You can add  or remove from the lists" << endl
         << "   You can change the order in which the lists is diplayed" << endl
         << "         You can link computer and scientist together"
         << "             And you can search through the list  " << endl;
    compSciOrLink();
}
void Information::compSciOrLink()
{
    cout << endl << "Do you want to work with computers, scientists og link them together? " << endl
         << "Press 1 for computer " << endl
         << "Press 2 for Scientist " << endl
         << "Press 3 for linking " << endl;
    compSciOrLinkChoice();
}
void Information::compSciOrLinkChoice()
{
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':
        instructions();
        break;
    case '2':
        instructions();
        choices();
        break;
    case '3':
        //kallar á linking fallið
        break;
    default:{
        cout << "This is invalid choice!! " << endl;
        compSciOrLink();
        break;}
    }

}

 // This function askes for the first choices
void Information::instructions()
{
    cout << endl << "What do you want to do? " << endl
         << "Press 1 to make changes to the list." << endl
         << "Press 2 to display the list." << endl
         << "Press 3 to search." << endl
         << "Press 4 to quit and save."<< endl;
}


// let the user pick the choices and calls the next function
void Information::choices()
{
    //vector<Scientist> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':
        choiceChange();
        break;
    case'2':
        choiceSort();
        break;
    case'3':
        choiceSearch();
        break;
    case'4':
        {
        //writeFile(vec);
            return;
        }
    default:{
        cout << "This is invalid choice!! " << endl;
        choices();
        break;}
    }
}


// If the users wants to change something this function askes what kind of change
void Information::choiceChange()
{
    cout << "Here you can add or remove from the list." << endl
         << "Press 1 to add a person." << endl
         << "Press 2 to delete." << endl
         << "Press 3 to go back." << endl;
    addDelete();
}


// If the user wants to see the hole list, this function askes in what way
void Information::choiceSort()
{
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for alphabetical order A-Z." << endl
         << "Press 2 for reverse alphabetical order Z-A." << endl
         << "Press 3 to order by birth year (ascending)." << endl
         << "Press 4 to order by birth year (descending)." << endl
         << "Press 5 to arrange by gender." << endl
         << "Press 6 to go back."  << endl;
    order();
}


// If the user wants to search for something this function askes what to search for
void Information::choiceSearch()
{
    cout << "What do you want to search for?" << endl
         << "Press 1 to search by name." << endl
         << "Press 2 to search by birth year." << endl
         << "Press 3 to search by gender." << endl
         << "Press 4 if you want to go back." << endl;
    search();
}


// If the user wants to add, delete og change anything he pickes one here
void Information::addDelete()
{
    Service serv;
    char number;
    string nameToDelete = "";
    string table = "Scientists";
    cin >> number;
    cout << endl;
    switch (number) {
        case'1':{
            addScientist();
            cout << endl << "--Scientist added to database!--" << endl;
            compSciOrLink();
            break;}
        case'2':{
            cout << "Enter the full name of a scientist to remove:" << endl;
            cin.ignore();
            getline(cin,nameToDelete);
            cout << "Are you sure you want to delete this Scientist (This can not be undone) (y/n)?" << endl;
                    char choice;
                    cin >> choice;
                    if(choice == 'y'){
                        serv.deleteScientist(table, nameToDelete);
                        cout << nameToDelete << " has now been removed." << endl;}
                    else
                        choiceChange();
            compSciOrLink();
            break;}
        case'3':
            choiceChange();
            break;
        default:
            cout << "This is invalid choice! Please try again!" << endl;
            addDelete();
            break;
    }
}


// If the user wants to sort the list he tells the program in what kind of way here.
void Information::order()
{
    Service serv;
    vector<Scientist> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "List sorted in alphabetical order:" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY name";
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':
        cout << "List sorted in reverse alphabetical order:" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY name DESC";
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;
    case'3':
        cout << "List sorted ascendingly by year of birth:" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth, name";
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;
    case'4':
        cout << "List sorted descendingly by year of birth:" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth DESC, name";
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;
    case'5':
        cout << "List sorted by gender (Female first):" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY gender, name";
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;
    case'6':
        instructions();
        choices();
        break;
    default:
        cout << "This is invalid choice " << endl;
        order();
        break;
    }
}


//If the user wants to search for something, he pickes the way here
void Information::search()
{
    Service serv;
    vector<Scientist> vec;
    char number;
    string searchStr;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "Enter a name to search for: " << endl;
        cin.ignore();
        getline(cin,searchStr);
        command = "SELECT * FROM Scientists WHERE name LIKE '%" + searchStr + "%'";
        cout << endl << "Search results: " << endl << endl;
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':{
        cout << "Enter a year of birth to search for: " << endl;
        cin >> searchStr;
        command = "SELECT * FROM Scientists WHERE YearOfBirth LIKE '%" + searchStr + "%'";
        cout << endl << "Search results: " << endl << endl;
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'3':{
        cout << "Enter either 'M' or 'F' to search by gender:" << endl;
        cin >> searchStr;
        command = "SELECT * FROM Scientists WHERE gender LIKE " + searchStr;
        cout << endl << "Search results: " << endl << endl;
        serv.sort(vec, command);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'4':
        compSciOrLink();
        break;
    default:
        cout << endl << "This is invalid choice!" << endl;
        search();
        break;
    }
}


// gives the instructions about adding a scientist
void Information::addScientist()
{
    Service serv;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in '0' in 'Year of death'" << endl;
    cout << "In gender, enter 'M' for male or 'F' for female"<< endl;

    
    string name, gender, yod, yob;
    const string alive = "0";

    cout << "Name: ";
    cin.ignore();
    getline(cin,name);



    cout << "Year of birth: ";
    cin >> yob;
    

    cout << "Year of death: ";
    cin >> yod;
 

    cout << "Gender: ";
    cin >> gender;
        if(gender == "m")
            gender = "M";
        else if(gender == "f")
            gender = "F";
    
    
    serv.addScientist(name, yob, yod, gender);
}

// Prints out the scientists
void Information::displayAll(vector<Scientist> vec)
{
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}