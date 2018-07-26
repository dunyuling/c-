#include "MyStack.h"
#include <iostream>
using namespace std;
#define size 4

int main(void)
{
    MyStack *pStack = new MyStack(size);
  
    cout<<"push a "<<pStack->push('a')<<endl;
    cout<<"push b "<<pStack->push('b')<<endl;
    cout<<"push c "<<pStack->push('c')<<endl;
    cout<<"push d "<<pStack->push('d')<<endl;
    cout<<"push e "<<pStack->push('e')<<endl;;
    pStack->stackTraverse();
    
    char elem = 0;
    bool popSucc;
    for(int i=0;i<size;i++)
    {
        popSucc = pStack->pop(elem);
	cout<<"pop "<<i+1<<" time,successful is "<<popSucc<<" ,pop element is "<<elem<<endl;
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
