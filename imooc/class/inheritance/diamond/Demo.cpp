#include "MigrantWorker.h"
#include "Farmer.h"
#include <iostream>
//using namespace std;


int main()
{
    //note:"Y"并不能够传递到Person对象
    MigrantWorker *p = new MigrantWorker("lx","100","Y");
    cout<<endl;
    p->Farmer::printColor();
    cout<<endl;
    p->Worker::printColor();
    cout<<endl;
    p->printColor();
    cout<<endl;
    delete p;
    p = NULL;

    cout<<endl<<"------"<<endl;
    Farmer *f = new Farmer("ll","Y");
    cout<<endl;
    f->printColor();
    cout<<endl;
    delete f;
    f = NULL;
    return 0;
}
