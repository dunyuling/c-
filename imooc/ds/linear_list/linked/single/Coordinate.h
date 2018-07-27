#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;
class Coordinate
{
friend ostream& operator<<(ostream &,const Coordinate &);
public:
    Coordinate(int x=0, int y=0);
    void setX(int m_iX);
    int getX();
    void setY(int m_iY);
    int getY(); 
    void printCoordinate();
    bool operator==(const Coordinate &);
private:
    int m_iX;
    int m_iY;
};
#endif
