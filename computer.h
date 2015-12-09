#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <QCoreApplication>
#include <QtSql>

using namespace std;

class Computer {
public:
    Computer();
    Computer(string Name, int yearInvented, bool Built, string Type);
    friend ostream& operator <<(ostream& outs, Computer comp);
    void operator =(const Computer& t);
    string getName();
    int getYearInvented();
    bool getBuiltOrNot();
    string built(bool yesOrNo);
    string getType();
private:
    string name;
    int yearInvented;
    bool builtOrNot;
    string type;
};


#endif // Computer
