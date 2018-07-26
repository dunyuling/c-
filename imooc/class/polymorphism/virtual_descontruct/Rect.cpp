#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect(double m_dWidth,double m_dHeight)
{
    this->m_dWidth = m_dWidth;
    this->m_dHeight = m_dHeight;
    cout<<"Rect Rect(double m_dWidth,double m_dHeight)"<<endl;
}

Rect::~Rect()
{
    cout<<"Rect ~Rect()"<<endl;
}

void Rect::calcArea()
{
    cout<<"Rect area:"<<m_dWidth * m_dHeight << endl;
    cout<<"Rect calcArea()"<<endl;
}
