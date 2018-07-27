#ifndef NODE_H
#define NODE_H

template <typename Any>
class Node
{
public:
    Node();
    ~Node();
private:
    Any data;
    Node<Any> *next;
};

#endif
