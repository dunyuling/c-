#ifndef _Worker_H_
#define _Worker_H_

#include "Person.h"
#include <string>
using namespace std;

class Worker: virtual public Person 
{
public:
    Worker(string m_strCode="001",string m_strColor="yellow");
    virtual ~Worker();
    void carry();
protected:
    string m_strCode;
};
#endif
