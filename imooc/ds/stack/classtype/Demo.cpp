#include "MyStack.h"
#include <iostream>
using namespace std;

int main(void)
{
    MyStack *pStack = new MyStack(4);
  
    cout<<"push Coordinate(1,1) "<<pStack->push(Coordinate(1,1))<<endl;
    cout<<"push Coordinate(2,2) "<<pStack->push(Coordinate(2,2))<<endl;
    cout<<"push Coordinate(3,3) "<<pStack->push(Coordinate(3,3))<<endl;
    cout<<"push Coordinate(4,4) "<<pStack->push(Coordinate(4,4))<<endl;
    cout<<"push Coordinate(5,5) "<<pStack->push(Coordinate(5,5))<<endl;
    pStack->stackTraverse();
    
    Coordinate elem = 0;
    bool popSucc;
    for(int i=0;i<4;i++)
    {
        popSucc = pStack->pop(elem);
	cout<<"pop "<<i+1<<" time,successful is "<<popSucc<<" ,pop element is ";
 	elem.printCoordinate();
        pStack->stackTraverse();
    }

    pStack->clearStack();

    if(pStack->stackEmpty())
    {
	cout<<"stack is empty"<<endl;
    }

    if(pStack->stackFull())
    {
	cout<<"stack is full"<<endl;
    }

    cout<<"stack has "<<pStack->stackLength()<<" elements"<<endl;
    delete pStack;
    pStack = NULL;
    return 0;
}
