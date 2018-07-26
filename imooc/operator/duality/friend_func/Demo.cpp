#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{

    Coordinate coor1(1,2);
    Coordinate coor2(3,3);
    Coordinate coor3 = operator+(coor1,coor2);
    cout<<&coor1<<","<<&coor2<<","<<&coor3<<endl;
    coor1.printCoor();
    coor2.printCoor();
    coor3.printCoor();

    cout<<endl;
    cout<<coor1;
    operator<<(cout,coor2);
    return 0;
}
