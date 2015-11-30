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
}

void Service::search(string searchCondition)
{
    vector<int> num;
        for(unsigned int i = 0; i < SciVec.size(); i++){
            if(searchCondition == SciVec[i].getName() ){
                SearchVec.push_back(SciVec[i]);
                num.push_back(i);}} //Ef ad notandi vill eyda/breyta heldur utan um numer vis. i vec


}
*/
void Service::displayAll(vector<Scientist> vec)
{
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}

vector<string> Service::sortNameAsc(vector<Scientist> vec, bool desc)
{
    vector<string> temp;
    for(size_t i = 0; i < vec.size(); i++) {
        temp[i] = vec[i].getName();
    }

    sort(temp.begin(), temp.end());
    if (desc)
    {
        reverse(temp.begin(), temp.end());
    }
    return temp;
}
