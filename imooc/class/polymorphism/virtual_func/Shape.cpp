#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
{
    cout<<"Shape Shape()"<<endl;
}

Shape::~Shape()
{
    cout<<"Shape ~Shape()"<<endl;
}

void Shape::calcArea()
{
    cout<<"Shape calcArea()"<<endl;
}
