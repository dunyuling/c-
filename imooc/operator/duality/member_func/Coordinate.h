#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate 
{
public:
    Coordinate();
    Coordinate(int m_iX,int m_iY);
    Coordinate operator+(const Coordinate &);
    int operator[](int index);
    void printCoor();
private:
    int m_iX;
    int m_iY;
};
#endif
