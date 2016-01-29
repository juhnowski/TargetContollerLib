#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "type.h"

class Aircraft : public Type
{
    Q_OBJECT
public:
    Aircraft(QObject *parent = 0);
};

#endif // AIRCRAFT_H
