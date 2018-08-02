#include "CMap.h"
#include <iostream>
#include <cstring>
using namespace std;


CMap::CMap(int m_iCapacity)
{
    this->m_iCapacity = m_iCapacity;
    this->m_iNodeCount = 0;
    this->m_pNodeArray = new Node[m_iCapacity];
    this->m_pMatrix = new int[m_iCapacity*m_iCapacity];
    memset(this->m_pMatrix,0 , m_iCapacity*m_iCapacity*sizeof(int));
}

CMap::~CMap()
{
    delete []m_pNodeArray;
    m_pNodeArray = NULL;
    delete []m_pMatrix;
    m_pMatrix = NULL; 
}

bool CMap::addNode(Node *pNode)
{
    if(pNode == NULL)
    {
	return false;
    }
    m_pNodeArray[m_iNodeCount].setData(pNode->getData());
    m_iNodeCount++;
    return true;
}

void CMap::resetNode()
{
    for(int i=0;i<m_iNodeCount;i++)
    {
	m_pNodeArray[i].setVisited(false);
    }
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val)
{
    if(row<0||row>=m_iCapacity)
    {
	return false;
    }
    if(col<0||col>=m_iCapacity)
    {
	return false;
    }
    m_pMatrix[row*m_iCapacity+col] = val;
    return true;    
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col ,int val)
{
    if(row<0||row>=m_iCapacity)
    {
	return false;
    }
    if(col<0||col>=m_iCapacity)
    {
	return false;
    }
    m_pMatrix[row*m_iCapacity+col]=val;
    m_pMatrix[col*m_iCapacity+row]=val;
    return true;
}

void CMap::printMatrix()
{
    for(int i=0;i<m_iCapacity;i++)
    {
	for(int j=0;j<m_iCapacity;j++)
	{
	    cout<<m_pMatrix[i*m_iCapacity+j]<<"\t";
 	}
	cout<<endl;
    }
}

void CMap::depthFirstTraverse(int nodeIndex)
{
    cout<<m_pNodeArray[nodeIndex].getData()<<" ";
    m_pNodeArray[nodeIndex].setVisited(true);

    int val = 0;
    for(int i=0;i<m_iCapacity;i++)
    {
	getValueFromMatrix(nodeIndex,i,val);
	if(val==1)
	{
	    if(m_pNodeArray[i].isVisited())
	    {
		continue;
	    }
	    else 
 	    {
		depthFirstTraverse(i);
	    } 
	}
	else
	{
	    continue;
	}
    }
} 

void CMap::breadthFirstTraverse(int nodeIndex)
{
    cout<<m_pNodeArray[nodeIndex].getData()<<" ";
    m_pNodeArray[nodeIndex].setVisited(true);

    vector<int> curVec;
    curVec.push_back(nodeIndex);

    breadthFirstTraverseImpl(curVec); 
}

void CMap::breadthFirstTraverseImpl(vector<int> preVec)
{
    int value;
    vector<int> curVec;
    for(int i=0;i<(int)preVec.size();i++)
    {
	for(int j=0;j<m_iCapacity;j++)
	{
	    getValueFromMatrix(preVec[i],j,value);
	    if(value!=0)
  	    {
		if(m_pNodeArray[j].isVisited())
		{
		    continue;
		}
		else
		{
		    cout<<m_pNodeArray[j].getData()<<" ";
		    m_pNodeArray[j].setVisited(true); 
		    curVec.push_back(j);
		}
	    }
	}
    }

    if(curVec.size() == 0)
    {
	return;
    }
    else 
    {
	breadthFirstTraverseImpl(curVec);
    }
}

bool CMap::getValueFromMatrix(int row,int col,int &val)
{
    if(row<0||row>=m_iCapacity)
    {
	return false;
    }
    if(col<0||col>=m_iCapacity)
    {
	return false;
    }

    val=m_pMatrix[row*m_iCapacity+col];
    return true;
}
