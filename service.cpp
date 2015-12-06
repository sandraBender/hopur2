#include "service.h"

Service::Service()
{

}
//adds scientists to the list
void Service::addScientist(QString name, QString yob, QString yod, QString gender)
{   
    QString command = "INSERT INTO Scientists (Name, YearOfBirth, YearOfDeath, Gender) VALUES ('" + name + "'," + yob + "," + yod + ",'" + gender + "')";
    database data;
    data.addData(command);
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

