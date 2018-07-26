#ifndef _Plane_H_
#define _Plane_H_

#include "Flyable.h"
#include <string>
using namespace std;

class Plane:public Flyable
{
public:
    Plane();
    virtual ~Plane();
    virtual void takeoff() ;
    virtual void land() ;
    virtual void carry();
};
#endif
