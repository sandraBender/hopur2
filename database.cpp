
#include "database.h"

database::database()
{

}

void database::readFile(vector<Scientist>& vec) // This function reads the file
{
  string n, b, d, g;
  ifstream datas;

  //datas.open("/Users/sindrirafn/hopur2/input.csv"); //Breyta path

  datas.open("C:/Users/FLX/Desktop/hopur2/input.csv"); //Erling


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

    getline(datas, g, ',');

    Scientist temp(n, b, d, g);

    vec.push_back(temp);
   }

   datas.close();
}

void database::writeFile(vector<Scientist> vec){ //This function writes into the file
    ofstream outs;
    outs.open("/Users/sindrirafn/hopur2/output.csv"); //Breyta path

    if(outs.fail()) {
        cout << "Error when writing to file" << endl;
        exit(1);
    }

    for(unsigned int i = 0; i < vec.size(); i++){
        outs << vec[i].getName() << ", ";
        outs << vec[i].getYob() << ", ";
        outs << vec[i].getYod() << ", ";
        outs << vec[i].getGender() << ", ";


    }

    outs.close();
}

