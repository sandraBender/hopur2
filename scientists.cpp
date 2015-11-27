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

string Scientists::getName()
{
    return name;
}

string Scientists::getGender()
{
    return gender;
}

string Scientists::getAge()
{
    return age;
}

string Scientists::getYearOfBirth()
{
    return yearOfBirth;
}

string Scientists::getYearOfDeath()
{
    return yearOfDeath;
}
