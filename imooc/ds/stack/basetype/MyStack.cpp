#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size)
{
    m_iSize = size; 
    m_pStack = new char[size];
    clearStack();
}

MyStack::~MyStack() 
{
    delete []m_pStack;
    m_pStack = NULL;
}

bool MyStack::stackEmpty()
{
    return 0 == m_iTop;
}

bool MyStack::stackFull()
{
    return m_iTop == m_iSize;
}

void MyStack::clearStack()
{
   m_iTop = 0; 
}


int MyStack::stackLength()
{
    return m_iTop;
}

bool MyStack::push(char elem)
{
    if(!stackFull()) 
    {
	m_pStack[m_iTop++] = elem;
	return true;
    } 
    return false;
}

bool MyStack::pop(char &elem)
{
    if(!stackEmpty())
    {
	elem = m_pStack[--m_iTop];
	return true;
    }
    return false;
}

void MyStack::stackTraverse()
{
    for(int i=0;i<m_iTop;i++)
    {
	cout<<m_pStack[i]<<endl;
    }
} 

