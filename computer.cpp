#include "computer.h"

Computer::Computer()
{

}
//
Computer::Computer(string Name, string yearinvented, bool wasmaade)
{
    name = Name;
    yearInvented = yearinvented;
    wasmade = wasmaade;
}

ostream& operator <<(ostream& outs, Computer comp)
{
    outs << "Name: " << comp.getName() << endl;
    outs << "Year Invented: " << comp.getyearInvented() << endl;
    outs << "The computer was: " << comp.wasMade(comp.getwasmade()) << " built" << endl;

    return outs;

}

void Computer::operator =(const Computer& c)
{
    {
        name = c.name;
        yearInvented = c.yearInvented;
        wasmade = c.wasmade;
    }


}

string Computer::getName()
{
    return name;
}

string Computer::getyearInvented()
{
    return yearInvented;
}

bool Computer::getwasmade()
{
    return wasmade;
}
string Computer::wasMade(bool yesOrNo)
{
    switch (yesOrNo)
    {
        case 0:
            return "not";
        default:
            return "";
    }
}
