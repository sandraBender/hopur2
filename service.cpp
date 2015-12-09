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

// sorts the list of computers
vector<Computer> Service::sortCom(char number)
{
    database data;
    vector<Computer> vec = data.sortCom(number);
    return vec;
}

// sorts the list of scientists
vector<Scientist> Service::sortSci(char number)
{
    database data;
    vector<Scientist> vec = data.sortSci(number);
    return vec;
}

vector<Computer> Service::searchCom(string searchStr ,char number){
    database data;
    vector<Computer> vec = data.searchCom(searchStr, number);
    return vec;
}

vector<Scientist> Service::searchSci(string searchStr ,char number){
    database data;
    vector<Scientist> vec = data.searchSci(searchStr, number);
    return vec;
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

void Service::addDeleteLink(string scientist, string computer, char number)
{
    database db;
    if(number == '1')
    {
        db.addDeleteLink(scientist, computer, number);
    }
     else if(number == '2')
    {
        db.addDeleteLink(scientist, computer, number);
    }
}

vector<string> Service::getRelations()
{
    database data;
    vector<string> vec;
    vec = data.getRelations();
    return vec;
}