
#include "database.h"

database::database()
{

}

vector<Scientist> database::readFile()
{
//vector<string> b;
  vector<Scientist> tempVec;
  Scientist temp;
  string n, a, b, d, g;
  ifstream datas;
  datas.open("input.csv");

  if(!datas.is_open())
  {
      cout << "Error, file could not be opened";
  }
  else
  {
      while(!datas.eof())
            {

                getline(datas, n, ',');

                getline(datas, b, ',');

                getline(datas, d, ',');

                getline(datas, g, ',');

                getline(datas, a, ',');

                temp.setScientist(n, a, b, d, g);
                tempVec.push_back(temp);

            }


   // useInfo(b);
  }
  datas.close();

  return tempVec;
}

//void database::useInfo(vector<string> v)
//{
//    string n, a, b, d ,g;
//    for (unsigned int i = 0; i < v.size(); i++)
//    {

//    }

//}

