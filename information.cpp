#include "information.h"

Information::Information()
{

}
//This function print out the opening instructions
void Information::displayOpening(){
    cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl
         << "- - - - - - - - - - - - - - Welcome - - - - - - - - - - - - - - -" << endl
         << "  This program keeps information about computers or  scientists " << endl
         << "              You can add  or remove from the lists" << endl
         << "   You can change the order in which the lists is diplayed" << endl
         << "         You can link computer and scientist together"
         << "             And you can search through the list  " << endl;
    compSciOrLink();
}
void Information::compSciOrLink(){
    cout << endl << "Do you want to work with computers, scientists og link them together? " << endl
         << "Press 1 for computer " << endl
         << "Press 2 for Scientist " << endl
         << "Press 3 for linking " << endl;
    compSciOrLinkChoice();
}
void Information::compSciOrLinkChoice(){
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
void Information::instructions(){
    cout << endl << "What do you want to do? " << endl
         << "Press 1 to make changes to the list." << endl
         << "Press 2 to display the list." << endl
         << "Press 3 to search." << endl
         << "Press 4 to quit and save."<< endl;
}


// let the user pick the choices and calls the next function
void Information::choices(){
    vector<Scientist> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':
        choiceChange(vec);
        break;
    case'2':
        choiceSort(vec);
        break;
    case'3':
        choiceSearch(vec);
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
void Information::choiceChange(vector<Scientist>& vec){
    cout << "Here you can add or remove from the list." << endl
         << "Press 1 to add a person." << endl
         << "Press 2 to delete." << endl
         << "Press 3 to go back." << endl;
    addDelete(vec);
}


// If the user wants to see the hole list, this function askes in what way
void Information::choiceSort(vector<Scientist>& vec){
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for alphabetical order A-Z." << endl
         << "Press 2 for reverse alphabetical order Z-A." << endl
         << "Press 3 to order by birth year (ascending)." << endl
         << "Press 4 to order by birth year (descending)." << endl
         << "Press 5 to arrange by gender." << endl
         << "Press 6 to go back."  << endl;
    order(vec);
}


// If the user wants to search for something this function askes what to search for
void Information::choiceSearch(vector<Scientist>& vec){
    cout << "What do you want to search for?" << endl
         << "Press 1 to search by name." << endl
         << "Press 2 to search by birth year." << endl
         << "Press 3 to search by gender." << endl
         << "Press 4 if you want to go back." << endl;
    search(vec);
}


// If the user wants to add, delete og change anything he pickes one here
void Information::addDelete(vector<Scientist>& vec){
    Service serv;
    char number;
    string nameToDelete = "";
    cin >> number;
    cout << endl;
    switch (number) {
        case'1':{
            addScientist();
            cout << endl << "--Scientist added to database!--" << endl;
            compSciOrLink();
            break;}
        case'2':
            cout << "Enter the full name of a scientist to remove:" << endl;
            cin.ignore(4, '\n');
            getline(cin, nameToDelete);
            //serv.deleteScientist(vec, nameToDelete);
            cout << nameToDelete << " has now been removed." << endl;
            instructions();
            break;
        case'3':
            instructions();
            break;
        default:
            cout << "This is invalid choice! Please try again!" << endl;
            addDelete(vec);
            break;
        }
    }


// If the user wants to sort the list he tells the program in what kind of way here.
void Information::order(vector<Scientist> vec)
{
    Service serv;

    char number;
    vector<string> temp;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "List sorted in alphabetical order:" << endl;
        command = "SELECT * FROM Scientists ORDER BY name";
        serv.sort(vec, command);
        compSciOrLink();
        break;}
    case'2':
        cout << "List sorted in reverse alphabetical order:" << endl;
        command = "SELECT * FROM Scientists ORDER BY name DESC";
        serv.sort(vec, command);
        compSciOrLink();
        break;
    case'3':
        cout << "List sorted ascendingly by year of birth:" << endl;
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth, name";
        serv.sort(vec, command);
        compSciOrLink();
        break;
    case'4':
        cout << "List sorted descendingly by year of birth:" << endl;
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth DESC, name";
        serv.sort(vec, command);
        compSciOrLink();
        break;
    case'5':
        cout << "List sorted by gender (Female first):" << endl;
        command = "SELECT * FROM Scientists ORDER BY gender, name";
        serv.sort(vec, command);
        compSciOrLink();
        break;
    case'6':
        compSciOrLink();
        break;
    default:
        cout << "This is invalid choice " << endl;
        order(vec);
        break;
    }
}


//If the user wants to search for something, he pickes the way here
void Information::search(vector<Scientist> vec)
{
    QTextStream qtin(stdin);
    Service serv;
    char number;
    QString searchStr;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "Enter a name to search for: " << endl;
        qtin >> searchStr;
        command = "SELECT * FROM Scientists WHERE name LIKE '%" + searchStr + "%'";
        cout << endl << "Search results: " << endl;
        serv.sort(vec, command);
        compSciOrLink();
        break;}
    case'2':{
        cout << "Enter a year of birth to search for: " << endl;
        qtin >> searchStr;
        command = "SELECT * FROM Scientists WHERE YearOfBirth LIKE '%" + searchStr + "%'";
        cout << endl << "Search results: " << endl;
        serv.sort(vec, command);
        compSciOrLink();
        break;}
    case'3':{
        cout << "Enter either 'M' or 'F' to search by gender:" << endl;
        qtin >> searchStr;
        command = "SELECT * FROM Scientists WHERE gender LIKE " + searchStr;
        cout << endl << "Search results: " << endl;
        serv.sort(vec, command);
        compSciOrLink();
        break;}
    case'4':
        compSciOrLink();
        break;
    default:
        cout << endl << "This is invalid choice!" << endl;
        search(vec);
        break;
    }

}


// gives the instructions about adding a scientist
void Information::addScientist(){
    Service serv;
    cout << "Enter information about the computer scientist whom you wish to add" << endl;
    cout << "If he/she is still alive put in '0' in 'Year of death'" << endl;
    cout << "In gender, enter 'M' for male or 'F' for female"<< endl;
    
    QTextStream qtin(stdin);
    
    QString name, gender, yod, yob;
    const string alive = "0";

    cout << "Name: ";
    cin.ignore();
    qtin >> name;


    cout << "Year of birth: ";
    qtin >> yob;
    

    cout << "Year of death: ";
    qtin >> yod;
 

    cout << "Gender: ";
    qtin >> gender;
        if(gender == "m")
            gender = "M";
        else if(gender == "f")
            gender = "F";
    
    
    serv.addScientist(name, yob, yod, gender);
}

// Prints out the scientists
void Information::displayAll(vector<Scientist> vec){
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i];
        cout << endl;}
}


