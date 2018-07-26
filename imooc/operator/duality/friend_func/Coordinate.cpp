#include "Coordinate.h"

Coordinate::Coordinate()
{
}

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2)
{
    Coordinate temp;
    temp.m_iX = coor1.m_iX + coor2.m_iX ;
    temp.m_iY = coor1.m_iY + coor2.m_iY;
    return temp; 
}

ostream &operator<<(ostream &out,const Coordinate &coor)
{
    out<<coor.m_iX <<","<<coor.m_iY<<endl;
    return out;
}

void Coordinate::printCoor()
{
    cout<<"Coordinate:("<<this->m_iX<<","<<this->m_iY<<")"<<endl;
}
