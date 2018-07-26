#ifndef _Person_H_
#define _Person_H_

#include <string>
using namespace std;

class Person
{
public:
    Person(string m_strColor="yellow");
    virtual ~Person();
    void printColor();
protected:
    string m_strColor;
};
#endif
