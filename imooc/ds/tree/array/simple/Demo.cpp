#include "Tree.h"



int main()
{
    int root = 3;
    Tree *pTree = new Tree(10,&root);

    int node1 = 5;
    int node2 = 8;
    pTree->addNode(0,0,&node1);
    pTree->addNode(0,1,&node2);

    int node3 = 2;
    int node4 = 6;
    pTree->addNode(1,0,&node3);
    pTree->addNode(1,1,&node4);

    int node5 = 9;
    int node6 = 7; 
    pTree->addNode(2,0,&node5);
    pTree->addNode(2,1,&node6);

    node6 = 10;
    bool b6 =  pTree->addNode(2,1,&node6);
    cout<<"b6:"<<b6<<endl;

    pTree->treeTraverse();

    int *pSearch = pTree->searchNode(2);
    cout<<"pSearch:"<<*pSearch<<endl;  

    cout<<endl;
    int deleteNode=0;
    pTree->deleteNode(1,&deleteNode);
    cout<<"deleteNode:"<<deleteNode<<endl;
    pTree->treeTraverse();
    
    delete pTree;
    pTree = NULL;
    return 0;
}
