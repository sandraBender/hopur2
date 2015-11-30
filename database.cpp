#include "database.h"

database::database()
{

}

void database::readFile()
{
//vector<string> b;
  Scientist temp;
  string n, a, b, d, g;
  ifstream datas;
  datas.open("/Users/Steinar/hopur2/input.csv");

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

            }


   // useInfo(b);
  }
  datas.close();
}

//void database::useInfo(vector<string> v)
//{
//    string n, a, b, d ,g;
//    for (unsigned int i = 0; i < v.size(); i++)
//    {

//    }

//}
