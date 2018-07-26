#include "Tank.h" 
#include <iostream>
using namespace std;

int main()
{
//    cout<<Tank::getCount()<<endl; 
    Tank *t1 = new Tank('a');
    cout<<Tank::getCount()<<endl;
    cout<<t1->getCount()<<endl;

    delete t1;
    t1 = NULL;
    cout<<Tank::getCount()<<endl;
//    cout<<t1->getCount()<<endl; //这里应该是错误的,可是编译器却没有检查出来
    return 0;
}
