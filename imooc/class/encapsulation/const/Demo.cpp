#include "Line.h"
#include <iostream>
using namespace std;

int main()
{
    const Line *p = new Line(1,2,3,4);
    p->printInfo();
    delete p;
    p = NULL;
    return 0;
}
