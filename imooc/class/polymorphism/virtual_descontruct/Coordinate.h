#ifndef _Coordinate_H_
#define _Coordinate_H_

class Coordinate
{
public:
    Coordinate(int m_iX =0, int m_iY=0);
    virtual ~Coordinate();
protected:
    int m_iX;
    int m_iY;
};
#endif
