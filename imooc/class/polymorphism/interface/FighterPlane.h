#ifndef _FighterPlane_H_
#define _FighterPlane_H_

#include "Plane.h"
#include <string>
using namespace std;

class FighterPlane:public Plane
{
public:
    FighterPlane(string m_strCode);
    virtual ~FighterPlane();
    virtual void takeoff() ;
    virtual void land() ;
    virtual void printCode();
};
#endif
