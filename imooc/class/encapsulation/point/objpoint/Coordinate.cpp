#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate()
{
    cout<<"Coordinate()"<<endl;
}

Coordinate::Coordinate(int x ,int y)
{
     m_iX = x;
     m_iY = y;
     cout<<"Coordinate(int x,int y)"<<endl;
}

Coordinate::~Coordinate()
{
     cout<<"~Coordinate()"<<endl;
}

void Coordinate::setX(int x)
{
    m_iX = x;
}

int Coordinate::getX()
{
    return m_iX;
}

void Coordinate::printXAddr() 
{
    cout<<"x addr:"<<&m_iX<<endl;
}

void Coordinate::setY(int y)
{
    m_iY = y;
}

int Coordinate::getY()
{
    return m_iY;
}

void Coordinate::printYAddr()
{
    cout<<"y addr:"<<&m_iY<<endl;
}
