#include "IndexException.h" 
#include <iostream>
using namespace std;

IndexException::IndexException()
{
    cout<<"IndexException::IndexException()"<<endl;
}

IndexException::~IndexException()
{
    cout<<"IndexException::~IndexException()"<<endl; 
}

void IndexException::printIndexException()
{
    cout<<"IndexException::printIndexException()"<<endl;
}
