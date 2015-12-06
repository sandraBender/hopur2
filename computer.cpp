#include "computer.h"

Computer::Computer()
{

}

Computer::Computer(QString Name, int YearInvented, bool Built, QString Type)
{
    name = Name;
    yearInvented = YearInvented;
    builtOrNot = Built;
    type = Type;
}

ostream& operator <<(ostream& outs, Computer comp)
{
    qDebug() << "Name: " << comp.getName() << endl;
    qDebug() << "Year Invented: " << comp.getYearInvented() << endl;
    qDebug() << "The computer was " << comp.built(comp.getBuiltOrNot()) << " built" << endl;
    qDebug() << "The type of the computer:  " << comp.getType() << endl;

    return outs;
}

void Computer::operator =(const Computer& c)
{
    name = c.name;
    yearInvented = c.yearInvented;
    builtOrNot = c.builtOrNot;
}

QString Computer::getName()
{
    return name;
}

int Computer::getYearInvented()
{
    return yearInvented;
}

bool Computer::getBuiltOrNot()
{
    return builtOrNot;
}

QString Computer::built(bool yesOrNo)
{
    switch (yesOrNo)
    {
        case 0:
            return "not";
        default:
            return "";
    }
}
QString Computer::getType()
{
    return type;
}