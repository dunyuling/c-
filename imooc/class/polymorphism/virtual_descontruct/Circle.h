#ifndef _Circle_H_
#define _Circle_H_
#include "Shape.h"
#include "Coordinate.h"

class Circle:public Shape
{
public:
    Circle(int m_iX, int m_iY, double m_dR);
    virtual ~Circle();
    virtual void calcArea();
protected:
    Coordinate *pCenter;
    double m_dR;
};
#endif
