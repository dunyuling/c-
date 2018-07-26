#include "MigrantWorker.h"
#include <iostream>

MigrantWorker::MigrantWorker(string m_strName,string m_strCode):Farmer(m_strName),Worker(m_strCode)
{
    cout<<"MigrantWorker MigrantWorker(string m_strName,string m_strCode)"<<endl;
}

MigrantWorker::~MigrantWorker()
{
    cout<<"MigrantWorker ~MigrantWorker()"<<endl;
}

void sow()
{
    cout<<"MigrantWorker sow()"<<endl;
}
