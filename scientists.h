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
        void sortByName();
        void sortByPerson();
        void sortBySex();
        void search();
        void display();
        void getFile();
        void inputFile();
        void checkIfExists();
        void getAlignment(); //
        friend ostream& operator <<(ostream& outs, const Scientists& p);

    private:
        string name;
        char gender;
        int age;
        int dateOfBirth;
        int dateOfDeath;
};


#endif // SCIENTISTS

