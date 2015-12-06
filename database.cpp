#include "database.h"


database::database()
{

}
//This function accesses the database
void database::getDatabase(){

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName = "database.sqlite";
        db.setDatabaseName(dbName);

    db.open();
    if (!db.open())  {
        cout << "Error, database was not opened!";
    }
}




void database::printList(QString command){


QSqlQuery query(command);

//query.exec("SELECT * FROM Scientists");
while (query.next()) {
            QString name = query.value(1).toString();
            int yob = query.value(2).toInt();
            int yod = query.value(3).toInt();
            QString gender = query.value(4).toString();

            qDebug() << name << yob << yod << gender;}
}

