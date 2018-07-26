#ifndef TIME_H
#define TIME_H

#include "Match.h"

class Time
{
friend void printTime(Time &);
friend void Match::printTime2(Time &t);
public:
    Time(int hour, int min, int sec);

private:
    int m_iHour;
    int m_iMin;
    int m_iSec;
};
#endif
