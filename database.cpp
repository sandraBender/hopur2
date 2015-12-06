#include "database.h"


database::database()
{

}

/*void database::getDatabase(){
    int argc;
    char **argv;
    QCoreApplication a(argc, argv);

    qDebug() << QSqlDatabase::drivers();

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL", "database");
    //QString dbName= "Database";
    //db.setDatabaseName(dbName);
    db.setDatabaseName("database");
    /*db.open();
    if (!db.open())  {
        cout << "Error, database was not opened!";
   db.open();






    QSqlQuery query;
    query.exec("SELECT * FROM Scientists");
    while (query.next()) {
            QString name = query.value(1).toString();
            int yob = query.value(2).toInt();
            int yod = query.value(3).toInt();
            QString gender = query.value(4).toString();

            qDebug() << name << yob << yod << gender;}

    QSqlTableModel model;
       model.setTable("Scientists");
       model.setSort(1, Qt::DescendingOrder);
       model.select();

       for (int i = 0; i < model.rowCount(); ++i) {
           QString name = model.record(i).value("Name").toString();
           int yob = model.record(i).value("YearOfBirth").toInt();
           int yod = model.record(i).value("YearOfDeath").toInt();
           QString gender = model.record(i).value("Gender").toString();
           cout << yob << yod << endl;}
    db.close();
}*/


//This function accesses the database
void database::getDatabase(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName= "Database";
    db.setDatabaseName(dbName);

    db.open();
    if (!db.open())  {
        cout << "Error, database was not opened!";
    }
    QSqlQuery query(db);




    db.close();
}







/* // This function reads the file
void database::readFile(vector<Scientist>& vec)
{
  string n, b, d, g;
  ifstream datas;

  datas.open("input.csv");

  if(datas.fail())
  {
         cout << "Error, file could not be opened" << endl;
         exit(1);
  }
   while(!datas.eof())
  {
        getline(datas, n, ',');
        getline(datas, b, ',');
        getline(datas, d, ',');
        getline(datas, g, '\n');

        Scientist temp(n, b, d, g);

        vec.push_back(temp);
   }
   datas.close();
}

//This function writes into the file
void database::writeFile(vector<Scientist> vec){
    ofstream outs;
    outs.open("input.csv");

    if(outs.fail()) {
        cout << "Error when writing to file" << endl;
        exit(1);
    }

    outs << vec[0].getName() << ",";
    outs << vec[0].getYob() << ",";
    outs << vec[0].getYod() << ",";
    outs << vec[0].getGender();
    for(unsigned int i = 1; i < vec.size(); i++){
        outs << endl << vec[i].getName() << ",";
        outs << vec[i].getYob() << ",";
        outs << vec[i].getYod() << ",";
        outs << vec[i].getGender();
    }

    outs.close();

}*/

