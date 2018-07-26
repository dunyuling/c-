#ifndef _Dustman_H_ 
#define _Dustman_H_

#include "Worker.h"

class Dustman:public Worker
{
public:
    Dustman(string m_strName,int m_iAge);
    virtual ~Dustman();
    virtual void work() ;
};
#endif
