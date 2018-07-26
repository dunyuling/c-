#include "Array.h"
#include <iostream> 
using namespace std;

Array::Array(int len)
{
    this->len = len;
    cout<<"Array(int len)"<<endl;
}

Array::~Array()
{
    void *a = this;
    cout<<"~Array() this:"<<this<<",&this:"<<&a<<endl;
}

void Array::setLen(int len)
{
    this->len = len;
}

int Array::getLen()
{
    return len;
}

Array Array::setLen2(int len)
{
    void *a = this;
    cout<<"setLen2() this:"<<this<<",&this"<<&a<<endl;
    this->len = len;
    return *this;
}

Array& Array::setLen3(int len)
{
    void *a = this;
    cout<<"setLen3():"<<this<<",&this:"<<&a<<endl;
    this->len = len;
    return *this;
}

Array* Array::setLen4(int len)
{
    void *a = this; 
    cout<<"setLen4():"<<this<<",&this:"<<&a<<endl;
    this->len = len;
    return this;
}

void Array::printInfo()
{
    void *a = this;
    cout<<"printInfo() len="<<len<<",this:"<<this<<",&this:"<<&a<<endl;
}

Array Array::printInfo2()
{
    void *a = this;
    cout<<"printInfo2() len="<<len<<",this:"<<this<<",&this:"<<&a<<endl;
    return *this;
}

Array& Array::printInfo3()
{
    void *a = this;
    cout<<"printInfo3() len="<<len<<",this:"<<this<<",&this:"<<&a<<endl;
    return *this;
}

Array* Array::printInfo4()
{
    void *a = this;
    cout<<"printInfo4() len="<<len<<",this:"<<this<<",&this:"<<&a<<endl;
    return this;
}

Array Array::getArrayInfo2()
{
    return *this;
}

Array& Array::getArrayInfo3()
{
    return *this; 
}

Array* Array::getArrayInfo4()
{
    return this;
}
