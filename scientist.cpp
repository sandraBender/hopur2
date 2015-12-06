#include "Scientist.h"

Scientist::Scientist(QString Name, int YearOfBirth, int YearOfDeath, QString Gender)
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

QString Scientist::getName()
{
    return name;
}

QString Scientist::getGender()
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
    qDebug() << "Name: " << sci.getName() << endl;
    qDebug() << "Year of birth: " << sci.getYob() << endl;
    qDebug() << "Year of death: " << sci.getYod() << endl;
    qDebug() << "Gender: " << sci.getGender() << endl;
    qDebug() << "Age: " << sci.getAge() << endl;

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
