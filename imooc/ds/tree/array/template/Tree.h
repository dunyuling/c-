#ifndef TREE_H
#define TREE_H

#include "Node.h"
#include <iostream>
using namespace std;

template <typename T>
class Tree
{
public:
    Tree(int m_iSize, T *pRoot,const T *zeroNode);
    ~Tree();
    T *searchNode(int nodeIndex);
    bool addNode(int nodeIndex, int direction, T *pNode);
    bool deleteNode(int nodeIndex, T *pNode,const T *zeroNode);
    void treeTraverse();
private:
    T *m_pTree;
    int m_iSize;
};

template <typename T>
Tree<T>::Tree(int m_iSize, T *pRoot,const T *zeroNode)
{
    m_pTree = new T[m_iSize];
    this->m_iSize = m_iSize;    
    for(int i=0;i<m_iSize;i++)
    {
	m_pTree[i] = *zeroNode;
    }
    m_pTree[0] = *pRoot;
}

template <typename T>
Tree<T>::~Tree()
{
    delete []m_pTree;
    m_pTree = NULL;
}

template <typename T>
T* Tree<T>::searchNode(int nodeIndex)
{
    if(nodeIndex<0 || nodeIndex>=m_iSize)
    {
	return NULL;
    }

    if(m_pTree[nodeIndex] == 0)
    {
	return NULL;
    }
    return &m_pTree[nodeIndex]; 
}

template <typename T>
bool Tree<T>::addNode(int nodeIndex, int direction, T *pNode)
{
    if(nodeIndex<0 || nodeIndex>=m_iSize)
    {
	return NULL;
    }    
    
    if(m_pTree[nodeIndex] == 0)
    {
	return NULL;
    }

    if(direction  == 0)
    {
	int l_nodeIndex = nodeIndex * 2 + 1;
        if( l_nodeIndex >= m_iSize)
        {
	    return false;
	}
  	
	if(m_pTree[l_nodeIndex] !=0 )
 	{
	    return false;
	}
        m_pTree[l_nodeIndex]= *pNode;
    }
    
    if(direction == 1)
    {
	int r_nodeIndex = nodeIndex * 2 + 2;
    	if(r_nodeIndex >= m_iSize)
	{
	    return false;
	}

	if(m_pTree[r_nodeIndex] != 0)
	{
	     return false;
	}
     	m_pTree[r_nodeIndex] = *pNode;
    }
    return false;

}

template <typename T>
bool Tree<T>::deleteNode(int nodeIndex, T *pNode,const T *zeroNode)
{
    if(nodeIndex <0 || nodeIndex >= m_iSize)
    {
	return false;
    }
   
    if(m_pTree[nodeIndex] == *zeroNode)
    {
	return false;
    }

    *pNode = m_pTree[nodeIndex];
    m_pTree[nodeIndex] = 0;
}

template <typename T>
void Tree<T>::treeTraverse()
{
    for(int i=0;i<m_iSize;i++)
    {
	cout<<i<<":"<<m_pTree[i]<<",";
    }
    cout<<endl;
}
#endif
