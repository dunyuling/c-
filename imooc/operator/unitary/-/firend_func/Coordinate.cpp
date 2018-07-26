#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

Coordinate& operator-(Coordinate &coor)
{
    coor.m_iX = -coor.m_iX;
    coor.m_iY = -coor.m_iY;
    //return *this; 
    return coor; 
}

void Coordinate::printCoor()
{
    cout<<"Coordinate:("<<this->m_iX<<","<<this->m_iY<<")"<<endl;
}
