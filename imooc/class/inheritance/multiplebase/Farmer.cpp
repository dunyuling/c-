#include "Farmer.h"
#include <iostream>
using namespace std;

Farmer::Farmer(string m_strName)
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
