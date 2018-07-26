#ifndef LIST_H
#define LIST_H

template <typename T>
class List
{
public:
    List(int m_iSize);
    ~List();
    void clearList();
    bool listEmpty();
    int listLength();
    bool getElem(int i, T *);
    int locateElem(T *);
    bool priorElem(T * ,T  *);
    bool nextElem(T *,T *);
    bool insertElem(int , T *);
    bool deleteElem(int, T *);
    void listTraverse();
private:
    T *m_pList;
    int m_iSize;
    int m_iLength;
};

#include <iostream>
using namespace std;

template <typename T>
List<T>::List(int m_iSize)
{
    this->m_iSize = m_iSize;
    this->m_pList = new T[m_iSize];
    this->m_iLength = 0;
}

template <typename T>
List<T>::~List()
{
    delete []m_pList;
    m_pList = NULL;
}

template <typename T>
void List<T>::clearList()
{
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
bool List<T>::getElem(int i, T *e)
{
    if(i<0 || i>= m_iLength)
    {
  	return false;
    }
    *e = m_pList[i];
    return true;
}

template <typename T>
int List<T>::locateElem(T *e)
{
    for(int i=0; i<this->m_iLength; i++)
    {
	if(*e == this->m_pList[i])
       // if(this->m_pList[i] == *e)
        {
	     return i;
        }
    }
    return -1;
}

template <typename T>
bool List<T>::priorElem(T *curElem, T *preElem)
{
    int curIndex = locateElem(curElem);
    if(curIndex == -1 || curIndex == 0) 
    {
	return false;
    } 
    *preElem = this->m_pList[curIndex-1];
    return true;
}

template <typename T>
bool List<T>::nextElem(T *curElem, T *nextElem)
{
    int curIndex = locateElem(curElem);
    if(curIndex == -1 || curIndex == this->m_iLength - 1)
    {
 	return false;
    }
    *nextElem = this->m_pList[curIndex+1]; 
//    cout<<"curIndex:"<<curIndex<<",*nextElem:"<<*nextElem<<","<<this->m_pList[curIndex+1]<<endl;
//    cout<<nextElem<<endl;
    return true;
}

template <typename T>
bool List<T>::insertElem(int i, T *e)
{
    if(i<0||i>m_iLength)
    {
	return false;
    }

    for(int k=m_iLength-1;k>=i; k--) 
    {
	this->m_pList[k+1] = this->m_pList[k]; 	
    }
    this->m_pList[i] = *e; 
    this->m_iLength++;
    return true;
}

template <typename T>
bool List<T>::deleteElem(int i, T *e)
{
    if(i<0||i>m_iLength-1)
    {
	return false;
    }
  
    *e = this->m_pList[i-1];
    for(int k=i+1;k<=this->m_iLength-1;k++) 
    {
	this->m_pList[k-1] = this->m_pList[k];
    }
    this->m_iLength--;
    return true;
} 

template <typename T>
void List<T>::listTraverse()
{
    for(int i=0; i<this->m_iLength; i++)
    {
        cout<<this->m_pList[i];
        if(i != m_iLength -1)
        {
	    cout<<",";
        }
    }
    cout<<endl;
}
#endif
