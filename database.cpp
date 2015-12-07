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
    getDatabase();
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

    QSqlDatabase db;
    db.close();
}

void database::createCompVec(vector<Computer>& vec, QString command)
{
    QSqlQueryModel model;
    model.setQuery(command);

    for (int i = 0; i < model.rowCount(); ++i) {
         /*string name = model.record(i).value("Name").toString();
         int yob = model.record(i).value("BuildYear").toInt();
         QString type = model.record(i).value("Type").toString();
         Computer temp(name, yob, yod, gender);
         vec.push_back(temp);*/
    }
    QSqlDatabase db;
    db.close();
}

void database::editData(QString command)
{
    getDatabase();
    QSqlQuery query;
    query.exec(command);
    QSqlDatabase db;
    db.close();

}

//query.exec("SELECT * FROM Scientists");

/*for(unsigned int i = 0; i <  )
    while (query.next()) {
            temp[] = query.value(1).toString();
            int yob = query.value(2).toInt();
            int yod = query.value(3).toInt();
            QString gender = query.value(4).toString();

            qDebug() << name << yob << yod << gender;}*/



