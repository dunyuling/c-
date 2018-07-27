#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    void setData(T data);
    T getData();
    void setNext(Node<T> *);
    Node<T>* getNext();
    void printNode();
private:
    T data;
    Node<T> *next;
};

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
void Node<T>::setNext(Node<T>* next)
{
    this->next = next;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
    return this->next;
}

template <typename T>
void Node<T>::printNode()
{
    cout<<"Node<T>::printNode():"<<this->data<<endl;
}
#endif
