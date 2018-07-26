#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
    Coordinate coor1(1,2);
    Coordinate &coor2 = -coor1;
    Coordinate &coor3 = coor1.operator-();
    cout<<&coor1<<","<<&coor2<<","<<&coor3<<endl;
    coor2.printCoor();
    cout<<&(-coor1)<<endl;
 
    return 0;
}
