#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
using namespace std;

template <typename T , int size>
class MyArray
{
public:
    MyArray();
    void display();
private:
    T obj;
};
#endif

template <typename T,int size>
MyArray<T,size>::MyArray()
{
}

template <typename T, int size>
void MyArray<T,size>::display()
{
    cout<<"size:"<<size<<endl;
}
