#include "Coordinate.h"

Coordinate::Coordinate(int m_iX, int m_iY)
{
    this->m_iX = m_iX;
    this->m_iY = m_iY;
}

Coordinate::~Coordinate()
{

}

int Coordinate::getX() const
{
    return this->m_iX;
}

int Coordinate::getY() const
{
    return this->m_iY;
}

bool Coordinate::operator==(const Coordinate &coor)
{
    return this->m_iX == coor.getX() && this->m_iY == coor.m_iY;
}

bool Coordinate::operator!=(const Coordinate &coor)
{
    return this->m_iX != coor.m_iX || this->m_iY != coor.m_iY;
}

void Coordinate::operator=(const Coordinate &coor)
{
    this->m_iX = coor.m_iX;
    this->m_iY = coor.m_iY;
}

ostream& operator<<(ostream &out,const Coordinate &coor)
{
    out<<"("<<coor.m_iX<<","<<coor.m_iY<<")"<<endl;
    return out;
}



