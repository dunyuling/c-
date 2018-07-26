#include "Soldier.h"
#include <iostream>
using namespace std;

Soldier::Soldier()
{

}

void Soldier::play(int x)
{
    cout<<"Soldier m_strName:"<<m_strName<<endl;
    cout<<"Soldier Person m_strName:"<<Person::m_strName<<endl;
    cout<<"soldier--play()"<<endl;
}

void Soldier::work()
{
    m_strName = "Jim";
    Person::m_strName = "Jack";
    cout<<"Soldier--work()"<<endl;
}
