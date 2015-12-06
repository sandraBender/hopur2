#include "service.h"

Service::Service()
{

}
/*
// adds scientists to the list
void Service::addScientist(vector<Scientist>& vec)
{
    string tempYod, tempName, tempYob, tempGender;
    const string alive = "0";

    cout << "Name: ";
    //tempName = enterName();
    cin.ignore();
    getline(cin, tempName);


    cout << "Year of birth: ";
    tempYob = enterYear();

    cout << "Year of death: ";
    tempYod = enterYear();
        if(tempYod == alive)
            tempYod = "Alive";

    cout << "Gender: ";
    //tempGender = enterGender();
    cin >> tempGender;
        if(tempGender == "m")
            tempGender = "M";
        else if(tempGender == "f")
            tempGender = "F";


    Scientist temp(tempName,tempYob, tempYod, tempGender);

    vec.push_back(temp);
}
*/

// print out the scientists
void Service::displayAll(vector<Scientist> vec)
{
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

// sorts the list
void Service::sort(vector<Scientist>& vec, QString command)
{
    database data;
    data.createSciVec(vec, command);
    displayAll(vec);

}

/*
// delete scientist from the list
void Service::deleteScientist(vector<Scientist>& vec, string nameToDelete)
{
    for(size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i].getName().compare(nameToDelete) == 0)
        {
            vec.erase(vec.begin() + i);
            return;
        }
    }
}
// searches for a name
vector<string> Service::search(vector<Scientist> vec, string searchStr, int typeOfSearch)
{
    vector<string> temp;
    if (typeOfSearch == 1)
    {
        for(size_t i = 0; i < vec.size(); i++)
        {
            size_t found = vec[i].getName().find(searchStr);
            if (found != -1)
            {
                temp.push_back(vec[i].getName());
            }
        }
    }
    else if (typeOfSearch == 2)
    {
        for(size_t i = 0; i < vec.size(); i++)
        {
            size_t found = vec[i].getYob().find(searchStr);
            if (found != -1)
            {
                temp.push_back(vec[i].getYob());
            }
        }
    }
    else if (typeOfSearch == 3)
    {
        for(size_t i = 0; i < vec.size(); i++)
        {
            string age = static_cast<ostringstream*>( &(ostringstream() << vec[i].getAge()) )->str();
            size_t found = age.find(searchStr);
            if (found != -1)
            {
                temp.push_back(age);
            }
        }
    }
    else if (typeOfSearch == 4)
    {
        for(size_t i = 0; i < vec.size(); i++)
        {
            size_t found = vec[i].getGender().find(searchStr);
            if (found != -1)
            {
                temp.push_back(vec[i].getGender());
            }
        }
    }
    return temp;
}

string Service::enterName() // Fengum þetta ekki til að virka :(
{
    string tempName;
    bool notName = true;
    do
    {
        cin.ignore();
        getline(cin, tempName);

        for(unsigned int i=0; i<tempName.size();i++)
        {
            if((isalpha(tempName[i]) == 0) && tempName[i] == ' ')
            {
                notName = true;
                cout << "Only characters accepted, please try again:\n";
                break;
            }
            else
            {
               notName = false;
            }
        }
    }while(notName);

    return tempName;
}

string Service::enterYear()
{
    bool notYear = true;
    string tempYear;

    do
    {
        cin >> tempYear;

        for (unsigned int i=0; i<tempYear.size();i++)
        {
            if (isdigit(tempYear[i])==0)
            {
                notYear = true;
                cout << "Only digits accepted, please try again" << endl;
                break;
            }
            else
            {
                notYear = false;
            }
        }
    }while(notYear);

    //check for only 4 digits
    //check for dates in the future??

    return tempYear;
}

string Service::enterGender()
{
    bool notGender = true;
    string tempGender;
    do
    {
        cin >> tempGender;

        cout << tempGender;


            if ((tempGender != "M") || (tempGender != "F"))
            {
                notGender = true;
                cout << "Only 'F' or 'M' accepted, please try again" << endl;
                break;
            }
            else
            {
                notGender = false;
            }

    }while(notGender);

    return tempGender;
}
// reads the file
void Service::getData(vector<Scientist>& vec)
{
    database db;
    db.getDatabase();
    db.createSciVec();
}
// writes the file into the file
void Service::writeFile(vector<Scientist> vec)
{
    database db;
    //db.writeFile(vec);*/

