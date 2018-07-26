#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
    /*
    Coordinate coor1(1,2);
    Coordinate &coor2 = ++coor1;
    Coordinate &coor3 = coor1.operator++();
    cout<<&coor1<<","<<&coor2<<","<<&coor3<<endl;
    (++coor1).printCoor();
    cout<<&(++coor1)<<endl;
    */
 
    Coordinate coor1(3,4);
    Coordinate coor2 = coor1++;
    cout<<&coor1<<endl;
    cout<<&coor2<<endl;
    coor1.printCoor();
    coor2.printCoor();
    Coordinate coor3 = coor1.operator++(0);
    cout<<&coor3<<endl; 
    coor3.printCoor();
    Coordinate &coor4 = ++coor1;
    cout<<&coor4<<endl;
    coor4.printCoor();
 
    return 0;
}
