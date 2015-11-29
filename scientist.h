#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scientist {
    public:
        Scientist();
        void getScientist(string n, string a, string b, string d, string g);
        friend ostream& operator <<(ostream& outs, const Scientist& p);

        string getName();
        string getGender();
        string getAge();
        string getYob();
        string getYod();
        string setName();
        string setGender();
        string setAge();
        string setYob();
        string setYod();
    private:
        string name;
        string gender;
        string age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist

