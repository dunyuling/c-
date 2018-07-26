#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    Array arr(30);
    cout<<&arr<<endl;
  
    arr.printInfo2().setLen2(2).printInfo2();
    cout<<endl<<endl;
    arr.printInfo3().setLen3(3).printInfo3();
    cout<<endl<<endl;
    arr.printInfo4()->setLen4(4)->printInfo4();
    cout<<endl<<endl;
    return 0;
}
