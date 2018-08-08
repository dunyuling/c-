/*
           A
         / | \ 
        B--F--E
         \ /\ /
          C--D

    A B C D E F
    0 1 2 3 4 5

    A-B 6  A-E 5  A-F 1
    B-C 3  B-F 2 
    C-F 8  C-D 7
    D-F 4  D-E 2
    E-F 9 

*/

#include "Node.h"
#include "CMap.h"

int main()
{
    CMap<char> *pMap = new CMap<char>(6); 
	
    Node<char> *pNodeA = new Node<char>();
    pNodeA->setData('A');
    Node<char> *pNodeB = new Node<char>();
    pNodeB->setData('B');
    Node<char> *pNodeC = new Node<char>();
    pNodeC->setData('C');
    Node<char> *pNodeD = new Node<char>();
    pNodeD->setData('D');
    Node<char> *pNodeE = new Node<char>();
    pNodeE->setData('E');
    Node<char> *pNodeF = new Node<char>();
    pNodeF->setData('F');

    pMap->addNode(pNodeA);
    pMap->addNode(pNodeB);
    pMap->addNode(pNodeC);
    pMap->addNode(pNodeD);
    pMap->addNode(pNodeE);
    pMap->addNode(pNodeF);
   
    pMap->setValueToMatrixForUndirectedGraph(0,1,6);
    pMap->setValueToMatrixForUndirectedGraph(0,4,5);
    pMap->setValueToMatrixForUndirectedGraph(0,5,1);
    pMap->setValueToMatrixForUndirectedGraph(1,2,3);
    pMap->setValueToMatrixForUndirectedGraph(1,5,2);
    pMap->setValueToMatrixForUndirectedGraph(2,5,8);
    pMap->setValueToMatrixForUndirectedGraph(2,3,7);
    pMap->setValueToMatrixForUndirectedGraph(3,5,4);
    pMap->setValueToMatrixForUndirectedGraph(3,4,2);
    pMap->setValueToMatrixForUndirectedGraph(4,5,9);

    
//    pMap->primTree(0);
    pMap->kruskalTree();

    return 0;
}
