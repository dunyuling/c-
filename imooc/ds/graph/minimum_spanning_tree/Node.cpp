#include "Node.h"

Node::Node(char m_cData)
{
    this->m_cData = m_cData;
    this->m_bIsVisited = false;
}

void Node::setData(char m_cData)
{
    this->m_cData = m_cData;
}

char Node::getData()
{
    return this->m_cData;
}

void Node::setVisited(bool m_bIsVisited)
{
    this->m_bIsVisited = m_bIsVisited;
}

bool Node::isVisited()
{
    return m_bIsVisited;
}

