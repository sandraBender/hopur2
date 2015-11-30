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
        Scientist(string n, string a, string b, string d, string g);
        friend ostream& operator <<(ostream& outs, const Scientist& sci);
        string getName();
        string getGender();
        string getAge();
        string getYob();
        string getYod();
        void checkAge();

    private:
        string name;
        string gender;
        string age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist
