#ifndef _Flyable_H_
#define _Flyable_H_

class Flyable
{
public:
    virtual void takeoff() = 0;
    virtual void land() = 0;
};
#endif
