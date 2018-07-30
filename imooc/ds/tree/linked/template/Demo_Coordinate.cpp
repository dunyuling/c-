#include "Tree.h"
#include "Node.h"
#include "Coordinate.h"

/*
                       (0)
          5(1)                    8(2)
     2(3)      6(4)            9(5)   7(6)
*/
int main()
{

    Tree<Coordinate> *pTree = new Tree<Coordinate>();
    
/*
    Node<Coordinate> *node1 = new Node<Coordinate>();
    node1->setIndex(1);
    Coordinate coor1(5,5);
    node1->setData(coor1); 
    pTree->addNode(0,0,node1);

    Node<Coordinate> *node2 = new Node<Coordinate>();
    node2->setIndex(2);
    Coordinate coor2(8,8);
    node2->setData(coor2);
    pTree->addNode(0,1,node2);

    Node<Coordinate> *node3 = new Node<Coordinate>();
    node3->setIndex(3);
    Coordinate coor3(2,2);
    node3->setData(coor3);
    pTree->addNode(1,0,node3);
    
    Node<Coordinate> *node4 = new Node<Coordinate>();
    node4->setIndex(4);
    Coordinate coor4(6,6);
    node4->setData(coor4);
    pTree->addNode(1,1,node4);
  
    Node<Coordinate> *node5 = new Node<Coordinate>();
    node5->setIndex(5);
    Coordinate coor5(9,9);
    node5->setData(coor5);
    pTree->addNode(2,0,node5);

    Node<Coordinate> *node6 = new Node<Coordinate>();
    node6->setIndex(6);
    Coordinate coor6(7,7);
    node6->setData(coor6);
    pTree->addNode(2,1,node6);
    
   // pTree->preOrderTraverse();
   
   // pTree->inOrderTraverse();


//    pTree->deleteNode(2,NULL);
    pTree->postOrderTraverse();
*/    
    delete pTree; 
    return 0;
}
