#ifndef _Circle_H_
#define _Circle_H_

#include "Shape.h"

class Circle:public Shape
{
public:
    Circle(double m_iR);
    ~Circle();
protected:
    double m_iR;
};
#endif
