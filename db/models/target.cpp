#include "target.h"

Target::Target()
{
}

Data* Target::getData(){
    return data;
}

void Target::setData(Data* data){
    this->data = data;
}

int Target::getIndex(){
    return index;
}

void Target::setIndex(int index){
    this->index = index;
}

Type* Target::getType(){
    return type;
}

void Target::setType(Type* type){
    this->type = type;
}

Group* Target::getGroup(){
    return group;
}

void Target::setGroup(Group* group){
    this->group = group;
}
