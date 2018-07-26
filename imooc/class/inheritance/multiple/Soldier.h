#ifndef _Soldier_H_
#define _Soldier_H_

#include "Person.h"

class Soldier:public Person
{
public:
    Soldier(string m_strName = "James",int m_iAge=20);
    virtual ~Soldier(); 
    void work();
protected:
    int m_iAge;
};
#endif
