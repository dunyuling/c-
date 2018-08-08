#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string>
using namespace std;

class City
{
friend ostream& operator<<(ostream &,const City &); 
public:
    City(string m_strName="00");
    ~City();
    string getName() const;
    bool operator==(const City &);
    bool operator!=(const City &);
    void operator=(const City &);
private:
    string m_strName;
};
#endif
