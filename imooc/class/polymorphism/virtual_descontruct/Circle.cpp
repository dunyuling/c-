#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(int m_iX,int m_iY,double m_dR)
{
    pCenter = new Coordinate(m_iX,m_iY);
    this->m_dR = m_dR;
    cout<<"Circle Circle(double m_dR)"<<endl;
}

Circle::~Circle()
{
    delete pCenter;
    pCenter = NULL;
    cout<<"Circle ~Circle()"<<endl;
}

void Circle::calcArea()
{
    cout<<"Circle area:"<<3.14*m_dR*m_dR<<endl;
    cout<<"Circle calcArea()"<<endl;
}
