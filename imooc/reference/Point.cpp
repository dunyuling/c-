#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int *&q = p; //指针的别名
    *q = 20;
    cout<<"p="<<*p<<",a="<<a<<",q="<<*q<<endl;
    cout<<"p="<<p<<",a="<<&a<<",q="<<q<<endl;

    return 0;
}
