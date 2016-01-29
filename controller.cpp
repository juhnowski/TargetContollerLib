#include "controller.h"

Controller::Controller()
{
    targetDAO = new TargetDAO;
}

void Controller::addTarget(Target* target){
    targetDAO->add(target);
}

Target* Controller::getTarget(int id){
    return targetDAO->get(id);
}

void Controller::updateTarget(int id, Target* target){
    targetDAO->update(id, target);
}

Target* Controller::deleteTarget(int id){
    return targetDAO->del(id);
}

Target* Controller::defineRealtion(Data* data){
    Target* target;
    int size = targetDAO->size();
    for(int i = 0; i< size; i++){
        target = targetDAO->get(i);
        if(target->getType()->defineRelation(data, target->getData())){
            return target;
        }
    }

    return 0;
}
