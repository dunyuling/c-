#include "Tree.h"
#include "Coordinate.h"
#include "Node.h"

int main()
{
    Coordinate root(3,3);
    const Coordinate zeroNode(0,0);
    Tree<Coordinate> *pTree = new Tree<Coordinate>(10,&root,&zeroNode);

    Coordinate node1(5,5);
    Coordinate node2(8,8);
    pTree->addNode(0,0,&node1);
    pTree->addNode(0,1,&node2);

    Coordinate node3(2,2);
    Coordinate node4(6,6);
    pTree->addNode(1,0,&node3);
    pTree->addNode(1,1,&node4);

    Coordinate node5(9,9);
    Coordinate node6(7,7); 
    pTree->addNode(2,0,&node5);
    pTree->addNode(2,1,&node6);

    Coordinate(10, 10);
    bool b6 =  pTree->addNode(2,1,&node6);
    cout<<"b6:"<<b6<<endl;

    pTree->treeTraverse();

    Coordinate *pSearch = pTree->searchNode(2);
    cout<<"pSearch:"<<*pSearch<<endl;  

    cout<<endl;
    Coordinate deleteNode(0,0); 
    pTree->deleteNode(1,&deleteNode,&zeroNode);
    cout<<"deleteNode:"<<deleteNode<<endl;
    pTree->treeTraverse();
    
    delete pTree;
    pTree = NULL;
    return 0;
}
