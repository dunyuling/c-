#ifndef _Person_H_ 
#define _Person_H_

#include <string>
using namespace std;

class Person
{
public:
    Person(string m_strName);
    virtual ~Person();
    virtual void work() = 0;
protected:
    string m_strName;
};
#endif
