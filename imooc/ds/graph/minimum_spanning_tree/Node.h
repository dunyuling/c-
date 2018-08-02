#ifndef NODE_H
#define NODE_H

class Node
{
public:
    Node(char m_cData=0);
    void setData(char m_cData);
    char getData();
    void setVisited(bool m_bIsVisited); 
    bool isVisited();
private:
    char m_cData;
    bool m_bIsVisited; 
};
#endif
