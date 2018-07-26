#ifndef _Person_H_
#define _Person_H_

#include <string>
using namespace std;

class Person
{
public:
    Person(string m_strName = "Jim");
    virtual ~Person();
    void play();
protected:
    string m_strName;
};
#endif 
