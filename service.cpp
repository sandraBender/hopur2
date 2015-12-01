#include "service.h"

Service::Service()
{

}
// adds scientists to the list
void Service::addScientist(vector<Scientist>& vec)
{
    string tempYod, tempName, tempYob, tempGender;
    string alive = "0";

    cout << "Name: ";
    cin.ignore();
    getline(cin, tempName);

    cout << "Year of birth: ";
    cin >> tempYob;

    cout << "Year of death: ";
    cin >> tempYod;
        if(tempYod == alive)
            tempYod = "Alive";

    cout << "Gender: ";
    cin >> tempGender;
        if(tempGender == "m")
            tempGender = "M";
        else if(tempGender == "f")
                    tempGender = "F";


    Scientist temp(tempName,tempYob, tempYod, tempGender);

    vec.push_back(temp);
}
// print out the scientists
void Service::displayAll(vector<Scientist> vec)
{
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}
// sorts the list
vector<string> Service::sortVector(vector<Scientist> vec, bool desc, int typeOfSort)
{
    vector<string> temp;
    if (typeOfSort == 1 || typeOfSort == 2)
    {
        for(size_t i = 0; i < vec.size(); i++) {
            temp.push_back(vec[i].getName());
        }
        sort(temp.begin(), temp.end());
        if (desc)
        {
            reverse(temp.begin(), temp.end());
        }
    }
    else if (typeOfSort == 3 || typeOfSort == 4)
    {
        for(size_t i = 0; i < vec.size(); i++) {
            temp.push_back(vec[i].getYob());
        }
        sort(temp.begin(), temp.end());
        if (desc)
        {
            reverse(temp.begin(), temp.end());
        }
    }
    else if (typeOfSort == 5)
    {
        for(size_t i = 0; i < vec.size(); i++) {
            temp.push_back(vec[i].getGender());
        }
        sort(temp.begin(), temp.end());
        if (desc)
        {
            reverse(temp.begin(), temp.end());
        }
    }
    return temp;
}
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
