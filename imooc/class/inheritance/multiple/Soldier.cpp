#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier(string m_strName,int m_iAge)
{
    this->m_strName = m_strName;
    this->m_iAge = m_iAge;
    cout<<"Soldier Soldier(string m_strName,int m_iAge)"<<endl;    
}

Soldier::~Soldier()
{
    cout<<"Soldier ~Soldier()"<<endl;
}

void Soldier::work()
{
    cout<<"Soldier m_strName:"<<m_strName<<endl;
    cout<<"Soldier m_iAge:"<<m_iAge<<endl;
    cout<<"Soldier--work()"<<endl;
}
