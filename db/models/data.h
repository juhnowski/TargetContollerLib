#ifndef DATA_H
#define DATA_H
#include "coord.h"

class Data
{
public:
    Data();
    Coord* getCoord();
    void setCoord(Coord* coord);
    long getTime();
    void setTime(long time);
private:
    long time;
    Coord* coord;
};

#endif // DATA_H
