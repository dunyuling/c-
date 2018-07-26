#ifndef _Worker_H_ 
#define _Worker_H_

#include "Person.h"

class Worker:public Person
{
public:
    Worker(string m_strName,int m_iAge);
    virtual ~Worker();
protected:
    int m_iAge;
};
#endif
