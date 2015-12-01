
#include "database.h"

database::database()
{

}

void database::readFile(vector<Scientist>& vec) // This function reads the file
{
  string n, b, d, g;
  ifstream datas;

  datas.open("input.csv"); //Breyta path
  //datas.open("c:/temp/input.csv"); ABO
  //datas.open("C:/Users/FLX/Desktop/hopur2/input.csv");
  //datas.open("c:/temp/input.csv");


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

    //nota cin í stadinn f getline

    Scientist temp(n, b, d, g);

    vec.push_back(temp);
   }
   datas.close();
}

void database::writeFile(vector<Scientist> vec){ //This function writes into the file
    ofstream outs;
    outs.open("output.csv"); //Breyta path

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

}

/*void database::writeFileApp(Scientist temp){ //This function appends to the file

    ofstream outs("/Users/sandrabender/hopur2/output.csv", ios::out | ios::app); //Breyta path

    if(outs.fail()) {
        cout << "Error when writing to file" << endl;
        exit(1);
    }

    outs << temp.getName() << ", "
         << temp.getYob() << ", "
         << temp.getYod() << ", "
         << temp.getGender() << endl;

    outs.close();
}
*/
