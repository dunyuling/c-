#include "List.h"
#include "Node.h" 
#include "Coordinate.h"
#include <iostream>
using namespace std;

int main()
{
    List<Coordinate> *pList = new List<Coordinate>();
    

    Coordinate coor1(1,1);
    Node<Coordinate> node1;
    node1.setData(coor1);
    bool b1 =pList->listInsertHead(&node1);
    cout<<"b1:"<<b1<<endl; 

    Coordinate coor2(2,2);
    Node<Coordinate> node2;
    node2.setData(coor2);
    bool b2 =  pList->listInsertHead(&node2);
    cout<<"b2:"<<b2<<endl; 
    
    Coordinate coor3(3,3);
    Node<Coordinate> node3;
    node3.setData(coor3);
    bool b3 = pList->listInsertHead(&node3);
    cout<<"b3:"<<b3<<endl;
   
    Coordinate coor4(4,4);
    Node<Coordinate> node4;
    node4.setData(coor4);
    bool b4 = pList->listInsertTail(&node4);
    cout<<"b4:"<<b4<<endl;

    Coordinate coor5(5,5);
    Node<Coordinate> node5;
    node5.setData(coor5);
    bool b5 = pList->listInsert(5,&node5);
    cout<<"b5:"<<b5<<endl;

    Node<Coordinate> temp;
    bool bd = pList->listDelete(3, &temp);
    cout<<"bd:"<<bd<<",temp:"<<temp.getData()<<endl;
    
    pList->listTraverse();
    cout<<endl;

    bool gd = pList->getElem(0,&temp);
    cout<<"gd:"<<gd<<",temp:"<<temp.getData()<<endl;
  
    temp.setData(coor5);
    int ld = pList->locateElem(&temp);
    cout<<"ld:"<<ld<<",temp:"<<temp.getData()<<endl;

    Node<Coordinate> pPreNode;
    temp.setData(coor2);
    int pd = pList->priorElem(&temp,&pPreNode);
    cout<<"pd:"<<pd<<",pPreNode:"<<pPreNode.getData()<<endl;
   

    Node<Coordinate> pNextNode;
    temp.setData(coor2);
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
