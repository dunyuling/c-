#include "CMap.h"
#include <iostream>
using namespace std;
/*
          A
        /   \
       B     D 
      / \   / \ 
     C   F G - H
      \ /
       E

   A B C D E F G H
A  0 1 0 1 0 0 0 0
B  1 0 1 0 0 1 0 0 
C  0 1 0 0 1 0 0 0
D  1 0 0 0 0 0 1 1
E  0 0 1 0 0 1 0 0 
F  0 1 0 0 1 0 0 0
G  0 0 0 1 0 0 0 1
H  0 0 0 1 0 0 1 0
*/
int main()
{
    CMap *pMap = new CMap(8);
    
    Node *pNodeA = new Node('A');
    Node *pNodeB = new Node('B');
    Node *pNodeC = new Node('C');
    Node *pNodeD = new Node('D');
    Node *pNodeE = new Node('E');
    Node *pNodeF = new Node('F');
    Node *pNodeG = new Node('G');
    Node *pNodeH = new Node('H');

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);
    pMap->addNode(pNodeG);
    pMap->addNode(pNodeH);

    pMap->setValueToMatrixForUndirectedGraph(0,1); 
    pMap->setValueToMatrixForUndirectedGraph(0,3); 
    pMap->setValueToMatrixForUndirectedGraph(1,0); 
    pMap->setValueToMatrixForUndirectedGraph(1,2); 
    pMap->setValueToMatrixForUndirectedGraph(1,5); 
    pMap->setValueToMatrixForUndirectedGraph(2,1); 
    pMap->setValueToMatrixForUndirectedGraph(2,4); 
    pMap->setValueToMatrixForUndirectedGraph(3,0); 
    pMap->setValueToMatrixForUndirectedGraph(3,6); 
    pMap->setValueToMatrixForUndirectedGraph(3,7); 
    pMap->setValueToMatrixForUndirectedGraph(4,2); 
    pMap->setValueToMatrixForUndirectedGraph(4,5); 
    pMap->setValueToMatrixForUndirectedGraph(5,1); 
    pMap->setValueToMatrixForUndirectedGraph(5,4); 
    pMap->setValueToMatrixForUndirectedGraph(6,3); 
    pMap->setValueToMatrixForUndirectedGraph(6,7); 
    pMap->setValueToMatrixForUndirectedGraph(7,3); 
    pMap->setValueToMatrixForUndirectedGraph(7,6); 
   
//    pMap->printMatrix();
    pMap->depthFirstTraverse(0);
    cout<<endl;
    pMap->resetNode();
    pMap->breadthFirstTraverse(0);
    cout<<endl;
    
    delete pMap;
    pMap = NULL;
    delete pNodeA;
    pNodeA = NULL;
    delete pNodeB;
    pNodeB = NULL;
    delete pNodeC;
    pNodeC = NULL;
    delete pNodeD;
    pNodeD = NULL;
    delete pNodeE;
    pNodeE = NULL;
    delete pNodeF;
    pNodeF = NULL;
    delete pNodeG;
    pNodeG = NULL;
    delete pNodeH;
    pNodeH = NULL;
    return 0;
}
