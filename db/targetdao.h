#ifndef TEMPLATEDAO_H
#define TEMPLATEDAO_H

#include <QObject>
#include "db/models/target.h"
#include "db/targetdao.h"

class TargetDAO
{
public:
    TargetDAO();
    void update(int id, Target* object);
    Target* get(int id);
    void add(Target* object);
    Target* del(int id);
    int size();
private:
    Target* storage[20];
    int cnt;
signals:

public slots:

};
#endif // TEMPLATEDAO_H
