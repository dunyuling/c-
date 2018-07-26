#ifndef _MyStack_H_ 
#define _MyStack_H_ 

class MyStack
{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(char elem);
    bool pop(char &elem);
    void stackTraverse();
private:
    char *m_pStack;
    int m_iSize;
    int m_iTop;
};
#endif
