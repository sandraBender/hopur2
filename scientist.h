#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Scientist {
    public:
        Scientist();
        Scientist(string Name, string YearOfBirth, string YearOfDeath, string Gender);
        friend ostream& operator <<(ostream& outs, Scientist sci);
        void operator =(const Scientist& t);
        string getName();
        string getGender();
        int getAge();
        string getYob();
        string getYod();
        int checkAge();
    private:
        string name;
        string gender;
        int age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist
