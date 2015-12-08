#include "service.h"

Service::Service()
{

}
//adds scientists to the list
void Service::addScientist(string name, string yob, string yod, string gender)
{   
    string command = "INSERT INTO Scientists (Name, YearOfBirth, YearOfDeath, Gender) VALUES ('" + name + "'," + yob + "," + yod + ",'" + gender + "')";
    database data;
    data.editData(command);
}
void Service::addComputer(string name, string buildYear, string builtOrNot, string type)
{
    string command = "INSERT INTO Computers (Name, BuildYear, builtOrNot, Type) VALUES ('" + name + "','" + buildYear + "','" + builtOrNot + "','" + type + "')";
    database data;
    data.editData(command);
}

// sorts the list
void Service::sort(vector<Scientist>& vec, string command)
{
    database data;
    data.createSciVec(vec, command);
    //displayAll(vec);
}

void Service::sort(vector<Computer>& vec, string command)
{
    database data;
    data.createCompVec(vec, command);

}

// delete scientist from the list
void Service::deleteData(string table, string name)
{
    string command = "DELETE FROM " + table +" WHERE Name = '" + name + "'";
    database data;
    data.editData(command);
}
