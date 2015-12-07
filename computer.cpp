#include "computer.h"

Computer::Computer()
{

}

Computer::Computer(string Name, int YearInvented, bool Built, string Type)
{
    name = Name;
    yearInvented = YearInvented;
    builtOrNot = Built;
    type = Type;
}

ostream& operator <<(ostream& outs, Computer comp)
{
    outs << "Name: " << comp.getName() << endl;
    if(comp.getYearInvented() != 0){
        outs << "Year Invented: " << comp.getYearInvented() << endl;
        outs << "The computer was " << comp.built(comp.getBuiltOrNot()) << " built" << endl;
    }
    else
        outs << "The computer was " << comp.built(comp.getBuiltOrNot()) << " built" << endl;

    outs << "The type of the computer:  " << comp.getType() << endl;

    return outs;
}

void Computer::operator =(const Computer& c)
{
    name = c.name;
    yearInvented = c.yearInvented;
    builtOrNot = c.builtOrNot;
}

string Computer::getName()
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

string Computer::built(bool yesOrNo)
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