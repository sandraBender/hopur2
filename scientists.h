#ifndef SCIENTISTS
#define SCIENTISTS



#include <iostream>
#include <string>
#include "StringNode.h"

using namespace std;


class Scientists {
    public:
        Person();
        ~Person();
        void insert(const string& name);
        friend ostream& operator <<(ostream& outs, const Scientists& p);
    private:
        string name;
        char sex;
        int dateOfBirth;
        int dateOfDeath;
};


#endif // SCIENTISTS

