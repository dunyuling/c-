#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
    Coordinate coor1(1,2);
    Coordinate coor2(3,4);
    Coordinate coor3 = coor1.operator+(coor2);
    cout<<&coor1<<","<<&coor2<<","<<&coor3<<endl;
    coor3.printCoor();
    cout<<sizeof(Coordinate)<<endl;
    cout<<sizeof(coor1)<<endl;
    try 
    {
	cout<<coor3[0]<<","<<coor3.operator[](1)<<endl;
        cout<<coor3[3]<<endl;
    }
    catch(int &i)
    {
	cout<<"i cant be "<<i<<" must be 0 or 1"<<endl;
    }
    cout<<coor3[0]<<","<<coor3.operator[](1)<<endl;

    return 0;
}
