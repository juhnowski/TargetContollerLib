#ifndef COORD_H
#define COORD_H

class Coord
{
public:
    Coord();
    int getX();
    int getY();
    int getZ();
    void setX(int x);
    void setY(int y);
    void setZ(int z);
private:
    int x;
    int y;
    int z;
};

#endif // COORD_H
