#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int m_iX,int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
    cout<<"Coordinate Coordinate(int m_iX,int m_iY)"<<endl;
}

Coordinate::~Coordinate()
{
    cout<<"Coordinate ~Coordinate()"<<endl;
}
