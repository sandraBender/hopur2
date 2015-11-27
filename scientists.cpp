#include "scientists.h"

Scientists::Scientists()
{
    name = "";
    gender = ' ';
    age = 0;
    dateOfBirth = 0;
    dateOfDeath = 0;
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
