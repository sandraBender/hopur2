
#include "database.h"

database::database()
{

}

void database::readFile(vector<Scientist>& vec)
{
  string n, b, d, g;
  ifstream datas;
  datas.open("/Users/Steinar/hopur2/input.csv"); //Breyta path

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

/*void writeToFile(vector<Scientist>& sv)      {

    Scientist tempVec;

    ofstream datas;
    datas.open("/Users/sindrirafn/hopur2/input.csv");

    if(datas.fail())      {
        cout << "Error, file could not be opened" << endl;
        exit(1);
    }

    for(unsigned int i=0;i<sv.size();i++)        {
        datas << sv[i] << ',';
    }

}
*/
void database::writeFile(vector<Scientist> vec){
    ofstream outs;
    outs.open("/Users/Steinar/hopur2/output.csv"); //Breyta path

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

