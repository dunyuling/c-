#ifndef _Bird_H_
#define _Bird_H_

#include "Flyable.h"
#include <string>
using namespace std;

class Bird:public Flyable
{
public:
    Bird();
    virtual ~Bird();
    virtual void takeoff() ;
    virtual void land() ;
    virtual void foraging();
};
#endif
