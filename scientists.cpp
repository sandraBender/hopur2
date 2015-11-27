#include "scientists.h"

Scientists::Scientists()
{
    name = "";
    gender = "";
    age = "";
    yearOfBirth = "";
    yearOfDeath = "";
}

Scientists::~Scientists()
{

}

ostream& operator <<(ostream& outs, vector<Scientists> p)
{
    //Breytt síðar
    //for (size_t i = 0; i < p.size(); i++) {
       // outs << "Name: " << p.name[i] << ;
    //}
    return outs;
}
