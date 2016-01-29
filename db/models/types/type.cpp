#include "type.h"


Type::Type(QObject *parent): QObject(parent)
{
    name = new QString("Unknown target");
}

bool Type::defineRelation(Data *newData, Data* latestData){
     return false;
 }

 QString* Type::getName(){
     return this->name;
 }
