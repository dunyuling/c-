#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
using namespace std;

class Coordinate
{
friend ostream& operator<<(ostream &,const Coordinate &); 
public:
    Coordinate(int m_iX=0,int m_iY=0);
    ~Coordinate();
    int getX() const;
    int getY() const;
    bool operator==(const Coordinate &);
    bool operator!=(const Coordinate &);
    void operator=(const Coordinate &);
private:
    int m_iX;
    int m_iY;
};
#endif
