#ifndef TARGET_H
#define TARGET_H

#include <QObject>
#include "data.h"
#include "types/type.h"
#include "group.h"

class Target
{
public:
    Target();

    Data* getData();
    void setData(Data* data);

    int getIndex();
    void setIndex(int index);

    Type* getType();
    void setType(Type* type);

    Group* getGroup();
    void setGroup(Group* group);

protected:
    Data* data;
    int index;
    Type* type;
    Group* group;

signals:

public slots:

};

#endif // TARGET_H
