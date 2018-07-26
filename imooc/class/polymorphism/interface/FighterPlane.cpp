#include "FighterPlane.h"
#include <iostream>
using namespace std;

FighterPlane::FighterPlane(string m_strCode):Plane(m_strCode)
{
    cout<<"FighterPlane FighterPlane(string m_strCode)"<<endl;
}

FighterPlane::~FighterPlane()
{
    cout<<"FighterPlane ~FighterPlane()"<<endl;
}

void FighterPlane::takeoff()
{
    cout<<"FighterPlane takeoff()"<<endl;
}

void FighterPlane::land()
{
    cout<<"FighterPlane land()"<<endl;
}

void FighterPlane::printCode()
{
    cout<<"FighterPlane printCode():"<<m_strCode<<endl;
}
