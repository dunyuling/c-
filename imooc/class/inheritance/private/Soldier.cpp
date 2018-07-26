#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{

}

void Soldier::work()
{
    m_strName = "Jim";
    m_iAge = 20;
    cout<<"Soldier m_strName:"<<m_strName<<endl;
    cout<<"Soldier m_iAge:"<<m_iAge<<endl;
    cout<<"Soldier--work()"<<endl;
}
