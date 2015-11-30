#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scientist {
    public:
        Scientist();
        void setScientist(string n, string a, string b, string d, string g);
        friend ostream& operator <<(ostream& outs, Scientist& sci);
        string getName();
        string getGender();
        string getAge();
        string getYob();
        string getYod();

    private:
        string name;
        string gender;
        string age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist
