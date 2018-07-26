#ifndef _MigrantWorker_H_
#define _MigrantWorker_H_

#include "Farmer.h"
#include "Worker.h"
#include <string>
using namespace std;

class MigrantWorker:public Farmer,public Worker
{
public:
    MigrantWorker(string m_strName, string m_strCode,string m_strColor );
    virtual ~MigrantWorker();
};
#endif
