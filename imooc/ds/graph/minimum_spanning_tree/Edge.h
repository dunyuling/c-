#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
    Edge(int m_iNodeIndexA=0,int m_iNodeIndexB=0, int m_iWeightValue=0);
    void setNodeIndexA(int m_iNodeIndexA);
    int getNodeIndexA();
    void setNodeIndexB(int m_iNodeIndexB);
    int getNodeIndexB();
    void setWeightValue(int m_iWeightValue);
    int getWeightValue();
    void setSelected(bool m_bSelected);
    bool isSelected();
private:
    int m_iNodeIndexA;
    int m_iNodeIndexB;  
    int m_iWeightValue;
    bool m_bSelected;
};
#endif
