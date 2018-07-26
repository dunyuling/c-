#include "Match.h"
#include "Time.h"
#include <iostream>
using namespace std;

void Match::printTime2(Time &t)
{
    cout<<"Match:  "<<t.m_iHour<<":"<<t.m_iMin<<":"<<t.m_iSec<<endl;
}
