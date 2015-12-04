#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Computer {
    public:
        Computer();
        Computer(string Name, string yearInvented, bool wasmaade, string Type);
        friend ostream& operator <<(ostream& outs, Computer comp);
        void operator =(const Computer& t);
        string getName();
        string getYearInvented();
        bool getBuildOrNot();
        string buildorNot(bool yesOrNo);
        string getType();

    private:
        string name;
        string yearInvented;
        bool buildOrNot;
        string type;
};


#endif // Computer
