#include "fshelicopter.h"
#include <QtCore/qmath.h>
#include <QDebug>

FSHelicopter::FSHelicopter(QObject *parent):Aircraft(parent)
{
    name = new QString("FS Helicopter target");
}

bool FSHelicopter::defineRelation(Data* newData, Data* latestData){

    Coord* c_l = latestData->getCoord();
    Coord* c_n = newData->getCoord();
    float dt = newData->getTime() - latestData->getTime();

    qDebug() << "defineRelation for" << *this->getName();
    qDebug() << "dt=" << dt;

    int x_l = c_l->getX();
    int x_n = c_n->getX();
    int dx = x_n - x_l;
    qDebug() << "dx=" << dx;

    int y_l = c_l->getY();
    int y_n = c_n->getY();
    int dy = y_n - y_l;
    qDebug() << "dy=" << dy;

    int z_l = c_l->getZ();
    int z_n = c_n->getZ();
    int dz = z_n - z_l;
    qDebug() << "dz=" << dz;

    //Vmax Apache = 82 m/s
    float Vmax = 82.0;
    float v = sqrt(dx*dx+dy*dy+dz*dz)/dt;
    qDebug() << "Vmax=" << Vmax << " v=" << v;

    return v < Vmax;
}

