#include "Scientist.h"

void Scientist::getScientist(string n, string g, string a, string b, string d)
{
    name = n;
    gender = g;
    age = a;
    yearOfBirth = b;
    yearOfDeath = d;
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

string Scientist::getYob()
{
    return yearOfBirth;
}

string Scientist::getYod()
{
    return yearOfDeath;
}


