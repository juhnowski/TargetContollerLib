#include "aircraft.h"

Aircraft::Aircraft(QObject *parent):Type(parent)
{
    name = new QString("Unknown Aircraft target");
}

