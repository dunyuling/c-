#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    
    Array arr1(1);
    
    cout<<endl;
    Array arr2 = arr1;
    cout<<arr2.getCount()<<endl;
    arr1.printAddr();
    arr2.printAddr();
  

    /*
    int *p = new int[3];
    delete []p;
    p = NULL;
    delete []p;
    p = NULL;
    */
    return 0; 
}
