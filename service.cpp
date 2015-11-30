#include "service.h"
#include <vector>

Service::Service()
{
    //database data;

    //vector<Scientist> SciVec = data.readFile();
}

/*void Service::addScientist(vector<Scientist>& vec)
{
    string tempYod, tempName, tempYob, tempGender;
    string alive = "x";
    string veryalive = "X";

    cout << "Name: ";
    cin.ignore();
    getline(cin, tempName);

    cout << "Year of birth: ";
    cin >> tempYob;

    cout << "Year of death: ";
    cin >> tempYod;
        if(tempYod == alive || tempYod == veryalive)
            tempYod = "Alive";

    cout << "Gender: ";
    cin >> tempGender;


    Scientist temp(tempName,tempYob, tempYod, tempGender);

    vec.push_back(temp);
}
Scientist Service::getScientist(int num)
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
