#ifndef _Soldier_H_
#define _Soldier_H_

#include "Person.h"

class Soldier:private Person
{
public:
    Soldier();
    void work();
protected:
    int m_iAge;
};
#endif
