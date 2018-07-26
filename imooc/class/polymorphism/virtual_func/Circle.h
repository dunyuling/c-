#ifndef _Circle_H_
#define _Circle_H_
#include "Shape.h"

class Circle:public Shape
{
public:
    Circle(double m_dR);
    virtual ~Circle();
    virtual void calcArea();
protected:
    double m_dR;
};
#endif
