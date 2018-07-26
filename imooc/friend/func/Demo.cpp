#include "Time.h"
#include <iostream>
using namespace std;


void printTime(Time &);

int main()  
{
    Time time(1,2,3);  
    printTime(time);
    Match match;
    match.printTime2(time);
    return 0;
}

void printTime(Time &t)
{
    cout<<t.m_iHour<<":"<<t.m_iMin<<":"<<t.m_iSec<<endl;
}
