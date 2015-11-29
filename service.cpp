#include "service.h"

Service::Service()
{

}

void Service::addScientist(Scientist newSci){
    //SciVec.push_back(newSci);
    SciVec[0] = newSci;
}
Scientist Service::getScientist(int num){

    return SciVec[num];
}

void Service::search(){


}
