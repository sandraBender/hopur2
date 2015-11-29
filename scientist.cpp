#include "Scientist.h"

Scientist::Scientist(string nAme, string gEnder, string aGe, string yOb, string yOd)
{
    name = nAme;
    gender = gEnder;
    age = aGe;
    yearOfBirth = yOb;
    yearOfDeath = yOd;
}

Scientist::Scientist()
{
    name = "";
    gender = "";
    age = "";
    yearOfBirth = "";
    yearOfDeath = "";
}

ostream& operator <<(ostream& outs, vector<Scientist> p)
{

    return outs;
}

string Scientist::getName()
{
    return name;
}

string Scientist::getGender()
{
    return gender;
}

string Scientist::getAge()
{
    return age;
}

string Scientist::getYearOfBirth()
{
    return yearOfBirth;
}

string Scientist::getYearOfDeath()
{
    return yearOfDeath;
}
