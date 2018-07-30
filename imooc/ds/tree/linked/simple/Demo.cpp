#include "Tree.h"
#include "Node.h"

/*
                       (0)
          5(1)                    8(2)
     2(3)      6(4)            9(5)   7(6)
*/
int main()
{

    Tree *pTree = new Tree();
    
    Node *node1 = new Node();
    node1->setIndex(1);
    node1->setData(5); 
    pTree->addNode(0,0,node1);

    Node *node2 = new Node();
    node2->setIndex(2);
    node2->setData(8);
    pTree->addNode(0,1,node2);

    Node *node3 = new Node();
    node3->setIndex(3);
    node3->setData(2);
    pTree->addNode(1,0,node3);
    
    Node *node4 = new Node();
    node4->setIndex(4);
    node4->setData(6);
    pTree->addNode(1,1,node4);
  
    Node *node5 = new Node();
    node5->setIndex(5);
    node5->setData(9);
    pTree->addNode(2,0,node5);

    Node *node6 = new Node();
    node6->setIndex(6);
    node6->setData(7);
    pTree->addNode(2,1,node6);
    
   // pTree->preOrderTraverse();
    cout<<endl;
   
   // pTree->inOrderTraverse();
    cout<<endl;
    pTree->postOrderTraverse();
    cout<<"------------"<<endl;


    //TODO 删完根节点之后,真正的释放内存需要一段时间,所以删完根节点不要再进行任何业务操作,如何完善这块代码,尚需额外学习
    pTree->deleteNode(0,NULL);
    pTree->postOrderTraverse();
    cout<<endl;
    
    delete pTree; 
    return 0;
}
