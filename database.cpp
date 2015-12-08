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




void database::createSciVec(vector<Scientist>& vec, string command)
{
    QSqlQueryModel model;
    QString command1 = QString::fromStdString(command);
    model.setQuery(command1);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yob = model.record(i).value("YearOfBirth").toInt();
         int yod = model.record(i).value("YearOfDeath").toInt();
         string gender = model.record(i).value("Gender").toString().toUtf8().constData();
         Scientist temp(name, yob, yod, gender);
         vec.push_back(temp);
    }

}

void database::createCompVec(vector<Computer>& vec, string command)
{
    QSqlQueryModel model;
    QString command1 = QString::fromStdString(command);
    model.setQuery(command1);

    for (int i = 0; i < model.rowCount(); ++i) {
         string name = model.record(i).value("Name").toString().toUtf8().constData();
         int yearBuilt = model.record(i).value("BuildYear").toInt();
         bool built  = model.record(i).value("BuiltOrNot").toBool();
         string type = model.record(i).value("Type").toString().toUtf8().constData();
         Computer temp(name, yearBuilt, built, type);
         vec.push_back(temp);
    }
}

void database::editData(string command)
{
    QSqlQuery query;
    QString command1 = QString::fromStdString(command);
    query.exec(command1);


}

void database::closeData(){

    QSqlDatabase db;
    db.close();
}
