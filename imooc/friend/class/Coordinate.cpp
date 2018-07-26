#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

void Coordinate::printCoor()
{
    cout<<"Coordinate  x:"<<m_iX <<",y:"<<m_iY <<endl; 
}
