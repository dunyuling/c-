#include "Person.h"
#include "Worker.h"
#include "Dustman.h"

int main()
{
    //abstract class cannot instantiate : next 2
    /*
    Person *p = new Person("lx");
    p->work();

    delete p;
    p = NULL;
    */
    //Worker w("lx",32);

    Dustman dustman("lx",32);
    dustman.work();
    return 0;
}
