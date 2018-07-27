#ifndef LIST_H
#define LIST_H

#include "Node.h"
#include <iostream>
using namespace std;

template <typename T> 
class List
{
public:
    List();
    ~List();
    void clearList();
    bool listEmpty();
    int listLength();
    bool getElem(int i,Node<T> *pNode); 
    int locateElem(Node<T> *pNode);
    bool priorElem(Node<T> *pCurNode,Node<T> *pPreNode);
    bool nextElem(Node<T> *pCurNode, Node<T> *pNextNode);
    void listTraverse();

    bool listInsert(int i,Node<T> *pNode);
    bool listDelete(int i,Node<T> *pNode);
    bool listInsertHead(Node<T> *pNode);
    bool listInsertTail(Node<T> *pNode);
private:
    Node<T> *m_pList;
    int m_iLength;   
};

template <typename T>
List<T>::List()
{
    this->m_pList = new Node<T>;
    T t;
    this->m_pList->setData(t);
    this->m_pList->setNext(NULL);
    this->m_iLength = 0;
}

template <typename T>
List<T>::~List()
{
    clearList();        
    delete this->m_pList;
    this->m_pList = NULL;
}

template <typename T>
void List<T>::clearList()
{
    Node<T> *curNode = this->m_pList->getNext();   
    while(curNode != NULL)
    {
        Node<T> *temp = curNode->getNext();
        delete curNode;
        curNode = NULL;
        curNode = temp;
    }
    this->m_pList->setNext(NULL);
    this->m_iLength = 0;
}

template <typename T>
bool List<T>::listEmpty()
{
    return this->m_iLength == 0;
}

template <typename T>
int List<T>::listLength()
{
   return this->m_iLength;
}

template <typename T>
bool List<T>::getElem(int i, Node<T> *pNode)
{
    if(m_iLength == 0)
    {
	return -1;
    }

    if(i<0 || i>=m_iLength)
    {
	return false;
    }

    Node<T> *curNode = this->m_pList->getNext();
    int k = 0;
    while(k!=i)
    {
	curNode = curNode->getNext();
        k++;
    }
    pNode->setData(curNode->getData());
    return true; 
}

template <typename T>
int List<T>::locateElem(Node<T> *pNode)
{
    if(m_iLength == 0)
    {
	return -1;
    }

    Node<T> *curNode = this->m_pList->getNext();
    int k = 0;
    while(k<m_iLength)
    {
        if(curNode->getData() == pNode->getData())
        {
  	    return k;       	
        }
        curNode = curNode->getNext();
	k++;
    }
    return -1;  
}

template <typename T>
bool List<T>::priorElem(Node<T> *pCurNode, Node<T> *pPreNode)
{
   if(m_iLength == 0)
   {
       return false;
   } 
  
   Node<T> *curNode = this->m_pList;
   Node<T> *preNode = NULL; 
   while(curNode->getNext() != NULL)
   {
 	preNode = curNode;
	curNode = curNode->getNext();
     	if(curNode->getData() == pCurNode->getData())
  	{
	    if(preNode == this->m_pList)
	    {
		return false;
 	    }
	    pPreNode->setData(preNode->getData()); 
 	    return true;
 	}
   }
   
   return false; 
}

template <typename T>
bool List<T>::nextElem(Node<T> *pCurNode, Node<T> *pNextNode)
{
    if(m_iLength == 0)
    {
	return false;
    }

    Node<T> *curNode = this->m_pList;

    while(curNode->getNext() != NULL)
    {
	curNode = curNode->getNext();
 	if(curNode->getData() == pCurNode->getData())
	{
	    if(curNode->getNext() == NULL)
	    {
		return false;
 	    }
	    pNextNode->setData(curNode->getNext()->getData());
	    return true;
	}
    }
    return false;
}

template <typename T>
void List<T>::listTraverse()
{
    if(m_iLength == 0)
    {
	cout<<"this is a empty linked list"<<endl;
    }

    Node<T> *curNode = this->m_pList;
    while(curNode->getNext() != NULL)
    {
	curNode = curNode->getNext();
	cout<<curNode->getData()<<",";
    } 
}

template <typename T>
bool List<T>::listInsert(int i, Node<T> *pNode)
{
    if(i<0||i>m_iLength)
    {
	return false;
    }   

    int k = 0;
    Node<T> *curNode = this->m_pList;
    while(k!=i)
    {
	curNode = curNode->getNext();
  	k++;
    }
    Node<T> *newNode = new Node<T>;
    if(newNode == NULL)
    {
	return false;
    }

    newNode->setData(pNode->getData());
    newNode->setNext(curNode->getNext());
    curNode->setNext(newNode);
    this->m_iLength++;
    return true; 
}

template <typename T>
bool List<T>::listDelete(int i, Node<T> *pNode)
{
    if(i<0 || i>=m_iLength) //note:=
    {
	return false;
    }

    int k=-1;
    Node<T> *preNode = this->m_pList;
    while(++k!=i)
    {
        preNode = preNode->getNext();
    }
    
    Node<T> *curNode = preNode->getNext();
    pNode->setData(curNode->getData());
    preNode->setNext(curNode->getNext());
    delete curNode;
    curNode = NULL;
    this->m_iLength--;
    return true;
}

template <typename T>
bool List<T>::listInsertHead(Node<T> *pNode)
{
    Node<T> *newNode = new Node<T>;
    if(newNode == NULL)
    { 
	return false;
    }

    newNode->setData(pNode->getData());
    newNode->setNext(this->m_pList->getNext());
    this->m_pList->setNext(newNode);
    this->m_iLength++;
    return true;
}

template <typename T>
bool List<T>::listInsertTail(Node<T> *pNode)
{
    Node<T> *curNode = this->m_pList;
    while(curNode->getNext() != NULL)
    {
	curNode = curNode->getNext();
    }

    Node<T> *newNode = new Node<T>();
    if(newNode == NULL)
    {
	return false;
    }
    
    newNode->setData(pNode->getData());
    newNode->setNext(NULL);
    curNode->setNext(newNode); 
    this->m_iLength++;
    return true;
}
#endif
