#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate 
{
public:
    Coordinate(int m_iX,int m_iY);
    Coordinate& operator-();
    void printCoor();
private:
    int m_iX;
    int m_iY;
};
#endif
