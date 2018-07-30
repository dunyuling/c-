#ifndef TREE_H 
#define TREE_H

#include "Node.h"

template <typename T>
class Tree
{
public:
    Tree();
    ~Tree();
    Node<T> *searchNode(int nodeIndex);
    bool addNode(int nodeIndex,int direction,Node<T> *pNode);
    bool deleteNode(int nodeIndex,Node<T> *pNode);
    void preOrderTraverse();
    void inOrderTraverse();
    void postOrderTraverse();
    bool isEmpty();
    void setEmpty(bool m_bEmpty);
private:
    Node<T> *m_pRoot;
    bool m_bEmpty;
};

template <typename T>
Tree<T>::Tree()
{
    m_pRoot = new Node<T>();
    setEmpty(false);
}

template <typename T>
Tree<T>::~Tree()
{
    deleteNode(0,NULL);
}

template <typename T>
Node<T>* Tree<T>::searchNode(int nodeIndex)
{
    return m_pRoot->searchNode(nodeIndex);
}

template <typename T>
bool Tree<T>::addNode(int nodeIndex, int direction, Node<T> *pNode)
{
    Node<T> *tempNode = searchNode(nodeIndex);
    if(tempNode == NULL)
    {
	return false;
    }
	
    Node<T> *node = new Node<T>(); 
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


template <typename T>
bool Tree<T>::deleteNode(int nodeIndex,Node<T> *pNode)
{
    Node<T> *tempNode = searchNode(nodeIndex);
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
    return true;
}

template <typename T>
void Tree<T>::preOrderTraverse()
{
    m_pRoot->preOrderTraverse();
}

template <typename T>
void Tree<T>::inOrderTraverse()
{
    m_pRoot->inOrderTraverse();
}

template <typename T>
void Tree<T>::postOrderTraverse()
{
    m_pRoot->postOrderTraverse();
}

template <typename T>
void Tree<T>::setEmpty(bool m_bEmpty)
{
    this->m_bEmpty = m_bEmpty;
}

template <typename T>
bool Tree<T>::isEmpty()
{
    return m_bEmpty;
}
#endif
