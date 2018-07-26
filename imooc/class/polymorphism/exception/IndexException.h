#ifndef _IndexException_H_
#define _IndexException_H_

#include "Exception.h"

class IndexException:public Exception
{
public:
    IndexException();
    virtual ~IndexException();
    virtual void printIndexException();
};
#endif 
