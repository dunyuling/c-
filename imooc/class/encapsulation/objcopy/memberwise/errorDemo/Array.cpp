#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int count)
{
    setCount(count);
    m_pArr = new int[m_iCount];
    cout<<"Array()"<<endl;
}

Array::Array(const Array &arr)
{
    m_iCount = arr.m_iCount;
    m_pArr = arr.m_pArr;
    cout<<"Array(const Array &arr)"<<endl;
}

Array::~Array()
{
    delete []m_pArr;
    m_pArr = NULL;
    cout<<"~Array()"<<endl;
}

void Array::setCount(int count)
{
    m_iCount = count;
}

int Array::getCount()
{
    return m_iCount;
}

void Array::printAddr()
{
    cout<<"m_pArr:"<<m_pArr<<endl;
}
