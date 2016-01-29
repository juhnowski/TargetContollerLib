#ifndef TYPE_H
#define TYPE_H

#include <QObject>
#include "../data.h"

class Type: public QObject
{
    Q_OBJECT
public:
    Type(QObject *parent = 0);
    virtual bool defineRelation(Data* newData, Data* latestData);
    virtual QString* getName();
protected:
    QString* name;
signals:

public slots:

};

#endif // TYPE_H
