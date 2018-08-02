#ifndef CMAP_H
#define CMAP_H

#include "Node.h"
#include <vector>
using namespace std;

class CMap
{
public:
    CMap(int m_iCapacity);
    ~CMap();
    bool addNode(Node *pNode);
    void resetNode();
    bool setValueToMatrixForDirectedGraph(int row, int col, int val=1);
    bool setValueToMatrixForUndirectedGraph(int row, int col ,int val=1);

    void printMatrix();
   
    void depthFirstTraverse(int nodeIndex);
    void breadthFirstTraverse(int nodeIndex);

private:
    bool getValueFromMatrix(int row, int col, int &val);
    void breadthFirstTraverseImpl(vector<int> preVec);
   
private:
    int m_iCapacity;    //图中最多可以容纳的顶点数
    int m_iNodeCount;   //已经添加的顶点个数
    Node *m_pNodeArray; //用来存放顶点数组
    int *m_pMatrix;     //用来存放临接矩阵
};
#endif
