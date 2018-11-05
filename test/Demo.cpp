#include "City.h"
#include <iostream>
using namespace std;

int main()
{
    City *city = new City[3];
    for(int i=0;i<3;i++,city++)
    {
	cout<<city<<endl;
    }    
    City *p = new City();
    cout<<p<<endl;

    return 0;
}
