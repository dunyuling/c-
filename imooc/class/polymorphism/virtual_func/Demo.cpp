#include "Circle.h"
#include "Rect.h"
#include <iostream>
using namespace std;

//virutal修饰函数必须与类相关 
//virtual a() {} 

int main()
{
    Shape *s1 = new Circle(3.0);
    Shape *s2 = new Rect(3.0,4.0);
    cout<<endl;
    s1->calcArea();
    cout<<endl; 
    s2->calcArea();
    cout<<endl;
    delete s1;
    s1 = NULL;
    delete s2;
    s2 = NULL;
    return 0;
}
