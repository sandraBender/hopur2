#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stdlib.h>
//#include "scientist.h"
#include <QCoreApplication>
#include <QtSql>

using namespace std;

class Computer {
public:
        Computer();
        Computer(QString Name, int yearInvented, bool Built, QString Type);
        friend ostream& operator <<(ostream& outs, Computer comp);
        void operator =(const Computer& t);
        QString getName();
        int getYearInvented();
        bool getBuiltOrNot();
        QString built(bool yesOrNo);
        QString getType();
    private:
        QString name;
        int yearInvented;
        bool builtOrNot;
        QString type;
};


#endif // Computer
