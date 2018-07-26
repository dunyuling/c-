#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

Coordinate& Coordinate::operator++()
{
     this->m_iX++;
     this->m_iY++;
     return *this;
}

Coordinate Coordinate::operator++(int)
{
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;
    return old;
}

void Coordinate::printCoor()
{
    cout<<"Coordinate:("<<this->m_iX<<","<<this->m_iY<<")"<<endl;
}
