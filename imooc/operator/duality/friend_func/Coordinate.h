#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate 
{
friend Coordinate operator+(const Coordinate &,const Coordinate &);
friend ostream& operator<<(ostream &,const Coordinate &);
public:
    Coordinate();
    Coordinate(int m_iX, int m_iY);
    void printCoor();
private:
    int m_iX;
    int m_iY;
};
#endif
