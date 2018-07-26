#include "Infantry.h"
#include <iostream>
using namespace std;

Infantry::Infantry(string m_strName,int m_iAge)
{
    this->m_strName = m_strName;
    this->m_iAge = m_iAge;
    cout<<"Infantry Infantry(string m_strName,int m_iAge)"<<endl;
}

Infantry::~Infantry()
{
    cout<<"Infantry ~Infantry()"<<endl;
}

void Infantry::attack()
{
    cout<<"Infantry m_strName:"<<m_strName<<endl;
    cout<<"Infantry m_iAge:"<<m_iAge<<endl;
    cout<<"Infantry--attack()"<<endl;
}
