#include "Edge.h"




Edge::Edge(int m_iNodeIndexA,int m_iNodeIndexB, int m_iWeightValue)
{
    this->m_iNodeIndexA = m_iNodeIndexA;
    this->m_iNodeIndexB = m_iNodeIndexB;
    this->m_iWeightValue = m_iWeightValue;
    this->m_bSelected = false;
}

void Edge::setNodeIndexA(int m_iNodeIndexA)
{
    this->m_iNodeIndexA = m_iNodeIndexA;
}

int Edge::getNodeIndexA()
{
    return m_iNodeIndexA;
}

void Edge::setNodeIndexB(int m_iNodeIndexB)
{
    this->m_iNodeIndexB = m_iNodeIndexB;
}

int Edge::getNodeIndexB()
{
    return m_iNodeIndexB;
}

void Edge::setWeightValue(int m_iWeightValue)
{
    this->m_iWeightValue = m_iWeightValue;
}

int Edge::getWeightValue()
{
    return m_iWeightValue;
}

void Edge::setSelected(bool m_bSelected)
{
    this->m_bSelected = m_bSelected;
}

bool Edge::isSelected()
{
    return m_bSelected;
}
