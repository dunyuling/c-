#include "Worker.h"
#include <iostream>
using namespace std;

Worker::Worker(string m_strName,int m_Age):Person(m_strName)
{
   this->m_iAge = m_iAge;
   cout<<"Worker Worker()"<<endl;
}

Worker::~Worker()
{
    cout<<"Worker ~Worker()"<<endl;
}

