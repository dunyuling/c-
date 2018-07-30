#ifndef TREE_H 
#define TREE_H

#include "Node.h"

class Tree
{
public:
    Tree();
    ~Tree();
    Node *searchNode(int nodeIndex);
    bool addNode(int nodeIndex,int direction,Node *pNode);
    bool deleteNode(int nodeIndex,Node *pNode);
    void preOrderTraverse();
    void inOrderTraverse();
    void postOrderTraverse();
    bool isEmpty();
    void setEmpty(bool m_bEmpty);
private:
    Node *m_pRoot;
    bool m_bEmpty;
};

Tree::Tree()
{
    m_pRoot = new Node();
    setEmpty(false);
}

Tree::~Tree()
{
    deleteNode(0,NULL);
}

Node* Tree::searchNode(int nodeIndex)
{
    return m_pRoot->searchNode(nodeIndex);
}

bool Tree::addNode(int nodeIndex, int direction, Node *pNode)
{
    Node *tempNode = searchNode(nodeIndex);
    if(tempNode == NULL)
    {
	return false;
    }
	
    Node *node = new Node(); 
    if(node == NULL)
    {
	return false;
    }
    node->setIndex(pNode->getIndex());
    node->setData(pNode->getData());
    node->setParent(tempNode);

    if(0==direction)
    {
        tempNode->setLChild(node);
    }


    if(1==direction)
    {
     	tempNode->setRChild(node);
    }

    return true;
}


bool Tree::deleteNode(int nodeIndex,Node *pNode)
{
    Node *tempNode = searchNode(nodeIndex);
    if(tempNode == NULL)
    {
	return false;
    }

    if(pNode != NULL)
    {
        pNode->setData(tempNode->getData());
        pNode->setIndex(tempNode->getIndex());
    }
    tempNode->deleteNode();
    if(tempNode == m_pRoot)
    {
//	cout<<m_pRoot<<","<<tempNode<<endl;
    }
    return true;
}

void Tree::preOrderTraverse()
{
    m_pRoot->preOrderTraverse();
}

void Tree::inOrderTraverse()
{
    m_pRoot->inOrderTraverse();
}

void Tree::postOrderTraverse()
{
    //bool isNull = m_pRoot == NULL;
    //cout<<"isNull:"<<isNull<<endl;
    m_pRoot->postOrderTraverse();
}

void Tree::setEmpty(bool m_bEmpty)
{
    this->m_bEmpty = m_bEmpty;
}

bool Tree::isEmpty()
{
    return m_bEmpty;
}
#endif
