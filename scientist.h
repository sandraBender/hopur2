#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <QCoreApplication>
#include <QtSql>

using namespace std;

class Scientist {
    public:
        Scientist();
        Scientist(QString Name, int YearOfBirth, int YearOfDeath, QString Gender);
        friend ostream& operator <<(ostream& outs, Scientist sci);
        void operator =(const Scientist& t);
        QString getName();
        QString getGender();
        int getAge();
        int getYob();
        int getYod();
        int checkAge();
        void editScientist(vector<Scientist>& vec, string nameToEdit, string name, string yearOfBirth, string yearOfDeath, string gender, int age);
    private:
        QString name;
        QString gender;
        int age;
        int yearOfBirth;
        int yearOfDeath;
};


#endif // Scientist