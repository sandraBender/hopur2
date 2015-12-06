#include "computer.h"

Computer::Computer()
{

}

Computer::Computer(string Name, string YearInvented, bool Built, string Type)
{
    name = Name;
    yearInvented = YearInvented;
    buildOrNot = Built;
    type = Type;
}

ostream& operator <<(ostream& outs, Computer comp)
{
    outs << "Name: " << comp.getName() << endl;
    outs << "Year Invented: " << comp.getYearInvented() << endl;
    outs << "The computer was " << comp.getBuildOrNot() << " built" << endl;
    outs << "The type of the computer:  " << comp.getType() << endl;

    return outs;
}

void Computer::operator =(const Computer& c)
{
    name = c.name;
    yearInvented = c.yearInvented;
    buildOrNot = c.buildOrNot;
}

string Computer::getName()
{
    return name;
}

string Computer::getYearInvented()
{
    return yearInvented;
}

bool Computer::getBuildOrNot()
{
    return buildOrNot;
}

string Computer::buildorNot(bool yesOrNo)
{
    switch (yesOrNo)
    {
        case 0:
            return "not";
        default:
            return "";
    }
}
string Computer::getType()
{
    return type;
}
