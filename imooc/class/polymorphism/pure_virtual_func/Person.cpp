#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string m_strName)
{
   this->m_strName = m_strName;
   cout<<"Person Person(string m_strName)"<<endl;
}

Person::~Person()
{
    cout<<"Person ~Person()"<<endl;
}

void Person::work()
{
    cout<<"Person work()"<<endl;
}
