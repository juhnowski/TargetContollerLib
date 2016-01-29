#include "data.h"

Data::Data()
{
}

Coord* Data::getCoord(){
    return this->coord;
}

void Data::setCoord(Coord* coord){
    this->coord = coord;
}

long Data::getTime(){
    return time;
}

void Data::setTime(long time){
    this->time = time;
}
