#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scientist {
    public:
        Scientist(string n, string g, string a, string b, string d);
        Scientist();
        friend ostream& operator <<(ostream& outs, const Scientist& p);

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

