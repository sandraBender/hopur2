#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Scientist {
    public:
        Scientist();
        Scientist(string Name, string YearOfBirth, string YearOfDeath, string Gender);
        friend ostream& operator <<(ostream& outs, Scientist sci);
        string getName();
        string getGender();
        int getAge();
        string getYob();
        string getYod();
        void checkAge();

    private:
        string name;
        string gender;
        int age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist
