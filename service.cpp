#include "service.h"

Service::Service()
{

}

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


    Scientist temp(tempName,tempYob, tempYod, tempGender);

    vec.push_back(temp);
}
/*Scientist Service::getScientist(int num)
{
    return SciVec[num];
}*/

void Service::displayAll(vector<Scientist> vec)
{
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

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

vector<string> Service::searchByName(vector<Scientist> vec, string searchStr)
{
    vector<string> temp;
    for(size_t i = 0; i < vec.size(); i++)
    {
        size_t found = vec[i].getName().find(searchStr);
        if (found != -1)
        {
            temp.push_back(vec[i].getName());
        }
    }
    return temp;
}
