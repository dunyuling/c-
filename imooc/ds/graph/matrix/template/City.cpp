#include "City.h"

City::City(string m_strName)
{
//    cout<<m_strName<<endl;
    this->m_strName = m_strName;
}

City::~City()
{

}

string City::getName() const
{
    return m_strName;
}

bool City::operator==(const City &city)
{
    return this->m_strName == city.getName() ;
}

bool City::operator!=(const City &city)
{
    return this->m_strName != city.m_strName;
}

void City::operator=(const City &city)
{
    this->m_strName = city.m_strName;
}

ostream& operator<<(ostream &out,const City &city)
{
    out<<"("<<city.m_strName<<")"<<endl;
    return out;
}



