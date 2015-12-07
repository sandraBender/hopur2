#include "Scientist.h"

Scientist::Scientist(string Name, int YearOfBirth, int YearOfDeath, string Gender)
{
    name = Name;
    gender = Gender;
    yearOfBirth = YearOfBirth;
    yearOfDeath = YearOfDeath;
    age = checkAge();
}

Scientist::Scientist()
{
    name = "";
    gender = "";
    yearOfBirth = 0;
    yearOfDeath = 0;
    age = 0;
}

string Scientist::getName()
{
    return name;
}

string Scientist::getGender()
{
    return gender;
}

int Scientist::getAge()
{
    return age;
}

int Scientist::getYob()
{
    return yearOfBirth;
}

int Scientist::getYod()
{
    return yearOfDeath;
}
// Checkes the age of the scientists
int Scientist::checkAge()
{

    if (yearOfDeath == 0)
        age =  2015 - yearOfBirth;
    else
        age = yearOfBirth - yearOfDeath;

    return abs(age);
}

ostream& operator <<(ostream& outs, Scientist sci)
{
    outs << "Name: " << sci.getName() << endl;
    outs << "Year of birth: " << sci.getYob() << endl;
    outs << "Year of death: " << sci.getYod() << endl;
    outs << "Gender: " << sci.getGender() << endl;
    outs << "Age: " << sci.getAge() << endl;

    return outs;
}

void Scientist::operator=(const Scientist& s)
{
    name = s.name;
    yearOfBirth = s.yearOfBirth;
    yearOfDeath = s.yearOfDeath;
    gender = s.gender;
    age = s.age;
}
