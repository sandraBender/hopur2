#ifndef PERSON
#define PERSON



#include <iostream>
#include <string>
#include "StringNode.h"

using namespace std;

class InvalidPositionException { };

class Person {
    public:
        Person();
        ~Person();
        void insert(const string& name);
        friend ostream& operator <<(ostream& outs, const Person& lis);
    private:
        string name;
        char sex;
        int dateOfBirth;
        int dateOfDeath;

};
#endif // PERSON
