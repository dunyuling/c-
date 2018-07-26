#ifndef _MyStack_H_ 
#define _MyStack_H_ 

#include "Coordinate.h"

class MyStack
{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(Coordinate elem);
    bool pop(Coordinate &elem);
    void stackTraverse();
private:
    Coordinate *m_pStack;
    int m_iSize;
    int m_iTop;
};
#endif
