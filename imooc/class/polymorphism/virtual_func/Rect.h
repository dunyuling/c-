#ifndef _Rect_H_
#define _Rect_H_
#include "Shape.h"

class Rect:public Shape
{
public:
    Rect(double m_dWidth,double m_dHeight);
    virtual ~Rect();
    virtual void calcArea();
protected:
    double m_dWidth;
    double m_dHeight;
};
#endif
