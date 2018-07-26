#include "Circle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

int main()
{
    Shape shape ;
    cout<<"sizeof(shape):"<<sizeof(shape)<<endl;

    int *p = (int*)&shape;
    cout<<"p:"<<p<<","<<&shape<<endl;
    cout<<"*p:"<<(unsigned int)(*p)<<endl;

    cout<<endl;
    Circle circle(100.0);
    cout<<"sizeof(circle):"<<sizeof(circle)<<endl;

    double *q = (double*)&circle;
    cout<<"q:"<<q<<","<<&circle<<endl;
    q++;
    cout<<"*q:"<<*q<<endl;

    cout<<endl;
    return 0;
}
