#include "MyQueue.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) 
{
    MyQueue *p = new MyQueue(4);
    

    cout<<"so difficult"<<endl; 
    p->enQueue(1);    
    p->enQueue(2);    
    p->enQueue(3);    
    p->enQueue(4);    
    p->queueTraverse(); 

    int element = 0;
    p->deQueue(element);
    cout<<"element = "<<element<<endl;

    p->deQueue(element);
    cout<<"element = "<<element<<endl;

    p->queueTraverse();

    p->clearQueue();
    p->queueTraverse();

    p->enQueue(10);
    p->enQueue(20);
    p->queueTraverse();
    delete p;
    p = NULL;
    return 0;
}
