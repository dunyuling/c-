#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;    
}

void Coordinate::setX(int m_iX)
{
    this->m_iX = m_iX;
}

int Coordinate::getX()
{
    return this->m_iX;
}

void Coordinate::setY(int m_iY)
{
    this->m_iY = m_iY;
}

int Coordinate::getY()
{
    return this->m_iY;
}

void Coordinate::printCoordinate()
{
    cout<<"("<<this->m_iX<<","<<this->m_iY<<")"<<endl;
}

bool Coordinate::operator==(const Coordinate &coor)
{
    return this->m_iX == coor.m_iX && this->m_iY == coor.m_iY;
}

ostream & operator<<(ostream &out, const Coordinate &coor)
{
    out<<"("<<coor.m_iX<<","<<coor.m_iY<<")";
    return out;
}

