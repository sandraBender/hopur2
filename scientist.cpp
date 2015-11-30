#include "Scientist.h"

void Scientist::Scientist(string name, string age, string yearOfBirth, string yearOfDeath, string age)
{
    this->name = name;
    this->gender = gender;
    this->age = age;
    this->yearOfBirth = yearOfBirth;
    this->yearOfDeath = yearOfDeath;
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

void Scientist::checkAge()
{
    if (yearOfDeath == 0)
    {
        age =  2015 - yearOfBirth;
    }
    else
    {
        age = yearOfDeath - yearOfBirth;
    }
}

ostream& operator <<(ostream& outs, const Scientist& sci)
{
    outs << "Name: " << sci.getName() << endl;
    outs << "Year of birth: " << sci.getYob() << endl;
    outs << "Year of death: " << sci.getYod() << endl;
    outs << "Gender: " << sci.getGender() << endl;
    outs << "Age: " << sci.getAge() << endl;

    return outs;
}
