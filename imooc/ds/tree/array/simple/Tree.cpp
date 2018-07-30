#include "Tree.h"

Tree::Tree(int m_iSize, int *pRoot)
{
    m_pTree = new int[m_iSize];
    this->m_iSize = m_iSize;    
    for(int i=0;i<m_iSize;i++)
    {
	m_pTree[i] = 0;
    }
    m_pTree[0] = *pRoot;
}

Tree::~Tree()
{
    delete []m_pTree;
    m_pTree = NULL;
}

int* Tree::searchNode(int nodeIndex)
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

bool Tree::addNode(int nodeIndex, int direction, int *pNode)
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

bool Tree::deleteNode(int nodeIndex, int *pNode)
{
    if(nodeIndex <0 || nodeIndex >= m_iSize)
    {
	return false;
    }
   
    if(m_pTree[nodeIndex] == 0)
    {
	return false;
    }

    *pNode = m_pTree[nodeIndex];
    m_pTree[nodeIndex] = 0;
}

void Tree::treeTraverse()
{
    for(int i=0;i<m_iSize;i++)
    {
	cout<<i<<":"<<m_pTree[i]<<",";
    }
    cout<<endl;
}
