#include "MigrantWorker.h"
#include <iostream>

MigrantWorker::MigrantWorker(string m_strName,string m_strCode,string m_strColor):Farmer(m_strName,m_strColor),Worker(m_strCode,m_strColor)
{
    cout<<"MigrantWorker MigrantWorker()"<<endl;
}

MigrantWorker::~MigrantWorker()
{
    cout<<"MigrantWorker ~MigrantWorker()"<<endl;
}

