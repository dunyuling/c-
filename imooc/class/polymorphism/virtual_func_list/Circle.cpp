#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle(double m_iR)
{
    this->m_iR = m_iR;
    cout<<"Circle Circle(double m_iR)"<<endl;
}

Circle::~Circle()
{
    cout<<"Circle ~Circle()"<<endl;
}

