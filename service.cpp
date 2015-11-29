#include "service.h"

Service::Service()
{

}

void Service::addScientist(Scientist newSci){
    SciVec.push_back(newSci);
}
Scientist Service::getScientist(int num){

    return SciVec[num];
}

void Service::search(){


}

ostream& operator <<(ostream& outs, Service& serv)
{
    for(unsigned int i = 0; i < serv.SciVec.size(); i++){
        outs << "Name: " << serv.SciVec[i].getName() << endl;
        outs << "Year of birth: " << serv.SciVec[i].getYob() << endl;
        outs << "Year of death: " << serv.SciVec[i].getYod() << endl;
        outs << "Gender: " << serv.SciVec[i].getGender() << endl;
        outs << "Age: " << serv.SciVec[i].getAge() << endl;
    }

    return outs;
}
