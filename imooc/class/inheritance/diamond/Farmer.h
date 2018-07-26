#ifndef _Farmer_H_
#define _Farmer_H_

#include "Person.h"
#include <string>
using namespace std;

class Farmer:virtual public Person
{
public:
    Farmer(string m_strName="lb",string m_strColor="yellow");
    virtual ~Farmer();
    void sow();
protected:
    string m_strName;
};
#endif
