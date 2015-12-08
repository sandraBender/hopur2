#include "service.h"

Service::Service()
{

}
//adds scientists to the list
void Service::addScientist(string name, string yob, string yod, string gender)
{   
    database data;
    data.editData(name, yob, yod, gender);
}
void Service::addComputer(string name, string buildYear, string builtOrNot, string type)
{
    database data;
    data.editDataComp(name, buildYear, builtOrNot, type);
}

// sorts the list
void Service::sort(vector<Scientist>& vec, char number)
{
    database data;
    data.sortSci(vec, number);
}

void Service::sort(vector<Computer>& vec, char number)
{
    database data;
    data.sortCom(vec, number);
}
void Service::search(vector<Scientist>& vec, string searchStr ,char number){
    database data;
    data.searchSci(vec, searchStr, number);
}
void Service::search(vector<Computer>& vec, string searchStr ,char number){
    database data;
    data.searchCom(vec, searchStr, number);
}

// delete scientist from the list
void Service::deleteData(char number, string name)
{
    database data;
    data.deleteSC(number, name);
}

bool Service::connect()
{
    database data;
    return data.getDatabase();


}
bool Service::disconnect()
{
    database data;
    return data.closeDatabase();
}



