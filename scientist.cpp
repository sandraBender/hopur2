#include "Scientist.h"

Scientist::Scientist(string Name, string YearOfBirth, string YearOfDeath, string Gender)
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
    yearOfBirth = "";
    yearOfDeath = "";
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

string Scientist::getYob()
{
    return yearOfBirth;
}

string Scientist::getYod()
{
    return yearOfDeath;
}
// Checkes the age of the scientists
int Scientist::checkAge()
{
    int intYod = atoi(yearOfDeath.c_str());
    int intYob = atoi(yearOfBirth.c_str());

    if (intYod == 0)
    {
        age =  2015 - intYob;
    }
    else
    {
        age = intYod - intYob;
        age = abs(age);
    }
    return age;
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