#ifndef TANK_H
#define TANK_H

class Tank
{
public:
    Tank(char m_cCode);
    ~Tank();
    void fire();
    static int getCount() ;
private:
    char m_cCode;
    static int s_iCount;
};
#endif
