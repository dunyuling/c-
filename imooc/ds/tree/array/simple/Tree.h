#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

class Tree
{
public:
    Tree(int m_iSize, int *pRoot);
    ~Tree();
    int *searchNode(int nodeIndex);
    bool addNode(int nodeIndex, int direction, int *pNode);
    bool deleteNode(int nodeIndex, int *pNode);
    void treeTraverse();
private:
    int *m_pTree;
    int m_iSize;
};
#endif
