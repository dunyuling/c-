#include "Soldier.h"

class Infantry:public Soldier
{
public:
    Infantry(string m_strName = "Jack",int m_iAge = 30);
    ~Infantry();
    void attack();
};
