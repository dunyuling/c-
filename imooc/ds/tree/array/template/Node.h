#ifndef NODE_H
#define NODE_H

#include "Coordinate.h"

template <typename T>
class Node
{
public:
    Node();
    ~Node();
    void setData(T data);
    T getData();
private:
    T data;
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
#endif
