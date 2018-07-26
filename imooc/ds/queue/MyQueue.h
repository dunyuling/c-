#ifndef _MyQueue_H_ 
#define _MyQueue_H_ 
class MyQueue 
{
public:
    MyQueue(int queueCapacity); //InitQueue(&Q)
    virtual ~MyQueue();         //DestroyQueue(&Q)
    void clearQueue();          //ClearQueue(&Q) 
    bool queueEmpty() const;    //QueueEmpty(Q)
    int queueLength() const;    //QueueLength(Q)
    bool queueFull() const;     //QueueFull(Q) 
    bool enQueue(int element);  //EnQueue(&Q,element)
    bool deQueue(int &element); //DeQueue(&Q,&element);    
    void queueTraverse();       //QueueTraverse(Q,visit())
private:
    int *m_pQueue;
    int m_iQueueLen;
    int m_iQueueCapacity;
    int m_iHead;
    int m_iTail;
};
#endif
