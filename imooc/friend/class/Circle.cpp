#include "Circle.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;

Circle::Circle(int m_iX,int m_iY):coor(m_iX,m_iY)
{
}

void Circle::printCoor()
{
    coor.printCoor();
    cout<<"Circle x:"<<coor.m_iX<<",y:"<<coor.m_iY<<endl;
}
