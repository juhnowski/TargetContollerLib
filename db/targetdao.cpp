#include "targetdao.h"

TargetDAO::TargetDAO()
{
    cnt = 0;
}

int TargetDAO::size() {
    return cnt;
}

void TargetDAO::update(int id, Target* object){
    storage[id] = object;
}

Target* TargetDAO::get(int id){
    return storage[id];
}

void TargetDAO::add(Target* object){
    object->setIndex(cnt);
    storage[cnt++] = object;

}

Target* TargetDAO::del(int id){
    Target* result = storage[id];
    storage[id] = 0;
    result->setIndex(-1);
    return result;
}
