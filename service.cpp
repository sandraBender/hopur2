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

/*void Service::sortByName(vector<Scientist> vec, bool desc)
{
    Information info;
    vector<Scientist> temp;
    for(size_t i = 0; i < vec.size(); i++) {
        temp[i] = vec[i];
    }

    /*sort(temp.begin(), temp.end());
    if (desc)
    {
        reverse(temp.begin(), temp.end());
    }
    info.displayAll(temp);
}*/

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

void Service::searchByName(vector<Scientist> vec, string searchName)
{
    Information info;
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        if (vec[i].getName().find(searchName) == 0)
        {
            info.displayScientist(i, vec);
        }
    }
}
