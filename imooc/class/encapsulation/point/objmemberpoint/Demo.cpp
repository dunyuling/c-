#include "Line.h"
#include <iostream>
using namespace std;

int main()
{
    Line *p = new Line(1,2,3,4);
    
    p->printInfo();
    cout<<sizeof(p)<<endl;
    cout<<sizeof(Line)<<endl;

    delete p;
    p = NULL;
    return 0;
}
