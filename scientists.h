#ifndef SCIENTISTS
#define SCIENTISTS

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Scientists {
    public:
        Scientists();
        ~Scientists();
        void search();
        void display();
        void getFile();
        void inputFile();
        void checkIfExists();
        void getAlignment(); //
        friend ostream& operator <<(ostream& outs, const Scientists& p);

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


#endif // SCIENTISTS

