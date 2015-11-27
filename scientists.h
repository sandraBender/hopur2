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
        void insert(const vector<Scientists>& p, string name);
        friend ostream& operator <<(ostream& outs, const Scientists& p);

    private:
        string name;
        char gender;
        int age;
        int dateOfBirth;
        int dateOfDeath;
};


#endif // SCIENTISTS

