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
        Computer(string Name, string yearInvented, bool wasmaade);
        friend ostream& operator <<(ostream& outs, Computer comp);
        void operator =(const Computer& t);
        string getName();
        string getyearInvented();
        bool getwasmade();
        string wasMade(bool yesOrNo);

    private:
        string name;
        string yearInvented;
        bool wasmade;

};


#endif // Computer
