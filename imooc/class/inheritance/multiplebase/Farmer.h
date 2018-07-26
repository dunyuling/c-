#ifndef _Farmer_H_
#define _Farmer_H_

#include <string>
using namespace std;

class Farmer 
{
public:
    Farmer(string m_strName="Jack");
    virtual ~Farmer();
    //~Farmer();
    void sow();
protected:
    string m_strName;
}; 
#endif
