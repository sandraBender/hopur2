#include "scientists.h"

Scientists::Scientists(string nAme, string gEnder, string aGe, string yOb, string yOd)
{
    name = nAme;
    gender = gEnder;
    age = aGe;
    yearOfBirth = yOb;
    yearOfDeath = yOd;
}

Scientists::Scientists()
{
    name = "";
    gender = "";
    age = "";
    yearOfBirth = "";
    yearOfDeath = "";
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
