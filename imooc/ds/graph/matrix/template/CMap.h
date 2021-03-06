#ifndef CMAP_H
#define CMAP_H

#include "Node.h"
#include "Edge.h"
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class CMap
{
public:
    CMap(int m_iCapacity);
    ~CMap();
    bool addNode(Node<T> *pNode);
    void resetNode();
    bool setValueToMatrixForDirectedGraph(int row, int col, int val=1);
    bool setValueToMatrixForUndirectedGraph(int row, int col ,int val=1);

    void printMatrix();
   
    void depthFirstTraverse(int nodeIndex);
    void breadthFirstTraverse(int nodeIndex);
 
    void primTree(int nodeIndex); //普里姆最小生成树
    void kruskalTree();           //克鲁斯卡尔最小生成树
    

private:
    bool getValueFromMatrix(int row, int col, int &val);
    void breadthFirstTraverseImpl(vector<int> preVec);
   
    int getMinEdge(vector<Edge> );
    bool isInSet(vector<int> ,int );
    void mergeNodeSet(vector<int> &, vector<int> );    
private:
    int m_iCapacity;    //图中最多可以容纳的顶点数
    int m_iNodeCount;   //已经添加的顶点个数
    Node<T> *m_pNodeArray; //用来存放顶点数组
    int *m_pMatrix;     //用来存放临接矩阵

    Edge *m_pEdge;
};


template <typename T>
CMap<T>::CMap(int m_iCapacity)
{
    this->m_iCapacity = m_iCapacity;
    this->m_iNodeCount = 0;

    this->m_pNodeArray = new Node<T>[m_iCapacity];
    this->m_pMatrix = new int[m_iCapacity*m_iCapacity];
    memset(this->m_pMatrix,0 , m_iCapacity*m_iCapacity*sizeof(int));

    m_pEdge = new Edge[m_iCapacity-1];
}

template <typename T>
CMap<T>::~CMap()
{
    delete []m_pNodeArray;
    m_pNodeArray = NULL;
    delete []m_pMatrix;
    m_pMatrix = NULL; 
    delete []m_pEdge;
    m_pEdge = NULL;
}

template <typename T>
bool CMap<T>::addNode(Node<T> *pNode)
{
    if(pNode == NULL)
    {
	return false;
    }
    m_pNodeArray[m_iNodeCount].setData(pNode->getData());
    m_iNodeCount++;
    return true;
}

template <typename T>
void CMap<T>::resetNode()
{
    for(int i=0;i<m_iNodeCount;i++)
    {
	m_pNodeArray[i].setVisited(false);
    }
}

template <typename T>
bool CMap<T>::setValueToMatrixForDirectedGraph(int row, int col, int val)
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

template <typename T>
bool CMap<T>::setValueToMatrixForUndirectedGraph(int row, int col ,int val)
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

template <typename T>
void CMap<T>::printMatrix()
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

template <typename T>
void CMap<T>::depthFirstTraverse(int nodeIndex)
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

template <typename T>
void CMap<T>::breadthFirstTraverse(int nodeIndex)
{
    cout<<m_pNodeArray[nodeIndex].getData()<<" ";
    m_pNodeArray[nodeIndex].setVisited(true);

    vector<int> curVec;
    curVec.push_back(nodeIndex);

    breadthFirstTraverseImpl(curVec); 
}

template <typename T>
void CMap<T>::breadthFirstTraverseImpl(vector<int> preVec)
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

template <typename T>
bool CMap<T>::getValueFromMatrix(int row,int col,int &val)
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

template <typename T>
void CMap<T>::primTree(int nodeIndex)
{
    int val = 0;
    vector<int> nodeVec;
    vector<Edge> edgeVec;
    int edgeCount = 0;

    m_pNodeArray[nodeIndex].setVisited(true);
    nodeVec.push_back(nodeIndex);
    cout<<m_pNodeArray[nodeIndex].getData()<<endl;

    while(edgeCount<m_iCapacity-1)
    {
 	int temp = nodeVec.back();	
	for(int i=0;i<m_iCapacity;i++)
        {
	    getValueFromMatrix(temp,i,val);
	    if(val != 0)
	    {
		if(m_pNodeArray[i].isVisited())
		{
		    continue;
		}
		else 
		{
		    Edge edge(temp,i,val);
		    edgeVec.push_back(edge);
		}
	    }
        }

  	//从可选边集合中找到最小的边
	int edgeIndex =	getMinEdge(edgeVec);
	edgeVec[edgeIndex].setSelected(true);

	cout<<edgeVec[edgeIndex].getNodeIndexA()<<"---"<<edgeVec[edgeIndex].getNodeIndexB()<<" ";
	cout<<edgeVec[edgeIndex].getWeightValue()<<endl;

	m_pEdge[edgeCount] = edgeVec[edgeIndex];
	//m_pEdge[edgeCount] = new Edge(temp,edgeVec[edgeIndex].getNodeIndexB(),val);//使用new的方式会产生内存泄漏
	edgeCount++;

	int nextNodeIndex = edgeVec[edgeIndex].getNodeIndexB();
	nodeVec.push_back(nextNodeIndex);
	m_pNodeArray[nextNodeIndex].setVisited(true);
	cout<<m_pNodeArray[nextNodeIndex].getData()<<endl;
    }    
}

template <typename T>
int CMap<T>::getMinEdge(vector<Edge> edgeVec)
{
    int minWeight = 0;
    int minEdgeIndex = 0;

    int i = 0;
    for(;i<edgeVec.size();i++)
    {
 	if(!edgeVec[i].isSelected())	
	{
	    minWeight = edgeVec[i].getWeightValue();
	    minEdgeIndex = i;
	    break;
  	}
    }

    if(minWeight == 0)
    {
	return -1;
    }

    for(;i<edgeVec.size();i++)
    {
	if(!edgeVec[i].isSelected())
	{
	    if(minWeight>edgeVec[i].getWeightValue())
	    {
		minWeight = edgeVec[i].getWeightValue();
		minEdgeIndex = i;
	    }
  	}
    }
    return minEdgeIndex;
}

template <typename T>
void CMap<T>::kruskalTree()
{
    int val;
    int edgeCount = 0;

    //定义存放结点集合的数组
    vector<vector<int> > nodeSets;

    //第一步:取出所有边
    vector<Edge> edgeVec;
    for(int i=0;i<m_iCapacity;i++)
    {
	for(int j=i+1;j<m_iCapacity;j++)
 	{
	    getValueFromMatrix(i,j,val);
	    if(val!=0)
	    {
		Edge edge(i,j,val);
		edgeVec.push_back(edge);
   	    }
 	}
    }


    //第二步:从所有边中取出组成最小生成树的边
    //1.找到算法结束条件
    while(edgeCount<m_iCapacity-1)
    {
        //2.从边集合中找到最小边
        int minEdgeIndex = getMinEdge(edgeVec); 
	/*
	Edge minEdge = edgeVec[minEdgeIndex];//产生新的Edge对象,将使得edgeVec[i].isSelected()判断失效
	minEdge.setSelected(true);
	*/
	edgeVec[minEdgeIndex].setSelected(true);

        //3.找出最小边连接的点
	int nodeAIndex = edgeVec[minEdgeIndex].getNodeIndexA(); 
	int nodeBIndex = edgeVec[minEdgeIndex].getNodeIndexB();
//	cout<<nodeAIndex<<","<<nodeBIndex<<endl;

	bool nodeAIsInSet = false;
	bool nodeBIsInSet = false;

 	int nodeAInSetLabel = -1;
	int nodeBInSetLabel = -1;

        //4.找出点所在的点集合
	for(int i=0;i<nodeSets.size();i++)
	{
            nodeAIsInSet = isInSet(nodeSets[i],nodeAIndex);
//	    cout<<"a:"<<nodeAIndex<<","<<nodeAIsInSet<<endl;
	    if(nodeAIsInSet)
	    {
		nodeAInSetLabel = i;
	    }
	}

	for(int i=0;i<nodeSets.size();i++)
	{
            nodeBIsInSet = isInSet(nodeSets[i],nodeBIndex);
	    if(nodeBIsInSet)
	    {
		nodeBInSetLabel = i;
	    }
	}

        //5.根据点所在集合的不同做出不同的处理
	if(nodeAInSetLabel == -1 && nodeBInSetLabel == -1)
	{
	    vector<int> vec;
	    vec.push_back(nodeAIndex);
	    vec.push_back(nodeBIndex);
	    nodeSets.push_back(vec);
	}
	else if(nodeAInSetLabel == -1 && nodeBInSetLabel != -1)
	{
	    nodeSets[nodeBInSetLabel].push_back(nodeAIndex); 
	}
        else if(nodeAInSetLabel != -1 && nodeBInSetLabel == -1)
	{
	    nodeSets[nodeAInSetLabel].push_back(nodeBIndex);
	}
	else if(nodeAInSetLabel != -1 && nodeBInSetLabel != -1 && nodeAInSetLabel != nodeBInSetLabel)
	{
	    mergeNodeSet(nodeSets[nodeAInSetLabel],nodeSets[nodeBInSetLabel]);
	    for(int k=nodeBInSetLabel;k<nodeSets.size()-1;k++)
	    {
		nodeSets[k] = nodeSets[k+1];
	    } 
	}
	else if(nodeAInSetLabel != -1 && nodeBInSetLabel != -1 && nodeAInSetLabel == nodeBInSetLabel)
	{
	    continue;
	}
 	m_pEdge[edgeCount++] = edgeVec[minEdgeIndex];	
	cout<<edgeVec[minEdgeIndex].getNodeIndexA()<<"---"<<edgeVec[minEdgeIndex].getNodeIndexB()<<" "<<edgeVec[minEdgeIndex].getWeightValue()<<endl;
//	cout<<edgeCount<<","<<m_iCapacity<<endl;
//	cout<<endl;
    }
}

template <typename T>
bool CMap<T>::isInSet(vector<int> nodeSet,int nodeIndex)  
{
    for(int i=0;i<nodeSet.size();i++)
    {
	if(nodeSet[i] == nodeIndex)
	{
	    return true;   
	}
    }
    return false;
}

template <typename T>
void CMap<T>::mergeNodeSet(vector<int> &nodeSetA, vector<int> nodeSetB)
{
    for(int i=0;i<nodeSetB.size();i++)
    {
	nodeSetA.push_back(nodeSetB[i]);
    } 
}
#endif
