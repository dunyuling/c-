#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
    //heap 
    /*
    Coordinate *p1 = NULL;
    p1 = new Coordinate;

    Coordinate *p2 = new Coordinate();
  
    p1->setX(1);
    p1->setY(2);
    (*p2).setX(3);
    (*p2).setY(4);


    cout<<"sum x:"<<p1->getX() + (*p2).getX()<<endl;
    cout<<"sum y:"<<p1->getY() + (*p2).getY()<<endl;

    cout<<"addr p1:"<<&p1<<endl;//": value p1: "<<p1<<endl;
    p1->printXAddr();
    p1->printYAddr();
    cout<<"addr p2:"<<&p2<<endl;//": value p2: "<<p2<<endl;
    (*p2).printXAddr();
    (*p2).printYAddr();

    delete p1;
    p1 = NULL;
    delete p2;
    p2 = NULL;
    */

    //stack
    Coordinate p1;
    Coordinate *p2 = &p1;
    p2->setX(1);
    p2->setY(2);

    cout<<"addr p1:"<<&p1<<endl;
    p1.printXAddr();
    p1.printYAddr();
    cout<<"addr p2:"<<&p2<<": value p2: "<<p2<<endl;
    (*p2).printXAddr();
    (*p2).printYAddr();
     
    return 0;
}
