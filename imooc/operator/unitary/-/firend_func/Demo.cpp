#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{

    Coordinate coor1(1,2);
    -coor1;
    Coordinate &coor2 = operator-(coor1);
    cout<<&coor1<<","<<&coor2<<endl;
    coor1.printCoor();
    coor2.printCoor();
    return 0;
}
