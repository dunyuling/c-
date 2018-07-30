#include "Tree.h"
#include "Node.h"

/*
                       (0)
          5(1)                    8(2)
     2(3)      6(4)            9(5)   7(6)
*/
int main()
{

    Tree<int> *pTree = new Tree<int>();
    
    Node<int> *node1 = new Node<int>();
    node1->setIndex(1);
    node1->setData(5); 
    pTree->addNode(0,0,node1);

    Node<int> *node2 = new Node<int>();
    node2->setIndex(2);
    node2->setData(8);
    pTree->addNode(0,1,node2);

    Node<int> *node3 = new Node<int>();
    node3->setIndex(3);
    node3->setData(2);
    pTree->addNode(1,0,node3);
    
    Node<int> *node4 = new Node<int>();
    node4->setIndex(4);
    node4->setData(6);
    pTree->addNode(1,1,node4);
  
    Node<int> *node5 = new Node<int>();
    node5->setIndex(5);
    node5->setData(9);
    pTree->addNode(2,0,node5);

    Node<int> *node6 = new Node<int>();
    node6->setIndex(6);
    node6->setData(7);
    pTree->addNode(2,1,node6);
    
   // pTree->preOrderTraverse();
   
   // pTree->inOrderTraverse();

//    pTree->deleteNode(2,NULL);
    pTree->postOrderTraverse();
    cout<<endl;
    
    delete pTree; 
    return 0;
}
