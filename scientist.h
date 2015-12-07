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
        Scientist(string Name, int YearOfBirth, int YearOfDeath, string Gender);
        friend ostream& operator <<(ostream& outs, Scientist sci);
        void operator =(const Scientist& t);
        string getName();
        string getGender();
        int getAge();
        int getYob();
        int getYod();
        int checkAge();
        void editScientist(vector<Scientist>& vec, string nameToEdit, string name, string yearOfBirth, string yearOfDeath, string gender, int age);
    private:
        string name;
        string gender;
        int age;
        int yearOfBirth;
        int yearOfDeath;
};


#endif // Scientist