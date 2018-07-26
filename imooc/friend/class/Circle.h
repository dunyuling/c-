#ifndef CIRCLE_H
#define CIRCLE_H

#include "Coordinate.h"   
class Circle
{
public:
    Circle(int m_iX,int m_iY);
    void printCoor();
private:
    Coordinate coor;
};
#endif
