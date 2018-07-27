#include "List.h"
#include "Node.h"
#include <iostream>
using namespace std;

int main()
{
    List<int> *pList = new List<int>();
    

    Node<int> node1;
    node1.setData(2);
    Node<int> node2;
    node2.setData(3);
    Node<int> node3;
    node3.setData(4);
    bool b1 =pList->listInsertHead(&node1);
    cout<<"b1:"<<b1<<endl; 
    bool b2 =  pList->listInsertHead(&node2);
    cout<<"b2:"<<b2<<endl; 
    bool b3 = pList->listInsertHead(&node3);
    cout<<"b3:"<<b3<<endl;
   
    Node<int> node4;
    node4.setData(5);
    bool b4 = pList->listInsertTail(&node4);
    cout<<"b4:"<<b4<<endl;

    Node<int> node5;
    node5.setData(6);
    bool b5 = pList->listInsert(5,&node5);
    cout<<"b5:"<<b5<<endl;

    Node<int> temp;
    bool bd = pList->listDelete(3, &temp);
    cout<<"bd:"<<bd<<",temp:"<<temp.getData()<<endl;
    
    pList->listTraverse();
    cout<<endl;

    bool gd = pList->getElem(0,&temp);
    cout<<"gd:"<<gd<<",temp:"<<temp.getData()<<endl;
  
    temp.setData(5);
    int ld = pList->locateElem(&temp);
    cout<<"ld:"<<ld<<",temp:"<<temp.getData()<<endl;

    Node<int> pPreNode;
    temp.setData(5);
    int pd = pList->priorElem(&temp,&pPreNode);
    cout<<"pd:"<<pd<<",pPreNode:"<<pPreNode.getData()<<endl;
   
    Node<int> pNextNode;
    temp.setData(5);
    int nd = pList->nextElem(&temp, &pNextNode);
    cout<<"nd:"<<nd<<",pNextNode:"<<pNextNode.getData()<<endl;

    bool ed = pList->listEmpty();
    cout<<"ed:"<<ed<<endl;
    int il = pList->listLength();
    cout<<"il:"<<il<<endl;
    pList->clearList();
    ed = pList->listEmpty();
    cout<<"ed:"<<ed<<endl;
    il = pList->listLength();
    cout<<"il:"<<il<<endl;
   
    
    delete pList;
    pList = NULL;
    return 0;
}
