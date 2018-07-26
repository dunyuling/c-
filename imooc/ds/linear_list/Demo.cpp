#include "List.h"
#include "Coordinate.h"
#include <iostream>
using namespace std;

#define size 5 
int main()
{
    Coordinate c1(1,1);
    Coordinate c2(2,2);
    Coordinate c3(3,3);
    Coordinate c4(4,4);

    List<Coordinate> *pList = new List<Coordinate>(3);
    pList->insertElem(0,&c1);
    pList->insertElem(1,&c2);
    pList->insertElem(2,&c3);
//    pList->insertElem(3,&c4);//越界之后如何重新申请内存
    pList->listTraverse();
  
    int j = pList->locateElem(&c2);
    cout<<"j:"<<j<<endl; 

    return 0;
}
