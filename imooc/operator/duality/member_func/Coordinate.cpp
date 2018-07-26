#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate()
{
}

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

Coordinate Coordinate::operator+(const Coordinate &coor)
{
     Coordinate temp;
     temp.m_iX = this->m_iX + coor.m_iX;
     temp.m_iY = this->m_iY + coor.m_iY;
     return temp;
}

int Coordinate::operator[](int index) 
{
    if( 0 == index || 1 == index)
        return 0 == index ? this->m_iX :this->m_iY;
    throw index;
}

void Coordinate::printCoor()
{
    cout<<"Coordinate:("<<this->m_iX<<","<<this->m_iY<<")"<<endl;
}
