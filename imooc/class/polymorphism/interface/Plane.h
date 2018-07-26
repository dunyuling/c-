#ifndef _Plane_H_
#define _Plane_H_

#include "Flyable.h"
#include <string>
using namespace std;

class Plane:public Flyable
{
public:
    Plane(string m_strCode);
    virtual ~Plane();
    virtual void takeoff() ;
    virtual void land() ;
    virtual void printCode();
protected:
    string m_strCode;
};
#endif
