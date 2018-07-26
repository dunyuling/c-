#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(string m_strName)
{
    this->m_strName = m_strName;
    cout<<"Person::Person(string m_strName)"<<endl;
}

Person::~Person()
{
    cout<<"Person::~Person()"<<endl;
}

void Person::play()
{
    cout<<"Person--play()"<<endl;
    cout<<"Person m_strName:"<<m_strName<<endl;
}
