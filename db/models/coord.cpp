#include "coord.h"

Coord::Coord()
{
}

int Coord::getX(){
    return x;
}

int Coord::getY(){
    return y;
}

int Coord::getZ(){
    return z;
}

void Coord::setX(int x){
    this->x = x;
}

void Coord::setY(int y){
    this->y = y;
}

void Coord::setZ(int z){
    this->z = z;
}
