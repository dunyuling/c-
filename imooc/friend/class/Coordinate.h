#ifndef COORDINATE_H
#define COORDINATE_H

class Circle;

class Coordinate
{

friend Circle;
public:
    Coordinate(int m_iX,int m_iY);
private:
    void printCoor();
    int m_iX;
    int m_iY;
};
#endif
