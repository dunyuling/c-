#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    m_strName = "Merry";
}

void Person::play()
{
    cout<<"Person--play()"<<endl;
    cout<<"Person m_strName:"<<m_strName<<endl;
}
