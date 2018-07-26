#include "Person.h"
#include <iostream>

Person::Person(string m_strColor)
{
    this->m_strColor = m_strColor;
    cout<<"Person Person(string m_strColor)"<<endl;
}

Person::~Person()
{
    cout<<"Person ~Person()"<<endl;
}

void Person::printColor()
{
    cout<<"Person m_strColor:"<<m_strColor<<endl;
    cout<<"Person printColor()"<<endl;
}
