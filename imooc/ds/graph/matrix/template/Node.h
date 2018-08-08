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
    void setData(T data);
    T getData();
    void setVisited(bool m_bIsVisited); 
    bool isVisited();
private:
    T data;
    bool m_bIsVisited; 
};

template <typename T>
Node<T>::Node()
{
    this->m_bIsVisited = false;
}

template <typename T>
Node<T>::~Node()
{
//    cout<<"~Node()"<<endl;
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
void Node<T>::setVisited(bool m_bIsVisited)
{
    this->m_bIsVisited = m_bIsVisited;
}

template <typename T>
bool Node<T>::isVisited()
{
    return m_bIsVisited;
}

#endif
