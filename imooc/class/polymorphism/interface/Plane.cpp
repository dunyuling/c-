#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane(string m_strCode)
{
    this->m_strCode = m_strCode;
    cout<<"Plane Plane(string m_strCode)"<<endl;
}

Plane::~Plane()
{
    cout<<"Plane ~Plane()"<<endl;
}

void Plane::takeoff()
{
    cout<<"Plane takeoff()"<<endl;
}

void Plane::land()
{
    cout<<"Plane land()"<<endl;
}

void Plane::printCode()
{
    cout<<"Plane printCode():"<<m_strCode<<endl;
}
