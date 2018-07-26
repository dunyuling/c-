#include "Flyable.h"
#include "Plane.h"
#include "FighterPlane.h"

void flyMatch(Flyable *f1,Flyable *f2)
{
    f1->takeoff();
    f1->land();
    f2->takeoff();
    f2->land();
}

int main()
{
    /*
    Plane p1("001");
    Plane p2("002");
    p1.printCode();
    p2.printCode();

    flyMatch(&p1,&p2);
    */
    
    Plane *p1 = new FighterPlane("001");
    Plane *p2 = new FighterPlane("002");
    p1->printCode();
    p2->printCode();
 
    flyMatch(p1,p2);

    delete p1 ;
    p1 = NULL;
    delete p2;
    p2 = NULL;
    return 0;  
}
