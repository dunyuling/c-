#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

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
    void setData(int data);
    int getData();
    void setLChild(Node *);
    Node* getLChild();
    void setRChild(Node *);
    Node* getRChild();
    void setParent(Node *);
    Node* getParent();
private:
    int index;
    int data;
    Node *pLChild;
    Node *pRChild; 
    Node *pParent;
};

Node::Node()
{
    this->index = 0;
    this->data = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
}

Node::~Node()
{

}

Node* Node::searchNode(int nodeIndex)
{
    if(this->index == nodeIndex)
    {
	//cout<<"index:"<<index<<endl;
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

void Node::deleteNode()
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
    cout<<this->index<<","<<this->data<<","<<this<<endl;
}

void Node::preOrderTraverse()
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

void Node::inOrderTraverse()
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

void Node::postOrderTraverse()
{
    if(this == NULL)
    {
	cout<<"this is empty tree";
	return;
    }
    if(this->pLChild != NULL)
    {
	this->pLChild->postOrderTraverse();
    }
    if(this->pRChild != NULL)
    {
	this->pRChild->postOrderTraverse();
    }
    cout<<this->index<<"\t"<<this->data<<"\t"<<this<<endl;
}


void Node::setIndex(int index)
{
    this->index = index;
}

int Node::getIndex()
{
    return this->index;
}

void Node::setData(int data)
{
    this->data = data;
}

int Node::getData()
{
    return this->data;
}

void Node::setLChild(Node *pLChild)
{
    this->pLChild = pLChild;
}

Node* Node::getLChild()
{
    return this->pLChild;
}

void Node::setRChild(Node *pRChild)
{
    this->pRChild = pRChild;
}

Node* Node::getRChild()
{
    return this->pRChild;
}

void Node::setParent(Node *pParent)
{
    this->pParent = pParent;
}

Node* Node::getParent()
{
    return this->pParent;
}
#endif
