#include "Flyable.h"
#include "Bird.h" 
#include "Plane.h"
#include <typeinfo>
#include <iostream>
using namespace std;

void doSomething(Flyable *obj)
{
    cout<<typeid(*obj).name()<<endl;
    obj->takeoff();
    if(typeid(*obj) == typeid(Bird))
    {
	Bird *bird = dynamic_cast<Bird*>(obj);
        bird->foraging();
    }
    if(typeid(*obj) == typeid(Plane))
    {
	Plane *plane = dynamic_cast<Plane*>(obj);
        plane->carry();
    }
    obj->land();
}

void doSomething2(Flyable &obj)
{
    cout<<typeid(obj).name()<<endl;
    obj.takeoff();
    if(typeid(obj) == typeid(Bird))
    {
        Bird& bird = dynamic_cast<Bird&>(obj);
        bird.foraging();
    }
    if(typeid(obj) == typeid(Plane))
    {
        Plane& plane = dynamic_cast<Plane&>(obj);
        plane.carry();
    }
    obj.land();
}


int main()
{
    /*
    Plane *p1 = new Plane();
    Bird *b1 = new Bird();

    //doSomething(p1);
    //doSomething(p2);
    doSomething2(*p1);
    doSomething2(*b1);
    delete p1;
    p1 = NULL;
    delete b1;
    b1 = NULL;    
    */

   

    /*
    double i = 0;
    cout<<typeid(i).name()<<endl; 
    
    Flyable *f = new Bird();
    cout<<"1:"<<typeid(f).name()<<endl;
    cout<<"2:"<<typeid(*f).name()<<endl; 

    //内存泄漏了 memory leak
    delete f;
    f = NULL;
    */

    Flyable *p = new Bird();
    //通过这种转换可以解决上面的内存泄漏问题
    Bird *b = (Bird*)(p);
    dynamic_cast<Bird*>(p); 
    cout<<"b:"<<b<<endl;
    cout<<"p:"<<p<<endl;

    delete b; 
    b = NULL;
    return 0;

}

