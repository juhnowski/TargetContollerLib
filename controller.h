#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "db/targetdao.h"
#include "db/models/target.h"


class Controller
{
public:
    Controller(void);
    void addTarget(Target* target);
    Target* getTarget(int id);
    void updateTarget(int id, Target* target);
    Target* deleteTarget(int id);
    Target* defineRealtion(Data* data);
private:
    TargetDAO* targetDAO;
signals:

public slots:

};

#endif // CONTROLLER_H
