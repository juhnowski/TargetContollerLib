#include <QCoreApplication>
#include <QDebug>
#include "controller.h"
#include "db/models/coord.h"
#include "db/models/types/fshelicopter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Create coord";

    Coord* cr = new Coord;
    cr->setX(1);
    cr->setY(2);
    cr->setZ(3);

    qDebug() << "Create data";
    Data* d = new Data;
    d->setCoord(cr);
    d->setTime(12345);

    qDebug() << "Create group";
    Group* g = new Group;

    qDebug() << "Create type";
    Type* type = new FSHelicopter;

    qDebug() << "Create target";
    Target* t = new Target;
    t->setData(d);
    t->setGroup(g);
    t->setIndex(0);
    t->setType(type);

    qDebug() << "Create controller";
    Controller* ctrl = new Controller;
    qDebug() << "Add target to controller";
    ctrl->addTarget(t);

    qDebug() << "Create new data";
    Data* newData = new Data;
    Coord* newCoord = new Coord;
    newCoord->setX(11);
    newCoord->setY(12);
    newCoord->setZ(13);
    newData->setCoord(newCoord);
    newData->setTime(12350);

    qDebug() << "defineRealtion";
    Target* updatedTarget = ctrl->defineRealtion(newData);
    if (updatedTarget!=0) {
        qDebug() << "udated = true";
    } else {
        qDebug() << "udated = false";
    }
    return a.exec();
}
