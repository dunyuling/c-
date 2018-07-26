#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane()
{
    cout<<"Plane Plane()"<<endl;
}

Plane::~Plane()
{
    cout<<"Plane ~Plane()"<<endl;
}

void Plane::takeoff()
{
    cout<<"Plane takeoff()"<<endl;
}

void Plane::land()
{
    cout<<"Plane land()"<<endl;
}

void Plane::carry()
{
    cout<<"Plane carry():"<<endl;
}
