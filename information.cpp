#include "information.h"

Information::Information()
{

}
//This function print out the opening instructions
void Information::displayOpening()
{
    //opnun á database
    Service serv;
    bool connect = 0;
    connect = serv.connect();
    if (!connect)
    {
        cout << "Error database not opened!";
        exit(0);
    }

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
         << "Press 3 for linking " << endl
         << "Press 4 if you want to quit" << endl;
    compSciOrLinkChoice();
}
void Information::compSciOrLinkChoice()
{
    Service serv;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':
        instructions();
        choices(number);
        break;
    case '2':
        instructions();
        choices(number); //scientis
        break;
    case '3':
        //kallar á linking fallið
        cout << "Has not been made.....yet >:-)";
        compSciOrLink();
        break;
   case '4':
        //serv.disconnect();
        displayClosing();
        exit(0);

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
         << "Press 3 to search." << endl;
}


// let the user pick the choices and calls the next function
void Information::choices(char num)         //        1 == computer
{
    //vector<Scientist> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':
        if (num == '1')
            choiceChangeComp();
        else if (num == '2')
            choiceChangeSci();
        break;
    case'2':
        if (num == '1')
            choiceSort(num);
        else if (num == '2')
            choiceSort(num);

        break;
    case'3':
        if (num == '1')
            choiceSearch(num);
        else if (num == '2')
            choiceSearch(num);

        break;
    default:{
        cout << "This is invalid choice!! " << endl;
        choices(num);
        break;}
    }
}


// If the users wants to change something this function askes what kind of change
void Information::choiceChangeSci()
{
    cout << "Here you can add or remove from the list." << endl
         << "Press 1 to add a person." << endl
         << "Press 2 to delete a person." << endl
         << "Press 3 to go back." << endl;
    addDeleteSci();
}

void Information::choiceChangeComp()
{
    cout << "Here you can add or remove from the list." << endl
         << "Press 1 to add a computer." << endl
         << "Press 2 to delete a computer." << endl
         << "Press 3 to go back." << endl;
    addDeleteComp();   // gera fall fyrir computer
}


// If the user wants to see the hole list, this function askes in what way
void Information::choiceSort(char number)
{
    if (number == '2'){
    cout << "How do you want the list to be displayed?" << endl
         << "Press 1 for alphabetical order A-Z." << endl
         << "Press 2 for reverse alphabetical order Z-A." << endl
         << "Press 3 to order by birth year (ascending)." << endl
         << "Press 4 to order by birth year (descending)." << endl
         << "Press 5 to arrange by gender." << endl
         << "Press 6 to go back."  << endl;
         orderSci();
    }
    else if (number == '1'){
        cout << "How do you want the list to be displayed?" << endl
             << "Press 1 for alphabetical order A-Z." << endl
             << "Press 2 for reverse alphabetical order Z-A." << endl
             << "Press 3 to order by build year (ascending)." << endl
             << "Press 4 to order by build year (descending)." << endl
             << "Press 5 to go back."  << endl;
              orderComp();
        }
}


// If the user wants to search for something this function askes what to search for
void Information::choiceSearch(char number)
{
    if (number == '1')
    {
        cout << "What do you want to search for?" << endl
         << "Press 1 to search by name." << endl
         << "Press 2 to search by build year." << endl
         << "Press 3 to search by type." << endl
        << "Press 4 if you want to go back." << endl;
        searchComp();
    }
    else if (number == '2')
    {
        cout << "What do you want to search for?" << endl
         << "Press 1 to search by name." << endl
         << "Press 2 to search by birth year." << endl
         << "Press 3 to search by gender." << endl
         << "Press 4 if you want to go back." << endl;
        searchSci();
    }
}


// If the user wants to add, delete og change anything he pickes one here
void Information::addDeleteSci()
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
            deleteStuff(1);
            compSciOrLink();
            break;}
        case'3':
            compSciOrLink();
            break;
        default:
            cout << "This is invalid choice! Please try again!" << endl;
            addDeleteSci();
            break;
    }
}

void Information::addDeleteComp()
{
    Service serv;
    char number;
    string nameToDelete = "";
    string table = "Computers";
    cin >> number;
    cout << endl;
    switch (number) {
        case'1':{
            addComputer();
            cout << endl << "--Computer added to database!--" << endl;
            compSciOrLink();
            break;}
        case'2':{
            deleteStuff(2);
            compSciOrLink();
            break;}
        case'3':
            compSciOrLink();
            break;
        default:
            cout << "This is invalid choice! Please try again!" << endl;
            addDeleteSci();
            break;
 }
}

// If the user wants to sort the list he tells the program in what kind of way here.
void Information::orderSci()
{
    Service serv;
    vector<Scientist> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "List sorted in alphabetical order:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':
        cout << "List sorted in reverse alphabetical order:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'3':
        cout << "List sorted ascendingly by year of birth:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'4':
        cout << "List sorted descendingly by year of birth:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'5':
        cout << "List sorted by gender (Female first):" << endl << endl;
        command = "SELECT * FROM Scientists ORDER BY gender, name";
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'6':
        instructions();
        choices('2');
        break;
    default:
        cout << "This is invalid choice " << endl;
        orderSci();
        break;
    }
}

void Information::orderComp()
{
    Service serv;
    vector<Computer> vec;
    char number;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "List sorted in alphabetical order:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':
        cout << "List sorted in reverse alphabetical order:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'3':
        cout << "List sorted ascendingly by build year:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'4':
        cout << "List sorted descendingly by year of birth:" << endl << endl;
        serv.sort(vec, number);
        displayAll(vec);
        compSciOrLink();
        break;
    case'5':
        instructions();
        choices('1');
        break;
    default:
        cout << "This is invalid choice " << endl;
        orderComp();
        break;
    }
}

//If the user wants to search for something, he pickes the way here
void Information::searchSci()
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
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':{
        cout << "Enter a year of birth to search for: " << endl;
        cin >> searchStr;
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'3':{
        cout << "Enter either 'M' or 'F' to search by gender:" << endl;
        cin >> searchStr;
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'4':
        compSciOrLink();
        break;
    default:
        cout << endl << "This is invalid choice!" << endl;
        searchSci();
        break;
    }
}

void Information::searchComp()
{
    Service serv;
    vector<Computer> vec;
    char number;
    string searchStr;
    cin >> number;
    cout << endl;
    switch (number) {
    case'1':{
        cout << "Enter a Computer to search for: " << endl;
        cin.ignore();
        getline(cin,searchStr);
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'2':{
        cout << "Enter a buildyear to search for: " << endl;
        cin >> searchStr;
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'3':{
        cout << "Enter a type to search for: " << endl;
        cin >> searchStr;
        cout << endl << "Search results: " << endl << endl;
        serv.search(vec, searchStr, number);
        displayAll(vec);
        compSciOrLink();
        break;}
    case'4':
        compSciOrLink();
        break;
    default:
        cout << endl << "This is invalid choice!" << endl;
        searchSci();
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
void Information::addComputer()
{
    Service serv;
    cout << "Enter information about the computer that you wish to add" << endl;


    string name, toc, yearBuilt;
    char number;
    string built = "1";

    cout << "Name: ";
    cin.ignore();
    getline(cin,name);



    cout << "Year built (0 if not built):  ";
    cin >> yearBuilt;
    if (yearBuilt == "0")
          {
            built = "0";
          }



    cout << "Type of computer:  " << endl
         << "1. Electronical"<< endl
         << "2. Mechanical"<< endl
         << "3. Transitor"<< endl;
    do{
        cin >> number;
        toc = typeOfComputer(number);
        }   while (number != '1' & number != '2' & number != '3');

   serv.addComputer(name, yearBuilt, built, toc);
}

// Prints out the scientists
void Information::displayAll(vector<Scientist> vec)
{
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}
// Prints out the computers
void Information::displayAll(vector<Computer> vec)
{
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}
string Information::typeOfComputer(char choice)
{
    string type;
    switch (choice) {
        case'1':{
                    type = "Electronical";
            break;}
        case'2':{
                type = "Mechanical";
            break;}
        case'3':
                type = "Transitor";
            break;
        default:
            cout << "This is invalid choice! Please try again!" << endl;
            break;
    }
    return type;
}


void Information::deleteStuff(char number){
    vector<Scientist> SciVec;
    vector<Computer> CompVec;
    Service serv;
    string nameToDelete;
    char numToDelete;
    char choice;

    if(number == 1){
        cout << "Enter the name of a scientist to remove:" << endl;
        cin.ignore();
        getline(cin,nameToDelete);
        cout << endl << "Search results: " << endl << endl;
        serv.search(SciVec, nameToDelete, '1');
            if(SciVec.size() == 0){
                cout << "No matches" << endl;
                deleteStuff(number);}
        for(unsigned int i = 0; i < SciVec.size(); i++)
            cout << i+1 << endl << SciVec[i] << endl;
        cout << "Enter the number of the scientist you wish to remove: " << endl;
        cin >> numToDelete;
            if(numToDelete > SciVec.size()){
                cout << "That is an invalid choice" << endl;
                deleteStuff(number);}
        numToDelete--;

        nameToDelete = SciVec[numToDelete].getName();
        cout << "Are you sure you want to delete " << nameToDelete << " from the database?";
        cout << endl << "This can not be undone! (y/n)?" << endl;
                 cin >> choice;
                 if(choice == 'y'){
                     serv.deleteData(number, nameToDelete);
                     cout << nameToDelete << " has now been removed." << endl;
                 }
                 else
                     choiceChangeComp();
    }
    else{
        cout << "Enter the name of a computer to remove:" << endl;
        cin.ignore();
        getline(cin,nameToDelete);
        cout << endl << "Search results: " << endl << endl;
        serv.search(CompVec, nameToDelete, '1');
            if(CompVec.size() == 0){
                cout << "No matches" << endl;
                deleteStuff(number);}
        for(unsigned int i = 0; i < CompVec.size(); i++)
            cout << i+1 << endl << CompVec[i] << endl;
        cout << "Enter the number of the computer you wish to remove: " << endl;
        cin >> numToDelete;
            if(numToDelete > CompVec.size()){
                cout << "That is an invalid choice" <<  endl;
                deleteStuff(number);}
        numToDelete--;
        nameToDelete = CompVec[numToDelete].getName();
        cout << "Are you sure you want to delete " << nameToDelete << " from the database?";
        cout << endl << "This can not be undone! (y/n)?" << endl;
                 cin >> choice;
                 if(choice == 'y'){
                     serv.deleteData(number, nameToDelete);
                     cout << nameToDelete << " has now been removed." << endl;
                 }
                 else
                     choiceChangeComp();
        }
    }

void Information::displayClosing()
{
    Service serv;
    bool connected = 1;

    connected = serv.disconnect();
    if (!connected){
        cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl
             << "- - - - - -   Thank you for using this program   - - - - - - -" << endl
             << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl
            << "\t \t Database successfully closed!" << endl
            << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~" << endl;
    }
    exit (0);
}
