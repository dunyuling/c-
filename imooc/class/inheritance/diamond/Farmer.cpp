#include "Farmer.h"
#include <iostream>

Farmer::Farmer(string m_strName,string m_strColor):Person("Farmer"+m_strColor)
{
    this->m_strName = m_strName;
    cout<<"Farmer Farmer(string m_strName)"<<endl;
}

Farmer::~Farmer()
{
    cout<<"Farmer ~Farmer()"<<endl;
}

void Farmer::sow()
{
    cout<<"Farmer m_strName:"<<m_strName<<endl;
    cout<<"Farmer sow()"<<endl;
}
