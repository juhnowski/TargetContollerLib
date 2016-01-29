#ifndef FSHELICOPTER_H
#define FSHELICOPTER_H
#include "aircraft.h"

class FSHelicopter : public Aircraft
{
    Q_OBJECT
public:
    FSHelicopter(QObject *parent = 0);
    virtual bool defineRelation(Data *newData, Data* latestData);
};

#endif // FSHELICOPTER_H
