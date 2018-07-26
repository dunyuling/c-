#include "Tank.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 20;

Tank::Tank(char m_cCode)
{
    this->m_cCode = m_cCode; 
    s_iCount++; 
    cout<<"Tank::Tank(char m_cCode)"<<endl;
}

Tank::~Tank()
{
    s_iCount--;
    cout<<"Tank::~Tank()"<<endl;
}

void Tank::fire()
{
    cout<<"Tank::fire()"<<endl;
}

int Tank::getCount() 
{
    return s_iCount;
}
