#include "database.h"


database::database()
{

}
//This function accesses the database
void database::getDatabase()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "database.sqlite";
        db.setDatabaseName(dbName);

    db.open();
    if (!db.open())  {
        cout << "Error, database was not opened!";
    }
}




void database::createSciVec(vector<Scientist>& vec, QString command)
{
    QSqlQueryModel model;
    model.setQuery(command);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yob = model.record(i).value("YearOfBirth").toInt();
         int yod = model.record(i).value("YearOfDeath").toInt();
         string gender = model.record(i).value("Gender").toString().toUtf8().constData();
         Scientist temp(name, yob, yod, gender);
         vec.push_back(temp);
    }

}

void database::createCompVec(vector<Computer>& vec, QString command)
{
    QSqlQueryModel model;
    model.setQuery(command);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yearBuilt = model.record(i).value("BuildYear").toInt();
         bool built  = model.record(i).value("BuiltOrNot").toBool();
         string type = model.record(i).value("Type").toString().toUtf8().constData();
         Computer temp(name, yearBuilt, built, type);
         vec.push_back(temp);
    }
}

void database::editData(string name, string yob, string yod, string gender)
{
    QSqlQuery query;
    string command1 = "INSERT INTO Scientists (Name, YearOfBirth, YearOfDeath, Gender) VALUES ('" + name + "'," + yob + "," + yod + ",'" + gender + "')";
    QString command = QString::fromStdString(command1);
    query.exec(command);

}
void database::editDataComp(string name, string buildYear, string builtOrNot, string type)
{
    QSqlQuery query;
    string command1 = "INSERT INTO Computers (Name, BuildYear, builtOrNot, Type) VALUES ('" + name + "','" + buildYear + "','" + builtOrNot + "','" + type + "')";
    QString command = QString::fromStdString(command1);
    query.exec(command);
}

void database::closeData(){

    QSqlDatabase db;
    db.close();
}
void database::sortSci(vector<Scientist>& vec, char number){
    QString command;
    switch (number) {
    case '1':
        command = "SELECT * FROM Scientists ORDER BY name";
        createSciVec(vec, command);
        break;
    case '2':
        command = "SELECT * FROM Scientists ORDER BY name DESC";
        createSciVec(vec, command);
        break;
    case '3':
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth ASC, name";
        createSciVec(vec, command);
        break;
    case '4':
        command = "SELECT * FROM Scientists ORDER BY YearOfBirth DESC, name";
        createSciVec(vec, command);
        break;
    case '5':
        command = "SELECT * FROM Scientists ORDER BY gender, name";
        createSciVec(vec, command);
        break;
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
}
void database::sortCom(vector<Computer>& vec, char number){
    QString command;
    switch (number) {
    case '1':
        command = "SELECT * FROM Computers ORDER BY name ASC";
        createCompVec(vec, command);
        break;
    case '2':
        command = command = "SELECT * FROM Computers ORDER BY name DESC";;
        createCompVec(vec, command);
        break;
    case '3':
        command = command = "SELECT * FROM Computers ORDER BY BuildYear ASC, name";
        createCompVec(vec, command);
        break;
    case '4':
        command = "SELECT * FROM Computers ORDER BY BuildYear DESC, name";
        createCompVec(vec, command);
        break;
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
}
void database::searchSci(vector<Scientist>& vec, string searchStr ,char number){
    QString command;

    switch (number) {
    case '1':{
        string temp = "SELECT * FROM Scientists WHERE name LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        createSciVec(vec, command);}
        break;
    case '2':{
        string temp = "SELECT * FROM Scientists WHERE YearOfBirth LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        createSciVec(vec, command);}
        break;
    case '3':{
        string temp = "SELECT * FROM Scientists WHERE gender LIKE " + searchStr;
        command = QString::fromStdString(temp);
        createSciVec(vec, command);
        break;}
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
}
void database::searchCom(vector<Computer>& vec, string searchStr ,char number){
    QString command;
    switch (number) {
    case '1':{
        string temp = "SELECT * FROM Computers WHERE name LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        createCompVec(vec, command);
        break;}
    case '2':{
        string temp = "SELECT * FROM Computers WHERE buildYear LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        createCompVec(vec, command);
        break;}
    case '3':{
        string temp = "SELECT * FROM Computers WHERE type LIKE '%" + searchStr + "%'";
        command = QString::fromStdString(temp);
        createCompVec(vec, command);
        break;}
    default:
        cout << "Nothing happend!! " << endl;
        break;
    }
}
void database::deleteSC(char number, string name){
    QSqlQuery query;
    QString command;
    if (number == '1'){
        string temp = "DELETE FROM Scientists WHERE Name = '" + name + "'";
        command = QString::fromStdString(temp);
    }
    if (number == '2'){
        string temp = "DELETE FROM Computers WHERE Name = '" + name + "'";
        command = QString::fromStdString(temp);
    }
    query.exec(command);
}
