#ifndef SCIENTIST
#define SCIENTIST

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scientist {
    public:
        Scientist(string nAme, string gEnder, string aGe, string yOb, string yOd);
        Scientist();
        void search();
        void display();
        void getFile();
        void inputFile();
        void checkIfExists();
        void getAlignment(); //
        friend ostream& operator <<(ostream& outs, const Scientist& p);

        string getName();
        string getGender();
        string getAge();
        string getYearOfBirth();
        string getYearOfDeath();
    private:
        string name;
        string gender;
        string age;
        string yearOfBirth;
        string yearOfDeath;
};


#endif // Scientist

