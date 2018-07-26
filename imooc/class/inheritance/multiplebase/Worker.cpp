#include "Worker.h"
#include <iostream>

Worker::Worker(string m_strCode)
{
    this->m_strCode = m_strCode;
    cout<<"Worker Worker(string m_strCode)"<<endl;
}

Worker::~Worker()
{
    cout<<"Worker ~Worker()"<<endl;
}

void Worker::carry()
{
    cout<<"Worker m_strCode:"<<m_strCode<<endl;
    cout<<"Worker carry()"<<endl;
}
