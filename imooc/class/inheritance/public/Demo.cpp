#include "Worker.h"

int main()
{
    //heap
    /*
    Worker *p = new Worker();
    p->m_strName = "Jim";
    p->m_iAge = 10;
    p->eat();
    p->m_iSalary = 100000;
    p->work();
    delete p;
    p=NULL;
    */

    Worker worker;
    worker.m_strName = "Jim";
    worker.m_iAge = 10;
    worker.eat();
    worker.m_iSalary = 100000;
    worker.work();
   
    return 0;
} 
