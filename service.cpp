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
void Service::addComputer(string name, string buildYear, string type)
{
    string command = "INSERT INTO Computers (Name, BuildYear, Type) VALUES ('" + name + "'," + buildYear + "," + type + "')";
    database data;
    data.editData(command);
}


/*// print out the scientists --------------> Information á að sjá um cout
void Service::displayAll(vector<Scientist> vec)
{
    cout << endl;
    for(unsigned int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }
}*/

// sorts the list
void Service::sort(vector<Scientist>& vec, string command) //Setja if-setningu til ad vilja a milli sci og comp
{
    database data;
    data.createSciVec(vec, command);
    //displayAll(vec);
}

// delete scientist from the list
void Service::deleteData(string table, string name)
{
    string command = "DELETE FROM " + table +" WHERE name = '" + name + "'";
    database data;
    data.editData(command);
}

/*

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

