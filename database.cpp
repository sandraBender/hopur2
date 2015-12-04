#include "database.h"




database::database()
{

}
void database::getDatabase(){
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbName= "Database";
    db.setDatabaseName(dbName);

    db.open();
    QSqlQuery query(db);
}

/*// This function reads the file
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

