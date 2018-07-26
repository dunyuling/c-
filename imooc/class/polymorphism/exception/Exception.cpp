#include "Exception.h" 
#include <iostream>
using namespace std;

Exception::Exception()
{
    cout<<"Exception::Exception()"<<endl;
}

Exception::~Exception()
{
    cout<<"Exception::~Exception()"<<endl; 
}

void Exception::printException()
{
    cout<<"Exception::printException()"<<endl;
}
