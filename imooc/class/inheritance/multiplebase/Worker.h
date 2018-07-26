#ifndef _Worker_H_
#define _Worker_H_

#include <string>
using namespace std;

class Worker 
{
public:
    Worker(string m_strCode = "001");
    virtual ~Worker();
    void carry();
protected:
    string m_strCode;
};
#endif
