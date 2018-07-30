#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    Node();
    ~Node();
    Node* searchNode(int nodeIndex);
    void deleteNode();
    void preOrderTraverse();
    void inOrderTraverse();
    void postOrderTraverse();
    void setIndex(int index);
    int getIndex();
    void setData(T data);
    T getData();
    void setLChild(Node<T> *);
    Node<T>* getLChild();
    void setRChild(Node<T> *);
    Node<T>* getRChild();
    void setParent(Node<T> *);
    Node<T>* getParent();
private:
    int index;
    T data;
    Node<T> *pLChild;
    Node<T> *pRChild; 
    Node<T> *pParent;
};

template <typename T>
Node<T>::Node()
{
    this->index = 0;
//    this->data = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
    cout<<"---"<<endl;
}

template <typename T>
Node<T>::~Node()
{

}

template <typename T>
Node<T>* Node<T>::searchNode(int nodeIndex)
{
    if(this->index == nodeIndex)
    {
	return this;
    } 

    Node *temp = NULL; 
    if(this->pLChild != NULL)
    {
        if(this->pLChild->index == nodeIndex)
        {
	    return this->pLChild;
        } 
        else 
        {
        //    searchNode(this->pLChild->index); //思路混乱啦
    	    temp = this->pLChild->searchNode(nodeIndex);
 	    if(temp != NULL)
  	    {
		return temp;
 	    }
        }
    }
    

    if(this->pRChild != NULL)
    {
	if(this->pRChild->index == nodeIndex)
     	{
	    return this->pRChild;
	}
	else 
  	{
	 //   searchNode(this->pRChild->index);	//思路混乱了
  	    temp = this->pRChild->searchNode(nodeIndex);
	    if(temp != NULL)
  	    {
		return temp;
	    }
	}
	
    }
    return NULL;
}

template <typename T>
void Node<T>::deleteNode()
{
    if(this->pLChild != NULL)
    {
	this->pLChild->deleteNode();	
    }

    if(this->pRChild != NULL)
    {
	this->pRChild->deleteNode();
    }

    if(this->pParent != NULL)
    {
	if(this->pParent->pLChild == this)
   	{
	    this->pParent->pLChild = NULL;
 	}
  
	if(this->pParent->pRChild == this)
	{
	    this->pParent->pRChild = NULL;
	}
    }
 
    delete this;
    //cout<<this->index<<","<<this->data<<","<<this<<endl;
}

template <typename T>
void Node<T>::preOrderTraverse()
{
    cout<<this->index<<"\t"<<this->data<<endl;
    if(this->pLChild != NULL)
    {
	this->pLChild->preOrderTraverse();
    }

    if(this->pRChild != NULL)
    {
	this->pRChild->preOrderTraverse();
    }
}

template <typename T>
void Node<T>::inOrderTraverse()
{
    if(this->pLChild != NULL)
    {
	this->pLChild->inOrderTraverse();
    }
    cout<<this->index<<"\t"<<this->data<<endl;
    if(this->pRChild != NULL)
    {
	this->pRChild->inOrderTraverse();
    }
}

template <typename T>
void Node<T>::postOrderTraverse()
{
    if(this->pLChild != NULL)
    {
	this->pLChild->postOrderTraverse();
    }
    if(this->pRChild != NULL)
    {
	this->pRChild->postOrderTraverse();
    }
    cout<<this->index<<"\t"<<this->data<<endl;
}


template <typename T>
void Node<T>::setIndex(int index)
{
    this->index = index;
}

template <typename T>
int Node<T>::getIndex()
{
    return this->index;
}

template <typename T>
void Node<T>::setData(T data)
{
    this->data = data;
}

template <typename T>
T Node<T>::getData()
{
    return this->data;
}

template <typename T>
void Node<T>::setLChild(Node<T> *pLChild)
{
    this->pLChild = pLChild;
}

template <typename T>
Node<T>* Node<T>::getLChild()
{
    return this->pLChild;
}

template <typename T>
void Node<T>::setRChild(Node<T> *pRChild)
{
    this->pRChild = pRChild;
}

template <typename T>
Node<T>* Node<T>::getRChild()
{
    return this->pRChild;
}

template <typename T>
void Node<T>::setParent(Node<T> *pParent)
{
    this->pParent = pParent;
}

template <typename T>
Node<T>* Node<T>::getParent()
{
    return this->pParent;
}
#endif
