#ifndef _MyStack_H_ 
#define _MyStack_H_ 

#include <iostream>
using namespace std;

template <typename T>
class MyStack
{
public:
    MyStack(int size);
    ~MyStack();
    bool stackEmpty();
    bool stackFull();
    void clearStack();
    int stackLength();
    bool push(T elem);
    bool pop(T &elem);
    void stackTraverse(bool inverted);
private:
    T *m_pStack;
    int m_iSize;
    int m_iTop;
};

template <typename T>
MyStack<T>::MyStack(int size)
{
    m_iSize = size;
    m_pStack = new T[size];
    clearStack();
}

template <typename T>
MyStack<T>::~MyStack()
{
    delete []m_pStack;
    m_pStack = NULL;
}

template <typename T>
bool MyStack<T>::stackEmpty()
{
    return 0 == m_iTop;
}

template <typename T>
bool MyStack<T>::stackFull()
{
    return m_iTop == m_iSize;
}

template <typename T>
void MyStack<T>::clearStack()
{
   m_iTop = 0;
}


template <typename T>
int MyStack<T>::stackLength()
{
    return m_iTop;
}

template <typename T>
bool MyStack<T>::push(T elem)
{
    if(!stackFull()) 
    {
        m_pStack[m_iTop++] = elem;
        return true;
    } 
    return false;
}

template <typename T>
bool MyStack<T>::pop(T &elem)
{
    if(!stackEmpty())
    {
        elem = m_pStack[--m_iTop];
        return true;
    }
    return false;
}

template <typename T>
void MyStack<T>::stackTraverse(bool inverted)
{
    if(!inverted)
    {
        for(int i=0;i<m_iTop;i++)
        {
            cout<<m_pStack[i]<<endl;  
        }
    }
    else 
    {
	for(int i=m_iTop-1;i>=0;i--)
        {
	    cout<<m_pStack[i]<<endl;
        }
    }
} 

#endif
