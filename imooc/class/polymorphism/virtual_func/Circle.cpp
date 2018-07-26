#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double m_dR)
{
    this->m_dR = m_dR;
    cout<<"Circle Circle(double m_dR)"<<endl;
}

Circle::~Circle()
{
    cout<<"Circle ~Circle()"<<endl;
}

void Circle::calcArea()
{
    cout<<"Circle area:"<<3.14*m_dR*m_dR<<endl;
    cout<<"Circle calcArea()"<<endl;
}
