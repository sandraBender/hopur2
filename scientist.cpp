#include "Scientist.h"

void Scientist::setScientist(string n, string a, string b, string d, string g)
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

ostream& operator <<(ostream& outs, Scientist& sci){

    outs << "Name: " << sci.getName() << endl;
    outs << "Year of birth: " << sci.getYob() << endl;
    outs << "Year of death: " << sci.getYod() << endl;
    outs << "Gender: " << sci.getGender() << endl;
    outs << "Age: " << sci.getAge() << endl;

    return outs;
}
