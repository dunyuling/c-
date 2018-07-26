#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate 
{
friend Coordinate& operator-(Coordinate &);
public:
    Coordinate(int m_iX, int m_iY);
    void printCoor();
private:
    int m_iX;
    int m_iY;
};
#endif
