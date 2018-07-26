#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int queueCapacity)
{
    m_iQueueCapacity = queueCapacity;
    m_pQueue = new int[m_iQueueCapacity];
    clearQueue();
}

MyQueue::~MyQueue()
{
    delete []m_pQueue;
    m_pQueue = NULL;
}

void MyQueue::clearQueue()
{
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLen = 0;
}

bool MyQueue::queueEmpty() const
{
    return m_iQueueLen == 0;
}

int MyQueue::queueLength() const
{
    return m_iQueueLen;
}

bool MyQueue::queueFull() const
{
    return m_iQueueCapacity == m_iQueueLen;
}


bool MyQueue::enQueue(int element) 
{
    if(queueFull()) 
    {
        return false;
    } 
    else
    {
        m_pQueue[m_iTail] = element;
	m_iTail++;
        m_iTail = m_iTail%m_iQueueCapacity; 
	m_iQueueLen++;
        return true;
    }
}

bool MyQueue::deQueue(int &element)
{
    if(queueEmpty())
    {
        return false;
    }
    
    element = m_pQueue[m_iHead];
    m_iHead++; 
    m_iHead = m_iHead % m_iQueueCapacity;	
    m_iQueueLen--;
    return true;
}

void MyQueue::queueTraverse()
{
    cout<<endl;
    for(int i=m_iHead;i<m_iQueueLen + m_iHead;i++)
    {
	cout<<m_pQueue[i%m_iQueueCapacity]<<endl;
    } 
    cout<<endl;
}


/**
int main() 
{
    MyQueue *p = new MyQueue(4);
    delete p;
    p = NULL;
    return 0;
}
**/
